// Function: FUN_013fdaf0
// Address: 013fdaf0
// Size: 661 bytes
// Class: MUDataPointFunction

void FUN_013fdaf0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar4;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t **)(arg1 + 0x38) == (int64_t *)0x0) {
    bVar1 = false;
  }
  else {
    local_88 = *param_2;
    local_80 = '\0';
    (**(code **)(**(int64_t **)(arg1 + 0x38) + 0x18))(param_1,&local_88);
    plVar4 = local_38;
    if (local_38 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      bVar1 = false;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
      bVar1 = true;
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) goto LAB_013fdd47;
  }
  FUN_00ce7000();
  local_78 = g_027c0250;
  if (g_027c0250 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  (**(code **)(*local_98 + 0x400))();
  plVar4 = local_38;
  if (local_38 == (int64_t *)0x0) {
    plVar4 = (int64_t *)0x0;
  }
  else if (local_30 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
    bVar1 = true;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar4 + 0x398))();
  if ((cVar3 == '\0') && (cVar3 = (**(code **)(*plVar4 + 0x3a0))(), cVar3 == '\0'))
  goto LAB_013fdd47;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  local_48 = 0;
  local_40 = '\0';
  local_68 = plVar4;
  FUN_00b8a050(&local_48,&local_58,0,1);
  plVar2 = local_38;
  if (local_38 == plVar4) {
    if (!bVar1) {
      if (local_30 != '\0') goto LAB_013fdd04;
      FUN_00d50b00();
    }
joined_r0x013fdcef:
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      plVar4 = plVar2;
      if (bVar1) {
        FUN_00d50b20();
      }
      goto joined_r0x013fdcef;
    }
    plVar4 = local_38;
    if (bVar1) {
      FUN_00d50b20();
    }
LAB_013fdd04:
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar1 = true;
LAB_013fdd47:
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

