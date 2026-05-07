// Function: FUN_00c6def0
// Address: 00c6def0
// Size: 827 bytes
// Class: Unknown

void* FUN_00c6def0(uint8_t param_1,int64_t *param_2)

{
  char cVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_a0;
  char local_98;
  void*local_90;
  char local_88;
  int64_t *local_78;
  char local_70 [8];
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  void*local_38;
  
  plVar4 = local_78;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0x3d8))();
  local_40 = local_78;
  if (local_70[0] == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00c6df8a;
    }
  }
  else if (local_78 != (int64_t *)0x0) {
LAB_00c6df8a:
    local_70[0] = '\0';
    local_78 = (int64_t *)0x0;
    local_40 = plVar4;
    local_68 = plVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_38 = puVar2;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar5 = -local_60._4_4_;
        }
        else {
          iVar5 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar5 = 0;
        }
        local_60 = CONCAT44(iVar5,(int)local_60);
      }
      lVar3 = (int64_t)(int)local_60;
      iVar5 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar5);
      if (*(int *)((int64_t)local_68 + 0xc) <= iVar5) break;
      local_78 = *(int64_t **)(local_68[2] + 8 + lVar3 * 8);
      local_a0 = *param_2;
      local_98 = '\0';
      (**(code **)(*local_78 + 0x388))(param_1,&local_a0);
      lVar3 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        local_48 = '\0';
        local_50 = lVar3;
        FUN_00d21140();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00c6f7c0();
    puVar2 = local_38;
  }
  local_88 = '\0';
  local_90 = puVar2;
  cVar1 = (**(code **)(*local_40 + 0x50))();
  if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    if (*(int *)((int64_t)puVar2 + 0xc) < 2) {
      if (*(int *)((int64_t)puVar2 + 0xc) != 1) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        goto LAB_00c6e21d;
      }
      FUN_00d23340();
      plVar4 = &local_50;
      if (local_70[0] != '\0') {
        plVar4 = (int64_t *)local_70;
      }
      local_50 = CONCAT71(local_50._1_7_,local_70[0]);
      *(char *)plVar4 = '\0';
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      if (((char)local_50 == '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
    }
    else {
      FUN_00c6d890();
      *(void*)(this_ptr + 1) = 0;
      if (local_70[0] == '\0') {
        if (local_78 == (int64_t *)0x0) {
          local_78 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
    }
    *this_ptr = local_78;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if (arg1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = arg1;
    *(void*)(this_ptr + 1) = 1;
  }
LAB_00c6e21d:
  FUN_00d50b20();
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

