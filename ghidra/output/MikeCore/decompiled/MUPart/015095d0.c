// Function: FUN_015095d0
// Address: 015095d0
// Size: 599 bytes
// Class: MUPart
// String references:
//   "MUPart"
//   "_instrument"
//   "MUFretInstrument"


/* WARNING: Removing unreachable block (ram,0x01509750) */
/* WARNING: Removing unreachable block (ram,0x0150975e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015095d0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 uVar4;
  longlong local_30;
  longlong local_28;
  
  if ((DAT_027c2a18 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027c2968 = FUN_0151beb0();
    _DAT_027c2950 = "MUFretInstrument";
    _DAT_027c2958 = 0x50;
    _DAT_027c2960 = FUN_0151c1e0;
    _DAT_027c2970 = 0;
    uRam00000000027c2978 = 0;
    _DAT_027c2980 = 0;
    uRam00000000027c2988 = 0;
    _DAT_027c2990 = 0;
    uRam00000000027c2998 = 0;
    _DAT_027c29a0 = 0;
    uRam00000000027c29a8 = 0;
    _DAT_027c29b0 = 0;
    uRam00000000027c29b8 = 0;
    _DAT_027c29c0 = 0;
    uRam00000000027c29c8 = 0;
    _DAT_027c29d0 = 0;
    uRam00000000027c29d8 = 0;
    _DAT_027c29e0 = 0;
    uRam00000000027c29e8 = 0;
    _DAT_027c29f0 = 0;
    uRam00000000027c29f8 = 0;
    _DAT_027c2a00 = 0;
    _uRam00000000027c2a08 = 0;
    _DAT_027c2a10 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027c2a0b == '\0') {
    FUN_01509470();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00d4ff80();
    lVar2 = FUN_0151beb0();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_0151c0a0();
      iVar1 = FUN_00e7ddf0();
      pcVar3 = "_instrument";
      if (iVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"MUPart");
    }
    FUN_0151c360();
    FUN_0151c5e0();
    FUN_00d50c00();
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}


