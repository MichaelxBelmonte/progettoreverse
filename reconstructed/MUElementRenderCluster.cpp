// Reconstructed implementation of MUElementRenderCluster
// From MikeCore binary — reverse-engineered pseudocode

#include "MUElementRenderCluster.h"

// ============================================================
// @010d7110 — 533 bytes
// str: ""MUElementRenderCluster""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010d7110(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_1f0;
  undefined8 *local_28;
  
  if (DAT_0279dd70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0279dcc0 = FUN_0006e1c0();
      _DAT_0279dca8 = "MUElementRenderCluster";
      _DAT_0279dcb0 = 0x1c8;
      _DAT_0279dcb8 = FUN_011487e0;
      _DAT_0279dcc8 = 0;
      uRam000000000279dcd0 = 0;
      _DAT_0279dcd8 = 0;
      uRam000000000279dce0 = 0;
      _DAT_0279dce8 = 0;
      uRam000000000279dcf0 = 0;
      _DAT_0279dcf8 = 0;
      uRam000000000279dd00 = 0;
      _DAT_0279dd08 = 0;
      uRam000000000279dd10 = 0;
      _DAT_0279dd18 = 0;
      uRam000000000279dd20 = 0;
      _DAT_0279dd28 = 0;
      uRam000000000279dd30 = 0;
      _DAT_0279dd38 = 0;
      uRam000000000279dd40 = 0;
      _DAT_0279dd48 = 0;
      uRam000000000279dd50 = 0;
      _DAT_0279dd58 = 0;
      _uRam000000000279dd60 = 0;
      _DAT_0279dd68 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0279dd63 == '\0') {
    FUN_010d68a0();
    FUN_00e87760();
    FUN_0006e3a0();
    local_28 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_28 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_01135410();
    FUN_01148a90();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_1f0 != 0) {
      FUN_00d50b20();
    }
    FUN_01139260();
    if (local_28 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_01139260();
  }
  return;
}



