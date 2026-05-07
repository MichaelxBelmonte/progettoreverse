// Function: FUN_0075cbd0
// Address: 0075cbd0
// Size: 4489 bytes
// Class: MUAudioFileSource

uint64_t FUN_0075cbd0(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint64_t uVar8;
  void*puVar9;
  void *pvVar10;
  int64_t *plVar11;
  char *pcVar12;
  uint64_t uVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t uVar15;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_248;
  uint8_t local_240;
  int64_t local_238;
  uint8_t local_230;
  uint8_t local_220;
  uint8_t local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t *local_198;
  char local_190;
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
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  uint32_t local_84;
  int64_t *local_80;
  int64_t *local_78;
  char local_70 [8];
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  plVar14 = local_78;
  FUN_017a52b0();
  lVar3 = CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  cVar5 = (**(code **)(*plVar14 + 0x50))();
  cVar6 = '\x01';
  if (cVar5 == '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    plVar1 = local_98;
    FUN_01552cd0();
    plVar14 = local_a8;
    if (local_a0 == '\0') {
      if (local_a8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    cVar6 = (**(code **)(*plVar1 + 0x50))();
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    plVar14 = local_78;
    FUN_014ffc90();
    lVar3 = CONCAT71(uStack_47,local_48);
    if (local_40 == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    cVar5 = (**(code **)(*plVar14 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      local_1d8 = *arg1;
      local_1d0 = '\0';
      uVar15 = FUN_01500300();
      plVar14 = local_78;
      if (local_70[0] == '\0') {
        if (((local_78 != (int64_t *)0x0) && (uVar15 = FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        uVar15 = FUN_00d50b20();
      }
      if (plVar14 == (int64_t *)0x0) goto LAB_0075e413;
      plVar1 = (int64_t *)*arg1;
      lVar3 = arg1[1];
      if (plVar1 == plVar14) {
        if ((char)lVar3 == '\0') {
          FUN_00d50b00();
          goto LAB_0075d26c;
        }
      }
      else {
        FUN_00d50b00();
        *arg1 = (int64_t)plVar14;
        if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0075d26c:
        *(void*)(arg1 + 1) = 1;
      }
      FUN_00d50b20();
    }
    local_1c8 = *arg1;
    local_1c0 = '\0';
    cVar5 = FUN_00b80190();
    uVar15 = extraout_XMM0_Da_01;
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      uVar15 = FUN_00d50b20();
    }
    if (cVar5 == '\0') goto LAB_0075e413;
    local_1b8 = *arg1;
    local_1b0 = '\0';
    uVar8 = FUN_00b810f0();
    plVar14 = local_78;
    uVar15 = extraout_XMM0_Da_02;
    if (local_78 == (int64_t *)0x0) {
      local_84 = (uint32_t)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      plVar14 = (int64_t *)0x0;
    }
    else {
      if (local_70[0] == '\0') {
        uVar15 = FUN_00d50b00();
        local_84 = 0;
        if ((local_70[0] == '\0') || (local_78 == (int64_t *)0x0)) goto LAB_0075d326;
        uVar15 = FUN_00d50b20();
      }
      else {
        local_70[0] = '\0';
      }
      local_84 = 0;
    }
LAB_0075d326:
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      uVar15 = FUN_00d50b20();
    }
    if (plVar14 == (int64_t *)0x0) goto LAB_0075e413;
    FUN_00b875e0();
    (**(code **)(*this_ptr + 0x498))();
    local_80 = local_78;
    if ((((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), local_70[0] != '\0')) && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00cafd20();
    local_190 = '\0';
    local_198 = plVar14;
    FUN_00760510();
    lVar3 = CONCAT71(uStack_47,local_48);
    if (local_40 == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_220 = 1;
    FUN_00757c60();
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    plVar14 = local_78;
    pcVar12 = local_38;
    if (local_70[0] != '\0') {
      pcVar12 = local_70;
    }
    local_38[0] = local_70[0];
    *pcVar12 = '\0';
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_c0 = 0;
    if (local_38[0] == '\0') {
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_c0 = '\x01';
    local_c8 = plVar14;
    FUN_0075edc0(0,&local_c8);
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_80 + 0x3c8))();
    FUN_00b88600();
    (**(code **)(*(int64_t *)CONCAT71(uStack_47,local_48) + 0x3f0))();
    plVar14 = local_78;
    if (local_70[0] == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_0075d61d;
      }
      if (this_ptr[0xc] != 0) {
        this_ptr[0xc] = 0;
        goto LAB_0075d8db;
      }
    }
    else {
      local_70[0] = '\0';
LAB_0075d61d:
      plVar1 = (int64_t *)this_ptr[0xc];
      if (plVar1 != plVar14) {
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        this_ptr[0xc] = (int64_t)plVar14;
        if (plVar1 != (int64_t *)0x0) {
LAB_0075d8db:
          FUN_00d50b20();
        }
      }
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    FUN_00b8c730();
    FUN_00d8f1a0();
    plVar14 = local_78;
    if (local_70[0] == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70[0] = '\0';
    }
    local_210 = 1;
    FUN_00753620();
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    FUN_00cb1f10();
    FUN_00db3760();
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00cb1f10();
    FUN_00db65f0();
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x2d) = 1;
    FUN_00d403d0();
    lVar3 = g_02703af8;
    if (g_02703af8 != 0) {
      FUN_00d50b00();
    }
    local_188 = lVar3;
    local_180 = '\x01';
    FUN_00d50b00();
    local_178 = 0;
    local_170 = '\0';
    FUN_00d40470(&local_178,&stack0xfffffffffffffec8,1,3);
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar13 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
    if ((char)local_84 == '\0') {
      FUN_00d50b20();
    }
    goto LAB_0075e63c;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  plVar14 = local_78;
  FUN_017a52b0();
  lVar3 = CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  uVar7 = (**(code **)(*plVar14 + 0x50))();
  puVar9 = (void*)(uint64_t)uVar7;
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
    FUN_00d50b20();
  }
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar7 == '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    plVar14 = local_78;
    FUN_01552cd0();
    lVar3 = CONCAT71(uStack_47,local_48);
    if (local_40 == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    cVar5 = (**(code **)(*plVar14 + 0x50))();
    uVar15 = extraout_XMM0_Da_00;
    if (lVar3 != 0) {
      uVar15 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      uVar15 = FUN_00d50b20();
    }
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025f02c0;
      param_1 = 0x25f0658;
      puVar9[2] = &g_025f0658;
      puVar9[3] = 0;
      *(void*)(puVar9 + 4) = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      uVar15 = (*g_025f02d8)();
      local_1f8 = *arg1;
      local_1f0 = '\0';
      FUN_015ab850(uVar15,&local_1f8);
      plVar14 = local_78;
      if (local_70[0] == '\0') {
        if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70[0] = '\0';
      }
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      uVar15 = FUN_00d50b20();
      if (plVar14 != (int64_t *)0x0) {
        local_1e8 = plVar14;
        local_1e0 = '\0';
        uVar8 = FUN_004a0ad0();
        plVar14 = local_78;
        if (local_78 == (int64_t *)0x0) {
          plVar14 = (int64_t *)0x0;
          local_80 = (int64_t *)0x0;
        }
        else if (local_70[0] == '\0') {
          uVar8 = FUN_00d50b00();
          local_80 = (int64_t *)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70[0] = '\0';
          local_80 = (int64_t *)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
        }
        if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar15 = FUN_00d50b20();
        goto LAB_0075d7f5;
      }
    }
LAB_0075e413:
    lVar3 = g_02729518;
    if (g_02729518 != 0) {
      uVar15 = FUN_00d50b00();
    }
    lVar4 = g_02729520;
    local_168 = lVar3;
    local_160 = '\x01';
    if (g_02729520 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_158 = lVar4;
    local_150 = '\x01';
    FUN_01f6ca30(uVar15,&local_158);
    plVar14 = local_78;
    if (local_70[0] == '\0') {
      if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70[0] = '\0';
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x388))();
    lVar3 = g_02729528;
    if (g_02729528 != 0) {
      FUN_00d50b00();
    }
    local_a8 = local_98;
    local_148 = lVar3;
    FUN_00083ea0(2,&local_148);
    FUN_000b4da0();
    local_b0 = 0;
    local_b8 = CONCAT71(uStack_47,local_48);
    if (local_40 == '\0') {
      if (local_b8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_b0 = '\x01';
    (**(code **)(*plVar14 + 0x5d8))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    local_78 = (int64_t *)&g_0253d630;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_78 = &g_024c5048;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar13 = 0;
  }
  else {
    local_208 = *arg1;
    local_200 = '\0';
    FUN_00362a30();
    plVar1 = local_78;
    if (local_70[0] == '\0') {
      if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
         (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70[0] = '\0';
    }
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
    cVar5 = FUN_017a7650();
    if (cVar5 == '\0') {
      local_80 = (int64_t *)0x0;
      plVar14 = (int64_t *)0x0;
      uVar15 = extraout_XMM0_Da;
LAB_0075d743:
      if (plVar1 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b20();
      }
LAB_0075d7f5:
      if (plVar14 == (int64_t *)0x0) goto LAB_0075e413;
      pvVar10 = _pthread_getspecific(param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a7d00();
      local_248 = *arg1;
      local_240 = 0;
      lVar3 = this_ptr[0x18];
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_230 = 1;
      local_238 = lVar3;
      FUN_0075a190(&local_238,&local_248,1);
      uVar13 = CONCAT71((int7)((uint64_t)puVar9 >> 8),1);
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      uVar8 = FUN_00363970(extraout_XMM0_Da,&local_48);
      plVar14 = local_78;
      if (local_78 == (int64_t *)0x0) {
        plVar14 = (int64_t *)0x0;
        local_80 = (int64_t *)0x0;
      }
      else {
        local_80 = (int64_t *)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
        if (((local_70[0] == '\0') && (FUN_00d50b00(), local_70[0] != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar15 = FUN_017a8f30();
      plVar2 = (int64_t *)this_ptr[0x18];
      plVar11 = plVar2;
      if (plVar2 != local_78) {
        if (local_70[0] == '\0') {
          if (local_78 == (int64_t *)0x0) {
            plVar11 = (int64_t *)0x0;
            goto LAB_0075d680;
          }
          uVar15 = FUN_00d50b00();
          plVar2 = (int64_t *)this_ptr[0x18];
          this_ptr[0x18] = (int64_t)local_78;
          plVar11 = local_78;
        }
        else {
          local_70[0] = '\0';
          plVar11 = local_78;
LAB_0075d680:
          this_ptr[0x18] = (int64_t)plVar11;
        }
        param_1 = (void*)plVar2;
        if (plVar2 != (int64_t *)0x0) {
          uVar15 = FUN_00d50b20();
          plVar11 = local_78;
        }
      }
      if ((local_70[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      if (local_48 == '\0') goto LAB_0075d743;
      FUN_01f27fe0();
      uVar7 = (**(code **)(*local_78 + 0x558))();
      puVar9 = (void*)(uint64_t)uVar7;
      uVar15 = extraout_XMM0_Da_03;
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      if ((char)uVar7 != '\0') goto LAB_0075d743;
      pvVar10 = _pthread_getspecific(param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar13 = 0;
    }
    if (((char)local_80 != '\0') && (plVar14 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_0075e63c:
  return uVar13 & 0xffffffff;
}

