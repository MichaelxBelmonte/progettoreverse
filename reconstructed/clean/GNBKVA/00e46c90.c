// Function: FUN_00e46c90
// Address: 00e46c90
// Size: 1186 bytes
// Class: GNBKVA

void FUN_00e46c90(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  lVar1 = *arg1;
  lVar4 = *(int64_t *)(this_ptr + 0x38);
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x38) = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d4efa0();
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  lVar4 = lVar1;
  if (lVar1 != local_48) {
    lVar4 = local_48;
    if (local_40 == '\0') {
      if (local_48 == 0) {
        lVar4 = 0;
        goto LAB_00e46cfc;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x40);
      *(int64_t *)(this_ptr + 0x40) = local_48;
    }
    else {
      local_40 = '\0';
LAB_00e46cfc:
      *(int64_t *)(this_ptr + 0x40) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_48;
    }
  }
  if ((local_40 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    do {
      cVar2 = FUN_00e3a1c0();
      if (cVar2 == '\0') break;
      FUN_00c80a40();
    } while (lVar1 != 0);
    local_40 = '\0';
    lVar4 = *(int64_t *)(this_ptr + 0x40);
    local_48 = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
  }
  FUN_00e47ad0();
  *(int64_t *)(this_ptr + 0x48) = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x48) == 0) {
    plVar3 = (int64_t *)FUN_00e4c0a0();
    (**(code **)(*plVar3 + 0x18))();
    lVar1 = *(int64_t *)(this_ptr + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00e47b80();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    *(int64_t **)(this_ptr + 0x48) = plVar3;
    FUN_00d50b20();
  }
  plVar3 = *(int64_t **)(this_ptr + 200);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
    cVar2 = (**(code **)(*plVar3 + 0x18))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_00e47094;
  }
  cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x1e8))();
  plVar3 = (int64_t *)*arg1;
  if (cVar2 == '\0') {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x120))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x250))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
LAB_00e47094:
  plVar3 = *(int64_t **)(this_ptr + 200);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x20))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

