// Function: FUN_00385ce0
// Address: 00385ce0
// Size: 617 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00385e67) */
/* WARNING: Removing unreachable block (ram,0x00385dd4) */
/* WARNING: Removing unreachable block (ram,0x00385ddd) */
/* WARNING: Removing unreachable block (ram,0x00385ef0) */
/* WARNING: Removing unreachable block (ram,0x00385ef9) */

void FUN_00385ce0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
  lVar2 = DAT_02704030;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    lVar2 = DAT_02704030;
  }
  DAT_02704030 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_00276fd0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_00385e18;
  }
  unaff_RSI = &DAT_02802688;
LAB_00385e18:
  if (*unaff_RSI != 0) {
    FUN_00cd64a0();
    FUN_00cd0b60();
    (**(code **)(*local_a0 + 0x368))();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    lVar2 = DAT_02704038;
    if (DAT_02704038 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


