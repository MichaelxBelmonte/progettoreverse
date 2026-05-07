// Function: FUN_005580b0
// Address: 005580b0
// Size: 550 bytes
// Class: MDTimeGridController
// String references:
//   "gridn_%@"


/* WARNING: Removing unreachable block (ram,0x0055823e) */
/* WARNING: Removing unreachable block (ram,0x0055824a) */

void FUN_005580b0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar5;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_90 = *unaff_RSI;
  local_88 = '\0';
  pplVar5 = &local_60;
  (**(code **)(*(longlong *)*unaff_RDI + 0x88))(param_1,&local_90);
  plVar1 = local_60;
  FUN_000f5df0();
  if (plVar1 == (longlong *)0x0) {
LAB_00558118:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00558118;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar2 = *unaff_RSI;
  local_58 = 1;
  local_60 = &DAT_024c5048;
  local_48 = 0;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar2;
  FUN_00d8cb40(param_1,&local_60);
  local_40 = local_70;
  local_38 = 0;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_38 = '\x01';
  FUN_01d51a40();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00558253;
    FUN_00d50b00();
  }
  else {
    local_78 = '\0';
    if (local_80 == 0) {
LAB_00558253:
      bVar3 = true;
      goto LAB_00558255;
    }
  }
  FUN_01cef3b0();
  bVar3 = false;
LAB_00558255:
  FUN_01cef450();
  if (!bVar3) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


