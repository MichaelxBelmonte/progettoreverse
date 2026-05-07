// ===== MUTrack — Annotated small functions =====
// 4 readable functions
// Known properties: 3
//   bool            _isDetectionPerformance
//   double          _location
//   double          _duration

// ==================================================
// @011687c0 (2373 bytes) — calculation
// Known properties of MUTrack:
// _isDetectionPerformance, _location, _duration

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
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025cd808;
  this[7] = 0;
  lVar9 = FUN_0015ef90();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f6740();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_generator";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  *this = &DAT_025d31f0;
  *(undefined4 *)(this + 8) = 0;
  if (DAT_0270c820 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      _uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e788b == '\0') {
    FUN_01169170();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x44) = 0;
  if (DAT_0270c820 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      _uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e788b == '\0') {
    FUN_011692e0();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 9) = 0;
  if (DAT_0270c820 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      _uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e788b == '\0') {
    FUN_01169450();
    FUN_00e87980();
  }
  FUN_011695c0();
  *(undefined1 *)(this + 0xb) = 0;
  if (DAT_0270c820 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      _uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e788b == '\0') {
    FUN_011698d0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x5c) = 0;
  if (DAT_0270c820 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      _uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e788b == '\0') {
    FUN_01169a40();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0xc) = 0;
  if (DAT_0270c820 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      _uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e788b == '\0') {
    FUN_01169bb0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 100) = 0;
  if (DAT_0270c820 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      _uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e788b == '\0') {
    FUN_01169d20();
    FUN_00e87980();
  }
  *(undefined1 *)(this + 0xd) = 0;
  if (DAT_0270c820 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      _uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e788b == '\0') {
    FUN_01169e90();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x69) = 0;
  if (DAT_0270c820 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      _uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e788b == '\0') {
    FUN_0116a000();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x6a) = 0;
  if (DAT_0270c820 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027e77e8 = FUN_0015ef90();
      _DAT_027e77d0 = "MULSSGenerator";
      _DAT_027e77d8 = 0x70;
      _DAT_027e77e0 = FUN_0015ef30;
      _DAT_027e77f0 = 0;
      uRam00000000027e77f8 = 0;
      _DAT_027e7800 = 0;
      uRam00000000027e7808 = 0;
      _DAT_027e7810 = 0;
      uRam00000000027e7818 = 0;
      _DAT_027e7820 = 0;
      uRam00000000027e7828 = 0;
      _DAT_027e7830 = 0;
      uRam00000000027e7838 = 0;
      _DAT_027e7840 = 0;
      uRam00000000027e7848 = 0;
      _DAT_027e7850 = 0;
      uRam00000000027e7858 = 0;
      _DAT_027e7860 = 0;
      uRam00000000027e7868 = 0;
      _DAT_027e7870 = 0;
      uRam00000000027e7878 = 0;
      _DAT_027e7880 = 0;
      _uRam00000000027e7888 = 0;
      _DAT_027e7890 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e788b == '\0') {
    FUN_0116a170();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @011a0e80 (759 bytes) — calculation
// Known properties of MUTrack:
// _isDetectionPerformance, _location, _duration

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
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025c3d08;
  this[7] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aebb0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aeb78 = FUN_011a0b60();
        _DAT_027aeb70 = "_location";
        _DAT_027aeb80 = 0;
        _DAT_027aeb88 = 0x6400;
        _DAT_027aeb90 = "double";
        _DAT_027aeb98 = 0;
        uRam00000000027aeba0 = 0;
        _DAT_027aeba8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  this[8] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aebf8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aebc0 = FUN_011a0b60();
        _DAT_027aebb8 = "_duration";
        _DAT_027aebc8 = 0;
        _DAT_027aebd0 = 0x6400;
        _DAT_027aebd8 = "double";
        _DAT_027aebe0 = 0;
        uRam00000000027aebe8 = 0;
        _DAT_027aebf0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  this[9] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1230();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_renderCacheSegments";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  this[10] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1320();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MURenderCacheData");
  }
  this[0xb] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1410();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MURenderCacheData");
  }
  this[0xc] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1500();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MURenderCacheData");
  }
  return;
}




