// Function: FUN_0070b120
// Address: 0070b120
// Size: 894 bytes
// Class: MDExportController
// String references:
//   "MDExportController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b120(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar3 = DAT_02727af8;
  if (DAT_0280c948 == (longlong *)0x0) {
    if (DAT_02727af8 != 0) {
      FUN_00d50b00();
    }
    local_78 = 0;
    local_70 = '\0';
    local_68 = 0;
    local_60 = '\0';
    pplVar7 = &local_38;
    FUN_01e4fcf0(&local_68,&local_78);
    plVar1 = local_38;
    if ((DAT_026e1988 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026e18d8 = FUN_00015ff0();
      _DAT_026e18c0 = "MDExportController";
      _DAT_026e18c8 = 0x168;
      _DAT_026e18d0 = FUN_0012b3d0;
      _DAT_026e18e0 = 0;
      uRam00000000026e18e8 = 0;
      _DAT_026e18f0 = 0;
      uRam00000000026e18f8 = 0;
      _DAT_026e1900 = 0;
      uRam00000000026e1908 = 0;
      _DAT_026e1910 = 0;
      uRam00000000026e1918 = 0;
      _DAT_026e1920 = 0;
      uRam00000000026e1928 = 0;
      _DAT_026e1930 = 0;
      uRam00000000026e1938 = 0;
      _DAT_026e1940 = 0;
      uRam00000000026e1948 = 0;
      _DAT_026e1950 = 0;
      uRam00000000026e1958 = 0;
      _DAT_026e1960 = 0;
      uRam00000000026e1968 = 0;
      _DAT_026e1970 = 0;
      uRam00000000026e1978 = 0;
      _DAT_026e1980 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_0070b1c2:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_0070b1c2;
    }
    plVar1 = *pplVar7;
    plVar6 = DAT_0280c948;
    if (DAT_0280c948 != plVar1) {
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar1 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar6 = *pplVar7;
        }
      }
      else {
        *(undefined1 *)(pplVar7 + 1) = 0;
        plVar6 = plVar1;
      }
      bVar2 = DAT_0280c948 != (longlong *)0x0;
      DAT_0280c948 = plVar6;
      if (bVar2) {
        FUN_00d50b20();
        plVar6 = *pplVar7;
      }
    }
    if ((plVar6 != (longlong *)0x0) && (DAT_0280c950 == '\0')) {
      DAT_0280c950 = '\x01';
      FUN_00e8cb90();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
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
    if (DAT_0280c948 == (longlong *)0x0) {
      return;
    }
  }
  FUN_006f3f00();
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) goto LAB_0070b2f0;
    FUN_00d50b00();
  }
  else if (local_38 == (longlong *)0x0) {
LAB_0070b2f0:
    local_30 = '\0';
    local_38 = (longlong *)0x0;
    bVar2 = true;
    goto LAB_0070b367;
  }
  FUN_00756eb0();
  plVar6 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0070b322;
    }
  }
  else if (local_38 != (longlong *)0x0) {
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
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = DAT_0280c948;
  local_40 = 0;
  if (DAT_0280c948 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_48 = plVar1;
  local_40 = '\x01';
  FUN_01d83990();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}


