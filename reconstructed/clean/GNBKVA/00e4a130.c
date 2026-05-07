// Function: FUN_00e4a130
// Address: 00e4a130
// Size: 635 bytes
// Class: GNBKVA

void FUN_00e4a130(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_70;
  uint8_t local_68;
  int64_t local_60;
  uint8_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0x2c) == '\0') {
    local_40 = *param_2;
    local_38 = '\0';
    FUN_00e3a2a0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_50 = *(int64_t *)(this_ptr + 0x48);
    local_48 = '\0';
    iVar3 = FUN_00e5d7f0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 == -1) {
      local_60 = *param_2;
      local_58 = 0;
      FUN_00e484f0(param_1,&local_60);
      lVar2 = *arg1;
      lVar1 = local_40;
    }
    else {
      FUN_00dac5e0();
      lVar2 = *arg1;
      lVar1 = local_40;
    }
    local_40 = lVar2;
    if (local_40 != 0) {
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e38fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e3a2a0();
      lVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
        lVar1 = local_40;
      }
    }
    local_40 = lVar1;
    FUN_00daab70();
  }
  else {
    local_70 = *param_2;
    local_68 = 0;
    FUN_00e484f0(param_1,&local_70);
    local_40 = *arg1;
    if (local_40 != 0) {
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *arg1;
      local_38 = '\0';
      FUN_00e38fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

