// Function: FUN_01f0c590
// Address: 01f0c590
// Size: 523 bytes
// Class: GNMultipleValue

int64_t * FUN_01f0c590(uint32_t param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  
  if (arg1[0x2d] == 0) {
    (**(code **)(*arg1 + 0x930))();
  }
  FUN_01e466c0(param_1);
  uVar7 = (**(code **)(*arg1 + 0x950))();
  lVar6 = 8;
  uVar4 = 0;
  bVar1 = false;
  local_40 = 0;
  do {
    iVar3 = FUN_01d5b230();
    if ((int64_t)iVar3 <= (int64_t)uVar4) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (!bVar1) {
        return this_ptr;
      }
      if (local_40 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    FUN_01d5b240(extraout_XMM0_Da,uVar4 & 0xffffffff);
    if (local_40 == local_50) {
      if ((bVar1) || (local_40 == 0)) goto joined_r0x01f0c6ed;
      bVar1 = true;
      if (local_48 == '\0') {
        FUN_00d50b00();
        lVar5 = local_40;
        goto LAB_01f0c6ce;
      }
    }
    else if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      lVar5 = local_50;
      if ((bVar1) && (local_40 != 0)) {
        FUN_00d50b20();
      }
LAB_01f0c6ce:
      bVar1 = true;
      local_40 = lVar5;
joined_r0x01f0c6ed:
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else if ((bVar1) && (local_40 != 0)) {
      local_40 = local_50;
      FUN_00d50b20();
      bVar1 = true;
    }
    else {
      local_40 = local_50;
      bVar1 = true;
    }
    cVar2 = FUN_00d05410(uVar7,*(void*)(*(int64_t *)(arg1[0x2d] + 0x10) + -8 + lVar6),
                         *(void*)(*(int64_t *)(arg1[0x2d] + 0x10) + lVar6));
    uVar4 = uVar4 + 1;
    lVar6 = lVar6 + 0x10;
    if (cVar2 != '\0') {
      *(void*)(this_ptr + 1) = 0;
      if ((!bVar1) && (local_40 != 0)) {
        FUN_00d50b00();
      }
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
  } while( true );
}

