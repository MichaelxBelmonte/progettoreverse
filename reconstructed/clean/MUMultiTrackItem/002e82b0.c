// Function: FUN_002e82b0
// Address: 002e82b0
// Size: 675 bytes
// Class: MUMultiTrackItem

void FUN_002e82b0(void)

{
  bool bVar1;
  int64_t *this_ptr;
  int64_t lVar2;
  byte bVar3;
  bool bVar4;
  int64_t *local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x980))();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*local_58 + 0x7b0))();
  lVar2 = local_40;
  if (local_40 == 0) {
    bVar3 = 1;
    bVar1 = false;
    lVar2 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar3 = 0;
    bVar1 = true;
  }
  else {
    local_38 = '\0';
    bVar1 = true;
    bVar3 = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cf3e00();
  FUN_01cf3f20();
  FUN_01be8270();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_01be8270();
    FUN_01bcb030();
    if (local_40 == lVar2) {
      if ((bool)(bVar3 & local_40 != 0)) {
        if (local_38 != '\0') goto LAB_002e8444;
        bVar1 = true;
        FUN_00d50b00();
      }
LAB_002e84a0:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar4 = (bool)(bVar1 & lVar2 != 0);
        bVar1 = true;
        lVar2 = local_40;
        if (bVar4) {
          FUN_00d50b20();
        }
        goto LAB_002e84a0;
      }
      bVar4 = lVar2 != 0;
      lVar2 = local_40;
      if ((bool)(bVar1 & bVar4)) {
        FUN_00d50b20();
      }
LAB_002e8444:
      bVar1 = true;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 == 0) goto LAB_002e8524;
    FUN_01cf3e00();
    FUN_01cf3f20();
  }
  if ((bVar1) && (lVar2 != 0)) {
    FUN_00d50b20();
  }
LAB_002e8524:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}

