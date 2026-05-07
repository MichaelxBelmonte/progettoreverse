// Function: MUAudioSourcePrincipalItem_redetectMonophonicPitchAtSuggestedPitchAndUpdatePotentialItem
// Address: 014ea210
// Size: 1110 bytes
// Class: MUAudioSourceItem
// String references:
//   "MUAudioSourcePrincipalItem::redetectMonophonicPitchAtSuggestedPitchAndUpdatePotentialItem(): _prope...
// === MUAudioSourceItem properties ===
//   bool            _suggestsSeparateComponentRenderers
//                   _feedbackActivationQualityLimit
//                   _feebackUpperPitchLimit
//                   _feebackLowerPitchLimit
//                   _timeOffset


uint64_t MUAudioSourcePrincipalItem_redetectMonophonicPitchAtSuggestedPitchAndUpdatePotentialItem(uint32_t param_1,uint8_t param_2,int64_t *param_3)

{
  uint32_t uVar1;
  int64_t lVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  void *pvVar7;
  int64_t lVar8;
  void*puVar9;
  void*puVar10;
  void* in_ECX;
  void* pVar11;
  void*puVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t this_ptr;
  int64_t lVar16;
  void*puVar17;
  
  lVar13 = *param_3;
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    lVar13 = *param_3;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  lVar13 = *(int64_t *)(lVar13 + 0x108);
  if ((lVar13 == 0) ||
     (FUN_00d50b00(), *(int *)(*(int64_t *)(this_ptr + 0x108) + 0xc) != *(int *)(lVar13 + 0xc))) {
    FUN_00e828a0();
  }
  uVar1 = *(void*)(this_ptr + 0x80);
  lVar8 = FUN_00e83010();
  uVar6 = *(uint *)(*(int64_t *)(this_ptr + 0x108) + 0xc);
  if (0 < (int)uVar6) {
    lVar16 = *(int64_t *)(*(int64_t *)(this_ptr + 0x108) + 0x10);
    if ((uint64_t)uVar6 - 1 < 3) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        *(void*)(lVar8 + uVar14 * 4) =
             *(void*)(*(int64_t *)(lVar16 + uVar14 * 8) + 0x14);
        *(void*)(lVar8 + 4 + uVar14 * 4) =
             *(void*)(*(int64_t *)(lVar16 + 8 + uVar14 * 8) + 0x14);
        *(void*)(lVar8 + 8 + uVar14 * 4) =
             *(void*)(*(int64_t *)(lVar16 + 0x10 + uVar14 * 8) + 0x14);
        *(void*)(lVar8 + 0xc + uVar14 * 4) =
             *(void*)(*(int64_t *)(lVar16 + 0x18 + uVar14 * 8) + 0x14);
        uVar14 = uVar14 + 4;
      } while ((uVar6 & 0xfffffffc) != uVar14);
    }
    if ((uint64_t)(uVar6 & 3) != 0) {
      uVar15 = 0;
      do {
        *(void*)(uVar14 * 4 + lVar8 + uVar15 * 4) =
             *(void*)(*(int64_t *)(lVar16 + uVar14 * 8 + uVar15 * 8) + 0x14);
        uVar15 = uVar15 + 1;
      } while ((uVar6 & 3) != uVar15);
    }
  }
  uVar6 = FUN_014ea7b0(param_1,param_2);
  uVar14 = (uint64_t)uVar6;
  if ((char)uVar6 != '\0') {
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar12 = &g_02572358;
    *puVar9 = &g_02572358;
    (*g_02572370)();
    pcVar4 = g_025e74b8;
    pVar11 = (void*)puVar12;
    if (*(int *)(lVar13 + 0xc) < 1) {
      bVar3 = false;
      puVar10 = (void*)0x0;
    }
    else {
      lVar16 = 0;
      bVar3 = false;
      puVar17 = (void*)0x0;
      do {
        puVar10 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &g_025e74a0;
        *(void*)((int64_t)puVar10 + 0xc) = 0;
        *(void*)((int64_t)puVar10 + 0x14) = 0;
        *(void*)((int64_t)puVar10 + 0x1c) = 0;
        *(void*)((int64_t)puVar10 + 0x24) = 0;
        *(void*)((int64_t)puVar10 + 0x2c) = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        puVar10[0xb] = 0;
        *(void*)(puVar10 + 0xc) = 0;
        (*pcVar4)();
        if (puVar10 == puVar17) {
          puVar10 = puVar17;
          if (bVar3) {
            FUN_00d50b20();
            bVar5 = bVar3;
          }
          else {
            bVar5 = true;
          }
        }
        else {
          bVar5 = true;
          if ((bVar3) && (puVar17 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar5;
        lVar2 = *(int64_t *)(*(int64_t *)(lVar13 + 0x10) + lVar16 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_014ee580();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        *(void*)((int64_t)puVar10 + 0x14) = *(void*)(lVar8 + lVar16 * 4);
        *(void*)(puVar10 + 3) = *(void*)(lVar8 + lVar16 * 4);
        FUN_00d21140();
        pVar11 = (void*)puVar12;
        lVar16 = lVar16 + 1;
        puVar17 = puVar10;
      } while (lVar16 < *(int *)(lVar13 + 0xc));
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014c2990();
    lVar8 = *param_3;
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      lVar8 = *param_3;
      lVar16 = FUN_00e8b990();
      if (lVar16 != 0) {
        lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar16 + 0x154) & 1) * 8);
      }
    }
    FUN_00d64850();
    *(void*)(lVar8 + 0x80) = uVar1;
    FUN_00d64910();
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
    uVar14 = CONCAT71((int7)((uint64_t)(lVar8 + 0x80) >> 8),(char)uVar6);
    if ((bVar3) && (puVar10 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e83070();
  if (lVar13 != 0) {
    FUN_00d50b20();
  }
  return uVar14 & 0xffffffff;
}

