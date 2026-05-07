// Function: FUN_0048a720
// Address: 0048a720
// Size: 1826 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0048a720(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  char *pcVar9;
  void* pVar10;
  int64_t **pplVar11;
  int64_t this_ptr;
  int64_t *plVar12;
  bool bVar13;
  uint64_t uVar14;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t local_68;
  char local_60;
  byte local_51;
  int64_t *local_50;
  char local_48 [8];
  char local_38 [8];
  
  iVar5 = FUN_01d6fde0();
  if (iVar5 != 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x998))();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a500();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0141b7f0();
    local_78 = local_50;
    if (local_48[0] == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a500();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0141b7f0();
    plVar12 = local_50;
    if (local_48[0] == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_026f6f08;
    if (g_026f6f08 != 0) {
      FUN_00d50b00();
    }
    local_70 = plVar12;
    FUN_00e7d6f0();
    uVar14 = FUN_0071a120();
    if ((((local_48[0] == '\0') && (local_50 != (int64_t *)0x0)) &&
        (uVar14 = FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (int64_t *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    local_68 = lVar2;
    local_60 = '\0';
    FUN_000175c0(uVar14,&local_68);
    plVar3 = local_50;
    if (local_48[0] == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_48[0] = '\0';
      local_50 = plVar3;
      uVar6 = FUN_00c70bc0();
      plVar12 = (int64_t *)(uint64_t)uVar6;
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    local_51 = plVar3 != (int64_t *)0x0;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    local_51 = local_51 & (byte)plVar12;
    plVar12 = local_70;
    for (iVar5 = 0; iVar7 = FUN_01d6fde0(), iVar5 < iVar7; iVar5 = iVar5 + 1) {
      FUN_01d701d0(extraout_XMM0_Qa,iVar5);
      plVar3 = local_50;
      local_38[0] = local_48[0];
      pcVar9 = local_48;
      if (local_48[0] == '\0') {
        pcVar9 = local_38;
      }
      *pcVar9 = '\0';
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar14 = FUN_01d66da0();
      lVar2 = g_02726cf0;
      if (g_02726cf0 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_a8 = lVar2;
      local_a0 = '\x01';
      uVar14 = FUN_000175c0(uVar14,&local_a8);
      plVar12 = local_50;
      if ((g_026fd0c0 == '\0') &&
         (iVar7 = ___cxa_guard_acquire(), uVar14 = extraout_XMM0_Qa_01, iVar7 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        uVar14 = ___cxa_guard_release();
      }
      pplVar11 = (int64_t **)&g_02802688;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar11 = &local_50;
        uVar14 = extraout_XMM0_Qa_00;
        if (cVar4 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          uVar14 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
      }
      pVar10 = (void*)pplVar11;
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      bVar13 = true;
      if (plVar1 != (int64_t *)0x0 && local_51 == 0) {
        local_90 = '\0';
        local_98 = plVar1;
        uVar14 = FUN_0141af60();
        plVar12 = local_50;
        if (local_48[0] == '\0') {
          if (((local_50 != (int64_t *)0x0) && (uVar14 = FUN_00d50b00(), local_48[0] != '\0')) &&
             (local_50 != (int64_t *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
        }
        else {
          local_48[0] = '\0';
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if (plVar12 != (int64_t *)0x0) {
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar7 = FUN_0141bab0();
          bVar13 = iVar7 != 3;
          uVar14 = FUN_00d50b20();
        }
      }
      plVar12 = local_70;
      FUN_01d70db0(uVar14,bVar13);
      if (plVar12 != (int64_t *)0x0) {
        local_80 = '\0';
        local_88 = plVar1;
        cVar4 = (**(code **)(*plVar12 + 0x50))();
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          FUN_01d6ed40();
          (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x998))();
        }
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

