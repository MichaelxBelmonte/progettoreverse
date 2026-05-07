// ===================================================================
// MUElementPitchInspector — Complete reconstructed pseudocode
// 6 functions
// ===================================================================

// Registered properties (6):
//                   _noteNameField
//                   _centOffsetField
//                   _frequencyField
//                   _savedPitchIndexes
//                   _pitchOffsetFormatter
//                   _frequencyFormatter


// ============================================================
// 01ba9e60
// ============================================================
// Function: FUN_01ba9e60
// Address: 01ba9e60
// Size: 2369 bytes
// Class: MUElementPitchInspector
// === MUElementPitchInspector properties ===
//                   _noteNameField
//                   _centOffsetField
//                   _frequencyField
//                   _savedPitchIndexes
//                   _pitchOffsetFormatter
//                   _frequencyFormatter


void* FUN_01ba9e60(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  char cVar9;
  int iVar10;
  int64_t lVar11;
  void *pvVar12;
  void*puVar13;
  int64_t lVar14;
  void* pVar15;
  int64_t **pplVar16;
  int64_t *arg1;
  void*this_ptr;
  bool bVar17;
  int64_t local_108;
  char local_100;
  int64_t *local_88;
  int local_70;
  int64_t *local_50;
  int64_t *local_40;
  char local_38;
  
  pcVar6 = g_02572370;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    puVar13 = (void*)0x0;
    bVar5 = false;
    lVar1 = *arg1;
joined_r0x01baa22b:
    if (lVar1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto LAB_01baa79d;
    }
    lVar1 = *param_2;
    if (lVar1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      local_50 = (int64_t *)0x0;
    }
    else {
      if (*(int *)(lVar1 + 0xc) < 1) {
        bVar3 = false;
        local_50 = (int64_t *)0x0;
      }
      else {
        lVar11 = 0;
        local_50 = (int64_t *)0x0;
        bVar3 = false;
        do {
          plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar11 * 8);
          local_40 = plVar2;
          FUN_0006e1c0();
          pplVar16 = (int64_t **)&g_02802688;
          if (plVar2 != (int64_t *)0x0) {
            (**(code **)(*plVar2 + 0x360))();
            cVar9 = FUN_00e85ea0();
            pplVar16 = &local_40;
            if (cVar9 == '\0') {
              pplVar16 = (int64_t **)&g_02802688;
            }
          }
          if (*pplVar16 != (int64_t *)0x0) {
            pvVar12 = _pthread_getspecific((void*)pplVar16);
            pVar15 = (void*)pplVar16;
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              pvVar12 = _pthread_getspecific(pVar15);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0128c200();
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01baa3c0;
                }
              }
              else if (local_40 != (int64_t *)0x0) {
LAB_01baa3c0:
                pvVar12 = _pthread_getspecific(pVar15);
                if (pvVar12 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01507e40();
                plVar7 = local_40;
                if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
                    (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_50 == (int64_t *)0x0) {
                  local_50 = (int64_t *)FUN_00e8fc40();
                  FUN_00022d50();
                  (**(code **)(*local_50 + 0x18))();
                  bVar3 = true;
                }
                FUN_01baacc0();
                plVar8 = local_40;
                if (local_38 == '\0') {
                  if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                     (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38 = '\0';
                }
                if (plVar8 == (int64_t *)0x0) {
                  FUN_0039e8b0();
                  plVar2 = local_40;
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  FUN_01baac10();
                  if (plVar2 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38 = '\0';
                  local_40 = plVar2;
                  FUN_00d21140();
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
                if (plVar7 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
          }
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < *(int *)(lVar1 + 0xc));
      }
      FUN_002d7220();
      *(void*)(this_ptr + 1) = 0;
      if (bVar3) {
        *this_ptr = local_50;
        *(void*)(this_ptr + 1) = 1;
        goto LAB_01baa79d;
      }
      if (local_50 == (int64_t *)0x0) {
        local_50 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  else {
    local_88 = (int64_t *)0x0;
    local_70 = -1;
    bVar3 = true;
    bVar5 = false;
    puVar13 = (void*)0x0;
    bVar4 = true;
    while( true ) {
      lVar11 = (int64_t)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) break;
      local_88 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar11 * 8);
      local_40 = local_88;
      FUN_0006e1c0();
      pplVar16 = (int64_t **)&g_02802688;
      if (local_88 != (int64_t *)0x0) {
        (**(code **)(*local_88 + 0x360))();
        cVar9 = FUN_00e85ea0();
        pplVar16 = &local_40;
        if (cVar9 == '\0') {
          pplVar16 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar16 != (int64_t *)0x0) {
        pvVar12 = _pthread_getspecific((void*)pplVar16);
        pVar15 = (void*)pplVar16;
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar11 = FUN_00e8b990();
        if (lVar11 != 0) {
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          plVar2 = local_40;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (int64_t *)0x0) {
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar10 = FUN_01326de0();
            if (iVar10 == 2) {
              bVar17 = false;
            }
            else {
              pvVar12 = _pthread_getspecific(pVar15);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              pvVar12 = _pthread_getspecific(pVar15);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar10 = FUN_01326de0();
              bVar17 = iVar10 != 4;
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            bVar3 = bVar4;
            if (bVar17) {
              bVar3 = false;
            }
            if (puVar13 == (void*)0x0) {
              puVar13 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar13 = &g_02572358;
              (*pcVar6)();
              bVar5 = true;
            }
            local_38 = '\0';
            local_40 = local_88;
            FUN_00d21140();
            bVar4 = bVar3;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
    FUN_002d7220();
    if (!bVar3) {
      lVar1 = *arg1;
      goto joined_r0x01baa22b;
    }
    if (puVar13 == (void*)0x0) {
      puVar13 = (void*)0x0;
      lVar1 = *arg1;
      goto joined_r0x01baa22b;
    }
    local_50 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*local_50 + 0x18))();
    FUN_019ac590();
    if (local_88 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01baac10();
    if (local_88 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = local_50;
  *(void*)(this_ptr + 1) = 1;
LAB_01baa79d:
  if ((bVar5) && (puVar13 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01ba8330
// ============================================================
// Function: FUN_01ba8330
// Address: 01ba8330
// Size: 1324 bytes
// Class: MUElementPitchInspector
// === MUElementPitchInspector properties ===
//                   _noteNameField
//                   _centOffsetField
//                   _frequencyField
//                   _savedPitchIndexes
//                   _pitchOffsetFormatter
//                   _frequencyFormatter


void FUN_01ba8330(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t local_110;
  char local_108;
  int64_t local_100;
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
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_30;
  char local_28;
  
  FUN_01a12f60();
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_0258a670;
  (*g_0258a688)();
  puVar3 = *(void**)(this_ptr + 0xf0);
  if (puVar3 == puVar2) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xf0) = puVar2;
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e38130(0,1,0);
  FUN_00d403d0();
  FUN_00d50b00();
  local_110 = g_027e3bc0;
  if (g_027e3bc0 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d41430(&local_100,&local_110);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = g_027e3b40;
  if (g_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = g_027e3d40;
  if (g_027e3d40 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = g_027e1340;
  if (g_027e1340 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02576110;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  *(void*)((int64_t)puVar3 + 0x14) = 0;
  *(void*)((int64_t)puVar3 + 0x1a) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  (*g_02576128)();
  lVar1 = *(int64_t *)(this_ptr + 0xf8);
  *(void**)(this_ptr + 0xf8) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d48ac0();
  local_90 = g_02727808;
  if (g_02727808 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_00d48b20();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0270b790;
  if (g_0270b790 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar1;
  local_78 = '\x01';
  FUN_00d48c60();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02570340;
  puVar3[2] = 0;
  puVar3[3] = 0;
  (*g_02570358)();
  lVar1 = *(int64_t *)(this_ptr + 0x100);
  *(void**)(this_ptr + 0x100) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d040c0();
  *(void*)(this_ptr + 0x108) = 0;
  FUN_01ba8c20();
  return;
}



// ============================================================
// 01ba9470
// ============================================================
// Function: FUN_01ba9470
// Address: 01ba9470
// Size: 769 bytes
// Class: MUElementPitchInspector
// === MUElementPitchInspector properties ===
//                   _noteNameField
//                   _centOffsetField
//                   _frequencyField
//                   _savedPitchIndexes
//                   _pitchOffsetFormatter
//                   _frequencyFormatter


void FUN_01ba9470(void)

{
  bool bVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  (**(code **)(*this_ptr + 0x630))();
  lVar4 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_01ba9593;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
LAB_01ba94d0:
    local_50 = '\0';
    local_58 = 0;
    local_48 = lVar4;
    local_40 = -1;
    iStack_3c = 0;
    iStack_38 = 0;
    while( true ) {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar3 * 8);
      pvVar2 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        FUN_00d50b00();
        local_60 = 0;
        (**(code **)(this_ptr[0x17] + 0x10))();
        FUN_00d50b00();
        local_60 = '\x01';
        local_98 = 0;
        local_90 = '\0';
        local_88 = 0;
        local_80 = '\0';
        local_68 = this_ptr + 0x17;
        FUN_00cbadd0(&local_88,&local_98);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          (**(code **)(*local_68 + 0x10))();
          FUN_00d50b20();
        }
        FUN_00d50b20();
        break;
      }
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          iStack_38 = iStack_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
    }
    FUN_00083b20();
    bVar1 = false;
  }
  else {
    if (local_58 != 0) goto LAB_01ba94d0;
LAB_01ba9593:
    bVar1 = true;
  }
  local_78 = *arg1;
  local_70 = '\0';
  FUN_01a13090();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x630))();
  if (lVar4 != local_58) {
    lVar4 = local_58;
    if (local_50 != '\0') {
      if (!bVar1) {
        FUN_00d50b20();
      }
      goto LAB_01ba96f4;
    }
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_01ba96f4:
  if (lVar4 != 0) {
    local_50 = 0;
    local_58 = 0;
    iStack_3c = 0;
    iStack_38 = 0;
    local_48 = lVar4;
    for (lVar3 = 0; local_40 = (int)lVar3, local_40 < *(int *)(lVar4 + 0xc); lVar3 = lVar3 + 1) {
      local_58 = *(void*)(*(int64_t *)(lVar4 + 0x10) + lVar3 * 8);
      FUN_01ba91a0();
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ba9ae0
// ============================================================
// Function: FUN_01ba9ae0
// Address: 01ba9ae0
// Size: 697 bytes
// Class: MUElementPitchInspector
// === MUElementPitchInspector properties ===
//                   _noteNameField
//                   _centOffsetField
//                   _frequencyField
//                   _savedPitchIndexes
//                   _pitchOffsetFormatter
//                   _frequencyFormatter


void* FUN_01ba9ae0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void *pvVar4;
  void* pVar5;
  int64_t **pplVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar7;
  bool bVar8;
  int64_t local_98;
  char local_90;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        local_40 = plVar2;
        FUN_0006e1c0();
        pplVar6 = (int64_t **)&g_02802688;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar6 = &local_40;
          if (cVar3 == '\0') {
            pplVar6 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar6 != (int64_t *)0x0) {
          pvVar4 = _pthread_getspecific((void*)pplVar6);
          pVar5 = (void*)pplVar6;
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_40 == (int64_t *)0x0) {
            bVar8 = false;
          }
          else {
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            bVar8 = local_98 != 0;
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar8) {
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_002d7220();
            return this_ptr;
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_002d7220();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}



// ============================================================
// 01baae50
// ============================================================
// Function: FUN_01baae50
// Address: 01baae50
// Size: 509 bytes
// Class: MUElementPitchInspector
// === MUElementPitchInspector properties ===
//                   _noteNameField
//                   _centOffsetField
//                   _frequencyField
//                   _savedPitchIndexes
//                   _pitchOffsetFormatter
//                   _frequencyFormatter


void FUN_01baae50(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint8_t uVar6;
  int64_t *this_ptr;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  uint8_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  uint8_t local_32;
  uint8_t local_31;
  
  (**(code **)(*this_ptr + 0x630))();
  local_48 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_60 = 1;
  uVar6 = (**(code **)(*this_ptr + 0x688))();
  local_31 = (**(code **)(*this_ptr + 0x698))();
  local_b8 = this_ptr[0x1b];
  if (local_b8 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 1;
  lVar1 = this_ptr[0x1c];
  local_40 = local_b8;
  local_32 = uVar6;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_a0 = 1;
  lVar2 = this_ptr[0x1d];
  local_a8 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_90 = 1;
  lVar3 = this_ptr[0x20];
  local_98 = lVar2;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_80 = 1;
  lVar4 = this_ptr[0x1f];
  local_88 = lVar3;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_70 = 1;
  local_78 = lVar4;
  FUN_01bab160(local_31,local_32,&local_b8,&local_a8);
  lVar5 = local_48;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01ba7eb0
// ============================================================
// Function: FUN_01ba7eb0
// Address: 01ba7eb0
// Size: 1110 bytes
// Class: MUElementPitchInspector
// String references:
//   "MUElementPitchInspector"
//   "handleNoteNameChanged"
//   "handleNoteOffsetChanged"
//   "handleFrequencyChanged"
// === MUElementPitchInspector properties ===
//                   _noteNameField
//                   _centOffsetField
//                   _frequencyField
//                   _savedPitchIndexes
//                   _pitchOffsetFormatter
//                   _frequencyFormatter


void FUN_01ba7eb0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b5b40 = "handleNoteNameChanged";
      g_028b5b48 = &g_02734f48;
      g_028b5b50 = 0;
      g_028b5b58 = &g_027e54d8;
      g_028b5b60 = FUN_01bb3d90;
      g_028b5b68 = FUN_01bae3c0;
      g_028b5b70 = 0;
      ram_00000000028b5b78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b5b88 = "handleNoteOffsetChanged";
      g_028b5b90 = &g_02734f48;
      g_028b5b98 = 0;
      g_028b5ba0 = &g_027e54d8;
      g_028b5ba8 = FUN_01bb3d90;
      g_028b5bb0 = FUN_01bb14c0;
      g_028b5bb8 = 0;
      ram_00000000028b5bc0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b5bd0 = "handleFrequencyChanged";
      g_028b5bd8 = &g_02734f48;
      g_028b5be0 = 0;
      g_028b5be8 = &g_027e54d8;
      g_028b5bf0 = FUN_01bb3d90;
      g_028b5bf8 = FUN_01bb2610;
      g_028b5c00 = 0;
      ram_00000000028b5c08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

