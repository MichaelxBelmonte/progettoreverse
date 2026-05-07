// Function: FUN_00ce1020
// Address: 00ce1020
// Size: 539 bytes
// Class: GNFilePath

void FUN_00ce1020(uint64_t param_1)

{
  int64_t lVar1;
  short sVar2;
  int iVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*arg1 + 0x368))();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_00ce10d9;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_00ce10d9;
  iVar3 = FUN_00d8c7a0();
  if (1 < iVar3) {
    sVar2 = FUN_00d8cbc0();
    if (((sVar2 == 0x2f) && (FUN_00d97ce0(param_1,iVar3 + -1), local_38 != '\0')) && (local_40 != 0)
       ) {
      FUN_00d50b20();
    }
  }
LAB_00ce10d9:
  if (local_40 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    iVar3 = FUN_00d90c90();
    if (iVar3 == -1) {
      iVar3 = FUN_00d90c90();
      if ((iVar3 == 0) && (iVar3 = FUN_00d8c7a0(), lVar1 = g_02704060, 1 < iVar3)) {
        if (g_02704060 != 0) {
          FUN_00d50b00();
        }
        FUN_00cddf30();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
    }
    else {
      FUN_00d8ee20();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00cddf30();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}

