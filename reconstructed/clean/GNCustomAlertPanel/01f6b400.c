// Function: FUN_01f6b400
// Address: 01f6b400
// Size: 1946 bytes
// Class: GNCustomAlertPanel
// === GNCustomAlertPanel properties ===
//                   _titleView
//                   _infoView
//                   _otherButton
//                   _loadedStrings


void FUN_01f6b400(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
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
  
  lVar1 = *(int64_t *)(this_ptr + 0x78);
  if (lVar1 != 0) {
    local_130 = 0;
    FUN_00d50b00();
    local_130 = '\x01';
    local_138 = lVar1;
    FUN_01f6c380(param_1,&local_138);
    local_d8 = local_38;
    local_d0 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_d0 = '\x01';
    local_188 = *arg1;
    local_180 = '\0';
    FUN_00e0e2a0(param_1,&local_188);
    local_e8 = local_48;
    local_e0 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_e0 = '\x01';
    FUN_01e125e0();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(this_ptr + 0x80);
  if (lVar1 != 0) {
    local_120 = 0;
    FUN_00d50b00();
    local_120 = '\x01';
    local_128 = lVar1;
    FUN_01f6c380(param_1,&local_128);
    local_b8 = local_38;
    local_b0 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_b0 = '\x01';
    local_178 = *arg1;
    local_170 = '\0';
    FUN_00e0e2a0(param_1,&local_178);
    local_c8 = local_48;
    local_c0 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_c0 = '\x01';
    FUN_01e125e0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0x88);
  if (plVar2 != (int64_t *)0x0) {
    local_110 = 0;
    FUN_00d50b00();
    local_110 = '\x01';
    local_118 = plVar2;
    FUN_01f6c380(param_1,&local_118);
    local_98 = local_38;
    local_90 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_90 = '\x01';
    local_168 = *arg1;
    local_160 = '\0';
    FUN_00e0e2a0(param_1,&local_168);
    local_a8 = local_48;
    local_a0 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_a0 = '\x01';
    (**(code **)(*plVar2 + 0x958))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0x90);
  if (plVar2 != (int64_t *)0x0) {
    local_100 = 0;
    FUN_00d50b00();
    local_100 = '\x01';
    local_108 = plVar2;
    FUN_01f6c380(param_1,&local_108);
    local_78 = local_38;
    local_70 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_70 = '\x01';
    local_158 = *arg1;
    local_150 = '\0';
    FUN_00e0e2a0(param_1,&local_158);
    local_88 = local_48;
    local_80 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar2 + 0x958))();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  if (plVar2 != (int64_t *)0x0) {
    local_f0 = 0;
    FUN_00d50b00();
    local_f0 = '\x01';
    local_f8 = plVar2;
    FUN_01f6c380(param_1,&local_f8);
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    local_148 = *arg1;
    local_140 = '\0';
    FUN_00e0e2a0(param_1,&local_148);
    local_68 = local_48;
    local_60 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_60 = '\x01';
    (**(code **)(*plVar2 + 0x958))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

