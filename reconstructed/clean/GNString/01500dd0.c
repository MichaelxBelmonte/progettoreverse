// Function: FUN_01500dd0
// Address: 01500dd0
// Size: 1252 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01500dd0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  uint64_t uVar7;
  int64_t this_ptr;
  int64_t *local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_014fff90();
  plVar5 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  cVar6 = (**(code **)(*plVar5 + 0x398))();
  if (cVar6 == '\0') {
LAB_01501060:
    uVar7 = 0;
    goto LAB_01501298;
  }
  local_d8 = plVar5;
  local_d0 = '\0';
  FUN_00e88a90();
  plVar3 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = plVar3;
  if (plVar3 == (int64_t *)0x0) {
    local_98 = plVar5;
    local_90 = '\0';
    cVar6 = FUN_0158bd90();
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') goto LAB_01501060;
LAB_01501256:
    plVar3 = *(int64_t **)(this_ptr + 0x10);
    if (plVar3 != plVar5) {
      FUN_00d50b00();
      *(int64_t **)(this_ptr + 0x10) = plVar5;
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    uVar7 = CONCAT71((int7)((uint64_t)plVar3 >> 8),1);
    if (local_68 == (int64_t *)0x0) goto LAB_01501298;
  }
  else {
    plVar2 = *(int64_t **)(this_ptr + 0x20);
    if (plVar2 != plVar3) {
      FUN_00d50b00();
      *(int64_t **)(this_ptr + 0x20) = local_68;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    lVar1 = g_027c24f0;
    if (g_027c24f0 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar1;
    local_c0 = '\x01';
    FUN_00e89d80(1,&local_c8,0);
    plVar3 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027c24f8;
    if (plVar3 == (int64_t *)0x0) {
      if (g_027c24f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027c2500;
      local_b8 = lVar1;
      local_b0 = '\x01';
      if (g_027c2500 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_027c24e8;
      local_a8 = lVar4;
      local_a0 = '\x01';
      if (g_027c24e8 != 0) {
        FUN_00d50b00();
      }
      local_e0 = plVar5;
      FUN_00083ea0(2,&local_e0);
      FUN_00e972c0();
      local_60 = (int64_t *)&g_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &g_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01501256;
    }
    local_80 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar1;
    FUN_00deb9f0();
    plVar2 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00de6fa0();
    local_78 = local_60;
    local_70 = 0;
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_70 = '\x01';
    cVar6 = (**(code **)(*plVar3 + 0x50))();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (cVar6 != '\0') {
      FUN_00d50b20();
      goto LAB_01501256;
    }
    FUN_00d50b20();
    uVar7 = 0;
  }
  FUN_00d50b20();
LAB_01501298:
  FUN_00d50b20();
  return uVar7 & 0xffffffff;
}

