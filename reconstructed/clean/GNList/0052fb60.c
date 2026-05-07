// Function: FUN_0052fb60
// Address: 0052fb60
// Size: 3208 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_0052fb60(void)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  void *pvVar7;
  void* pVar8;
  int64_t *this_ptr;
  byte bVar9;
  byte bVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  bool bVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  double dVar16;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  double local_a0;
  double local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  double local_70;
  int64_t *local_58;
  double local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecf0();
  plVar11 = local_40;
  local_90 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      local_90 = (int64_t *)0x0;
      local_88 = '\x01';
      plVar11 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_88 = '\x01';
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_88 = '\x01';
  }
  FUN_000914a0();
  if (plVar11 == (int64_t *)0x0) {
LAB_0052fbc5:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0052fbc5;
    pplVar6 = &local_90;
  }
  plVar12 = *pplVar6;
  cVar3 = *(char *)(pplVar6 + 1);
  if ((cVar3 != '\0') && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_a8 = plVar12;
  if (plVar11 == this_ptr) {
    uVar14 = FUN_00d3ed20();
    local_58 = local_40;
    plVar11 = local_40;
    if (local_40 == (int64_t *)0x0) {
      local_58 = (int64_t *)0x0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (((local_38 == '\0') && (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
    }
    lVar1 = g_0270b8f0;
    pVar8 = (void*)plVar11;
    if (g_0270b8f0 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_158 = lVar1;
    local_150 = '\x01';
    pplVar6 = &local_40;
    FUN_000175c0(uVar14,&local_158);
    plVar11 = local_40;
    if ((g_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026cd478 = FUN_00d4fe50();
      g_026cd460 = "GNList";
      g_026cd468 = 0x20;
      pVar8 = 0x18210;
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
    }
    if (plVar11 == (int64_t *)0x0) {
LAB_0052fe78:
      pplVar6 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar11 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_0052fe78;
    }
    plVar11 = *pplVar6;
    if (plVar11 == (int64_t *)0x0) {
      bVar13 = false;
      plVar11 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar6 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar6 + 1) = 0;
      }
      bVar13 = true;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if (plVar11 == (int64_t *)0x0) {
      plVar11 = (int64_t *)0x0;
    }
    else if (*(int *)((int64_t)plVar11 + 0xc) != 0) {
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_140 = '\0';
      local_148 = plVar11;
      uVar14 = FUN_0051b4f0();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          uVar14 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      FUN_0054ffb0(uVar14,&local_80);
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_130 = '\0';
      local_138 = plVar11;
      uVar14 = FUN_01266200();
      local_120 = '\0';
      local_128 = plVar11;
      uVar15 = FUN_012664b0();
      FUN_0054ee90(uVar14,uVar15);
      if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (plVar12 == (int64_t *)0x0) {
      plVar11 = (int64_t *)0x0;
      bVar13 = false;
      local_58 = (int64_t *)0x0;
      bVar2 = false;
      goto LAB_0053051d;
    }
    (**(code **)(*plVar12 + 0x988))();
    FUN_0051b4f0();
    plVar11 = local_b8;
    if (local_b0 == '\0') {
      if (local_b8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_b0 = '\0';
    }
    local_40 = plVar11;
    local_38 = '\0';
    cVar4 = FUN_00d23d70();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      bVar2 = false;
      local_58 = (int64_t *)0x0;
      bVar13 = false;
      plVar11 = (int64_t *)0x0;
    }
    else {
      uVar14 = FUN_00d3ed20();
      local_58 = local_40;
      plVar11 = local_40;
      if (local_40 == (int64_t *)0x0) {
        local_58 = (int64_t *)0x0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (((local_38 == '\0') && (uVar14 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      lVar1 = g_026de560;
      pVar8 = (void*)plVar11;
      if (g_026de560 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_118 = lVar1;
      local_110 = '\x01';
      pplVar6 = &local_40;
      FUN_000175c0(uVar14,&local_118);
      plVar11 = local_40;
      if ((g_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026cd478 = FUN_00d4fe50();
        g_026cd460 = "GNList";
        g_026cd468 = 0x20;
        pVar8 = 0x18210;
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
      }
      if (plVar11 == (int64_t *)0x0) {
LAB_00530004:
        pplVar6 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_00530004;
      }
      plVar11 = *pplVar6;
      if (plVar11 == (int64_t *)0x0) {
        bVar9 = 1;
        bVar10 = 1;
        uVar14 = 0;
        bVar13 = false;
        plVar11 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar6 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar6 + 1) = 0;
        }
        uVar14 = CONCAT71((int7)((uint64_t)pplVar6 >> 8),1);
        bVar9 = 0;
        bVar10 = 0;
        bVar13 = true;
      }
      if ((local_38 != '\0') && (bVar10 = bVar9, local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      local_a0 = 0.0;
      if (plVar11 == (int64_t *)0x0) {
        dVar16 = 0.0;
        local_98 = 0.0;
      }
      else {
        dVar16 = 0.0;
        local_98 = 0.0;
        if (*(int *)((int64_t)plVar11 + 0xc) != 0) {
          local_100 = '\0';
          local_108 = plVar11;
          local_a0 = (double)FUN_01266200();
          if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_f0 = '\0';
          local_f8 = plVar11;
          local_98 = (double)FUN_012664b0();
          if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          dVar16 = local_a0;
          if (local_98 < local_a0) {
            local_a0 = local_98;
          }
        }
      }
      lVar1 = g_0270b8f0;
      if (g_0270b8f0 != 0) {
        dVar16 = (double)FUN_00d50b00();
      }
      local_e8 = lVar1;
      local_e0 = '\x01';
      pplVar6 = &local_40;
      FUN_000175c0(dVar16,&local_e8);
      plVar12 = local_40;
      if ((g_027048b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026cd478 = FUN_00d4fe50();
        g_026cd460 = "GNList";
        g_026cd468 = 0x20;
        pVar8 = 0x18210;
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
      }
      local_70 = (double)uVar14;
      if (plVar12 == (int64_t *)0x0) {
LAB_00530305:
        pplVar6 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar12 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_00530305;
      }
      plVar12 = *pplVar6;
      if (plVar12 == plVar11) {
        if ((bool)(bVar10 & plVar12 != (int64_t *)0x0)) {
          if (*(char *)(pplVar6 + 1) != '\0') goto LAB_00530354;
          bVar13 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (*(char *)(pplVar6 + 1) == '\0') {
          if (plVar12 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar13 = true;
          if ((SUB81(local_70,0) & plVar11 != (int64_t *)0x0) == 1) {
            FUN_00d50b20();
            plVar11 = plVar12;
            goto LAB_005303a5;
          }
        }
        else {
          bVar13 = plVar11 != (int64_t *)0x0;
          plVar11 = plVar12;
          if ((SUB81(local_70,0) & bVar13) == 1) {
            FUN_00d50b20();
          }
LAB_00530354:
          *(void*)(pplVar6 + 1) = 0;
          plVar12 = plVar11;
        }
        bVar13 = true;
        plVar11 = plVar12;
      }
LAB_005303a5:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      local_48 = 0.0;
      if (plVar11 == (int64_t *)0x0) {
        local_70 = 0.0;
      }
      else {
        local_70 = 0.0;
        if (*(int *)((int64_t)plVar11 + 0xc) != 0) {
          local_d0 = '\0';
          local_d8 = plVar11;
          local_48 = (double)FUN_01266200();
          if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_c0 = '\0';
          local_c8 = plVar11;
          local_70 = (double)FUN_012664b0();
          if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_70 < local_48) {
            local_48 = local_70;
          }
        }
      }
      lVar1 = this_ptr[0x22];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0015db00(local_48,local_70,local_a0,local_98);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((cVar3 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0053051d:
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar13) && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

