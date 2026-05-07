// Function: FUN_00d276b0
// Address: 00d276b0
// Size: 832 bytes
// Class: GNSerialNumber
// String references:
//   "0123456789012345678"

void* FUN_00d276b0(void)

{
  char cVar1;
  void*puVar2;
  void*puVar3;
  int iVar4;
  void*this_ptr;
  int64_t lVar5;
  int64_t *local_50;
  char local_48;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02578b00;
  (*g_02578b18)();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  iVar4 = 0;
  do {
    FUN_00d46530();
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d7a410();
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x13);
  FUN_00d8f140();
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00ddb860();
  cVar1 = (**(code **)(*local_50 + 0x430))();
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d94d80();
    FUN_00d2a650();
    if (local_50 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      FUN_00d50b00();
      lVar5 = 0;
      do {
        FUN_00d45870();
        FUN_00e7b4e0();
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d8e100();
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x13);
      *this_ptr = puVar3;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      if (local_50 != (int64_t *)0x0) goto LAB_00d279ef;
    }
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_00d279ef:
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

