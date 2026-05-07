// Function: FUN_007860e0
// Address: 007860e0
// Size: 3801 bytes
// Class: MUAraAudioSource
// String references:
//   "MUCustomAudioSource"
//   "MUAraAudioSource"
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_007860e0(void* param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t *plVar7;
  void*puVar8;
  int64_t **pplVar9;
  void* pVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar12;
  uint32_t uVar13;
  int64_t local_1a0;
  char local_198;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  int64_t *local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  uint64_t local_80;
  int local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  
  local_a8 = param_2;
  cVar4 = FUN_00751ba0();
  if (cVar4 == '\0') {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124c710();
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x628))();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    plVar7 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*g_02572370)();
    local_a0 = plVar7;
    if (plVar7 != (int64_t *)0x0) {
      local_58[0] = '\0';
      local_60 = (int64_t *)0x0;
      local_50 = plVar7;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            iVar5 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        lVar11 = (int64_t)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)((int64_t)local_50 + 0xc) <= iVar5) break;
        local_60 = *(int64_t **)(local_50[2] + 8 + lVar11 * 8);
        pvVar6 = _pthread_getspecific((void*)local_50[2]);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        plVar7 = local_98;
        if (local_90 == '\0') {
          if (local_98 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00786600;
          }
        }
        else if (local_98 != (int64_t *)0x0) {
LAB_00786600:
          local_90 = '\0';
          local_98 = (int64_t *)0x0;
          local_88 = plVar7;
          local_80 = 0xffffffff;
          local_78 = 0;
          while( true ) {
            lVar11 = (int64_t)(int)local_80;
            iVar5 = (int)local_80 + 1;
            local_80 = CONCAT44(local_80._4_4_,iVar5);
            if (*(int *)((int64_t)local_88 + 0xc) <= iVar5) break;
            local_98 = *(int64_t **)(local_88[2] + 8 + lVar11 * 8);
            pvVar6 = _pthread_getspecific((void*)local_88[2]);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            plVar3 = local_70;
            plVar7 = (int64_t *)*arg1;
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar3 == plVar7) {
              local_70 = local_60;
              local_68 = '\0';
              FUN_00d21140();
              if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              break;
            }
            if (local_80._4_4_ != 0) {
              if (local_80._4_4_ < 1) {
                iVar5 = -local_80._4_4_;
              }
              else {
                local_80 = CONCAT44(local_80._4_4_,(int)local_80 - local_80._4_4_);
                FUN_00d23690();
                local_78 = local_78 + local_80._4_4_;
                iVar5 = 0;
              }
              local_80 = CONCAT44(iVar5,(int)local_80);
            }
          }
          FUN_001159b0();
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    FUN_00d23310();
    plVar7 = local_60;
    pplVar9 = &local_98;
    if (local_58[0] != '\0') {
      pplVar9 = (int64_t **)local_58;
    }
    local_98 = (int64_t *)CONCAT71(local_98._1_7_,local_58[0]);
    *(char *)pplVar9 = '\0';
    if ((local_58[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_98 == '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    uVar13 = FUN_00d23310();
    plVar3 = local_60;
    local_70 = (int64_t *)CONCAT71(local_70._1_7_,local_58[0]);
    pplVar9 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar9 = &local_70;
    }
    *(char *)pplVar9 = '\0';
    if ((local_58[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    local_d0 = 0;
    if ((char)local_70 == '\0') {
      if (plVar3 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_70 = (int64_t *)((uint64_t)local_70 & 0xffffffffffffff00);
    }
    local_d0 = '\x01';
    local_d8 = plVar3;
    local_148 = *arg1;
    local_140 = '\0';
    FUN_004f9d80(uVar13,&local_148);
    plVar3 = local_98;
    if (local_90 == '\0') {
      if (((local_98 != (int64_t *)0x0) && (FUN_00d50b00(), local_90 != '\0')) &&
         (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_90 = '\0';
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_e8 = plVar3;
    uVar13 = FUN_00d23310();
    plVar3 = local_60;
    pplVar9 = &local_70;
    pplVar12 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar12 = pplVar9;
    }
    local_70 = (int64_t *)CONCAT71(local_70._1_7_,local_58[0]);
    *(char *)pplVar12 = '\0';
    if ((local_58[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    pVar10 = (void*)pplVar9;
    local_c0 = 0;
    if ((char)local_70 == '\0') {
      if (plVar3 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_70 = (int64_t *)((uint64_t)local_70 & 0xffffffffffffff00);
    }
    plVar2 = local_e8;
    local_c0 = '\x01';
    local_c8 = plVar3;
    local_138 = *local_a8;
    local_130 = '\0';
    FUN_004f9d80(uVar13,&local_138);
    local_e0 = local_98;
    if (local_90 == '\0') {
      if (((local_98 != (int64_t *)0x0) && (FUN_00d50b00(), local_90 != '\0')) &&
         (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_90 = '\0';
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_128 = plVar2;
    local_120 = '\0';
    local_118 = *local_a8;
    local_110 = '\0';
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    local_b8 = local_60;
    local_b0 = 0;
    if (local_58[0] == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    plVar3 = local_a0;
    local_b0 = '\x01';
    FUN_012f0b60(&local_118,&local_128,0,0,&local_b8);
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_e0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_e8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    plVar7 = local_98;
    if ((g_0272a620 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_02799028 = FUN_00115af0();
      g_02799010 = "MUCustomAudioSource";
      g_02799018 = 0x78;
      param_1 = 0x49c5f0;
      g_02799020 = FUN_0049c5f0;
      g_02799030 = 0;
      ram_0000000002799038 = 0;
      g_02799040 = 0;
      ram_0000000002799048 = 0;
      g_02799050 = 0;
      ram_0000000002799058 = 0;
      g_02799060 = 0;
      ram_0000000002799068 = 0;
      g_02799070 = 0;
      ram_0000000002799078 = 0;
      g_02799080 = 0;
      ram_0000000002799088 = 0;
      g_02799090 = 0;
      ram_0000000002799098 = 0;
      g_027990a0 = 0;
      ram_00000000027990a8 = 0;
      g_027990b0 = 0;
      ram_00000000027990b8 = 0;
      g_027990c0 = 0;
      ram_00000000027990c8 = 0;
      g_027990d0 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      FUN_00e85ea0();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0164ceb0();
    if (local_60 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
    }
    else {
      plVar7 = (int64_t *)(**(code **)(*local_60 + 0x10))();
    }
    if ((g_0272a630 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_02708978 = FUN_0049c750();
      g_02708960 = "MUAraAudioSource";
      g_02708968 = 0x138;
      param_1 = 0x49c720;
      g_02708970 = FUN_0049c720;
      g_02708980 = 0;
      ram_0000000002708988 = 0;
      g_02708990 = 0;
      ram_0000000002708998 = 0;
      g_027089a0 = 0;
      ram_00000000027089a8 = 0;
      g_027089b0 = 0;
      ram_00000000027089b8 = 0;
      g_027089c0 = 0;
      ram_00000000027089c8 = 0;
      g_027089d0 = 0;
      ram_00000000027089d8 = 0;
      g_027089e0 = 0;
      ram_00000000027089e8 = 0;
      g_027089f0 = 0;
      ram_00000000027089f8 = 0;
      g_02708a00 = 0;
      ram_0000000002708a08 = 0;
      g_02708a10 = 0;
      ram_0000000002708a18 = 0;
      g_02708a20 = 0;
      ___cxa_guard_release();
    }
    bVar1 = true;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 != '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
    }
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0166dcf0(1,1,1);
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  uVar13 = (**(code **)(*(int64_t *)this_ptr[0x10] + 0x4a0))();
  plVar7 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 == (int64_t *)0x0) {
      return;
    }
    uVar13 = FUN_00d50b00();
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  else if (local_60 == (int64_t *)0x0) {
    return;
  }
  local_58[0] = 0;
  local_60 = (int64_t *)0x0;
  local_50 = plVar7;
  local_40 = 0;
  local_48 = 0;
  if (0 < *(int *)((int64_t)plVar7 + 0xc)) {
    lVar11 = 0;
    do {
      local_60 = *(int64_t **)(plVar7[2] + lVar11 * 8);
      local_108 = *arg1;
      local_100 = '\0';
      local_f8 = *local_a8;
      local_f0 = '\0';
      uVar13 = FUN_00652840(uVar13,&local_f8);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      lVar11 = lVar11 + 1;
      local_48 = CONCAT44(local_48._4_4_,(int)lVar11);
    } while ((int)lVar11 < *(int *)((int64_t)plVar7 + 0xc));
  }
  FUN_000ad7a0();
  FUN_00d50b20();
  return;
}

