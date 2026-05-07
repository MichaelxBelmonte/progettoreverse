// Function: FUN_00ca1d30
// Address: 00ca1d30
// Size: 1017 bytes
// Class: GNDictionary


void FUN_00ca1d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong local_c8;
  char local_c0;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  lVar1 = *(longlong *)(*unaff_RSI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
    uVar16 = 0;
    uVar14 = 0;
    if (*(int *)(lVar1 + 0xc) < 1) {
      uVar11 = 0;
      local_38 = 0;
      uVar4 = 0;
      lVar8 = 0;
    }
    else {
      lVar6 = 0;
      local_50 = 0;
      local_38 = 0;
      uVar10 = 0;
      lVar7 = 0;
      lVar13 = lVar1;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
        local_60 = 0;
        local_68 = lVar2;
        uVar3 = FUN_00c9fe40(param_1,&local_68,param_3,param_4,lVar13,uVar14,uVar16);
        lVar8 = local_48;
        uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar5 = (undefined7)((ulonglong)uVar3 >> 8);
        cVar9 = (char)uVar10;
        if (local_48 == local_38) {
          local_58 = uVar10;
          lVar8 = local_38;
          if ((cVar9 == '\0') && (local_48 != 0)) {
            local_58 = CONCAT71(uVar5,1);
            if (local_40 != '\0') goto LAB_00ca1f0e;
            local_58 = CONCAT71(uVar5,1);
            FUN_00d50b00();
            lVar8 = local_38;
          }
joined_r0x00ca1ee0:
          local_38 = lVar8;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != 0) {
              uVar3 = FUN_00d50b00();
            }
            local_58 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
            if ((cVar9 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x00ca1ee0;
          }
          local_58 = CONCAT71(uVar5,1);
          if ((cVar9 == '\0') || (local_38 == 0)) {
            local_38 = local_48;
          }
          else {
            FUN_00d50b20();
            local_38 = lVar8;
          }
        }
LAB_00ca1f0e:
        local_60 = '\0';
        local_68 = lVar2;
        FUN_00c9fe40(param_1,&local_68);
        lVar8 = local_48;
        uVar5 = (undefined7)(uVar10 >> 8);
        if (local_48 == lVar7) {
          lVar8 = lVar7;
          if (((char)local_50 != '\0') || (local_48 == 0)) {
            uVar4 = local_50 & 0xffffffff;
            goto joined_r0x00ca1fce;
          }
          uVar4 = CONCAT71(uVar5,1);
          if (local_40 == '\0') {
            FUN_00d50b00();
            goto LAB_00ca1fb6;
          }
        }
        else if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          uVar4 = CONCAT71(uVar5,1);
          if (((char)local_50 != '\0') && (lVar7 != 0)) {
            FUN_00d50b20();
            lVar7 = lVar8;
LAB_00ca1fb6:
            uVar4 = CONCAT71(uVar5,1);
            lVar8 = lVar7;
          }
joined_r0x00ca1fce:
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar4 = CONCAT71(uVar5,1);
          if (((char)local_50 != '\0') && (lVar7 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((lVar8 == 0) || (local_38 == 0)) {
LAB_00ca20c7:
          local_48 = local_38;
          local_40 = '\0';
          local_60 = '\0';
          local_68 = lVar2;
          FUN_00ca0840(param_1,&local_68);
          uVar11 = local_58;
        }
        else {
          FUN_00d4efa0();
          FUN_00d4efa0();
          if (local_48 == local_68) {
            FUN_00d4efa0();
            FUN_00d4efa0();
            bVar12 = local_88 == local_c8;
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar12 = false;
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar11 = local_58;
          if (!bVar12) goto LAB_00ca20c7;
          local_48 = local_38;
          local_40 = '\0';
          FUN_00ca1d30();
        }
        lVar6 = lVar6 + 1;
        uVar14 = CONCAT44(uVar15,(int)lVar6);
        uVar10 = uVar11 & 0xffffffff;
        lVar7 = lVar8;
        local_50 = uVar4;
      } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_00083b20();
    FUN_00d50b20();
    if (((char)uVar11 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (((char)uVar4 != '\0') && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


