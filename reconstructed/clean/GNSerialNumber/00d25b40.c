// Function: FUN_00d25b40
// Address: 00d25b40
// Size: 606 bytes
// Class: GNSerialNumber
// String references:
//   "%01X"
//   "%06X"
//   "%03X"
//   "%09llX"

void FUN_00d25b40(void)

{
  void*puVar1;
  int64_t arg1;
  void*this_ptr;
  void*puVar2;
  bool bVar3;
  void*local_38;
  uint32_t local_30;
  uint32_t local_2c;
  uint64_t local_28;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_025795a8;
  (*g_025795c0)();
  local_30 = 1;
  local_38 = (void*)&g_025732e0;
  local_2c = CONCAT31(local_2c._1_3_,*(void*)(arg1 + 0xc));
  FUN_00d94d80(&g_025732e0,&local_38);
  local_2c = *(void*)(arg1 + 0x10);
  local_30 = 1;
  local_38 = (void*)&g_02572a48;
  FUN_00d94d80(&g_02572a48,&local_38);
  local_2c = *(void*)(arg1 + 0x14);
  local_30 = 1;
  local_38 = (void*)&g_02572a80;
  FUN_00d94d80(&g_02572a80,&local_38);
  local_28 = *(void*)(arg1 + 0x18);
  local_30 = 1;
  local_38 = (void*)&g_02572ab8;
  FUN_00d94d80(&g_02572ab8,&local_38);
  FUN_00d287a0();
  if (puVar1 == local_38) {
    if (((char)local_30 != '\0') && (local_38 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar1 = local_38;
    if ((char)local_30 == '\0') {
      if (local_38 != (void*)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
  }
  FUN_00d28e50();
  puVar2 = local_38;
  if (local_38 == puVar1) {
    puVar2 = puVar1;
    if (((char)local_30 != '\0') && (local_38 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((char)local_30 == '\0') {
    if (local_38 != (void*)0x0) {
      FUN_00d50b00();
    }
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d292b0();
  puVar1 = local_38;
  if (local_38 == puVar2) {
    if (((char)local_30 != '\0') && (local_38 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((char)local_30 == '\0') {
    if (local_38 != (void*)0x0) {
      FUN_00d50b00();
    }
    bVar3 = puVar2 != (void*)0x0;
    puVar2 = puVar1;
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  else {
    bVar3 = puVar2 != (void*)0x0;
    puVar2 = puVar1;
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

