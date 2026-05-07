// Function: FUN_00dbe290
// Address: 00dbe290
// Size: 1493 bytes
// Class: GNURL
// String references:
//   "%@=\"%@\""

int64_t * FUN_00dbe290(int64_t *param_1,int64_t *param_2,char param_3)

{
  int64_t lVar1;
  char cVar2;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t *local_110 [2];
  uint8_t local_100;
  uint8_t local_f0;
  int64_t *local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_02781680;
  if (*param_1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    lVar3 = *param_2;
    if ((char)param_2[1] != '\0') {
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_2 + 1) = 0;
      return this_ptr;
    }
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar3;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  local_98 = param_2;
  if (g_02781680 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d90870();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_02783b00;
  if (cVar2 == '\0') {
    if (g_02783b00 != 0) {
      FUN_00d50b00();
    }
    FUN_00dbdbc0();
    param_1 = (int64_t *)*param_1;
    cVar2 = FUN_00d8ca70();
    if (cVar2 == '@') {
      FUN_00d8f140();
    }
    else {
      local_78 = 0;
      if (param_1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_78 = '\x01';
      local_80 = param_1;
    }
    local_a0 = local_90;
    local_110[0] = local_80;
    FUN_00083ea0(2,local_110);
    FUN_00d8cb40();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_100 = 1;
    FUN_00dbe120();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_70 = (int64_t *)&g_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
  param_1 = (int64_t *)*param_1;
  cVar2 = FUN_00d8ca70();
  if (cVar2 == '@') {
    FUN_00d8f140();
    param_1 = local_70;
    if (local_68 != '\0') goto LAB_00dbe45c;
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00dbe460;
    }
    param_1 = (int64_t *)0x0;
    if (param_3 == '\0') goto LAB_00dbe6ab;
LAB_00dbe469:
    lVar3 = g_027f2f20;
    if (g_027f2f20 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*param_1 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_02783b08;
    if (cVar2 != '\0') {
      *(void*)(this_ptr + 1) = 0;
      lVar3 = *local_98;
      if ((char)local_98[1] == '\0') {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar3;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        *this_ptr = lVar3;
        *(void*)(this_ptr + 1) = 1;
        *(void*)(local_98 + 1) = 0;
      }
      goto LAB_00dbe848;
    }
    if (g_02783b08 == 0) {
LAB_00dbe6c1:
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = 0;
    if (param_1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
LAB_00dbe45c:
    local_68 = '\0';
LAB_00dbe460:
    if (param_3 != '\0') goto LAB_00dbe469;
LAB_00dbe6ab:
    lVar3 = g_02783b10;
    if (g_02783b10 == 0) goto LAB_00dbe6c1;
    FUN_00d50b00();
  }
  FUN_00dbdbc0();
  local_80 = local_90;
  local_a0 = param_1;
  FUN_00083ea0(2,&local_a0);
  FUN_00d8cb40();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_f0 = 1;
  FUN_00dbe120();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_70 = (int64_t *)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (param_1 == (int64_t *)0x0) {
    return this_ptr;
  }
LAB_00dbe848:
  FUN_00d50b20();
  return this_ptr;
}

