// Function: FUN_00bd0770
// Address: 00bd0770
// Size: 2133 bytes
// Class: GNPlugInWrapperDelegate


void FUN_00bd0770(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong local_30;
  char local_28;
  
  DAT_02802500 = 0;
  DAT_02802501 = 0;
  DAT_02802504 = 0;
  lVar5 = _CFBundleGetMainBundle();
  if ((lVar5 != 0) && (lVar5 = _CFBundleGetIdentifier(), lVar5 != 0)) {
    _CFBundleGetValueForInfoDictionaryKey();
    FUN_00e1c780();
    lVar5 = DAT_028a5740;
    if (DAT_028a5740 != local_30) {
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
      bVar2 = DAT_028a5740 != 0;
      DAT_028a5740 = lVar5;
      if (bVar2) {
        FUN_00d50b20();
        lVar5 = local_30;
      }
    }
    if ((lVar5 != 0) && (DAT_028a5748 == '\0')) {
      DAT_028a5748 = '\x01';
      FUN_00e8cb90();
      lVar5 = local_30;
    }
    if ((local_28 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    _CFBundleGetValueForInfoDictionaryKey();
    FUN_00e1c780();
    lVar5 = DAT_028a5750;
    if (DAT_028a5750 != local_30) {
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
      bVar2 = DAT_028a5750 != 0;
      DAT_028a5750 = lVar5;
      if (bVar2) {
        FUN_00d50b20();
        lVar5 = local_30;
      }
    }
    if ((lVar5 != 0) && (DAT_028a5758 == '\0')) {
      DAT_028a5758 = '\x01';
      FUN_00e8cb90();
      lVar5 = local_30;
    }
    if ((local_28 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    _CFBundleGetValueForInfoDictionaryKey();
    FUN_00e1c780();
    lVar5 = DAT_028a5760;
    if (DAT_028a5760 != local_30) {
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
      bVar2 = DAT_028a5760 != 0;
      DAT_028a5760 = lVar5;
      if (bVar2) {
        FUN_00d50b20();
        lVar5 = local_30;
      }
    }
    if ((lVar5 != 0) && (DAT_028a5768 == '\0')) {
      DAT_028a5768 = '\x01';
      FUN_00e8cb90();
      lVar5 = local_30;
    }
    if ((local_28 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_02766278;
  if (DAT_028a5740 == 0) {
    if (DAT_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_028a5740;
    if (DAT_028a5740 == lVar5) {
      bVar1 = false;
      bVar2 = false;
    }
    else {
      DAT_028a5740 = lVar5;
      bVar1 = true;
      bVar2 = true;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((lVar5 != 0) && (bVar2 = bVar1, DAT_028a5748 == '\0')) {
      DAT_028a5748 = '\x01';
      FUN_00e8cb90();
    }
    if (!bVar2 && lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_02766278;
  if (DAT_028a5750 == 0) {
    if (DAT_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_028a5750;
    if (DAT_028a5750 == lVar5) {
      bVar1 = false;
      bVar2 = false;
    }
    else {
      DAT_028a5750 = lVar5;
      bVar1 = true;
      bVar2 = true;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((lVar5 != 0) && (bVar2 = bVar1, DAT_028a5758 == '\0')) {
      DAT_028a5758 = '\x01';
      FUN_00e8cb90();
    }
    if (!bVar2 && lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_02766278;
  if (DAT_028a5760 == 0) {
    if (DAT_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_028a5760;
    if (DAT_028a5760 == lVar5) {
      bVar1 = false;
      bVar2 = false;
    }
    else {
      DAT_028a5760 = lVar5;
      bVar1 = true;
      bVar2 = true;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((lVar5 != 0) && (bVar2 = bVar1, DAT_028a5768 == '\0')) {
      DAT_028a5768 = '\x01';
      FUN_00e8cb90();
    }
    if (!bVar2 && lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  iVar4 = FUN_000030b0();
  if (iVar4 == 2) {
    FUN_00d6f370();
    lVar5 = DAT_02766280;
    if (DAT_02766280 != 0) {
      FUN_00d50b00();
    }
    DAT_0280250c = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_02766288;
    if (DAT_02766288 != 0) {
      FUN_00d50b00();
    }
    DAT_0280250d = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_02766290;
    if (DAT_02766290 != 0) {
      FUN_00d50b00();
    }
    DAT_0280250e = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_02766298;
    if (DAT_02766298 != 0) {
      FUN_00d50b00();
    }
    DAT_0280250f = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_027662a0;
    if (DAT_027662a0 != 0) {
      FUN_00d50b00();
    }
    DAT_02802510 = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d6f370();
    lVar5 = DAT_02766280;
    if (DAT_02766280 != 0) {
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
    lVar5 = DAT_02766288;
    if (DAT_02766288 != 0) {
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
    lVar5 = DAT_02766290;
    if (DAT_02766290 != 0) {
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
    lVar5 = DAT_02766298;
    if (DAT_02766298 != 0) {
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
    lVar5 = DAT_027662a0;
    if (DAT_027662a0 != 0) {
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


