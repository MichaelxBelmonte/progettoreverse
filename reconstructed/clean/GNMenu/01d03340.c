// Function: FUN_01d03340
// Address: 01d03340
// Size: 829 bytes
// Class: GNMenu
// String references:
//   "GNMenu"
// === GNMenu properties ===
//                   _mainWindow
//                   _keyWindow
//                   _infoController


uint64_t FUN_01d03340(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  uint uVar5;
  int iVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  int64_t local_48;
  char local_40;
  char local_32;
  char local_31;
  
  plVar7 = (int64_t *)*arg1;
  local_50 = param_1;
  if ((g_026ee720 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_027f8498 = FUN_00d4fe50();
    g_027f8480 = "GNMenu";
    g_027f8488 = 0x50;
    g_027f8490 = FUN_001d7d70;
    g_027f84a0 = 0;
    ram_00000000027f84a8 = 0;
    g_027f84b0 = 0;
    ram_00000000027f84b8 = 0;
    g_027f84c0 = 0;
    ram_00000000027f84c8 = 0;
    g_027f84d0 = 0;
    ram_00000000027f84d8 = 0;
    g_027f84e0 = 0;
    ram_00000000027f84e8 = 0;
    g_027f84f0 = 0;
    ram_00000000027f84f8 = 0;
    g_027f8500 = 0;
    ram_00000000027f8508 = 0;
    g_027f8510 = 0;
    ram_00000000027f8518 = 0;
    g_027f8520 = 0;
    ram_00000000027f8528 = 0;
    g_027f8530 = 0;
    ram_00000000027f8538 = 0;
    g_027f8540 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01d0339a:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01d0339a;
  }
  local_32 = (char)arg1[1];
  if ((local_32 == '\0') || (*arg1 == 0)) {
    if (*arg1 == 0) goto LAB_01d0353d;
  }
  else {
    FUN_00d50b00();
  }
  lVar2 = g_027ef478;
  plVar7 = (int64_t *)*param_2;
  if (g_027ef478 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar7 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    plVar7 = (int64_t *)*local_50;
    FUN_01e7eb20();
    if (plVar7 == (int64_t *)0x0) {
LAB_01d03453:
      plVar7 = &g_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar7 = local_50;
      if (cVar3 == '\0') goto LAB_01d03453;
    }
    plVar1 = (int64_t *)*plVar7;
    local_31 = (char)plVar7[1];
    if ((local_31 == '\0') || (plVar1 == (int64_t *)0x0)) {
      if (plVar1 == (int64_t *)0x0) goto LAB_01d0352f;
    }
    else {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x6f0))();
    local_48 = local_60;
    local_40 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_40 = '\x01';
    uVar4 = FUN_00d51e10();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar4 != '\0') {
      if (local_31 != '\0') {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
      if (local_32 == '\0') {
        return uVar8;
      }
      FUN_00d50b20();
      return uVar8;
    }
    if (local_31 != '\0') {
      FUN_00d50b20();
    }
  }
LAB_01d0352f:
  if (local_32 != '\0') {
    FUN_00d50b20();
  }
LAB_01d0353d:
  local_80 = *param_2;
  local_78 = '\0';
  local_70 = *local_50;
  local_68 = '\0';
  uVar5 = FUN_00d59fc0(&local_70,&local_80);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return (uint64_t)uVar5;
}

