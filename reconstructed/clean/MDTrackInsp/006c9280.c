// Function: FUN_006c9280
// Address: 006c9280
// Size: 1717 bytes
// Class: MDTrackInsp

void FUN_006c9280(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t this_ptr;
  uint32_t uVar6;
  float extraout_XMM0_Da;
  float fVar7;
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
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  uVar6 = FUN_006cb500();
  lVar4 = local_30;
  if ((local_28 == '\0') && (local_30 != 0)) {
    uVar6 = FUN_00d50b00();
  }
  local_b8 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x178);
  if (lVar1 != 0) {
    uVar6 = FUN_00d50b00();
  }
  lVar3 = g_02726cb0;
  local_b8 = '\x01';
  local_c0 = lVar1;
  if (g_02726cb0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  lVar1 = g_0270b8a0;
  local_150 = lVar3;
  local_148 = '\x01';
  if (g_0270b8a0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_140 = lVar1;
  local_138 = '\x01';
  uVar6 = FUN_01e57260(uVar6,&local_140);
  local_80 = local_30;
  local_78 = 0;
  local_130 = g_02726ca8;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      uVar6 = FUN_00d50b00();
      local_130 = g_02726ca8;
    }
  }
  else {
    local_28 = '\0';
  }
  local_78 = '\x01';
  g_02726ca8 = local_130;
  if (local_130 != 0) {
    local_78 = '\x01';
    uVar6 = FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_01e57260(uVar6,&local_130);
  local_70 = local_40;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x140);
  }
  else {
    local_38 = '\0';
    lVar1 = *(int64_t *)(this_ptr + 0x140);
  }
  local_68 = '\x01';
  if (lVar1 != 0) {
    local_68 = '\x01';
    local_a8 = 0;
    FUN_00d50b00();
  }
  lVar3 = g_02726cc0;
  local_a8 = '\x01';
  local_b0 = lVar1;
  if (g_02726cc0 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar3;
  local_118 = '\x01';
  uVar6 = FUN_000b75e0(g_023908e0,&local_150,&local_70,&local_b0);
  if ((local_118 != '\0') && (local_120 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  local_98 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x180);
  if (lVar1 != 0) {
    uVar6 = FUN_00d50b00();
  }
  lVar3 = g_02726cc8;
  local_98 = '\x01';
  local_110 = lVar4;
  local_108 = '\0';
  local_a0 = lVar1;
  if (g_02726cc8 != 0) {
    uVar6 = FUN_00d50b00();
  }
  lVar1 = g_02726cd0;
  local_100 = lVar3;
  local_f8 = '\x01';
  if (g_02726cd0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  uVar6 = FUN_01e57260(uVar6,&local_f0);
  local_60 = local_30;
  local_58 = 0;
  local_e0 = g_02726ca8;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      uVar6 = FUN_00d50b00();
      local_e0 = g_02726ca8;
    }
  }
  else {
    local_28 = '\0';
  }
  local_58 = '\x01';
  g_02726ca8 = local_e0;
  if (local_e0 != 0) {
    local_58 = '\x01';
    uVar6 = FUN_00d50b00();
  }
  local_d8 = '\x01';
  FUN_01e57260(uVar6,&local_e0);
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x138);
  }
  else {
    local_38 = '\0';
    lVar1 = *(int64_t *)(this_ptr + 0x138);
  }
  local_48 = '\x01';
  if (lVar1 != 0) {
    local_48 = '\x01';
    local_88 = 0;
    FUN_00d50b00();
  }
  lVar3 = g_02726cd8;
  local_88 = '\x01';
  local_90 = lVar1;
  if (g_02726cd8 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar3;
  local_c8 = '\x01';
  FUN_000b75e0(g_02390124,&local_100,&local_50,&local_90);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = *(int64_t **)(this_ptr + 0x108);
  if (plVar2 != (int64_t *)0x0) {
    cVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x178) + 0x9a0))();
    fVar7 = extraout_XMM0_Da;
    if (cVar5 != '\0') {
      fVar7 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x178) + 0x930))();
      if ((fVar7 == 0.0) && (!NAN(fVar7))) {
        fVar7 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x180) + 0x930))();
        fVar7 = (float)-(uint)(fVar7 != 0.0);
      }
    }
    (**(code **)(*plVar2 + 0x998))(fVar7);
  }
  cVar5 = FUN_006cff00();
  if (cVar5 != '\0') {
    if (*(int64_t **)(this_ptr + 0x180) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x180) + 0x998))();
      (**(code **)(**(int64_t **)(this_ptr + 0x180) + 0x928))(0);
    }
    if (*(int64_t **)(this_ptr + 0x138) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x998))();
      (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x928))(0);
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}

