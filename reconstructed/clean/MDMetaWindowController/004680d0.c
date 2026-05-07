// Function: FUN_004680d0
// Address: 004680d0
// Size: 645 bytes
// Class: MDMetaWindowController

void FUN_004680d0(uint64_t param_1)

{
  int64_t lVar1;
  bool bVar2;
  int iVar3;
  int64_t *this_ptr;
  int64_t local_30;
  char local_28;
  
  FUN_01e53f10();
  FUN_00465c80();
  if (this_ptr[0x14] == 0) {
    return;
  }
  FUN_004b43d0(param_1,0);
  lVar1 = this_ptr[0x14];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  iVar3 = FUN_0033caa0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (iVar3 < 0) {
    FUN_004b43d0(param_1,2);
    lVar1 = this_ptr[0x14];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar3 = FUN_0033caa0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (iVar3 < 0) {
      FUN_004b43d0(param_1,1);
      lVar1 = this_ptr[0x14];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      iVar3 = FUN_0033caa0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (iVar3 < 0) {
        return;
      }
      FUN_004b43d0(param_1,1);
      if (local_30 != 0) {
        bVar2 = true;
        if (local_28 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_0046832d;
      }
    }
    else {
      FUN_004b43d0(param_1,2);
      if (local_30 != 0) {
        bVar2 = true;
        if (local_28 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_0046832d;
      }
    }
  }
  else {
    FUN_004b43d0(param_1,0);
    if (local_30 != 0) {
      bVar2 = true;
      if (local_28 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_0046832d;
    }
  }
  local_30 = 0;
  bVar2 = false;
LAB_0046832d:
  if ((local_30 != 0) && ((**(code **)(*this_ptr + 0x5c0))(), bVar2)) {
    FUN_00d50b20();
  }
  return;
}

