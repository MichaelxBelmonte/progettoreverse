// Function: FUN_00d2f010
// Address: 00d2f010
// Size: 673 bytes
// Class: Unknown

void* FUN_00d2f010(uint64_t param_1,int64_t *param_2)

{
  char cVar1;
  void*puVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_98;
  char local_90;
  void*local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  cVar1 = (**(code **)(*arg1 + 0x368))();
  if (cVar1 != '\0') {
    if (arg1[2] != 0) {
      local_60 = '\0';
      local_68 = (int64_t *)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      local_58 = arg1[2];
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar4 = -local_50._4_4_;
          }
          else {
            iVar4 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar4);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar4 = 0;
          }
          local_50 = CONCAT44(iVar4,(int)local_50);
        }
        lVar3 = (int64_t)(int)local_50;
        iVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar4);
        if (*(int *)(local_58 + 0xc) <= iVar4) break;
        local_68 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar3 * 8);
        local_98 = *param_2;
        local_90 = '\0';
        (**(code **)(*local_68 + 0x3c0))(*(int64_t *)(local_58 + 0x10),&local_98);
        lVar3 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_38 = '\0';
          local_40 = lVar3;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_00c6f7c0();
    }
    if (*(int *)((int64_t)puVar2 + 0xc) != 0) {
      local_80 = '\0';
      local_88 = puVar2;
      FUN_00d92220();
      local_78 = local_68;
      local_70 = 0;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_70 = '\x01';
      FUN_00d95130();
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d2f244;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_00d2f244:
  FUN_00d50b20();
  return this_ptr;
}

