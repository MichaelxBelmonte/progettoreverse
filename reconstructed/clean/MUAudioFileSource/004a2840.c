// Function: FUN_004a2840
// Address: 004a2840
// Size: 2934 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"
//   "%@.%i"

void FUN_004a2840(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  char cVar6;
  void *pvVar7;
  void* pVar8;
  int64_t **pplVar9;
  uint64_t *puVar10;
  int iVar11;
  uint64_t *arg1;
  int iVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint8_t local_190 [8];
  uint8_t local_188;
  int64_t *local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  uint64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  uint64_t local_130;
  char local_128;
  uint64_t local_120;
  char local_118;
  uint64_t local_110;
  uint64_t local_108;
  void* local_fc;
  int64_t *local_f8;
  char local_f0;
  uint64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  uint local_c0;
  int64_t local_b8;
  char local_b0;
  uint32_t local_a8;
  uint64_t local_a0;
  char local_98;
  int64_t *local_90;
  int64_t *local_88;
  uint64_t local_80;
  int64_t *local_78;
  int local_70;
  uint64_t local_6c;
  int64_t *local_60;
  int64_t *local_50;
  char local_48;
  uint64_t local_40;
  char local_38;
  
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  plVar1 = local_c8;
  if ((char)local_c0 == '\0') {
    if (local_c8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c0 = local_c0 & 0xffffff00;
  }
  FUN_004a21b0();
  local_90 = local_88;
  if (((char)local_80 == '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar1 = local_88;
  puVar10 = &local_40;
  if ((char)local_80 != '\0') {
    puVar10 = &local_80;
  }
  local_40 = CONCAT71(local_40._1_7_,(char)local_80);
  *(void*)puVar10 = 0;
  if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = 0;
  if ((char)local_40 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = local_40 & 0xffffffffffffff00;
  }
  local_f0 = '\x01';
  local_f8 = plVar1;
  FUN_002aa7d0();
  plVar1 = local_c8;
  if ((char)local_c0 == '\0') {
    if (local_c8 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_c0 = local_c0 & 0xffffff00;
  }
  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (1 < *(int *)((int64_t)plVar1 + 0xc)) {
    local_60 = plVar1;
    uVar13 = FUN_004a3a50(0,FUN_004a3af0);
    plVar4 = local_88;
    if (plVar1 == local_88) {
LAB_004a2a7c:
      if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      if ((char)local_80 == '\0') {
        if (local_88 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_60 = plVar4;
        uVar13 = FUN_00d50b20();
        goto LAB_004a2a7c;
      }
      local_60 = local_88;
      uVar13 = FUN_00d50b20();
    }
    if (local_60 == (int64_t *)0x0) goto LAB_004a33a8;
    local_80._0_1_ = '\0';
    local_88 = (int64_t *)0x0;
    local_78 = local_60;
    local_6c = 0;
    iVar12 = -1;
    local_fc = 0;
    local_110 = 1;
    iVar11 = 0;
    while( true ) {
      if (iVar11 != 0) {
        if (iVar11 < 1) {
          iVar11 = -iVar11;
        }
        else {
          iVar12 = iVar12 - iVar11;
          local_70 = iVar12;
          uVar13 = FUN_00d23690(uVar13,iVar11);
          local_6c = (uint64_t)(local_fc + iVar11) << 0x20;
          iVar11 = 0;
        }
        local_6c = CONCAT44(local_6c._4_4_,iVar11);
      }
      local_70 = iVar12 + 1;
      if (*(int *)((int64_t)local_78 + 0xc) <= local_70) break;
      plVar1 = *(int64_t **)(local_78[2] + (int64_t)local_70 * 8);
      local_88 = plVar1;
      if ((g_026fdd70 == '\0') &&
         (iVar12 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_00, iVar12 != 0)) {
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
        uVar13 = ___cxa_guard_release();
      }
      pplVar9 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        pplVar9 = &local_88;
        uVar13 = extraout_XMM0_Da;
        if (cVar6 == '\0') {
          pplVar9 = (int64_t **)&g_02802688;
        }
      }
      iVar12 = local_70;
      plVar1 = *pplVar9;
      local_fc = local_6c._4_4_;
      if (local_70 == 0 && local_6c._4_4_ == 0) {
        if (plVar1 != (int64_t *)0x0) {
          pVar8 = local_6c._4_4_;
          pvVar7 = _pthread_getspecific(local_6c._4_4_);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          (**(code **)(*local_50 + 0x390))();
          uVar5 = local_40;
          local_e0 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_e0 = '\x01';
          local_e8 = uVar5;
          uVar13 = FUN_012e5f80();
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
      }
      else {
        if (plVar1 == (int64_t *)0x0) {
          pvVar7 = _pthread_getspecific(local_6c._4_4_);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_012e6000();
          lVar2 = local_170;
          local_c0 = 2;
          local_c8 = &g_024c5048;
          local_b0 = 0;
          if (local_170 != 0) {
            uVar13 = FUN_00d50b00();
          }
          local_b8 = lVar2;
          local_b0 = '\x01';
          local_c8 = (int64_t *)&g_025df2a0;
          local_a8 = (uint32_t)local_110;
          FUN_00d8cb40(uVar13,&local_c8);
        }
        else {
          pvVar7 = _pthread_getspecific(local_6c._4_4_);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          (**(code **)(*local_180 + 0x390))();
        }
        local_d0 = 0;
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_d0 = '\x01';
        local_d8 = local_50;
        local_160 = *arg1;
        local_158 = '\0';
        pVar8 = 0;
        FUN_004f83c0(0,&local_160);
        uVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 == (int64_t *)0x0) {
          local_c8 = &g_024c5048;
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
        }
        else if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_108 = uVar5;
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        local_40 = *arg1;
        local_38 = '\0';
        iVar11 = FUN_00d237a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_148 != '\0') && (local_150 != 0)) {
          FUN_00d50b20();
        }
        FUN_004a11d0();
        uVar5 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_188 = 1;
        uVar13 = FUN_004a17d0((int)local_110 + iVar11 + -1,local_190);
        uVar3 = local_108;
        if (local_50 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (uVar5 != 0) {
          uVar13 = FUN_00d50b20();
        }
        local_140 = local_88;
        local_138 = '\0';
        uVar13 = FUN_004a26e0(uVar13,&local_140);
        uVar5 = local_40;
        local_98 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar13 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_98 = '\x01';
        local_a0 = uVar5;
        local_130 = *arg1;
        local_128 = '\0';
        local_120 = uVar3;
        local_118 = '\0';
        uVar13 = FUN_004fa380(uVar13,&local_120);
        if ((local_118 != '\0') && (local_120 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (uVar3 != 0) {
          uVar13 = FUN_00d50b20();
        }
      }
      local_110 = (uint64_t)((int)local_110 + 1);
      iVar11 = (int)local_6c;
    }
    FUN_00115e00();
  }
  FUN_00d50b20();
LAB_004a33a8:
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

