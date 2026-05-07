// Function: FUN_01c4f640
// Address: 01c4f640
// Size: 1582 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c4f640(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  void*puVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t this_ptr;
  bool bVar8;
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
  int64_t local_a8;
  char local_a0;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar7 = *arg1;
  if (*(int64_t *)(this_ptr + 0x2c8) != lVar7) {
    if (*(int64_t *)(this_ptr + 0x2c8) != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_128 = g_027295a0;
      if (g_027295a0 != 0) {
        FUN_00d50b00();
      }
      local_120 = '\x01';
      local_a0 = 0;
      lVar7 = *(int64_t *)(this_ptr + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      local_a8 = lVar7;
      FUN_00d41040(&local_a8,&local_128);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_118 = g_027ebc70;
      if (g_027ebc70 != 0) {
        FUN_00d50b00();
      }
      local_110 = '\x01';
      local_80 = 0;
      lVar7 = *(int64_t *)(this_ptr + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      plVar6 = &local_88;
      local_88 = lVar7;
      FUN_00d41040(plVar6,&local_118);
      pVar5 = (void*)plVar6;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_013fb420();
      if (local_38 == 0) {
        bVar8 = false;
      }
      else {
        FUN_013fb420();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        bVar8 = local_138 != 0;
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (bVar8) {
        local_f0 = '\0';
        local_f8 = 0;
        FUN_013fb3d0();
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
      }
      if (*(int64_t *)(this_ptr + 0x2d0) != 0) {
        FUN_00d50b00();
        if (*(int64_t *)(this_ptr + 0x2d0) != 0) {
          *(void*)(this_ptr + 0x2d0) = 0;
          FUN_00d50b20();
        }
        FUN_01e54790();
        FUN_00d50b20();
      }
      lVar7 = *arg1;
    }
    lVar1 = *(int64_t *)(this_ptr + 0x2c8);
    lVar2 = lVar1;
    if (lVar1 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x2c8) = lVar7;
      lVar2 = lVar7;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = *(int64_t *)(this_ptr + 0x2c8);
      }
    }
    if (lVar2 != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_e8 = g_027295a0;
      if (g_027295a0 != 0) {
        FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_60 = 0;
      lVar7 = *(int64_t *)(this_ptr + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar7;
      FUN_00d41430(&local_68,&local_e8);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_d8 = g_027ebc70;
      if (g_027ebc70 != 0) {
        FUN_00d50b00();
      }
      local_d0 = '\x01';
      local_40 = 0;
      lVar7 = *(int64_t *)(this_ptr + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\x01';
      local_48 = lVar7;
      FUN_00d41430(&local_48,&local_d8);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      puVar4 = (void*)FUN_00e8fc40();
      FUN_000161a0();
      *puVar4 = &g_0266e168;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      FUN_00d500e0();
      lVar7 = *(int64_t *)(this_ptr + 0x2d0);
      *(void**)(this_ptr + 0x2d0) = puVar4;
      if (lVar7 != 0) {
        FUN_00d50b20();
        puVar4 = *(void**)(this_ptr + 0x2d0);
      }
      lVar7 = puVar4[0xe];
      if (lVar7 != this_ptr) {
        FUN_00d50b00();
        puVar4[0xe] = this_ptr;
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      lVar7 = *(int64_t *)(this_ptr + 0x2d0);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      local_c8 = lVar7;
      FUN_01d83990();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

