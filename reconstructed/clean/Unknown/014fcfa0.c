// Function: FUN_014fcfa0
// Address: 014fcfa0
// Size: 1034 bytes
// Class: Unknown

int64_t * FUN_014fcfa0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar2 = g_027c2138;
  if (g_027c2138 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar2;
  local_b0 = '\x01';
  FUN_00d8ede0();
  local_70 = local_50;
  local_68 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  FUN_00d997b0(&local_70,&local_b8);
  plVar3 = local_40;
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
      if (local_38 != '\0') goto LAB_014fd07f;
      FUN_00d50b00();
      goto LAB_014fd0ba;
    }
LAB_014fd0c3:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_014fd0ba:
      *(void*)(arg1 + 1) = 1;
      goto LAB_014fd0c3;
    }
    *arg1 = (int64_t)local_40;
    if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_014fd07f:
    *(void*)(arg1 + 1) = 1;
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_a8 = *arg1;
  local_a0 = '\0';
  FUN_00ddb860();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027c2140;
  local_38 = '\0';
  local_40 = (int64_t *)0x0;
  if (g_027c2140 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x3c8))();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
LAB_014fd34e:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d95590();
    local_60 = local_88;
    local_58 = 0;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_58 = '\x01';
    FUN_00d97f20();
    cVar4 = local_38;
    plVar1 = local_40;
    lVar2 = local_50;
    if (local_40 == (int64_t *)local_50) {
      if ((local_38 == '\0') && (local_50 != 0)) {
        if (local_48 != '\0') goto LAB_014fd28f;
        FUN_00d50b00();
        goto LAB_014fd2c6;
      }
LAB_014fd2ca:
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        local_40 = (int64_t *)lVar2;
        if ((cVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_014fd2c6:
        local_38 = '\x01';
        goto LAB_014fd2ca;
      }
      local_40 = (int64_t *)local_50;
      if ((local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_014fd28f:
      local_38 = '\x01';
      local_48 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    cVar4 = FUN_014fd620();
    plVar1 = local_40;
    if (cVar4 == '\0') goto LAB_014fd34e;
    *(void*)(this_ptr + 1) = 0;
    if (local_38 != '\0') {
      *this_ptr = (int64_t)local_40;
      *(void*)(this_ptr + 1) = 1;
      local_38 = '\0';
      goto LAB_014fd36f;
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_014fd36f:
  FUN_00d50b20();
  return this_ptr;
}

