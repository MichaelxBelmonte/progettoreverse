// ===================================================================
// GNWizardView — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 01f18560
// ============================================================
// Function: FUN_01f18560
// Address: 01f18560
// Size: 652 bytes
// Class: GNWizardView

void FUN_01f18560(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar3;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  local_90 = 0;
  local_88 = '\0';
  FUN_01e51a60(param_1,&local_90);
  if (local_40 == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
  }
  else {
    plVar3 = local_40;
    if (local_38 != '\0') {
      local_38 = '\0';
      goto LAB_01f185ea;
    }
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f185ea:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_80 = *arg1;
  local_78 = '\0';
  FUN_01f19190();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (int64_t *)0x0;
  if (*(int64_t **)(this_ptr + 0x138) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x4d0))();
    plVar2 = *(int64_t **)(this_ptr + 0x138);
  }
  if (plVar2 != plVar3) {
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *(int64_t **)(this_ptr + 0x138) = plVar3;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  FUN_01e3f820();
  (**(code **)(*plVar3 + 0x4c8))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x150);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = lVar1;
  (**(code **)(*plVar3 + 0x5c0))();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar3 + 0x520))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x520))();
    (**(code **)(*local_40 + 0x8c0))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d21140();
  if (*(int64_t **)(this_ptr + 0x140) != (int64_t *)0x0) {
    local_60 = *arg1;
    local_58 = '\0';
    (**(code **)(**(int64_t **)(this_ptr + 0x140) + 0x18))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01f18290
// ============================================================
// Function: FUN_01f18290
// Address: 01f18290
// Size: 685 bytes
// Class: GNWizardView
// String references:
//   "GNWizardView"
//   "handleShowNextSheet"
//   "handleShowPreviousSheet"

void FUN_01f18290(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028ba750 = "handleShowNextSheet";
      g_028ba758 = &g_027fd2d0;
      g_028ba760 = 0;
      g_028ba768 = &g_027ff108;
      g_028ba770 = FUN_01f19070;
      g_028ba778 = FUN_01f18bd0;
      g_028ba780 = 0;
      ram_00000000028ba788 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028ba798 = "handleShowPreviousSheet";
      g_028ba7a0 = &g_027fd2d0;
      g_028ba7a8 = 0;
      g_028ba7b0 = &g_027ff108;
      g_028ba7b8 = FUN_01f19070;
      g_028ba7c0 = FUN_01f18d70;
      g_028ba7c8 = 0;
      ram_00000000028ba7d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

