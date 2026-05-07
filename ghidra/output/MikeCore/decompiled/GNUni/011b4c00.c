// Function: FUN_011b4c00
// Address: 011b4c00
// Size: 1595 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUElement"
//   "double"
//   "_followingJoin"
//   "_precedingJoin"
//   "_joinsPitches"
//   "_joinsPhases"
//   "_joinsAmplitudes"
//   "_joinsTempoMapAngles"
//   "_joinsFormants"
//   "_pitchTransitionDuration"
//   "_amplitudeTransitionDuration"
//   "_formantTransitionDuration"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011b4c00(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025d6300;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_011b49f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b3188 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b3150 = FUN_011b49f0();
        _DAT_027b3148 = "_joinsPitches";
        _DAT_027b3158 = 0;
        _DAT_027b3160 = 0x6200;
        _DAT_027b3168 = "bool";
        _DAT_027b3170 = 0;
        uRam00000000027b3178 = 0;
        _DAT_027b3180 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = 0;
  lVar9 = FUN_011b49f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b31d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b3198 = FUN_011b49f0();
        _DAT_027b3190 = "_joinsPhases";
        _DAT_027b31a0 = 0;
        _DAT_027b31a8 = 0x6200;
        _DAT_027b31b0 = "bool";
        _DAT_027b31b8 = 0;
        uRam00000000027b31c0 = 0;
        _DAT_027b31c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3a) = 0;
  lVar9 = FUN_011b49f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b3218 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b31e0 = FUN_011b49f0();
        _DAT_027b31d8 = "_joinsAmplitudes";
        _DAT_027b31e8 = 0;
        _DAT_027b31f0 = 0x6200;
        _DAT_027b31f8 = "bool";
        _DAT_027b3200 = 0;
        uRam00000000027b3208 = 0;
        _DAT_027b3210 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3b) = 0;
  lVar9 = FUN_011b49f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b3260 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b3228 = FUN_011b49f0();
        _DAT_027b3220 = "_joinsTempoMapAngles";
        _DAT_027b3230 = 0;
        _DAT_027b3238 = 0x6200;
        _DAT_027b3240 = "bool";
        _DAT_027b3248 = 0;
        uRam00000000027b3250 = 0;
        _DAT_027b3258 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_011b49f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b32a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b3270 = FUN_011b49f0();
        _DAT_027b3268 = "_joinsFormants";
        _DAT_027b3278 = 0;
        _DAT_027b3280 = 0x6211;
        _DAT_027b3288 = "bool";
        _DAT_027b3290 = 0;
        uRam00000000027b3298 = 0;
        _DAT_027b32a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_011b49f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b32f0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b32b8 = FUN_011b49f0();
        _DAT_027b32b0 = "_pitchTransitionDuration";
        _DAT_027b32c0 = 0;
        _DAT_027b32c8 = 0x6400;
        _DAT_027b32d0 = "double";
        _DAT_027b32d8 = 0;
        uRam00000000027b32e0 = 0;
        _DAT_027b32e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_011b49f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b3338 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b3300 = FUN_011b49f0();
        _DAT_027b32f8 = "_amplitudeTransitionDuration";
        _DAT_027b3308 = 0;
        _DAT_027b3310 = 0x6400;
        _DAT_027b3318 = "double";
        _DAT_027b3320 = 0;
        uRam00000000027b3328 = 0;
        _DAT_027b3330 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_011b49f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b3380 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b3348 = FUN_011b49f0();
        _DAT_027b3340 = "_formantTransitionDuration";
        _DAT_027b3350 = 0;
        _DAT_027b3358 = 0x6400;
        _DAT_027b3360 = "double";
        _DAT_027b3368 = 0;
        uRam00000000027b3370 = 0;
        _DAT_027b3378 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_011b49f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b52e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_precedingJoin";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_011b49f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b53d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_followingJoin";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  return;
}


