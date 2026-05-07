// Function: FUN_006e4100
// Address: 006e4100
// Size: 3111 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_006e4100(uint64_t param_1)

{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  bool bVar5;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_40 + 0x450))();
  lVar4 = g_027275e8;
  lVar3 = g_02727588;
  if (cVar1 == '\0') {
    if (g_027275e8 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else if (g_02727588 == 0) {
    lVar4 = 0;
  }
  else {
    FUN_00d50b00();
    lVar4 = lVar3;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_188 = '\0';
  local_190 = lVar4;
  FUN_00d707b0(param_1,&local_190);
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_40 + 0x450))();
  lVar2 = g_027275f0;
  lVar3 = g_02727590;
  if (cVar1 == '\0') {
    if (g_027275f0 != 0) {
      FUN_00d50b00();
      goto LAB_006e422b;
    }
    lVar2 = 0;
    if (lVar4 != 0) goto LAB_006e4230;
LAB_006e424e:
    lVar2 = lVar4;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_02727590 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_00d50b00();
      lVar2 = lVar3;
    }
LAB_006e422b:
    if (lVar4 == lVar2) goto LAB_006e424e;
LAB_006e4230:
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_178 = '\0';
  local_180 = lVar2;
  FUN_00d707b0(param_1,&local_180);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_40 + 0x450))();
  lVar3 = g_027275f8;
  lVar4 = g_027275a0;
  if (cVar1 == '\0') {
    if (g_027275f8 != 0) {
      FUN_00d50b00();
      goto LAB_006e4310;
    }
    lVar3 = 0;
    if (lVar2 != 0) goto LAB_006e4315;
LAB_006e4333:
    bVar5 = lVar3 != 0;
    lVar3 = lVar2;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027275a0 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
      lVar3 = lVar4;
    }
LAB_006e4310:
    if (lVar2 == lVar3) goto LAB_006e4333;
LAB_006e4315:
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_168 = '\0';
  local_170 = lVar3;
  FUN_00d70ea0(param_1,&local_170);
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_40 + 0x450))();
  lVar2 = g_02727600;
  lVar4 = g_027275b0;
  if (cVar1 == '\0') {
    if (g_02727600 != 0) {
      FUN_00d50b00();
      goto LAB_006e43f6;
    }
    lVar2 = 0;
    if (lVar3 != 0) goto LAB_006e43fb;
LAB_006e4419:
    bVar5 = lVar2 != 0;
    lVar2 = lVar3;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027275b0 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_00d50b00();
      lVar2 = lVar4;
    }
LAB_006e43f6:
    if (lVar3 == lVar2) goto LAB_006e4419;
LAB_006e43fb:
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_a8 = 0;
  local_b0 = *(int64_t *)(this_ptr + 0x18);
  if (local_b0 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_158 = '\0';
  local_160 = lVar2;
  FUN_00d6f570(param_1,&local_160);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_40 + 0x450))();
  lVar4 = g_027275b8;
  if (cVar1 == '\0') {
    if (g_027275b8 != 0) {
      FUN_00d50b00();
      goto LAB_006e451a;
    }
    lVar4 = 0;
    if (lVar2 != 0) goto LAB_006e451f;
LAB_006e453d:
    bVar5 = lVar4 != 0;
    lVar4 = lVar2;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027275b8 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_00d50b00();
    }
LAB_006e451a:
    if (lVar2 == lVar4) goto LAB_006e453d;
LAB_006e451f:
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_98 = 0;
  local_a0 = *(int64_t *)(this_ptr + 0x20);
  if (local_a0 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_148 = '\0';
  local_150 = lVar4;
  FUN_00d6f570(param_1,&local_150);
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_40 + 0x450))();
  lVar2 = g_02727610;
  lVar3 = g_027275c0;
  if (cVar1 == '\0') {
    if (g_02727610 != 0) {
      FUN_00d50b00();
      goto LAB_006e4645;
    }
    lVar2 = 0;
    if (lVar4 != 0) goto LAB_006e464a;
LAB_006e4668:
    bVar5 = lVar2 != 0;
    lVar2 = lVar4;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027275c0 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_00d50b00();
      lVar2 = lVar3;
    }
