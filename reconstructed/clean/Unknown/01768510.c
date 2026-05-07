// Function: FUN_01768510
// Address: 01768510
// Size: 1710 bytes
// Class: Unknown
// String references:
//   "%@ (%@)"

void* FUN_01768510(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar9;
  bool bVar10;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(arg1 + 0x58);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  FUN_016ab300();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01736d70();
  local_d0 = local_58;
  local_c8 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_c8 = '\x01';
  FUN_016ac280();
  plVar2 = local_90;
  if (local_88 == '\0') {
    if (((local_90 != (int64_t *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
       (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = plVar2;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(arg1 + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_016ab300();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770c90();
  local_c0 = local_58;
  local_b8 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  lVar8 = local_60;
  local_b8 = '\x01';
  FUN_016ac280();
  plVar2 = local_90;
  if (local_88 == '\0') {
    if (((local_90 != (int64_t *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
       (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = plVar2;
  if (plVar2 == (int64_t *)0x0) goto LAB_01768b74;
  FUN_00d95590();
  local_b0 = local_40;
  local_a8 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  lVar8 = local_60;
  local_a8 = '\x01';
  FUN_00d97f20();
  plVar9 = local_90;
  plVar3 = plVar2;
  if (plVar2 == local_90) {
joined_r0x0176884b:
    plVar9 = plVar3;
    if ((local_88 != '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_88 == '\0') {
      if (local_90 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar3 = plVar9;
      plVar2 = local_90;
      goto joined_r0x0176884b;
    }
    FUN_00d50b20();
    local_88 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar6 = FUN_00d8c7a0();
  if (iVar6 == 0) goto LAB_01768b74;
  FUN_00d99300();
  plVar2 = local_90;
  FUN_016ab300();
  lVar8 = g_027cd5c0;
  if (g_027cd5c0 != 0) {
    FUN_00d50b00();
  }
  FUN_016ac280();
  FUN_00d99300();
  local_a0 = local_40;
  local_98 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_98 = '\x01';
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if (cVar4 == '\0') {
    bVar5 = (**(code **)(*plVar9 + 0x50))();
    bVar5 = bVar5 ^ 1;
  }
  else {
    bVar5 = 0;
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar8 = local_60;
  if (bVar5 == 0) goto LAB_01768b74;
  local_58 = local_48;
  FUN_00083ea0(2,&local_e0);
  FUN_00d8cb40();
  plVar2 = local_40;
  lVar8 = local_60;
  if (local_48 == local_40) {
joined_r0x01768af8:
    local_60 = lVar8;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar10 = local_48 != (int64_t *)0x0;
      lVar8 = local_60;
      local_48 = plVar2;
      if (bVar10) {
        FUN_00d50b20();
        lVar8 = local_60;
      }
      goto joined_r0x01768af8;
    }
    if (local_48 != (int64_t *)0x0) {
      local_48 = local_40;
      FUN_00d50b20();
    }
    local_38 = '\0';
    local_48 = local_40;
    lVar8 = local_60;
  }
  if ((local_68 != '\0') && (local_90 = (int64_t *)&g_0253d630, local_70 != 0)) {
    FUN_00d50b20();
  }
  local_90 = &g_024c5048;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_01768b74:
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

