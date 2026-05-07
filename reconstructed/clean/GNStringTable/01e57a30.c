// Function: FUN_01e57a30
// Address: 01e57a30
// Size: 677 bytes
// Class: GNStringTable

void FUN_01e57a30(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_98;
  char local_90;
  
  lVar1 = *arg1;
  lVar2 = this_ptr[0xc];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0xc] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *param_2;
  lVar2 = this_ptr[0xd];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0xd] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*arg1 == 0) {
    if (this_ptr[3] == 0) {
      (**(code **)(*this_ptr + 0x448))();
      lVar1 = this_ptr[3];
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = this_ptr[3];
    }
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if (*param_1 == 0) {
      FUN_01e5bfa0();
    }
    else {
      FUN_01e5c1a0();
    }
    (**(code **)(*this_ptr + 0x598))();
    FUN_01e5d9c0();
    FUN_01f27fe0();
    FUN_01f45250();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e5e740();
    (**(code **)(*this_ptr + 0x5a0))();
    param_2 = (int64_t *)*param_2;
    FUN_00d50b00();
    (**(code **)(*param_2 + 0x440))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = this_ptr[2];
    if (lVar1 == 0) {
      (**(code **)(*this_ptr + 0x4c0))();
      lVar1 = this_ptr[2];
    }
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x598))();
    plVar3 = (int64_t *)*arg1;
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x9a8))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

