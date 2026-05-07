// Function: FUN_01a3d730
// Address: 01a3d730
// Size: 1518 bytes
// Class: Unknown

void FUN_01a3d730(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  uint64_t uVar3;
  undefined7 uVar4;
  undefined7 extraout_var;
  char cVar5;
  uint32_t uVar6;
  undefined7 uVar7;
  int64_t this_ptr;
  int64_t lVar8;
  int64_t *plVar9;
  byte bVar10;
  int64_t lVar11;
  bool bVar12;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
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
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
LAB_01a3d806:
    (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
    FUN_00d50b00();
    local_88 = '\x01';
    local_90 = (int64_t *)(this_ptr + 0x138);
    FUN_00cbb340();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      (**(code **)(*local_90 + 0x10))();
      FUN_00d50b20();
    }
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_50 = FUN_00e8b990();
  if (local_50 == 0) goto LAB_01a3d806;
  FUN_00d50b00();
  FUN_011a15f0();
  FUN_00e86210();
  lVar11 = g_027e1fd0;
  if (g_027e1fd0 != 0) {
    FUN_00d50b00();
  }
  uVar3 = FUN_00c841b0();
  lVar8 = local_48;
  if (local_48 == 0) {
    bVar10 = 1;
    local_34 = 0;
  }
  else {
    if (local_40 == '\0') {
      uVar3 = FUN_00d50b00();
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      bVar10 = 0;
      if ((local_40 == '\0') || (bVar10 = 0, local_48 == 0)) goto LAB_01a3d89e;
      uVar3 = FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
    bVar10 = 0;
  }
LAB_01a3d89e:
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  local_78 = 0;
  plVar9 = (int64_t *)(this_ptr + 0x138);
  (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  local_100 = lVar8;
  local_f8 = '\0';
  local_80 = plVar9;
  FUN_00cbadd0(&local_100,&local_110);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  FUN_011c5770();
  FUN_00e86210();
  lVar11 = g_026d83d8;
  if (g_026d83d8 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar11;
  local_e8 = '\x01';
  uVar3 = FUN_00c841b0();
  lVar1 = local_48;
  uVar4 = (undefined7)((uint64_t)uVar3 >> 8);
  uVar7 = (undefined7)((uint64_t)lVar11 >> 8);
  if (lVar8 == local_48) {
    uVar6 = local_34;
    if ((bool)(bVar10 & lVar8 != 0)) {
      if (local_40 != '\0') goto LAB_01a3d9fd;
      FUN_00d50b00();
      uVar6 = (int)CONCAT71(uVar7,1);
    }
LAB_01a3da5b:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      bVar12 = lVar8 != 0;
      uVar6 = (uint32_t)CONCAT71(uVar7,1);
      lVar8 = lVar1;
      if (((byte)local_34 & bVar12) == 1) {
        FUN_00d50b20();
      }
      goto LAB_01a3da5b;
    }
    bVar12 = lVar8 != 0;
    lVar8 = lVar1;
    if (((byte)local_34 & bVar12) == 1) {
      FUN_00d50b20();
      uVar4 = extraout_var;
    }
LAB_01a3d9fd:
    local_40 = '\0';
    uVar6 = (int)CONCAT71(uVar4,1);
  }
  local_34 = uVar6;
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  local_c8 = '\0';
  local_d0 = lVar8;
  local_70 = plVar9;
  FUN_00cbadd0(&local_d0,&local_e0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  FUN_011c5770();
  FUN_00e86210();
  local_c0 = g_027e1fd8;
  if (g_027e1fd8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  FUN_00c841b0();
  lVar11 = local_48;
  if (lVar8 == local_48) {
    lVar11 = lVar8;
    cVar5 = (char)local_34;
    if (((char)local_34 == '\0') && (lVar8 != 0)) {
      if (local_40 != '\0') goto LAB_01a3dbbf;
      FUN_00d50b00();
      cVar5 = '\x01';
    }
  }
  else {
    if (local_40 != '\0') {
      if (((char)local_34 != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
LAB_01a3dbbf:
      local_40 = '\0';
      cVar5 = '\x01';
      goto LAB_01a3dc30;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    cVar5 = '\x01';
    if (((char)local_34 != '\0') && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01a3dc30:
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  local_58 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  local_98 = '\0';
  local_a0 = lVar11;
  local_60 = plVar9;
  FUN_00cbadd0(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  if ((cVar5 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

