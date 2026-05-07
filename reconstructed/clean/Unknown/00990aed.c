// Function: FUN_00990aed
// Address: 00990aed
// Size: 517 bytes
// Class: Unknown

uint64_t FUN_00990aed(uint64_t param_1,void*param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  char cVar6;
  void*arg1;
  void*this_ptr;
  
  cVar5 = FUN_00990a6c();
  cVar6 = FUN_00990a6c();
  if (cVar5 == '\0') {
    if (cVar6 == '\0') {
      return 0;
    }
    uVar1 = arg1[2];
    uVar2 = *arg1;
    uVar3 = arg1[1];
    arg1[2] = param_2[2];
    uVar4 = *param_2;
    arg1[1] = param_2[1];
    *arg1 = uVar4;
    param_2[2] = uVar1;
    param_2[1] = uVar3;
    *param_2 = uVar2;
    cVar5 = FUN_00990a6c();
    if (cVar5 == '\0') {
      return 1;
    }
    uVar1 = this_ptr[2];
    uVar2 = *this_ptr;
    uVar3 = this_ptr[1];
    this_ptr[2] = arg1[2];
    uVar4 = *arg1;
    this_ptr[1] = arg1[1];
    *this_ptr = uVar4;
    arg1[2] = uVar1;
    arg1[1] = uVar3;
    *arg1 = uVar2;
  }
  else {
    if (cVar6 != '\0') {
      uVar1 = this_ptr[2];
      uVar2 = *this_ptr;
      uVar3 = this_ptr[1];
      this_ptr[2] = param_2[2];
      uVar4 = *param_2;
      this_ptr[1] = param_2[1];
      *this_ptr = uVar4;
      param_2[2] = uVar1;
      param_2[1] = uVar3;
      *param_2 = uVar2;
      return 1;
    }
    uVar1 = this_ptr[2];
    uVar2 = *this_ptr;
    uVar3 = this_ptr[1];
    this_ptr[2] = arg1[2];
    uVar4 = *arg1;
    this_ptr[1] = arg1[1];
    *this_ptr = uVar4;
    arg1[2] = uVar1;
    arg1[1] = uVar3;
    *arg1 = uVar2;
    cVar5 = FUN_00990a6c();
    if (cVar5 == '\0') {
      return 1;
    }
    uVar1 = arg1[2];
    uVar2 = *arg1;
    uVar3 = arg1[1];
    arg1[2] = param_2[2];
    uVar4 = *param_2;
    arg1[1] = param_2[1];
    *arg1 = uVar4;
    param_2[2] = uVar1;
    param_2[1] = uVar3;
    *param_2 = uVar2;
  }
  return 2;
}

