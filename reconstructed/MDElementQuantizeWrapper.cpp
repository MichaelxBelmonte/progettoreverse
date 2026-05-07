// Reconstructed implementation of MDElementQuantizeWrapper
// From MikeCore binary — reverse-engineered pseudocode

#include "MDElementQuantizeWrapper.h"

// ============================================================
// @00807040 — 681 bytes
// str: ""MDElementQuantizeWrapper""
// str: ""MUPulseAssignmentTarget""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00807040(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_025eefe0;
  if (DAT_0272fca8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027902e0 = "MUPulseAssignmentTarget";
      DAT_027902f0 = 0;
      _DAT_027902e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02513408;
  unaff_RDI[2] = &DAT_025137d8;
  FUN_00807330();
  unaff_RDI[4] = 0;
  if (DAT_0272fc98 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272fbe8 = FUN_00d4fe50();
      _DAT_0272fbd0 = "MDElementQuantizeWrapper";
      _DAT_0272fbd8 = 0x30;
      _DAT_0272fbe0 = FUN_00806ee0;
      _DAT_0272fbf0 = 0;
      uRam000000000272fbf8 = 0;
      _DAT_0272fc00 = 0;
      _DAT_0272fc78 = 0;
      uRam000000000272fc80 = 0;
      _DAT_0272fc88 = 0;
      DAT_0272fc8a = 1;
      _DAT_0272fc08 = 0;
      uRam000000000272fc10 = 0;
      _DAT_0272fc18 = 0;
      uRam000000000272fc20 = 0;
      _DAT_0272fc28 = 0;
      uRam000000000272fc30 = 0;
      _DAT_0272fc38 = 0;
      uRam000000000272fc40 = 0;
      _DAT_0272fc48 = 0;
      uRam000000000272fc50 = 0;
      _DAT_0272fc58 = 0;
      uRam000000000272fc60 = 0;
      _DAT_0272fc68 = 0;
      uRam000000000272fc70 = 0;
      DAT_0272fc93 = 0;
      _DAT_0272fc8b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272fc8b == '\0') {
    FUN_00807660();
    FUN_00e87980();
  }
  unaff_RDI[5] = 0;
  if (DAT_0272fc98 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0272fbe8 = FUN_00d4fe50();
      _DAT_0272fbd0 = "MDElementQuantizeWrapper";
      _DAT_0272fbd8 = 0x30;
      _DAT_0272fbe0 = FUN_00806ee0;
      _DAT_0272fbf0 = 0;
      uRam000000000272fbf8 = 0;
      _DAT_0272fc00 = 0;
      _DAT_0272fc78 = 0;
      uRam000000000272fc80 = 0;
      _DAT_0272fc88 = 0;
      DAT_0272fc8a = 1;
      _DAT_0272fc08 = 0;
      uRam000000000272fc10 = 0;
      _DAT_0272fc18 = 0;
      uRam000000000272fc20 = 0;
      _DAT_0272fc28 = 0;
      uRam000000000272fc30 = 0;
      _DAT_0272fc38 = 0;
      uRam000000000272fc40 = 0;
      _DAT_0272fc48 = 0;
      uRam000000000272fc50 = 0;
      _DAT_0272fc58 = 0;
      uRam000000000272fc60 = 0;
      _DAT_0272fc68 = 0;
      uRam000000000272fc70 = 0;
      DAT_0272fc93 = 0;
      _DAT_0272fc8b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0272fc8b == '\0') {
    FUN_008077f0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00807c50 — 590 bytes
// ============================================================

void FUN_00807c50(void)

{
  FUN_00807ea0();
  FUN_00808180();
  FUN_008083d0();
  FUN_00808580();
  FUN_00808580();
  FUN_008087a0();
  FUN_00808ac0();
  FUN_00808cb0();
  FUN_00808f90();
  FUN_008092d0();
  FUN_008094a0();
  FUN_00809560();
  FUN_008099f0();
  FUN_00809c70();
  FUN_00809f90();
  FUN_0080a080();
  FUN_0080a190();
  FUN_0080a4b0();
  FUN_0080a700();
  FUN_0080a820();
  FUN_0080aa70();
  FUN_0080acc0();
  FUN_0080af10();
  FUN_0080b160();
  FUN_0080b3b0();
  FUN_0080b600();
  FUN_0080b970();
  FUN_0080bcd0();
  FUN_0080bf20();
  FUN_0080c260();
  FUN_0059e4b0();
  FUN_0080c4b0();
  FUN_0080c830();
  FUN_0080c940();
  FUN_0080cba0();
  FUN_0080cdd0();
  FUN_0080d120();
  FUN_005b9a00();
  FUN_0080d340();
  FUN_0080d470();
  FUN_005b9fd0();
  FUN_0080d6b0();
  FUN_0080d930();
  FUN_0059e680();
  FUN_0080da70();
  FUN_0080dde0();
  FUN_0080df20();
  FUN_0080e2a0();
  FUN_0080e3e0();
  FUN_0080e5f0();
  FUN_0080e730();
  FUN_0080ea40();
  FUN_0080ec80();
  FUN_0080eed0();
  FUN_0080f1f0();
  FUN_0080f2b0();
  FUN_0080f5c0();
  FUN_0080f7e0();
  FUN_0080f970();
  FUN_0080fc00();
  FUN_0080ff30();
  FUN_00810180();
  FUN_008104a0();
  FUN_00810670();
  FUN_00810a20();
  FUN_00810cb0();
  FUN_00810ec0();
  FUN_00811090();
  FUN_008112f0();
  FUN_00811620();
  FUN_00811850();
  FUN_00811bb0();
  FUN_00811d70();
  FUN_00811e70();
  FUN_00812050();
  FUN_008122e0();
  FUN_008124f0();
  FUN_008126d0();
  FUN_008127f0();
  FUN_00812a80();
  FUN_00812d20();
  FUN_00812fc0();
  FUN_00813200();
  FUN_008134c0();
  FUN_008136b0();
  FUN_008139b0();
  FUN_00813ce0();
  FUN_00814030();
  FUN_00814350();
  FUN_008145a0();
  FUN_008147a0();
  FUN_008149f0();
  FUN_00814c30();
  FUN_00659000();
  FUN_00814f50();
  FUN_00815120();
  FUN_005efdc0();
  FUN_008152f0();
  FUN_00815470();
  FUN_00815540();
  FUN_0050a900();
  FUN_00815610();
  FUN_00815860();
  FUN_00815b40();
  FUN_00815c00();
  FUN_00815d70();
  FUN_008160f0();
  FUN_00816320();
  FUN_008164c0();
  FUN_00816710();
  FUN_00816960();
  FUN_00816c80();
  FUN_00816ee0();
  FUN_008171e0();
  FUN_00817380();
  FUN_00817690();
  FUN_00817820();
  return;
}



