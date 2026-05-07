// Function: FUN_0166a440
// Address: 0166a440
// Size: 1843 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint32_t FUN_0166a440(void* param_1)

{
  void*puVar1;
  void*puVar2;
  void* pVar3;
  uint32_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  void**ppuVar7;
  void*puVar8;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t local_128;
  int64_t local_120;
  char local_118;
  void*local_110;
  char local_108;
  void*local_100;
  char local_f8;
  void*local_f0;
  char local_e8;
  void*local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  void*local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  void*local_98;
  void*local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  void*local_38;
  
  if (((*(int64_t *)(this_ptr + 0x108) == 0) && (*(int64_t *)(this_ptr + 0x110) == 0)) &&
     (*(char *)(this_ptr + 0x107) == '\0')) {
    uVar4 = 0;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    local_38 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (void*)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pVar3 = 0;
    if (unaff_SIL != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        param_1 = (void*)local_38;
      }
      FUN_0150eb60();
      puVar8 = local_68;
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar8 != (void*)0x0) {
        pvVar5 = _pthread_getspecific(param_1);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = (void*)local_38;
        }
        FUN_0150eb60();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar3 = FUN_018232b0();
        if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01685940(pVar3,*(void*)(this_ptr + 0x38));
    puVar8 = local_68;
    if ((((local_60 == '\0') && (local_68 != (void*)0x0)) &&
        (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    puVar2 = local_38;
    local_98 = puVar8;
    uVar4 = 0;
    if (unaff_SIL != '\0') {
      pvVar5 = _pthread_getspecific(pVar3);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510030();
      puVar8 = local_68;
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      uVar4 = 0;
      if (puVar8 != (void*)0x0) {
        pvVar5 = _pthread_getspecific(pVar3);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01510030();
        pvVar5 = _pthread_getspecific(pVar3);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_0124ae30();
        if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01686250(uVar4,*(void*)(this_ptr + 0x38));
    puVar1 = local_68;
    puVar8 = local_98;
    if ((((local_60 == '\0') && (local_68 != (void*)0x0)) &&
        (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    local_110 = puVar8;
    local_108 = '\0';
    local_100 = puVar1;
    local_f8 = '\0';
    local_f0 = puVar2;
    local_e8 = '\0';
    ppuVar7 = &local_f0;
    FUN_01687020(ppuVar7,&local_100);
    puVar2 = local_68;
    pVar3 = (void*)ppuVar7;
    if (local_60 == '\0') {
      if (((local_68 != (void*)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_e8 != '\0') && (local_f0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 == (void*)0x0) {
      uVar4 = 0;
    }
    else {
      pvVar5 = _pthread_getspecific(pVar3);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e0 = puVar2;
      local_d8 = '\0';
      uVar4 = FUN_01512830();
      if ((local_d8 != '\0') && (local_e0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar4 != '\0') {
        local_90 = puVar2;
        FUN_00d403d0();
        local_d0 = g_027c8278;
        if (g_027c8278 != 0) {
          FUN_00d50b00();
        }
        local_c8 = '\x01';
        local_c0 = local_38;
        local_b8 = '\0';
        FUN_00d46300();
        local_a0 = g_027c8270;
        if (g_027c8270 != 0) {
          FUN_00d50b00();
        }
        local_128 = local_a0;
        FUN_00083ea0(2,&local_128);
        FUN_000b4da0();
        local_88 = local_b0;
        local_80 = 0;
        if (local_a8 == '\0') {
          if (local_b0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        puVar8 = local_98;
        local_80 = '\x01';
        FUN_00d40470(&local_88,&local_c0,3,3);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        local_68 = (void*)&g_0253d630;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        local_68 = &g_024c5048;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 != 0) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_38 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}

