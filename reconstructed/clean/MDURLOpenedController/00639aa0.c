// Function: FUN_00639aa0
// Address: 00639aa0
// Size: 1473 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"

void FUN_00639aa0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int64_t **pplVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  cVar6 = FUN_00e34240();
  if (cVar6 != '\0') {
    return;
  }
  cVar6 = FUN_00e34250();
  if (cVar6 != '\0') {
    return;
  }
  FUN_00d6f370();
  uVar10 = FUN_00dd2890();
  local_f0 = g_02725a90;
  if (g_02725a90 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_e8 = '\x01';
  FUN_00d70ea0(uVar10,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d13b30();
  FUN_00dd2830();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    return;
  }
  FUN_01f27fe0();
  FUN_00281390();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00dd2830();
  plVar4 = local_40;
  if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01e697d0();
  local_e0 = plVar4;
  local_d8 = '\0';
  FUN_01e69930(uVar10,0);
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00dd2860();
  if (local_40 == (int64_t *)0x0) {
    bVar7 = 1;
  }
  else {
    FUN_00dd2860();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    bVar7 = FUN_00e6d4e0();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    bVar7 = bVar7 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026d8ab8;
  if (bVar7 == 0) goto LAB_00639f8b;
  if (g_026d8ab8 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  local_b0 = 0;
  local_a8 = '\0';
  pplVar9 = &local_40;
  FUN_01e4fcf0(&local_b0,&local_c0);
  plVar1 = local_40;
  if ((g_0270e710 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_02726298 = FUN_00015ff0();
    g_02726280 = "MDURLOpenedController";
    g_02726288 = 0x90;
    g_02726290 = FUN_00098280;
    g_027262a0 = 0;
    ram_00000000027262a8 = 0;
    g_027262b0 = 0;
    ram_00000000027262b8 = 0;
    g_027262c0 = 0;
    ram_00000000027262c8 = 0;
    g_027262d0 = 0;
    ram_00000000027262d8 = 0;
    g_027262e0 = 0;
    ram_00000000027262e8 = 0;
    g_027262f0 = 0;
    ram_00000000027262f8 = 0;
    g_02726300 = 0;
    ram_0000000002726308 = 0;
    g_02726310 = 0;
    ram_0000000002726318 = 0;
    g_02726320 = 0;
    ram_0000000002726328 = 0;
    g_02726330 = 0;
    ram_0000000002726338 = 0;
    g_02726340 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_00639ddd:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00639ddd;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00dbbbc0();
    plVar5 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar10 = FUN_0054d030();
    if (plVar5 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    local_98 = '\0';
    local_90 = 0;
    local_88 = '\0';
    local_a0 = plVar1;
    FUN_00093bd0(uVar10,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b00();
    }
    FUN_00094580();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_00639f8b:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

