// Reconstructed implementation of GNAudioSimpleFilter
// From MikeCore binary — reverse-engineered pseudocode

#include "GNAudioSimpleFilter.h"

// ============================================================
// @00afd060 — 1686 bytes
// str: ""GNAudioSimpleFilter""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00afd060(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_02547170;
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  if (DAT_02756e68 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_02756db8 = FUN_00af6f70();
      _DAT_02756da0 = "GNAudioSimpleFilter";
      _DAT_02756da8 = 0x100;
      _DAT_02756db0 = FUN_00afcff0;
      _DAT_02756dc0 = 0;
      uRam0000000002756dc8 = 0;
      _DAT_02756dd0 = 0;
      uRam0000000002756dd8 = 0;
      _DAT_02756de0 = 0;
      uRam0000000002756de8 = 0;
      _DAT_02756df0 = 0;
      uRam0000000002756df8 = 0;
      _DAT_02756e00 = 0;
      uRam0000000002756e08 = 0;
      _DAT_02756e10 = 0;
      uRam0000000002756e18 = 0;
      _DAT_02756e20 = 0;
      uRam0000000002756e28 = 0;
      _DAT_02756e30 = 0;
      uRam0000000002756e38 = 0;
      _DAT_02756e40 = 0;
      uRam0000000002756e48 = 0;
      _DAT_02756e50 = 0;
      _uRam0000000002756e58 = 0;
      _DAT_02756e60 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02756e5b == '\0') {
    FUN_00afd730();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0;
  if (DAT_02756e68 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_02756db8 = FUN_00af6f70();
      _DAT_02756da0 = "GNAudioSimpleFilter";
      _DAT_02756da8 = 0x100;
      _DAT_02756db0 = FUN_00afcff0;
      _DAT_02756dc0 = 0;
      uRam0000000002756dc8 = 0;
      _DAT_02756dd0 = 0;
      uRam0000000002756dd8 = 0;
      _DAT_02756de0 = 0;
      uRam0000000002756de8 = 0;
      _DAT_02756df0 = 0;
      uRam0000000002756df8 = 0;
      _DAT_02756e00 = 0;
      uRam0000000002756e08 = 0;
      _DAT_02756e10 = 0;
      uRam0000000002756e18 = 0;
      _DAT_02756e20 = 0;
      uRam0000000002756e28 = 0;
      _DAT_02756e30 = 0;
      uRam0000000002756e38 = 0;
      _DAT_02756e40 = 0;
      uRam0000000002756e48 = 0;
      _DAT_02756e50 = 0;
      _uRam0000000002756e58 = 0;
      _DAT_02756e60 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02756e5b == '\0') {
    FUN_00afd960();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  if (DAT_02756e68 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_02756db8 = FUN_00af6f70();
      _DAT_02756da0 = "GNAudioSimpleFilter";
      _DAT_02756da8 = 0x100;
      _DAT_02756db0 = FUN_00afcff0;
      _DAT_02756dc0 = 0;
      uRam0000000002756dc8 = 0;
      _DAT_02756dd0 = 0;
      uRam0000000002756dd8 = 0;
      _DAT_02756de0 = 0;
      uRam0000000002756de8 = 0;
      _DAT_02756df0 = 0;
      uRam0000000002756df8 = 0;
      _DAT_02756e00 = 0;
      uRam0000000002756e08 = 0;
      _DAT_02756e10 = 0;
      uRam0000000002756e18 = 0;
      _DAT_02756e20 = 0;
      uRam0000000002756e28 = 0;
      _DAT_02756e30 = 0;
      uRam0000000002756e38 = 0;
      _DAT_02756e40 = 0;
      uRam0000000002756e48 = 0;
      _DAT_02756e50 = 0;
      _uRam0000000002756e58 = 0;
      _DAT_02756e60 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02756e5b == '\0') {
    FUN_00afdad0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = 0;
  if (DAT_02756e68 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_02756db8 = FUN_00af6f70();
      _DAT_02756da0 = "GNAudioSimpleFilter";
      _DAT_02756da8 = 0x100;
      _DAT_02756db0 = FUN_00afcff0;
      _DAT_02756dc0 = 0;
      uRam0000000002756dc8 = 0;
      _DAT_02756dd0 = 0;
      uRam0000000002756dd8 = 0;
      _DAT_02756de0 = 0;
      uRam0000000002756de8 = 0;
      _DAT_02756df0 = 0;
      uRam0000000002756df8 = 0;
      _DAT_02756e00 = 0;
      uRam0000000002756e08 = 0;
      _DAT_02756e10 = 0;
      uRam0000000002756e18 = 0;
      _DAT_02756e20 = 0;
      uRam0000000002756e28 = 0;
      _DAT_02756e30 = 0;
      uRam0000000002756e38 = 0;
      _DAT_02756e40 = 0;
      uRam0000000002756e48 = 0;
      _DAT_02756e50 = 0;
      _uRam0000000002756e58 = 0;
      _DAT_02756e60 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02756e5b == '\0') {
    FUN_00afdc40();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  if (DAT_02756e68 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_02756db8 = FUN_00af6f70();
      _DAT_02756da0 = "GNAudioSimpleFilter";
      _DAT_02756da8 = 0x100;
      _DAT_02756db0 = FUN_00afcff0;
      _DAT_02756dc0 = 0;
      uRam0000000002756dc8 = 0;
      _DAT_02756dd0 = 0;
      uRam0000000002756dd8 = 0;
      _DAT_02756de0 = 0;
      uRam0000000002756de8 = 0;
      _DAT_02756df0 = 0;
      uRam0000000002756df8 = 0;
      _DAT_02756e00 = 0;
      uRam0000000002756e08 = 0;
      _DAT_02756e10 = 0;
      uRam0000000002756e18 = 0;
      _DAT_02756e20 = 0;
      uRam0000000002756e28 = 0;
      _DAT_02756e30 = 0;
      uRam0000000002756e38 = 0;
      _DAT_02756e40 = 0;
      uRam0000000002756e48 = 0;
      _DAT_02756e50 = 0;
      _uRam0000000002756e58 = 0;
      _DAT_02756e60 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02756e5b == '\0') {
    FUN_00afddb0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = 0;
  if (DAT_02756e68 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_02756db8 = FUN_00af6f70();
      _DAT_02756da0 = "GNAudioSimpleFilter";
      _DAT_02756da8 = 0x100;
      _DAT_02756db0 = FUN_00afcff0;
      _DAT_02756dc0 = 0;
      uRam0000000002756dc8 = 0;
      _DAT_02756dd0 = 0;
      uRam0000000002756dd8 = 0;
      _DAT_02756de0 = 0;
      uRam0000000002756de8 = 0;
      _DAT_02756df0 = 0;
      uRam0000000002756df8 = 0;
      _DAT_02756e00 = 0;
      uRam0000000002756e08 = 0;
      _DAT_02756e10 = 0;
      uRam0000000002756e18 = 0;
      _DAT_02756e20 = 0;
      uRam0000000002756e28 = 0;
      _DAT_02756e30 = 0;
      uRam0000000002756e38 = 0;
      _DAT_02756e40 = 0;
      uRam0000000002756e48 = 0;
      _DAT_02756e50 = 0;
      _uRam0000000002756e58 = 0;
      _DAT_02756e60 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02756e5b == '\0') {
    FUN_00afdf20();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  if (DAT_02756e68 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_02756db8 = FUN_00af6f70();
      _DAT_02756da0 = "GNAudioSimpleFilter";
      _DAT_02756da8 = 0x100;
      _DAT_02756db0 = FUN_00afcff0;
      _DAT_02756dc0 = 0;
      uRam0000000002756dc8 = 0;
      _DAT_02756dd0 = 0;
      uRam0000000002756dd8 = 0;
      _DAT_02756de0 = 0;
      uRam0000000002756de8 = 0;
      _DAT_02756df0 = 0;
      uRam0000000002756df8 = 0;
      _DAT_02756e00 = 0;
      uRam0000000002756e08 = 0;
      _DAT_02756e10 = 0;
      uRam0000000002756e18 = 0;
      _DAT_02756e20 = 0;
      uRam0000000002756e28 = 0;
      _DAT_02756e30 = 0;
      uRam0000000002756e38 = 0;
      _DAT_02756e40 = 0;
      uRam0000000002756e48 = 0;
      _DAT_02756e50 = 0;
      _uRam0000000002756e58 = 0;
      _DAT_02756e60 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02756e5b == '\0') {
    FUN_00afe090();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xfc) = *(undefined4 *)(unaff_RSI + 0xfc);
  uVar1 = *(undefined8 *)(unaff_RSI + 0xf4);
  *(undefined8 *)((longlong)unaff_RDI + 0xec) = *(undefined8 *)(unaff_RSI + 0xec);
  *(undefined8 *)((longlong)unaff_RDI + 0xf4) = uVar1;
  uVar1 = *(undefined8 *)(unaff_RSI + 0xac);
  uVar2 = *(undefined8 *)(unaff_RSI + 0xb4);
  uVar3 = *(undefined8 *)(unaff_RSI + 0xbc);
  uVar4 = *(undefined8 *)(unaff_RSI + 0xc4);
  uVar5 = *(undefined8 *)(unaff_RSI + 0xcc);
  uVar6 = *(undefined8 *)(unaff_RSI + 0xd4);
  uVar7 = *(undefined8 *)(unaff_RSI + 0xe4);
  *(undefined8 *)((longlong)unaff_RDI + 0xdc) = *(undefined8 *)(unaff_RSI + 0xdc);
  *(undefined8 *)((longlong)unaff_RDI + 0xe4) = uVar7;
  *(undefined8 *)((longlong)unaff_RDI + 0xcc) = uVar5;
  *(undefined8 *)((longlong)unaff_RDI + 0xd4) = uVar6;
  *(undefined8 *)((longlong)unaff_RDI + 0xbc) = uVar3;
  *(undefined8 *)((longlong)unaff_RDI + 0xc4) = uVar4;
  *(undefined8 *)((longlong)unaff_RDI + 0xac) = uVar1;
  *(undefined8 *)((longlong)unaff_RDI + 0xb4) = uVar2;
  return;
}




// ============================================================
// @00afd730 — 519 bytes
// str: ""_type""
// str: ""GNAudioSimpleFilter""
// str: ""GNAudioSimpleFilterType""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00afd730(void)

{
  int iVar1;
  
  if (DAT_02756f08 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02756ef0 = _DAT_0238fcc0;
      uRam0000000002756ef4 = _UNK_0238fcc4;
      uRam0000000002756ef8 = _UNK_0238fcc8;
      uRam0000000002756efc = _UNK_0238fccc;
      DAT_02756f00 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_02756f40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02756f10 = "GNAudioSimpleFilterType";
      _DAT_02756f18 = 4;
      DAT_02756f1c = DAT_02756f00;
      _DAT_02756f20 = &DAT_02756ef0;
      _DAT_02756f28 = &DAT_02756ec0;
      _DAT_02756f30 = 0;
      uRam0000000002756f38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_02756eb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02756e68 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02756db8 = FUN_00af6f70();
          _DAT_02756da0 = "GNAudioSimpleFilter";
          _DAT_02756da8 = 0x100;
          _DAT_02756db0 = FUN_00afcff0;
          _DAT_02756dc0 = 0;
          uRam0000000002756dc8 = 0;
          _DAT_02756dd0 = 0;
          uRam0000000002756dd8 = 0;
          _DAT_02756de0 = 0;
          uRam0000000002756de8 = 0;
          _DAT_02756df0 = 0;
          uRam0000000002756df8 = 0;
          _DAT_02756e00 = 0;
          uRam0000000002756e08 = 0;
          _DAT_02756e10 = 0;
          uRam0000000002756e18 = 0;
          _DAT_02756e20 = 0;
          uRam0000000002756e28 = 0;
          _DAT_02756e30 = 0;
          uRam0000000002756e38 = 0;
          _DAT_02756e40 = 0;
          uRam0000000002756e48 = 0;
          _DAT_02756e50 = 0;
          uRam0000000002756e58 = 0;
          _DAT_02756e60 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02756e70 = "_type";
      _DAT_02756e78 = &DAT_02756da0;
      _DAT_02756e80 = 0;
      _DAT_02756e88 = 0x6500;
      _DAT_02756e90 = "GNAudioSimpleFilterType";
      _DAT_02756e98 = &DAT_02756f10;
      _DAT_02756ea0 = 0;
      uRam0000000002756ea8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_02756e70;
}



