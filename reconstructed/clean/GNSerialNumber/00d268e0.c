// Function: FUN_00d268e0
// Address: 00d268e0
// Size: 710 bytes
// Class: GNSerialNumber

bool FUN_00d268e0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *this_ptr;
  int local_64;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  if (*this_ptr == 0) {
    return false;
  }
  iVar4 = FUN_00d8c7a0();
  if (iVar4 != 0x18) {
    return false;
  }
  FUN_00d26d10();
  plVar1 = (int64_t *)*this_ptr;
  if (plVar1 == local_40) {
    if (((char)this_ptr[1] == '\0') && (local_40 != (int64_t *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00d269aa;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = this_ptr[1];
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *this_ptr = (int64_t)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *this_ptr = (int64_t)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00d269aa:
    *(void*)(this_ptr + 1) = 1;
  }
  iVar4 = FUN_00d8c7a0();
  if (iVar4 != 0x14) {
    return false;
  }
  FUN_00d8f140(param_1,0x13);
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00ddb860();
  cVar3 = (**(code **)(*local_40 + 0x430))(param_1,1);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    return false;
  }
  FUN_00d276b0();
  plVar1 = (int64_t *)*this_ptr;
  if (plVar1 == local_40) {
    if (((char)this_ptr[1] != '\0') || (local_40 == (int64_t *)0x0)) {
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto joined_r0x00d26b15;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    lVar2 = this_ptr[1];
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *this_ptr = (int64_t)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
        local_40 = (int64_t *)*this_ptr;
      }
      *(void*)(this_ptr + 1) = 1;
      plVar1 = local_40;
      goto joined_r0x00d26b15;
    }
    *this_ptr = (int64_t)local_40;
    if (((char)lVar2 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 1;
  plVar1 = (int64_t *)*this_ptr;
joined_r0x00d26b15:
  if (plVar1 == (int64_t *)0x0) {
    return false;
  }
  iVar4 = FUN_00d2a2e0();
  return local_64 == iVar4;
}

