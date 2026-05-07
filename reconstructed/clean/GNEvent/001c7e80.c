// Function: FUN_001c7e80
// Address: 001c7e80
// Size: 660 bytes
// Class: GNEvent
// String references:
//   "_type"
//   "GNEvent"
//   "GNEventType"
//   "=GNTextInputEvent"
//   "=GNMagnifyEvent"
//   "=GNRotateEvent"
// === GNEvent properties ===
//   GNEventType     _type
//   GNMouseWheelAxis _mouseWheelAxis
//   GNMouseButton   _mouseButton


void* FUN_001c7e80(void)

{
  int iVar1;
  bool bVar2;
  
  if (g_026ec518 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      g_026ec4e0 = g_0238fcc0;
      ram_00000000026ec4e8 = _UNK_0238fcc8;
      g_026ec4f0 = g_0238ff10;
      ram_00000000026ec4f4 = _UNK_0238ff14;
      ram_00000000026ec4f8 = _UNK_0238ff18;
      ram_00000000026ec4fc = _UNK_0238ff1c;
      g_026ec500 = 0x900000008;
      bVar2 = *g_026ec4c0 == '=';
      g_026ec508 = (uint)bVar2 * 4 + 10;
      iVar1 = (uint)bVar2 * 4 + 0xb;
      g_026ec50c = 0xf;
      if (*g_026ec4c8 != '=') {
        g_026ec50c = iVar1;
      }
      g_026ec510 = 0x10;
      if (*g_026ec4d0 != '=') {
        g_026ec510 = g_026ec50c + 1;
      }
      g_026ec514 = (g_026ec50c == iVar1 && g_026ec510 == g_026ec50c + 1) && !bVar2;
      ___cxa_guard_release();
    }
  }
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026ec428 = "_type";
      g_026ec430 = &g_027e3fb0;
      g_026ec438 = 0;
      g_026ec440 = 0x6500;
      g_026ec448 = "GNEventType";
      g_026ec450 = &g_026ec520;
      g_026ec458 = 0;
      ram_00000000026ec460 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026ec428;
}

