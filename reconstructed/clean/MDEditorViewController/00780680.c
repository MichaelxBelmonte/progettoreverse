// Function: FUN_00780680
// Address: 00780680
// Size: 897 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


uint64_t FUN_00780680(void)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char cVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *this_ptr;
  int64_t *local_110;
  char local_108;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  char local_48;
  uint64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x468))();
  uVar6 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  local_50 = uVar6;
  FUN_00362a30();
  if (local_108 == '\0') {
    if (local_110 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_108 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_110 == (int64_t *)0x0) {
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    goto LAB_00780983;
  }
  cVar4 = FUN_017a7670();
  lVar1 = g_026f6fb0;
  if (cVar4 == '\0') {
LAB_0078093d:
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  else {
    if (g_026f6fb0 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_02729608;
    local_a0 = lVar1;
    local_98 = '\x01';
    if (g_02729608 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    FUN_01f6ca30();
    if ((local_108 == '\0') && (local_110 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    FUN_017a6de0();
    local_70 = g_0270b810;
    local_68 = 0;
    if (g_0270b810 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    FUN_017a7040();
    local_60 = g_0270b818;
    local_58 = 0;
    if (g_0270b818 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    FUN_00780ce0(&local_b0,&local_70,&local_60);
    FUN_000b4da0();
    uVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_002d10d0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_80 = uVar3;
    local_78 = '\0';
    uVar5 = (**(code **)(*local_110 + 0x5d8))();
    uVar6 = (uint64_t)uVar5;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (uVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (uVar5 == 0) goto LAB_0078093d;
    uVar6 = 0;
  }
  FUN_00d50b20();
LAB_00780983:
  return uVar6 & 0xffffffff;
}

