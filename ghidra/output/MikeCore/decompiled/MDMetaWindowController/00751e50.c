// Function: FUN_00751e50
// Address: 00751e50
// Size: 518 bytes
// Class: MDMetaWindowController


void FUN_00751e50(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char unaff_SIL;
  undefined8 *unaff_RDI;
  longlong local_40;
  char local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_000830c0();
  (**(code **)(*plVar3 + 0x18))();
  FUN_0049f6c0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00751eb0;
    }
    if (plVar3[0xf] == 0) goto LAB_00751efe;
    plVar3[0xf] = 0;
LAB_00751ee9:
    FUN_00d50b20();
  }
  else {
    local_38 = '\0';
LAB_00751eb0:
    lVar1 = plVar3[0xf];
    if (lVar1 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      plVar3[0xf] = local_40;
      if (lVar1 != 0) goto LAB_00751ee9;
    }
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
LAB_00751efe:
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00039550();
  (**(code **)(*plVar4 + 0x18))();
  (**(code **)(*plVar3 + 0x490))();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025f7058;
  (*DAT_025f7070)();
  puVar2 = (undefined8 *)plVar3[0x26];
  if (puVar2 == puVar5) {
    FUN_00d50b20();
  }
  else {
    plVar3[0x26] = (longlong)puVar5;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (unaff_SIL == '\0') {
    lVar1 = plVar3[0x15];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_0010bc60();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = plVar3[0x15];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_0010a2f0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = plVar3[0x15];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_0010bc70();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


