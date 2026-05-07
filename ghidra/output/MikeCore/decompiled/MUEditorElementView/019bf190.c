// Function: FUN_019bf190
// Address: 019bf190
// Size: 588 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019bf362) */
/* WARNING: Removing unreachable block (ram,0x019bf36b) */
/* WARNING: Removing unreachable block (ram,0x019bf3a7) */
/* WARNING: Removing unreachable block (ram,0x019bf3b0) */
/* WARNING: Removing unreachable block (ram,0x019bf299) */
/* WARNING: Removing unreachable block (ram,0x019bf2a5) */

void FUN_019bf190(void)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar5;
  int iVar6;
  longlong local_98;
  char local_90;
  
  plVar4 = *(longlong **)(unaff_RDI + 0x2c8);
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar4 == plVar1) {
    return;
  }
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    plVar4 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) goto LAB_019bf1e8;
LAB_019bf214:
    if (plVar4 != (longlong *)0x0) goto LAB_019bf21d;
LAB_019bf2b8:
    bVar3 = false;
    local_98 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x418))();
    plVar4 = *(longlong **)(unaff_RDI + 0x2c8);
    plVar5 = plVar4;
    plVar1 = (longlong *)*unaff_RSI;
    if (plVar4 == (longlong *)*unaff_RSI) goto LAB_019bf214;
LAB_019bf1e8:
    plVar4 = plVar1;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *(longlong **)(unaff_RDI + 0x2c8) = plVar4;
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar4 = *(longlong **)(unaff_RDI + 0x2c8);
      goto LAB_019bf214;
    }
    if (plVar4 == (longlong *)0x0) goto LAB_019bf2b8;
LAB_019bf21d:
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x410))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x2c8) + 0x388))();
    if (local_98 == 0) {
      bVar3 = false;
      lVar2 = *(longlong *)(unaff_RDI + 0x250);
      goto joined_r0x019bf2c7;
    }
    bVar3 = true;
    if (local_90 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar2 = *(longlong *)(unaff_RDI + 0x250);
joined_r0x019bf2c7:
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      iVar6 = 0;
      do {
        FUN_01981860();
        FUN_01983f50();
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0xc));
    }
    FUN_01a01cb0();
  }
  FUN_01e4ac90();
  if ((bVar3) && (local_98 != 0)) {
    FUN_00d50b20();
  }
  return;
}


