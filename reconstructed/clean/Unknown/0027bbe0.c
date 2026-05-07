// Function: FUN_0027bbe0
// Address: 0027bbe0
// Size: 1559 bytes
// Class: Unknown

void FUN_0027bbe0(void* param_1,uint64_t param_2,char param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  void* local_ac;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  
  local_ac = param_1;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0141b690();
  local_38 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar6 = local_38;
  if (param_3 == '\0') goto LAB_0027bfa6;
  FUN_0141b1a0();
  if (local_68 == (int64_t *)0x0) {
    cVar4 = '\0';
  }
  else {
    FUN_0141b1a0();
    plVar1 = local_78;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0141b660();
    plVar6 = local_38;
    local_a8 = local_48;
    local_a0 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_a0 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6f70;
  if (cVar4 == '\0') goto LAB_0027bfa6;
  if (g_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026fb7d0;
  if (g_026fb7d0 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar3;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  plVar6 = &local_f0;
  FUN_00d31230(plVar6,&local_100);
  local_98 = local_48;
  param_1 = (void*)plVar6;
  local_90 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  plVar6 = local_38;
  local_90 = '\x01';
  local_60 = 1;
  local_68 = &g_024c5048;
  local_50 = 0;
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_58 = plVar6;
  local_50 = '\x01';
  FUN_00d93690();
  plVar1 = local_78;
  if (plVar6 == local_78) {
LAB_0027befa:
    if (local_70 != '\0') {
LAB_0027bf00:
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_70 == '\0') {
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (local_38 != (int64_t *)0x0) {
        local_38 = plVar1;
        FUN_00d50b20();
        goto LAB_0027befa;
      }
      local_38 = plVar1;
      if (local_70 == '\0') goto LAB_0027bf0e;
      goto LAB_0027bf00;
    }
    if (local_38 != (int64_t *)0x0) {
      local_38 = local_78;
      FUN_00d50b20();
    }
    local_70 = '\0';
    local_38 = plVar1;
  }
LAB_0027bf0e:
  local_68 = &g_024c5048;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = local_38;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_0027bfa6:
  local_d8 = '\0';
  local_d0 = *arg1;
  local_c8 = '\0';
  local_e0 = plVar6;
  local_38 = plVar6;
  FUN_01d64ce0();
  plVar6 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d66da0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0141b660();
  local_88 = local_48;
  local_80 = 0;
  lVar2 = g_02726cf0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      lVar2 = g_02726cf0;
    }
  }
  else {
    local_40 = '\0';
  }
  local_80 = '\x01';
  g_02726cf0 = lVar2;
  if (lVar2 != 0) {
    local_80 = '\x01';
    FUN_00d50b00();
  }
  local_60 = local_60 & 0xffffff00;
  local_68 = (int64_t *)lVar2;
  FUN_00ca0840();
  plVar1 = local_38;
  if (((char)local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_c0 = plVar6;
  local_b8 = '\0';
  FUN_01d5d7f0();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

