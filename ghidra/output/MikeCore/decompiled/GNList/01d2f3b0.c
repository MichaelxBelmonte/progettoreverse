// Function: FUN_01d2f3b0
// Address: 01d2f3b0
// Size: 652 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01d2f5cd) */
/* WARNING: Removing unreachable block (ram,0x01d2f5da) */
/* WARNING: Removing unreachable block (ram,0x01d2f581) */

void FUN_01d2f3b0(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_40;
  char local_38;
  
  FUN_01d28610();
  if (local_40 != (longlong *)0x0) {
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0) {
      FUN_01d28610();
      lVar4 = *(longlong *)(unaff_RDI + 0x10);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*local_40 + 0x488))();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (*(char *)(unaff_RDI + 0x9b) != '\0') {
    FUN_01d28610();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      lVar4 = *(longlong *)(unaff_RDI + 0x10);
      if (*(int *)(lVar4 + 0xc) < 1) {
        bVar2 = false;
        plVar7 = (longlong *)0x0;
      }
      else {
        lVar5 = 0;
        bVar2 = false;
        plVar6 = (longlong *)0x0;
        do {
          (**(code **)(**(longlong **)(*(longlong *)(lVar4 + 0x10) + lVar5 * 8) + 0x60))();
          if (local_40 == plVar6) {
            if ((bVar2) || (local_40 == (longlong *)0x0)) {
joined_r0x01d2f569:
              plVar7 = plVar6;
              bVar3 = bVar2;
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              plVar7 = plVar6;
              bVar3 = true;
              if (local_38 == '\0') {
                FUN_00d50b00();
                goto LAB_01d2f555;
              }
            }
          }
          else {
            plVar7 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              if ((bVar2) && (plVar6 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar6 = local_40;
LAB_01d2f555:
                bVar2 = true;
                goto joined_r0x01d2f569;
              }
            }
            else {
              bVar3 = true;
              if ((bVar2) && (plVar6 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          bVar2 = bVar3;
          if (plVar7 != (longlong *)0x0) {
            local_38 = '\0';
            FUN_00d21140();
            local_40 = plVar7;
          }
          lVar5 = lVar5 + 1;
          lVar4 = *(longlong *)(unaff_RDI + 0x10);
          plVar6 = plVar7;
        } while (lVar5 < *(int *)(lVar4 + 0xc));
      }
      FUN_01d2a8f0();
      if (!bVar2) {
        return;
      }
      if (plVar7 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  if (*(char *)(unaff_RDI + 0x9c) != '\0') {
    FUN_01d2a8f0();
  }
  return;
}


