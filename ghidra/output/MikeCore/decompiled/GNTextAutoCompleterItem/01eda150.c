// Function: FUN_01eda150
// Address: 01eda150
// Size: 751 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01eda382) */
/* WARNING: Removing unreachable block (ram,0x01eda38f) */

undefined8 * FUN_01eda150(void)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  ulonglong local_38;
  
  FUN_01ed7190();
  local_40 = local_50;
  if (local_50 == 0) {
    bVar3 = true;
    local_40 = 0;
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
    if ((*(int *)(local_40 + 0xc) != 0) && (*(longlong *)(unaff_RSI + 0x2a0) != 0)) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      local_58 = puVar4;
      if (*(int *)(local_40 + 0xc) < 1) {
        local_38 = 0;
        lVar9 = 0;
      }
      else {
        lVar10 = 0;
        lVar9 = 0;
        local_38 = 0;
        do {
          plVar1 = *(longlong **)(unaff_RSI + 0x2a0);
          FUN_00d50b00();
          lVar2 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar10 * 8);
          local_60 = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_60 = '\x01';
          local_68 = lVar2;
          uVar5 = (**(code **)(*plVar1 + 0x40))(&local_68,&stack0xffffffffffffff88);
          lVar8 = local_50;
          uVar7 = (undefined7)((ulonglong)lVar2 >> 8);
          if (local_50 == lVar9) {
            lVar8 = lVar9;
            if (((char)local_38 != '\0') || (local_50 == 0)) {
              uVar6 = local_38 & 0xffffffff;
              goto joined_r0x01eda2f9;
            }
            if (local_48 == '\0') {
              FUN_00d50b00();
              goto LAB_01eda310;
            }
LAB_01eda2a4:
            local_48 = '\0';
            local_38 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
            lVar9 = lVar8;
          }
          else {
            if (local_48 != '\0') {
              if (((char)local_38 != '\0') && (lVar9 != 0)) {
                uVar5 = FUN_00d50b20();
              }
              goto LAB_01eda2a4;
            }
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            uVar6 = CONCAT71(uVar7,1);
            if (((char)local_38 != '\0') && (lVar9 != 0)) {
              FUN_00d50b20();
              lVar9 = lVar8;
LAB_01eda310:
              uVar6 = CONCAT71(uVar7,1);
              lVar8 = lVar9;
            }
joined_r0x01eda2f9:
            lVar9 = lVar8;
            if ((local_48 == '\0') || (local_50 == 0)) {
              local_38 = uVar6 & 0xffffffff;
            }
            else {
              FUN_00d50b20();
              local_38 = uVar6 & 0xffffffff;
            }
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_RSI != 0) {
            FUN_00d50b20();
          }
          if (lVar9 != 0) {
            FUN_00d21140();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)(local_40 + 0xc));
      }
      *unaff_RDI = local_58;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      bVar3 = false;
      if (((char)local_38 != '\0') && (lVar9 != 0)) {
        FUN_00d50b20();
        bVar3 = false;
      }
      goto LAB_01eda3ec;
    }
    bVar3 = false;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01eda3ec:
  if (!bVar3) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


