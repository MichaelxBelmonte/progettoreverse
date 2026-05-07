// Function: FUN_00ca1d30
// Address: 00ca1d30
// Size: 1017 bytes
// Class: GNDictionary

void FUN_00ca1d30(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  undefined7 uVar5;
  uint64_t uVar4;
  int64_t *arg1;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  char cVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  bool bVar12;
  int64_t local_c8;
  char local_c0;
  int64_t lVar13;
  uint64_t uVar14;
  uint32_t uVar15;
  uint32_t uVar16;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  lVar1 = *(int64_t *)(*arg1 + 0x10);
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
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
        local_60 = 0;
        local_68 = lVar2;
        uVar3 = FUN_00c9fe40(param_1,&local_68,param_3,param_4,lVar13,uVar14,uVar16);
        lVar8 = local_48;
        uVar15 = (uint32_t)((uint64_t)uVar14 >> 0x20);
        uVar5 = (undefined7)((uint64_t)uVar3 >> 8);
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
            local_58 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
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

