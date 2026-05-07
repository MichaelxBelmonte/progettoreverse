// Function: FUN_0164f500
// Address: 0164f500
// Size: 1318 bytes
// Class: MULSSGenerator

uint64_t FUN_0164f500(void* param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_98;
  char local_90;
  uint64_t local_70;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_0184a0c0();
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  lVar8 = *(int64_t *)(lVar8 + 0xa8);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  lVar5 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar5 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar5 + 0xa8) != 0) {
    *(void*)(lVar5 + 0xa8) = 0;
    FUN_00d50b20();
  }
  if ((lVar8 == 0) || (cVar3 = FUN_0131bcd0(), cVar3 != '\0')) {
    if (lVar8 == 0) {
      bVar2 = true;
      local_70 = 0;
      bVar1 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      FUN_00d23310();
      param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
      pcVar7 = local_38;
      if (local_40[0] != '\0') {
        pcVar7 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c9740();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_38[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = g_02727928;
      if (g_02727928 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar8 = g_02727930;
      if (g_02727930 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar8 = g_02727938;
      if (g_02727938 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01823610();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      local_70 = 1;
      bVar2 = false;
      bVar1 = false;
    }
  }
  else {
    FUN_00d50b20();
    bVar2 = true;
    local_70 = 0;
    bVar1 = true;
  }
  FUN_0164e420();
  lVar8 = *arg1;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(void*)(this_ptr + 0xb0) = *(void*)(lVar8 + 0xb0);
  if (param_2 != '\0') {
    lVar8 = *arg1;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar8 = *arg1;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(void*)(this_ptr + 0xb1) = *(void*)(lVar8 + 0xb1);
  }
  FUN_01733c40();
  if (!bVar1 && !bVar2) {
    FUN_00d50b20();
  }
  return local_70;
}

