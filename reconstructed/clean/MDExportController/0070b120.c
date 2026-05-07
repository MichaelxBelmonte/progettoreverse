// Function: FUN_0070b120
// Address: 0070b120
// Size: 894 bytes
// Class: MDExportController
// String references:
//   "MDExportController"
// === MDExportController properties ===
//   MDPlaybackSetup _lastSetup


void FUN_0070b120(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  lVar3 = g_02727af8;
  if (g_0280c948 == (int64_t *)0x0) {
    if (g_02727af8 != 0) {
      FUN_00d50b00();
    }
    local_78 = 0;
    local_70 = '\0';
    local_68 = 0;
    local_60 = '\0';
    pplVar7 = &local_38;
    FUN_01e4fcf0(&local_68,&local_78);
    plVar1 = local_38;
    if ((g_026e1988 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026e18d8 = FUN_00015ff0();
      g_026e18c0 = "MDExportController";
      g_026e18c8 = 0x168;
      g_026e18d0 = FUN_0012b3d0;
      g_026e18e0 = 0;
      ram_00000000026e18e8 = 0;
      g_026e18f0 = 0;
      ram_00000000026e18f8 = 0;
      g_026e1900 = 0;
      ram_00000000026e1908 = 0;
      g_026e1910 = 0;
      ram_00000000026e1918 = 0;
      g_026e1920 = 0;
      ram_00000000026e1928 = 0;
      g_026e1930 = 0;
      ram_00000000026e1938 = 0;
      g_026e1940 = 0;
      ram_00000000026e1948 = 0;
      g_026e1950 = 0;
      ram_00000000026e1958 = 0;
      g_026e1960 = 0;
      ram_00000000026e1968 = 0;
      g_026e1970 = 0;
      ram_00000000026e1978 = 0;
      g_026e1980 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_0070b1c2:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_0070b1c2;
    }
    plVar1 = *pplVar7;
    plVar6 = g_0280c948;
    if (g_0280c948 != plVar1) {
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar1 == (int64_t *)0x0) {
          plVar6 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar6 = *pplVar7;
        }
      }
      else {
        *(void*)(pplVar7 + 1) = 0;
        plVar6 = plVar1;
      }
      bVar2 = g_0280c948 != (int64_t *)0x0;
      g_0280c948 = plVar6;
      if (bVar2) {
        FUN_00d50b20();
        plVar6 = *pplVar7;
      }
    }
    if ((plVar6 != (int64_t *)0x0) && (g_0280c950 == '\0')) {
      g_0280c950 = '\x01';
      FUN_00e8cb90();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (g_0280c948 == (int64_t *)0x0) {
      return;
    }
  }
  FUN_006f3f00();
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) goto LAB_0070b2f0;
    FUN_00d50b00();
  }
  else if (local_38 == (int64_t *)0x0) {
LAB_0070b2f0:
    local_30 = '\0';
    local_38 = (int64_t *)0x0;
    bVar2 = true;
    goto LAB_0070b367;
  }
  FUN_00756eb0();
  plVar6 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0070b322;
    }
  }
  else if (local_38 != (int64_t *)0x0) {
LAB_0070b322:
    uVar8 = (**(code **)(*plVar6 + 0x408))();
    uVar9 = (**(code **)(*plVar6 + 0x418))();
    FUN_00116890(uVar8,uVar9);
    FUN_00d50b20();
  }
  bVar2 = false;
LAB_0070b367:
  local_58 = plVar1;
  local_50 = '\0';
  FUN_001168b0();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = g_0280c948;
  local_40 = 0;
  if (g_0280c948 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48 = plVar1;
  local_40 = '\x01';
  FUN_01d83990();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}

