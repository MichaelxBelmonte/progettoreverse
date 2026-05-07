// Function: FUN_01f82cb0
// Address: 01f82cb0
// Size: 1977 bytes
// Class: GNShortCutOutlineController

void FUN_01f82cb0(int64_t *param_1,int *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  void*puVar6;
  void*arg1;
  int64_t lVar7;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  void*local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  if (cVar5 == '\0') {
    return;
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  local_88 = puVar6;
  (*g_02572370)();
  (**(code **)(*(int64_t *)*arg1 + 1000))();
  plVar3 = local_80;
  if (local_78 == '\0') {
    if (local_80 == (int64_t *)0x0) goto LAB_01f82f33;
    FUN_00d50b00();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_80 == (int64_t *)0x0) goto LAB_01f82f33;
  local_78 = '\0';
  local_80 = (int64_t *)0x0;
  local_58 = plVar3;
  local_70 = plVar3;
  local_68 = -1;
  iStack_64 = 0;
  iStack_60 = 0;
  while( true ) {
    if (iStack_64 != 0) {
      if (iStack_64 < 1) {
        iStack_64 = -iStack_64;
      }
      else {
        local_68 = local_68 - iStack_64;
        FUN_00d23690();
        iStack_60 = iStack_60 + iStack_64;
        iStack_64 = 0;
      }
    }
    lVar7 = (int64_t)local_68;
    local_68 = local_68 + 1;
    if (*(int *)((int64_t)local_70 + 0xc) <= local_68) break;
    local_80 = *(int64_t **)(local_70[2] + 8 + lVar7 * 8);
    cVar5 = (**(code **)(*local_80 + 0x398))();
    if (cVar5 != '\0') {
      (**(code **)(*local_80 + 0x370))();
      plVar3 = local_40;
      lVar7 = g_028bb250;
      if (g_028bb250 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar3 + 0x50))();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        (**(code **)(*local_80 + 0x388))();
        plVar3 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = plVar3;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00115910();
  FUN_00d50b20();
LAB_01f82f33:
  puVar6 = local_88;
  FUN_00d242c0();
  lVar7 = g_026fce10;
  if ((*(int *)((int64_t)puVar6 + 0xc) != 0) && (0 < *param_2)) {
    if (g_026fce10 != 0) {
      FUN_00d50b00();
    }
    FUN_01d64ce0();
    plVar3 = local_80;
    if (local_78 == '\0') {
      if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
         (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78 = '\0';
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_01d66c80();
    FUN_01d5d7f0();
    *param_2 = *param_2 + 1;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_78 = 0;
  local_80 = (int64_t *)0x0;
  local_70 = local_88;
  iStack_64 = 0;
  iStack_60 = 0;
  for (lVar7 = 0; local_68 = (int)lVar7, local_68 < *(int *)((int64_t)local_88 + 0xc);
      lVar7 = lVar7 + 1) {
    local_80 = *(int64_t **)(local_88[2] + lVar7 * 8);
    (**(code **)(*(int64_t *)*arg1 + 0x400))();
    local_58 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*local_58 + 0x390))();
    local_98 = local_50;
    local_90 = 0;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_90 = '\x01';
    FUN_01da7910();
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
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02800fe0;
    if (g_02800fe0 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar1;
    local_e0 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    local_c8 = *param_1;
    local_c0 = '\0';
    FUN_01d64d40(&local_d8,&local_e8,&local_c8);
    plVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d66da0();
    plVar2 = g_02800fe8;
    local_b8 = local_58;
    local_b0 = '\0';
    if (g_02800fe8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_40 = plVar2;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_a8 = plVar4;
    local_a0 = '\0';
    FUN_01d5d7f0();
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *param_2 = *param_2 + 1;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00018280();
  FUN_00d50b20();
  return;
}

