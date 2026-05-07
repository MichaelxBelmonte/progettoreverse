// Function: FUN_01eb9990
// Address: 01eb9990
// Size: 711 bytes
// Class: GNModuleView


/* WARNING: Removing unreachable block (ram,0x01eb9bea) */
/* WARNING: Removing unreachable block (ram,0x01eb9bf7) */
/* WARNING: Removing unreachable block (ram,0x01eb99fe) */
/* WARNING: Removing unreachable block (ram,0x01eb9a07) */

undefined8 * FUN_01eb9990(void)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  int iVar7;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  FUN_01eb9dd0();
  if (local_48 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    FUN_01e5ca90();
    local_38 = local_48;
    if (local_48 == (longlong *)0x0) {
      bVar3 = true;
      local_38 = (longlong *)0x0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    (**(code **)(*plVar5 + 0x18))();
    (**(code **)(*plVar5 + 0x558))();
    (**(code **)(*plVar5 + 0x570))();
    cVar4 = FUN_01e3f2b0();
    if (cVar4 != '\0') {
      FUN_01e3f240();
    }
    (**(code **)(*local_38 + 0x4d8))();
    (**(code **)(*plVar5 + 0x4d0))();
    (**(code **)(*local_38 + 0x4a0))();
    iVar7 = *(int *)((longlong)local_48 + 0xc);
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if (iVar7 < 1) {
      plVar6 = (longlong *)0x0;
      bVar2 = false;
    }
    else {
      bVar2 = false;
      plVar6 = (longlong *)0x0;
      do {
        (**(code **)(*local_38 + 0x4a0))();
        plVar1 = *(longlong **)local_48[2];
        if (plVar6 == plVar1) {
          if ((!bVar2) && (plVar6 != (longlong *)0x0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar2 = true;
            plVar6 = plVar1;
          }
          else {
            bVar2 = true;
            plVar6 = plVar1;
          }
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar6 + 0x478))();
        (**(code **)(*plVar5 + 0x450))();
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*(char *)(unaff_RSI + 0x140) != '\0') {
      FUN_01e41810(*(undefined8 *)(unaff_RSI + 0x144));
    }
    *unaff_RDI = plVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar2) && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return unaff_RDI;
}


