// Function: FUN_0190d9a0
// Address: 0190d9a0
// Size: 582 bytes
// Class: GNString
// String references:
//   "%lld"
//   ", %lld"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_0190d9a0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  void *pvVar4;
  void*puVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  void*local_70;
  uint32_t local_68;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  uint32_t local_38;
  
  if (*(int64_t *)(arg1 + 0x60) == 0) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_025795a8;
    (*g_025795c0)();
    lVar1 = *(int64_t *)(arg1 + 0x60);
    *(void**)(arg1 + 0x60) = puVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar2 = g_027e0248;
    if (g_027e0248 != (void*)0x0) {
      FUN_00d50b00();
    }
    puVar5 = puVar2;
    FUN_0190ee70(puVar2,FUN_00e8b320);
    lVar1 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_48 = lVar1;
      local_38 = 0;
      local_40 = 0;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar6 = 0;
        do {
          local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
          if ((int)lVar6 == 0) {
            pvVar4 = _pthread_getspecific((void*)puVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_60 = FUN_017cac30();
            local_68 = 1;
            puVar5 = &g_024da828;
            local_70 = &g_024da828;
            FUN_00d94d80(&g_024da828,&local_70);
          }
          else {
            pvVar4 = _pthread_getspecific((void*)puVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_60 = FUN_017cac30();
            local_68 = 1;
            puVar5 = &g_024da828;
            local_70 = &g_024da828;
            FUN_00d94d80(&g_024da828,&local_70);
          }
          lVar6 = lVar6 + 1;
          local_40 = CONCAT44(local_40._4_4_,(int)lVar6);
        } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
      }
      FUN_018c8180();
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *(int64_t *)(arg1 + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

