// Function: FUN_00bbbde0
// Address: 00bbbde0
// Size: 529 bytes
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


uint64_t FUN_00bbbde0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  
  uVar4 = 0xffffffff;
  if ((*arg1 != 0) && (iVar3 = FUN_00d8c7a0(), lVar1 = g_02781718, iVar3 != 0)) {
    if (g_02781718 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_00d90eb0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_02781750;
    uVar4 = 0x43;
    if (cVar2 == '\0') {
      if (g_02781750 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d90eb0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_02781790;
      uVar4 = 0x40;
      if (cVar2 == '\0') {
        if (g_02781790 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_00d90eb0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = g_027817d0;
        uVar4 = 0x41;
        if (cVar2 == '\0') {
          if (g_027817d0 != 0) {
            FUN_00d50b00();
          }
          cVar2 = FUN_00d90eb0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = g_02765478;
          if (cVar2 != '\0') {
            if (g_02765478 != 0) {
              FUN_00d50b00();
            }
            cVar2 = FUN_00d90eb0();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            lVar1 = g_027724f8;
            if (cVar2 != '\0') {
              return 0x42;
            }
            if (g_027724f8 != 0) {
              FUN_00d50b00();
            }
            cVar2 = FUN_00d90eb0();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (cVar2 != '\0') {
              return 0x44;
            }
          }
          uVar4 = 0xffffffff;
        }
      }
    }
  }
  return uVar4;
}

