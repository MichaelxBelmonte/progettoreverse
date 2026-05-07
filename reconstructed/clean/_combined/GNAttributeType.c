// ===================================================================
// GNAttributeType — Complete reconstructed pseudocode
// 7 functions
// ===================================================================


// ============================================================
// 00c79930
// ============================================================
// Function: FUN_00c79930
// Address: 00c79930
// Size: 672 bytes
// Class: GNAttributeType

void FUN_00c79930(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint32_t uVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  FUN_00d50cd0();
  lVar2 = g_02772550;
  plVar1 = (int64_t *)*arg1;
  if (g_02772550 != 0) {
    FUN_00d50b00();
  }
  iVar3 = (**(code **)(*plVar1 + 0x598))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x10);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x10) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x10);
        *(int64_t *)(this_ptr + 0x10) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x10) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar2 = *(int64_t *)(this_ptr + 0x18);
  if (lVar2 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(void*)(this_ptr + 0x18) = 0;
      }
      else {
        FUN_00d50b00();
        lVar2 = *(int64_t *)(this_ptr + 0x18);
        *(int64_t *)(this_ptr + 0x18) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(int64_t *)(this_ptr + 0x18) = local_38;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (0 < iVar3) {
    (**(code **)(*(int64_t *)*arg1 + 0x470))();
    lVar2 = *(int64_t *)(this_ptr + 0x20);
    if (lVar2 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == 0) {
          *(void*)(this_ptr + 0x20) = 0;
        }
        else {
          FUN_00d50b00();
          lVar2 = *(int64_t *)(this_ptr + 0x20);
          *(int64_t *)(this_ptr + 0x20) = local_38;
        }
      }
      else {
        local_30 = '\0';
        *(int64_t *)(this_ptr + 0x20) = local_38;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (1 < iVar3) {
      uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
      *(void*)(this_ptr + 0x38) = uVar4;
      (**(code **)(*(int64_t *)*arg1 + 0x470))();
      lVar2 = *(int64_t *)(this_ptr + 0x28);
      if (lVar2 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            *(void*)(this_ptr + 0x28) = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = *(int64_t *)(this_ptr + 0x28);
            *(int64_t *)(this_ptr + 0x28) = local_38;
          }
        }
        else {
          local_30 = '\0';
          *(int64_t *)(this_ptr + 0x28) = local_38;
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 00c7a080
// ============================================================
// Function: FUN_00c7a080
// Address: 00c7a080
// Size: 550 bytes
// Class: GNAttributeType

void FUN_00c7a080(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t lVar5;
  bool bVar6;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (unaff_SIL == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if ((g_028a6c90 == (int64_t *)0x0) || (g_028a6c99 == '\0')) {
      FUN_00e8cb50();
      if (g_028a6c90 == (int64_t *)0x0) {
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar4 + 0x18))();
        if (g_028a6c90 == plVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar6 = g_028a6c90 != (int64_t *)0x0;
          g_028a6c90 = plVar4;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028a6c98 == '\0') {
          g_028a6c98 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        g_028a6c99 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a6c99 = '\x01';
        FUN_00e8cb70();
      }
    }
    FUN_00d97950();
    lVar3 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_70 = lVar3;
    local_68 = '\0';
    FUN_00c7a420(param_1,&local_70);
    lVar5 = local_40;
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
    if (lVar5 == 0) {
      FUN_00c7a4d0();
      if ((local_40 != 0) && (lVar5 = local_40, local_38 == '\0')) {
        FUN_00d50b00();
      }
      local_58 = '\0';
      local_50 = lVar3;
      local_48 = '\0';
      local_60 = lVar5;
      FUN_00c7a730(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    *this_ptr = lVar5;
    *(void*)(this_ptr + 1) = 1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00c78cd0
// ============================================================
// Function: FUN_00c78cd0
// Address: 00c78cd0
// Size: 2690 bytes
// Class: GNAttributeType
// String references:
//   "GNAttributeType"
//   "getName"
//   "setName"
//   "setCType"
//   "setClassname"
//   "getCType"
//   "getClassname"
//   "GNString"

void FUN_00c78cd0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028a6ae0 = "setName";
      g_028a6ae8 = &g_026ce508;
      g_028a6af0 = 0;
      g_028a6af8 = &g_02772560;
      g_028a6b00 = FUN_00c7ba30;
      g_028a6b08 = FUN_00c79780;
      g_028a6b10 = 0;
      ram_00000000028a6b18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a6b28 = "setCType";
      g_028a6b30 = &g_026ce508;
      g_028a6b38 = 0;
      g_028a6b40 = &g_02772560;
      g_028a6b48 = FUN_00c7ba30;
      g_028a6b50 = FUN_00c797d0;
      g_028a6b58 = 0;
      ram_00000000028a6b60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a6b70 = "setClassname";
      g_028a6b78 = &g_026ce508;
      g_028a6b80 = 0;
      g_028a6b88 = &g_02772560;
      g_028a6b90 = FUN_00c7ba30;
      g_028a6b98 = FUN_00c79820;
      g_028a6ba0 = 0;
      ram_00000000028a6ba8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a6bb8 = "getName";
      g_028a6bc0 = &g_026ce508;
      g_028a6bc8 = 0;
      g_028a6bd0 = &g_02772563;
      g_028a6bd8 = FUN_00c7bab0;
      g_028a6be0 = FUN_00c79870;
      g_028a6be8 = 0;
      // [STATIC_INIT: property registration]
      g_028a6bf0 = g_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a6c00 = "getCType";
      g_028a6c08 = &g_026ce508;
      g_028a6c10 = 0;
      g_028a6c18 = &g_02772563;
      g_028a6c20 = FUN_00c7bab0;
      g_028a6c28 = FUN_00c798a0;
      g_028a6c30 = 0;
      // [STATIC_INIT: property registration]
      g_028a6c38 = g_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a6c48 = "getClassname";
      g_028a6c50 = &g_026ce508;
      g_028a6c58 = 0;
      g_028a6c60 = &g_02772563;
      g_028a6c68 = FUN_00c7bab0;
      g_028a6c70 = FUN_00c798d0;
      g_028a6c78 = 0;
      // [STATIC_INIT: property registration]
      g_028a6c80 = g_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00c7ace0
// ============================================================
// Function: FUN_00c7ace0
// Address: 00c7ace0
// Size: 537 bytes
// Class: GNAttributeType

void FUN_00c7ace0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  bool bVar7;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((g_028a6cb0 == (int64_t *)0x0) || (g_028a6cb9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a6cb0 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028a6cb0 == plVar5) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar7 = g_028a6cb0 != (int64_t *)0x0;
        g_028a6cb0 = plVar5;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (g_028a6cb8 == '\0') {
        g_028a6cb8 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      g_028a6cb9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a6cb9 = '\x01';
      FUN_00e8cb70();
    }
  }
  local_70 = *arg1;
  local_68 = '\0';
  FUN_00c7a420(param_1,&local_70);
  lVar6 = local_40;
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
  if (lVar6 == 0) {
    FUN_00c7b030();
    if ((local_40 != 0) && (lVar6 = local_40, local_38 == '\0')) {
      FUN_00d50b00();
    }
    lVar1 = *arg1;
    lVar2 = *(int64_t *)(lVar6 + 0x10);
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(lVar6 + 0x10) = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    local_58 = '\0';
    local_50 = *arg1;
    local_48 = '\0';
    local_60 = lVar6;
    FUN_00c7a730(param_1,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c7a7e0
// ============================================================
// Function: FUN_00c7a7e0
// Address: 00c7a7e0
// Size: 537 bytes
// Class: GNAttributeType

void FUN_00c7a7e0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  bool bVar7;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((g_028a6ca0 == (int64_t *)0x0) || (g_028a6ca9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a6ca0 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028a6ca0 == plVar5) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar7 = g_028a6ca0 != (int64_t *)0x0;
        g_028a6ca0 = plVar5;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (g_028a6ca8 == '\0') {
        g_028a6ca8 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      g_028a6ca9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a6ca9 = '\x01';
      FUN_00e8cb70();
    }
  }
  local_70 = *arg1;
  local_68 = '\0';
  FUN_00c7a420(param_1,&local_70);
  lVar6 = local_40;
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
  if (lVar6 == 0) {
    FUN_00c7ab30();
    if ((local_40 != 0) && (lVar6 = local_40, local_38 == '\0')) {
      FUN_00d50b00();
    }
    lVar1 = *arg1;
    lVar2 = *(int64_t *)(lVar6 + 0x10);
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(lVar6 + 0x10) = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    local_58 = '\0';
    local_50 = *arg1;
    local_48 = '\0';
    local_60 = lVar6;
    FUN_00c7a730(param_1,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c76230
// ============================================================
// Function: FUN_00c76230
// Address: 00c76230
// Size: 1538 bytes
// Class: GNAttributeType
// String references:
//   "GNAttributeType"
//   "GNFormatter"
//   "getName"
//   "setName"
//   "setType"
//   "setDefaultFormatter"
//   "getType"
//   "getDefaultFormatter"
//   "GNString"

void FUN_00c76230(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a6a40 = g_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a6a88 = g_026ce508;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a6ad0 = g_02702030;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00029710
// ============================================================
// Function: FUN_00029710
// Address: 00029710
// Size: 558 bytes
// Class: GNAttributeType
// String references:
//   "GNAttributeType"

void FUN_00029710(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025672d0;
  FUN_000299e0();
  FUN_00029c60();
  FUN_00029ee0();
  FUN_0002a160();
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ce5c3 == '\0') {
    FUN_0002a3e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ce5c3 == '\0') {
    FUN_0002a550();
    FUN_00e87980();
  }
  return;
}

