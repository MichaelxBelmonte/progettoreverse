// Function: FUN_018b8a80
// Address: 018b8a80
// Size: 551 bytes
// Class: GNHeartbeatHandler
// String references:
//   "GNHeartbeatHandler"
//   "MUDebugBitmap"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018b8a80(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  unaff_RDI[0x27] = &DAT_024c8618;
  if (DAT_026ff970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e0230 = "GNHeartbeatHandler";
      DAT_026e0240 = 0;
      _DAT_026e0238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02608b78;
  unaff_RDI[2] = &DAT_026094a8;
  unaff_RDI[0x27] = &DAT_026094e8;
  FUN_018b8d40();
  FUN_018b9000();
  FUN_018b92c0();
  FUN_018b9580();
  unaff_RDI[0x2c] = 0;
  if (DAT_027dc590 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027dc4e0 = FUN_0006d940();
      _DAT_027dc4c8 = "MUDebugBitmap";
      _DAT_027dc4d0 = 0x168;
      _DAT_027dc4d8 = FUN_018b8a10;
      _DAT_027dc4e8 = 0;
      uRam00000000027dc4f0 = 0;
      _DAT_027dc4f8 = 0;
      _DAT_027dc570 = 0;
      uRam00000000027dc578 = 0;
      _DAT_027dc580 = 0;
      DAT_027dc582 = 3;
      _DAT_027dc500 = 0;
      uRam00000000027dc508 = 0;
      _DAT_027dc510 = 0;
      uRam00000000027dc518 = 0;
      _DAT_027dc520 = 0;
      uRam00000000027dc528 = 0;
      _DAT_027dc530 = 0;
      uRam00000000027dc538 = 0;
      _DAT_027dc540 = 0;
      uRam00000000027dc548 = 0;
      _DAT_027dc550 = 0;
      uRam00000000027dc558 = 0;
      _DAT_027dc560 = 0;
      uRam00000000027dc568 = 0;
      DAT_027dc58b = 0;
      _DAT_027dc583 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027dc583 == '\0') {
    FUN_018b9840();
    FUN_00e87980();
  }
  return;
}


