// Function: FUN_0135abc0
// Address: 0135abc0
// Size: 1352 bytes
// Class: Unknown

void FUN_0135abc0(void)

{
  uint uVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  void *pvVar5;
  uint64_t uVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *plVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t *local_120;
  uint8_t local_118;
  uint64_t local_110;
  uint8_t local_108;
  int64_t *local_100;
  uint8_t local_f8;
  int64_t local_f0;
  uint8_t local_e8;
  uint64_t local_e0;
  uint8_t local_d8;
  uint64_t local_d0;
  uint8_t local_c8;
  void*local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  uint local_6c;
  void*local_68;
  void*local_60;
  uint64_t local_58;
  uint64_t local_50;
  int64_t *local_48;
  char local_40;
  
  if (*(int *)(*arg1 + 0xc) == 0) {
    return;
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  local_60 = puVar3;
  FUN_00c92160();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar4 = *arg1;
  uVar1 = *(uint *)(lVar4 + 0xc);
  if (0 < (int)uVar1) {
    plVar8 = (int64_t *)0x0;
    uVar12 = 0;
    plVar10 = (int64_t *)0x0;
    uVar11 = 0;
    local_6c = uVar1;
    local_b0 = (uint64_t)uVar1;
    local_68 = puVar3;
    do {
      pVar7 = local_6c - 1;
      uVar6 = (uint64_t)pVar7;
      lVar4 = *(int64_t *)(lVar4 + 0x10);
      plVar9 = *(int64_t **)(lVar4 + uVar6 * 8);
      local_6c = pVar7;
      if (plVar8 == plVar9) {
        plVar9 = plVar8;
        local_50 = uVar12;
        if (((char)uVar12 == '\0') && (plVar8 != (int64_t *)0x0)) {
          local_50 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
          FUN_00d50b00();
          pVar7 = (void*)uVar6;
        }
      }
      else {
        if (plVar9 != (int64_t *)0x0) {
          lVar4 = FUN_00d50b00();
          pVar7 = (void*)uVar6;
        }
        local_50 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
        if (((char)uVar12 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar8 = plVar9;
      pvVar5 = _pthread_getspecific(pVar7);
      plVar9 = plVar8;
      if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar9 + 0x380))();
      pvVar5 = _pthread_getspecific(pVar7);
      plVar9 = plVar8;
      if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar9 + 0x388))();
      FUN_00e7b4e0();
      local_118 = 0;
      local_110 = 0;
      local_108 = 0;
      local_a0 = 0;
      local_98 = '\0';
      local_90 = 0;
      local_88 = '\0';
      local_120 = plVar8;
      MUAudioSourceDescription__activateItem(1,&local_120,&local_110,&local_a0);
      plVar9 = local_48;
      if (local_48 == plVar10) {
        if (((char)uVar11 == '\0') && (local_48 != (int64_t *)0x0)) {
          uVar11 = 1;
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
        }
        else if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = uVar11;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          uVar11 = 1;
          if (((char)local_58 == '\0') || (plVar10 == (int64_t *)0x0)) goto LAB_0135ae90;
          FUN_00d50b20();
          plVar10 = plVar9;
        }
        else if (((char)uVar11 == '\0') || (plVar10 == (int64_t *)0x0)) {
LAB_0135ae90:
          plVar10 = plVar9;
          uVar11 = 1;
        }
        else {
          FUN_00d50b20();
          plVar10 = plVar9;
          uVar11 = 1;
        }
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (int64_t *)0x0) {
        local_40 = '\0';
        local_48 = plVar8;
        cVar2 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_f8 = 0;
          local_100 = plVar8;
          FUN_0134aad0();
        }
        local_40 = '\0';
        local_48 = plVar10;
        cVar2 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_e8 = 0;
          local_f0 = (int64_t)plVar10;
          FUN_0134aea0();
        }
        local_80 = local_60;
        local_78 = '\0';
        FUN_015b4ee0();
        if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        local_48 = plVar10;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((int64_t)local_b0 < 2) goto LAB_0135b04f;
      local_b0 = local_b0 - 1;
      lVar4 = *arg1;
      uVar12 = local_50 & 0xffffffff;
    } while( true );
  }
  uVar11 = 0;
  plVar10 = (int64_t *)0x0;
  cVar2 = '\0';
  plVar8 = (int64_t *)0x0;
LAB_0135b065:
  if (0xe < *(int *)(local_60 + 3) + 7U) {
    local_d8 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_58 = uVar11;
    FUN_013469e0();
    uVar11 = local_58;
    local_c0 = local_60;
    local_b8 = 0;
    FUN_01353f80();
  }
  if (((char)uVar11 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((cVar2 != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_0135b04f:
  cVar2 = (char)local_50;
  puVar3 = local_68;
  goto LAB_0135b065;
}

