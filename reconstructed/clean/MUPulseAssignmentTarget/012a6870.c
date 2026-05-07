// Function: FUN_012a6870
// Address: 012a6870
// Size: 528 bytes
// Class: MUPulseAssignmentTarget

void FUN_012a6870(void)

{
  void*puVar1;
  uint64_t uVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t local_30;
  char local_28;
  
  FUN_012dd890();
  FUN_00d21370();
  FUN_00d4efa0();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025f0d98;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  (*g_025f0db0)();
  puVar1 = *(void**)(this_ptr + 0x128);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x128) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_015bf690();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025bec28;
  FUN_00d500e0();
  puVar1 = *(void**)(this_ptr + 0x100);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x100) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025bec28;
  FUN_00d500e0();
  puVar1 = *(void**)(this_ptr + 0x108);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x108) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025befa0;
  FUN_00d500e0();
  puVar1 = *(void**)(this_ptr + 0x110);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x110) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025befa0;
  FUN_00d500e0();
  puVar1 = *(void**)(this_ptr + 0x118);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x118) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x2a3) = 0;
  uVar2 = g_02411990;
  *(void*)(this_ptr + 0x2a8) = 0;
  *(void*)(this_ptr + 0x2b0) = uVar2;
  *(void*)(this_ptr + 0x26c) = 0x7fc00000;
  return;
}

