// Function: FUN_01bbf570
// Address: 01bbf570
// Size: 955 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01bbf8cf) */
/* WARNING: Removing unreachable block (ram,0x01bbf8d8) */

longlong * FUN_01bbf570(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong *local_60;
  int local_54;
  longlong *local_48;
  char local_40 [12];
  undefined4 local_34;
  
  uVar5 = (**(code **)(*unaff_RSI + 0x3b0))();
  local_60 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_01bbf83e;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_54 = *(int *)((longlong)local_48 + 0xc);
  }
  else {
    if (local_48 == (longlong *)0x0) {
LAB_01bbf83e:
      local_54 = 0;
      local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      goto LAB_01bbf84a;
    }
    local_54 = *(int *)((longlong)local_48 + 0xc);
  }
  if (0 < local_54) {
    lVar8 = 1;
    lVar9 = 0;
    do {
      iVar1 = *(int *)(unaff_RSI[3] + 0xc);
      if (lVar9 < iVar1) {
        lVar2 = *(longlong *)(unaff_RSI[3] + 0x10);
        lVar3 = *(longlong *)(local_60[2] + lVar9 * 8);
        lVar4 = lVar8;
        if (*(longlong *)(*(longlong *)(lVar2 + lVar9 * 8) + 0x38) != lVar3) {
          do {
            lVar7 = lVar4;
            if (iVar1 <= lVar7) goto LAB_01bbf740;
            lVar4 = lVar7 + 1;
          } while (*(longlong *)(*(longlong *)(lVar2 + lVar7 * 8) + 0x38) != lVar3);
          if ((int)lVar7 < iVar1) {
            local_48 = *(longlong **)(lVar2 + -8 + (lVar7 + 1) * 8);
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d23620();
            local_40[0] = '\0';
            FUN_00d23370();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          else {
LAB_01bbf740:
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            FUN_01bbf390();
            local_48 = (longlong *)CONCAT71(uStack_6f,local_70);
            if (local_68 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_40[0] = '\0';
            FUN_00d23370();
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        lVar2 = *(longlong *)(local_60[2] + lVar9 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01bbf390();
        local_48 = (longlong *)CONCAT71(uStack_6f,local_70);
        if (local_68 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_40[0] = '\0';
        FUN_00d23370();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar9 < *(int *)((longlong)local_60 + 0xc));
  }
  local_34 = 0;
LAB_01bbf84a:
  while (lVar8 = unaff_RSI[3], local_54 < *(int *)(lVar8 + 0xc)) {
    FUN_00d23340();
    local_70 = local_40[0];
    pcVar6 = local_40;
    if (local_40[0] == '\0') {
      pcVar6 = &local_70;
    }
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_48 + 0x370))();
    if (local_70 != '\0') {
      FUN_00d50b20();
    }
    FUN_00d23740();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  FUN_00d50b00();
  *unaff_RDI = lVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


