// ===================================================================
// MDQuantizeController — Complete reconstructed pseudocode
// 7 functions
// ===================================================================

// Registered properties (12):
//                   _displayElements
//                   _hasChanges
//                   _editorView
//                   _loLevelingPowerSlider
//                   _hiLevelingPowerSlider
//                   _loLevelingPowerLabel
//                   _hiLevelingPowerLabel
//                   _loLevelingPower
//                   _hiLevelingPower
//                   _okButton
//                   _editRatiosOfElements
//                   _ampFactorsOfOriginalElements


// ============================================================
// 00363290
// ============================================================
// Function: FUN_00363290
// Address: 00363290
// Size: 1257 bytes
// Class: MDQuantizeController
// === MDQuantizeController properties ===
//                   _displayElements
//                   _hasChanges
//                   _editorView
//                   _loLevelingPowerSlider
//                   _hiLevelingPowerSlider
//                   _loLevelingPowerLabel
//                   _hiLevelingPowerLabel
//                   _loLevelingPower
//                   _hiLevelingPower
//                   _okButton
//                   _editRatiosOfElements
//                   _ampFactorsOfOriginalElements


void FUN_00363290(void* param_1)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  int64_t lVar4;
  void* pVar5;
  char *pcVar6;
  int iVar7;
  int64_t local_c0;
  char local_b8;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t local_58;
  char local_50;
  char *local_48;
  char local_40 [8];
  char *local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_b8 == '\0') && (local_c0 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    FUN_00d50b20();
  }
  if (local_c0 != 0) {
    if (0 < *(int *)(local_c0 + 0xc)) {
      iVar7 = 0;
      do {
        FUN_004f9670();
        pcVar1 = local_48;
        local_68 = local_40[0];
        pcVar6 = &local_68;
        pcVar3 = local_40;
        if (local_40[0] == '\0') {
          pcVar3 = pcVar6;
        }
        *pcVar3 = '\0';
        if ((local_40[0] != '\0') && (pcVar1 != (char *)0x0)) {
          FUN_00d50b20();
        }
        local_38 = pcVar1;
        pvVar2 = _pthread_getspecific((void*)pcVar6);
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          pcVar6 = local_38;
        }
        pVar5 = (void*)pcVar6;
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7d10();
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2610();
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012a46e0();
        FUN_004fac10();
        if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific(pVar5);
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          pVar5 = (void*)local_38;
        }
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f49e0();
        FUN_004f7990();
        pvVar2 = _pthread_getspecific(pVar5);
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          pVar5 = (void*)local_38;
        }
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f49f0();
        FUN_004f7900();
        if ((local_68 != '\0') && (local_38 != (char *)0x0)) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(local_c0 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00362540
// ============================================================
// Function: FUN_00362540
// Address: 00362540
// Size: 659 bytes
// Class: MDQuantizeController
// === MDQuantizeController properties ===
//                   _displayElements
//                   _hasChanges
//                   _editorView
//                   _loLevelingPowerSlider
//                   _hiLevelingPowerSlider
//                   _loLevelingPowerLabel
//                   _hiLevelingPowerLabel
//                   _loLevelingPower
//                   _hiLevelingPower
//                   _okButton
//                   _editRatiosOfElements
//                   _ampFactorsOfOriginalElements


void FUN_00362540(void* param_1)

{
  double dVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = *(double *)(this_ptr + 0x48);
  dVar6 = *(double *)(this_ptr + 0x50);
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar9 = *(double *)(lVar4 + 0x48);
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar4 + 0x50);
  dVar5 = dVar1;
  dVar7 = dVar9;
  if ((dVar8 < dVar6) && (dVar5 = dVar6, dVar7 = dVar8, dVar9 < dVar1)) {
    if (dVar8 <= dVar9) {
      dVar9 = dVar8;
    }
    dVar5 = dVar1;
    dVar7 = dVar9;
    if (dVar1 <= dVar6) {
      dVar5 = dVar6;
    }
  }
  if ((*(double *)(this_ptr + 0x48) != dVar7) || (NAN(*(double *)(this_ptr + 0x48)) || NAN(dVar7))
     ) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x48) = dVar7;
    FUN_00d64910();
  }
  if ((*(double *)(this_ptr + 0x50) != dVar5) || (NAN(*(double *)(this_ptr + 0x50)) || NAN(dVar5))
     ) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x50) = dVar5;
    FUN_00d64910();
  }
  dVar8 = *(double *)(this_ptr + 0x38);
  dVar6 = *(double *)(this_ptr + 0x40);
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar9 = *(double *)(lVar4 + 0x38);
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar4 + 0x38);
  if (dVar8 < dVar6) {
    if (dVar1 <= dVar9) goto LAB_00362745;
    if (dVar8 <= dVar9) {
      dVar9 = dVar8;
    }
    dVar8 = dVar9;
    dVar9 = dVar8;
    if (dVar1 <= dVar6) goto LAB_00362745;
  }
  dVar8 = dVar9;
  dVar6 = dVar1;
