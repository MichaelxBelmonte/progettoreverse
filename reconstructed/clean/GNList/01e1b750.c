// Function: FUN_01e1b750
// Address: 01e1b750
// Size: 1863 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e1b750(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t arg1;
  void*this_ptr;
  bool bVar5;
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
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
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
  int64_t *local_38;
  char local_30;
  
  FUN_01e4b1a0();
  plVar4 = g_028b9468;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01e1be76;
    }
  }
  else if (local_38 != (int64_t *)0x0) goto LAB_01e1be76;
  if (g_028b9460 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if ((g_028b9468 == (int64_t *)0x0) || (g_028b9471 == '\0')) {
    FUN_00e8cb50();
    if (g_028b9468 == (int64_t *)0x0) {
      plVar4 = (int64_t *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar4 + 0x18))();
      if (g_028b9468 == plVar4) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        bVar5 = g_028b9468 != (int64_t *)0x0;
        g_028b9468 = plVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028b9470 == '\0') {
        g_028b9470 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01d5e5a0();
      FUN_01d5e5c0();
      lVar3 = g_027f3318;
      if (g_027f3318 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_027f3320;
      if (g_027f3320 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar2;
      local_170 = '\x01';
      local_168 = 0;
      local_160 = '\0';
      FUN_00d31230(&local_168,&local_178);
      lVar2 = g_027e7ca0;
      if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b00();
        lVar2 = g_027e7ca0;
      }
      g_027e7ca0 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_150 = '\x01';
      local_148 = 0;
      local_140 = '\0';
      local_158 = lVar2;
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5da60(&local_148,&local_158,&stack0xffffffffffffff68);
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027f3318;
      if (g_027f3318 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_027f3328;
      local_138 = lVar3;
      local_130 = '\x01';
      if (g_027f3328 != 0) {
        FUN_00d50b00();
      }
      local_128 = lVar2;
      local_120 = '\x01';
      local_118 = 0;
      local_110 = '\0';
      FUN_00d31230(&local_118,&local_128);
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = g_027f2a20;
      if (g_027f2a20 != 0) {
        FUN_00d50b00();
      }
      local_100 = '\x01';
      local_f8 = 0;
      local_f0 = '\0';
      local_108 = lVar3;
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5da60(&local_f8,&local_108,&stack0xffffffffffffff78);
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027f3318;
      if (g_027f3318 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_027f3330;
      local_e8 = lVar3;
      local_e0 = '\x01';
      if (g_027f3330 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar2;
      local_d0 = '\x01';
      local_c8 = 0;
      local_c0 = '\0';
      FUN_00d31230(&local_c8,&local_d8);
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = g_026de8c8;
      if (g_026de8c8 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      local_b8 = lVar3;
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      FUN_01d5da60(&local_a8,&local_b8,&stack0xffffffffffffff88);
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      g_028b9471 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b9471 = '\x01';
      FUN_00e8cb70();
    }
    local_38 = g_028b9468;
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == (int64_t *)0x0) {
      local_38 = (int64_t *)0x0;
      goto LAB_01e1be76;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    local_38 = plVar4;
  }
  FUN_00d50b00();
LAB_01e1be76:
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return;
}

