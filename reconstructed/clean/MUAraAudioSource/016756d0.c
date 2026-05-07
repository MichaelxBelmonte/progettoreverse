// Function: FUN_016756d0
// Address: 016756d0
// Size: 2550 bytes
// Class: MUAraAudioSource
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016756d0(void)

{
  int64_t lVar1;
  void*puVar2;
  uint8_t uVar3;
  uint32_t uVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  void*puVar9;
  void*puVar10;
  void*puVar11;
  int64_t *plVar12;
  uint uVar13;
  void* pVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  int64_t lVar17;
  int64_t *arg1;
  int64_t *plVar18;
  void*puVar19;
  int64_t *local_70;
  char local_68;
  int local_58;
  void*local_48;
  char local_40;
  
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      plVar15 = (int64_t *)0x0;
      do {
        plVar16 = plVar15;
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_01676840();
        (**(code **)(*plVar5 + 0x18))();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar16 = plVar5;
        }
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017105a0();
        if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        FUN_015127c0();
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_0170f680();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        plVar8 = plVar5;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar16 = plVar5;
        }
        *(void*)(plVar8 + 8) = uVar4;
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f570();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          plVar18 = (int64_t *)plVar5[9];
          plVar8 = plVar5;
        }
        else {
          plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar18 = (int64_t *)plVar8[9];
          plVar16 = plVar5;
        }
        if (plVar18 != local_70) {
          if (local_68 == '\0') {
            if (local_70 == (int64_t *)0x0) {
              plVar12 = (int64_t *)0x0;
              goto LAB_016759db;
            }
            FUN_00d50b00();
            plVar16 = (int64_t *)plVar8[9];
            plVar8[9] = (int64_t)local_70;
            plVar18 = local_70;
          }
          else {
            local_68 = '\0';
            plVar12 = local_70;
LAB_016759db:
            plVar8[9] = (int64_t)plVar12;
            plVar16 = plVar18;
            plVar18 = plVar12;
          }
          if (plVar16 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar18 = local_70;
          }
        }
        if ((local_68 != '\0') && (plVar18 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170f6e0();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          plVar18 = (int64_t *)plVar5[10];
          plVar8 = plVar5;
        }
        else {
          plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar18 = (int64_t *)plVar8[10];
          plVar16 = plVar5;
        }
        if (plVar18 != local_70) {
          if (local_68 == '\0') {
            if (local_70 == (int64_t *)0x0) {
              plVar12 = (int64_t *)0x0;
              goto LAB_01675acb;
            }
            FUN_00d50b00();
            plVar16 = (int64_t *)plVar8[10];
            plVar8[10] = (int64_t)local_70;
            plVar18 = local_70;
          }
          else {
            local_68 = '\0';
            plVar12 = local_70;
LAB_01675acb:
            plVar8[10] = (int64_t)plVar12;
            plVar16 = plVar18;
            plVar18 = plVar12;
          }
          if (plVar16 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar18 = local_70;
          }
        }
        if ((local_68 != '\0') && (plVar18 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_0170f810();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        plVar8 = plVar5;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar16 = plVar5;
        }
        *(void*)(plVar8 + 0xb) = uVar3;
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_0170fee0();
        pvVar6 = _pthread_getspecific((void*)plVar16);
        plVar8 = plVar5;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar8 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar16 = plVar5;
        }
        *(void*)((int64_t)plVar8 + 0x59) = uVar3;
        pvVar6 = _pthread_getspecific((void*)plVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01713cc0();
        if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_01675c88;
          }
        }
        else if (local_70 != (int64_t *)0x0) {
LAB_01675c88:
          local_58 = -1;
LAB_01675cb3:
          while( true ) {
            lVar7 = (int64_t)local_58;
            local_58 = local_58 + 1;
            if (*(int *)((int64_t)local_70 + 0xc) <= local_58) break;
            lVar17 = local_70[2];
            plVar16 = *(int64_t **)(lVar17 + (lVar7 + 1) * 8);
            pvVar6 = _pthread_getspecific((void*)lVar17);
            pVar14 = (void*)lVar17;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar16 = (int64_t *)plVar16[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar16 + 0x368))();
            if (local_40 == '\0') goto LAB_01675d60;
            if (local_48 != (void*)0x0) goto LAB_01675d90;
          }
          FUN_01714b60();
          FUN_00d50b20();
        }
        local_68 = '\0';
        FUN_00d21140();
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        uVar13 = (int)plVar15 + 1;
        plVar15 = (int64_t *)(uint64_t)uVar13;
        local_70 = plVar5;
      } while ((int)uVar13 < *(int *)(lVar1 + 0xc));
    }
    FUN_0166fd40();
  }
  return;
LAB_01675d60:
  if (local_48 == (void*)0x0) goto LAB_01675cb3;
  FUN_00d50b00();
LAB_01675d90:
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_025f82c0;
  *(void*)(puVar9 + 7) = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  FUN_00d500e0();
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_012c8fb0();
  pvVar6 = _pthread_getspecific(pVar14);
  puVar10 = puVar9;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    puVar10 = (void*)puVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  *(void*)(puVar10 + 7) = uVar4;
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8f50();
  pvVar6 = _pthread_getspecific(pVar14);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    puVar19 = (void*)puVar9[8];
    puVar10 = puVar9;
  }
  else {
    puVar10 = (void*)puVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    puVar19 = (void*)puVar10[8];
  }
  if (puVar19 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == (void*)0x0) {
        puVar11 = (void*)0x0;
        goto LAB_01675eda;
      }
      FUN_00d50b00();
      puVar2 = (void*)puVar10[8];
      puVar10[8] = local_48;
      puVar19 = local_48;
    }
    else {
      local_40 = '\0';
      puVar11 = local_48;
LAB_01675eda:
      puVar10[8] = puVar11;
      puVar2 = puVar19;
      puVar19 = puVar11;
    }
    pVar14 = (void*)puVar2;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
      puVar19 = local_48;
    }
  }
  if ((local_40 != '\0') && (puVar19 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8fc0();
  pvVar6 = _pthread_getspecific(pVar14);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    puVar19 = (void*)puVar9[9];
    puVar10 = puVar9;
  }
  else {
    puVar10 = (void*)puVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    puVar19 = (void*)puVar10[9];
  }
  if (puVar19 == local_48) goto LAB_01675ffc;
  if (local_40 == '\0') {
    if (local_48 == (void*)0x0) {
      puVar11 = (void*)0x0;
      goto LAB_01675fba;
    }
    FUN_00d50b00();
    puVar2 = (void*)puVar10[9];
    puVar10[9] = local_48;
    puVar19 = local_48;
  }
  else {
    local_40 = '\0';
    puVar11 = local_48;
LAB_01675fba:
    puVar10[9] = puVar11;
    puVar2 = puVar19;
    puVar19 = puVar11;
  }
  pVar14 = (void*)puVar2;
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
    puVar19 = local_48;
  }
LAB_01675ffc:
  if ((local_40 != '\0') && (puVar19 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar14);
  if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
    puVar19 = (void*)puVar9[10];
    puVar10 = puVar9;
  }
  else {
    puVar10 = (void*)puVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    puVar19 = (void*)puVar10[10];
  }
  if (puVar19 != local_48) {
    FUN_00d50b00();
    puVar10[10] = local_48;
    if (puVar19 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific(pVar14);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = '\0';
  FUN_00d21140();
  FUN_00d50b20();
  FUN_00d50b20();
  local_48 = puVar9;
  goto LAB_01675cb3;
}

