// Function: FUN_0035e960
// Address: 0035e960
// Size: 7583 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_0035e960(void* param_1)

{
  code *pcVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  uint64_t uVar5;
  void *pvVar6;
  void*puVar7;
  uint64_t uVar8;
  int64_t lVar9;
  void* pVar10;
  int64_t *plVar12;
  int iVar13;
  int64_t *this_ptr;
  bool bVar14;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  void*local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
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
  char local_e0;
  int64_t local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  uint32_t local_ac;
  void*local_a8;
  uint32_t local_9c;
  void*local_98;
  int64_t local_90;
  int64_t *local_88;
  char local_80;
  void*local_78;
  uint64_t local_70;
  int local_68;
  char local_59;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t lVar11;
  
  uVar5 = (**(code **)(*this_ptr + 0x368))();
  if ((char)uVar5 != '\0') goto LAB_00360742;
  if (*(char *)((int64_t)this_ptr + 0xa2) != '\0') {
    FUN_01f27fe0();
    uVar5 = (**(code **)(*local_88 + 0x558))();
    cVar4 = (char)uVar5;
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      uVar5 = FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      return;
    }
  }
  local_ac = (uint32_t)
             CONCAT71((int7)((uint64_t)uVar5 >> 8),*(void*)((int64_t)this_ptr + 0xa1));
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  local_138 = local_c0;
  local_130 = 0;
  if (local_b8 == '\0') {
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_b8 = '\0';
  }
  local_130 = '\x01';
  local_59 = FUN_01511080();
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)this_ptr[0x14] != '\0') {
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
    local_128 = local_88;
    local_120 = 0;
    if (local_80 == '\0') {
      if (local_88 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_120 = '\x01';
    cVar4 = FUN_0076e4d0();
    if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_118 = local_40;
      local_110 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_110 = '\x01';
      FUN_016cbba0();
      plVar12 = local_88;
      if (local_80 == '\0') {
        if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
           (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80 = '\0';
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (((double)this_ptr[0x10] != 0.0) || (NAN((double)this_ptr[0x10]))) {
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016ea7c0(this_ptr[0x10]);
      }
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
      FUN_012cae50();
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_ac = 0;
    }
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar1 = g_02572370;
  local_a8 = puVar7;
  (*g_02572370)();
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
  plVar12 = local_88;
  if (local_80 == '\0') {
    if (local_88 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  FUN_0035bbc0();
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  puVar7 = local_a8;
  iVar13 = *(int *)((int64_t)local_a8 + 0xc);
  if (1 < iVar13) {
    FUN_00d242c0();
    iVar13 = *(int *)((int64_t)puVar7 + 0xc);
  }
  if ((iVar13 == 1) && (this_ptr[0x12] != 0)) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_012e6040();
    if ((int)uVar5 != 1) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_012e6040();
      if ((int)uVar5 != 2) goto LAB_0035f254;
    }
    local_9c = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
  }
  else {
LAB_0035f254:
    local_9c = 0;
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar1)();
  local_98 = puVar7;
  if (local_59 != '\0') {
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
    FUN_012e7210();
    lVar9 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = (int64_t *)lVar9;
    local_80 = '\0';
    FUN_00d214d0();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    plVar12 = local_88;
    if (local_80 == '\0') {
      if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
         (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_90 = (int64_t)plVar12;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313b00();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015058d0();
    local_58 = (int64_t)local_88;
    if (local_80 == '\0') {
      if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
         (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_80 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (((double)this_ptr[0x10] != 0.0) || (NAN((double)this_ptr[0x10]))) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505900();
      plVar2 = local_88;
      if (local_80 == '\0') {
        if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
           (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505900();
      plVar3 = local_88;
      if (local_80 == '\0') {
        if (((local_88 != (int64_t *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
           (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80 = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_248 = (int64_t)plVar3;
      local_240 = '\0';
      local_238 = (int64_t)plVar2;
      local_230 = '\0';
      local_d8 = this_ptr[0x10];
      uVar5 = FUN_00e7bdb0();
      uVar8 = FUN_00e7bdb0();
      local_220 = '\0';
      local_228 = 0;
      pVar10 = (void*)&local_238;
      FUN_01516650(local_d8,&local_248,uVar5,uVar8);
      if ((local_220 != '\0') && (local_228 != 0)) {
        FUN_00d50b20();
      }
      if ((local_230 != '\0') && (local_238 != 0)) {
        FUN_00d50b20();
      }
      if ((local_240 != '\0') && (local_248 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_218 = local_58;
      local_210 = '\0';
      local_208 = (int64_t)plVar3;
      local_200 = '\0';
      local_1f8 = (int64_t)plVar2;
      local_1f0 = '\0';
      local_d8 = this_ptr[0x10];
      uVar5 = FUN_00e7bdb0();
      uVar8 = FUN_00e7bdb0();
      local_1e0 = '\0';
      local_1e8 = 0;
      FUN_01516720(local_d8,&local_208,uVar5,uVar8);
      plVar12 = (int64_t *)local_90;
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_200 != '\0') && (local_208 != 0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_1d8 = local_58;
      local_1d0 = '\0';
      FUN_015127c0();
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_80 = '\0';
  local_88 = (int64_t *)0x0;
  local_78 = local_a8;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_70._4_4_ = 0;
  local_58 = 0;
  cVar4 = '\0';
  while( true ) {
    if (local_70._4_4_ != 0) {
      if (local_70._4_4_ < 1) {
        iVar13 = -local_70._4_4_;
      }
      else {
        iVar13 = (int)local_70 - local_70._4_4_;
        local_70 = CONCAT44(local_70._4_4_,iVar13);
        FUN_00d23690();
        local_68 = local_68 + local_70._4_4_;
        iVar13 = 0;
      }
      local_70 = CONCAT44(iVar13,(int)local_70);
    }
    lVar9 = (int64_t)(int)local_70;
    iVar13 = (int)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar13);
    if (*(int *)((int64_t)local_78 + 0xc) <= iVar13) break;
    lVar11 = local_78[2];
    local_88 = *(int64_t **)(lVar11 + 8 + lVar9 * 8);
    pvVar6 = _pthread_getspecific((void*)lVar11);
    pVar10 = (void*)lVar11;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    local_108 = local_50;
    local_100 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      lVar9 = this_ptr[0x12];
    }
    else {
      local_48 = '\0';
      lVar9 = this_ptr[0x12];
    }
    local_100 = '\x01';
    if (lVar9 != 0) {
      local_100 = '\x01';
      local_180 = 0;
      FUN_00d50b00();
    }
    lVar11 = local_58;
    local_180 = '\x01';
    plVar12 = &local_188;
    local_188 = lVar9;
    FUN_004a41a0(plVar12,&local_108,0);
    lVar9 = local_40;
    pVar10 = (void*)plVar12;
    if (local_40 == lVar11) {
      lVar9 = lVar11;
      if ((cVar4 == '\0') && (local_40 != 0)) {
        if (local_38 != '\0') goto LAB_0035fe33;
        local_90 = CONCAT71(local_90._1_7_,1);
        FUN_00d50b00();
      }
      else {
        local_90 = CONCAT71(local_90._1_7_,cVar4);
      }
joined_r0x0035fe91:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_90 = CONCAT71(local_90._1_7_,1);
        if ((cVar4 != '\0') && (lVar11 != 0)) {
          FUN_00d50b20();
        }
        goto joined_r0x0035fe91;
      }
      if ((cVar4 != '\0') && (lVar11 != 0)) {
        FUN_00d50b20();
      }
LAB_0035fe33:
      local_38 = '\0';
      local_90 = CONCAT71(local_90._1_7_,1);
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_58 = lVar9;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_170 = 0;
    lVar11 = this_ptr[0xe];
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    local_170 = '\x01';
    local_1c8 = local_88;
    local_1c0 = '\0';
    local_1b0 = '\0';
    local_1b8 = lVar9;
    local_178 = lVar11;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    local_f8 = local_50;
    local_f0 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_f0 = '\x01';
    local_d8 = this_ptr[0x10];
    lVar9 = this_ptr[0x11];
    local_160 = 0;
    lVar11 = this_ptr[8];
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    local_160 = '\x01';
    pVar10 = (void*)&local_1b8;
    local_168 = lVar11;
    FUN_01313b30(local_d8,&local_1c8,&local_f8,lVar9);
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_59 == '\0') {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_012e5ae0();
      lVar9 = local_50;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar5 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_40 = lVar9;
      local_38 = '\0';
      FUN_00d214d0(uVar5,*(void*)((int64_t)local_98 + 0xc));
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    cVar4 = (char)local_90;
  }
  puVar7 = local_78;
  FUN_000be170();
  pVar10 = (void*)puVar7;
  local_1a8 = local_98;
  local_1a0 = '\0';
  FUN_012879b0();
  if ((local_1a0 != '\0') && (local_1a8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_9c != '\0') {
    pvVar6 = _pthread_getspecific(pVar10);
    if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar10 = (void*)local_58;
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6040();
    FUN_012e6050();
    pvVar6 = _pthread_getspecific(pVar10);
    if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar10 = (void*)local_58;
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e60a0();
    local_e8 = local_88;
    local_e0 = 0;
    if (local_80 == '\0') {
      if (local_88 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_e0 = '\x01';
    FUN_012e60e0();
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_198 = local_58;
    local_190 = '\0';
    FUN_004a2840();
    if ((local_190 != '\0') && (local_198 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((this_ptr[0x12] != 0) && (*(int *)((int64_t)local_a8 + 0xc) != 0)) {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_88 == (int64_t *)0x0) {
      bVar14 = true;
    }
    else {
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      bVar14 = *(int *)(local_40 + 0xc) == 0;
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar14) {
      local_150 = 0;
      lVar9 = this_ptr[0x12];
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      local_150 = '\x01';
      local_158 = lVar9;
      FUN_004a1bd0();
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar9 = FUN_00e8b990();
  if (lVar9 != 0) {
    *(float *)((int64_t)this_ptr + 0x5c) = g_02390124 - *(float *)(this_ptr + 0xb);
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_140 = 0;
    (**(code **)(this_ptr[4] + 0x10))();
    FUN_00d50b00();
    local_140 = '\x01';
    local_148 = this_ptr + 4;
    FUN_00cb1fa0();
    if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
      (**(code **)(*local_148 + 0x10))();
      FUN_00d50b20();
    }
  }
  if (local_98 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_a8 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_00360742:
  FUN_003902c0();
  return;
}

