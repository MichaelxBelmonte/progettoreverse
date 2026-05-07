// Function: FUN_016f9740
// Address: 016f9740
// Size: 1790 bytes
// Class: Unknown

void FUN_016f9740(void* param_1,uint64_t param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  void* pVar5;
  void *pvVar6;
  void*puVar7;
  uint64_t uVar8;
  int extraout_var;
  uint64_t uVar9;
  void*puVar10;
  char *pcVar11;
  void*arg1;
  int64_t lVar12;
  int64_t lVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar14;
  uint64_t local_f0;
  uint8_t local_e8;
  uint64_t local_e0;
  uint8_t local_d8;
  int64_t local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  uint8_t local_b8;
  void*local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  int iStack_74;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_98 = param_2;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_90 = FUN_01909dc0();
  local_f0 = *arg1;
  local_e8 = 0;
  uVar14 = FUN_016ebbb0(extraout_XMM0_Da,&local_f0);
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if (local_48 == 0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = FUN_019079b0();
    FUN_00e7c260();
    bVar2 = false;
    local_50 = 0;
    local_88 = local_70;
  }
  else {
    local_e0 = *arg1;
    local_d8 = 0;
    FUN_016ebbb0(uVar14,&local_e0);
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = FUN_01909dc0();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_016d7110(0,local_88);
    local_50 = local_48;
    if (local_48 == 0) {
      local_50 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_40[0] == '\0') {
        FUN_00d50b00();
      }
    }
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10 = &g_02572358;
  *puVar7 = &g_02572358;
  (*g_02572370)();
  FUN_00e7b970();
  FUN_00e7bdc0();
  FUN_00e7cea0();
  FUN_00d21370();
  uVar9 = local_90;
  do {
    do {
      pvVar6 = _pthread_getspecific((void*)puVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018fcb10();
      FUN_01907b60();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e7b820();
      iStack_74 = (int)((uint64_t)uVar9 >> 0x20);
    } while ((iStack_74 == 0) || (local_88._4_4_ == 0));
    cVar3 = FUN_00e7c020();
    pVar5 = (void*)puVar10;
  } while (cVar3 != '\0');
  if (*(int *)((int64_t)puVar7 + 0xc) != 0) {
    pvVar6 = _pthread_getspecific(pVar5);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(pVar5);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_019079b0();
    uVar9 = 0;
    FUN_018fef60(0,uVar8);
    if (local_70 == 0) {
      bVar1 = true;
      lVar13 = 0;
      lVar12 = 0;
    }
    else {
      lVar13 = 1;
      if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) && (local_70 != 0)) {
        FUN_00d50b20();
      }
      bVar1 = false;
      lVar12 = local_70;
    }
    if ((bVar2) && (local_50 != 0)) {
      FUN_00d50b00();
    }
    cVar3 = (char)lVar13;
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      pvVar6 = _pthread_getspecific((void*)uVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_00d23340();
      pVar5 = (void*)CONCAT71((int7)((uint64_t)uVar9 >> 8),local_40[0]);
      pcVar11 = local_38;
      if (local_40[0] != '\0') {
        pcVar11 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar11 = '\0';
      if ((local_40[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar5);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = FUN_019079b0();
      cVar4 = '\0';
      if ((extraout_var != 0) && (local_a0 >> 0x20 != 0)) {
        cVar4 = FUN_00e7c020();
      }
      if ((local_38[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        lVar13 = 0;
        lVar12 = 0;
      }
      cVar3 = (char)lVar13;
      if (!bVar1 && cVar4 == '\x01') {
        cVar3 = '\0';
        lVar12 = 0;
        FUN_00d50b20();
      }
    }
    local_c8 = 0;
    local_c0 = local_50;
    local_b8 = 0;
    local_d0 = lVar12;
    pVar5 = FUN_00e7bdb0();
    local_a8 = 0;
    local_b0 = puVar7;
    uVar9 = FUN_00e7bdb0();
    FUN_016e9760(0,&local_c0,&local_b0,uVar9);
    pvVar6 = _pthread_getspecific(pVar5);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018f9310();
    if ((bVar2) && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((cVar3 != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if ((bVar2) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}

