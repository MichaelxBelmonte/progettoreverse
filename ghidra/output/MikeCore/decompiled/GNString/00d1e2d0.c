// Function: FUN_00d1e2d0
// Address: 00d1e2d0
// Size: 516 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00d1e32d) */
/* WARNING: Removing unreachable block (ram,0x00d1e332) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00d1e2d0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *unaff_RSI;
  undefined4 uVar4;
  undefined8 local_50;
  undefined1 local_48;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  undefined4 local_24;
  char local_20;
  
  local_50 = *unaff_RSI;
  local_48 = 0;
  FUN_00d1c6d0(0,&local_50);
  local_20 = local_38 != '\0';
  local_30 = local_40;
  if ((bool)local_20) {
    local_38 = '\0';
  }
  FUN_00053ac0();
  plVar1 = DAT_02802688;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar1 = DAT_02802688;
    if (cVar2 != '\0') {
      plVar1 = local_30;
    }
  }
  if (plVar1 == (longlong *)0x0) {
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
    plVar1 = DAT_02802688;
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar1 = DAT_02802688;
      if (cVar2 != '\0') {
        plVar1 = local_30;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      local_24 = 0;
      local_40 = local_30;
    }
    else {
      uVar4 = FUN_00d8d7b0();
      local_24 = 0;
      local_40 = local_30;
      if (plVar1 != (longlong *)0x0) {
        local_24 = uVar4;
      }
    }
  }
  else {
    local_24 = FUN_00d459e0();
  }
  if ((local_20 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return local_24;
}


