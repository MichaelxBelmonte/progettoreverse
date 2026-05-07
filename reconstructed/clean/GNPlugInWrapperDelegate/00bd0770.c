// Function: FUN_00bd0770
// Address: 00bd0770
// Size: 2133 bytes
// Class: GNPlugInWrapperDelegate

void FUN_00bd0770(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  int64_t local_30;
  char local_28;
  
  g_02802500 = 0;
  g_02802501 = 0;
  g_02802504 = 0;
  lVar5 = _CFBundleGetMainBundle();
  if ((lVar5 != 0) && (lVar5 = _CFBundleGetIdentifier(), lVar5 != 0)) {
    _CFBundleGetValueForInfoDictionaryKey();
    FUN_00e1c780();
    lVar5 = g_028a5740;
    if (g_028a5740 != local_30) {
      if (local_28 == '\0') {
        if (local_30 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
          lVar5 = local_30;
        }
      }
      else {
        local_28 = '\0';
        lVar5 = local_30;
      }
      bVar2 = g_028a5740 != 0;
      g_028a5740 = lVar5;
      if (bVar2) {
        FUN_00d50b20();
        lVar5 = local_30;
      }
    }
    if ((lVar5 != 0) && (g_028a5748 == '\0')) {
      g_028a5748 = '\x01';
      FUN_00e8cb90();
      lVar5 = local_30;
    }
    if ((local_28 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    _CFBundleGetValueForInfoDictionaryKey();
    FUN_00e1c780();
    lVar5 = g_028a5750;
    if (g_028a5750 != local_30) {
      if (local_28 == '\0') {
        if (local_30 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
          lVar5 = local_30;
        }
      }
      else {
        local_28 = '\0';
        lVar5 = local_30;
      }
      bVar2 = g_028a5750 != 0;
      g_028a5750 = lVar5;
      if (bVar2) {
        FUN_00d50b20();
        lVar5 = local_30;
      }
    }
    if ((lVar5 != 0) && (g_028a5758 == '\0')) {
      g_028a5758 = '\x01';
      FUN_00e8cb90();
      lVar5 = local_30;
    }
    if ((local_28 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    _CFBundleGetValueForInfoDictionaryKey();
    FUN_00e1c780();
    lVar5 = g_028a5760;
    if (g_028a5760 != local_30) {
      if (local_28 == '\0') {
        if (local_30 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
          lVar5 = local_30;
        }
      }
      else {
        local_28 = '\0';
        lVar5 = local_30;
      }
      bVar2 = g_028a5760 != 0;
      g_028a5760 = lVar5;
      if (bVar2) {
        FUN_00d50b20();
        lVar5 = local_30;
      }
    }
    if ((lVar5 != 0) && (g_028a5768 == '\0')) {
      g_028a5768 = '\x01';
      FUN_00e8cb90();
      lVar5 = local_30;
    }
    if ((local_28 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar5 = g_02766278;
  if (g_028a5740 == 0) {
    if (g_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_028a5740;
    if (g_028a5740 == lVar5) {
      bVar1 = false;
      bVar2 = false;
    }
    else {
      g_028a5740 = lVar5;
      bVar1 = true;
      bVar2 = true;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((lVar5 != 0) && (bVar2 = bVar1, g_028a5748 == '\0')) {
      g_028a5748 = '\x01';
      FUN_00e8cb90();
    }
    if (!bVar2 && lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = g_02766278;
  if (g_028a5750 == 0) {
    if (g_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_028a5750;
    if (g_028a5750 == lVar5) {
      bVar1 = false;
      bVar2 = false;
    }
    else {
      g_028a5750 = lVar5;
      bVar1 = true;
      bVar2 = true;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((lVar5 != 0) && (bVar2 = bVar1, g_028a5758 == '\0')) {
      g_028a5758 = '\x01';
      FUN_00e8cb90();
    }
    if (!bVar2 && lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = g_02766278;
  if (g_028a5760 == 0) {
    if (g_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_028a5760;
    if (g_028a5760 == lVar5) {
      bVar1 = false;
      bVar2 = false;
    }
    else {
      g_028a5760 = lVar5;
      bVar1 = true;
      bVar2 = true;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((lVar5 != 0) && (bVar2 = bVar1, g_028a5768 == '\0')) {
      g_028a5768 = '\x01';
      FUN_00e8cb90();
    }
    if (!bVar2 && lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  iVar4 = FUN_000030b0();
  if (iVar4 == 2) {
    FUN_00d6f370();
    lVar5 = g_02766280;
    if (g_02766280 != 0) {
      FUN_00d50b00();
    }
    g_0280250c = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = g_02766288;
    if (g_02766288 != 0) {
      FUN_00d50b00();
    }
    g_0280250d = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = g_02766290;
    if (g_02766290 != 0) {
      FUN_00d50b00();
    }
    g_0280250e = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = g_02766298;
    if (g_02766298 != 0) {
      FUN_00d50b00();
    }
    g_0280250f = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = g_027662a0;
    if (g_027662a0 != 0) {
      FUN_00d50b00();
    }
    g_02802510 = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d6f370();
    lVar5 = g_02766280;
    if (g_02766280 != 0) {
      FUN_00d50b00();
    }
    FUN_00d72780();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = g_02766288;
    if (g_02766288 != 0) {
      FUN_00d50b00();
    }
    FUN_00d72780();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = g_02766290;
    if (g_02766290 != 0) {
      FUN_00d50b00();
    }
    FUN_00d72780();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = g_02766298;
    if (g_02766298 != 0) {
      FUN_00d50b00();
    }
    FUN_00d72780();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = g_027662a0;
    if (g_027662a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d72780();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

