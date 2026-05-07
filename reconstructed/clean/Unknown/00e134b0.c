// Function: FUN_00e134b0
// Address: 00e134b0
// Size: 566 bytes
// Class: Unknown

void FUN_00e134b0(void)

{
  int64_t *plVar1;
  bool bVar2;
  uint16_t uVar3;
  int64_t this_ptr;
  int64_t *plVar4;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00dcaef0();
  if (local_40 == (int64_t *)0x0) {
    plVar4 = (int64_t *)0x0;
    bVar2 = false;
  }
  else {
    bVar2 = true;
    plVar4 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  (**(code **)(*plVar4 + 0x3c8))();
  FUN_00dbb440();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00dd0c80();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00dbb440();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00dd0c80();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar3 = FUN_00dbb5a0();
    (**(code **)(*plVar4 + 0x428))(*plVar4,uVar3);
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x18);
    if (plVar1 != plVar4) {
      FUN_00d50b00();
      *(int64_t **)(this_ptr + 0x18) = plVar4;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if ((bVar2) && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

