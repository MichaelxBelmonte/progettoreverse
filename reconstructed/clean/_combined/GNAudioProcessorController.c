// ===================================================================
// GNAudioProcessorController — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (3):
//                   _parameterChangeCounters
//                   _parameterValues
//                   _arrangedPrcoessorSource


// ============================================================
// 00b36c50
// ============================================================
// Function: FUN_00b36c50
// Address: 00b36c50
// Size: 915 bytes
// Class: GNAudioProcessorController
// === GNAudioProcessorController properties ===
//                   _parameterChangeCounters
//                   _parameterValues
//                   _arrangedPrcoessorSource


void FUN_00b36c50(uint32_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint32_t in_ECX;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  uint32_t uVar4;
  int64_t *local_88;
  char local_80;
  uint32_t local_74;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_74 = param_1;
  (**(code **)(*this_ptr + 0x5d0))();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    (**(code **)(*this_ptr + 0x5d0))();
    FUN_00b32070(local_74,in_ECX);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    uVar4 = (**(code **)(*this_ptr + 0x5d0))();
    lVar1 = g_0276caa0;
    if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b00();
      lVar1 = g_0276caa0;
    }
    g_0276caa0 = lVar1;
    if (lVar1 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00ca0840(uVar4,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar4 = (**(code **)(*this_ptr + 0x5d0))();
    uVar4 = (**(code **)(*local_50 + 0x480))(uVar4,unaff_ESI);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (uVar4 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        uVar4 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    lVar2 = g_0276ca98;
    if (lVar1 != 0) {
      if (g_0276ca98 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_40 = lVar2;
      local_38 = '\0';
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = g_0276caa8;
    if (g_0276caa8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_80 = '\0';
    local_88 = plVar3;
    FUN_00d40470(&local_88,&stack0xffffffffffffff90,3,3);
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x5e8))();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00b365f0
// ============================================================
// Function: FUN_00b365f0
// Address: 00b365f0
// Size: 848 bytes
// Class: GNAudioProcessorController
// === GNAudioProcessorController properties ===
//                   _parameterChangeCounters
//                   _parameterValues
//                   _arrangedPrcoessorSource


void FUN_00b365f0(uint32_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  uint32_t uVar4;
  int64_t *local_88;
  char local_80;
  uint32_t local_74;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_74 = param_1;
  (**(code **)(*this_ptr + 0x5d0))();
  FUN_00b32070(local_74,param_2);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  uVar4 = (**(code **)(*this_ptr + 0x5d0))();
  lVar1 = g_0276caa0;
  if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    uVar4 = FUN_00d50b00();
    lVar1 = g_0276caa0;
  }
  g_0276caa0 = lVar1;
  if (lVar1 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  FUN_00ca0840(uVar4,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  uVar4 = (**(code **)(*this_ptr + 0x5d0))();
  uVar4 = (**(code **)(*local_50 + 0x480))(uVar4,unaff_ESI);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (uVar4 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      uVar4 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  lVar2 = g_0276ca98;
  if (lVar1 != 0) {
    if (g_0276ca98 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\0';
    FUN_00ca0840(uVar4,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d403d0();
  lVar1 = g_0276caa8;
  if (g_0276caa8 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = '\0';
  local_88 = plVar3;
  FUN_00d40470(&local_88,&stack0xffffffffffffff90,3,3);
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00af0290
// ============================================================
// Function: FUN_00af0290
// Address: 00af0290
// Size: 513 bytes
// Class: GNAudioProcessorController
// String references:
//   "GNAudioProcessorController"
// === GNAudioProcessorController properties ===
//                   _parameterChangeCounters
//                   _parameterValues
//                   _arrangedPrcoessorSource


void FUN_00af0290(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_d8;
  int64_t local_d0;
  int64_t local_c8;
  
  if ((g_02756490 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027563e0 = FUN_00015ff0();
    g_027563c8 = "GNAudioProcessorController";
    g_027563d0 = 0x98;
    g_027563d8 = FUN_00afa990;
    g_027563e8 = 0;
    ram_00000000027563f0 = 0;
    g_027563f8 = 0;
    ram_0000000002756400 = 0;
    g_02756408 = 0;
    ram_0000000002756410 = 0;
    g_02756418 = 0;
    ram_0000000002756420 = 0;
    g_02756428 = 0;
    ram_0000000002756430 = 0;
    g_02756438 = 0;
    ram_0000000002756440 = 0;
    g_02756448 = 0;
    ram_0000000002756450 = 0;
    g_02756458 = 0;
    ram_0000000002756460 = 0;
    g_02756468 = 0;
    ram_0000000002756470 = 0;
    g_02756478 = 0;
    _ram_0000000002756480 = 0;
    g_02756488 = 0;
    ___cxa_guard_release();
  }
  if (g_02756483 == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_00afa9e0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00b35dc0();
    FUN_00e87920(uVar2,0);
    if (local_c8 != 0) {
      FUN_00d50b20();
    }
    if (local_d0 != 0) {
      FUN_00d50b20();
    }
    if (local_d8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}



// ============================================================
// 00b35dc0
// ============================================================
// Function: FUN_00b35dc0
// Address: 00b35dc0
// Size: 679 bytes
// Class: GNAudioProcessorController
// String references:
//   "GNAudioProcessorController"
//   "setProcessorParameterAtIndex"
//   "editProcessorParameterAtIndex"
//   "vfi@e"
// === GNAudioProcessorController properties ===
//                   _parameterChangeCounters
//                   _parameterValues
//                   _arrangedPrcoessorSource


void FUN_00b35dc0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028a4e98 = "setProcessorParameterAtIndex";
      g_028a4ea0 = &g_027563c8;
      g_028a4ea8 = 0;
      g_028a4eb0 = &g_0275e660;
      g_028a4eb8 = FUN_00b37d30;
      g_028a4ec0 = 0x5d9;
      g_028a4ec8 = 0;
      ram_00000000028a4ed0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028a4ee0 = "editProcessorParameterAtIndex";
      g_028a4ee8 = &g_027563c8;
      g_028a4ef0 = 0;
      g_028a4ef8 = s_vfi_e_0275e665;
      g_028a4f00 = FUN_00b37d60;
      g_028a4f08 = 0x5e1;
      g_028a4f10 = 0;
      ram_00000000028a4f18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

