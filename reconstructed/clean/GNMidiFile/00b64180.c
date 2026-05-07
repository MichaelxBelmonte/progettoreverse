// Function: FUN_00b64180
// Address: 00b64180
// Size: 967 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void* FUN_00b64180(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  void*this_ptr;
  int iVar4;
  int64_t local_c0;
  char local_b8;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(*arg1 + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x30);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65690();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x20);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x48);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        FUN_00b64970();
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
        }
        FUN_00b5da10();
        if (local_c0 != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_00b66ae0();
  }
  lVar2 = *(int64_t *)(*arg1 + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_00b65770();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

