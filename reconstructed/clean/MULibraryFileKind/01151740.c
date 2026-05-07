// Function: FUN_01151740
// Address: 01151740
// Size: 617 bytes
// Class: MULibraryFileKind
// String references:
//   "_kind"
//   "MULibraryFileKind"
//   "=MULibraryFileKindDetectionReferences"
//   "=MULibraryFileKindPrelisten"
//   "=MULibraryFileKindUser"
//   "=MULibraryFileKindHiRes"
//   "=MULibraryFileKindEffectChain"
//   "=MULibraryInvalidFileKind"
//   "=MULibraryFileKindProduction"
//   "=MULibraryFileKindSupplemental"
// === MULibraryFileKind properties ===
//   MULibraryFileKind _kind
//                   _lastModifiedCache
//                   _localFilePathCache
//                   _ownerCache


void* FUN_01151740(void)

{
  int iVar1;
  uint uVar2;
  
  if (g_0279fdb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      g_0279fd90 = -(uint)(*g_0279fd40 == '=');
      uVar2 = (uint)(*g_0279fd40 != '=');
      g_0279fd94 = 0;
      if (*g_0279fd48 != '=') {
        g_0279fd94 = uVar2;
      }
      g_0279fd98 = 1;
      if (*g_0279fd50 != '=') {
        g_0279fd98 = g_0279fd94 + 1;
      }
      g_0279fd9c = 2;
      if (*g_0279fd58 != '=') {
        g_0279fd9c = g_0279fd98 + 1;
      }
      g_0279fda0 = 3;
      if (*g_0279fd60 != '=') {
        g_0279fda0 = g_0279fd9c + 1;
      }
      g_0279fda4 = 4;
      if (*g_0279fd68 != '=') {
        g_0279fda4 = g_0279fda0 + 1;
      }
      g_0279fda8 = 5;
      if (*g_0279fd70 != '=') {
        g_0279fda8 = g_0279fda4 + 1;
      }
      g_0279fdac = 6;
      if (*g_0279fd78 != '=') {
        g_0279fdac = g_0279fda8 + 1;
      }
      g_0279fdb0 = g_0279fd94 == uVar2 &&
                     (g_0279fd98 == g_0279fd94 + 1 &&
                     ((g_0279fd9c == g_0279fd98 + 1 &&
                      (g_0279fda0 == g_0279fd9c + 1 &&
                      (g_0279fda4 == g_0279fda0 + 1 && g_0279fda8 == g_0279fda4 + 1)))
                     && g_0279fdac == g_0279fda8 + 1));
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
  return &g_0279fcf8;
}

