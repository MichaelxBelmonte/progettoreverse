// ===================================================================
// MUColorCorrectionCtrl — Complete reconstructed pseudocode
// 5 functions
// ===================================================================


// ============================================================
// 01b5a960
// ============================================================
// Function: FUN_01b5a960
// Address: 01b5a960
// Size: 2165 bytes
// Class: MUColorCorrectionCtrl

uint64_t FUN_01b5a960(uint64_t param_1,int param_2)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  int64_t *this_ptr;
  uint32_t uVar4;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01b57f70();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)this_ptr[0xf] + 0x970))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01b5a9fd;
    }
  }
  else if (local_40 != 0) {
LAB_01b5a9fd:
    iVar2 = FUN_00d8c7a0();
    if (iVar2 < 1) {
      FUN_00d50b20();
      if (local_40 == 0) {
        return 1;
      }
      FUN_00d50b20();
      return 1;
    }
    cVar1 = FUN_01b58db0();
    if (cVar1 == '\0') {
      (**(code **)(*(int64_t *)this_ptr[0xf] + 0x968))();
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      FUN_00d46dc0(0);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_02390124);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_02390124);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_0239011c);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d21140();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_02390124);
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      uVar4 = FUN_00d21140();
      if (local_50 != 0) {
        uVar4 = FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        uVar4 = FUN_00d50b20();
      }
      local_90 = local_40;
      local_88 = '\0';
      FUN_01b58cf0(uVar4,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_80 = g_027e4900;
      if (g_027e4900 != 0) {
        FUN_00d50b00();
      }
      local_78 = '\x01';
      FUN_00d50b00();
      local_70 = 0;
      local_68 = '\0';
      FUN_00d40470(&local_70,&stack0xffffffffffffffa0,1,3);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x600))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_40 == 0) {
      return 1;
    }
    FUN_00d50b20();
    return 1;
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 01b59670
// ============================================================
// Function: FUN_01b59670
// Address: 01b59670
// Size: 1697 bytes
// Class: MUColorCorrectionCtrl
// String references:
//   "MUColorCorrectionCtrl"
//   "handleAddCC"
//   "handleLoadCC"
//   "handleSaveCC"
//   "handleDelCC"
//   "handleSelectCC"

void FUN_01b59670(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b4b30 = "handleAddCC";
      g_028b4b38 = &g_027309d0;
      g_028b4b40 = 0;
      g_028b4b48 = &g_027e4908;
      g_028b4b50 = FUN_01b5c4f0;
      g_028b4b58 = 0x5c9;
      g_028b4b60 = 0;
      ram_00000000028b4b68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4b78 = "handleLoadCC";
      g_028b4b80 = &g_027309d0;
      g_028b4b88 = 0;
      g_028b4b90 = &g_027e4908;
      g_028b4b98 = FUN_01b5c4f0;
      g_028b4ba0 = 0x5e1;
      g_028b4ba8 = 0;
      ram_00000000028b4bb0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4bc0 = "handleSaveCC";
      g_028b4bc8 = &g_027309d0;
      g_028b4bd0 = 0;
      g_028b4bd8 = &g_027e4908;
      g_028b4be0 = FUN_01b5c4f0;
      g_028b4be8 = 0x5d9;
      g_028b4bf0 = 0;
      ram_00000000028b4bf8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4c08 = "handleDelCC";
      g_028b4c10 = &g_027309d0;
      g_028b4c18 = 0;
      g_028b4c20 = &g_027e4908;
      g_028b4c28 = FUN_01b5c4f0;
      g_028b4c30 = 0x5d1;
      g_028b4c38 = 0;
      ram_00000000028b4c40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4c50 = "handleSelectCC";
      g_028b4c58 = &g_027309d0;
      g_028b4c60 = 0;
      g_028b4c68 = &g_027e4908;
      g_028b4c70 = FUN_01b5c4f0;
      g_028b4c78 = 0x5e9;
      g_028b4c80 = 0;
      ram_00000000028b4c88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 01b5a070
// ============================================================
// Function: FUN_01b5a070
// Address: 01b5a070
// Size: 625 bytes
// Class: MUColorCorrectionCtrl

uint64_t FUN_01b5a070(uint64_t param_1,int param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  if (param_2 != 0) {
    FUN_01b57f70();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01dd4960();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (*(int *)(local_40 + 0x18) < 4) {
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01b58c00();
      local_60 = *(int64_t *)
                  (*(int64_t *)(local_40 + 0x10) + (int64_t)**(int **)(local_40 + 0x10) * 8);
      local_58 = 0;
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      FUN_01b58c80();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_01b58c00();
      iVar1 = *(int *)(local_40 + 0xc);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (iVar1 == 0) {
        FUN_01b57030();
      }
      FUN_00d403d0();
      lVar2 = g_027e4900;
      if (g_027e4900 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_70 = 0;
      local_68 = '\0';
      FUN_00d40470(&local_70,&stack0xffffffffffffffb0,1,3);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x600))();
      FUN_00d50b20();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return 1;
}



// ============================================================
// 01b5a510
// ============================================================
// Function: FUN_01b5a510
// Address: 01b5a510
// Size: 551 bytes
// Class: MUColorCorrectionCtrl

uint64_t FUN_01b5a510(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  if (param_2 != 0) {
    FUN_01b57f70();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01dd4960();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (*(int *)(local_40 + 0x18) + 3U < 7) {
      FUN_01b57030();
    }
    else {
      FUN_01b58c00();
      local_60 = *(int64_t *)
                  (*(int64_t *)(local_40 + 0x10) + (int64_t)**(int **)(local_40 + 0x10) * 8);
      local_58 = 0;
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      FUN_01b57030();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    lVar1 = g_027e4900;
    if (g_027e4900 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_70 = 0;
    local_68 = '\0';
    FUN_00d40470(&local_70,&stack0xffffffffffffffb0,1,3);
    if ((local_68 != '\0') && (local_70 != 0)) {
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
    (**(code **)(*this_ptr + 0x600))();
    FUN_00d50b20();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 008087a0
// ============================================================
// Function: FUN_008087a0
// Address: 008087a0
// Size: 517 bytes
// Class: MUColorCorrectionCtrl
// String references:
//   "MUColorCorrectionCtrl"

void FUN_008087a0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_c8;
  int64_t local_c0;
  int64_t local_b8;
  
  if ((g_02730a98 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027309e8 = FUN_00015ff0();
    g_027309d0 = "MUColorCorrectionCtrl";
    g_027309d8 = 0x90;
    g_027309e0 = FUN_0081e5d0;
    g_027309f0 = 0;
    ram_00000000027309f8 = 0;
    g_02730a00 = 0;
    ram_0000000002730a08 = 0;
    g_02730a10 = 0;
    ram_0000000002730a18 = 0;
    g_02730a20 = 0;
    ram_0000000002730a28 = 0;
    g_02730a30 = 0;
    ram_0000000002730a38 = 0;
    g_02730a40 = 0;
    ram_0000000002730a48 = 0;
    g_02730a50 = 0;
    ram_0000000002730a58 = 0;
    g_02730a60 = 0;
    ram_0000000002730a68 = 0;
    g_02730a70 = 0;
    ram_0000000002730a78 = 0;
    g_02730a80 = 0;
    _ram_0000000002730a88 = 0;
    g_02730a90 = 0;
    ___cxa_guard_release();
  }
  if (g_02730a8b == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_0081e620();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b59670();
    FUN_00e87920(uVar2,0);
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    if (local_c0 != 0) {
      FUN_00d50b20();
    }
    if (local_c8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}

