// Function: FUN_011337c0
// Address: 011337c0
// Size: 1743 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNSoundFile"
//   "SInt64"
//   "GNCondition"
//   "GNAudioDevice"
//   "MURenderer"
//   "MUAudioRingBuffer"
//   "GNAudioMeterProcessor"
//   "GNThread"
//   "_enquededRenderersPending"
//   "_deviceSampleIndex"
//   "_requestedDeviceSampleIndex"
//   "GNSoundFilePreloadRange"
//   "_isStoppingRenderThread"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011337c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_025d0f20;
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134120();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  FUN_01134210();
  FUN_011342f0();
  *(undefined1 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02799c60 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02799c28 = FUN_01133610();
        _DAT_02799c20 = "_enquededRenderersPending";
        _DAT_02799c30 = 0;
        _DAT_02799c38 = 0x6200;
        _DAT_02799c40 = "bool";
        _DAT_02799c48 = 0;
        uRam0000000002799c50 = 0;
        _DAT_02799c58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02799ca8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02799c70 = FUN_01133610();
        _DAT_02799c68 = "_deviceSampleIndex";
        _DAT_02799c78 = 0;
        _DAT_02799c80 = 0x6c00;
        _DAT_02799c88 = "SInt64";
        _DAT_02799c90 = 0;
        uRam0000000002799c98 = 0;
        _DAT_02799ca0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02799cf0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02799cb8 = FUN_01133610();
        _DAT_02799cb0 = "_requestedDeviceSampleIndex";
        _DAT_02799cc0 = 0;
        _DAT_02799cc8 = 0x6c00;
        _DAT_02799cd0 = "SInt64";
        _DAT_02799cd8 = 0;
        uRam0000000002799ce0 = 0;
        _DAT_02799ce8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011343d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAudioDevice");
  }
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011344c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAudioMeterProcessor");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011345b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAudioMeterProcessor");
  }
  unaff_RDI[0x1b] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011346a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioRingBuffer");
  }
  unaff_RDI[0x1c] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134790();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioRingBuffer");
  }
  unaff_RDI[0x1d] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134880();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSoundFile");
  }
  puVar4 = unaff_RDI + 0x1e;
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134970();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSoundFilePreloadRange");
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134a60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNThread",param_3,param_4,puVar4);
  }
  *(undefined1 *)(unaff_RDI + 0x20) = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02799f78 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02799f40 = FUN_01133610();
        _DAT_02799f38 = "_isStoppingRenderThread";
        _DAT_02799f48 = 0;
        _DAT_02799f50 = 0x6200;
        _DAT_02799f58 = "bool";
        _DAT_02799f60 = 0;
        uRam0000000002799f68 = 0;
        _DAT_02799f70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x21] = 0;
  lVar2 = FUN_01133610();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01134b50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCondition");
  }
  return;
}


