// Function: FUN_01cb6940
// Address: 01cb6940
// Size: 770 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01cb6bb2) */
/* WARNING: Removing unreachable block (ram,0x01cb6bbb) */
/* WARNING: Removing unreachable block (ram,0x01cb6a36) */
/* WARNING: Removing unreachable block (ram,0x01cb6a3f) */

undefined8 * FUN_01cb6940(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  longlong local_98;
  char local_90;
  longlong local_78;
  char local_70;
  longlong *local_40;
  char local_38;
  
  plVar4 = local_40;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_01cb6e70();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (local_40 == (longlong *)0x0) {
    *unaff_RDI = puVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    if (0 < *(int *)((longlong)local_40 + 0xc)) {
      lVar9 = 0;
      do {
        plVar5 = local_40;
        plVar1 = *(longlong **)(plVar4[2] + lVar9 * 8);
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        cVar6 = (**(code **)(*plVar1 + 0x3a0))();
        if (cVar6 != '\0') {
          (**(code **)(*plVar1 + 1000))();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
              goto LAB_01cb6a48;
            }
          }
          else if (local_40 != (longlong *)0x0) {
LAB_01cb6a48:
            if (0 < *(int *)((longlong)local_40 + 0xc)) {
              lVar8 = 0;
              do {
                plVar2 = *(longlong **)(plVar5[2] + lVar8 * 8);
                if (plVar2 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                cVar6 = (**(code **)(*plVar2 + 0x3a0))();
                if (cVar6 != '\0') {
                  (**(code **)(*plVar2 + 0x368))();
                  plVar3 = DAT_027ede18;
                  if (local_40 == (longlong *)0x0) {
                    cVar6 = '\0';
                  }
                  else {
                    if (DAT_027ede18 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    (**(code **)(*plVar2 + 0x368))();
                    FUN_00d8ed10();
                    if (local_70 == '\0') {
                      if (local_78 != 0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_70 = '\0';
                    }
                    cVar6 = (**(code **)(*plVar3 + 0x50))();
                    if (local_78 != 0) {
                      FUN_00d50b20();
                    }
                    if ((local_70 != '\0') && (local_78 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_90 != '\0') && (local_98 != 0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar6 != '\0') {
                    local_38 = '\0';
                    FUN_00d21140();
                    local_40 = plVar2;
                  }
                }
                FUN_00d50b20();
                lVar8 = lVar8 + 1;
              } while (lVar8 < *(int *)((longlong)plVar5 + 0xc));
            }
            FUN_00d50b20();
          }
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((longlong)plVar4 + 0xc));
    }
    *unaff_RDI = puVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return unaff_RDI;
}


