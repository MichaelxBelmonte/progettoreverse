// Function: FUN_000ff590
// Address: 000ff590
// Size: 982 bytes
// Class: MDMetaWindowController

void FUN_000ff590(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
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
  int64_t local_30;
  char local_28;
  
  FUN_00d50100();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026defb8;
  if (g_026defb8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026e0f00;
  local_f0 = lVar1;
  local_e8 = '\x01';
  if (g_026e0f00 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_000bf690(&local_e0,&local_f0,&local_d0);
  lVar1 = *(int64_t *)(this_ptr + 0x90);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_000ff653;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x90);
      *(int64_t *)(this_ptr + 0x90) = local_30;
    }
    else {
      local_28 = '\0';
LAB_000ff653:
      *(int64_t *)(this_ptr + 0x90) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_026e0f08;
  if (g_026e0f08 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf780();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fe470;
  if (g_026fe470 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar1;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_000bf780();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_80 = g_026f6db0;
  if (g_026f6db0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fe470;
  local_78 = '\x01';
  if (g_026fe470 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_000bf690(&local_70,&local_80,&local_60);
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_000ff8ea;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_000ff89f;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x98);
    *(int64_t *)(this_ptr + 0x98) = local_30;
  }
  else {
    local_28 = '\0';
LAB_000ff89f:
    *(int64_t *)(this_ptr + 0x98) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_000ff8ea:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return;
}