LAB_00362745:
  if ((*(double *)(this_ptr + 0x38) != dVar8) || (NAN(*(double *)(this_ptr + 0x38)) || NAN(dVar8))
     ) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x38) = dVar8;
    FUN_00d64910();
  }
  if ((*(double *)(this_ptr + 0x40) == dVar6) &&
     (!NAN(*(double *)(this_ptr + 0x40)) && !NAN(dVar6))) {
    return;
  }
  FUN_00d64850();
  *(double *)(this_ptr + 0x40) = dVar6;
  FUN_00d64910();
  return;
}



// ============================================================
// 00364bb0
// ============================================================
// Function: FUN_00364bb0
// Address: 00364bb0
// Size: 570 bytes
// Class: MDQuantizeController
// === MDQuantizeController properties ===
//                   _displayElements
//                   _hasChanges
//                   _editorView
//                   _loLevelingPowerSlider
//                   _hiLevelingPowerSlider
//                   _loLevelingPowerLabel
//                   _hiLevelingPowerLabel
//                   _loLevelingPower
//                   _hiLevelingPower
//                   _okButton
//                   _editRatiosOfElements
//                   _ampFactorsOfOriginalElements


int64_t * FUN_00364bb0(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t local_40;
  char local_38;
  
  lVar6 = arg1[0xe];
  if (*(int *)(lVar6 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
LAB_00364c71:
    FUN_00d50b00();
  }
  else {
    if (0 < *(int *)(lVar6 + 0xc)) {
      lVar5 = 0;
LAB_00364bf0:
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar5 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*arg1 + 0x5c0))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') goto code_r0x00364c3a;
      FUN_0025e9a0();
      if (local_40 == 0) {
        bVar2 = true;
        lVar5 = arg1[0xe];
        iVar1 = *(int *)(lVar5 + 0xc);
        lVar6 = 0;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        bVar2 = false;
        lVar5 = arg1[0xe];
        iVar1 = *(int *)(lVar5 + 0xc);
        lVar6 = local_40;
      }
      if (0 < iVar1) {
        lVar4 = 0;
        do {
          lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar4 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*arg1 + 0x5c0))();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            lVar5 = *(int64_t *)(*(int64_t *)(arg1[0xe] + 0x10) + lVar4 * 8);
            if (lVar5 != 0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
          }
          lVar4 = lVar4 + 1;
          lVar5 = arg1[0xe];
        } while (lVar4 < *(int *)(lVar5 + 0xc));
      }
      *(void*)(this_ptr + 1) = 0;
      if (!bVar2) goto LAB_00364dd7;
      if (lVar6 != 0) goto LAB_00364c71;
      goto LAB_00364cd7;
    }
LAB_00364c4f:
    if (lVar6 == 0) {
      *(void*)(this_ptr + 1) = 0;
LAB_00364cd7:
      lVar6 = 0;
    }
    else {
      FUN_00d50b00();
      *(void*)(this_ptr + 1) = 0;
    }
  }
LAB_00364dd7:
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
code_r0x00364c3a:
  lVar5 = lVar5 + 1;
  lVar6 = arg1[0xe];
  if (*(int *)(lVar6 + 0xc) <= lVar5) goto LAB_00364c4f;
  goto LAB_00364bf0;
}



// ============================================================
// 00362b80
// ============================================================
// Function: FUN_00362b80
// Address: 00362b80
// Size: 838 bytes
// Class: MDQuantizeController
// === MDQuantizeController properties ===
//                   _displayElements
//                   _hasChanges
//                   _editorView
//                   _loLevelingPowerSlider
//                   _hiLevelingPowerSlider
//                   _loLevelingPowerLabel
//                   _hiLevelingPowerLabel
//                   _loLevelingPower
//                   _hiLevelingPower
//                   _okButton
//                   _editRatiosOfElements
//                   _ampFactorsOfOriginalElements


void FUN_00362b80(void* param_1)

