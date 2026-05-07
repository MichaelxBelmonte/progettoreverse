// Function: FUN_01f06a80
// Address: 01f06a80
// Size: 2736 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01f06a80(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  int64_t *plVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  void*puVar11;
  void*puVar12;
  void*puVar13;
  int64_t lVar14;
  int64_t *plVar15;
  uint64_t uVar16;
  int64_t *this_ptr;
  int64_t lVar17;
  int64_t lVar18;
  bool bVar19;
  uint32_t uVar20;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t local_1a0;
  uint8_t local_198;
  uint64_t local_190;
  int64_t *local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  void*local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_88;
  int64_t *local_78;
  int local_60;
  int64_t *local_38;
  
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &g_02572358;
  pcVar5 = g_02572370;
  (*g_02572370)();
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_02572358;
  (*pcVar5)();
  FUN_00d243f0();
  FUN_00d243f0();
  FUN_01f02740();
  plVar6 = local_c8;
  if (local_c0 == '\0') {
    if (local_c8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c0 = '\0';
  }
  local_78 = plVar6;
  FUN_00d243f0();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5d8))();
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &g_02572358;
  uVar20 = (*pcVar5)();
  uVar16 = (uint64_t)*(uint *)((int64_t)puVar12 + 0xc);
  if (0 < (int)*(uint *)((int64_t)puVar12 + 0xc)) {
    local_38 = (int64_t *)0x0;
    bVar3 = false;
    lVar18 = 0;
    bVar4 = false;
    local_190 = uVar16;
LAB_01f06c8a:
    uVar16 = (uint64_t)((int)uVar16 - 1);
    plVar15 = *(int64_t **)(puVar12[2] + uVar16 * 8);
    if (local_38 != plVar15) {
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if ((bVar3) && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
        bVar3 = true;
        local_38 = plVar15;
        goto LAB_01f06d00;
      }
      bVar3 = true;
      local_38 = plVar15;
      if (plVar6 != (int64_t *)0x0) goto LAB_01f06d21;
LAB_01f06d67:
      FUN_01f27fe0();
      cVar7 = (**(code **)(*local_78 + 0x6c0))();
      if (0 < *(int *)((int64_t)puVar11 + 0xc)) {
        lVar17 = 0;
        lVar14 = lVar18;
        while( true ) {
          lVar2 = *(int64_t *)(puVar11[2] + lVar17 * 8);
          if (lVar14 == lVar2) {
            lVar18 = lVar14;
            bVar19 = bVar4;
            if ((!bVar4) && (lVar2 != 0)) {
              FUN_00d50b00();
              bVar19 = true;
            }
          }
          else {
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            bVar19 = true;
            lVar18 = lVar2;
            if ((bVar4) && (lVar14 != 0)) {
              FUN_00d50b20();
            }
          }
          bVar4 = bVar19;
          local_170 = '\0';
          local_178 = lVar18;
          cVar8 = FUN_00d50f90();
          uVar20 = extraout_XMM0_Da_01;
          if ((local_170 != '\0') && (local_178 != 0)) {
            uVar20 = FUN_00d50b20();
          }
          if (cVar8 != '\0') break;
          lVar17 = lVar17 + 1;
          lVar14 = lVar18;
          if (*(int *)((int64_t)puVar11 + 0xc) <= lVar17) goto code_r0x01f06e8d;
        }
        local_c8 = (int64_t *)0x0;
        local_198 = 0;
        local_1a0 = lVar18;
        FUN_01f02a40(uVar20,&local_1a0);
        if (local_78 == (int64_t *)0x0) {
LAB_01f070c2:
          uVar20 = FUN_00d23620();
          goto LAB_01f06c6e;
        }
        FUN_00d50b00();
        local_168 = local_78;
        local_160 = '\0';
        (**(code **)(*local_38 + 0x98))();
        local_88 = local_78;
        bVar19 = local_78 == (int64_t *)0x0;
        if (bVar19) {
          local_88 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          local_c8 = local_78;
        }
        if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (local_88 == (int64_t *)0x0) goto LAB_01f070c2;
        if (plVar6 == (int64_t *)0x0) {
LAB_01f07067:
          local_148 = local_88;
          local_140 = '\0';
          cVar7 = FUN_00d24090();
          uVar20 = extraout_XMM0_Da_02;
          if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
            uVar20 = FUN_00d50b20();
          }
          if (cVar7 == '\0') {
            local_138 = local_38;
            local_130 = '\0';
            local_128 = local_88;
            local_120 = '\0';
            uVar20 = FUN_00d249a0(uVar20,&local_128);
            if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
            if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              uVar20 = FUN_00d50b20();
            }
          }
          else {
            uVar20 = FUN_00d23620();
          }
          goto LAB_01f07391;
        }
        local_158 = plVar6;
        local_150 = '\0';
        cVar7 = FUN_00d50f90();
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar7 != '\0') goto LAB_01f07067;
        if ((g_027048b0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
          g_026cd478 = FUN_00d4fe50();
          g_026cd460 = "GNList";
          g_026cd468 = 0x20;
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
        (**(code **)(*local_88 + 0x360))();
        cVar7 = FUN_00e85ea0();
        local_88 = local_c8;
        plVar15 = local_c8;
        if (cVar7 == '\0') {
          plVar15 = g_02802688;
        }
        if (plVar15 == (int64_t *)0x0) {
          uVar20 = FUN_00d23620();
        }
        else {
          if (local_c8 != (int64_t *)0x0) {
            local_78 = (int64_t *)0x0;
            local_60 = -1;
            while( true ) {
              lVar14 = (int64_t)local_60;
              local_60 = local_60 + 1;
              if (*(int *)((int64_t)local_88 + 0xc) <= local_60) break;
              local_78 = *(int64_t **)(local_88[2] + 8 + lVar14 * 8);
              local_118 = plVar6;
              local_110 = '\0';
              cVar7 = FUN_00d50f90();
              if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar7 != '\0') {
                local_100 = '\0';
                local_108 = local_78;
                cVar7 = FUN_00d24090();
                if (cVar7 == '\0') {
                  local_f0 = '\0';
                  local_f8 = local_78;
                  bVar9 = FUN_00d24090();
                  bVar9 = bVar9 ^ 1;
                  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  bVar9 = 0;
                }
                if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (bVar9 != 0) {
                  local_e0 = '\0';
                  local_e8 = local_78;
                  FUN_00d21140();
                  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
            FUN_00083b20();
          }
          uVar20 = FUN_00d23620();
        }
LAB_01f07391:
        if (!bVar19 && local_88 != (int64_t *)0x0) {
          uVar20 = FUN_00d50b20();
        }
        goto LAB_01f06c6e;
      }
      uVar20 = extraout_XMM0_Da_00;
      if (cVar7 != '\0') goto LAB_01f06c6e;
      goto LAB_01f06eb1;
    }
    if ((!bVar3) && (local_38 != (int64_t *)0x0)) {
      bVar3 = true;
      FUN_00d50b00();
    }
LAB_01f06d00:
    if (plVar6 == (int64_t *)0x0) goto LAB_01f06d67;
LAB_01f06d21:
    local_188 = plVar6;
    local_180 = '\0';
    cVar7 = FUN_00d50f90();
    uVar20 = extraout_XMM0_Da;
    if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
      uVar20 = FUN_00d50b20();
    }
    if (cVar7 == '\0') goto LAB_01f06d67;
    goto LAB_01f06c6e;
  }
  bVar4 = false;
  lVar18 = 0;
  bVar3 = false;
  local_38 = (int64_t *)0x0;
LAB_01f07495:
  FUN_00d214d0(uVar20,uVar16);
  local_d0 = '\0';
  local_d8 = puVar12;
  (**(code **)(*this_ptr + 0x628))();
  if ((local_d0 != '\0') && (local_d8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar13 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (lVar18 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (puVar11 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
code_r0x01f06e8d:
  if (cVar7 == '\0') {
LAB_01f06eb1:
    uVar20 = FUN_00d23620();
  }
LAB_01f06c6e:
  uVar1 = local_190 - 1;
  bVar19 = (int64_t)local_190 < 2;
  local_190 = uVar1;
  if (bVar19) goto LAB_01f0747c;
  goto LAB_01f06c8a;
LAB_01f0747c:
  uVar16 = (uint64_t)*(uint *)((int64_t)puVar12 + 0xc);
  goto LAB_01f07495;
}

