// Function: FUN_01892450
// Address: 01892450
// Size: 760 bytes
// Class: GNString
// String references:
//   "%@: "
//   "%@"
//   " (%@)"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01892450(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  void *pvVar4;
  void* pVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t local_80;
  char local_78;
  void*local_50;
  char local_48;
  
  puVar2 = local_50;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x25795a8;
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  if (*(int64_t *)(arg1 + 0x78) == 0) {
    FUN_01893ad0();
    if (local_48 == '\0') {
      if (local_50 == (void*)0x0) goto LAB_01892695;
      FUN_00d50b00();
    }
    else if (local_50 == (void*)0x0) goto LAB_01892695;
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &g_024c5048;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01910920();
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_01893ad0();
    FUN_00d50b00();
    FUN_00d94d80();
    FUN_00d50b20();
    FUN_00d50b20();
    lVar1 = g_027d3890;
    local_48 = '\x01';
    local_50 = &g_024c5048;
    if (g_027d3890 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01892695:
  FUN_01892140();
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (void*)0x0) {
    FUN_01892140();
    if ((local_48 == '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_50 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

