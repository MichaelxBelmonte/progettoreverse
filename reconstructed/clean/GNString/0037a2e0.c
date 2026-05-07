// Function: FUN_0037a2e0
// Address: 0037a2e0
// Size: 780 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0037a2e0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_28;
  char local_20;
  
  FUN_000b6bf0();
  lVar1 = g_02703fd8;
  if (g_02703fd8 == 0) {
    lVar2 = *(int64_t *)(this_ptr + 0xb8);
    if (lVar2 != 0) goto LAB_0037a32c;
  }
  else {
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0xb8);
    if (lVar2 == lVar1) {
      FUN_00d50b20();
    }
    else {
LAB_0037a32c:
      *(int64_t *)(this_ptr + 0xb8) = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 0xc0) = 1;
  FUN_00d50b00();
  local_a8 = g_02703fe0;
  if (g_02703fe0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fce70;
  local_a0 = '\x01';
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_000bf690(&local_98,&local_a8,&local_88);
  lVar1 = *(int64_t *)(this_ptr + 0x160);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    lVar2 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_0037a3e5;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x160);
      *(int64_t *)(this_ptr + 0x160) = local_28;
    }
    else {
      local_20 = '\0';
LAB_0037a3e5:
      *(int64_t *)(this_ptr + 0x160) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_78 = g_02703ff0;
  if (g_02703ff0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027e2660;
  local_70 = '\x01';
  if (g_027e2660 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar1;
  local_60 = '\x01';
  local_58 = 0;
  local_50 = '\0';
  FUN_000bf690(&local_68,&local_78,&local_58);
  lVar1 = *(int64_t *)(this_ptr + 0x160);
  lVar2 = lVar1;
  if (lVar1 == local_28) goto LAB_0037a572;
  lVar2 = local_28;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar2 = 0;
      goto LAB_0037a527;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x160);
    *(int64_t *)(this_ptr + 0x160) = local_28;
  }
  else {
    local_20 = '\0';
LAB_0037a527:
    *(int64_t *)(this_ptr + 0x160) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_28;
  }
LAB_0037a572:
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return;
}

