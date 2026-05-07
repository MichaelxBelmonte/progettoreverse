// Function: FUN_01dafaa0
// Address: 01dafaa0
// Size: 950 bytes
// Class: GNString
// String references:
//   "GNString"
//   "toolTipFormatter"
//   "prefix"


/* WARNING: Removing unreachable block (ram,0x01dafc66) */
/* WARNING: Removing unreachable block (ram,0x01dafc6b) */
/* WARNING: Removing unreachable block (ram,0x01dafc73) */
/* WARNING: Removing unreachable block (ram,0x01dafca4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dafaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar5;
  char *pcVar6;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined *local_40;
  char local_38;
  
  pcVar6 = "prefix";
  uVar5 = FUN_000b6830();
  local_50 = local_80;
  local_48 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_48 = '\x01';
  pplVar4 = &local_60;
  (**(code **)(*unaff_RDI + 0xa0))(uVar5,&local_50,param_3,param_4,pcVar6);
  plVar1 = local_60;
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01dafb84;
  }
  pplVar4 = (longlong **)&DAT_02802688;
LAB_01dafb84:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    local_90 = *unaff_RSI;
    local_88 = '\0';
    FUN_01e4d060();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d4efa0();
    FUN_00c82bb0();
    local_38 = '\x01';
    local_40 = &DAT_02690be8;
    FUN_00e3f850();
    if ((local_38 != '\0') && (local_40 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = 0;
    (**(code **)(unaff_RDI[2] + 0x10))();
    FUN_00d50b00();
    local_b0 = DAT_027f2148;
    local_68 = '\x01';
    local_70 = unaff_RDI + 2;
    if (DAT_027f2148 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_98 = '\0';
    local_a0 = plVar1;
    FUN_00e3fb50(&local_a0,&local_b0);
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00e3faa0();
    FUN_00d50b20();
  }
  return;
}


