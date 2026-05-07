// Function: FUN_01327e70
// Address: 01327e70
// Size: 1431 bytes
// Class: MUAudioSourceSibilantItem
// String references:
//   "MUAudioSourceSibilantItem"
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void FUN_01327e70(void* param_1)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  undefined7 uVar10;
  uint uVar11;
  uint uVar12;
  void* pVar13;
  int64_t **pplVar14;
  int64_t *plVar15;
  int64_t lVar16;
  undefined7 uVar18;
  uint64_t uVar17;
  int64_t lVar19;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  int64_t local_40;
  uint64_t local_38;
  
  local_68 = (int64_t *)0x0;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df790();
  local_60 = local_58;
  if (local_58 == (int64_t *)0x0) {
    bVar2 = true;
    bVar3 = true;
    local_60 = (int64_t *)0x0;
    uVar11 = MACH_HEADER.filetype;
  }
  else {
    if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    bVar2 = false;
    bVar3 = false;
    uVar11 = *(uint *)((int64_t)local_60 + 0xc);
  }
  if (0 < (int)uVar11) {
    lVar19 = (uint64_t)uVar11 + 1;
    plVar15 = (int64_t *)0x0;
    lVar16 = 0;
    local_48 = 0;
    local_38 = 0;
    do {
      uVar11 = uVar11 - 1;
      lVar8 = local_60[2];
      lVar1 = *(int64_t *)(lVar8 + (uint64_t)uVar11 * 8);
      uVar12 = uVar11;
      if (lVar16 == lVar1) {
        if (((char)local_48 == '\0') && (lVar16 != 0)) {
          local_48 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar8 = FUN_00d50b00();
        }
        if (((char)local_48 == '\0') || (lVar16 == 0)) {
          local_48 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
          lVar16 = lVar1;
        }
        else {
          uVar9 = FUN_00d50b20();
          local_48 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
          lVar16 = lVar1;
        }
      }
      local_40 = lVar16;
      pvVar7 = _pthread_getspecific(uVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_013dd6a0();
      plVar4 = local_58;
      uVar10 = (undefined7)((uint64_t)uVar9 >> 8);
      uVar18 = (undefined7)((uint64_t)lVar16 >> 8);
      if (local_58 == plVar15) {
        if (((char)local_38 != '\0') || (local_58 == (int64_t *)0x0)) {
          uVar17 = local_38 & 0xffffffff;
          plVar4 = plVar15;
          goto joined_r0x0132810c;
        }
        local_38 = CONCAT71(uVar10,1);
        if (local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_013280b0;
        }
      }
      else {
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_68 = plVar4;
          uVar17 = CONCAT71(uVar18,1);
          if (((char)local_38 != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar15 = plVar4;
LAB_013280b0:
            uVar17 = CONCAT71(uVar18,1);
            plVar4 = plVar15;
          }
joined_r0x0132810c:
          plVar15 = plVar4;
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
            local_38 = uVar17 & 0xffffffff;
            goto LAB_01328157;
          }
          local_38 = uVar17 & 0xffffffff;
        }
        else {
          local_68 = local_58;
          if (((char)local_38 != '\0') && (plVar15 != (int64_t *)0x0)) {
            uVar9 = FUN_00d50b20();
            local_38 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
            plVar15 = plVar4;
            goto LAB_01328157;
          }
          local_38 = CONCAT71(uVar10,1);
          plVar15 = local_58;
        }
      }
LAB_01328157:
      lVar16 = local_40;
      if ((g_027c0190 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_027910a8 = FUN_007ef2d0();
        g_02791090 = "MUAudioSourceSibilantItem";
        g_02791098 = 200;
        g_027910a0 = FUN_01103980;
        g_027910b0 = 0;
        ram_00000000027910b8 = 0;
        g_027910c0 = 0;
        ram_00000000027910c8 = 0;
        g_027910d0 = 0;
        ram_00000000027910d8 = 0;
        g_027910e0 = 0;
        ram_00000000027910e8 = 0;
        g_027910f0 = 0;
        ram_00000000027910f8 = 0;
        g_02791100 = 0;
        ram_0000000002791108 = 0;
        g_02791110 = 0;
        ram_0000000002791118 = 0;
        g_02791120 = 0;
        ram_0000000002791128 = 0;
        g_02791130 = 0;
        ram_0000000002791138 = 0;
        g_02791140 = 0;
        ram_0000000002791148 = 0;
        g_02791150 = 0;
        ___cxa_guard_release();
        lVar16 = local_40;
      }
      pplVar14 = (int64_t **)&g_02802688;
      if (plVar15 != (int64_t *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar14 = &local_68;
        if (cVar5 == '\0') {
          pplVar14 = (int64_t **)&g_02802688;
        }
      }
      plVar15 = local_68;
      if (*pplVar14 != (int64_t *)0x0) {
        if (((char)local_38 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((void*)pplVar14);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
        FUN_01328650();
        if (((char)local_38 != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pVar13 = (void*)pplVar14;
      pvVar7 = _pthread_getspecific(pVar13);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd650();
      plVar15 = local_68;
      if (local_68 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific(pVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc570();
      }
      lVar19 = lVar19 + -1;
    } while (1 < lVar19);
    if (((char)local_38 != '\0') && (plVar15 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = bVar3;
    if (((char)local_48 != '\0') && (lVar16 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}

