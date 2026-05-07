// Function: FUN_006c9eb0
// Address: 006c9eb0
// Size: 757 bytes
// Class: MDTrackInsp

void FUN_006c9eb0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  uint32_t uVar3;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
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
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  int64_t local_28;
  char local_20;
  
  local_60 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x170);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar1;
  uVar3 = FUN_006cb500();
  local_40 = 0;
  lVar1 = g_02726c98;
  if ((local_d0 == '\0') && (local_d8 != 0)) {
    uVar3 = FUN_00d50b00();
    lVar1 = g_02726c98;
  }
  local_40 = '\x01';
  local_48 = local_d8;
  g_02726c98 = lVar1;
  if (lVar1 != 0) {
    local_40 = '\x01';
    uVar3 = FUN_00d50b00();
  }
  lVar2 = g_02726ca0;
  local_c0 = '\x01';
  local_c8 = lVar1;
  if (g_02726ca0 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_b8 = lVar2;
  local_b0 = '\x01';
  uVar3 = FUN_01e57260(uVar3,&local_b8);
  local_38 = local_88;
  local_30 = 0;
  local_a8 = g_02726ca8;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      uVar3 = FUN_00d50b00();
      local_a8 = g_02726ca8;
    }
  }
  else {
    local_80 = '\0';
  }
  local_30 = '\x01';
  g_02726ca8 = local_a8;
  if (local_a8 != 0) {
    local_30 = '\x01';
    uVar3 = FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_01e57260(uVar3,&local_a8);
  local_28 = local_78;
  local_20 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x148);
  }
  else {
    local_70 = '\0';
    lVar1 = *(int64_t *)(this_ptr + 0x148);
  }
  local_20 = '\x01';
  if (lVar1 != 0) {
    local_20 = '\x01';
    local_50 = 0;
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  local_58 = lVar1;
  FUN_000b75e0(g_02390124,&local_c8,&local_28,&local_58);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}

