// Function: FUN_0033b5b0
// Address: 0033b5b0
// Size: 580 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_0033b5b0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint32_t uVar4;
  int64_t this_ptr;
  int64_t **pplVar5;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar4 = FUN_01caea40();
  *(int *)(this_ptr + 0x19c) = *(int *)(this_ptr + 0x19c) + -1;
  if (*(int *)(this_ptr + 0x198) == -1) {
    *(void*)(this_ptr + 0x198) = uVar4;
  }
  FUN_01caeb00();
  FUN_01e4ec80();
  local_78 = g_02702930;
  if (g_02702930 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  pplVar5 = &local_48;
  FUN_000175c0(param_1,&local_78);
  plVar1 = local_48;
  FUN_000f5df0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0033b66d;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_0033b66d:
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_01e4ec80();
    FUN_00d46300();
    local_58 = local_38;
    local_50 = 0;
    plVar2 = g_02702960;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        plVar2 = g_02702960;
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    g_02702960 = plVar2;
    if (plVar2 != (int64_t *)0x0) {
      local_50 = '\x01';
      FUN_00d50b00();
    }
    local_40 = '\0';
    local_48 = plVar2;
    FUN_00ca0840(param_1,&local_48);
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0033a220();
  FUN_003372c0();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}

