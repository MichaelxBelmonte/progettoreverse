// Function: FUN_0184af70
// Address: 0184af70
// Size: 526 bytes
// Class: MUScaleRegion

void FUN_0184af70(uint64_t param_1,void*param_2,uint64_t param_3,int64_t *param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t *this_ptr;
  int64_t lVar3;
  void*local_res8;
  void*local_res10;
  int64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  int64_t local_80;
  char local_78;
  uint64_t local_70;
  uint8_t local_68;
  void*local_60;
  uint64_t local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40;
  uint64_t local_38;
  
  local_58 = param_1;
  local_50 = param_3;
  FUN_0184b210();
  uVar1 = FUN_00e7bdb0();
  uVar2 = FUN_00e7bdb0();
  local_a0 = 0;
  local_98 = 0;
  FUN_018516f0(uVar2,uVar1,0,&local_a0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_90 = *param_2;
  local_88 = 0;
  FUN_01857980(local_58,&local_90,local_50);
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_60 = param_2;
  if (*(int *)(local_48 + 0xc) == 0) {
    local_38 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = **(int64_t **)(local_48 + 0x10);
    if (lVar3 == 0) {
      local_38 = 0;
      lVar3 = 0;
    }
    else {
      uVar1 = FUN_00d50b00();
      local_38 = CONCAT71((int7)((uint64_t)uVar1 >> 8),1);
    }
    FUN_00d23620();
  }
  if (*param_4 != 0) {
    FUN_00d216c0();
    local_40 = '\0';
    FUN_00d214d0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_res8 != (void*)0x0) {
    *local_res8 = 0;
  }
  if ((local_res10 != (void*)0x0) && (*local_res10 = 0, local_res8 != (void*)0x0)) {
    local_58 = local_58 >> 0x20;
    if (local_58 == 0) {
      local_50 = local_50 >> 0x20;
      if (local_50 == 0) {
        local_70 = *local_60;
        local_68 = 0;
        FUN_01858310(0,&local_70);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_38 == '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}

