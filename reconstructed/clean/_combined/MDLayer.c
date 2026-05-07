// ===================================================================
// MDLayer — Complete reconstructed pseudocode
// 5 functions
// ===================================================================

// Registered properties (1):
//   MDLayerState    _state


// ============================================================
// 003b8010
// ============================================================
// Function: FUN_003b8010
// Address: 003b8010
// Size: 1743 bytes
// Class: MDLayer
// === MDLayer properties ===
//   MDLayerState    _state


void FUN_003b8010(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t lVar4;
  void*arg1;
  int64_t this_ptr;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int64_t local_40;
  char local_38;
  
  fVar9 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  if ((g_028083b0 == 0) || (g_028083b9 == '\0')) {
    FUN_00e8cb50();
    if (g_028083b0 == 0) {
      FUN_01cfcdc0();
      lVar4 = g_028083b0;
      if (g_028083b0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = g_028083b0 != 0;
        g_028083b0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (g_028083b8 == '\0')) {
        g_028083b8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0();
      lVar4 = g_028083a0;
      if (g_028083a0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = g_028083a0 != 0;
        g_028083a0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (g_028083a8 == '\0')) {
        g_028083a8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0();
      lVar4 = g_028083d0;
      if (g_028083d0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = g_028083d0 != 0;
        g_028083d0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (g_028083d8 == '\0')) {
        g_028083d8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      fVar6 = 0.0;
      fVar9 = 0.0;
      FUN_01cfcdc0();
      lVar4 = g_028083c0;
      if (g_028083c0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = g_028083c0 != 0;
        g_028083c0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (g_028083c8 == '\0')) {
        g_028083c8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      g_028083b9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028083b9 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01e3f820();
  lVar2 = g_028083c0;
  lVar4 = g_028083b0;
  fVar6 = fVar6 * g_0239011c;
  fVar7 = fVar6 + g_023b1d84;
  fVar9 = fVar9 * g_0239011c + extraout_XMM0_Db + g_02390d00;
  if (*(float *)(this_ptr + 0x220) <= g_023b3888) {
    fVar8 = *(float *)(this_ptr + 0x224);
    if ((fVar8 < g_0239428c) || (*(char *)(this_ptr + 0x228) != '\0')) {
      if (g_028083b0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      goto LAB_003b8446;
    }
  }
  else {
    if (g_028083c0 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
LAB_003b8446:
    FUN_01d48b40();
    auVar5._4_4_ = extraout_XMM0_Db;
    auVar5._0_4_ = extraout_XMM0_Da + fVar6;
    auVar5._8_4_ = extraout_XMM0_Dc;
    auVar5._12_4_ = extraout_XMM0_Dd;
    auVar5 = insertps(auVar5,fVar9,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x3c8))(auVar5._0_8_,fVar7);
    fVar8 = *(float *)(this_ptr + 0x224);
  }
  lVar2 = g_028083d0;
  lVar4 = g_028083a0;
  if (fVar8 <= 0.0) {
    if (*(char *)(this_ptr + 0x228) == '\0') {
      if (g_028083a0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      FUN_01d48b40();
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      return;
    }
  }
  else if ((g_0239428c < fVar8) && (*(char *)(this_ptr + 0x228) == '\0')) {
    if (g_028083d0 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    goto LAB_003b8555;
  }
  if (g_028083a0 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_003b8555:
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02680400;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(void*)((int64_t)puVar3 + 0x39) = 0;
  *(void*)((int64_t)puVar3 + 0x41) = 0;
  (*g_02680418)();
  FUN_01d39400();
  FUN_01d39310();
  FUN_01d38ba0();
  (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  FUN_00d50b20();
  return;
}



// ============================================================
// 003b6a50
// ============================================================
// Function: FUN_003b6a50
// Address: 003b6a50
// Size: 2057 bytes
// Class: MDLayer
// String references:
//   "setState"
//   "setIsEditable"
//   "isEditable"
//   "setIsEnabled"
//   "setIsReference"
//   "isReference"
//   "MDLayer"
// === MDLayer properties ===
//   MDLayerState    _state


void FUN_003b6a50(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028081f0 = "setState";
      g_028081f8 = &g_02710200;
      g_02808200 = 0;
      g_02808208 = &g_02705730;
      g_02808210 = FUN_003b7f20;
      g_02808218 = FUN_003b7290;
      g_02808220 = 0;
      ram_0000000002808228 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808238 = "setIsEditable";
      g_02808240 = &g_02710200;
      g_02808248 = 0;
      g_02808250 = &g_02705733;
      g_02808258 = FUN_003b7f40;
      g_02808260 = FUN_003b72f0;
      g_02808268 = 0;
      ram_0000000002808270 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808280 = "isEditable";
      g_02808288 = &g_02710200;
      g_02808290 = 0;
      g_02808298 = &g_02705736;
      g_028082a0 = FUN_003b7f60;
      g_028082a8 = FUN_003b7710;
      g_028082b0 = 0;
      ram_00000000028082b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028082c8 = "setIsEnabled";
      g_028082d0 = &g_02710200;
      g_028082d8 = 0;
      g_028082e0 = &g_02705733;
      g_028082e8 = FUN_003b7f40;
      g_028082f0 = FUN_003b7720;
      g_028082f8 = 0;
      ram_0000000002808300 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808310 = "setIsReference";
      g_02808318 = &g_02710200;
      g_02808320 = 0;
      g_02808328 = &g_02705733;
      g_02808330 = FUN_003b7f40;
      g_02808338 = FUN_003b7740;
      g_02808340 = 0;
      ram_0000000002808348 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808358 = "isReference";
      g_02808360 = &g_02710200;
      g_02808368 = 0;
      g_02808370 = &g_02705736;
      g_02808378 = FUN_003b7f60;
      g_02808380 = FUN_003b7780;
      g_02808388 = 0;
      ram_0000000002808390 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 003b72f0
// ============================================================
// Function: FUN_003b72f0
// Address: 003b72f0
// Size: 722 bytes
// Class: MDLayer
// === MDLayer properties ===
//   MDLayerState    _state


void FUN_003b72f0(void)

{
  int64_t lVar1;
  char unaff_SIL;
  int64_t this_ptr;
  int iVar2;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  if ((*(int *)(this_ptr + 0xc) == 2) == (bool)unaff_SIL) {
    return;
  }
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  FUN_004b5af0();
  FUN_003b79f0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_004b5af0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_003b74dd;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_003b74dd;
  iVar2 = -1;
  while (iVar2 + 1 < *(int *)(local_58 + 0xc)) {
    iVar2 = iVar2 + 1;
    if (*(int *)(*(int64_t *)(*(int64_t *)(local_58 + 0x10) + (int64_t)iVar2 * 8) + 0xc) == 2) {
      FUN_00d21140();
    }
  }
  FUN_00274d30();
  FUN_00d50b20();
LAB_003b74dd:
  if (unaff_SIL == '\0') {
    if (*(int *)(this_ptr + 0xc) != 0) {
      *(void*)(this_ptr + 0xc) = 0;
      FUN_003b77b0();
    }
  }
  else {
    if ((lVar1 != 0) && (local_58 != 0)) {
      local_40 = -1;
      while( true ) {
        lVar1 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(local_58 + 0xc) <= local_40) break;
        lVar1 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar1 * 8);
        if (*(int *)(lVar1 + 0xc) != *(int *)(this_ptr + 0xc)) {
          *(int *)(lVar1 + 0xc) = *(int *)(this_ptr + 0xc);
          FUN_003b77b0();
        }
      }
      FUN_00274d30();
    }
    if (*(int *)(this_ptr + 0xc) != 2) {
      *(void*)(this_ptr + 0xc) = 2;
      FUN_003b77b0();
    }
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0057b530
// ============================================================
// Function: FUN_0057b530
// Address: 0057b530
// Size: 955 bytes
// Class: MDLayer
// String references:
//   "MDLayer"
// === MDLayer properties ===
//   MDLayerState    _state


void FUN_0057b530(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024f1ec0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027102bb == '\0') {
    FUN_0057b970();
    FUN_00e87980();
  }
  FUN_0057bbb0();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027102bb == '\0') {
    FUN_0057be30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_027102bb == '\0') {
    FUN_0057bfa0();
    FUN_00e87980();
  }
  FUN_0057c110();
  FUN_0057c3f0();
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027102bb == '\0') {
    FUN_0057c6e0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0057b970
// ============================================================
// Function: FUN_0057b970
// Address: 0057b970
// Size: 532 bytes
// Class: MDLayer
// String references:
//   "_state"
//   "MDLayer"
//   "MDLayerState"
// === MDLayer properties ===
//   MDLayerState    _state


void* FUN_0057b970(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027102d0 = "_state";
      g_027102d8 = &g_02710200;
      g_027102e0 = 0;
      g_027102e8 = 0x6500;
      g_027102f0 = "MDLayerState";
      g_027102f8 = &g_02710358;
      g_02710300 = 0;
      ram_0000000002710308 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027102d0;
}

