// Reconstructed implementation of MDLayer
// From MikeCore binary — reverse-engineered pseudocode

#include "MDLayer.h"

// ============================================================
// @003b6a50 — 2057 bytes
// str: ""setState""
// str: ""setIsEditable""
// str: ""isEditable""
// str: ""setIsEnabled""
// str: ""setIsReference""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003b6a50(void)

{
  int iVar1;
  
  if (DAT_02808230 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705728 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02710218 = FUN_00d4fe50();
          _DAT_02710200 = "MDLayer";
          _DAT_02710208 = 0x38;
          _DAT_02710210 = FUN_003b7ed0;
          _DAT_02710220 = 0;
          uRam0000000002710228 = 0;
          _DAT_02710230 = 0;
          uRam0000000002710238 = 0;
          _DAT_02710240 = 0;
          uRam0000000002710248 = 0;
          _DAT_02710250 = 0;
          uRam0000000002710258 = 0;
          _DAT_02710260 = 0;
          uRam0000000002710268 = 0;
          _DAT_02710270 = 0;
          uRam0000000002710278 = 0;
          _DAT_02710280 = 0;
          uRam0000000002710288 = 0;
          _DAT_02710290 = 0;
          uRam0000000002710298 = 0;
          _DAT_027102a0 = 0;
          uRam00000000027102a8 = 0;
          _DAT_027102b0 = 0;
          uRam00000000027102b8 = 0;
          _DAT_027102c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028081f0 = "setState";
      _DAT_028081f8 = &DAT_02710200;
      _DAT_02808200 = 0;
      _DAT_02808208 = &DAT_02705730;
      _DAT_02808210 = FUN_003b7f20;
      _DAT_02808218 = FUN_003b7290;
      _DAT_02808220 = 0;
      uRam0000000002808228 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808278 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705728 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02710218 = FUN_00d4fe50();
          _DAT_02710200 = "MDLayer";
          _DAT_02710208 = 0x38;
          _DAT_02710210 = FUN_003b7ed0;
          _DAT_02710220 = 0;
          uRam0000000002710228 = 0;
          _DAT_02710230 = 0;
          uRam0000000002710238 = 0;
          _DAT_02710240 = 0;
          uRam0000000002710248 = 0;
          _DAT_02710250 = 0;
          uRam0000000002710258 = 0;
          _DAT_02710260 = 0;
          uRam0000000002710268 = 0;
          _DAT_02710270 = 0;
          uRam0000000002710278 = 0;
          _DAT_02710280 = 0;
          uRam0000000002710288 = 0;
          _DAT_02710290 = 0;
          uRam0000000002710298 = 0;
          _DAT_027102a0 = 0;
          uRam00000000027102a8 = 0;
          _DAT_027102b0 = 0;
          uRam00000000027102b8 = 0;
          _DAT_027102c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808238 = "setIsEditable";
      _DAT_02808240 = &DAT_02710200;
      _DAT_02808248 = 0;
      _DAT_02808250 = &DAT_02705733;
      _DAT_02808258 = FUN_003b7f40;
      _DAT_02808260 = FUN_003b72f0;
      _DAT_02808268 = 0;
      uRam0000000002808270 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028082c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705728 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02710218 = FUN_00d4fe50();
          _DAT_02710200 = "MDLayer";
          _DAT_02710208 = 0x38;
          _DAT_02710210 = FUN_003b7ed0;
          _DAT_02710220 = 0;
          uRam0000000002710228 = 0;
          _DAT_02710230 = 0;
          uRam0000000002710238 = 0;
          _DAT_02710240 = 0;
          uRam0000000002710248 = 0;
          _DAT_02710250 = 0;
          uRam0000000002710258 = 0;
          _DAT_02710260 = 0;
          uRam0000000002710268 = 0;
          _DAT_02710270 = 0;
          uRam0000000002710278 = 0;
          _DAT_02710280 = 0;
          uRam0000000002710288 = 0;
          _DAT_02710290 = 0;
          uRam0000000002710298 = 0;
          _DAT_027102a0 = 0;
          uRam00000000027102a8 = 0;
          _DAT_027102b0 = 0;
          uRam00000000027102b8 = 0;
          _DAT_027102c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808280 = "isEditable";
      _DAT_02808288 = &DAT_02710200;
      _DAT_02808290 = 0;
      _DAT_02808298 = &DAT_02705736;
      _DAT_028082a0 = FUN_003b7f60;
      _DAT_028082a8 = FUN_003b7710;
      _DAT_028082b0 = 0;
      uRam00000000028082b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808308 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705728 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02710218 = FUN_00d4fe50();
          _DAT_02710200 = "MDLayer";
          _DAT_02710208 = 0x38;
          _DAT_02710210 = FUN_003b7ed0;
          _DAT_02710220 = 0;
          uRam0000000002710228 = 0;
          _DAT_02710230 = 0;
          uRam0000000002710238 = 0;
          _DAT_02710240 = 0;
          uRam0000000002710248 = 0;
          _DAT_02710250 = 0;
          uRam0000000002710258 = 0;
          _DAT_02710260 = 0;
          uRam0000000002710268 = 0;
          _DAT_02710270 = 0;
          uRam0000000002710278 = 0;
          _DAT_02710280 = 0;
          uRam0000000002710288 = 0;
          _DAT_02710290 = 0;
          uRam0000000002710298 = 0;
          _DAT_027102a0 = 0;
          uRam00000000027102a8 = 0;
          _DAT_027102b0 = 0;
          uRam00000000027102b8 = 0;
          _DAT_027102c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028082c8 = "setIsEnabled";
      _DAT_028082d0 = &DAT_02710200;
      _DAT_028082d8 = 0;
      _DAT_028082e0 = &DAT_02705733;
      _DAT_028082e8 = FUN_003b7f40;
      _DAT_028082f0 = FUN_003b7720;
      _DAT_028082f8 = 0;
      uRam0000000002808300 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808350 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705728 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02710218 = FUN_00d4fe50();
          _DAT_02710200 = "MDLayer";
          _DAT_02710208 = 0x38;
          _DAT_02710210 = FUN_003b7ed0;
          _DAT_02710220 = 0;
          uRam0000000002710228 = 0;
          _DAT_02710230 = 0;
          uRam0000000002710238 = 0;
          _DAT_02710240 = 0;
          uRam0000000002710248 = 0;
          _DAT_02710250 = 0;
          uRam0000000002710258 = 0;
          _DAT_02710260 = 0;
          uRam0000000002710268 = 0;
          _DAT_02710270 = 0;
          uRam0000000002710278 = 0;
          _DAT_02710280 = 0;
          uRam0000000002710288 = 0;
          _DAT_02710290 = 0;
          uRam0000000002710298 = 0;
          _DAT_027102a0 = 0;
          uRam00000000027102a8 = 0;
          _DAT_027102b0 = 0;
          uRam00000000027102b8 = 0;
          _DAT_027102c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808310 = "setIsReference";
      _DAT_02808318 = &DAT_02710200;
      _DAT_02808320 = 0;
      _DAT_02808328 = &DAT_02705733;
      _DAT_02808330 = FUN_003b7f40;
      _DAT_02808338 = FUN_003b7740;
      _DAT_02808340 = 0;
      uRam0000000002808348 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808398 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705728 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02710218 = FUN_00d4fe50();
          _DAT_02710200 = "MDLayer";
          _DAT_02710208 = 0x38;
          _DAT_02710210 = FUN_003b7ed0;
          _DAT_02710220 = 0;
          uRam0000000002710228 = 0;
          _DAT_02710230 = 0;
          uRam0000000002710238 = 0;
          _DAT_02710240 = 0;
          uRam0000000002710248 = 0;
          _DAT_02710250 = 0;
          uRam0000000002710258 = 0;
          _DAT_02710260 = 0;
          uRam0000000002710268 = 0;
          _DAT_02710270 = 0;
          uRam0000000002710278 = 0;
          _DAT_02710280 = 0;
          uRam0000000002710288 = 0;
          _DAT_02710290 = 0;
          uRam0000000002710298 = 0;
          _DAT_027102a0 = 0;
          uRam00000000027102a8 = 0;
          _DAT_027102b0 = 0;
          uRam00000000027102b8 = 0;
          _DAT_027102c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808358 = "isReference";
      _DAT_02808360 = &DAT_02710200;
      _DAT_02808368 = 0;
      _DAT_02808370 = &DAT_02705736;
      _DAT_02808378 = FUN_003b7f60;
      _DAT_02808380 = FUN_003b7780;
      _DAT_02808388 = 0;
      uRam0000000002808390 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @003b8010 — 1743 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x003b861f) */
/* WARNING: Removing unreachable block (ram,0x003b862b) */

void FUN_003b8010(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong local_40;
  char local_38;
  
  fVar9 = (float)((ulonglong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  if ((DAT_028083b0 == 0) || (DAT_028083b9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028083b0 == 0) {
      FUN_01cfcdc0();
      lVar4 = DAT_028083b0;
      if (DAT_028083b0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = DAT_028083b0 != 0;
        DAT_028083b0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (DAT_028083b8 == '\0')) {
        DAT_028083b8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0();
      lVar4 = DAT_028083a0;
      if (DAT_028083a0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = DAT_028083a0 != 0;
        DAT_028083a0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (DAT_028083a8 == '\0')) {
        DAT_028083a8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0();
      lVar4 = DAT_028083d0;
      if (DAT_028083d0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = DAT_028083d0 != 0;
        DAT_028083d0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (DAT_028083d8 == '\0')) {
        DAT_028083d8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      fVar6 = 0.0;
      fVar9 = 0.0;
      FUN_01cfcdc0();
      lVar4 = DAT_028083c0;
      if (DAT_028083c0 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = DAT_028083c0 != 0;
        DAT_028083c0 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (DAT_028083c8 == '\0')) {
        DAT_028083c8 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      DAT_028083b9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028083b9 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01e3f820();
  lVar2 = DAT_028083c0;
  lVar4 = DAT_028083b0;
  fVar6 = fVar6 * DAT_0239011c;
  fVar7 = fVar6 + DAT_023b1d84;
  fVar9 = fVar9 * DAT_0239011c + extraout_XMM0_Db + DAT_02390d00;
  if (*(float *)(unaff_RDI + 0x220) <= DAT_023b3888) {
    fVar8 = *(float *)(unaff_RDI + 0x224);
    if ((fVar8 < DAT_0239428c) || (*(char *)(unaff_RDI + 0x228) != '\0')) {
      if (DAT_028083b0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      goto LAB_003b8446;
    }
  }
  else {
    if (DAT_028083c0 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
LAB_003b8446:
    FUN_01d48b40();
    auVar5._4_4_ = extraout_XMM0_Db;
    auVar5._0_4_ = extraout_XMM0_Da + fVar6;
    auVar5._8_4_ = extraout_XMM0_Dc;
    auVar5._12_4_ = extraout_XMM0_Dd;
    auVar5 = insertps(auVar5,fVar9,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c8))(auVar5._0_8_,fVar7);
    fVar8 = *(float *)(unaff_RDI + 0x224);
  }
  lVar2 = DAT_028083d0;
  lVar4 = DAT_028083a0;
  if (fVar8 <= 0.0) {
    if (*(char *)(unaff_RDI + 0x228) == '\0') {
      if (DAT_028083a0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      FUN_01d48b40();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      return;
    }
  }
  else if ((DAT_0239428c < fVar8) && (*(char *)(unaff_RDI + 0x228) == '\0')) {
    if (DAT_028083d0 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    goto LAB_003b8555;
  }
  if (DAT_028083a0 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_003b8555:
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
  (*DAT_02680418)();
  FUN_01d39400();
  FUN_01d39310();
  FUN_01d38ba0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  FUN_00d50b20();
  return;
}




// ============================================================
// @0057b530 — 955 bytes
// str: ""MDLayer""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057b530(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_024f1ec0;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  if (DAT_02705728 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02710218 = FUN_00d4fe50();
      _DAT_02710200 = "MDLayer";
      _DAT_02710208 = 0x38;
      _DAT_02710210 = FUN_003b7ed0;
      _DAT_02710220 = 0;
      uRam0000000002710228 = 0;
      _DAT_02710230 = 0;
      uRam0000000002710238 = 0;
      _DAT_02710240 = 0;
      uRam0000000002710248 = 0;
      _DAT_02710250 = 0;
      uRam0000000002710258 = 0;
      _DAT_02710260 = 0;
      uRam0000000002710268 = 0;
      _DAT_02710270 = 0;
      uRam0000000002710278 = 0;
      _DAT_02710280 = 0;
      uRam0000000002710288 = 0;
      _DAT_02710290 = 0;
      uRam0000000002710298 = 0;
      _DAT_027102a0 = 0;
      uRam00000000027102a8 = 0;
      _DAT_027102b0 = 0;
      _uRam00000000027102b8 = 0;
      _DAT_027102c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027102bb == '\0') {
    FUN_0057b970();
    FUN_00e87980();
  }
  FUN_0057bbb0();
  *(undefined1 *)(unaff_RDI + 3) = 0;
  if (DAT_02705728 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02710218 = FUN_00d4fe50();
      _DAT_02710200 = "MDLayer";
      _DAT_02710208 = 0x38;
      _DAT_02710210 = FUN_003b7ed0;
      _DAT_02710220 = 0;
      uRam0000000002710228 = 0;
      _DAT_02710230 = 0;
      uRam0000000002710238 = 0;
      _DAT_02710240 = 0;
      uRam0000000002710248 = 0;
      _DAT_02710250 = 0;
      uRam0000000002710258 = 0;
      _DAT_02710260 = 0;
      uRam0000000002710268 = 0;
      _DAT_02710270 = 0;
      uRam0000000002710278 = 0;
      _DAT_02710280 = 0;
      uRam0000000002710288 = 0;
      _DAT_02710290 = 0;
      uRam0000000002710298 = 0;
      _DAT_027102a0 = 0;
      uRam00000000027102a8 = 0;
      _DAT_027102b0 = 0;
      _uRam00000000027102b8 = 0;
      _DAT_027102c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027102bb == '\0') {
    FUN_0057be30();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x19) = 0;
  if (DAT_02705728 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02710218 = FUN_00d4fe50();
      _DAT_02710200 = "MDLayer";
      _DAT_02710208 = 0x38;
      _DAT_02710210 = FUN_003b7ed0;
      _DAT_02710220 = 0;
      uRam0000000002710228 = 0;
      _DAT_02710230 = 0;
      uRam0000000002710238 = 0;
      _DAT_02710240 = 0;
      uRam0000000002710248 = 0;
      _DAT_02710250 = 0;
      uRam0000000002710258 = 0;
      _DAT_02710260 = 0;
      uRam0000000002710268 = 0;
      _DAT_02710270 = 0;
      uRam0000000002710278 = 0;
      _DAT_02710280 = 0;
      uRam0000000002710288 = 0;
      _DAT_02710290 = 0;
      uRam0000000002710298 = 0;
      _DAT_027102a0 = 0;
      uRam00000000027102a8 = 0;
      _DAT_027102b0 = 0;
      _uRam00000000027102b8 = 0;
      _DAT_027102c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027102bb == '\0') {
    FUN_0057bfa0();
    FUN_00e87980();
  }
  FUN_0057c110();
  FUN_0057c3f0();
  *(undefined4 *)(unaff_RDI + 6) = 0;
  if (DAT_02705728 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02710218 = FUN_00d4fe50();
      _DAT_02710200 = "MDLayer";
      _DAT_02710208 = 0x38;
      _DAT_02710210 = FUN_003b7ed0;
      _DAT_02710220 = 0;
      uRam0000000002710228 = 0;
      _DAT_02710230 = 0;
      uRam0000000002710238 = 0;
      _DAT_02710240 = 0;
      uRam0000000002710248 = 0;
      _DAT_02710250 = 0;
      uRam0000000002710258 = 0;
      _DAT_02710260 = 0;
      uRam0000000002710268 = 0;
      _DAT_02710270 = 0;
      uRam0000000002710278 = 0;
      _DAT_02710280 = 0;
      uRam0000000002710288 = 0;
      _DAT_02710290 = 0;
      uRam0000000002710298 = 0;
      _DAT_027102a0 = 0;
      uRam00000000027102a8 = 0;
      _DAT_027102b0 = 0;
      _uRam00000000027102b8 = 0;
      _DAT_027102c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027102bb == '\0') {
    FUN_0057c6e0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @003b72f0 — 722 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x003b74a9) */
/* WARNING: Removing unreachable block (ram,0x003b74b6) */
/* WARNING: Removing unreachable block (ram,0x003b73a7) */
/* WARNING: Removing unreachable block (ram,0x003b73b0) */
/* WARNING: Removing unreachable block (ram,0x003b73ce) */
/* WARNING: Removing unreachable block (ram,0x003b73d7) */
/* WARNING: Removing unreachable block (ram,0x003b741b) */
/* WARNING: Removing unreachable block (ram,0x003b7419) */
/* WARNING: Removing unreachable block (ram,0x003b7460) */
/* WARNING: Removing unreachable block (ram,0x003b7463) */
/* WARNING: Removing unreachable block (ram,0x003b7529) */
/* WARNING: Removing unreachable block (ram,0x003b7550) */
/* WARNING: Removing unreachable block (ram,0x003b752b) */
/* WARNING: Removing unreachable block (ram,0x003b7554) */

void FUN_003b72f0(void)

{
  longlong lVar1;
  char unaff_SIL;
  longlong unaff_RDI;
  int iVar2;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  if ((*(int *)(unaff_RDI + 0xc) == 2) == (bool)unaff_SIL) {
    return;
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  FUN_004b5af0();
  FUN_003b79f0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_004b5af0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_003b74dd;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_003b74dd;
  iVar2 = -1;
  while (iVar2 + 1 < *(int *)(local_58 + 0xc)) {
    iVar2 = iVar2 + 1;
    if (*(int *)(*(longlong *)(*(longlong *)(local_58 + 0x10) + (longlong)iVar2 * 8) + 0xc) == 2) {
      FUN_00d21140();
    }
  }
  FUN_00274d30();
  FUN_00d50b20();
LAB_003b74dd:
  if (unaff_SIL == '\0') {
    if (*(int *)(unaff_RDI + 0xc) != 0) {
      *(undefined4 *)(unaff_RDI + 0xc) = 0;
      FUN_003b77b0();
    }
  }
  else {
    if ((lVar1 != 0) && (local_58 != 0)) {
      local_40 = -1;
      while( true ) {
        lVar1 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(local_58 + 0xc) <= local_40) break;
        lVar1 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar1 * 8);
        if (*(int *)(lVar1 + 0xc) != *(int *)(unaff_RDI + 0xc)) {
          *(int *)(lVar1 + 0xc) = *(int *)(unaff_RDI + 0xc);
          FUN_003b77b0();
        }
      }
      FUN_00274d30();
    }
    if (*(int *)(unaff_RDI + 0xc) != 2) {
      *(undefined4 *)(unaff_RDI + 0xc) = 2;
      FUN_003b77b0();
    }
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0057b970 — 532 bytes
// str: ""_state""
// str: ""MDLayer""
// str: ""MDLayerState""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0057b970(void)

{
  int iVar1;
  
  if (DAT_02710350 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02710340 = 0x100000000;
      _DAT_02710348 = 2;
      DAT_0271034c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_02710388 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02710358 = "MDLayerState";
      _DAT_02710360 = 3;
      DAT_02710364 = DAT_0271034c;
      _DAT_02710368 = &DAT_02710340;
      _DAT_02710370 = &DAT_02710320;
      _DAT_02710378 = 0;
      uRam0000000002710380 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_02710310 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02705728 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02710218 = FUN_00d4fe50();
          _DAT_02710200 = "MDLayer";
          _DAT_02710208 = 0x38;
          _DAT_02710210 = FUN_003b7ed0;
          _DAT_02710220 = 0;
          uRam0000000002710228 = 0;
          _DAT_02710230 = 0;
          uRam0000000002710238 = 0;
          _DAT_02710240 = 0;
          uRam0000000002710248 = 0;
          _DAT_02710250 = 0;
          uRam0000000002710258 = 0;
          _DAT_02710260 = 0;
          uRam0000000002710268 = 0;
          _DAT_02710270 = 0;
          uRam0000000002710278 = 0;
          _DAT_02710280 = 0;
          uRam0000000002710288 = 0;
          _DAT_02710290 = 0;
          uRam0000000002710298 = 0;
          _DAT_027102a0 = 0;
          uRam00000000027102a8 = 0;
          _DAT_027102b0 = 0;
          uRam00000000027102b8 = 0;
          _DAT_027102c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027102d0 = "_state";
      _DAT_027102d8 = &DAT_02710200;
      _DAT_027102e0 = 0;
      _DAT_027102e8 = 0x6500;
      _DAT_027102f0 = "MDLayerState";
      _DAT_027102f8 = &DAT_02710358;
      _DAT_02710300 = 0;
      uRam0000000002710308 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027102d0;
}



