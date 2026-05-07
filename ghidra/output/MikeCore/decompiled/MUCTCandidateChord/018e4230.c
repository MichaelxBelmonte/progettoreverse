// Function: FUN_018e4230
// Address: 018e4230
// Size: 1327 bytes
// Class: MUCTCandidateChord


/* WARNING: Removing unreachable block (ram,0x018e4738) */
/* WARNING: Removing unreachable block (ram,0x018e4744) */

void FUN_018e4230(void)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int unaff_ESI;
  longlong *unaff_RDI;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(*unaff_RDI + 0xc);
  if (1 < (int)uVar1) {
    plVar4 = *(longlong **)(*unaff_RDI + 0x10);
    if (*(int *)(*plVar4 + 0x18) != unaff_ESI) {
      uVar5 = 1;
      do {
        if (*(int *)(plVar4[uVar5] + 0x18) == unaff_ESI) goto LAB_018e46e9;
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
    plVar4 = (longlong *)**(longlong **)(*(longlong *)(*(longlong *)(*plVar4 + 0x10) + 0x18) + 0x10)
    ;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_027c7de0;
    if (DAT_027c7de0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar4 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (cVar2 == '\0') {
      plVar4 = (longlong *)
               **(longlong **)
                 (*(longlong *)(*(longlong *)(**(longlong **)(*unaff_RDI + 0x10) + 0x10) + 0x18) +
                 0x10);
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027df400;
      if (DAT_027df400 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*plVar4 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (cVar2 == '\0') {
        plVar4 = (longlong *)
                 **(longlong **)
                   (*(longlong *)(*(longlong *)(**(longlong **)(*unaff_RDI + 0x10) + 0x10) + 0x18) +
                   0x10);
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        lVar3 = DAT_02781710;
        if (DAT_02781710 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*plVar4 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if ((cVar2 != '\0') && (lVar3 = *unaff_RDI, 1 < *(int *)(lVar3 + 0xc))) {
          uVar5 = 1;
          do {
            plVar4 = (longlong *)
                     **(longlong **)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar5 * 8) + 0x10) + 0x18) +
                       0x10);
            if (plVar4 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            lVar3 = DAT_027c7dd8;
            if (DAT_027c7dd8 != 0) {
              FUN_00d50b00();
            }
            cVar2 = (**(code **)(*plVar4 + 0x50))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar2 != '\0') {
              plVar4 = *(longlong **)(*unaff_RDI + 0x10);
              iVar6 = (unaff_ESI - *(int *)(*plVar4 + 0x18)) + 0xc;
              iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
              if ((iVar6 != 7) && (iVar6 != 4)) {
                return;
              }
              goto LAB_018e46e9;
            }
            uVar5 = uVar5 + 1;
            lVar3 = *unaff_RDI;
          } while ((longlong)uVar5 < (longlong)*(int *)(lVar3 + 0xc));
        }
      }
      else {
        lVar3 = *unaff_RDI;
        if (1 < *(int *)(lVar3 + 0xc)) {
          uVar5 = 1;
          do {
            plVar4 = (longlong *)
                     **(longlong **)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar5 * 8) + 0x10) + 0x18) +
                       0x10);
            if (plVar4 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            lVar3 = DAT_027c7de0;
            if (DAT_027c7de0 != 0) {
              FUN_00d50b00();
            }
            cVar2 = (**(code **)(*plVar4 + 0x50))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar2 != '\0') {
              plVar4 = *(longlong **)(*unaff_RDI + 0x10);
              iVar6 = (unaff_ESI - *(int *)(*plVar4 + 0x18)) + 0xc;
              if (iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc !=
                  10) {
                return;
              }
              goto LAB_018e46e9;
            }
            uVar5 = uVar5 + 1;
            lVar3 = *unaff_RDI;
          } while ((longlong)uVar5 < (longlong)*(int *)(lVar3 + 0xc));
        }
      }
    }
    else {
      lVar3 = *unaff_RDI;
      if (1 < *(int *)(lVar3 + 0xc)) {
        uVar5 = 1;
        do {
          plVar4 = (longlong *)
                   **(longlong **)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar5 * 8) + 0x10)
                       + 0x18) + 0x10);
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_027df400;
          if (DAT_027df400 != 0) {
            FUN_00d50b00();
          }
          cVar2 = (**(code **)(*plVar4 + 0x50))();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (cVar2 != '\0') {
            plVar4 = *(longlong **)(*unaff_RDI + 0x10);
            iVar6 = (unaff_ESI - *(int *)(*plVar4 + 0x18)) + 0xc;
            if (iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc != 3)
            {
              return;
            }
LAB_018e46e9:
            lVar3 = plVar4[uVar5 & 0xffffffff];
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            FUN_00d23620();
            FUN_00d23370();
            if (lVar3 == 0) {
              return;
            }
            FUN_00d50b20();
            return;
          }
          uVar5 = uVar5 + 1;
          lVar3 = *unaff_RDI;
        } while ((longlong)uVar5 < (longlong)*(int *)(lVar3 + 0xc));
      }
    }
  }
  return;
}


