// Function: FUN_0196da90
// Address: 0196da90
// Size: 1316 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"

uint64_t FUN_0196da90(double param_1,char *param_2)

{
  double dVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t lVar8;
  void* in_ECX;
  void* pVar9;
  int64_t *plVar11;
  undefined7 uVar13;
  uint64_t uVar12;
  int64_t *arg1;
  float *this_ptr;
  int64_t *plVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  int64_t *local_68;
  double local_60;
  int64_t *local_58;
  char local_50;
  int iVar10;
  
  bVar17 = false;
  bVar16 = false;
  local_68 = (int64_t *)0x0;
  bVar15 = false;
  *param_2 = '\0';
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125ec20();
  if (local_58 == (int64_t *)0x0) {
    *this_ptr = 0.0;
    plVar14 = (int64_t *)0x0;
    plVar11 = local_68;
    goto LAB_0196deb5;
  }
  bVar15 = local_50 != '\0';
  local_68 = local_58;
  if (bVar15) {
    local_50 = '\0';
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264180();
  if (local_58 == (int64_t *)0x0) {
    plVar14 = (int64_t *)0x0;
    local_60 = param_1;
  }
  else {
    bVar16 = local_50 != '\0';
    if (bVar16) {
      local_50 = '\0';
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar11 = local_58;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    local_60 = (double)(**(code **)(*plVar11 + 0x388))((float)param_1);
    plVar14 = local_58;
  }
  if ((g_027c01a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027af248 = FUN_001016a0();
    g_027af230 = "MUSampledFunction";
    g_027af238 = 0x58;
    in_ECX = 0x101650;
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
  }
  (**(code **)(*local_58 + 0x360))();
  cVar3 = FUN_00e85ea0();
  if (cVar3 == '\0') {
    plVar11 = g_02802688;
    if (g_02802688 == (int64_t *)0x0) goto LAB_0196dd31;
LAB_0196dc84:
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar7 = plVar11;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    dVar1 = (double)plVar7[10];
    pvVar5 = _pthread_getspecific(in_ECX);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar4 = (int)(dVar1 * local_60) + 1;
    if (plVar11[9] == 0) {
      pVar9 = 0;
      in_ECX = 0;
      if (iVar4 < 0) goto LAB_0196dd31;
    }
    else {
      iVar2 = *(int *)(plVar11[9] + 0x18);
      iVar10 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar10 = iVar2;
      }
      pVar9 = iVar10 >> 2;
      in_ECX = pVar9;
      if (iVar4 < (int)pVar9) goto LAB_0196dd31;
    }
    *this_ptr = 0.0;
    *param_2 = '\x01';
LAB_0196dddd:
    lVar6 = *arg1;
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      lVar6 = *arg1;
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    FUN_0125ec90();
    uVar13 = (undefined7)((uint64_t)lVar6 >> 8);
    if (local_58 == (int64_t *)0x0) {
      uVar12 = CONCAT71(uVar13,1);
      plVar11 = (int64_t *)0x0;
      goto joined_r0x0196de4b;
    }
    bVar17 = local_50 != '\0';
    pvVar5 = _pthread_getspecific(pVar9);
    plVar11 = local_58;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar11 + 0x398))(SUB84(local_60,0));
    plVar11 = local_58;
    if (g_023b4df0 <= fVar18) {
      uVar12 = CONCAT71(uVar13,1);
      goto joined_r0x0196de4b;
    }
  }
  else {
    plVar11 = local_58;
    if (local_58 != (int64_t *)0x0) goto LAB_0196dc84;
LAB_0196dd31:
    pVar9 = in_ECX;
    if (*param_2 != '\0') goto LAB_0196dddd;
    pvVar5 = _pthread_getspecific(pVar9);
    plVar11 = local_58;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar11 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar11 + 0x398))(SUB84(local_60,0));
    *this_ptr = fVar18;
    plVar11 = (int64_t *)0x0;
    if ((!NAN(fVar18)) && ((fVar18 != 0.0 || (NAN(fVar18))))) {
      if ((fVar18 != g_02394274) || (NAN(fVar18) || NAN(g_02394274))) goto LAB_0196dddd;
    }
  }
LAB_0196deb5:
  uVar12 = 0;
  local_58 = local_68;
joined_r0x0196de4b:
  if ((bVar15) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar16) && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar17) && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar12 & 0xffffffff;
}

