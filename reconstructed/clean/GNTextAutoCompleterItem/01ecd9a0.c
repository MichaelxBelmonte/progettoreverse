// Function: FUN_01ecd9a0
// Address: 01ecd9a0
// Size: 895 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ecd9a0(uint64_t param_1,int64_t *param_2)

{
  uint32_t uVar1;
  void*puVar2;
  uint64_t uVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  uVar1 = FUN_01e15b70();
  (**(code **)(*arg1 + 0x520))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar3 = FUN_01e1aa30(uVar1,1);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (((int)uVar3 == -1) || ((int)((uint64_t)uVar3 >> 0x20) < 1)) {
    lVar4 = 0;
    goto LAB_01ecdc01;
  }
  FUN_01e10550();
  FUN_00d8e3d0();
  lVar5 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d95590();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d97f20();
  if (local_40 == lVar5) {
LAB_01ecdb9d:
    lVar4 = lVar5;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
        lVar5 = local_40;
        goto LAB_01ecdb9d;
      }
    }
    else if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d21140();
LAB_01ecdc01:
  lVar5 = *param_2;
  FUN_00d21140();
  if (*(int *)((int64_t)puVar2 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d8ede0();
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_00d95130();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

