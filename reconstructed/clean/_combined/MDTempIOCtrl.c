// ===================================================================
// MDTempIOCtrl — Complete reconstructed pseudocode
// 6 functions
// ===================================================================

// Registered properties (6):
//                   _inputSlot
//                   _outputSlot
//                   _inputLabel
//                   _inputLabelStudio
//                   _outputLabel
//                   _outputLabelStudio


// ============================================================
// 006e8b70
// ============================================================
// Function: FUN_006e8b70
// Address: 006e8b70
// Size: 1175 bytes
// Class: MDTempIOCtrl
// === MDTempIOCtrl properties ===
//                   _inputSlot
//                   _outputSlot
//                   _inputLabel
//                   _inputLabelStudio
//                   _outputLabel
//                   _outputLabelStudio


void FUN_006e8b70(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  double dVar6;
  uint64_t uVar7;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar2 = g_026e1800;
  if (g_026e1800 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00e7d6f0();
  uVar5 = (uint64_t)(dVar6 * g_023907c0);
  dVar6 = dVar6 * g_023907c0 - g_023907c8;
  uVar7 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar7 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  bVar4 = (byte)(((int64_t)dVar6 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
  local_90 = lVar2;
  local_88 = '\0';
  FUN_000175c0(uVar7,&local_90);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_38 = '\0';
    local_40 = lVar3;
    bVar4 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((lVar3 != 0 & bVar4) == 0) {
    if (*(int64_t *)(this_ptr + 0x88) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x478))();
      }
    }
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x478))();
      }
    }
    if (*(int64_t *)(this_ptr + 0x10) != 0) {
      if (*(int64_t *)(this_ptr + 0x80) != 0) {
        FUN_01e40eb0();
        lVar2 = local_40;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 == 0) {
          plVar1 = *(int64_t **)(this_ptr + 0x10);
          lVar2 = *(int64_t *)(this_ptr + 0x80);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_58 = '\x01';
          local_60 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((*(int64_t *)(this_ptr + 0x10) != 0) && (*(int64_t *)(this_ptr + 0x90) != 0)) {
        FUN_01e40eb0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          plVar1 = *(int64_t **)(this_ptr + 0x10);
          lVar2 = *(int64_t *)(this_ptr + 0x90);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_48 = '\x01';
          local_50 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else {
    if (*(int64_t *)(this_ptr + 0x80) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x478))();
      }
    }
    if (*(int64_t *)(this_ptr + 0x90) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x478))();
      }
    }
    if (*(int64_t *)(this_ptr + 0x10) != 0) {
      if (*(int64_t *)(this_ptr + 0x88) != 0) {
        FUN_01e40eb0();
        lVar2 = local_40;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 == 0) {
          plVar1 = *(int64_t **)(this_ptr + 0x10);
          lVar2 = *(int64_t *)(this_ptr + 0x88);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_78 = '\x01';
          local_80 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((*(int64_t *)(this_ptr + 0x10) != 0) && (*(int64_t *)(this_ptr + 0x98) != 0)) {
        FUN_01e40eb0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          plVar1 = *(int64_t **)(this_ptr + 0x10);
          lVar2 = *(int64_t *)(this_ptr + 0x98);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_68 = '\x01';
          local_70 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  return;
}



// ============================================================
// 006e7e30
// ============================================================
// Function: FUN_006e7e30
// Address: 006e7e30
// Size: 1316 bytes
// Class: MDTempIOCtrl
// === MDTempIOCtrl properties ===
//                   _inputSlot
//                   _outputSlot
//                   _inputLabel
//                   _inputLabelStudio
//                   _outputLabel
//                   _outputLabelStudio


void FUN_006e7e30(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_120;
  char local_118;
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
  
  FUN_00d50100();
  FUN_00d403d0();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026f6d00;
  if (g_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar1;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_00d41430(&local_110,&local_120);
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027062b8;
  if (g_027062b8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026f6d00;
  local_100 = lVar1;
  local_f8 = '\x01';
  if (g_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar2;
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_000bf690(&local_f0,&local_100,&local_e0);
  lVar1 = *(int64_t *)(this_ptr + 0xa0);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_006e7fc3;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0xa0);
      *(int64_t *)(this_ptr + 0xa0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_006e7fc3:
      *(int64_t *)(this_ptr + 0xa0) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_d0 = g_02709de0;
  if (g_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026f6cf0;
  local_c8 = '\x01';
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf690(&local_c0,&local_d0,&local_b0);
  lVar1 = *(int64_t *)(this_ptr + 0xa8);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_006e8126;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0xa8);
      *(int64_t *)(this_ptr + 0xa8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_006e8126:
      *(int64_t *)(this_ptr + 0xa8) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_a0 = g_02727670;
  if (g_02727670 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_027294a0;
  local_98 = '\x01';
  if (g_027294a0 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_000bf690(&local_90,&local_a0,&local_80);
  lVar1 = *(int64_t *)(this_ptr + 0xb0);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_006e82c8;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_006e827d;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0xb0);
    *(int64_t *)(this_ptr + 0xb0) = local_30;
  }
  else {
    local_28 = '\0';
LAB_006e827d:
    *(int64_t *)(this_ptr + 0xb0) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_006e82c8:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 006e5db0
// ============================================================
// Function: FUN_006e5db0
// Address: 006e5db0
// Size: 528 bytes
// Class: MDTempIOCtrl
// === MDTempIOCtrl properties ===
//                   _inputSlot
//                   _outputSlot
//                   _inputLabel
//                   _inputLabelStudio
//                   _outputLabel
//                   _outputLabelStudio


uint64_t FUN_006e5db0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  double dVar5;
  uint64_t uVar6;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar1 = g_026de5d8;
  if (g_026de5d8 != 0) {
    FUN_00d50b00();
  }
  dVar5 = (double)FUN_00e7d6f0();
  uVar4 = (uint64_t)(dVar5 * g_023907c0);
  dVar5 = dVar5 * g_023907c0 - g_023907c8;
  uVar6 = FUN_0071a120();
  if ((local_30 == '\0') && (local_38 != 0)) {
    uVar6 = FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  bVar3 = (byte)(((int64_t)dVar5 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
  local_48 = lVar1;
  local_40 = '\0';
  FUN_000175c0(uVar6,&local_48);
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_30 = '\0';
    local_38 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0 & bVar3) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00d6f370();
    lVar1 = g_02727648;
    if (g_02727648 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    local_58 = 0;
    local_50 = '\0';
    FUN_00d704d0(&local_58,&local_68);
    uVar4 = CONCAT71((int7)((uint64_t)lVar1 >> 8),local_38 == 0);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return uVar4 & 0xffffffff;
}



// ============================================================
// 006e5a00
// ============================================================
// Function: FUN_006e5a00
// Address: 006e5a00
// Size: 528 bytes
// Class: MDTempIOCtrl
// === MDTempIOCtrl properties ===
//                   _inputSlot
//                   _outputSlot
//                   _inputLabel
//                   _inputLabelStudio
//                   _outputLabel
//                   _outputLabelStudio


uint64_t FUN_006e5a00(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  double dVar5;
  uint64_t uVar6;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar1 = g_026de5d8;
  if (g_026de5d8 != 0) {
    FUN_00d50b00();
  }
  dVar5 = (double)FUN_00e7d6f0();
  uVar4 = (uint64_t)(dVar5 * g_023907c0);
  dVar5 = dVar5 * g_023907c0 - g_023907c8;
  uVar6 = FUN_0071a120();
  if ((local_30 == '\0') && (local_38 != 0)) {
    uVar6 = FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  bVar3 = (byte)(((int64_t)dVar5 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
  local_48 = lVar1;
  local_40 = '\0';
  FUN_000175c0(uVar6,&local_48);
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_30 = '\0';
    local_38 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0 & bVar3) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00d6f370();
    lVar1 = g_02727640;
    if (g_02727640 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    local_58 = 0;
    local_50 = '\0';
    FUN_00d704d0(&local_58,&local_68);
    uVar4 = CONCAT71((int7)((uint64_t)lVar1 >> 8),local_38 == 0);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return uVar4 & 0xffffffff;
}



// ============================================================
// 006e87c0
// ============================================================
// Function: FUN_006e87c0
// Address: 006e87c0
// Size: 515 bytes
// Class: MDTempIOCtrl
// === MDTempIOCtrl properties ===
//                   _inputSlot
//                   _outputSlot
//                   _inputLabel
//                   _inputLabelStudio
//                   _outputLabel
//                   _outputLabelStudio


void FUN_006e87c0(void* param_1)

{
  void *pvVar1;
  void*arg1;
  int64_t this_ptr;
  bool bVar2;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  (**(code **)(*(int64_t *)*arg1 + 0x5d8))();
  if (local_30 == 0) {
    bVar2 = false;
  }
  else {
    (**(code **)(*(int64_t *)*arg1 + 0x5d8))();
    FUN_006f3f00();
    bVar2 = local_50 != 0;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    (**(code **)(*(int64_t *)*arg1 + 0x5d8))();
    FUN_006f3f00();
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_30 == 0) {
      bVar2 = false;
    }
    else if (local_28 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar2 = false;
    local_30 = 0;
  }
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    FUN_004501b0();
  }
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    FUN_004501b0();
  }
  if ((bVar2) && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 006e79b0
// ============================================================
// Function: FUN_006e79b0
// Address: 006e79b0
// Size: 1110 bytes
// Class: MDTempIOCtrl
// String references:
//   "handleFeatureSetChanged"
//   "handleSelectedDocumentChanged"
//   "MDTempIOCtrl"
//   "handleAudioDeviceDidChange"
// === MDTempIOCtrl properties ===
//                   _inputSlot
//                   _outputSlot
//                   _inputLabel
//                   _inputLabelStudio
//                   _outputLabel
//                   _outputLabelStudio


void FUN_006e79b0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_0280be30 = "handleAudioDeviceDidChange";
      g_0280be38 = &g_02722ce8;
      g_0280be40 = 0;
      g_0280be48 = &g_02727678;
      g_0280be50 = FUN_006e9800;
      g_0280be58 = FUN_006e8790;
      g_0280be60 = 0;
      ram_000000000280be68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280be78 = "handleFeatureSetChanged";
      g_0280be80 = &g_02722ce8;
      g_0280be88 = 0;
      g_0280be90 = &g_02727678;
      g_0280be98 = FUN_006e9800;
      g_0280bea0 = FUN_006e8b70;
      g_0280bea8 = 0;
      ram_000000000280beb0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280bec0 = "handleSelectedDocumentChanged";
      g_0280bec8 = &g_02722ce8;
      g_0280bed0 = 0;
      g_0280bed8 = &g_02727678;
      g_0280bee0 = FUN_006e9800;
      g_0280bee8 = FUN_006e9230;
      g_0280bef0 = 0;
      ram_000000000280bef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

