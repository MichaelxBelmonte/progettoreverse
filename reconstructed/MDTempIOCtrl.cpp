// Reconstructed implementation of MDTempIOCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDTempIOCtrl.h"

// ============================================================
// @006e7e30 — 1316 bytes
// ============================================================

void FUN_006e7e30(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_30;
  char local_28;
  
  FUN_00d50100();
  FUN_00d403d0();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6d00;
  if (DAT_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar1;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_00d41430(&local_110,&local_120);
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027062b8;
  if (DAT_027062b8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6d00;
  local_100 = lVar1;
  local_f8 = '\x01';
  if (DAT_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar2;
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_000bf690(&local_f0,&local_100,&local_e0);
  lVar1 = *(longlong *)(unaff_RDI + 0xa0);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_006e7fc3;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0xa0);
      *(longlong *)(unaff_RDI + 0xa0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_006e7fc3:
      *(longlong *)(unaff_RDI + 0xa0) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_d0 = DAT_02709de0;
  if (DAT_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6cf0;
  local_c8 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf690(&local_c0,&local_d0,&local_b0);
  lVar1 = *(longlong *)(unaff_RDI + 0xa8);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_006e8126;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0xa8);
      *(longlong *)(unaff_RDI + 0xa8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_006e8126:
      *(longlong *)(unaff_RDI + 0xa8) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_a0 = DAT_02727670;
  if (DAT_02727670 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027294a0;
  local_98 = '\x01';
  if (DAT_027294a0 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_000bf690(&local_90,&local_a0,&local_80);
  lVar1 = *(longlong *)(unaff_RDI + 0xb0);
  lVar2 = lVar1;
  if (lVar1 == local_30) goto LAB_006e82c8;
  lVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar2 = 0;
      goto LAB_006e827d;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0xb0);
    *(longlong *)(unaff_RDI + 0xb0) = local_30;
  }
  else {
    local_28 = '\0';
LAB_006e827d:
    *(longlong *)(unaff_RDI + 0xb0) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_30;
  }
LAB_006e82c8:
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @006e8b70 — 1175 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e8b70(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  double dVar6;
  undefined8 uVar7;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar2 = DAT_026e1800;
  if (DAT_026e1800 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00e7d6f0();
  uVar5 = (ulonglong)(dVar6 * DAT_023907c0);
  dVar6 = dVar6 * DAT_023907c0 - _DAT_023907c8;
  uVar7 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar7 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  bVar4 = (byte)(((longlong)dVar6 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
  local_90 = lVar2;
  local_88 = '\0';
  FUN_000175c0(uVar7,&local_90);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_38 = '\0';
    local_40 = lVar3;
    bVar4 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((lVar3 != 0 & bVar4) == 0) {
    if (*(longlong *)(unaff_RDI + 0x88) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x478))();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x98) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x478))();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      if (*(longlong *)(unaff_RDI + 0x80) != 0) {
        FUN_01e40eb0();
        lVar2 = local_40;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 == 0) {
          plVar1 = *(longlong **)(unaff_RDI + 0x10);
          lVar2 = *(longlong *)(unaff_RDI + 0x80);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_58 = '\x01';
          local_60 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((*(longlong *)(unaff_RDI + 0x10) != 0) && (*(longlong *)(unaff_RDI + 0x90) != 0)) {
        FUN_01e40eb0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          plVar1 = *(longlong **)(unaff_RDI + 0x10);
          lVar2 = *(longlong *)(unaff_RDI + 0x90);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_48 = '\x01';
          local_50 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else {
    if (*(longlong *)(unaff_RDI + 0x80) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x478))();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x90) != 0) {
      FUN_01e40eb0();
      lVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x478))();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      if (*(longlong *)(unaff_RDI + 0x88) != 0) {
        FUN_01e40eb0();
        lVar2 = local_40;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 == 0) {
          plVar1 = *(longlong **)(unaff_RDI + 0x10);
          lVar2 = *(longlong *)(unaff_RDI + 0x88);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_78 = '\x01';
          local_80 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((*(longlong *)(unaff_RDI + 0x10) != 0) && (*(longlong *)(unaff_RDI + 0x98) != 0)) {
        FUN_01e40eb0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          plVar1 = *(longlong **)(unaff_RDI + 0x10);
          lVar2 = *(longlong *)(unaff_RDI + 0x98);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_68 = '\x01';
          local_70 = lVar2;
          (**(code **)(*plVar1 + 0x450))();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  return;
}




// ============================================================
// @006e79b0 — 1110 bytes
// str: ""handleFeatureSetChanged""
// str: ""handleSelectedDocumentChanged""
// str: ""MDTempIOCtrl""
// str: ""handleAudioDeviceDidChange""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e79b0(void)

{
  int iVar1;
  
  if (DAT_0280be70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02722db0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02722d00 = FUN_00015ff0();
          _DAT_02722ce8 = "MDTempIOCtrl";
          _DAT_02722cf0 = 0xb8;
          _DAT_02722cf8 = FUN_005fc0e0;
          _DAT_02722d08 = 0;
          uRam0000000002722d10 = 0;
          _DAT_02722d18 = 0;
          _DAT_02722d90 = 0;
          uRam0000000002722d98 = 0;
          _DAT_02722da0 = 0;
          DAT_02722da2 = 1;
          _DAT_02722d20 = 0;
          uRam0000000002722d28 = 0;
          _DAT_02722d30 = 0;
          uRam0000000002722d38 = 0;
          _DAT_02722d40 = 0;
          uRam0000000002722d48 = 0;
          _DAT_02722d50 = 0;
          uRam0000000002722d58 = 0;
          _DAT_02722d60 = 0;
          uRam0000000002722d68 = 0;
          _DAT_02722d70 = 0;
          uRam0000000002722d78 = 0;
          _DAT_02722d80 = 0;
          uRam0000000002722d88 = 0;
          DAT_02722dab = 0;
          _DAT_02722da3 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280be30 = "handleAudioDeviceDidChange";
      _DAT_0280be38 = &DAT_02722ce8;
      _DAT_0280be40 = 0;
      _DAT_0280be48 = &DAT_02727678;
      _DAT_0280be50 = FUN_006e9800;
      _DAT_0280be58 = FUN_006e8790;
      _DAT_0280be60 = 0;
      uRam000000000280be68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280beb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02722db0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02722d00 = FUN_00015ff0();
          _DAT_02722ce8 = "MDTempIOCtrl";
          _DAT_02722cf0 = 0xb8;
          _DAT_02722cf8 = FUN_005fc0e0;
          _DAT_02722d08 = 0;
          uRam0000000002722d10 = 0;
          _DAT_02722d18 = 0;
          _DAT_02722d90 = 0;
          uRam0000000002722d98 = 0;
          _DAT_02722da0 = 0;
          DAT_02722da2 = 1;
          _DAT_02722d20 = 0;
          uRam0000000002722d28 = 0;
          _DAT_02722d30 = 0;
          uRam0000000002722d38 = 0;
          _DAT_02722d40 = 0;
          uRam0000000002722d48 = 0;
          _DAT_02722d50 = 0;
          uRam0000000002722d58 = 0;
          _DAT_02722d60 = 0;
          uRam0000000002722d68 = 0;
          _DAT_02722d70 = 0;
          uRam0000000002722d78 = 0;
          _DAT_02722d80 = 0;
          uRam0000000002722d88 = 0;
          DAT_02722dab = 0;
          _DAT_02722da3 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280be78 = "handleFeatureSetChanged";
      _DAT_0280be80 = &DAT_02722ce8;
      _DAT_0280be88 = 0;
      _DAT_0280be90 = &DAT_02727678;
      _DAT_0280be98 = FUN_006e9800;
      _DAT_0280bea0 = FUN_006e8b70;
      _DAT_0280bea8 = 0;
      uRam000000000280beb0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bf00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02722db0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02722d00 = FUN_00015ff0();
          _DAT_02722ce8 = "MDTempIOCtrl";
          _DAT_02722cf0 = 0xb8;
          _DAT_02722cf8 = FUN_005fc0e0;
          _DAT_02722d08 = 0;
          uRam0000000002722d10 = 0;
          _DAT_02722d18 = 0;
          _DAT_02722d90 = 0;
          uRam0000000002722d98 = 0;
          _DAT_02722da0 = 0;
          DAT_02722da2 = 1;
          _DAT_02722d20 = 0;
          uRam0000000002722d28 = 0;
          _DAT_02722d30 = 0;
          uRam0000000002722d38 = 0;
          _DAT_02722d40 = 0;
          uRam0000000002722d48 = 0;
          _DAT_02722d50 = 0;
          uRam0000000002722d58 = 0;
          _DAT_02722d60 = 0;
          uRam0000000002722d68 = 0;
          _DAT_02722d70 = 0;
          uRam0000000002722d78 = 0;
          _DAT_02722d80 = 0;
          uRam0000000002722d88 = 0;
          DAT_02722dab = 0;
          _DAT_02722da3 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bec0 = "handleSelectedDocumentChanged";
      _DAT_0280bec8 = &DAT_02722ce8;
      _DAT_0280bed0 = 0;
      _DAT_0280bed8 = &DAT_02727678;
      _DAT_0280bee0 = FUN_006e9800;
      _DAT_0280bee8 = FUN_006e9230;
      _DAT_0280bef0 = 0;
      uRam000000000280bef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @006e5db0 — 528 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_006e5db0(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  double dVar5;
  undefined8 uVar6;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar1 = DAT_026de5d8;
  if (DAT_026de5d8 != 0) {
    FUN_00d50b00();
  }
  dVar5 = (double)FUN_00e7d6f0();
  uVar4 = (ulonglong)(dVar5 * DAT_023907c0);
  dVar5 = dVar5 * DAT_023907c0 - _DAT_023907c8;
  uVar6 = FUN_0071a120();
  if ((local_30 == '\0') && (local_38 != 0)) {
    uVar6 = FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  bVar3 = (byte)(((longlong)dVar5 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
  local_48 = lVar1;
  local_40 = '\0';
  FUN_000175c0(uVar6,&local_48);
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_30 = '\0';
    local_38 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0 & bVar3) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00d6f370();
    lVar1 = DAT_02727648;
    if (DAT_02727648 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    local_58 = 0;
    local_50 = '\0';
    FUN_00d704d0(&local_58,&local_68);
    uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),local_38 == 0);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return uVar4 & 0xffffffff;
}




// ============================================================
// @006e5a00 — 528 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_006e5a00(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  double dVar5;
  undefined8 uVar6;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar1 = DAT_026de5d8;
  if (DAT_026de5d8 != 0) {
    FUN_00d50b00();
  }
  dVar5 = (double)FUN_00e7d6f0();
  uVar4 = (ulonglong)(dVar5 * DAT_023907c0);
  dVar5 = dVar5 * DAT_023907c0 - _DAT_023907c8;
  uVar6 = FUN_0071a120();
  if ((local_30 == '\0') && (local_38 != 0)) {
    uVar6 = FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  bVar3 = (byte)(((longlong)dVar5 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
  local_48 = lVar1;
  local_40 = '\0';
  FUN_000175c0(uVar6,&local_48);
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_30 = '\0';
    local_38 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0 & bVar3) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00d6f370();
    lVar1 = DAT_02727640;
    if (DAT_02727640 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    local_58 = 0;
    local_50 = '\0';
    FUN_00d704d0(&local_58,&local_68);
    uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),local_38 == 0);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return uVar4 & 0xffffffff;
}




// ============================================================
// @006e87c0 — 515 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x006e896a) */
/* WARNING: Removing unreachable block (ram,0x006e8973) */
/* WARNING: Removing unreachable block (ram,0x006e8998) */
/* WARNING: Removing unreachable block (ram,0x006e89a1) */
/* WARNING: Removing unreachable block (ram,0x006e8900) */
/* WARNING: Removing unreachable block (ram,0x006e8909) */

void FUN_006e87c0(pthread_key_t param_1)

{
  void *pvVar1;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  bool bVar2;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x5d8))();
  if (local_30 == 0) {
    bVar2 = false;
  }
  else {
    (**(code **)(*(longlong *)*unaff_RSI + 0x5d8))();
    FUN_006f3f00();
    bVar2 = local_50 != 0;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x5d8))();
    FUN_006f3f00();
    FUN_00757c60();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_30 == 0) {
      bVar2 = false;
    }
    else if (local_28 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar2 = false;
    local_30 = 0;
  }
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    FUN_004501b0();
  }
  if (*(longlong *)(unaff_RDI + 0x78) != 0) {
    FUN_004501b0();
  }
  if ((bVar2) && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}



