// Function: FUN_009dedf4
// Address: 009dedf4
// Size: 729 bytes
// Class: Unknown

void FUN_009dedf4(byte *param_1,byte *param_2)

{
  byte bVar1;
  int64_t lVar2;
  byte *pbVar3;
  byte *pbVar4;
  int64_t arg1;
  uint64_t uVar5;
  uint64_t uVar6;
  byte *this_ptr;
  undefined5 local_50;
  undefined3 uStackY_4b;
  ulong in_stack_ffffffffffffffb8;
  uint32_t uStack_44;
  ulong in_stack_ffffffffffffffc0;
  uint32_t uStack_3c;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  this_ptr[0x10] = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0] = 0;
  this_ptr[1] = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  switch(*(void*)(arg1 + 0x168)) {
  case 0:
  case 3:
    uVar6 = (int64_t)param_1 - (int64_t)param_2;
    if ((uVar6 < 0x17) ||
       (std::string::__grow_by
                  (0,(int)uVar6 - 0x16,0,0,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0),
       (*this_ptr & 1) == 0)) {
      pbVar3 = this_ptr + 1;
    }
    else {
      pbVar3 = *(byte **)(this_ptr + 0x10);
    }
    pbVar4 = this_ptr + 1;
    for (; param_2 != param_1; param_2 = param_2 + 1) {
      *pbVar3 = *param_2;
      pbVar3 = pbVar3 + 1;
    }
    *pbVar3 = 0;
    if ((*this_ptr & 1) == 0) {
      *this_ptr = (char)uVar6 * '\x02';
    }
    else {
      *(uint64_t *)(this_ptr + 8) = uVar6;
    }
    (**(code **)(**(int64_t **)(arg1 + 8) + 0x30))();
    if ((*this_ptr & 1) == 0) {
      uVar6 = (uint64_t)(*this_ptr >> 1);
    }
    else {
      pbVar4 = *(byte **)(this_ptr + 0x10);
      uVar6 = *(uint64_t *)(this_ptr + 8);
    }
    pbVar4 = pbVar4 + uVar6;
    (**(code **)(**(int64_t **)(arg1 + 0x18) + 0x20))();
    if ((*this_ptr & 1) != 0) {
      operator_delete(pbVar4);
    }
    *(uint64_t *)(this_ptr + 0x10) = CONCAT44(uStack_3c,in_stack_ffffffffffffffc0);
    param_1 = (byte *)CONCAT44(uStack_44,in_stack_ffffffffffffffb8);
    *(byte **)(this_ptr + 8) = param_1;
    *(uint64_t *)this_ptr = CONCAT35(uStackY_4b,local_50);
    break;
  case 1:
    (**(code **)(**(int64_t **)(arg1 + 0x18) + 0x20))(param_1,param_2);
    if ((*this_ptr & 1) != 0) {
      operator_delete(param_1);
    }
    *(uint64_t *)(this_ptr + 0x10) = CONCAT44(uStack_3c,in_stack_ffffffffffffffc0);
    param_1 = (byte *)CONCAT44(uStack_44,in_stack_ffffffffffffffb8);
    *(byte **)(this_ptr + 8) = param_1;
    *(uint64_t *)this_ptr = CONCAT35(uStackY_4b,local_50);
    std::string::erase(in_stack_ffffffffffffffb8,0xffffffff);
    break;
  case 2:
    (**(code **)(**(int64_t **)(arg1 + 0x18) + 0x20))(param_1,param_2);
    if ((*this_ptr & 1) != 0) {
      operator_delete(param_1);
    }
    *(uint64_t *)(this_ptr + 0x10) = CONCAT44(uStack_3c,in_stack_ffffffffffffffc0);
    param_1 = (byte *)CONCAT44(uStack_44,in_stack_ffffffffffffffb8);
    *(byte **)(this_ptr + 8) = param_1;
    *(uint64_t *)this_ptr = CONCAT35(uStackY_4b,local_50);
    bVar1 = *this_ptr;
    if ((bVar1 & 1) == 0) {
      uVar6 = (uint64_t)(bVar1 >> 1);
    }
    else {
      uVar6 = *(uint64_t *)(this_ptr + 8);
    }
    if (uVar6 != 0) {
      param_1 = (byte *)CONCAT71((int7)((uint64_t)param_1 >> 8),*(byte *)(arg1 + 0x16c));
      if ((bVar1 & 1) == 0) {
        pbVar3 = this_ptr + 1;
      }
      else {
        pbVar3 = *(byte **)(this_ptr + 0x10);
      }
      uVar5 = 0;
      do {
        if (pbVar3[uVar5] == *(byte *)(arg1 + 0x16c)) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    std::string::erase((ulong)param_1,0xffffffff);
  }
  while( true ) {
    bVar1 = *this_ptr;
    if ((bVar1 & 1) == 0) {
      uVar6 = (uint64_t)(bVar1 >> 1);
    }
    else {
      uVar6 = *(uint64_t *)(this_ptr + 8);
    }
    if (uVar6 == 0) break;
    param_1 = this_ptr + 1;
    if ((bVar1 & 1) != 0) {
      param_1 = *(byte **)(this_ptr + 0x10);
    }
    if (param_1[uVar6 - 1] != 0) goto LAB_009df0a6;
    std::string::erase((ulong)param_1,0xffffffff);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(param_1);
  }
  this_ptr[0] = 2;
  this_ptr[1] = 0;
  this_ptr[2] = 0;
  *(uint64_t *)(this_ptr + 3) = CONCAT35(uStackY_4b,local_50);
  *(uint64_t *)(this_ptr + 8) =
       CONCAT17((uint8_t)uStack_44,CONCAT43(in_stack_ffffffffffffffb8,uStackY_4b));
LAB_009df0a6:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return;
  }
                      ___stack_chk_fail();
}

