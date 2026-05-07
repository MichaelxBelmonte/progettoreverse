// Function: FUN_01b7d2f0
// Address: 01b7d2f0
// Size: 1097 bytes
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


uint64_t FUN_01b7d2f0(void* param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  void *pvVar7;
  uint64_t uVar8;
  void* pVar9;
  void*puVar10;
  char *pcVar11;
  int64_t *this_ptr;
  uint8_t local_78 [8];
  uint8_t local_70 [8];
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar3 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar3 == '\0') {
    (**(code **)(*this_ptr + 0x370))();
    uVar4 = (**(code **)(*local_68 + 0x3b8))();
    uVar6 = (uint64_t)uVar4;
    if (local_60[0] == '\0') {
      return uVar6;
    }
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b20();
      return uVar6;
    }
    return uVar6;
  }
  cVar3 = (**(code **)(*this_ptr + 0x9d0))();
  if (cVar3 == '\0') {
    return 0;
  }
  uVar6 = (**(code **)(*this_ptr + 0x9e0))();
  if (uVar6 >> 0x20 == 0) {
    return 0;
  }
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  uVar6 = (**(code **)(*this_ptr + 0x9e0))();
  if (uVar6 >> 0x20 != 0) {
    lVar1 = this_ptr[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = (**(code **)(*this_ptr + 0x9e0))();
    FUN_012521f0(uVar8,0,local_78,local_70);
    pVar9 = (void*)CONCAT71((int7)((uint64_t)uVar8 >> 8),local_60[0]);
    pcVar11 = local_40;
    if (local_60[0] != '\0') {
      pcVar11 = local_60;
    }
    local_40[0] = local_60[0];
    *pcVar11 = '\0';
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar10 = local_78;
    FUN_012535e0(puVar10,&local_58,local_70,0);
    pVar9 = (void*)puVar10;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x2b];
    goto joined_r0x01b7d658;
  }
  lVar1 = this_ptr[0x2b];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar1;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar10 = local_78;
  FUN_012527b0(puVar10,0,local_70,0);
  pVar9 = (void*)CONCAT71((int7)((uint64_t)puVar10 >> 8),local_60[0]);
  pcVar11 = local_38;
  if (local_60[0] != '\0') {
    pcVar11 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar11 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = local_50;
  plVar2 = local_58;
  if (local_58 == local_68) {
    if ((local_50 == '\0') && (local_68 != (int64_t *)0x0)) {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01b7d639;
    }
    if ((local_38[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_58 = local_68;
      if ((cVar3 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = local_68;
      if ((local_50 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01b7d639:
    local_50 = '\x01';
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x2b];
joined_r0x01b7d658:
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_01253c10(local_78,&local_58,local_70,0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar5 == '\0') {
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    return 0;
  }
  if (param_2 != '\0') {
    (**(code **)(*this_ptr + 0x9f8))();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
}

