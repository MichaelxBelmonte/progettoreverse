// Function: FUN_00bc1590
// Address: 00bc1590
// Size: 775 bytes
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


void FUN_00bc1590(void)

{
  int64_t lVar1;
  int iVar2;
  void*puVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_e0;
  char local_d8;
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
  uint8_t local_6c [4];
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  uint8_t local_24 [4];
  
  lVar1 = g_02765700;
  if (*arg1 == 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    FUN_00cc78b0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_02764880;
  if (*(int *)(*arg1 + 0x18) != 0x54) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar1;
    local_50 = '\x01';
    FUN_00cc78b0();
    if ((local_50 != '\0') && (local_58 != 0)) {
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
  local_48 = *arg1;
  local_40 = '\0';
  FUN_00cccfe0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  FUN_00ccd540(local_24,local_6c);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd540(local_24,&local_34);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_2e);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_2c);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_2a);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_28);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_26);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x18) = local_34;
  *(int *)(this_ptr + 0x10) = (int)local_2a;
  *(int *)(this_ptr + 0x14) = (int)local_28;
  if (local_26 == 2) {
    if (*(char *)(this_ptr + 0xc) == '\0') {
      *(void*)(this_ptr + 0x18) = 0;
    }
  }
  else {
    *(void*)(this_ptr + 0xc) = 1;
  }
  iVar2 = (int)local_2c;
  switch(iVar2) {
  case 1:
    break;
  case 2:
    iVar2 = 2;
    break;
  default:
    *(void*)(this_ptr + 0x20) = 0;
    goto LAB_00bc181f;
  case 4:
    *(void*)(this_ptr + 0x20) = 3;
    if (local_2e == 0) goto LAB_00bc181f;
    goto LAB_00bc187a;
  }
  *(int *)(this_ptr + 0x20) = iVar2;
  if (local_2e == 0) {
LAB_00bc181f:
    iVar2 = 0;
  }
  else {
LAB_00bc187a:
    iVar2 = local_2e + -0x30;
  }
  *(int *)(this_ptr + 0x1c) = iVar2;
  FUN_00d50b20();
  return;
}

