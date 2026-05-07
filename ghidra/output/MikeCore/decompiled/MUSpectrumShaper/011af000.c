// Function: FUN_011af000
// Address: 011af000
// Size: 2061 bytes
// Class: MUSpectrumShaper
// String references:
//   "bool"
//   "float"
//   "MUSpectrumShaperParameterSet"
//   "_didRequestCacheValidation"
//   "_startValue"
//   "_riseDuration"
//   "_riseEndValue"
//   "_decayStartTime"
//   "_decayEndTime"
//   "_decayFactor"
//   "_endValue"
//   "_isBypassed"
//   "_needsProcessEnvelope"
//   "_needsProcessEnvelopeIsValid"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011af000(void)

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
  *unaff_RDI = &DAT_02610350;
  unaff_RDI[7] = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011af8f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperParameterSet");
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011af9e0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1788 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1750 = FUN_011aee00();
        _DAT_027b1748 = "_startValue";
        _DAT_027b1758 = 0;
        _DAT_027b1760 = 0x6600;
        _DAT_027b1768 = "float";
        _DAT_027b1770 = 0;
        uRam00000000027b1778 = 0;
        _DAT_027b1780 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b17d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1798 = FUN_011aee00();
        _DAT_027b1790 = "_riseDuration";
        _DAT_027b17a0 = 0;
        _DAT_027b17a8 = 0x6600;
        _DAT_027b17b0 = "float";
        _DAT_027b17b8 = 0;
        uRam00000000027b17c0 = 0;
        _DAT_027b17c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1818 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b17e0 = FUN_011aee00();
        _DAT_027b17d8 = "_riseEndValue";
        _DAT_027b17e8 = 0;
        _DAT_027b17f0 = 0x6600;
        _DAT_027b17f8 = "float";
        _DAT_027b1800 = 0;
        uRam00000000027b1808 = 0;
        _DAT_027b1810 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1860 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1828 = FUN_011aee00();
        _DAT_027b1820 = "_decayStartTime";
        _DAT_027b1830 = 0;
        _DAT_027b1838 = 0x6600;
        _DAT_027b1840 = "float";
        _DAT_027b1848 = 0;
        uRam00000000027b1850 = 0;
        _DAT_027b1858 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b18a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1870 = FUN_011aee00();
        _DAT_027b1868 = "_decayEndTime";
        _DAT_027b1878 = 0;
        _DAT_027b1880 = 0x6600;
        _DAT_027b1888 = "float";
        _DAT_027b1890 = 0;
        uRam00000000027b1898 = 0;
        _DAT_027b18a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b18f0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b18b8 = FUN_011aee00();
        _DAT_027b18b0 = "_decayFactor";
        _DAT_027b18c0 = 0;
        _DAT_027b18c8 = 0x6600;
        _DAT_027b18d0 = "float";
        _DAT_027b18d8 = 0;
        uRam00000000027b18e0 = 0;
        _DAT_027b18e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1938 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1900 = FUN_011aee00();
        _DAT_027b18f8 = "_endValue";
        _DAT_027b1908 = 0;
        _DAT_027b1910 = 0x6600;
        _DAT_027b1918 = "float";
        _DAT_027b1920 = 0;
        uRam00000000027b1928 = 0;
        _DAT_027b1930 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1980 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1948 = FUN_011aee00();
        _DAT_027b1940 = "_isBypassed";
        _DAT_027b1950 = 0;
        _DAT_027b1958 = 0x6200;
        _DAT_027b1960 = "bool";
        _DAT_027b1968 = 0;
        uRam00000000027b1970 = 0;
        _DAT_027b1978 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x61) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b19c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1990 = FUN_011aee00();
        _DAT_027b1988 = "_needsProcessEnvelope";
        _DAT_027b1998 = 0;
        _DAT_027b19a0 = 0x6201;
        _DAT_027b19a8 = "bool";
        _DAT_027b19b0 = 0;
        uRam00000000027b19b8 = 0;
        _DAT_027b19c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x62) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1a10 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b19d8 = FUN_011aee00();
        _DAT_027b19d0 = "_needsProcessEnvelopeIsValid";
        _DAT_027b19e0 = 0;
        _DAT_027b19e8 = 0x6201;
        _DAT_027b19f0 = "bool";
        _DAT_027b19f8 = 0;
        uRam00000000027b1a00 = 0;
        _DAT_027b1a08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 99) = 0;
  lVar9 = FUN_011aee00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b1a58 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b1a20 = FUN_011aee00();
        _DAT_027b1a18 = "_didRequestCacheValidation";
        _DAT_027b1a28 = 0;
        _DAT_027b1a30 = 0x6211;
        _DAT_027b1a38 = "bool";
        _DAT_027b1a40 = 0;
        uRam00000000027b1a48 = 0;
        _DAT_027b1a50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


