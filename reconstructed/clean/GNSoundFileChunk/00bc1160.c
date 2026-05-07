// Function: FUN_00bc1160
// Address: 00bc1160
// Size: 792 bytes
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


void FUN_00bc1160(void)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  byte bVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint8_t local_78 [4];
  uint8_t local_74 [4];
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  uint8_t local_3e [2];
  uint local_3c;
  uint32_t local_38;
  short local_32;
  short local_30;
  short local_2e;
  uint8_t local_2c [4];
  
  lVar2 = g_02765700;
  if (*arg1 == 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    FUN_00cc78b0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_02764880;
  if (*(int *)(*arg1 + 0x18) != 0x18) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_00cc78b0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_0256d868;
  puVar3[2] = 0;
  *(void*)((int64_t)puVar3 + 0x1c) = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  (*g_0256d880)();
  local_50 = *arg1;
  local_48 = '\0';
  FUN_00cccfe0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  FUN_00ccd540(local_2c,&local_3c);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,&local_32);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,local_3e);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd7e0(local_2c,local_78);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd540(local_2c,&local_38);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,&local_2e);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,&local_30);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd7e0(local_2c,local_74);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x18) = local_38;
  *(int *)(this_ptr + 0x10) = (int)local_30;
  *(int *)(this_ptr + 0x14) = (int)local_2e;
  bVar4 = local_32 != 0 & (byte)local_3c >> 1;
  *(uint *)(this_ptr + 0x20) = (uint)bVar4 + (uint)bVar4 * 2;
  if ((local_3c & 1) == 0) {
    *(void*)(this_ptr + 0xc) = 1;
  }
  else {
    *(void*)(this_ptr + 0x18) = 0;
  }
  iVar1 = local_32 + -0x30;
  if (local_32 == 0) {
    iVar1 = 0;
  }
  if (bVar4 == 0) {
    iVar1 = 0;
  }
  *(int *)(this_ptr + 0x1c) = iVar1;
  FUN_00d50b20();
  return;
}

