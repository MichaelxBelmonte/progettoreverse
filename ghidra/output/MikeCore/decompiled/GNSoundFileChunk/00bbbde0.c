// Function: FUN_00bbbde0
// Address: 00bbbde0
// Size: 529 bytes
// Class: GNSoundFileChunk


undefined8 FUN_00bbbde0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *unaff_RSI;
  
  uVar4 = 0xffffffff;
  if ((*unaff_RSI != 0) && (iVar3 = FUN_00d8c7a0(), lVar1 = DAT_02781718, iVar3 != 0)) {
    if (DAT_02781718 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_00d90eb0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02781750;
    uVar4 = 0x43;
    if (cVar2 == '\0') {
      if (DAT_02781750 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d90eb0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02781790;
      uVar4 = 0x40;
      if (cVar2 == '\0') {
        if (DAT_02781790 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_00d90eb0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = DAT_027817d0;
        uVar4 = 0x41;
        if (cVar2 == '\0') {
          if (DAT_027817d0 != 0) {
            FUN_00d50b00();
          }
          cVar2 = FUN_00d90eb0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = DAT_02765478;
          if (cVar2 != '\0') {
            if (DAT_02765478 != 0) {
              FUN_00d50b00();
            }
            cVar2 = FUN_00d90eb0();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            lVar1 = DAT_027724f8;
            if (cVar2 != '\0') {
              return 0x42;
            }
            if (DAT_027724f8 != 0) {
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