LAB_006e4645:
    if (lVar4 == lVar2) goto LAB_006e4668;
LAB_006e464a:
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_88 = 0;
  local_90 = *(int64_t *)(this_ptr + 0x40);
  if (local_90 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_138 = '\0';
  local_140 = lVar2;
  FUN_00d6f570(param_1,&local_140);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_40 + 0x450))();
  lVar3 = g_02727618;
  lVar4 = g_027275c8;
  if (cVar1 == '\0') {
    if (g_02727618 != 0) {
      FUN_00d50b00();
      goto LAB_006e4767;
    }
    lVar3 = 0;
    if (lVar2 != 0) goto LAB_006e476c;
LAB_006e478a:
    bVar5 = lVar3 != 0;
    lVar3 = lVar2;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027275c8 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
      lVar3 = lVar4;
    }
LAB_006e4767:
    if (lVar2 == lVar3) goto LAB_006e478a;
LAB_006e476c:
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_78 = 0;
  local_80 = *(int64_t *)(this_ptr + 0x48);
  if (local_80 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_128 = '\0';
  local_130 = lVar3;
  FUN_00d6f570(param_1,&local_130);
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_40 + 0x450))();
  lVar2 = g_02727620;
  lVar4 = g_027275d8;
  if (cVar1 == '\0') {
    if (g_02727620 != 0) {
      FUN_00d50b00();
      goto LAB_006e4880;
    }
    lVar2 = 0;
    if (lVar3 != 0) goto LAB_006e4885;
LAB_006e48a3:
    bVar5 = lVar2 != 0;
    lVar2 = lVar3;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027275d8 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_00d50b00();
      lVar2 = lVar4;
    }
LAB_006e4880:
    if (lVar3 == lVar2) goto LAB_006e48a3;
LAB_006e4885:
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_118 = '\0';
  local_120 = lVar2;
  FUN_00d70ea0(param_1,&local_120);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_40 + 0x450))();
  lVar3 = g_02727638;
  lVar4 = g_02727630;
  if (cVar1 == '\0') {
    if (g_02727638 != 0) {
      FUN_00d50b00();
      goto LAB_006e4966;
    }
    lVar3 = 0;
    if (lVar2 == 0) goto LAB_006e4989;
  }
  else {
    if (g_02727630 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
      lVar3 = lVar4;
    }
LAB_006e4966:
    if (lVar2 == lVar3) {
LAB_006e4989:
      bVar5 = lVar3 != 0;
      lVar3 = lVar2;
      if (bVar5) {
        FUN_00d50b20();
      }
      goto LAB_006e4996;
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_006e4996:
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_68 = 0;
  local_70 = *(int64_t *)(this_ptr + 0x38);
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_108 = '\0';
  local_110 = lVar3;
  FUN_00d6f570(param_1,&local_110);
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_00d6f370();
    local_100 = g_027275a8;
    if (g_027275a8 != 0) {
      FUN_00d50b00();
    }
    local_f8 = '\x01';
    FUN_00d70ea0(param_1,&local_100);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    local_f0 = g_02727598;
    if (g_02727598 != 0) {
      FUN_00d50b00();
    }
    local_e8 = '\x01';
    FUN_00d70ea0(param_1,&local_f0);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    local_58 = 0;
    local_60 = *(int64_t *)(this_ptr + 0x30);
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_027275d0;
    local_58 = '\x01';
    if (g_027275d0 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar4;
    local_d8 = '\x01';
    FUN_00d6f570(param_1,&local_e0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    local_48 = 0;
    local_50 = *(int64_t *)(this_ptr + 0x58);
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_02727628;
    local_48 = '\x01';
    if (g_02727628 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar4;
    local_c8 = '\x01';
    FUN_00d6f570(param_1,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    local_c0 = g_027275e0;
    if (g_027275e0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    FUN_00d707b0(param_1,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}

