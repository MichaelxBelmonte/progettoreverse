// Function: FUN_017fe550
// Address: 017fe550
// Size: 518 bytes
// Class: Unknown

void FUN_017fe550(uint8_t param_1)

{
  int iVar1;
  int iVar2;
  void*puVar3;
  int iVar4;
  int64_t *arg1;
  void*this_ptr;
  int iVar5;
  uint32_t uVar6;
  int iVar7;
  uint64_t local_a0;
  uint8_t local_98;
  void*local_90;
  uint64_t local_60;
  uint8_t local_58;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  uVar6 = 1;
  FUN_00c92160();
  iVar7 = 0;
  if (3 < *(int *)(*arg1 + 0x18)) {
    iVar5 = 0;
    iVar4 = 0x400;
    iVar7 = 0;
    uVar6 = 1;
    local_90 = puVar3;
    do {
      local_60 = 0;
      local_58 = 0;
      iVar1 = FUN_017fe120(0xffffffff,iVar5,param_1,&local_60);
      local_60 = 0;
      local_58 = 0;
      iVar2 = FUN_017fe120(1,iVar5,param_1,&local_60);
      if (iVar1 < iVar4) {
        uVar6 = 0xffffffff;
        iVar4 = iVar1;
        iVar7 = iVar5;
      }
      if (iVar2 < iVar4) {
        iVar4 = iVar2;
        uVar6 = 1;
        iVar7 = iVar5;
      }
      iVar1 = *(int *)(*arg1 + 0x18);
      iVar5 = iVar5 + 1;
      iVar2 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      puVar3 = local_90;
    } while (iVar5 < iVar2 >> 2);
  }
  local_a0 = *this_ptr;
  local_98 = 0;
  FUN_017fe120(uVar6,iVar7,param_1,&local_a0,0);
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

