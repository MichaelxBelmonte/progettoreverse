// Function: FUN_00b365f0
// Address: 00b365f0
// Size: 848 bytes
// Class: GNAudioProcessorController


/* WARNING: Removing unreachable block (ram,0x00b36662) */
/* WARNING: Removing unreachable block (ram,0x00b36656) */
/* WARNING: Removing unreachable block (ram,0x00b36817) */
/* WARNING: Removing unreachable block (ram,0x00b36823) */
/* WARNING: Removing unreachable block (ram,0x00b3674e) */
/* WARNING: Removing unreachable block (ram,0x00b36757) */
/* WARNING: Removing unreachable block (ram,0x00b36799) */
/* WARNING: Removing unreachable block (ram,0x00b367a2) */

void FUN_00b365f0(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  longlong *local_88;
  char local_80;
  undefined4 local_74;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_74 = param_1;
  (**(code **)(*unaff_RDI + 0x5d0))();
  FUN_00b32070(local_74,param_2);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  uVar4 = (**(code **)(*unaff_RDI + 0x5d0))();
  lVar1 = DAT_0276caa0;
  if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    uVar4 = FUN_00d50b00();
    lVar1 = DAT_0276caa0;
  }
  DAT_0276caa0 = lVar1;
  if (lVar1 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  FUN_00ca0840(uVar4,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar4 = (**(code **)(*unaff_RDI + 0x5d0))();
  uVar4 = (**(code **)(*local_50 + 0x480))(uVar4,unaff_ESI);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (uVar4 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      uVar4 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  lVar2 = DAT_0276ca98;
  if (lVar1 != 0) {
    if (DAT_0276ca98 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\0';
    FUN_00ca0840(uVar4,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d403d0();
  lVar1 = DAT_0276caa8;
  if (DAT_0276caa8 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = '\0';
  local_88 = plVar3;
  FUN_00d40470(&local_88,&stack0xffffffffffffff90,3,3);
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


