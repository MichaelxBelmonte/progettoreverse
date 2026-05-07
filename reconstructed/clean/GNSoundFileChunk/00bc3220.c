// Function: FUN_00bc3220
// Address: 00bc3220
// Size: 687 bytes
// Class: GNSoundFileChunk
// === GNSoundFileChunk properties ===
//                   _isLoop
//                   _beats
//                   _tonalKey
//                   _tonalGender
//                   _readBuffer
//                   _channelCount
//                   _bitsPerSample
//                   _isFloat
//                   _isLittleEndian


void FUN_00bc3220(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  short local_2a;
  uint8_t local_28 [7];
  char local_21;
  
  lVar1 = g_02765700;
  if (*arg1 == 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_02764880;
  if (*(int *)(*arg1 + 0x18) < 8) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_0256d868;
  puVar2[2] = 0;
  *(void*)((int64_t)puVar2 + 0x1c) = 0;
  *(void*)((int64_t)puVar2 + 0x24) = 0;
  *(void*)((int64_t)puVar2 + 0x2c) = 0;
  (*g_0256d880)();
  FUN_00cccfe0();
  FUN_00ccce80();
  FUN_00ccd300(local_28,&local_21);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0xc) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x10) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x14) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x18) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x1c) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x20) = (int)local_21;
  FUN_00ccd330(local_28,&local_2a);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x24) = (int)local_2a;
  FUN_00d50b20();
  return;
}

