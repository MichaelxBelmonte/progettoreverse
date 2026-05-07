// Function: FUN_0063f660
// Address: 0063f660
// Size: 1319 bytes
// Class: MDURLOpenedController

void FUN_0063f660(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char *pcVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  bool bVar8;
  int64_t local_c8;
  char local_c0;
  int64_t local_a8;
  char local_a0;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [15];
  char local_31;
  
  (**(code **)(*this_ptr + 0x5d8))();
  FUN_006f3f00();
  plVar2 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5e8))();
  plVar3 = local_48;
  if (((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  plVar7 = (int64_t *)*arg1;
  local_31 = (char)arg1[1];
  if ((local_31 == '\0') || (plVar7 == (int64_t *)0x0)) {
    if (plVar7 == (int64_t *)0x0) {
      FUN_00756eb0();
      plVar4 = local_48;
      if (local_48 != (int64_t *)0x0) {
        if (local_40[0] != '\0') {
          local_31 = '\x01';
          plVar7 = local_48;
          goto LAB_0063f731;
        }
        FUN_00d50b00();
        local_31 = '\x01';
        plVar7 = plVar4;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    local_31 = '\x01';
  }
LAB_0063f731:
  FUN_00d23310();
  plVar4 = local_48;
  pcVar6 = local_40;
  if (local_40[0] == '\0') {
    pcVar6 = &local_58;
  }
  local_58 = local_40[0];
  *pcVar6 = '\0';
  if ((local_40[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 == '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x5d8))();
  plVar5 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_00221970();
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00226060();
  FUN_00642e80();
  plVar5 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_0063ffb0();
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5d8))();
  if (local_48 == (int64_t *)0x0) {
    bVar8 = false;
  }
  else if (this_ptr[0x16] == 0) {
    bVar8 = false;
  }
  else {
    FUN_01e54250();
    bVar8 = CONCAT71(uStack_57,local_58) != 0;
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    FUN_0021a630();
    plVar5 = local_48;
    (**(code **)(*this_ptr + 0x5d8))();
    FUN_006fc300();
    if (local_a0 == '\0') {
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    FUN_0078c610();
    lVar1 = CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    (**(code **)(*plVar5 + 0xde8))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

