// Function: FUN_0036f6e0
// Address: 0036f6e0
// Size: 2150 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_0036f6e0(code *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  void* pVar8;
  char *pcVar9;
  uint64_t uVar10;
  int64_t **pplVar11;
  int64_t *plVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  int64_t *plVar17;
  bool bVar18;
  uint32_t uVar19;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint uVar20;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  uint64_t local_68;
  int64_t *local_60;
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  local_60 = param_2;
  uVar19 = FUN_00e33de0();
  plVar12 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar19 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar19 = FUN_00d50b20();
  }
  lVar1 = g_02729580;
  local_58 = plVar12;
  if (g_02729580 != 0) {
    uVar19 = FUN_00d50b00();
  }
  local_f8 = lVar1;
  local_f0 = '\x01';
  pplVar11 = &local_40;
  FUN_000175c0(uVar19,&local_f8);
  plVar12 = local_40;
  uVar19 = FUN_00053ac0();
  if (plVar12 == (int64_t *)0x0) {
LAB_0036f79b:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar19 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_0036f79b;
  }
  local_48 = *pplVar11;
  if (local_48 == (int64_t *)0x0) {
    bVar13 = 1;
    bVar14 = 1;
    bVar15 = 0;
    bVar16 = 0;
    uVar10 = 0;
    local_48 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar11 + 1) == '\0') {
      uVar19 = FUN_00d50b00();
    }
    else {
      *(void*)(pplVar11 + 1) = 0;
    }
    bVar15 = 1;
    bVar16 = 1;
    bVar13 = 0;
    bVar14 = 0;
    uVar10 = CONCAT71((int7)((uint64_t)plVar12 >> 8),1);
  }
  if ((local_38[0] != '\0') && (bVar16 = bVar15, bVar14 = bVar13, local_40 != (int64_t *)0x0)) {
    uVar19 = FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    uVar19 = FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    local_68 = (int64_t *)((uint64_t)local_68._4_4_ << 0x20);
    local_e8 = g_027295b0;
  }
  else {
    uVar19 = FUN_00d45ad0();
    local_68 = (int64_t *)CONCAT44(local_68._4_4_,uVar19);
    uVar19 = extraout_XMM0_Da_00;
    local_e8 = g_027295b0;
  }
  g_027295b0 = local_e8;
  local_50 = uVar10;
  if (local_e8 != 0) {
    uVar19 = FUN_00d50b00();
  }
  local_e0 = '\x01';
  pplVar11 = &local_40;
  FUN_000175c0(uVar19,&local_e8);
  plVar12 = local_40;
  FUN_00053ac0();
  if (plVar12 == (int64_t *)0x0) {
LAB_0036f8aa:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0036f8aa;
  }
  plVar12 = *pplVar11;
  if (plVar12 == local_48) {
    if (!(bool)(bVar14 & plVar12 != (int64_t *)0x0)) {
      cVar4 = (char)local_50;
      goto joined_r0x0036f960;
    }
    if (*(char *)(pplVar11 + 1) == '\0') {
      FUN_00d50b00();
      goto LAB_0036f95c;
    }
LAB_0036f8fe:
    *(void*)(pplVar11 + 1) = 0;
    plVar12 = local_48;
  }
  else {
    if (*(char *)(pplVar11 + 1) != '\0') {
      bVar18 = local_48 != (int64_t *)0x0;
      local_48 = plVar12;
      if ((bool)(bVar16 & bVar18)) {
        FUN_00d50b20();
        local_48 = plVar12;
      }
      goto LAB_0036f8fe;
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if ((bool)(bVar16 & local_48 != (int64_t *)0x0)) {
      local_48 = plVar12;
      FUN_00d50b20();
LAB_0036f95c:
      cVar4 = '\x01';
      goto joined_r0x0036f960;
    }
  }
  cVar4 = '\x01';
  local_48 = plVar12;
joined_r0x0036f960:
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar17 = local_48;
  plVar12 = local_58;
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar17 != (int64_t *)0x0) {
    cVar5 = FUN_00d45ad0();
    plVar17 = local_48;
    lVar1 = g_027295d0;
    if (cVar5 == '\x01' && (char)local_68 == '\0') {
      local_50 = CONCAT71(local_50._1_7_,cVar4);
      uVar19 = extraout_XMM0_Da_01;
      if (g_027295d0 != 0) {
        uVar19 = FUN_00d50b00();
      }
      local_d8 = lVar1;
      local_d0 = '\x01';
      FUN_000175c0(uVar19,&local_d8);
      plVar12 = local_40;
      if ((g_027048b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026cd478 = FUN_00d4fe50();
        g_026cd460 = "GNList";
        g_026cd468 = 0x20;
        param_1 = FUN_00018210;
        g_026cd470 = FUN_00018210;
        g_026cd480 = 0;
        ram_00000000026cd488 = 0;
        g_026cd490 = 0;
        g_026cd508 = 0;
        ram_00000000026cd510 = 0;
        g_026cd518 = 0;
        g_026cd51a = 6;
        g_026cd498 = 0;
        ram_00000000026cd4a0 = 0;
        g_026cd4a8 = 0;
        ram_00000000026cd4b0 = 0;
        g_026cd4b8 = 0;
        ram_00000000026cd4c0 = 0;
        g_026cd4c8 = 0;
        ram_00000000026cd4d0 = 0;
        g_026cd4d8 = 0;
        ram_00000000026cd4e0 = 0;
        g_026cd4e8 = 0;
        ram_00000000026cd4f0 = 0;
        g_026cd4f8 = 0;
        ram_00000000026cd500 = 0;
        g_026cd523 = 0;
        g_026cd51b = 0;
        ___cxa_guard_release();
        plVar17 = local_48;
      }
      pplVar11 = (int64_t **)&g_02802688;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 != '\0') {
          FUN_0006e1c0();
          cVar4 = FUN_00e8da30();
          pplVar11 = &local_40;
          if (cVar4 == '\0') {
            pplVar11 = (int64_t **)&g_02802688;
          }
        }
      }
      plVar12 = *pplVar11;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar12 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar11 + 1) = 0;
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      local_68 = plVar12;
      FUN_00d23310();
      plVar12 = local_40;
      pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_38[0]);
      pcVar9 = &local_78;
      if (local_38[0] != '\0') {
        pcVar9 = local_38;
      }
      local_78 = local_38[0];
      *pcVar9 = '\0';
      if ((local_38[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar20 = FUN_0125a280();
      if ((local_78 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      plVar12 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
        FUN_00d50b20();
      }
      local_c8 = plVar12;
      local_c0 = '\0';
      local_60 = plVar12;
      FUN_016cbba0();
      plVar3 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016ea7c0(uVar20 ^ g_023945b0);
      FUN_013fb420();
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b8 = plVar3;
      local_b0 = '\0';
      FUN_0132d960();
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_a8 = g_027ebe30;
      if (g_027ebe30 != 0) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      local_98 = plVar3;
      local_90 = '\0';
      local_88 = 0;
      local_80 = '\0';
      FUN_00d40470(&local_88,&local_98,3,3);
      plVar12 = local_58;
      plVar2 = local_60;
      cVar4 = (char)local_50;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (plVar17 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

