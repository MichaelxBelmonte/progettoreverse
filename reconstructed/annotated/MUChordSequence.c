// ===== MUChordSequence — Annotated small functions =====
// 2 readable functions

// ==================================================
// @0124f820 (793 bytes) — math_loop

{
  longlong lVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *arg1;
  longlong *this;
  longlong local_60;
  char local_58;
  int local_48;
  
  FUN_00e7bdb0();
  uVar4 = FUN_00e7bdb0();
  FUN_0124f500(0,uVar4);
  lVar1 = this[7];
  if (lVar1 == 0) {
    bVar3 = true;
  }
  else {
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    bVar3 = true;
    while( true ) {
      lVar5 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_48) break;
      local_60 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      if (local_60 == *arg1) {
        bVar3 = false;
      }
      else {
        (**(code **)(*this + 0x378))();
      }
    }
    FUN_00083b20();
  }
  FUN_00c8e710();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00d64850();
  lVar1 = this[9];
  if (lVar1 != local_60) {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    this[9] = local_60;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d227e0();
  FUN_00d22760();
  FUN_00d227d0();
  FUN_00d21370();
  FUN_00d21140();
  FUN_00d64850();
  puVar2 = (undefined8 *)this[10];
  if (puVar2 != puVar6) {
    FUN_00d50b00();
    this[10] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  FUN_00d64850();
  FUN_00d216c0();
  if (*arg1 != 0) {
    FUN_00d21140();
  }
  FUN_00d64910();
  FUN_00d64850();
  *(undefined4 *)(this + 8) = 0;
  FUN_00d64910();
  if ((*arg1 != 0) && (bVar3)) {
    (**(code **)(*this + 0x370))();
  }
  FUN_00e7bdb0();
  uVar4 = FUN_00e7bdb0();
  FUN_0124f660(0,uVar4,0);
  FUN_00d50b20();
  return;
}




// ==================================================
// @0124f2e0 (523 bytes) — logic_branch

{
  int iVar1;
  
  FUN_010ec850();
  FUN_00e87cb0();
  if (DAT_028ac2b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ac2a0 = "MUChordSequence";
      _DAT_028ac2a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_010ec850();
  FUN_00e87cc0();
  if (DAT_028ac2c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ac2b8 = "MUSequence";
      _DAT_028ac2c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_010ec850();
  FUN_00e87cc0();
  if (DAT_028ac310 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ac2d8 = FUN_010ec850();
      _DAT_028ac2d0 = "_willChangeInRange";
      _DAT_028ac2e0 = 0;
      _DAT_028ac2e8 = &DAT_027beb08;
      _DAT_028ac2f0 = FUN_01255880;
      _DAT_028ac2f8 = FUN_0124f500;
      _DAT_028ac300 = 0;
      uRam00000000028ac308 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ac358 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ac320 = FUN_010ec850();
      _DAT_028ac318 = "_didChangeInRange";
      _DAT_028ac328 = 0;
      _DAT_028ac330 = s_vqqii_027beb0d;
      _DAT_028ac338 = FUN_012558b0;
      _DAT_028ac340 = FUN_0124f660;
      _DAT_028ac348 = 0;
      uRam00000000028ac350 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



