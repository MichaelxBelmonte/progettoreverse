// ===== MUScalePitchSystemSequence — Annotated small functions =====
// 2 readable functions

// ==================================================
// @0150a640 (602 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *arg1;
  longlong this;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_58;
  uint local_50;
  undefined8 *local_38;
  char local_30;
  
  FUN_00d61ea0();
  lVar2 = DAT_027e3c40;
  plVar1 = (longlong *)*arg1;
  if (DAT_027e3c40 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e3c40;
  if (cVar4 != '\0') {
    plVar1 = (longlong *)*arg1;
    if (DAT_027e3c40 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    (**(code **)(*plVar1 + 0x578))(param_1,&local_78);
    puVar3 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (undefined8 *)0x0) {
      local_50 = 1;
      local_58 = &DAT_024c5048;
      if (this != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40(param_1,&local_58);
      if (local_30 == '\0') {
        if (local_38 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_58 = &DAT_024c5048;
      if (this != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*arg1 + 0x5e0))();
      local_68 = puVar3;
      local_60 = '\0';
      local_58 = local_38;
      local_50 = local_50 & 0xffffff00;
      FUN_00ca0840(param_1,&local_58);
      if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @0150a2e0 (561 bytes) — calculation

{
  int iVar1;
  undefined4 uVar2;
  longlong local_a0;
  longlong local_90;
  longlong local_88;
  undefined8 *local_40;
  
  if ((DAT_027c3428 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027c3378 = FUN_010ec850();
    _DAT_027c3360 = "MUScalePitchSystemSequence";
    _DAT_027c3368 = 0x60;
    _DAT_027c3370 = FUN_0151fdc0;
    _DAT_027c3380 = 0;
    uRam00000000027c3388 = 0;
    _DAT_027c3390 = 0;
    uRam00000000027c3398 = 0;
    _DAT_027c33a0 = 0;
    uRam00000000027c33a8 = 0;
    _DAT_027c33b0 = 0;
    uRam00000000027c33b8 = 0;
    _DAT_027c33c0 = 0;
    uRam00000000027c33c8 = 0;
    _DAT_027c33d0 = 0;
    uRam00000000027c33d8 = 0;
    _DAT_027c33e0 = 0;
    uRam00000000027c33e8 = 0;
    _DAT_027c33f0 = 0;
    uRam00000000027c33f8 = 0;
    _DAT_027c3400 = 0;
    uRam00000000027c3408 = 0;
    _DAT_027c3410 = 0;
    _uRam00000000027c3418 = 0;
    _DAT_027c3420 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027c341b == '\0') {
    FUN_0151fab0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_40 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_40 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_40 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_010ecad0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_0151bc40();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}



