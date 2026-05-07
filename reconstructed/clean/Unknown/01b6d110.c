// Function: FUN_01b6d110
// Address: 01b6d110
// Size: 946 bytes
// Class: Unknown

int64_t * FUN_01b6d110(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *this_ptr;
  int64_t local_c8;
  char local_c0;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  if (*param_2 == 0) {
    FUN_00d43000();
    lVar1 = *param_2;
    if (lVar1 == local_c8) {
      if (((char)param_2[1] != '\0') || (local_c8 == 0)) goto LAB_01b6d1db;
      local_48 = param_2 + 1;
      if (local_c0 == '\0') {
        FUN_00d50b00();
        goto LAB_01b6d1d4;
      }
    }
    else {
      local_48 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
        *param_2 = local_c8;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01b6d1d4:
        *(void*)local_48 = 1;
LAB_01b6d1db:
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01b6d1f5;
      }
      *param_2 = local_c8;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)local_48 = 1;
  }
LAB_01b6d1f5:
  local_38 = '\0';
  local_40 = 0;
  if (param_1 >> 0x20 == 0) {
    FUN_00d43000();
    cVar3 = local_38;
    lVar1 = local_40;
    if (local_40 == local_c8) {
      if ((local_38 != '\0') || (local_c8 == 0)) goto LAB_01b6d49b;
      if (local_c0 == '\0') {
        FUN_00d50b00();
        goto LAB_01b6d497;
      }
    }
    else {
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
        local_40 = local_c8;
        if ((cVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01b6d497:
        local_38 = '\x01';
LAB_01b6d49b:
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01b6d2ef;
      }
      local_40 = local_c8;
      if ((local_38 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00dd67f0();
    cVar3 = local_38;
    lVar1 = local_40;
    if (local_40 == local_c8) {
      if ((local_38 != '\0') || (local_c8 == 0)) goto LAB_01b6d443;
      if (local_c0 == '\0') {
        FUN_00d50b00();
        goto LAB_01b6d43f;
      }
    }
    else {
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
        local_40 = local_c8;
        if ((cVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01b6d43f:
        local_38 = '\x01';
LAB_01b6d443:
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01b6d2ef;
      }
      local_40 = local_c8;
      if ((local_38 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_38 = '\x01';
LAB_01b6d2ef:
  lVar1 = g_0276caa0;
  if (g_0276caa0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027e2690;
  local_50 = 0;
  if (g_027e2690 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar2;
  local_50 = '\x01';
  FUN_01b6efa0(&local_58,param_2,&local_40);
  FUN_0036bfe0();
  *(void*)(this_ptr + 1) = 0;
  if (local_70 == '\0') {
    if (local_78 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this_ptr = local_78;
      *(void*)(this_ptr + 1) = 1;
    }
  }
  else {
    *this_ptr = local_78;
    *(void*)(this_ptr + 1) = 1;
  }
  FUN_002d10d0();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

