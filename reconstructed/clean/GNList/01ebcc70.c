// Function: FUN_01ebcc70
// Address: 01ebcc70
// Size: 5259 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNMultipleValue"
//   "GNString"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01ebcc70(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar9;
  undefined7 uVar10;
  int64_t **pplVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  bool bVar14;
  uint32_t uVar15;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  uint64_t local_90;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  uint64_t local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar11 = &local_78;
  uVar15 = FUN_01ccad60();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  lVar2 = g_027edfd0;
  if (local_78 == (int64_t *)0x0) {
    return;
  }
  local_70 = '\0';
  local_78 = (int64_t *)0x0;
  if (g_027edfd0 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_200 = lVar2;
  local_1f8 = '\x01';
  uVar15 = FUN_01ccaae0(uVar15,&local_200);
  local_60 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (uVar15 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  lVar2 = g_02800140;
  if (local_60 == (int64_t *)0x0) {
    if (g_02800140 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_1c0 = lVar2;
    local_1b8 = '\x01';
    uVar15 = FUN_01ccaae0(uVar15,&local_1c0);
    plVar8 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar14 = true;
      plVar8 = (int64_t *)0x0;
    }
    else {
      if (local_38 == '\0') {
        uVar15 = FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      bVar14 = false;
      local_60 = plVar8;
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      uVar15 = FUN_00d50b20();
    }
    if (bVar14) {
      uVar9 = 0;
      local_68 = (int64_t *)0x0;
      local_90 = 0;
      local_80 = (int64_t *)0x0;
    }
    else {
      FUN_01d28610();
      local_80 = local_40;
      if (local_40 == (int64_t *)0x0) {
        local_90 = 0;
      }
      else {
        local_90 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar15 = (**(code **)(*plVar8 + 0x3f8))();
      local_68 = local_40;
      if (local_40 == (int64_t *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
        if (((local_38 == '\0') && (uVar15 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
    }
  }
  else {
    uVar15 = FUN_01d28610();
    local_80 = local_40;
    if (local_40 == (int64_t *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
      if (((local_38 == '\0') && (uVar15 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
    }
    lVar2 = g_027edfd0;
    if (g_027edfd0 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_1f0 = lVar2;
    local_1e8 = '\x01';
    uVar15 = FUN_01ccab60(uVar15,&local_1f0);
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (uVar15 = FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      uVar15 = FUN_00d50b20();
    }
    local_48 = plVar8;
    if (plVar8 == (int64_t *)0x0) {
      uVar15 = (**(code **)(*local_60 + 0x3f8))();
      plVar1 = local_40;
      cVar5 = local_70;
      plVar8 = local_78;
      if (local_78 == local_40) {
        if ((local_70 == '\0') && (local_40 != (int64_t *)0x0)) {
          if (local_38 != '\0') goto LAB_01ebd0ad;
          uVar15 = FUN_00d50b00();
          goto LAB_01ebd187;
        }
LAB_01ebd18b:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            uVar15 = FUN_00d50b00();
          }
          local_78 = plVar1;
          if ((cVar5 != '\0') && (plVar8 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
LAB_01ebd187:
          local_70 = '\x01';
          goto LAB_01ebd18b;
        }
        local_78 = local_40;
        if ((local_70 != '\0') && (plVar8 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
LAB_01ebd0ad:
        local_70 = '\x01';
      }
    }
    else {
      local_1e0 = plVar8;
      local_1d8 = '\0';
      uVar15 = FUN_01d26620(uVar15,&local_1e0);
      plVar1 = local_40;
      cVar5 = local_70;
      plVar8 = local_78;
      if (local_78 == local_40) {
        if ((local_70 == '\0') && (local_40 != (int64_t *)0x0)) {
          if (local_38 != '\0') goto LAB_01ebcf97;
          uVar15 = FUN_00d50b00();
          goto LAB_01ebd14b;
        }
LAB_01ebd14f:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            uVar15 = FUN_00d50b00();
          }
          local_78 = plVar1;
          if ((cVar5 != '\0') && (plVar8 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
LAB_01ebd14b:
          local_70 = '\x01';
          goto LAB_01ebd14f;
        }
        local_78 = local_40;
        if ((local_70 != '\0') && (plVar8 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
LAB_01ebcf97:
        local_70 = '\x01';
        local_38 = '\0';
      }
      if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
    }
    plVar8 = local_78;
    if ((g_0277a3a0 == '\0') &&
       (iVar6 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_01, iVar6 != 0)) {
      g_026d3c38 = FUN_00d4fe50();
      g_026d3c20 = "GNMultipleValue";
      g_026d3c28 = 0x18;
      g_026d3c30 = FUN_00050c70;
      g_026d3c40 = 0;
      ram_00000000026d3c48 = 0;
      g_026d3c50 = 0;
      ram_00000000026d3c58 = 0;
      g_026d3c60 = 0;
      ram_00000000026d3c68 = 0;
      g_026d3c70 = 0;
      ram_00000000026d3c78 = 0;
      g_026d3c80 = 0;
      ram_00000000026d3c88 = 0;
      g_026d3c90 = 0;
      ram_00000000026d3c98 = 0;
      g_026d3ca0 = 0;
      ram_00000000026d3ca8 = 0;
      g_026d3cb0 = 0;
      ram_00000000026d3cb8 = 0;
      g_026d3cc0 = 0;
      ram_00000000026d3cc8 = 0;
      g_026d3cd0 = 0;
      ram_00000000026d3cd8 = 0;
      g_026d3ce0 = 0;
      uVar15 = ___cxa_guard_release();
    }
    if (plVar8 == (int64_t *)0x0) {
LAB_01ebd1d5:
      pplVar11 = &g_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar5 = FUN_00e85ea0();
      uVar15 = extraout_XMM0_Da;
      if (cVar5 == '\0') goto LAB_01ebd1d5;
    }
    plVar8 = *pplVar11;
    cVar5 = *(char *)(pplVar11 + 1);
    if ((cVar5 == '\0') || (plVar8 == (int64_t *)0x0)) {
      if (plVar8 != (int64_t *)0x0) goto LAB_01ebd200;
    }
    else {
      FUN_00d50b00();
LAB_01ebd200:
      uVar15 = FUN_00e987e0();
      plVar12 = local_40;
      cVar3 = local_70;
      plVar1 = local_78;
      if (local_78 == local_40) {
        if ((local_70 == '\0') && (local_40 != (int64_t *)0x0)) {
          if (local_38 != '\0') goto LAB_01ebd24c;
          uVar15 = FUN_00d50b00();
          goto LAB_01ebd27f;
        }
LAB_01ebd283:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            uVar15 = FUN_00d50b00();
          }
          local_78 = plVar12;
          if ((cVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
LAB_01ebd27f:
          local_70 = '\x01';
          goto LAB_01ebd283;
        }
        local_78 = local_40;
        if ((local_70 != '\0') && (plVar1 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
LAB_01ebd24c:
        local_70 = '\x01';
      }
      if (cVar5 != '\0') {
        uVar15 = FUN_00d50b20();
      }
    }
    plVar1 = local_78;
    if ((g_027048b0 == '\0') &&
       (iVar6 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Da_02, iVar6 != 0)) {
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
      uVar15 = ___cxa_guard_release();
    }
    plVar4 = local_48;
    plVar12 = g_02802688;
    if (plVar1 == (int64_t *)0x0) {
joined_r0x01ebd2fc:
      if (plVar12 != (int64_t *)0x0) goto LAB_01ebd2fe;
LAB_01ebd33a:
      local_1d0 = local_78;
      local_1c8 = '\0';
      uVar15 = FUN_002edd50();
      local_68 = local_40;
      if (local_40 == (int64_t *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar10 = (undefined7)((uint64_t)plVar8 >> 8);
        if (local_38 == '\0') {
          uVar15 = FUN_00d50b00();
          uVar9 = CONCAT71(uVar10,1);
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
          uVar9 = CONCAT71(uVar10,1);
        }
      }
      if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar5 = FUN_00e85ea0();
      uVar15 = extraout_XMM0_Da_00;
      plVar12 = local_78;
      if (cVar5 != '\0') goto joined_r0x01ebd2fc;
      if (g_02802688 == (int64_t *)0x0) goto LAB_01ebd33a;
LAB_01ebd2fe:
      uVar9 = 0;
      local_68 = local_78;
      if ((local_78 != (int64_t *)0x0) && (local_70 != '\0')) {
        uVar9 = 1;
        uVar15 = FUN_00d50b00();
      }
    }
    if (plVar4 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b20();
    }
  }
  lVar2 = g_027fe500;
  if (g_027fe500 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_1b0 = lVar2;
  local_1a8 = '\x01';
  uVar15 = FUN_01ccaae0(uVar15,&local_1b0);
  plVar1 = local_40;
  plVar8 = local_60;
  plVar12 = local_60;
  if (local_40 == local_60) {
LAB_01ebd45b:
    bVar14 = plVar12 == (int64_t *)0x0;
    local_60 = plVar12;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b00();
      }
      plVar12 = plVar1;
      if (plVar8 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b20();
      }
      goto LAB_01ebd45b;
    }
    if (local_60 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b20();
    }
    local_38 = '\0';
    bVar14 = plVar1 == (int64_t *)0x0;
    local_60 = plVar1;
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  lVar2 = g_027fe500;
  if (bVar14) {
    local_58 = 0;
LAB_01ebd6ab:
    local_48 = (int64_t *)0x0;
  }
  else {
    if (g_027fe500 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_1a0 = lVar2;
    local_198 = '\x01';
    uVar15 = FUN_01ccab60(uVar15,&local_1a0);
    local_c0 = local_b0;
    local_b8 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != 0) {
        uVar15 = FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_b8 = '\x01';
    FUN_01d26620(uVar15,&local_c0);
    plVar1 = local_40;
    cVar5 = local_70;
    plVar8 = local_78;
    if (local_78 == local_40) {
      if ((local_70 == '\0') && (local_40 != (int64_t *)0x0)) {
        if (local_38 != '\0') goto LAB_01ebd57a;
        FUN_00d50b00();
        goto LAB_01ebd5b1;
      }
LAB_01ebd5b5:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_78 = plVar1;
        if ((cVar5 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01ebd5b1:
        local_70 = '\x01';
        goto LAB_01ebd5b5;
      }
      local_78 = local_40;
      if ((local_70 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ebd57a:
      local_70 = '\x01';
      local_38 = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    plVar8 = local_78;
    if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      local_50 = uVar9;
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      ___cxa_guard_release();
      uVar9 = local_50;
    }
    if (plVar8 == (int64_t *)0x0) {
LAB_01ebd64d:
      pplVar11 = &g_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01ebd64d;
      pplVar11 = &local_78;
    }
    local_48 = *pplVar11;
    plVar8 = g_028ba598;
    if (local_48 == (int64_t *)0x0) {
      local_58 = 0;
      local_48 = (int64_t *)0x0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)pplVar11 >> 8),*(char *)(pplVar11 + 1));
      if (*(char *)(pplVar11 + 1) != '\0') {
        FUN_00d50b00(local_48);
        plVar8 = g_028ba598;
      }
    }
    g_028ba598 = plVar8;
    if ((local_78 != (int64_t *)0x0) && (local_48 == (int64_t *)0x0)) goto LAB_01ebd6ab;
    plVar1 = *(int64_t **)(this_ptr + 0x48);
    if (plVar1 == (int64_t *)0x0) {
      if (plVar8 != (int64_t *)0x0) {
        local_d8 = 0;
        FUN_00d50b00();
        plVar1 = local_48;
        local_d8 = '\x01';
        local_170 = local_68;
        local_168 = '\0';
        local_160 = local_48;
        local_158 = '\0';
        local_e0 = this_ptr;
        uVar7 = (**(code **)(*plVar8 + 0x18))(&local_170,&local_e0,&local_160);
        plVar8 = local_40;
        uVar10 = (undefined7)((uint64_t)plVar1 >> 8);
        if (local_40 == plVar1) {
          if (((char)local_58 == '\0') && (local_48 != (int64_t *)0x0)) {
            plVar8 = local_48;
            if (local_38 != '\0') goto LAB_01ebdbd9;
            uVar13 = CONCAT71(uVar10,1);
            FUN_00d50b00();
          }
          else {
            uVar13 = local_58 & 0xffffffff;
          }
LAB_01ebdcd0:
          if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) {
            local_58 = uVar13 & 0xffffffff;
          }
          else {
            FUN_00d50b20();
            local_58 = uVar13 & 0xffffffff;
          }
        }
        else {
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            uVar13 = CONCAT71(uVar10,1);
            if (((char)local_58 == '\0') || (local_48 == (int64_t *)0x0)) {
              local_48 = plVar8;
            }
            else {
              local_48 = plVar8;
              FUN_00d50b20();
            }
            goto LAB_01ebdcd0;
          }
          if (((char)local_58 != '\0') && (local_48 != (int64_t *)0x0)) {
            local_48 = local_40;
            uVar7 = FUN_00d50b20();
          }
LAB_01ebdbd9:
          local_38 = '\0';
          local_58 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          local_48 = plVar8;
        }
        if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_e8 = 0;
      FUN_00d50b00();
      plVar8 = local_48;
      local_e8 = '\x01';
      local_190 = local_68;
      local_188 = '\0';
      local_180 = local_48;
      local_178 = '\0';
      local_f0 = this_ptr;
      uVar7 = (**(code **)(*plVar1 + 0x18))(&local_190,&local_f0,&local_180);
      plVar12 = local_40;
      uVar10 = (undefined7)((uint64_t)plVar1 >> 8);
      if (local_40 == plVar8) {
        if (((char)local_58 == '\0') && (local_48 != (int64_t *)0x0)) {
          plVar12 = local_48;
          if (local_38 != '\0') goto LAB_01ebda16;
          uVar13 = CONCAT71(uVar10,1);
          FUN_00d50b00();
        }
        else {
          uVar13 = local_58 & 0xffffffff;
        }
LAB_01ebdc3f:
        if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) {
          local_58 = uVar13 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_58 = uVar13 & 0xffffffff;
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          uVar13 = CONCAT71(uVar10,1);
          if (((char)local_58 == '\0') || (local_48 == (int64_t *)0x0)) {
            local_48 = plVar12;
          }
          else {
            local_48 = plVar12;
            FUN_00d50b20();
          }
          goto LAB_01ebdc3f;
        }
        if (((char)local_58 != '\0') && (local_48 != (int64_t *)0x0)) {
          local_48 = local_40;
          uVar7 = FUN_00d50b20();
        }
LAB_01ebda16:
        local_38 = '\0';
        local_58 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        local_48 = plVar12;
      }
      if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_48 == (int64_t *)0x0) {
LAB_01ebde0f:
      FUN_01ebcbd0();
      local_150 = 0;
      local_148 = '\0';
      (**(code **)(*local_40 + 0x940))();
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      FUN_01ebcbd0();
      plVar8 = local_40;
      local_140 = local_48;
      local_138 = '\0';
      FUN_01eb6f70();
      if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01ebcbd0();
      FUN_01eb6f30();
      local_a0 = local_40;
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      cVar5 = (**(code **)(*local_48 + 0x50))();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_01ebde0f;
    }
  }
  FUN_01ebcbd0();
  plVar8 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar8 + 0x938))();
  if (cVar5 == '\0') {
    local_130 = local_80;
    local_128 = '\0';
    (**(code **)(*plVar8 + 0x920))();
    if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((*(int64_t *)(this_ptr + 0x50) == 0) || (iVar6 = FUN_00d8c7a0(), iVar6 == 0)) {
    FUN_01ebcbd0();
    local_100 = local_68;
    local_f8 = '\0';
    (**(code **)(*local_40 + 0x940))();
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    goto LAB_01ebdb05;
  }
  uVar15 = FUN_01ebcbd0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01ebdb05;
    uVar15 = FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01ebdb05;
  local_c8 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0x50);
  local_50 = uVar9;
  if (lVar2 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_c8 = '\x01';
  pplVar11 = &local_40;
  local_d0 = lVar2;
  FUN_01eb9fc0(uVar15,&local_d0);
  plVar8 = local_40;
  FUN_00081d60();
  if (plVar8 == (int64_t *)0x0) {
LAB_01ebd8fd:
    pplVar11 = &g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01ebd8fd;
  }
  plVar8 = *pplVar11;
  if (plVar8 != local_60) {
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar14 = local_60 != (int64_t *)0x0;
      local_60 = plVar8;
      if (bVar14) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_60 != (int64_t *)0x0) {
        local_60 = plVar8;
        FUN_00d50b20();
      }
      *(void*)(pplVar11 + 1) = 0;
      local_60 = plVar8;
    }
  }
  uVar9 = local_50;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != (int64_t *)0x0) {
    local_120 = local_68;
    local_118 = '\0';
    FUN_01d2a8f0();
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_110 = local_68;
    local_108 = '\0';
    FUN_01d2c5c0();
    if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01ebdb05:
  FUN_00d50b20();
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)uVar9 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

