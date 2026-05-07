// Function: FUN_01ece4b0
// Address: 01ece4b0
// Size: 886 bytes
// Class: GNTextAutoCompleterItem

void FUN_01ece4b0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint32_t uVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01d836c0();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  uVar4 = FUN_01e15b70();
  (**(code **)(*this_ptr + 0x520))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e1aa30(uVar4,1);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e10550();
  FUN_00d8e3d0();
  plVar2 = local_40;
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
  FUN_00d95590();
  local_70 = local_50;
  local_68 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  FUN_00d97d10(2,&local_70);
  plVar5 = local_40;
  plVar3 = plVar2;
  if (plVar2 != local_40) {
    if (local_38 != '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      goto LAB_01ece6a9;
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar3 = plVar5;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar5 = plVar3;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ece6a9:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x370))();
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  (**(code **)(*this_ptr + 0x488))();
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8c7a0();
  FUN_00d8f140();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e15f00();
  FUN_00d8c7a0();
  FUN_01e148d0(uVar4);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

