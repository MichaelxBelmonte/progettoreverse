// ===== MUElementFadeInspector — Annotated small functions =====
// 2 readable functions

// ==================================================
// @01c12550 (583 bytes) — logic_branch

{
  int iVar1;
  undefined4 uVar2;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  
  if ((DAT_027e8ea8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e8df8 = FUN_00335590();
    _DAT_027e8de0 = "MUElementFadeInspector";
    _DAT_027e8de8 = 0xf0;
    _DAT_027e8df0 = FUN_01c15170;
    _DAT_027e8e00 = 0;
    uRam00000000027e8e08 = 0;
    _DAT_027e8e10 = 0;
    _DAT_027e8e88 = 0;
    uRam00000000027e8e90 = 0;
    _DAT_027e8e98 = 0;
    DAT_027e8e9a = 1;
    _DAT_027e8e18 = 0;
    uRam00000000027e8e20 = 0;
    _DAT_027e8e28 = 0;
    uRam00000000027e8e30 = 0;
    _DAT_027e8e38 = 0;
    uRam00000000027e8e40 = 0;
    _DAT_027e8e48 = 0;
    uRam00000000027e8e50 = 0;
    _DAT_027e8e58 = 0;
    uRam00000000027e8e60 = 0;
    _DAT_027e8e68 = 0;
    uRam00000000027e8e70 = 0;
    _DAT_027e8e78 = 0;
    uRam00000000027e8e80 = 0;
    DAT_027e8ea3 = 0;
    _DAT_027e8e9b = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e8e9b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_01c151f0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01928ae0();
    FUN_00e87920(uVar2,0);
    if (local_120 != 0) {
      FUN_00d50b20();
    }
    if (local_128 != 0) {
      FUN_00d50b20();
    }
    if (local_130 != 0) {
      FUN_00d50b20();
    }
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}




// ==================================================
// @01c128c0 (505 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b6300 == 0) || (DAT_028b6309 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e8dd8;
    if (DAT_028b6300 == 0) {
      if (DAT_027e8dd8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b6300;
      if (DAT_028b6300 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b6300 != 0;
        DAT_028b6300 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6308 == '\0')) {
        DAT_028b6308 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b6309 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b6309 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b6300 == 0) {
      lVar3 = 0;
      goto LAB_01c12a79;
    }
  }
  lVar3 = DAT_028b6300;
  FUN_00d50b00();
LAB_01c12a79:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



