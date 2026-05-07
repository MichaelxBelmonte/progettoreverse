// Function: FUN_00cfc910
// Address: 00cfc910
// Size: 866 bytes
// Class: GNSocket
// String references:
//   "GNSocket"
//   "GNStringEncoding"
//   "_stringEncoding"
//   "=GNStringEncodingUndefined"
//   "=GNStringEncodingMacRoman"
//   "=GNStringEncodingWindowsLatin1"
//   "=GNStringEncodingISOLatin1"
//   "=GNStringEncodingNextStepLatin"
//   "=GNStringEncodingASCII"
//   "=GNStringEncodingUnicode"
//   "=GNStringEncodingUTF8"
//   "=GNStringURLEncoding"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00cfc910(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_027794a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02779480 = -(uint)(*DAT_02779430 == '=');
      uVar2 = (uint)(*DAT_02779430 != '=');
      _DAT_02779484 = 0;
      if (*DAT_02779438 != '=') {
        _DAT_02779484 = uVar2;
      }
      _DAT_02779488 = 1;
      if (*DAT_02779440 != '=') {
        _DAT_02779488 = _DAT_02779484 + 1;
      }
      _DAT_0277948c = 2;
      if (*DAT_02779448 != '=') {
        _DAT_0277948c = _DAT_02779488 + 1;
      }
      _DAT_02779490 = 3;
      if (*DAT_02779450 != '=') {
        _DAT_02779490 = _DAT_0277948c + 1;
      }
      _DAT_02779494 = 4;
      if (*DAT_02779458 != '=') {
        _DAT_02779494 = _DAT_02779490 + 1;
      }
      _DAT_02779498 = 5;
      if (*DAT_02779460 != '=') {
        _DAT_02779498 = _DAT_02779494 + 1;
      }
      _DAT_0277949c = 6;
      if (*DAT_02779468 != '=') {
        _DAT_0277949c = _DAT_02779498 + 1;
      }
      _DAT_027794a0 = 7;
      if (*DAT_02779470 != '=') {
        _DAT_027794a0 = _DAT_0277949c + 1;
      }
      DAT_027794a4 = _DAT_02779484 == uVar2 &&
                     ((_DAT_02779488 == _DAT_02779484 + 1 && _DAT_0277948c == _DAT_02779488 + 1) &&
                     ((_DAT_02779490 == _DAT_0277948c + 1 &&
                      (_DAT_02779494 == _DAT_02779490 + 1 &&
                      (_DAT_02779498 == _DAT_02779494 + 1 && _DAT_0277949c == _DAT_02779498 + 1)))
                     && _DAT_027794a0 == _DAT_0277949c + 1));
      ___cxa_guard_release();
    }
  }
  if (DAT_027794e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027794b0 = "GNStringEncoding";
      _DAT_027794b8 = 9;
      DAT_027794bc = DAT_027794a4;
      _DAT_027794c0 = &DAT_02779480;
      _DAT_027794c8 = &DAT_02779430;
      _DAT_027794d0 = 0;
      uRam00000000027794d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_02779428 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027793e0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02779330 = FUN_00d4fe50();
          _DAT_02779318 = "GNSocket";
          _DAT_02779320 = 0x18;
          _DAT_02779328 = FUN_00cfc2e0;
          _DAT_02779338 = 0;
          uRam0000000002779340 = 0;
          _DAT_02779348 = 0;
          _DAT_027793c0 = 0;
          uRam00000000027793c8 = 0;
          _DAT_027793d0 = 0;
          DAT_027793d2 = 1;
          _DAT_02779350 = 0;
          uRam0000000002779358 = 0;
          _DAT_02779360 = 0;
          uRam0000000002779368 = 0;
          _DAT_02779370 = 0;
          uRam0000000002779378 = 0;
          _DAT_02779380 = 0;
          uRam0000000002779388 = 0;
          _DAT_02779390 = 0;
          uRam0000000002779398 = 0;
          _DAT_027793a0 = 0;
          uRam00000000027793a8 = 0;
          _DAT_027793b0 = 0;
          uRam00000000027793b8 = 0;
          DAT_027793db = 0;
          _DAT_027793d3 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027793e8 = "_stringEncoding";
      _DAT_027793f0 = &DAT_02779318;
      _DAT_027793f8 = 0;
      _DAT_02779400 = 0x6500;
      _DAT_02779408 = "GNStringEncoding";
      _DAT_02779410 = &DAT_027794b0;
      _DAT_02779418 = 0;
      uRam0000000002779420 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027793e8;
}


