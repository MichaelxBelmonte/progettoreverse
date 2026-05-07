// Function: FUN_019fc330
// Address: 019fc330
// Size: 1463 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void* FUN_019fc330(int64_t *param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  uint32_t uVar3;
  int64_t *plVar4;
  void *pvVar5;
  void* pVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  void*puVar8;
  int64_t local_140;
  void*local_100;
  char local_f8;
  void*local_f0;
  char local_e8;
  void*local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  void*local_b0;
  int64_t local_a8;
  uint32_t local_9c;
  void*local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  void*local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  lVar7 = *param_2;
  local_31 = (char)param_2[1];
  if ((local_31 != '\0') && (lVar7 != 0)) {
    FUN_00d50b00();
  }
  local_a8 = lVar7;
  if (*(int64_t *)(arg1 + 0x20) == 0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar7 = *(int64_t *)(arg1 + 0x20);
    *(int64_t **)(arg1 + 0x20) = plVar4;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  local_140 = local_a8;
  FUN_00083ea0(2,&local_140);
  FUN_019f9540();
  local_80 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  local_78 = (void*)&g_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_78 = &g_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = FUN_00ca18c0();
  lVar7 = local_80;
  if ((char)uVar3 != '\0') {
    local_c0 = local_80;
    local_b8 = '\0';
    FUN_00c9fe40();
    puVar8 = local_78;
    plVar4 = &local_70;
    if ((char)local_70 == '\0') {
      plVar4 = &local_48;
    }
    local_48 = CONCAT71(local_48._1_7_,(char)local_70);
    *(void*)plVar4 = 0;
    if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar8 == (void*)0x0) {
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = true;
      bVar1 = true;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_b8 != '\0') && (bVar1 = bVar2, local_c0 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_019fc891;
  }
  FUN_017178d0();
  puVar8 = local_78;
  if (local_78 == (void*)0x0) {
    local_9c = (uint32_t)CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
  }
  else {
    if ((char)local_70 == '\0') {
      FUN_00d50b00();
      local_9c = 0;
      if (((char)local_70 == '\0') || (local_78 == (void*)0x0)) goto LAB_019fc5c9;
      FUN_00d50b20();
    }
    else {
      local_70._0_1_ = '\0';
    }
    local_9c = 0;
  }
LAB_019fc5c9:
  local_100 = puVar8;
  local_f8 = '\0';
  pVar6 = 0;
  local_b0 = puVar8;
  FUN_017921e0(0,&local_100,0);
  lVar7 = local_80;
  local_98 = local_78;
  if ((char)local_70 == '\0') {
    if (((local_78 != (void*)0x0) && (FUN_00d50b00(), (char)local_70 != '\0')) &&
       (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70._0_1_ = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = local_98;
  local_e8 = '\0';
  if (*param_1 == 0) {
    local_40 = '\0';
    local_48 = 0;
LAB_019fc741:
    local_90 = 0;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    local_90 = local_48;
    local_88 = 0;
    if (local_40 == '\0') {
      if (local_48 == 0) goto LAB_019fc741;
      FUN_00d50b00();
    }
    else {
      local_40 = '\0';
    }
  }
  local_88 = '\x01';
  FUN_01718c10();
  puVar8 = local_78;
  if (local_78 == (void*)0x0) {
    bVar1 = false;
  }
  else if ((char)local_70 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
    if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70._0_1_ = '\0';
    bVar1 = true;
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_e0 = puVar8;
  local_d8 = '\0';
  local_d0 = lVar7;
  local_c8 = '\0';
  FUN_00ca0840();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_98 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_9c == '\0' && local_b0 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_019fc891:
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (puVar8 != (void*)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

