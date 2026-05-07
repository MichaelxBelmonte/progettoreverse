// Function: FUN_00d1f2e0
// Address: 00d1f2e0
// Size: 527 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00d1f33d) */
/* WARNING: Removing unreachable block (ram,0x00d1f342) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00d1f2e0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *unaff_RSI;
  undefined8 local_58;
  undefined1 local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  longlong *local_28;
  char local_20;
  
  local_58 = *unaff_RSI;
  local_50 = 0;
  FUN_00d1c6d0(0,&local_58);
  local_20 = local_40 != '\0';
  local_28 = local_48;
  if ((bool)local_20) {
    local_40 = '\0';
  }
  FUN_00053ac0();
  plVar1 = DAT_02802688;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar1 = DAT_02802688;
    if (cVar2 != '\0') {
      plVar1 = local_28;
    }
  }
  if (plVar1 != (longlong *)0x0) {
    uVar4 = FUN_00dd63c0();
    goto LAB_00d1f389;
  }
  if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (local_48 == (longlong *)0x0) {
LAB_00d1f3e7:
    plVar1 = DAT_02802688;
  }
  else {
    (**(code **)(*local_48 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar1 = local_28;
    if (cVar2 == '\0') goto LAB_00d1f3e7;
  }
  if (plVar1 == (longlong *)0x0) {
    uVar4 = FUN_00e7b4e0();
  }
  else {
    local_30 = '\0';
    local_38 = plVar1;
    uVar4 = FUN_00d97540();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00d1f389:
  if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar4;
}


