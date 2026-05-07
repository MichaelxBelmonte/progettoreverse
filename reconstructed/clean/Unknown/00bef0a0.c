// Function: FUN_00bef0a0
// Address: 00bef0a0
// Size: 1092 bytes
// Class: Unknown
// String references:
//   "%@/%@"

uint64_t FUN_00bef0a0(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  undefined7 uVar7;
  int64_t *plVar6;
  int64_t this_ptr;
  bool bVar8;
  int64_t local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  uint64_t local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  uint64_t local_40;
  uint32_t local_38;
  
  FUN_00d6f370();
  plVar3 = local_80;
  if ((((local_78 == '\0') && (local_80 != (int64_t *)0x0)) && (FUN_00d50b00(), local_78 != '\0'))
     && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (param_2 == '\0') goto LAB_00bef4c3;
  FUN_00b160d0();
  plVar6 = local_80;
  if (((local_78 == '\0') && (local_80 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_78 != '\0' && (local_80 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  lVar2 = g_027674a0;
  local_e0 = plVar6;
  if (g_027674a0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar6 + 0x5e0))();
  local_f8 = local_f0;
  FUN_00083ea0(2,&local_f8);
  uVar5 = FUN_00d8cb40();
  lVar4 = local_50;
  uVar7 = (undefined7)((uint64_t)uVar5 >> 8);
  if (local_50 == 0) {
    local_38 = (uint32_t)CONCAT71(uVar7,1);
    local_88 = 0;
  }
  else {
    if (local_48 == '\0') {
      uVar5 = FUN_00d50b00();
      local_38 = 0;
      local_88 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((local_48 == '\0') || (local_50 == 0)) goto LAB_00bef1f4;
      FUN_00d50b20();
    }
    else {
      local_48 = '\0';
      local_88 = CONCAT71(uVar7,1);
    }
    local_38 = 0;
  }
LAB_00bef1f4:
  local_80 = (int64_t *)&g_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &g_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_d8 = lVar4;
  local_d0 = '\0';
  local_c8 = 0;
  local_c0 = '\0';
  uVar5 = FUN_00d704d0(&local_c8,&local_d8);
  plVar6 = local_80;
  if (local_80 == (int64_t *)0x0) {
    local_40 = 0;
    plVar6 = (int64_t *)0x0;
    bVar8 = true;
joined_r0x00bef2c3:
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_78 == '\0') {
      uVar5 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      bVar8 = plVar6 == (int64_t *)0x0;
      goto joined_r0x00bef2c3;
    }
    local_78 = '\0';
    local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    bVar8 = false;
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    uVar5 = (**(code **)(*plVar6 + 0x18))();
    local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x960))();
  local_98 = local_50;
  local_90 = 0;
  plVar1 = g_027674a8;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      plVar1 = g_027674a8;
    }
  }
  else {
    local_48 = '\0';
  }
  local_90 = '\x01';
  g_027674a8 = plVar1;
  if (plVar1 != (int64_t *)0x0) {
    local_90 = '\x01';
    FUN_00d50b00();
  }
  local_78 = '\0';
  local_80 = plVar1;
  FUN_00ca0840();
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = '\0';
  local_a8 = lVar4;
  local_a0 = '\0';
  local_b8 = plVar6;
  FUN_00d6f570();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((char)local_38 == '\0' && lVar4 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00bef4c3:
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}

