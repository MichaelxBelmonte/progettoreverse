// Function: FUN_01318610
// Address: 01318610
// Size: 2543 bytes
// Class: MUSampledFunction

uint64_t FUN_01318610(uint64_t param_1,uint32_t param_2)

{
  uint3 uVar1;
  byte bVar2;
  char cVar3;
  uint32_t uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  int64_t *plVar8;
  int64_t **pplVar9;
  int64_t *plVar10;
  void* pVar11;
  int unaff_EDI;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  undefined7 uVar15;
  bool bVar16;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_90;
  int local_84;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  int local_58;
  uint32_t uStack_54;
  uint32_t local_50;
  int64_t *local_38;
  
  local_84 = unaff_EDI;
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  plVar10 = local_70;
  pVar11 = (void*)param_1;
  uVar1 = (uint3)((uint)param_2 >> 8);
  bVar2 = (byte)param_2;
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_01318829;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_013186b3:
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2610();
    plVar8 = local_70;
    if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) && (FUN_00d50b00(), local_68 != '\0')
        ) && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f2810();
    local_38 = local_70;
    local_90 = local_70;
    if (local_68 == '\0') {
      if (local_70 == (int64_t *)0x0) {
        local_90 = (int64_t *)0x0;
        local_38 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        local_38 = local_90;
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
    }
    uVar13 = (uint64_t)CONCAT31(uVar1,plVar8 != (int64_t *)0x0);
    if ((plVar8 == (int64_t *)0x0) && ((bVar2 ^ 1) == 0)) {
      plVar8 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(plVar8 + 8) = 0;
      plVar8[7] = 0;
      plVar8[9] = 0;
      plVar8[10] = 0;
      plVar8[0xb] = 0;
      pVar11 = 0x25d2108;
      *plVar8 = (int64_t)&g_025d2108;
      *(void*)(plVar8 + 0xc) = 0;
      plVar8[0xd] = 0;
      (*g_025d2120)();
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0a90();
      pvVar7 = _pthread_getspecific(pVar11);
      plVar14 = plVar8;
      if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        plVar14 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0ae0();
      if (local_38 == (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2270();
        uVar15 = (undefined7)((uint64_t)plVar14 >> 8);
      }
      else {
        pvVar7 = _pthread_getspecific(pVar11);
        if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          plVar10 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2240();
        local_70 = local_38;
        local_68 = '\0';
        uVar4 = FUN_00d23d20();
        uVar17 = extraout_XMM0_Da;
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
        FUN_011f23a0(uVar17,uVar4);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        uVar15 = (undefined7)((uint64_t)plVar10 >> 8);
      }
      uVar13 = CONCAT71(uVar15,1);
    }
    FUN_004fbac0();
    if (local_38 == (int64_t *)0x0) {
LAB_01318b8d:
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*local_38 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01318b8d;
      pplVar9 = &local_90;
    }
    uVar5 = (uint)uVar13 & 0xff;
    if (*pplVar9 == (int64_t *)0x0) {
      uVar5 = 0;
    }
    if (*pplVar9 == (int64_t *)0x0 && (bVar2 ^ 1) == 0) {
      if (local_38 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific(0);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f24e0();
      }
      plVar10 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(plVar10 + 8) = 0;
      plVar10[7] = 0;
      plVar10[9] = 0;
      plVar10[10] = 0;
      plVar10[0xb] = 0;
      pVar11 = 0x25d58b0;
      *plVar10 = (int64_t)&g_025d58b0;
      *(void*)(plVar10 + 0xc) = 0;
      (*g_025d58c8)();
      if (plVar10 == local_38) {
        FUN_00d50b20();
      }
      else {
        bVar16 = local_38 != (int64_t *)0x0;
        local_90 = plVar10;
        local_38 = plVar10;
        if (bVar16) {
          FUN_00d50b20();
        }
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
        pVar11 = (void*)local_38;
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0a90();
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        pVar11 = (void*)local_38;
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_011f0ae0();
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2240();
      local_68 = '\0';
      local_70 = plVar8;
      iVar6 = FUN_00d23d20();
      uVar17 = extraout_XMM0_Da_00;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      FUN_011f23a0(uVar17,iVar6 + 1);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar13 = (uint64_t)uVar5;
    }
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    pVar11 = 0;
    FUN_00d50b20();
  }
  else {
    if (local_70 != (int64_t *)0x0) goto LAB_013186b3;
LAB_01318829:
    if (bVar2 == 0) {
      pVar11 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
      uVar13 = 0;
    }
    else {
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7900();
      pVar11 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
      uVar13 = CONCAT71((uint7)uVar1,1);
    }
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar17 = FUN_012e6160();
  plVar10 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_01318fe6;
    uVar17 = FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  else if (local_70 == (int64_t *)0x0) goto LAB_01318fe6;
  local_68 = 0;
  local_70 = (int64_t *)0x0;
  local_60 = plVar10;
  local_50 = 0;
  local_58 = 0;
  uStack_54 = 0;
  if (0 < *(int *)((int64_t)plVar10 + 0xc)) {
    local_84 = local_84 + 1;
    lVar12 = 0;
    do {
      local_70 = *(int64_t **)(plVar10[2] + lVar12 * 8);
      cVar3 = FUN_01318610(uVar17,bVar2);
      uVar13 = uVar13 & 0xff;
      if (cVar3 == '\0') {
        uVar13 = 0;
      }
      lVar12 = lVar12 + 1;
      local_58 = (int)lVar12;
      uVar17 = extraout_XMM0_Da_01;
    } while (local_58 < *(int *)((int64_t)plVar10 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_01318fe6:
  return uVar13 & 0xffffff01;
}

