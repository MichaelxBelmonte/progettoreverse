// ===================================================================
// MUAraTrackObserver — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 016ab420
// ============================================================
// Function: FUN_016ab420
// Address: 016ab420
// Size: 1470 bytes
// Class: MUAraTrackObserver

void FUN_016ab420(void)

{
  int64_t lVar1;
  int iVar2;
  void*puVar3;
  int64_t lVar4;
  uint uVar5;
  int64_t this_ptr;
  int iVar6;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint local_94;
  int64_t local_90;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  FUN_00d50100();
  FUN_00d403d0();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_128 = lVar1;
  local_120 = '\x01';
  local_118 = 0;
  local_110 = '\0';
  FUN_00d41430(&local_118,&local_128);
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027cb0e8;
  if (g_027cb0e8 != 0) {
    FUN_00d50b00();
  }
  local_108 = lVar1;
  local_100 = '\x01';
  FUN_00e42580();
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  lVar4 = lVar1;
  if (lVar1 != local_68) {
    lVar4 = local_68;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        lVar4 = 0;
        goto LAB_016ab55d;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x10);
      *(int64_t *)(this_ptr + 0x10) = local_68;
    }
    else {
      local_60 = '\0';
LAB_016ab55d:
      *(int64_t *)(this_ptr + 0x10) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_68;
    }
  }
  if ((local_60 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_0258a670;
  (*g_0258a688)();
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  *(void**)(this_ptr + 0x18) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d30620();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d2fd00();
  local_90 = local_68;
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_016ab9b3;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_016ab9b3;
  if (0 < *(int *)(local_90 + 0xc)) {
    uVar5 = 0;
    do {
      local_f8 = *(int64_t *)(*(int64_t *)(local_90 + 0x10) + (uint64_t)uVar5 * 8);
      local_f0 = '\0';
      local_94 = uVar5;
      FUN_00d307e0();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_027cb0e8;
      if (g_027cb0e8 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar1;
      local_e0 = '\x01';
      FUN_00e42580();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      for (iVar6 = 0; iVar2 = FUN_00e42300(), iVar6 < iVar2; iVar6 = iVar6 + 1) {
        FUN_00e42380();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00e42450();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        local_d8 = local_40;
        local_d0 = '\0';
        FUN_00cabdd0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          local_c8 = local_40;
          local_c0 = '\0';
          local_b8 = local_40;
          local_b0 = '\0';
          FUN_00cabe80();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      uVar5 = local_94 + 1;
    } while ((int)uVar5 < *(int *)(local_90 + 0xc));
  }
  FUN_016ac9a0();
  FUN_00d50b20();
LAB_016ab9b3:
  local_a8 = local_68;
  local_a0 = '\0';
  FUN_00d307e0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 016ac280
// ============================================================
// Function: FUN_016ac280
// Address: 016ac280
// Size: 620 bytes
// Class: MUAraTrackObserver

void FUN_016ac280(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if (*(int64_t *)(arg1 + 0x10) == 0) {
    *(void*)(this_ptr + 1) = 0;
    if ((char)param_2[1] != '\0') {
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return;
    }
    FUN_00d50b00();
    *this_ptr = lVar1;
LAB_016ac44e:
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  local_68 = '\0';
  local_70 = lVar1;
  FUN_00e427c0(param_1,&local_70);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = *param_2;
  if ((lVar1 != 0) && (local_60 = lVar1, lVar1 != *param_2)) {
    *this_ptr = lVar1;
    goto LAB_016ac44e;
  }
  local_58 = '\0';
  FUN_00cabdd0(local_60,&local_60);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_50 = lVar2;
    local_48 = '\0';
    FUN_00e427c0();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      *this_ptr = lVar2;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      goto joined_r0x016ac4e8;
    }
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar2 = *param_2;
  if ((char)param_2[1] == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(param_2 + 1) = 0;
  }
joined_r0x016ac4e8:
  if (lVar1 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 016a97f0
// ============================================================
// Function: FUN_016a97f0
// Address: 016a97f0
// Size: 512 bytes
// Class: MUAraTrackObserver
// String references:
//   "_observer"
//   "MUAraTrackObserver"
//   "MUAraTrackObservationHelper"

void* FUN_016a97f0(void)

{
  int iVar1;
  int iVar2;
  
  // [STATIC_INIT: property registration]
      g_027cae10 = (iVar1 != 0) << 6 | 0x82;
      g_027cadf8 = "_observer";
      g_027cae00 = &g_027cad28;
      g_027cae08 = 0;
      g_027cae18 = 0;
      ram_00000000027cae20 = 0;
      g_027cae28 = 0;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &g_027cadf8;
}

