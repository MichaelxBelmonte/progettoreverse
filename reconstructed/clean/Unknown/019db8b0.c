// Function: FUN_019db8b0
// Address: 019db8b0
// Size: 651 bytes
// Class: Unknown

void FUN_019db8b0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  byte bVar6;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x308) == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_01d5b240();
  lVar4 = local_40;
  if (local_40 == 0) {
    bVar6 = 1;
    bVar1 = false;
    lVar4 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar6 = 0;
    bVar1 = true;
  }
  else {
    bVar6 = 0;
    bVar1 = true;
  }
  FUN_01d654a0();
  FUN_01d66ab0();
  FUN_01d5b240();
  lVar5 = local_40;
  if (local_40 == lVar4) {
    if ((bool)(bVar6 & local_40 != 0)) {
      bVar2 = true;
      lVar5 = lVar4;
      if (local_38 != '\0') goto LAB_019dba0a;
      bVar1 = true;
      FUN_00d50b00();
    }
LAB_019db9f6:
    lVar5 = lVar4;
    bVar2 = bVar1;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar3 = (bool)(bVar1 & lVar4 != 0);
    bVar1 = true;
    bVar2 = true;
    if (bVar3) {
      FUN_00d50b20();
      lVar4 = local_40;
      goto LAB_019db9f6;
    }
  }
  else {
    bVar2 = true;
    if ((bool)(bVar1 & lVar4 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_019dba0a:
  FUN_01d654a0();
  FUN_01d66ab0();
  FUN_01d5b240();
  if (local_40 == lVar5) {
    if ((!bVar2) && (local_40 != 0)) {
      bVar1 = true;
      lVar4 = lVar5;
      if (local_38 != '\0') goto LAB_019dbad5;
      bVar2 = true;
      FUN_00d50b00();
    }
  }
  else {
    lVar4 = local_40;
    if (local_38 != '\0') {
      bVar1 = true;
      if ((bVar2) && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019dbad5;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar1 = true;
    if ((!bVar2) || (lVar5 == 0)) goto LAB_019dbad5;
    FUN_00d50b20();
    lVar5 = local_40;
    bVar2 = true;
  }
  lVar4 = lVar5;
  bVar1 = bVar2;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_019dbad5:
  FUN_01d654a0();
  FUN_01d66ab0();
  if ((bVar1) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

