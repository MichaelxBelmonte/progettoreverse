// Function: FUN_004a87c0
// Address: 004a87c0
// Size: 605 bytes
// Class: MDMetaWindowController

void FUN_004a87c0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
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
  
  FUN_00d50100();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026d85b8;
  if (g_026d85b8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_02725940;
  local_b0 = lVar1;
  local_a8 = '\x01';
  if (g_02725940 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_000bf690(&local_a0,&local_b0,&local_90);
  lVar1 = *(int64_t *)(this_ptr + 0x88);
  lVar2 = lVar1;
  if (lVar1 == local_40) goto LAB_004a88cb;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar2 = 0;
      goto LAB_004a8880;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x88);
    *(int64_t *)(this_ptr + 0x88) = local_40;
    lVar2 = local_40;
  }
  else {
    local_38 = '\0';
    lVar2 = local_40;
LAB_004a8880:
    *(int64_t *)(this_ptr + 0x88) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_40;
  }
LAB_004a88cb:
  if ((local_38 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_026d85c0;
  if (g_026d85c0 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_000bf780();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026dc2a0;
  if (g_026dc2a0 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf780();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}

