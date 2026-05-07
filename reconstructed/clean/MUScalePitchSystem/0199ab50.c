// Function: FUN_0199ab50
// Address: 0199ab50
// Size: 1384 bytes
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


void FUN_0199ab50(void* param_1)

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
  int64_t local_c0;
  char local_b8;
  int64_t local_90;
  char local_88;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
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
  FUN_01265ae0();
  lVar1 = this_ptr[0x70];
  lVar4 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_0199abfe;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0x70];
      this_ptr[0x70] = local_40;
      lVar4 = local_40;
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
LAB_0199abfe:
      this_ptr[0x70] = lVar4;
    }
    param_1 = (void*)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  local_48 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_90;
  pVar7 = 0;
  (**(code **)((int64_t)&linkedit_data_command_000013f8.dataoff + *this_ptr))(0,&local_50);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_01264970();
  lVar1 = *(int64_t *)(local_c0 + 0x28);
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        *(void*)(local_c0 + 0x28) = 0;
      }
      else {
        uVar8 = FUN_00d50b00();
        lVar1 = *(int64_t *)(local_c0 + 0x28);
        *(int64_t *)(local_c0 + 0x28) = local_40;
      }
    }
    else {
      local_38 = '\0';
      *(int64_t *)(local_c0 + 0x28) = local_40;
    }
    if (lVar1 != 0) {
      uVar8 = FUN_00d50b20();
    }
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar1 = this_ptr[0x70];
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b00();
  }
  (**(code **)("/usr/lib/libobjc.A.dylib" + *this_ptr))(uVar8,0);
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
  if (lVar4 == local_40) goto LAB_0199aec5;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar6 = 0;
      goto LAB_0199ae77;
    }
    FUN_00d50b00();
    lVar4 = this_ptr[0x71];
    this_ptr[0x71] = local_40;
    lVar6 = local_40;
  }
  else {
    local_38 = '\0';
    lVar6 = local_40;
LAB_0199ae77:
    this_ptr[0x71] = lVar6;
  }
  pVar7 = (void*)lVar4;
  if (lVar4 != 0) {
    FUN_00d50b20();
    lVar6 = local_40;
  }
LAB_0199aec5:
  if ((local_38 != '\0') && (lVar6 != 0)) {
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

