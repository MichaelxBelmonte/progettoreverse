// Function: FUN_01ed8d70
// Address: 01ed8d70
// Size: 724 bytes
// Class: GNTextAutoCompleterItem

uint32_t FUN_01ed8d70(void)

{
  uint32_t uVar1;
  void*puVar2;
  int64_t lVar3;
  int iVar4;
  void*arg1;
  int64_t this_ptr;
  uint64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint32_t local_68;
  uint32_t uStack_64;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  *(void*)(this_ptr + 0x2cc) = 0xffffffff;
  FUN_01d384d0();
  local_a8 = g_026e1380;
  if (g_026e1380 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_01cacbe0();
  lVar3 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT44(uStack_64,local_68) != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0xc) == 0) {
      uVar1 = 0;
    }
    else {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
      local_50 = 0;
      local_58 = 0;
      local_48 = lVar3;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_40._4_4_ = 0;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar4 = -local_40._4_4_;
          }
          else {
            iVar4 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar4);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar4 = 0;
          }
          local_40 = CONCAT44(iVar4,(int)local_40);
        }
        lVar3 = (int64_t)(int)local_40;
        iVar4 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar4);
        if (*(int *)(local_48 + 0xc) <= iVar4) break;
        local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar3 * 8);
        local_98 = FUN_00dd6dc0();
        local_90 = '\0';
        FUN_00d21140();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00115a50();
      local_50 = '\0';
      local_58 = 0;
      local_68 = 0;
      local_b8 = *arg1;
      local_b0 = 0;
      FUN_01ed8cb0(&local_58,&local_b8,&local_68);
      *(void*)(this_ptr + 0x240) = 0;
      local_80 = '\0';
      local_78 = local_58;
      local_70 = '\0';
      local_88 = puVar2;
      uVar1 = (**(code **)(**(int64_t **)(this_ptr + 0x2a0) + 0x38))(local_68,&local_78,1);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return uVar1;
}

