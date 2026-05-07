// Function: FUN_0051c210
// Address: 0051c210
// Size: 899 bytes
// Class: MDPluginDocument

void FUN_0051c210(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t this_ptr;
  double dVar3;
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
  int64_t local_30;
  char local_28;
  
  if (*(char *)(this_ptr + 0x2d1) != '\0') {
    *(void*)(this_ptr + 0x2d1) = 0;
    FUN_00d403d0();
    FUN_00d50b00();
    local_c0 = g_026de568;
    if (g_026de568 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d41430(&local_b0,&local_c0);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_a0 = g_0270b7e0;
    if (g_0270b7e0 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    FUN_00d41430(&local_90,&local_a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(char *)(this_ptr + 0x24c) != *(char *)(this_ptr + 0x24b)) {
    *(char *)(this_ptr + 0x24c) = *(char *)(this_ptr + 0x24b);
    FUN_00d403d0();
    local_80 = g_026fdeb8;
    if (g_026fdeb8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d50b00();
    local_70 = 0;
    local_68 = '\0';
    FUN_00d40470(&local_70,&stack0xffffffffffffffc0,1,3);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x2b0) == 0) {
    plVar2 = (int64_t *)FUN_0053fcd0();
    (**(code **)(*plVar2 + 0x18))();
    plVar1 = *(int64_t **)(this_ptr + 0x2b0);
    if (plVar1 == plVar2) {
      FUN_00d50b20();
    }
    else {
      *(int64_t **)(this_ptr + 0x2b0) = plVar2;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (((*(int64_t *)(this_ptr + 0x308) != 0) ||
      (FUN_0051c820(), *(int64_t *)(this_ptr + 0x308) != 0)) &&
     (*(int64_t *)(this_ptr + 0xe8) != 0)) {
    FUN_0051c9f0();
  }
  if ((g_02809fd0 != 0) && (dVar3 = (double)FUN_00e7d6f0(), g_023b3bc0 < dVar3 - g_02801610))
  {
    do {
      FUN_0051d020();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    } while (local_30 != 0);
    g_02801610 = (double)FUN_00e7d6f0();
  }
  return;
}

