// Function: FUN_00760600
// Address: 00760600
// Size: 3009 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00760600(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t *plVar9;
  void* pVar10;
  int64_t **pplVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  int64_t *this_ptr;
  bool bVar14;
  uint32_t uVar15;
  uint8_t local_180 [8];
  uint8_t local_178;
  int64_t local_100;
  char local_f8;
  int64_t local_e0;
  char local_d8;
  void*local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x628))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_004a5a00();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar8 = g_026f6fb0;
  if (cVar3 == '\0') {
    if (g_026f6fb0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_02729530;
    if (g_02729530 != 0) {
      FUN_00d50b00();
    }
    FUN_01f6ca30();
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    FUN_01f6c9b0();
    (**(code **)(*local_68 + 0x5e0))();
    FUN_00d50b20();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar10 = 0x2572358;
  *puVar7 = &g_02572358;
  (*g_02572370)();
  local_d0 = puVar7;
  FUN_01f27fe0();
  (**(code **)(*local_40 + 0x760))();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00757c60();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar15 = FUN_012cb480();
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  if (local_68 != (int64_t *)0x0) {
    local_50 = -1;
    while( true ) {
      lVar8 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((int64_t)local_68 + 0xc) <= local_50) break;
      plVar12 = *(int64_t **)(local_68[2] + 8 + lVar8 * 8);
      local_40 = plVar12;
      if ((g_026fdd70 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      pplVar11 = (int64_t **)&g_02802688;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar11 = &local_40;
        if (cVar3 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
      }
      puVar7 = local_d0;
      if (*pplVar11 != (int64_t *)0x0) {
        pvVar6 = _pthread_getspecific((void*)pplVar11);
        plVar9 = plVar12;
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar9 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar9 + 0x478))();
        (**(code **)(*local_78 + 0x3f0))();
        cVar3 = (**(code **)(*local_40 + 0x50))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_38 = '\0';
          local_40 = plVar12;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    plVar12 = local_68;
    FUN_00136d50();
    pVar10 = (void*)plVar12;
    uVar15 = FUN_00d50b20();
  }
  if (*(int *)((int64_t)puVar7 + 0xc) != 0) {
    local_178 = 0;
    FUN_00761a80(uVar15,local_180);
  }
  FUN_00da5ad0();
  plVar12 = local_40;
  bVar14 = local_38 != '\0';
  if (bVar14) {
    local_38 = '\0';
  }
  FUN_00da7170();
  FUN_00da7180();
  plVar9 = local_68;
  if (plVar12 != (int64_t *)0x0) {
    FUN_01823d20();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    cVar3 = FUN_01823e80();
    plVar9 = (int64_t *)CONCAT71((int7)((uint64_t)local_68 >> 8),1);
    if (cVar3 != '\0') {
      plVar9 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar9 + 0x18))();
      (**(code **)(*this_ptr + 0x628))();
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar15 = FUN_004a1110();
      local_a0 = 0;
      plVar9 = g_02729538;
      if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b00();
        plVar9 = g_02729538;
      }
      local_a0 = '\x01';
      local_a8 = local_78;
      g_02729538 = plVar9;
      if (plVar9 != (int64_t *)0x0) {
        local_a0 = '\x01';
        uVar15 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar9;
      FUN_00ca0840(uVar15,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      uVar15 = (**(code **)(*this_ptr + 0x628))();
      local_90 = 0;
      if (local_78 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b00();
      }
      plVar9 = g_02729540;
      local_90 = '\x01';
      local_98 = local_78;
      if (g_02729540 != (int64_t *)0x0) {
        local_90 = '\x01';
        uVar15 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar9;
      FUN_00ca0840(uVar15,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = this_ptr[0x18];
      if (lVar8 != 0) {
        local_c0 = 0;
        uVar15 = FUN_00d50b00();
        plVar9 = g_02729548;
        local_c0 = '\x01';
        local_c8 = lVar8;
        if (g_02729548 != (int64_t *)0x0) {
          uVar15 = FUN_00d50b00();
        }
        local_40 = plVar9;
        local_38 = '\0';
        FUN_00ca0840(uVar15,&local_40);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
      }
      local_b0 = 0;
      (**(code **)(this_ptr[0xb] + 0x10))();
      FUN_00d50b00();
      local_b0 = '\x01';
      local_e0 = 0;
      local_d8 = '\0';
      local_b8 = this_ptr + 0xb;
      uVar5 = FUN_01824e80(&local_e0,&local_b8);
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        (**(code **)(*local_b8 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar9 = (int64_t *)((uint64_t)uVar5 ^ 1);
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((char)plVar9 != '\0') {
      if (((plVar12 != (int64_t *)0x0) && (FUN_00da7180(), plVar12 != (int64_t *)0x0)) && (bVar14)
         ) {
        FUN_00d50b20();
      }
      uVar13 = 0;
      goto joined_r0x00761120;
    }
    FUN_00da7180();
    if ((plVar12 != (int64_t *)0x0) && (bVar14)) {
      FUN_00d50b20();
    }
  }
  uVar13 = CONCAT71((int7)((uint64_t)plVar9 >> 8),1);
joined_r0x00761120:
  if (local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  return uVar13 & 0xffffffff;
}

