// Reconstructed implementation of GNJob
// From MikeCore binary — reverse-engineered pseudocode

#include "GNJob.h"

// ============================================================
// @00045740 — 626 bytes
// str: ""_state""
// str: ""GNJob""
// str: ""GNJobState""
// str: ""=GNJobStateRunning""
// str: ""=GNJobStatePreparing""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00045740(void)

{
  bool bVar1;
  int iVar2;
  
  if (DAT_026d20b0 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      bVar1 = *DAT_026d2080 != '=';
      _DAT_026d20a0 = -(uint)(*DAT_026d2080 == '=');
      _DAT_026d20a4 = 0;
      if (*DAT_026d2088 != '=') {
        _DAT_026d20a4 = (uint)bVar1;
      }
      _DAT_026d20a8 = 1;
      if (*DAT_026d2090 != '=') {
        _DAT_026d20a8 = _DAT_026d20a4 + 1;
      }
      DAT_026d20ac = _DAT_026d20a4 == bVar1 && _DAT_026d20a8 == _DAT_026d20a4 + 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d20e8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026d20b8 = "GNJobState";
      _DAT_026d20c0 = 3;
      DAT_026d20c4 = DAT_026d20ac;
      _DAT_026d20c8 = &DAT_026d20a0;
      _DAT_026d20d0 = &DAT_026d2080;
      _DAT_026d20d8 = 0;
      uRam00000000026d20e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0278ca00 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_0278c910 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026d1ef8 = FUN_00d4fe50();
          _DAT_026d1ee0 = "GNJob";
          _DAT_026d1ee8 = 0x60;
          _DAT_026d1ef0 = FUN_000443f0;
          _DAT_026d1f00 = 0;
          uRam00000000026d1f08 = 0;
          _DAT_026d1f10 = 0;
          _DAT_026d1f88 = 0;
          uRam00000000026d1f90 = 0;
          _DAT_026d1f98 = 0;
          DAT_026d1f9a = 1;
          _DAT_026d1f18 = 0;
          uRam00000000026d1f20 = 0;
          _DAT_026d1f28 = 0;
          uRam00000000026d1f30 = 0;
          _DAT_026d1f38 = 0;
          uRam00000000026d1f40 = 0;
          _DAT_026d1f48 = 0;
          uRam00000000026d1f50 = 0;
          _DAT_026d1f58 = 0;
          uRam00000000026d1f60 = 0;
          _DAT_026d1f68 = 0;
          uRam00000000026d1f70 = 0;
          _DAT_026d1f78 = 0;
          uRam00000000026d1f80 = 0;
          DAT_026d1fa3 = 0;
          _DAT_026d1f9b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0278c9c0 = "_state";
      _DAT_0278c9c8 = &DAT_026d1ee0;
      _DAT_0278c9d0 = 0;
      _DAT_0278c9d8 = 0x6500;
      _DAT_0278c9e0 = "GNJobState";
      _DAT_0278c9e8 = &DAT_026d20b8;
      _DAT_0278c9f0 = 0;
      uRam000000000278c9f8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0278c9c0;
}




// ============================================================
// @0001cda0 — 529 bytes
// str: ""GNJob""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0001cebf) */
/* WARNING: Removing unreachable block (ram,0x0001cecd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001cda0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_a8;
  longlong local_a0;
  
  if ((DAT_0278c910 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026d1ef8 = FUN_00d4fe50();
    _DAT_026d1ee0 = "GNJob";
    _DAT_026d1ee8 = 0x60;
    _DAT_026d1ef0 = FUN_000443f0;
    _DAT_026d1f00 = 0;
    uRam00000000026d1f08 = 0;
    _DAT_026d1f10 = 0;
    _DAT_026d1f88 = 0;
    uRam00000000026d1f90 = 0;
    _DAT_026d1f98 = 0;
    DAT_026d1f9a = 1;
    _DAT_026d1f18 = 0;
    uRam00000000026d1f20 = 0;
    _DAT_026d1f28 = 0;
    uRam00000000026d1f30 = 0;
    _DAT_026d1f38 = 0;
    uRam00000000026d1f40 = 0;
    _DAT_026d1f48 = 0;
    uRam00000000026d1f50 = 0;
    _DAT_026d1f58 = 0;
    uRam00000000026d1f60 = 0;
    _DAT_026d1f68 = 0;
    uRam00000000026d1f70 = 0;
    _DAT_026d1f78 = 0;
    uRam00000000026d1f80 = 0;
    DAT_026d1fa3 = 0;
    _DAT_026d1f9b = 0;
    ___cxa_guard_release();
  }
  if (DAT_026d1f9b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00044470();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_00e33080();
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}




// ============================================================
// @00045190 — 512 bytes
// str: ""GNJob""
// str: ""_backgroundJobObserver""
// str: ""GNBackgroundJobObserver""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00045190(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_026d2000 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_0278c910 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026d1ef8 = FUN_00d4fe50();
          _DAT_026d1ee0 = "GNJob";
          _DAT_026d1ee8 = 0x60;
          _DAT_026d1ef0 = FUN_000443f0;
          _DAT_026d1f00 = 0;
          uRam00000000026d1f08 = 0;
          _DAT_026d1f10 = 0;
          _DAT_026d1f88 = 0;
          uRam00000000026d1f90 = 0;
          _DAT_026d1f98 = 0;
          DAT_026d1f9a = 1;
          _DAT_026d1f18 = 0;
          uRam00000000026d1f20 = 0;
          _DAT_026d1f28 = 0;
          uRam00000000026d1f30 = 0;
          _DAT_026d1f38 = 0;
          uRam00000000026d1f40 = 0;
          _DAT_026d1f48 = 0;
          uRam00000000026d1f50 = 0;
          _DAT_026d1f58 = 0;
          uRam00000000026d1f60 = 0;
          _DAT_026d1f68 = 0;
          uRam00000000026d1f70 = 0;
          _DAT_026d1f78 = 0;
          uRam00000000026d1f80 = 0;
          DAT_026d1fa3 = 0;
          _DAT_026d1f9b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_0278c968 = (iVar1 != 0) << 6 | 0x82;
      _DAT_0278c950 = "_backgroundJobObserver";
      _DAT_0278c958 = &DAT_026d1ee0;
      _DAT_0278c960 = 0;
      _DAT_0278c970 = 0;
      uRam000000000278c978 = 0;
      _DAT_0278c980 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0278c990 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0278c9a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d2010 = "GNBackgroundJobObserver";
          DAT_026d2020 = 0;
          _DAT_026d2018 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_0278c950;
}



