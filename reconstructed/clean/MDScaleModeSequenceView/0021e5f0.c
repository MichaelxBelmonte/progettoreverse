// Function: FUN_0021e5f0
// Address: 0021e5f0
// Size: 1295 bytes
// Class: MDScaleModeSequenceView

void FUN_0021e5f0(void)

{
  int iVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  uint32_t uVar9;
  uint7 uVar10;
  int64_t local_100;
  char local_f8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int local_50;
  uint32_t local_4c;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00233e40();
  plVar6 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) {
    return;
  }
  plVar2 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar2))();
  plVar8 = local_48;
  pcVar7 = local_38;
  if (local_40[0] != '\0') {
    pcVar7 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    plVar8 = *(int64_t **)(this_ptr + 0x90);
  }
  else if (local_38[0] != '\0') goto LAB_0021e6af;
  FUN_00d50b00();
LAB_0021e6af:
  (**(code **)(*plVar8 + 0xe20))();
  iVar1 = *(int *)(local_100 + 0xc);
  if (local_f8 != '\0') {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar4 = g_026f6f70;
  uVar10 = (uint7)(uint3)((uint)iVar1 >> 8);
  local_50 = iVar1;
  if ((*(char *)(this_ptr + 0x151) == '\0') ||
     ((iVar1 == 0 && (*(char *)(this_ptr + 0x150) == '\0')))) {
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar5 = g_026fe490;
    local_b0 = lVar4;
    local_a8 = '\x01';
    if (g_026fe490 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar5;
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    FUN_00d31230(&local_90,&local_a0);
    plVar2 = local_48;
    if (local_48 == (int64_t *)0x0) {
      uVar9 = 0;
    }
    else if (local_40[0] == '\0') {
      FUN_00d50b00();
      uVar9 = (uint32_t)CONCAT71(uVar10,1);
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
      uVar9 = (uint32_t)CONCAT71(uVar10,1);
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = g_026f6f90;
    local_4c = uVar9;
    if (g_026f6f90 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar4;
    local_78 = '\x01';
    FUN_01d51a40();
    plVar8 = local_48;
    if (local_48 == (int64_t *)0x0) {
      bVar3 = false;
    }
    else if (local_40[0] == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
      bVar3 = true;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar5 = g_026f6f78;
    if (g_026f6f78 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar5;
    local_d8 = '\x01';
    local_d0 = 0;
    local_c8 = '\0';
    FUN_00d31230(&local_d0,&local_e0);
    plVar2 = local_48;
    if (local_48 == (int64_t *)0x0) {
      uVar9 = 0;
    }
    else if (local_40[0] == '\0') {
      FUN_00d50b00();
      uVar9 = (uint32_t)CONCAT71(uVar10,1);
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
      uVar9 = (uint32_t)CONCAT71(uVar10,1);
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_026f6f80;
    local_4c = uVar9;
    if (g_026f6f80 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar4;
    local_b8 = '\x01';
    FUN_01d51a40();
    plVar8 = local_48;
    if (local_48 == (int64_t *)0x0) {
      bVar3 = false;
    }
    else if (local_40[0] == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
      bVar3 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar6 + 0x918))();
  local_68 = '\0';
  local_70 = plVar2;
  (**(code **)(*plVar6 + 0x6a8))();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = '\0';
  local_60 = plVar8;
  FUN_01cef3b0();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_4c != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

