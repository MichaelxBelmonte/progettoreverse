// Function: FUN_00b11950
// Address: 00b11950
// Size: 1378 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNMidiValue"
//   "_startVelocity"
//   "_stopVelocity"
//   "_stopping"
//   "_playing"
//   "GNPolyMidiInstrument"
//   "_stopSampleIndex"
//   "GNInt"
//   "_startSampleIndex"
//   "_noteNumber"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b11950(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_0253fad0;
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00b11710();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b11f40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPolyMidiInstrument");
  }
  *(undefined1 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00b11710();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c230 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c1f8 = FUN_00b11710();
        _DAT_0275c1f0 = "_noteNumber";
        _DAT_0275c200 = 0;
        _DAT_0275c208 = 0x6300;
        _DAT_0275c210 = "GNMidiValue";
        _DAT_0275c218 = 0;
        uRam000000000275c220 = 0;
        _DAT_0275c228 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x99) = 0;
  lVar2 = FUN_00b11710();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c278 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c240 = FUN_00b11710();
        _DAT_0275c238 = "_startVelocity";
        _DAT_0275c248 = 0;
        _DAT_0275c250 = 0x6300;
        _DAT_0275c258 = "GNMidiValue";
        _DAT_0275c260 = 0;
        uRam000000000275c268 = 0;
        _DAT_0275c270 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar2 = FUN_00b11710();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c2c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c288 = FUN_00b11710();
        _DAT_0275c280 = "_startSampleIndex";
        _DAT_0275c290 = 0;
        _DAT_0275c298 = 0x6900;
        _DAT_0275c2a0 = "GNInt";
        _DAT_0275c2a8 = 0;
        uRam000000000275c2b0 = 0;
        _DAT_0275c2b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar2 = FUN_00b11710();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c308 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c2d0 = FUN_00b11710();
        _DAT_0275c2c8 = "_stopSampleIndex";
        _DAT_0275c2d8 = 0;
        _DAT_0275c2e0 = 0x6900;
        _DAT_0275c2e8 = "GNInt";
        _DAT_0275c2f0 = 0;
        uRam000000000275c2f8 = 0;
        _DAT_0275c300 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar2 = FUN_00b11710();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c350 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c318 = FUN_00b11710();
        _DAT_0275c310 = "_stopVelocity";
        _DAT_0275c320 = 0;
        _DAT_0275c328 = 0x6300;
        _DAT_0275c330 = "GNMidiValue";
        _DAT_0275c338 = 0;
        uRam000000000275c340 = 0;
        _DAT_0275c348 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa5) = 0;
  lVar2 = FUN_00b11710();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c398 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c360 = FUN_00b11710();
        _DAT_0275c358 = "_stopping";
        _DAT_0275c368 = 0;
        _DAT_0275c370 = 0x6200;
        _DAT_0275c378 = "bool";
        _DAT_0275c380 = 0;
        uRam000000000275c388 = 0;
        _DAT_0275c390 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa6) = 0;
  lVar2 = FUN_00b11710();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c3e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c3a8 = FUN_00b11710();
        _DAT_0275c3a0 = "_playing";
        _DAT_0275c3b0 = 0;
        _DAT_0275c3b8 = 0x6200;
        _DAT_0275c3c0 = "bool";
        _DAT_0275c3c8 = 0;
        uRam000000000275c3d0 = 0;
        _DAT_0275c3d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x15] = *(undefined8 *)(unaff_RSI + 0xa8);
  return;
}


