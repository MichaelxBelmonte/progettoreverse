// Function: FUN_001001a0
// Address: 001001a0
// Size: 3335 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"

void FUN_001001a0(void* param_1,uint32_t param_2)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  code *pcVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int iVar8;
  void* pVar9;
  void*puVar11;
  code *pcVar12;
  void*puVar13;
  bool bVar14;
  int64_t this_ptr;
  code *pcVar15;
  code *pcVar16;
  uint uVar17;
  uint64_t uVar18;
  int iVar19;
  int64_t **pplVar20;
  double dVar21;
  code *local_118;
  uint8_t local_110;
  int64_t *local_d8;
  uint8_t local_d0;
  undefined7 uStack_cf;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  double local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  char local_98;
  code *local_90;
  code *local_88;
  uint32_t local_7c;
  code *local_78;
  char local_69;
  code *local_68;
  char local_59;
  uint8_t local_58 [8];
  code *local_50;
  uint8_t local_48 [8];
  int64_t *local_40;
  char local_31;
  int iVar10;
  
  local_40 = (int64_t *)CONCAT44(local_40._4_4_,param_2);
  FUN_013fe9d0();
  pcVar16 = local_50;
  if ((local_48[0] != (code)0x0) && (local_50 != 0x0)) {
    FUN_00d50b20();
  }
  if (pcVar16 == 0x0) {
    return;
  }
  pplVar20 = &local_a0;
  FUN_013fe9d0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126ef70();
  pcVar16 = local_50;
  if (local_48[0] == (code)0x0) {
    if (((local_50 != 0x0) && (FUN_00d50b00(), local_48[0] != (code)0x0)) &&
       (local_50 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48[0] = (code)0x0;
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (pcVar16 == 0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df30();
  pcVar12 = local_50;
  if (local_48[0] == (code)0x0) {
    if (local_50 == 0x0) goto LAB_00100dd0;
    FUN_00d50b00();
    if ((local_48[0] != (code)0x0) && (local_50 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50 == 0x0) goto LAB_00100dd0;
  local_78 = pcVar12;
  uVar2 = FUN_00e7dff0();
  local_90 = CONCAT44(local_90._4_4_,uVar2);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  FUN_00d23310();
  pcVar15 = local_50;
  pcVar12 = local_48;
  local_58[0] = local_48[0];
  pcVar4 = local_58;
  if (local_48[0] != (code)0x0) {
    pcVar4 = pcVar12;
  }
  *pcVar4 = (code)0x0;
  if ((local_48[0] != (code)0x0) && (pcVar15 != 0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)pcVar12);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc240();
  plVar7 = local_c0;
  if (local_b8 == '\0') {
    if (local_c0 == (int64_t *)0x0) {
      local_a0 = (int64_t *)0x0;
      local_98 = '\x01';
      plVar7 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_a0 = plVar7;
      local_98 = '\x01';
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a0 = local_c0;
    local_98 = '\x01';
    local_b8 = '\0';
  }
  if ((local_58[0] != (code)0x0) && (pcVar15 != 0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (CONCAT71(uStack_cf,local_d0) != 0)) {
    FUN_00d50b20();
  }
  if ((g_027c01a0 == '\0') && (iVar19 = ___cxa_guard_acquire(), iVar19 != 0)) {
    local_68 = pcVar16;
    g_027af248 = FUN_001016a0();
    g_027af230 = "MUSampledFunction";
    g_027af238 = 0x58;
    pcVar12 = FUN_00101650;
    g_027af240 = FUN_00101650;
    g_027af250 = 0;
    ram_00000000027af258 = 0;
    g_027af260 = 0;
    ram_00000000027af268 = 0;
    g_027af270 = 0;
    ram_00000000027af278 = 0;
    g_027af280 = 0;
    ram_00000000027af288 = 0;
    g_027af290 = 0;
    ram_00000000027af298 = 0;
    g_027af2a0 = 0;
    ram_00000000027af2a8 = 0;
    g_027af2b0 = 0;
    ram_00000000027af2b8 = 0;
    g_027af2c0 = 0;
    ram_00000000027af2c8 = 0;
    g_027af2d0 = 0;
    ram_00000000027af2d8 = 0;
    g_027af2e0 = 0;
    ram_00000000027af2e8 = 0;
    g_027af2f0 = 0;
    ___cxa_guard_release();
    pcVar16 = local_68;
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_0010046a:
    pplVar20 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_0010046a;
  }
  pVar9 = (void*)pcVar12;
  plVar7 = *pplVar20;
  cVar1 = *(char *)(pplVar20 + 1);
  bVar14 = plVar7 != (int64_t *)0x0 && cVar1 != '\0';
  if (plVar7 != (int64_t *)0x0 && cVar1 != '\0') {
    FUN_00d50b00();
LAB_00100515:
    local_d8 = local_a0;
    pvVar3 = _pthread_getspecific(pVar9);
    if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      if (((double)plVar7[10] == g_023934d0) && (!NAN((double)plVar7[10]) && !NAN(g_023934d0)))
      goto LAB_0010054f;
    }
    else if ((*(double *)(plVar7[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x50) ==
              g_023934d0) &&
            (!NAN(*(double *)(plVar7[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x50)) &&
             !NAN(g_023934d0))) {
LAB_0010054f:
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb920();
      local_88 = local_50;
      pcVar12 = 0x0;
      plVar6 = (int64_t *)0x0;
      if (local_50 == 0x0) goto LAB_00100607;
      if (((local_48[0] == (code)0x0) && (FUN_00d50b00(), local_48[0] != (code)0x0)) &&
         (local_50 != 0x0)) {
        FUN_00d50b20();
      }
      iVar19 = *(int *)(local_88 + 0x18);
      iVar8 = iVar19 + 3;
      if (-1 < iVar19) {
        iVar8 = iVar19;
      }
      pcVar12 = (uint64_t)(uint)(iVar8 >> 2);
      local_b0 = (double)(iVar8 >> 2) / g_023934d0;
      local_7c = 0;
      goto LAB_0010061e;
    }
  }
  else {
    local_d8 = local_a0;
    if ((local_a0 != (int64_t *)0x0) && (plVar7 == (int64_t *)0x0)) goto LAB_00100d96;
    plVar6 = local_a0;
    if (plVar7 != (int64_t *)0x0) goto LAB_00100515;
LAB_00100607:
    local_b0 = 0.0;
    local_7c = (uint32_t)CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
    local_88 = 0x0;
LAB_0010061e:
    pvVar3 = _pthread_getspecific((void*)pcVar12);
    pcVar15 = pcVar16;
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pcVar15 = *(code **)(pcVar16 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
    }
    dVar21 = (double)(**(code **)(*(int64_t *)pcVar15 + 0x398))();
    if ((((char)local_40 != '\0') ||
        (((double)((uint64_t)local_90 & 0xffffffff) / g_023934c0) * g_023934c8 + g_02390108
         < dVar21 - local_b0)) &&
       (uVar17 = (uint)((dVar21 - local_b0) * g_023934d0), local_68 = pcVar16, 0 < (int)uVar17)) {
      local_69 = bVar14;
      local_31 = cVar1;
      if ((char)local_7c == '\0') {
        FUN_00c8e710();
        pcVar16 = local_50;
        if ((((local_48[0] == (code)0x0) && (local_50 != 0x0)) &&
            (FUN_00d50b00(), local_48[0] != (code)0x0)) && (local_50 != 0x0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        uVar2 = FUN_00c92160();
        local_59 = pcVar16 != 0x0;
        local_90 = pcVar16;
        FUN_00c92190(uVar2,*(void*)(local_88 + 0x18));
      }
      else {
        FUN_00c8e710();
        pcVar16 = local_50;
        if (((local_48[0] == (code)0x0) && (local_50 != 0x0)) &&
           ((FUN_00d50b00(), local_48[0] != (code)0x0 && (local_50 != 0x0)))) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        local_90 = pcVar16;
        local_59 = pcVar16 != 0x0;
      }
      pvVar3 = _pthread_getspecific((void*)pcVar12);
      pcVar16 = local_68;
      if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), pcVar16 = local_68, lVar5 != 0)) {
        pcVar12 = local_68;
        pcVar16 = *(code **)(local_68 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
      }
      pVar9 = (void*)pcVar12;
      dVar21 = (double)(**(code **)(*(int64_t *)pcVar16 + 0x370))();
      iVar19 = (int)(dVar21 / g_023934d0);
      if (*(int64_t *)(this_ptr + 0x10) == 0) {
        FUN_00c8e690();
        pcVar16 = local_50;
        if ((((local_48[0] == (code)0x0) && (local_50 != 0x0)) &&
            (FUN_00d50b00(), local_48[0] != (code)0x0)) && (local_50 != 0x0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        pcVar12 = *(code **)(this_ptr + 0x10);
        if (pcVar12 == pcVar16) {
          if (pcVar16 != 0x0) {
            FUN_00d50b20();
          }
        }
        else {
          *(code **)(this_ptr + 0x10) = pcVar16;
          if (pcVar12 != 0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        iVar8 = *(int *)(*(int64_t *)(this_ptr + 0x10) + 0x18);
        iVar10 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar10 = iVar8;
        }
        pVar9 = iVar10 >> 2;
        if ((int)pVar9 < iVar19) {
          FUN_00c8e340(pVar9,0);
        }
      }
      local_40 = plVar7;
      pvVar3 = _pthread_getspecific(pVar9);
      pcVar16 = local_68;
      if ((pvVar3 != (void *)0x0) &&
         (local_40 = plVar7, lVar5 = FUN_00e8b990(), pcVar16 = local_68, lVar5 != 0)) {
        pcVar16 = *(code **)(local_68 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
      }
      local_40 = plVar7;
      dVar21 = (double)(**(code **)(*(int64_t *)pcVar16 + 0x370))();
      dVar21 = local_b0 * dVar21;
      local_b0 = (double)(int64_t)iVar19;
      lVar5 = (int64_t)(int)dVar21;
      uVar18 = (uint64_t)uVar17;
      local_a8 = plVar7;
      do {
        local_118 = local_68;
        local_110 = 0;
        FUN_001014b0(*(void*)(*(int64_t *)(this_ptr + 0x10) + 0x10),&local_118,lVar5,iVar19
                    );
        pcVar16 = local_90;
        uVar2 = (**(code **)(g_02786500 + 0x10))();
        local_40 = (int64_t *)CONCAT44(local_40._4_4_,uVar2);
        iVar8 = *(int *)(pcVar16 + 0x18);
        FUN_00c8e340(uVar2,1);
        cVar1 = local_31;
        *(void*)(*(int64_t *)(pcVar16 + 0x10) + (int64_t)iVar8) = local_40._0_4_;
        lVar5 = lVar5 + (int64_t)local_b0;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)(plVar7 + 7) = 0;
      *(void*)((int64_t)plVar7 + 0x3c) = 0;
      *(void*)(plVar7 + 8) = 0;
      pVar9 = 0x25dc9e8;
      *plVar7 = (int64_t)&g_025dc9e8;
      plVar7[9] = 0;
      plVar7[10] = 0;
      (*g_025dca00)();
      if (local_a8 == plVar7) {
        if (cVar1 == '\0') {
          cVar1 = '\x01';
          local_40 = local_a8;
        }
        else {
          FUN_00d50b20();
          local_40 = local_a8;
        }
      }
      else {
        cVar1 = '\x01';
        local_40 = plVar7;
        if (local_69 != '\0') {
          FUN_00d50b20();
        }
      }
      local_31 = cVar1;
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 != (void *)0x0) && (local_31 = cVar1, lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar9 = (void*)local_40;
      }
      local_31 = cVar1;
      FUN_013eb950(SUB84(g_023934d0,0));
      local_31 = cVar1;
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 != (void *)0x0) && (local_31 = cVar1, lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar9 = (void*)local_40;
      }
      FUN_013eb890();
      pvVar3 = _pthread_getspecific(pVar9);
      if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar9 = (void*)local_78;
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_48[0] != (code)0x0) && (local_50 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01328c30();
      FUN_00d23310();
      pcVar16 = local_50;
      puVar11 = &local_d0;
      puVar13 = local_48;
      if (local_48[0] == (code)0x0) {
        puVar13 = puVar11;
      }
      local_d0 = local_48[0];
      *puVar13 = 0;
      if ((local_48[0] != (code)0x0) && (pcVar16 != 0x0)) {
        FUN_00d50b20();
      }
      pVar9 = (void*)puVar11;
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc1d0();
      if ((local_d0 != (code)0x0) && (pcVar16 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar7 = local_40;
      pvVar3 = _pthread_getspecific(pVar9);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_48[0] != (code)0x0) && (local_50 != 0x0)) {
        FUN_00d50b20();
      }
      if (local_59 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((char)local_7c == '\0') {
      FUN_00d50b20();
    }
  }
LAB_00100d96:
  if ((cVar1 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00100dd0:
  FUN_00d50b20();
  return;
}

