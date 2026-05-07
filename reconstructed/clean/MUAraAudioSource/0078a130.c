// Function: FUN_0078a130
// Address: 0078a130
// Size: 2429 bytes
// Class: MUAraAudioSource
// String references:
//   "%@.%I"
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


void* FUN_0078a130(void* param_1,int64_t *param_2)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  void *pvVar5;
  uint64_t uVar6;
  undefined7 uVar7;
  undefined7 extraout_var;
  void* pVar8;
  int64_t *plVar9;
  int64_t *arg1;
  void*this_ptr;
  void*puVar10;
  char cVar11;
  void*puVar12;
  void*puVar13;
  uint7 uVar15;
  uint64_t uVar14;
  bool bVar16;
  int64_t local_150;
  char local_148;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  void*local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  void*local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  int local_8c;
  void*local_88;
  char local_80;
  void*local_78;
  char local_70;
  void*local_68;
  uint local_60;
  void*local_58;
  char local_50;
  int local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  if (*param_2 == 0) {
    FUN_00757c60();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    puVar10 = local_68;
    if (local_68 == (void*)0x0) {
      puVar10 = (void*)0x0;
      cVar11 = '\0';
    }
    else if ((char)local_60 == '\0') {
      FUN_00d50b00();
      cVar11 = '\x01';
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
      cVar11 = '\x01';
    }
    if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_026f6f70;
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02729650;
    local_110 = lVar2;
    local_108 = '\x01';
    if (g_02729650 != 0) {
      FUN_00d50b00();
    }
    local_100 = lVar3;
    local_f8 = '\x01';
    local_f0 = 0;
    local_e8 = '\0';
    plVar9 = &local_f0;
    uVar6 = FUN_00d31230(plVar9,&local_100);
    puVar13 = local_68;
    pVar8 = (void*)plVar9;
    if (local_68 == (void*)0x0) {
      puVar13 = (void*)0x0;
      local_40 = 0;
    }
    else if ((char)local_60 == '\0') {
      uVar6 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
      local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_8c = *(int *)((int64_t)local_68 + 0xc);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    goto LAB_0078a854;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012e6a50();
  puVar10 = local_68;
  if (local_68 == (void*)0x0) {
    puVar10 = (void*)0x0;
    local_38 = 0;
  }
  else {
    local_38 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    if ((char)local_60 == '\0') {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_68 = (void*)*param_2;
  local_60 = local_60 & 0xffffff00;
  iVar4 = FUN_00d237a0();
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  puVar13 = local_68;
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6f70;
  local_8c = iVar4 + 1;
  if (puVar13 == (void*)0x0) {
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02729650;
    cVar11 = (char)local_38;
    if (g_02729650 != 0) {
      FUN_00d50b00();
    }
    local_130 = lVar3;
    local_128 = '\x01';
    local_120 = 0;
    local_118 = '\0';
    uVar6 = FUN_00d31230(&local_120,&local_130);
    puVar13 = local_68;
    if (local_68 == (void*)0x0) {
      puVar13 = (void*)0x0;
      local_40 = 0;
    }
    else if ((char)local_60 == '\0') {
      uVar6 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
      local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0078a854;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012e6000();
  puVar12 = local_68;
  if (local_68 == (void*)0x0) {
    bVar1 = 1;
    puVar12 = (void*)0x0;
    local_40 = 0;
  }
  else if ((char)local_60 == '\0') {
    uVar6 = FUN_00d50b00();
    bVar1 = 0;
    local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
      uVar6 = FUN_00d50b20();
      local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      bVar1 = 0;
    }
  }
  else {
    bVar1 = 0;
    local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
  }
  local_60 = 2;
  local_68 = &g_024c5048;
  local_50 = 0;
  if (puVar12 != (void*)0x0) {
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_68 = (void*)&g_025df2a0;
  local_58 = puVar12;
  local_48 = iVar4 + 2;
  uVar6 = FUN_00d8cb40();
  puVar13 = local_78;
  uVar15 = (uint7)(uint3)((uint)(iVar4 + 2) >> 8);
  uVar7 = (undefined7)((uint64_t)uVar6 >> 8);
  cVar11 = (char)local_38;
  if (local_78 == puVar12) {
    puVar13 = puVar12;
    if ((bool)(bVar1 & local_78 != (void*)0x0)) {
      if (local_70 != '\0') goto LAB_0078a585;
      uVar14 = CONCAT71(uVar15,1);
      FUN_00d50b00();
    }
    else {
      uVar14 = local_40 & 0xffffffff;
    }
LAB_0078a812:
    if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_70 == '\0') {
      if (local_78 != (void*)0x0) {
        FUN_00d50b00();
      }
      uVar14 = CONCAT71(uVar15,1);
      if (((byte)local_40 & puVar12 != (void*)0x0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_0078a812;
    }
    bVar16 = puVar12 != (void*)0x0;
    puVar12 = puVar13;
    if (((byte)local_40 & bVar16) == 1) {
      FUN_00d50b20();
      uVar7 = extraout_var;
    }
LAB_0078a585:
    local_70 = '\0';
    puVar13 = puVar12;
    uVar14 = CONCAT71(uVar7,1);
  }
  local_40 = uVar14;
  local_68 = &g_024c5048;
  if ((local_50 != '\0') && (local_68 = &g_024c5048, local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
LAB_0078a854:
  local_d8 = '\0';
  local_c8 = '\0';
  pVar8 = 0;
  local_e0 = puVar13;
  local_d0 = puVar10;
  FUN_004f83c0(0,&local_d0);
  puVar12 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0x628))();
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c0 = puVar12;
  local_b8 = '\0';
  local_b0 = puVar12;
  local_a8 = '\0';
  FUN_004a11d0();
  local_88 = local_78;
  local_80 = 0;
  if (local_70 == '\0') {
    if (local_78 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_80 = '\x01';
  local_98 = '\0';
  local_a0 = puVar10;
  FUN_004a17d0(local_8c,&local_a0);
  if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar12;
  *(void*)(this_ptr + 1) = 1;
  if (((char)local_40 != '\0') && (puVar13 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar11 != '\0') && (puVar10 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

