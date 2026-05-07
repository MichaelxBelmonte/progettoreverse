// Function: FUN_00cdf530
// Address: 00cdf530
// Size: 666 bytes
// Class: GNFilePath

void FUN_00cdf530(void)

{
  int64_t lVar1;
  int64_t lVar2;
  short sVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar6;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  lVar1 = *arg1;
  lVar5 = this_ptr[2];
  lVar2 = lVar5;
  if (lVar5 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[2] = lVar1;
    lVar2 = lVar1;
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar2 = this_ptr[2];
    }
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_00d8ed10();
  if (local_30 == 0) {
    bVar6 = false;
  }
  else {
    FUN_00d8ed10();
    iVar4 = FUN_00d8c7a0();
    bVar6 = iVar4 != 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (bVar6) {
    FUN_00d8ed10();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00df0630();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_00df1b70();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      (**(code **)(*this_ptr + 0x4a0))();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (this_ptr[2] == 0) {
    return;
  }
  iVar4 = FUN_00d8c7a0();
  if (iVar4 < 2) {
    return;
  }
  sVar3 = FUN_00d8cbc0();
  if (sVar3 != 0x2f) {
    return;
  }
  FUN_00d97ce0();
  lVar1 = this_ptr[2];
  lVar5 = lVar1;
  if (lVar1 == local_30) goto LAB_00cdf7ab;
  lVar5 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar5 = 0;
      goto LAB_00cdf76d;
    }
    FUN_00d50b00();
    lVar1 = this_ptr[2];
    this_ptr[2] = local_30;
  }
  else {
    local_28 = '\0';
LAB_00cdf76d:
    this_ptr[2] = lVar5;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar5 = local_30;
  }
LAB_00cdf7ab:
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}

