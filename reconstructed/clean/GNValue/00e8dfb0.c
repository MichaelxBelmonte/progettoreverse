// Function: FUN_00e8dfb0
// Address: 00e8dfb0
// Size: 502 bytes
// Class: GNValue

void FUN_00e8dfb0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t *this_ptr;
  int64_t lVar2;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar2 = g_0276cc80;
  if (*param_2 == 0) {
    FUN_00e7b4e0();
    FUN_00dd6690();
    lVar2 = local_38;
    *(void*)(this_ptr + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *this_ptr = lVar2;
        *(void*)(this_ptr + 1) = 1;
        if (local_30 == '\0') {
          return;
        }
        if (local_38 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      local_38 = 0;
    }
    *this_ptr = local_38;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  if (g_0276cc80 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  FUN_00d91000(1,&local_48);
  lVar2 = local_38;
  if (local_38 == 0) {
    bVar1 = true;
    lVar2 = 0;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if ((local_30 == '\0') || (local_38 == 0)) goto LAB_00e8e06f;
      FUN_00d50b20();
    }
    else {
      local_30 = '\0';
    }
    bVar1 = false;
  }
LAB_00e8e06f:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(lVar2 + 0xc) == 2) {
    FUN_00d8d560();
    FUN_00d8d560();
    FUN_00dd6690();
    lVar2 = local_38;
    *(void*)(this_ptr + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *this_ptr = lVar2;
        *(void*)(this_ptr + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto joined_r0x00e8e149;
      }
LAB_00e8e178:
      local_38 = 0;
    }
  }
  else {
    FUN_00e7b4e0();
    FUN_00dd6690();
    lVar2 = local_38;
    *(void*)(this_ptr + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *this_ptr = lVar2;
        *(void*)(this_ptr + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto joined_r0x00e8e149;
      }
      goto LAB_00e8e178;
    }
  }
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
joined_r0x00e8e149:
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}