{
  int iVar1;
  void *pvVar2;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_017a7800();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_00362c26;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_00362c26;
  local_40 = g_02729540;
  if (g_02729540 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  FUN_00ca13a0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00362c26:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_004faf60();
  if (local_40 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eff0();
        iVar1 = *(int *)(local_40 + 0xc);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          *(void*)(this_ptr + 0x48) = 1;
        }
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00272a20
// ============================================================
// Function: FUN_00272a20
// Address: 00272a20
// Size: 551 bytes
// Class: MDQuantizeController
// String references:
//   "MDQuantizeController"
// === MDQuantizeController properties ===
//                   _displayElements
//                   _hasChanges
//                   _editorView
//                   _loLevelingPowerSlider
//                   _hiLevelingPowerSlider
//                   _loLevelingPowerLabel
//                   _hiLevelingPowerLabel
//                   _loLevelingPower
//                   _hiLevelingPower
//                   _okButton
//                   _editRatiosOfElements
//                   _ampFactorsOfOriginalElements


void FUN_00272a20(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_b8;
  int64_t local_a8;
  void*local_30;
  
  if ((g_0271e090 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026f84d8 = FUN_00015ff0();
    g_026f84c0 = "MDQuantizeController";
    g_026f84c8 = 0x88;
    g_026f84d0 = FUN_00273000;
    g_026f84e0 = 0;
    ram_00000000026f84e8 = 0;
    g_026f84f0 = 0;
    g_026f8568 = 0;
    ram_00000000026f8570 = 0;
    g_026f8578 = 0;
    g_026f857a = 1;
    g_026f84f8 = 0;
    ram_00000000026f8500 = 0;
    g_026f8508 = 0;
    ram_00000000026f8510 = 0;
    g_026f8518 = 0;
    ram_00000000026f8520 = 0;
    g_026f8528 = 0;
    ram_00000000026f8530 = 0;
    g_026f8538 = 0;
    ram_00000000026f8540 = 0;
    g_026f8548 = 0;
    ram_00000000026f8550 = 0;
    g_026f8558 = 0;
    ram_00000000026f8560 = 0;
    g_026f8583 = 0;
    g_026f857b = 0;
    ___cxa_guard_release();
  }
  if (g_026f857b == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    local_30 = (void*)0x0;
    if (1 < g_02802630) {
      local_30 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_30 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_002730b0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00364340();
    FUN_00e87920(uVar2,0);
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    if (local_30 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
  }
  return;
}



// ============================================================
// 00364340
// ============================================================
// Function: FUN_00364340
// Address: 00364340
// Size: 1101 bytes
// Class: MDQuantizeController
// String references:
//   "handleCancel"
//   "MDQuantizeController"
//   "handleSheetClose"
//   "handleOK"
// === MDQuantizeController properties ===
//                   _displayElements
//                   _hasChanges
//                   _editorView
//                   _loLevelingPowerSlider
//                   _hiLevelingPowerSlider
//                   _loLevelingPowerLabel
//                   _hiLevelingPowerLabel
//                   _loLevelingPower
//                   _hiLevelingPower
//                   _okButton
//                   _editRatiosOfElements
//                   _ampFactorsOfOriginalElements


void FUN_00364340(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028076c8 = "handleSheetClose";
      g_028076d0 = &g_026f84c0;
      g_028076d8 = 0;
      g_028076e0 = &g_02703878;
      g_028076e8 = FUN_00365790;
      g_028076f0 = 0x5e1;
      g_028076f8 = 0;
      ram_0000000002807700 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807710 = "handleCancel";
      g_02807718 = &g_026f84c0;
      g_02807720 = 0;
      g_02807728 = &g_02703878;
      g_02807730 = FUN_00365790;
      g_02807738 = 0x5d1;
      g_02807740 = 0;
      ram_0000000002807748 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02807758 = "handleOK";
      g_02807760 = &g_026f84c0;
      g_02807768 = 0;
      g_02807770 = &g_02703878;
      g_02807778 = FUN_00365790;
      g_02807780 = 0x5d9;
      g_02807788 = 0;
      ram_0000000002807790 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00365870
// ============================================================
// Function: FUN_00365870
// Address: 00365870
// Size: 1716 bytes
// Class: MDQuantizeController
// String references:
//   "handleTransportToggleCycle"
//   "handleTransportRecord"
//   "handleTransportStop"
//   "handleTransportStart"
//   "handleTransportTogglePlayback"
//   "handleCreateTranslationFiles"
//   "handleCloseDocument"
//   "handleOpenGlobalValues"
//   "handleOpenLastRecent"
//   "handleShowMidiTestWindow"
//   "handleShowTestGrooveWindow"
// === MDQuantizeController properties ===
//                   _displayElements
//                   _hasChanges
//                   _editorView
//                   _loLevelingPowerSlider
//                   _hiLevelingPowerSlider
//                   _loLevelingPowerLabel
//                   _hiLevelingPowerLabel
//                   _loLevelingPower
//                   _hiLevelingPower
//                   _okButton
//                   _editRatiosOfElements
//                   _ampFactorsOfOriginalElements


void FUN_00365870(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  return;
}

