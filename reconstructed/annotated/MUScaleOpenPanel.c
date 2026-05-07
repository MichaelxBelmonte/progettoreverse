// ===== MUScaleOpenPanel — Annotated small functions =====
// 1 readable functions

// ==================================================
// @01b31380 (1214 bytes) — calculation

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong this;
  undefined8 uVar3;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dd;
  undefined8 in_XMM1_Qb;
  undefined1 auVar4 [16];
  longlong local_d0;
  char local_c8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_30;
  char local_28;
  
  FUN_01e125e0();
  FUN_01cfc0e0();
  if (local_28 == '\0') {
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_01e11fd0();
  if (local_30 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e4580;
  if (DAT_027e4580 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceb8d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01ceb930();
  if (this != 0) {
    FUN_00d50b20();
  }
  FUN_01aa61d0();
  FUN_01ab2e00();
  FUN_01b3e230();
  FUN_00d6f370();
  local_a0 = DAT_027e4588;
  if (DAT_027e4588 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d710b0(&local_90,&local_a0);
  if (local_28 == '\0') {
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != (longlong *)0x0) {
    local_80 = local_30;
    local_78 = '\0';
    FUN_01b3e4c0();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *(undefined4 *)(this + 0x104) = 0xffffffff;
  *(undefined4 *)(this + 0x108) = 0xffffffff;
  *(undefined4 *)(this + 0x10c) = 0xffffffff;
  *(undefined4 *)(this + 0x110) = 0xffffffff;
  *(undefined4 *)(this + 0x114) = 0xffffffff;
  if ((*(char *)(this + 0x88) == '\0') && (*(char *)(this + 0x89) == '\0')) {
    FUN_01e40eb0();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 != (longlong *)0x0) {
      (**(code **)(**(longlong **)(this + 0xd0) + 0x478))();
      local_68 = '\0';
      local_70 = 0;
      (**(code **)(**(longlong **)(this + 0xd0) + 0xa20))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e40eb0();
    uVar3 = (**(code **)(*local_30 + 0x4d8))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(this + 200) + 0x4d8))();
    FUN_01e40eb0();
    (**(code **)(*local_30 + 0x478))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e40eb0();
    (**(code **)(*local_30 + 0x478))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar1._8_8_ = in_XMM1_Qb;
    auVar1._0_8_ = param_2;
    auVar4._4_4_ = extraout_XMM0_Db;
    auVar4._0_4_ = (extraout_XMM0_Db + _DAT_0241d220) - (float)((ulonglong)uVar3 >> 0x20);
    auVar4._8_4_ = extraout_XMM0_Dd;
    auVar4._12_4_ = extraout_XMM0_Dd;
    auVar4 = insertps(auVar1,auVar4,0x10);
    (**(code **)(**(longlong **)(this + 0x78) + 0x4d0))((int)uVar3,auVar4._0_8_);
    (**(code **)(**(longlong **)(this + 0x78) + 0x558))();
    FUN_01e40eb0();
    local_58 = 0;
    local_60 = *(longlong *)(this + 0x78);
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    (**(code **)(*local_30 + 0x450))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01b31bc0();
  return;
}



