// Function: FUN_01d46020
// Address: 01d46020
// Size: 505 bytes
// Class: Unknown

void FUN_01d46020(uint64_t param_1)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar4;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cb4790();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d46079;
    }
LAB_01d46137:
    bVar1 = true;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_01d46137;
LAB_01d46079:
    local_50 = *arg1;
    local_48 = '\0';
    (**(code **)(*plVar4 + 0x388))(param_1,&local_50);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_01d46330();
      plVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar2) goto LAB_01d46106;
      FUN_01d465b0();
      plVar4 = plVar3;
LAB_01d461d4:
      *this_ptr = plVar4;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_01d461f4;
    }
LAB_01d46106:
    (**(code **)(*plVar4 + 0x370))();
    plVar4 = local_40;
    if (plVar3 == local_40) {
LAB_01d46191:
      plVar4 = plVar3;
      if (local_38 != '\0') {
LAB_01d46197:
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar3 = plVar4;
          goto LAB_01d46191;
        }
        if (local_38 == '\0') goto LAB_01d461aa;
        goto LAB_01d46197;
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_01d461aa:
    if (plVar4 != (int64_t *)0x0) {
      FUN_01d46330();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != plVar4) goto LAB_01d461d4;
      FUN_00d50b20();
    }
    bVar1 = false;
  }
  FUN_01d46330();
  if (bVar1) {
    return;
  }
LAB_01d461f4:
  FUN_00d50b20();
  return;
}

