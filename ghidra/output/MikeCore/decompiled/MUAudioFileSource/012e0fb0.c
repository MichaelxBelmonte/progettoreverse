// Function: FUN_012e0fb0
// Address: 012e0fb0
// Size: 912 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x012e1286) */
/* WARNING: Removing unreachable block (ram,0x012e1192) */
/* WARNING: Removing unreachable block (ram,0x012e10ca) */
/* WARNING: Removing unreachable block (ram,0x012e1098) */
/* WARNING: Removing unreachable block (ram,0x012e10a1) */
/* WARNING: Removing unreachable block (ram,0x012e1160) */
/* WARNING: Removing unreachable block (ram,0x012e1169) */
/* WARNING: Removing unreachable block (ram,0x012e1228) */
/* WARNING: Removing unreachable block (ram,0x012e1231) */
/* WARNING: Removing unreachable block (ram,0x012e131c) */
/* WARNING: Removing unreachable block (ram,0x012e1325) */

void FUN_012e0fb0(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *unaff_RDI;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_00003020();
  FUN_00d91a70(param_1,1);
  plVar1 = DAT_0270b820;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    plVar1 = DAT_0270b820;
  }
  DAT_0270b820 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00003060();
  FUN_00d91a70(param_1,1);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  plVar1 = DAT_0270b828;
  if (DAT_0270b828 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00003010();
  FUN_00d91a70(param_1,1);
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  plVar1 = DAT_0270b830;
  if (DAT_0270b830 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_28 = '\0';
  local_30 = plVar1;
  FUN_00ca0840(param_1,&local_30);
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_30 + 0x550))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d46300();
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    plVar1 = DAT_0270b838;
    if (DAT_0270b838 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_28 = '\0';
    local_30 = plVar1;
    FUN_00ca0840(param_1,&local_30);
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


