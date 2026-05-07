// Function: FUN_0199b3a0
// Address: 0199b3a0
// Size: 1793 bytes
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


void FUN_0199b3a0(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *this_ptr;
  uint32_t uVar8;
  uint64_t uVar9;
  int64_t local_c8;
  char local_c0;
  int64_t local_98;
  char local_90;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  (**(code **)("/usr/lib/libobjc.A.dylib" + *this_ptr + 0x18))();
  if ((int64_t *)this_ptr[0x69] == (int64_t *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*(int64_t *)this_ptr[0x69] + 0x50))();
  if (cVar2 != '\0') {
    return;
  }
  if (*(char *)((int64_t)this_ptr + 0x4dd) == '\0') {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c150(g_0238fee8);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c160(0);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265ae0();
  lVar1 = this_ptr[0x70];
  lVar4 = lVar1;
  if (lVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        goto LAB_0199b4d7;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0x70];
      this_ptr[0x70] = local_38;
      lVar4 = local_38;
    }
    else {
      local_30 = '\0';
      lVar4 = local_38;
LAB_0199b4d7:
      this_ptr[0x70] = lVar4;
    }
    param_1 = (void*)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264970();
  lVar1 = this_ptr[0x6f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01539260();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264970();
  FUN_015392e0(this_ptr[0x74]);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  local_40 = 0;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_40 = '\x01';
  local_48 = local_98;
  pVar7 = 0;
  (**(code **)((int64_t)&linkedit_data_command_000013f8.dataoff + *this_ptr))(0,&local_48);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01264970();
  lVar1 = *(int64_t *)(local_c8 + 0x28);
  if (lVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(local_c8 + 0x28) = 0;
      }
      else {
        uVar9 = FUN_00d50b00();
        lVar1 = *(int64_t *)(local_c8 + 0x28);
        *(int64_t *)(local_c8 + 0x28) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(local_c8 + 0x28) = local_38;
    }
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar1 = this_ptr[0x70];
  if (lVar1 != 0) {
    uVar9 = FUN_00d50b00();
  }
  (**(code **)("/usr/lib/libobjc.A.dylib" + *this_ptr))(uVar9,0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_016779b0();
  lVar4 = this_ptr[0x71];
  lVar6 = lVar4;
  if (lVar4 == local_38) goto LAB_0199b8a6;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar6 = 0;
      goto LAB_0199b85b;
    }
    FUN_00d50b00();
    lVar4 = this_ptr[0x71];
    this_ptr[0x71] = local_38;
    lVar6 = local_38;
  }
  else {
    local_30 = '\0';
    lVar6 = local_38;
LAB_0199b85b:
    this_ptr[0x71] = lVar6;
  }
  pVar7 = (void*)lVar4;
  if (lVar4 != 0) {
    FUN_00d50b20();
    lVar6 = local_38;
  }
LAB_0199b8a6:
  if ((local_30 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_01264170();
  FUN_01677b30(0,uVar8,g_0238fee8);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar5 = (int64_t *)FUN_00e8b990();
  lVar1 = this_ptr[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0x3a0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  FUN_00cb1fa0();
  plVar5 = (int64_t *)this_ptr[0x69];
  lVar1 = this_ptr[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0xf0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

