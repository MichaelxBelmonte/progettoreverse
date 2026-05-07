// Function: FUN_01cdab30
// Address: 01cdab30
// Size: 1203 bytes
// Class: GNDictionary


undefined8 * FUN_01cdab30(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  ulonglong local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  
  local_108 = *param_2;
  local_98 = param_2;
  if (local_108 == 0) {
    FUN_01d51d50();
  }
  else {
    local_100 = '\0';
    FUN_01cdb540(param_1,&local_108);
    plVar1 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) {
      local_40 = plVar1;
      lVar5 = *(longlong *)(unaff_RSI + 0x50);
      if (*(int *)(lVar5 + 0xc) < 1) {
        local_58 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
      }
      else {
        local_58 = CONCAT71((int7)((ulonglong)DAT_025908a0 >> 8),1);
        lVar7 = 0;
        do {
          plVar1 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + lVar7 * 8);
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar6 = (longlong *)*local_98;
          (**(code **)(*plVar1 + 0x390))();
          plVar2 = local_50;
          local_88 = 0;
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_88 = '\x01';
          local_90 = plVar2;
          cVar3 = (**(code **)(*plVar6 + 0x50))();
          uVar8 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
          if (cVar3 == '\0') {
            plVar6 = (longlong *)*local_98;
            (**(code **)(*plVar1 + 0x388))();
            local_80 = local_a8;
            local_78 = 0;
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_a0 = '\0';
            }
            local_78 = '\x01';
            uVar4 = (**(code **)(*plVar6 + 0x50))();
            uVar8 = (ulonglong)uVar4;
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar8 != '\0') {
            plVar6 = (longlong *)FUN_00e8fc40();
            FUN_00152930();
            (**(code **)(*plVar6 + 0x18))();
            uVar9 = local_58;
            if (plVar6 == local_40) {
              if ((char)local_58 == '\0') {
                uVar9 = CONCAT71((int7)(local_58 >> 8),1);
                plVar6 = local_40;
              }
              else {
                FUN_00d50b20();
                plVar6 = local_40;
              }
            }
            else {
              uVar9 = CONCAT71((int7)(uVar8 >> 8),1);
              if (((char)local_58 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            local_f0 = '\0';
            local_f8 = plVar1;
            local_40 = plVar6;
            FUN_01d523b0();
            if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
              local_d8 = *local_98;
              local_d0 = '\0';
              FUN_01d52610();
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              local_c8 = local_40;
              local_c0 = '\0';
              local_b8 = *local_98;
              local_b0 = '\0';
              FUN_01cdb5f0();
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              *unaff_RDI = local_40;
              *(undefined1 *)(unaff_RDI + 1) = 1;
              FUN_00d50b20();
              FUN_00d50b20();
              return unaff_RDI;
            }
            local_40 = (longlong *)0x0;
            local_58 = uVar9 & 0xffffffff;
          }
          FUN_00d50b20();
          lVar7 = lVar7 + 1;
          lVar5 = *(longlong *)(unaff_RSI + 0x50);
        } while (lVar7 < *(int *)(lVar5 + 0xc));
      }
      if (local_40 == (longlong *)0x0) {
        FUN_01d51d50();
        cVar3 = (char)local_58;
        local_40 = local_50;
        if (local_50 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
        }
        else {
          cVar3 = '\x01';
          if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
             (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        cVar3 = (char)local_58;
      }
      plVar1 = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (cVar3 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RDI = plVar1;
      }
      else {
        *unaff_RDI = local_40;
      }
    }
    else {
      *unaff_RDI = plVar1;
    }
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


