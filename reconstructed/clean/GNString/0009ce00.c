// Function: FUN_0009ce00
// Address: 0009ce00
// Size: 1174 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0009ce00(uint8_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  void*puVar6;
  char *pcVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_d0;
  uint8_t local_c8;
  int64_t local_a8;
  char local_a0;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_d0 = *arg1;
  local_c8 = 0;
  FUN_0009cc20(param_1,&local_d0);
  pcVar7 = local_38;
  if (local_40[0] != '\0') {
    pcVar7 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00017670();
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    plVar3 = *(int64_t **)(this_ptr + 0x88);
  }
  else {
    local_40[0] = '\0';
    plVar3 = *(int64_t **)(this_ptr + 0x88);
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0x4a0))();
  cVar5 = FUN_006c60a0();
  if (cVar5 == '\0') {
    iVar1 = *(int *)(*(int64_t *)(this_ptr + 0xd0) + 0xc);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (iVar1 != 0) goto LAB_0009d271;
  }
  else {
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar3 = *(int64_t **)(this_ptr + 0x88);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00017670();
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  (**(code **)(*plVar3 + 0x450))();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar2 = *arg1;
  local_40[0] = '\0';
  FUN_00d21140();
  if ((local_40[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  FUN_01efd970();
  local_40[0] = '\0';
  FUN_00d21140();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d45870();
  FUN_00017760();
  if (*(int64_t *)(this_ptr + 0x90) == 0) {
LAB_0009d157:
    puVar6 = (void*)(this_ptr + 0x88);
  }
  else {
    FUN_01e40eb0();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) goto LAB_0009d157;
    puVar6 = (void*)(this_ptr + 0x90);
  }
  (**(code **)(*(int64_t *)*puVar6 + 0xa10))();
  lVar2 = *(int64_t *)(this_ptr + 0xd0);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_0009d720();
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    lVar4 = *(int64_t *)(this_ptr + 0xb8);
  }
  else {
    local_40[0] = '\0';
    lVar4 = *(int64_t *)(this_ptr + 0xb8);
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_0009d670();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_0009d271:
  if ((local_38[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}

