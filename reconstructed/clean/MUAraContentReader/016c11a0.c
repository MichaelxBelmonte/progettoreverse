// Function: FUN_016c11a0
// Address: 016c11a0
// Size: 4191 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void* FUN_016c11a0(double param_1,double param_2,double param_3,double param_4)

{
  void* pVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  void*puVar6;
  int64_t lVar7;
  int extraout_var;
  int64_t lVar8;
  void* in_ECX;
  void* pVar9;
  void*puVar10;
  void*puVar11;
  int64_t *in_RDX;
  int64_t *arg1;
  void*this_ptr;
  bool bVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  double dVar15;
  double dVar16;
  uint64_t uVar17;
  uint64_t extraout_XMM0_Qa;
  uint64_t local_130;
  uint8_t local_128;
  int64_t local_120;
  uint8_t local_118;
  uint64_t local_110;
  double local_e8;
  double local_e0;
  int64_t local_d8;
  char local_d0;
  double local_a8;
  int64_t local_80;
  char local_78;
  void*local_68;
  void*local_60;
  char local_58;
  int local_48;
  double local_38;
  
  puVar2 = local_60;
  if (*in_RDX == 0) {
    local_a8 = g_0238fee8;
    if (((param_2 != 0.0) || (NAN(param_2))) && ((param_4 != 0.0 || (NAN(param_4))))) {
      local_a8 = param_2 / param_4;
    }
  }
  else {
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e8 = (double)FUN_018fc680(param_3);
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar15 = (double)FUN_018fc680(param_4 + param_3);
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = (double)FUN_018fc680(param_1);
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_018fc680(param_2 + param_1);
    uVar13 = -(uint64_t)(dVar16 - local_e0 != 0.0);
    uVar14 = -(uint64_t)(dVar15 - local_e8 != 0.0);
    local_a8 = (double)(~uVar13 & (uint64_t)g_0238fee8 |
                       (~uVar14 & (uint64_t)g_0238fee8 |
                       (uint64_t)((dVar16 - local_e0) / (dVar15 - local_e8)) & uVar14) & uVar13);
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  if ((local_58 == '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b00();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = 0x2572358;
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (local_60 != (void*)0x0) {
    local_58 = '\0';
    local_60 = (void*)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)puVar2 + 0xc) <= local_48) break;
      lVar8 = puVar2[2];
      local_60 = *(void**)(lVar8 + 8 + lVar7 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar8);
      pVar9 = (void*)lVar8;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_01907950();
      if (*in_RDX == 0) {
        local_38 = (dVar15 - param_1) / local_a8 + param_3;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_018fc680(dVar15);
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38 = (double)FUN_018fd0c0((dVar15 - local_e0) / local_a8 + local_e8);
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_01907b60(local_38);
      if (local_d0 == '\0') {
        if (local_d8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_d0 = '\0';
      }
      local_80 = local_d8;
      local_78 = '\0';
      FUN_00d21140();
      if (local_d8 != 0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    puVar10 = puVar2;
    FUN_000beb10();
    pVar9 = (void*)puVar10;
  }
  puVar10 = local_60;
  uVar17 = FUN_01907d40();
  local_68 = puVar6;
  if (*in_RDX == 0) goto LAB_016c1f39;
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_018fe5d0();
  uVar17 = extraout_XMM0_Qa;
  if (cVar3 != '\0') goto LAB_016c1f39;
  FUN_018f9610();
  if (local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  pVar1 = (void*)local_60;
  if (local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_016c1a80;
    }
    bVar12 = true;
  }
  else if (local_60 == (void*)0x0) {
    bVar12 = true;
  }
  else {
LAB_016c1a80:
    local_58 = '\0';
    local_60 = (void*)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)puVar10 + 0xc) <= local_48) break;
      lVar8 = puVar10[2];
      local_60 = *(void**)(lVar8 + 8 + lVar7 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar8);
      pVar9 = (void*)lVar8;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar17 = FUN_01907950();
      pvVar5 = _pthread_getspecific(pVar9);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar9 = pVar1;
      }
      FUN_019006f0(uVar17,0);
      if ((local_78 == '\0') && (local_80 != 0)) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      dVar15 = (double)FUN_00e7c860();
      FUN_00e7cd00((dVar15 - local_e8) * local_a8 + local_e0);
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar7 = FUN_019079b0();
      FUN_00e7b970();
      local_110 = FUN_00e7bdb0();
      if (((local_110 >> 0x20 == 0) || (extraout_var == 0)) ||
         (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
        dVar15 = (double)FUN_00e7c860();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar17 = FUN_018fd0c0((dVar15 - local_e0) / local_a8 + local_e8);
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar17 = FUN_01907b60(uVar17);
        if (local_78 == '\0') {
          if (lVar7 != 0) {
            uVar17 = FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        FUN_01902110(uVar17,0);
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (lVar7 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar12 = local_80 != 0;
      local_80 = lVar7;
      if (bVar12) {
        FUN_00d50b20();
      }
    }
    puVar11 = puVar10;
    FUN_000beb10();
    pVar9 = (void*)puVar11;
    bVar12 = false;
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar9 = pVar1;
  }
  uVar17 = FUN_018fbce0();
  local_68 = local_60;
  if (puVar6 == local_60) {
LAB_016c1f06:
    local_68 = puVar6;
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  else if (local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      uVar17 = FUN_00d50b00();
    }
    if (puVar6 != (void*)0x0) {
      uVar17 = FUN_00d50b20();
      puVar6 = local_68;
      goto LAB_016c1f06;
    }
  }
  else {
    if (puVar6 != (void*)0x0) {
      uVar17 = FUN_00d50b20();
    }
  }
  if (!bVar12) {
    uVar17 = FUN_00d50b20();
  }
  if (puVar10 != (void*)0x0) {
    uVar17 = FUN_00d50b20();
  }
LAB_016c1f39:
  local_130 = 0;
  local_128 = 0;
  FUN_016c2780(uVar17,&local_130);
  if ((local_58 == '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  puVar6 = local_60;
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    puVar6 = (void*)local_60[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  lVar7 = *arg1;
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *arg1;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  iVar4 = *(int *)(lVar7 + 0x38);
  if (*(int *)(puVar6 + 7) != iVar4) {
    FUN_00d64850();
    *(int *)(puVar6 + 7) = iVar4;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_0165c2e0();
  if (iVar4 < 1) {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar17 = FUN_00e7bdb0();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165b8b0(uVar17,4,0);
    pVar9 = (void*)uVar17;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_120 = *arg1;
    local_118 = 0;
    FUN_016c2ef0();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165bd00();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c3130();
  *this_ptr = local_60;
  *(void*)(this_ptr + 1) = 1;
  if (local_68 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

