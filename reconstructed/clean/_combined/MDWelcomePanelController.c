// ===================================================================
// MDWelcomePanelController — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (5):
//                   _openURLButton
//                   _openURLButton2
//                   _lastUpdate
//                   _lastHandleOpenWelcomeURL
//                   _lastHandleOpenTrial


// ============================================================
// 0071a2c0
// ============================================================
// Function: FUN_0071a2c0
// Address: 0071a2c0
// Size: 817 bytes
// Class: MDWelcomePanelController
// === MDWelcomePanelController properties ===
//                   _openURLButton
//                   _openURLButton2
//                   _lastUpdate
//                   _lastHandleOpenWelcomeURL
//                   _lastHandleOpenTrial


void FUN_0071a2c0(void)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  void*puVar4;
  void*puVar5;
  int iVar6;
  int iVar7;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d216c0();
  FUN_00d21140();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  uVar3 = FUN_00e7dff0();
  iVar7 = (uVar3 & 0x1ff) + 1;
  do {
    FUN_00e7dff0();
    FUN_00d46530();
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
    iVar6 = iVar7 + -1;
    bVar1 = 0 < iVar7;
    iVar7 = iVar6;
  } while (iVar6 != 0 && bVar1);
  FUN_00d51d20();
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
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  uVar3 = FUN_00e7dff0();
  iVar7 = (uVar3 & 0x1ff) + 1;
  do {
    FUN_00e7dff0();
    FUN_00d46530();
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
    iVar6 = iVar7 + -1;
    bVar1 = 0 < iVar7;
    iVar7 = iVar6;
  } while (iVar6 != 0 && bVar1);
  FUN_00d51d20();
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
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0071b4f0
// ============================================================
// Function: FUN_0071b4f0
// Address: 0071b4f0
// Size: 1467 bytes
// Class: MDWelcomePanelController
// String references:
//   "MDWelcomePanelController"
//   "handleToggleShowWelcomePanelOnStartup"
//   "handleCloseWelcomePanel"
//   "handleOpenWelcomeURL"
//   "handleOpenTrial"
// === MDWelcomePanelController properties ===
//                   _openURLButton
//                   _openURLButton2
//                   _lastUpdate
//                   _lastHandleOpenWelcomeURL
//                   _lastHandleOpenTrial


void FUN_0071b4f0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_0280c978 = "handleToggleShowWelcomePanelOnStartup";
      g_0280c980 = &g_0270e838;
      g_0280c988 = 0;
      g_0280c990 = &g_027282c0;
      g_0280c998 = FUN_0071f5b0;
      g_0280c9a0 = 0x5c9;
      g_0280c9a8 = 0;
      ram_000000000280c9b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280c9c0 = "handleCloseWelcomePanel";
      g_0280c9c8 = &g_0270e838;
      g_0280c9d0 = 0;
      g_0280c9d8 = &g_027282c0;
      g_0280c9e0 = FUN_0071f5b0;
      g_0280c9e8 = 0x5d1;
      g_0280c9f0 = 0;
      ram_000000000280c9f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280ca08 = "handleOpenWelcomeURL";
      g_0280ca10 = &g_0270e838;
      g_0280ca18 = 0;
      g_0280ca20 = &g_027282c0;
      g_0280ca28 = FUN_0071f5b0;
      g_0280ca30 = 0x5d9;
      g_0280ca38 = 0;
      ram_000000000280ca40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280ca50 = "handleOpenTrial";
      g_0280ca58 = &g_0270e838;
      g_0280ca60 = 0;
      g_0280ca68 = &g_027282c0;
      g_0280ca70 = FUN_0071f5b0;
      g_0280ca78 = 0x5e1;
      g_0280ca80 = 0;
      ram_000000000280ca88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 0055ee40
// ============================================================
// Function: FUN_0055ee40
// Address: 0055ee40
// Size: 545 bytes
// Class: MDWelcomePanelController
// String references:
//   "MDWelcomePanelController"
// === MDWelcomePanelController properties ===
//                   _openURLButton
//                   _openURLButton2
//                   _lastUpdate
//                   _lastHandleOpenWelcomeURL
//                   _lastHandleOpenTrial


void FUN_0055ee40(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_f8;
  int64_t local_f0;
  int64_t local_e8;
  
  if ((g_0270e900 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0270e850 = FUN_00015ff0();
    g_0270e838 = "MDWelcomePanelController";
    g_0270e840 = 0xa8;
    g_0270e848 = FUN_005710c0;
    g_0270e858 = 0;
    ram_000000000270e860 = 0;
    g_0270e868 = 0;
    g_0270e8e0 = 0;
    ram_000000000270e8e8 = 0;
    g_0270e8f0 = 0;
    g_0270e8f2 = 2;
    g_0270e870 = 0;
    ram_000000000270e878 = 0;
    g_0270e880 = 0;
    ram_000000000270e888 = 0;
    g_0270e890 = 0;
    ram_000000000270e898 = 0;
    g_0270e8a0 = 0;
    ram_000000000270e8a8 = 0;
    g_0270e8b0 = 0;
    ram_000000000270e8b8 = 0;
    g_0270e8c0 = 0;
    ram_000000000270e8c8 = 0;
    g_0270e8d0 = 0;
    ram_000000000270e8d8 = 0;
    g_0270e8fb = 0;
    g_0270e8f3 = 0;
    ___cxa_guard_release();
  }
  if (g_0270e8f3 == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_00571120();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_0071b4f0();
    FUN_00e87920(uVar2,0);
    if (local_e8 != 0) {
      FUN_00d50b20();
    }
    if (local_f0 != 0) {
      FUN_00d50b20();
    }
    if (local_f8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}

