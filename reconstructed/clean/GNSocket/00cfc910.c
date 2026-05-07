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
// === GNSocket properties ===
//   GNStringEncoding _stringEncoding


void* FUN_00cfc910(void)

{
  int iVar1;
  uint uVar2;
  
  if (g_027794a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      g_02779480 = -(uint)(*g_02779430 == '=');
      uVar2 = (uint)(*g_02779430 != '=');
      g_02779484 = 0;
      if (*g_02779438 != '=') {
        g_02779484 = uVar2;
      }
      g_02779488 = 1;
      if (*g_02779440 != '=') {
        g_02779488 = g_02779484 + 1;
      }
      g_0277948c = 2;
      if (*g_02779448 != '=') {
        g_0277948c = g_02779488 + 1;
      }
      g_02779490 = 3;
      if (*g_02779450 != '=') {
        g_02779490 = g_0277948c + 1;
      }
      g_02779494 = 4;
      if (*g_02779458 != '=') {
        g_02779494 = g_02779490 + 1;
      }
      g_02779498 = 5;
      if (*g_02779460 != '=') {
        g_02779498 = g_02779494 + 1;
      }
      g_0277949c = 6;
      if (*g_02779468 != '=') {
        g_0277949c = g_02779498 + 1;
      }
      g_027794a0 = 7;
      if (*g_02779470 != '=') {
        g_027794a0 = g_0277949c + 1;
      }
      g_027794a4 = g_02779484 == uVar2 &&
                     ((g_02779488 == g_02779484 + 1 && g_0277948c == g_02779488 + 1) &&
                     ((g_02779490 == g_0277948c + 1 &&
                      (g_02779494 == g_02779490 + 1 &&
                      (g_02779498 == g_02779494 + 1 && g_0277949c == g_02779498 + 1)))
                     && g_027794a0 == g_0277949c + 1));
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027793e8 = "_stringEncoding";
      g_027793f0 = &g_02779318;
      g_027793f8 = 0;
      g_02779400 = 0x6500;
      g_02779408 = "GNStringEncoding";
      g_02779410 = &g_027794b0;
      g_02779418 = 0;
      ram_0000000002779420 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027793e8;
}

