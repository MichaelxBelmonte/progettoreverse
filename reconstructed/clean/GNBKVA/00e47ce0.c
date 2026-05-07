// Function: FUN_00e47ce0
// Address: 00e47ce0
// Size: 794 bytes
// Class: GNBKVA

void FUN_00e47ce0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
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
  if (lVar1 != local_38) {
    lVar4 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        goto LAB_00e47d47;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x40);
      *(int64_t *)(this_ptr + 0x40) = local_38;
    }
    else {
      local_30 = '\0';
LAB_00e47d47:
      *(int64_t *)(this_ptr + 0x40) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00e47ad0();
  *(int64_t *)(this_ptr + 0x48) = local_38;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d797a0();
  FUN_00e5d8a0();
  FUN_00dac5e0();
  ___bzero();
  FUN_00dac5e0();
  plVar2 = *(int64_t **)(this_ptr + 200);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    cVar3 = (**(code **)(*plVar2 + 0x18))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_00e47f73;
  }
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x1e8))();
  plVar2 = (int64_t *)*arg1;
  if (cVar3 == '\0') {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x120))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x250))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
LAB_00e47f73:
  plVar2 = *(int64_t **)(this_ptr + 200);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x20))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

