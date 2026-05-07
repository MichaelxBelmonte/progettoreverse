// Function: FUN_000e2470
// Address: 000e2470
// Size: 513 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x000e2536) */
/* WARNING: Removing unreachable block (ram,0x000e253f) */

longlong * FUN_000e2470(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_68;
  char local_60;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x158);
  (**(code **)(*plVar1 + 0x368))();
  if ((*(longlong *)(unaff_RSI + 0x168) == 0) ||
     (lVar2 = *(longlong *)(*(longlong *)(unaff_RSI + 0x168) + 0x10), *(int *)(lVar2 + 0xc) < 1)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    lVar7 = 0;
    bVar4 = false;
    plVar8 = (longlong *)0x0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
      cVar6 = FUN_00518a70();
      plVar9 = plVar8;
      bVar5 = bVar4;
      if (cVar6 != '\0') {
        FUN_00537d80();
        cVar6 = FUN_00d24090();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          cVar6 = FUN_00bd22a0();
          if (cVar6 == '\0') {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (plVar3 != (longlong *)0x0) goto LAB_000e2646;
          }
          else {
            cVar6 = (**(code **)(*plVar3 + 0x390))();
            if (cVar6 == '\0') {
              if (plVar8 == plVar3) {
                if (!bVar4) {
                  FUN_00d50b00();
                  bVar5 = true;
                }
              }
              else {
                FUN_00d50b00();
                bVar5 = true;
                plVar9 = plVar3;
                if ((bVar4) && (plVar8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              goto LAB_000e24e0;
            }
            *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_000e2646:
            FUN_00d50b00();
          }
          *unaff_RDI = (longlong)plVar3;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((bVar4) && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_000e260d;
        }
      }
LAB_000e24e0:
      bVar4 = bVar5;
      lVar7 = lVar7 + 1;
      plVar8 = plVar9;
    } while (lVar7 < *(int *)(lVar2 + 0xc));
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar4) goto LAB_000e2603;
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_000e2603;
    }
  }
  plVar9 = (longlong *)0x0;
LAB_000e2603:
  *unaff_RDI = (longlong)plVar9;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_000e260d:
  (**(code **)(*plVar1 + 0x378))();
  return unaff_RDI;
}


