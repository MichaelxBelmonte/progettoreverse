// Function: FUN_00d28e50
// Address: 00d28e50
// Size: 673 bytes
// Class: GNSerialNumber
// String references:
//   "%01X"

void* FUN_00d28e50(void)

{
  void*puVar1;
  void*puVar2;
  int iVar3;
  void*this_ptr;
  int64_t lVar4;
  int64_t local_70;
  char local_68;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02578b00;
  (*g_02578b18)();
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025795a8;
  (*g_025795c0)();
  iVar3 = 0;
  do {
    FUN_00d46530();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00d7a410();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x13);
  FUN_00d2a2e0();
  FUN_00d2a650();
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  lVar4 = 0;
  do {
    FUN_00d45870();
    FUN_00e7b4e0();
    FUN_00d8e3d0();
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x13);
  FUN_00d94d80();
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

