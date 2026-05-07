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

