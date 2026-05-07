// ===== MUTimeline — Annotated small functions =====
// 2 readable functions
// Known properties: 4
//   GNInt           _numerator
//   GNInt           _denominator
//   double          _offset
//   bool            _isDynamicTimeGrid

// ==================================================
// @00823ca0 (959 bytes) — calculation
// Known properties of MUTimeline:
// _numerator, _denominator, _offset, _isDynamicTimeGrid

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *this;
  
  FUN_008233b0();
  this[5] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *this = &DAT_02639460;
  this[5] = &DAT_02639858;
  this[6] = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00824120();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  *(undefined4 *)(this + 7) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02731828 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027317f0 = FUN_00083c20();
        _DAT_027317e8 = "_numerator";
        _DAT_027317f8 = 0;
        _DAT_02731800 = 0x6900;
        _DAT_02731808 = "GNInt";
        _DAT_02731810 = 0;
        uRam0000000002731818 = 0;
        _DAT_02731820 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02731870 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02731838 = FUN_00083c20();
        _DAT_02731830 = "_denominator";
        _DAT_02731840 = 0;
        _DAT_02731848 = 0x6900;
        _DAT_02731850 = "GNInt";
        _DAT_02731858 = 0;
        uRam0000000002731860 = 0;
        _DAT_02731868 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  this[8] = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027318b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02731880 = FUN_00083c20();
        _DAT_02731878 = "_offset";
        _DAT_02731888 = 0;
        _DAT_02731890 = 0x6400;
        _DAT_02731898 = "double";
        _DAT_027318a0 = 0;
        uRam00000000027318a8 = 0;
        _DAT_027318b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00824210();
  *(undefined1 *)(this + 10) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02731948 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02731910 = FUN_00083c20();
        _DAT_02731908 = "_isDynamicTimeGrid";
        _DAT_02731918 = 0;
        _DAT_02731920 = 0x6200;
        _DAT_02731928 = "bool";
        _DAT_02731930 = 0;
        uRam0000000002731938 = 0;
        _DAT_02731940 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @0112e4c0 (700 bytes) — math_loop
// Known properties of MUTimeline:
// _numerator, _denominator, _offset, _isDynamicTimeGrid

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
  undefined8 *puVar11;
  
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
  *this = &DAT_025e90a0;
  this[7] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112e8f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  this[8] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112e9e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPerformance");
  }
  this[9] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ead0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterSequence");
  }
  puVar11 = this + 10;
  this[10] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ebc0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUCompositionDescription",param_3,param_4,puVar11);
  }
  this[0xb] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ecb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_composition";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUCompositionLayout");
  }
  this[0xc] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112eda0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeline");
  }
  this[0xd] = 0;
  lVar9 = FUN_000be210();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0112ee90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPulseTimeline");
  }
  return;
}



