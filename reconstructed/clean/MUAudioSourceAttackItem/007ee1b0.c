// Function: FUN_007ee1b0
// Address: 007ee1b0
// Size: 1577 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

uint64_t FUN_007ee1b0(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t **pplVar9;
  int iVar10;
  int64_t *plVar11;
  uint32_t uVar12;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar12 = FUN_007ec8d0();
  lVar5 = local_70;
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_007ee80d;
    uVar12 = FUN_00d50b00();
  }
  else if (local_70 == 0) goto LAB_007ee80d;
  local_68 = '\0';
  local_70 = 0;
  local_60 = lVar5;
  local_58 = 0xffffffff;
  local_50 = 0;
  iVar10 = 0;
  while( true ) {
    if (iVar10 != 0) {
      if (iVar10 < 1) {
        iVar10 = -iVar10;
      }
      else {
        local_58 = CONCAT44(local_58._4_4_,(int)local_58 - iVar10);
        FUN_00d23690(uVar12,iVar10);
        local_50 = local_50 + iVar10;
        iVar10 = 0;
      }
      local_58 = CONCAT44(iVar10,(int)local_58);
    }
    lVar5 = (int64_t)(int)local_58;
    iVar10 = (int)local_58 + 1;
    local_58 = CONCAT44(local_58._4_4_,iVar10);
    if (*(int *)(local_60 + 0xc) <= iVar10) break;
    lVar8 = *(int64_t *)(local_60 + 0x10);
    local_70 = *(int64_t *)(lVar8 + 8 + lVar5 * 8);
    pvVar6 = _pthread_getspecific((void*)lVar8);
    pVar7 = (void*)lVar8;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    plVar3 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_48 = plVar3;
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    plVar3 = local_40;
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_007ee400;
      }
LAB_007ee4b0:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = plVar3;
      local_98 = '\0';
      pVar7 = 0;
      uVar12 = FUN_0135d2e0(0,&local_a0);
      plVar11 = local_40;
      if (local_40 == (int64_t *)0x0) {
        bVar2 = false;
        plVar11 = (int64_t *)0x0;
      }
      else if (local_38 == '\0') {
        uVar12 = FUN_00d50b00();
        bVar2 = true;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar2 = true;
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      bVar1 = true;
      if (plVar11 != (int64_t *)0x0) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = '\0';
        local_80 = plVar3;
        local_78 = '\0';
        local_90 = plVar11;
        uVar12 = FUN_01367c80();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        goto LAB_007ee700;
      }
      plVar11 = (int64_t *)0x0;
    }
    else {
      if (local_40 == (int64_t *)0x0) goto LAB_007ee4b0;
LAB_007ee400:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd6a0();
      plVar11 = local_40;
      if ((g_02790f20 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
        g_0272f7c8 = FUN_007ef2d0();
        g_0272f7b0 = "MUAudioSourceAttackItem";
        g_0272f7b8 = 0xe8;
        g_0272f7c0 = FUN_007ef270;
        g_0272f7d0 = 0;
        ram_000000000272f7d8 = 0;
        g_0272f7e0 = 0;
        ram_000000000272f7e8 = 0;
        g_0272f7f0 = 0;
        ram_000000000272f7f8 = 0;
        g_0272f800 = 0;
        ram_000000000272f808 = 0;
        g_0272f810 = 0;
        ram_000000000272f818 = 0;
        g_0272f820 = 0;
        ram_000000000272f828 = 0;
        g_0272f830 = 0;
        ram_000000000272f838 = 0;
        g_0272f840 = 0;
        ram_000000000272f848 = 0;
        g_0272f850 = 0;
        ram_000000000272f858 = 0;
        g_0272f860 = 0;
        ram_000000000272f868 = 0;
        g_0272f870 = 0;
        ___cxa_guard_release();
      }
      pplVar9 = (int64_t **)&g_02802688;
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar9 = &local_40;
        if (cVar4 == '\0') {
          pplVar9 = (int64_t **)&g_02802688;
        }
      }
      plVar11 = *pplVar9;
      if (plVar11 == (int64_t *)0x0) {
        plVar11 = (int64_t *)0x0;
        bVar2 = false;
      }
      else {
        if (*(char *)(pplVar9 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar9 + 1) = 0;
        }
        bVar2 = true;
      }
      pVar7 = (void*)pplVar9;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_01367c80();
      bVar1 = false;
LAB_007ee700:
      if (!bVar1) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((bVar2) && (plVar11 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    plVar11 = local_48;
    if (plVar3 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    iVar10 = local_58._4_4_;
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_007ee80d:
  FUN_007ebe20();
  return 1;
}

