// Function: FUN_00072af0
// Address: 00072af0
// Size: 2596 bytes
// Class: MDMetaWindowController

void FUN_00072af0(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  code *pcVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar8 [16];
  uint8_t local_198 [16];
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
  int64_t *local_40;
  char local_38;
  
  FUN_01e3b710();
  (**(code **)(*this_ptr + 0x640))();
  local_198._0_8_ = (**(code **)(*local_40 + 0x580))();
  local_198._8_4_ = extraout_XMM0_Dc;
  local_198._12_4_ = extraout_XMM0_Dd;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar8 = blendps(g_02390370,local_198,1);
  (**(code **)(*this_ptr + 0x4d0))(0,auVar8._0_8_);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar6 + 0x27) = 0;
  puVar6[0x2e] = 0;
  *(void*)(puVar6 + 0x2f) = 0;
  puVar6[0x30] = 0;
  *(void*)(puVar6 + 0x31) = 0;
  puVar6[0x28] = 0;
  puVar6[0x29] = 0;
  *(void*)(puVar6 + 0x2a) = 0;
  puVar6[0x2b] = 0;
  puVar6[0x2c] = 0;
  *(void*)((int64_t)puVar6 + 0x165) = 0;
  *(void*)((int64_t)puVar6 + 0x18c) = 0;
  *(void*)((int64_t)puVar6 + 0x194) = 0;
  *(void*)((int64_t)puVar6 + 0x199) = 0;
  puVar6[0x35] = 0;
  puVar6[0x36] = 0;
  puVar6[0x37] = 0;
  puVar6[0x38] = 0;
  *puVar6 = &g_02677e10;
  puVar6[2] = &g_026788e8;
  puVar6[0x39] = &g_02678928;
  *(void*)((int64_t)puVar6 + 500) = 0;
  *(void*)(puVar6 + 0x3f) = 0;
  puVar6[0x43] = 0;
  puVar6[0x3c] = 0;
  puVar6[0x3d] = 0;
  puVar6[0x3a] = 0;
  puVar6[0x3b] = 0;
  *(void*)(puVar6 + 0x3e) = 0;
  *(void*)((int64_t)puVar6 + 0x1fc) = 0;
  *(void*)((int64_t)puVar6 + 0x204) = 0;
  *(void*)((int64_t)puVar6 + 0x20c) = 0;
  pcVar4 = g_02677e28;
  (*g_02677e28)();
  puVar1 = (void*)this_ptr[0x27];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x27] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  auVar8._4_12_ = _UNK_02390384;
  auVar8._0_4_ = g_02390380;
  blendps(local_198,auVar8,0xe);
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d0))(0);
  lVar3 = g_026d80e0;
  plVar2 = (int64_t *)this_ptr[0x27];
  if (g_026d80e0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0xa10))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_026d80e8;
  if (g_026d80e8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01cef3b0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_01cef450();
  FUN_01cef4c0();
  FUN_01d0fe80();
  lVar3 = g_026f6f70;
  plVar2 = (int64_t *)this_ptr[0x27];
  if (g_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar5 = g_026d80f0;
  if (g_026d80f0 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar5;
  local_148 = '\x01';
  local_140 = 0;
  local_138 = '\0';
  FUN_00d31230(&local_140,&local_150);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar2 + 0x6a8))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  local_a8 = 0;
  lVar3 = this_ptr[0x27];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_b0 = lVar3;
  (**(code **)(*this_ptr + 0x450))();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar6 + 0x27) = 0;
  puVar6[0x2e] = 0;
  *(void*)(puVar6 + 0x2f) = 0;
  puVar6[0x30] = 0;
  *(void*)(puVar6 + 0x31) = 0;
  puVar6[0x28] = 0;
  puVar6[0x29] = 0;
  *(void*)(puVar6 + 0x2a) = 0;
  puVar6[0x2b] = 0;
  puVar6[0x2c] = 0;
  *(void*)((int64_t)puVar6 + 0x165) = 0;
  *(void*)((int64_t)puVar6 + 0x18c) = 0;
  *(void*)((int64_t)puVar6 + 0x194) = 0;
  *(void*)((int64_t)puVar6 + 0x199) = 0;
  puVar6[0x35] = 0;
  puVar6[0x36] = 0;
  puVar6[0x37] = 0;
  puVar6[0x38] = 0;
  *puVar6 = &g_02677e10;
  puVar6[2] = &g_026788e8;
  puVar6[0x39] = &g_02678928;
  *(void*)((int64_t)puVar6 + 500) = 0;
  *(void*)(puVar6 + 0x3f) = 0;
  puVar6[0x43] = 0;
  puVar6[0x3c] = 0;
  puVar6[0x3d] = 0;
  puVar6[0x3a] = 0;
  puVar6[0x3b] = 0;
  *(void*)(puVar6 + 0x3e) = 0;
  *(void*)((int64_t)puVar6 + 0x1fc) = 0;
  *(void*)((int64_t)puVar6 + 0x204) = 0;
  *(void*)((int64_t)puVar6 + 0x20c) = 0;
  (*pcVar4)();
  puVar1 = (void*)this_ptr[0x28];
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x28] = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)this_ptr[0x28] + 0x4d0))(g_02390380);
  local_130 = g_026d80f8;
  plVar2 = (int64_t *)this_ptr[0x28];
  if (g_026d80f8 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  (**(code **)(*plVar2 + 0xa10))();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_026d8100;
  if (g_026d8100 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar3;
  local_118 = '\x01';
  FUN_01d51a40();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01cef3b0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cef450();
  FUN_01cef4c0();
  FUN_01d0fe80();
  local_110 = g_026f6f70;
  plVar2 = (int64_t *)this_ptr[0x28];
  if (g_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026d8108;
  local_108 = '\x01';
  if (g_026d8108 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar3;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  FUN_00d31230(&local_f0,&local_100);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar2 + 0x6a8))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
  local_98 = 0;
  lVar3 = this_ptr[0x28];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_a0 = lVar3;
  (**(code **)(*this_ptr + 0x450))();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_e0 = g_02703fe0;
  if (g_02703fe0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026fce70;
  local_d8 = '\x01';
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar3;
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_000bf690(&local_d0,&local_e0,&local_c0);
  plVar2 = (int64_t *)this_ptr[0x29];
  plVar7 = plVar2;
  if (plVar2 == local_40) goto LAB_00073486;
  plVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
      goto LAB_0007343b;
    }
    FUN_00d50b00();
    plVar2 = (int64_t *)this_ptr[0x29];
    this_ptr[0x29] = (int64_t)local_40;
  }
  else {
    local_38 = '\0';
LAB_0007343b:
    this_ptr[0x29] = (int64_t)plVar7;
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar7 = local_40;
  }
LAB_00073486:
  if ((local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