// ==================================================
// @0118a6a0 (641 bytes) — math_loop
// Known properties of MUTrack:
// _isDetectionPerformance, _location, _duration

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
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025d4058;
  FUN_0118aa10();
  this[8] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118aaf0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_performance";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  this[9] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118abe0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSource");
  }
  FUN_0118acd0();
  *(undefined1 *)(this + 0xb) = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aac20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aabe8 = FUN_0118a3e0();
        _DAT_027aabe0 = "_isDetectionPerformance";
        _DAT_027aabf0 = 0;
        _DAT_027aabf8 = 0x6200;
        _DAT_027aac00 = "bool";
        _DAT_027aac08 = 0;
        uRam00000000027aac10 = 0;
        _DAT_027aac18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  this[0xc] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118adb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_performances";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUComposition");
  }
  this[0xd] = 0;
  lVar9 = FUN_0118a3e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0118aea0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioIOConfiguration");
  }
  return;
}




// ==================================================
// @0116a4c0 (600 bytes) — calculation
// Known properties of MUTrack:
// _isDetectionPerformance, _location, _duration

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *this;
  
  FUN_00d4ff40();
  this[0x1b] = 0;
  this[0x1c] = 0;
  *(undefined8 *)((longlong)this + 0xc6) = 0;
  *(undefined8 *)((longlong)this + 0xce) = 0;
  *(undefined8 *)((longlong)this + 0xbc) = 0;
  *(undefined8 *)((longlong)this + 0xc4) = 0;
  *(undefined8 *)((longlong)this + 0xac) = 0;
  *(undefined8 *)((longlong)this + 0xb4) = 0;
  *(undefined8 *)((longlong)this + 0x9c) = 0;
  *(undefined8 *)((longlong)this + 0xa4) = 0;
  *(undefined8 *)((longlong)this + 0x8c) = 0;
  *(undefined8 *)((longlong)this + 0x94) = 0;
  *(undefined8 *)((longlong)this + 0x7c) = 0;
  *(undefined8 *)((longlong)this + 0x84) = 0;
  *(undefined8 *)((longlong)this + 0x6c) = 0;
  *(undefined8 *)((longlong)this + 0x74) = 0;
  *(undefined8 *)((longlong)this + 0x5c) = 0;
  *(undefined8 *)((longlong)this + 100) = 0;
  *(undefined8 *)((longlong)this + 0x4c) = 0;
  *(undefined8 *)((longlong)this + 0x54) = 0;
  *(undefined8 *)((longlong)this + 0x3c) = 0;
  *(undefined8 *)((longlong)this + 0x44) = 0;
  *(undefined8 *)((longlong)this + 0x2c) = 0;
  *(undefined8 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x1c) = 0;
  *(undefined8 *)((longlong)this + 0x24) = 0;
  *(undefined8 *)((longlong)this + 0xc) = 0;
  *(undefined8 *)((longlong)this + 0x14) = 0;
  *this = &DAT_025e3768;
  this[0x1d] = 0;
  this[0x1e] = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    this[0x1f] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    this[0x1e] = puVar3;
    iVar2 = DAT_02802630;
    this[0x1f] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x1f] = puVar3;
      iVar2 = DAT_02802630;
    }
  }
  *(undefined4 *)(this + 0x20) = 0;
  this[0x21] = 0;
  this[0x22] = 0;
  if (iVar2 < 2) {
    this[0x23] = 0;
    this[0x24] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    this[0x22] = puVar3;
    iVar2 = DAT_02802630;
    this[0x23] = 0;
    if (iVar2 < 2) {
      this[0x24] = 0;
      this[0x25] = 0;
      return;
    }
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*pcVar1)();
    this[0x23] = puVar3;
    iVar2 = DAT_02802630;
    this[0x24] = 0;
    if (1 < iVar2) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x24] = puVar3;
      iVar2 = DAT_02802630;
      this[0x25] = 0;
      if (iVar2 < 2) {
        return;
      }
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      this[0x25] = puVar3;
      return;
    }
  }
  this[0x25] = 0;
  return;
}



