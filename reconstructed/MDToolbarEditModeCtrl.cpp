// Reconstructed implementation of MDToolbarEditModeCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDToolbarEditModeCtrl.h"

// ============================================================
// @0045e210 — 1709 bytes
// str: ""MDToolbarEditModeCtrl""
// str: ""onSomethingChanged""
// str: ""onDetecionStateChanged""
// str: ""handleNAClicked""
// str: ""handleEditClicked""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045e210(void)

{
  int iVar1;
  
  if (DAT_02808888 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026db908 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026db858 = FUN_00015ff0();
          _DAT_026db840 = "MDToolbarEditModeCtrl";
          _DAT_026db848 = 0xa0;
          _DAT_026db850 = FUN_000ad700;
          _DAT_026db860 = 0;
          uRam00000000026db868 = 0;
          _DAT_026db870 = 0;
          uRam00000000026db878 = 0;
          _DAT_026db880 = 0;
          uRam00000000026db888 = 0;
          _DAT_026db890 = 0;
          uRam00000000026db898 = 0;
          _DAT_026db8a0 = 0;
          uRam00000000026db8a8 = 0;
          _DAT_026db8b0 = 0;
          uRam00000000026db8b8 = 0;
          _DAT_026db8c0 = 0;
          uRam00000000026db8c8 = 0;
          _DAT_026db8d0 = 0;
          uRam00000000026db8d8 = 0;
          _DAT_026db8e0 = 0;
          uRam00000000026db8e8 = 0;
          _DAT_026db8f0 = 0;
          uRam00000000026db8f8 = 0;
          _DAT_026db900 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808848 = "handleNAClicked";
      _DAT_02808850 = &DAT_026db840;
      _DAT_02808858 = 0;
      _DAT_02808860 = &DAT_02706198;
      _DAT_02808868 = FUN_00461200;
      _DAT_02808870 = 0x5c1;
      _DAT_02808878 = 0;
      uRam0000000002808880 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028088d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026db908 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026db858 = FUN_00015ff0();
          _DAT_026db840 = "MDToolbarEditModeCtrl";
          _DAT_026db848 = 0xa0;
          _DAT_026db850 = FUN_000ad700;
          _DAT_026db860 = 0;
          uRam00000000026db868 = 0;
          _DAT_026db870 = 0;
          uRam00000000026db878 = 0;
          _DAT_026db880 = 0;
          uRam00000000026db888 = 0;
          _DAT_026db890 = 0;
          uRam00000000026db898 = 0;
          _DAT_026db8a0 = 0;
          uRam00000000026db8a8 = 0;
          _DAT_026db8b0 = 0;
          uRam00000000026db8b8 = 0;
          _DAT_026db8c0 = 0;
          uRam00000000026db8c8 = 0;
          _DAT_026db8d0 = 0;
          uRam00000000026db8d8 = 0;
          _DAT_026db8e0 = 0;
          uRam00000000026db8e8 = 0;
          _DAT_026db8f0 = 0;
          uRam00000000026db8f8 = 0;
          _DAT_026db900 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808890 = "handleEditClicked";
      _DAT_02808898 = &DAT_026db840;
      _DAT_028088a0 = 0;
      _DAT_028088a8 = &DAT_02706198;
      _DAT_028088b0 = FUN_00461200;
      _DAT_028088b8 = FUN_00460150;
      _DAT_028088c0 = 0;
      uRam00000000028088c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808918 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026db908 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026db858 = FUN_00015ff0();
          _DAT_026db840 = "MDToolbarEditModeCtrl";
          _DAT_026db848 = 0xa0;
          _DAT_026db850 = FUN_000ad700;
          _DAT_026db860 = 0;
          uRam00000000026db868 = 0;
          _DAT_026db870 = 0;
          uRam00000000026db878 = 0;
          _DAT_026db880 = 0;
          uRam00000000026db888 = 0;
          _DAT_026db890 = 0;
          uRam00000000026db898 = 0;
          _DAT_026db8a0 = 0;
          uRam00000000026db8a8 = 0;
          _DAT_026db8b0 = 0;
          uRam00000000026db8b8 = 0;
          _DAT_026db8c0 = 0;
          uRam00000000026db8c8 = 0;
          _DAT_026db8d0 = 0;
          uRam00000000026db8d8 = 0;
          _DAT_026db8e0 = 0;
          uRam00000000026db8e8 = 0;
          _DAT_026db8f0 = 0;
          uRam00000000026db8f8 = 0;
          _DAT_026db900 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028088d8 = "onSomethingChanged";
      _DAT_028088e0 = &DAT_026db840;
      _DAT_028088e8 = 0;
      _DAT_028088f0 = &DAT_0270619c;
      _DAT_028088f8 = FUN_00461290;
      _DAT_02808900 = FUN_0045ea20;
      _DAT_02808908 = 0;
      uRam0000000002808910 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808960 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026db908 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026db858 = FUN_00015ff0();
          _DAT_026db840 = "MDToolbarEditModeCtrl";
          _DAT_026db848 = 0xa0;
          _DAT_026db850 = FUN_000ad700;
          _DAT_026db860 = 0;
          uRam00000000026db868 = 0;
          _DAT_026db870 = 0;
          uRam00000000026db878 = 0;
          _DAT_026db880 = 0;
          uRam00000000026db888 = 0;
          _DAT_026db890 = 0;
          uRam00000000026db898 = 0;
          _DAT_026db8a0 = 0;
          uRam00000000026db8a8 = 0;
          _DAT_026db8b0 = 0;
          uRam00000000026db8b8 = 0;
          _DAT_026db8c0 = 0;
          uRam00000000026db8c8 = 0;
          _DAT_026db8d0 = 0;
          uRam00000000026db8d8 = 0;
          _DAT_026db8e0 = 0;
          uRam00000000026db8e8 = 0;
          _DAT_026db8f0 = 0;
          uRam00000000026db8f8 = 0;
          _DAT_026db900 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808920 = "onDetecionStateChanged";
      _DAT_02808928 = &DAT_026db840;
      _DAT_02808930 = 0;
      _DAT_02808938 = &DAT_0270619c;
      _DAT_02808940 = FUN_00461290;
      _DAT_02808948 = FUN_0045e900;
      _DAT_02808950 = 0;
      uRam0000000002808958 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028089a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026db908 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026db858 = FUN_00015ff0();
          _DAT_026db840 = "MDToolbarEditModeCtrl";
          _DAT_026db848 = 0xa0;
          _DAT_026db850 = FUN_000ad700;
          _DAT_026db860 = 0;
          uRam00000000026db868 = 0;
          _DAT_026db870 = 0;
          uRam00000000026db878 = 0;
          _DAT_026db880 = 0;
          uRam00000000026db888 = 0;
          _DAT_026db890 = 0;
          uRam00000000026db898 = 0;
          _DAT_026db8a0 = 0;
          uRam00000000026db8a8 = 0;
          _DAT_026db8b0 = 0;
          uRam00000000026db8b8 = 0;
          _DAT_026db8c0 = 0;
          uRam00000000026db8c8 = 0;
          _DAT_026db8d0 = 0;
          uRam00000000026db8d8 = 0;
          _DAT_026db8e0 = 0;
          uRam00000000026db8e8 = 0;
          _DAT_026db8f0 = 0;
          uRam00000000026db8f8 = 0;
          _DAT_026db900 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808968 = "handleAudioSourceChanged";
      _DAT_02808970 = &DAT_026db840;
      _DAT_02808978 = 0;
      _DAT_02808980 = &DAT_0270619f;
      _DAT_02808988 = FUN_00461310;
      _DAT_02808990 = FUN_0045e8f0;
      _DAT_02808998 = 0;
      uRam00000000028089a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @0045ea40 — 1184 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0045edbf) */

void FUN_0045ea40(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  undefined8 local_48;
  longlong local_40;
  char local_38;
  
  FUN_0045f200();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0045ea95;
    }
LAB_0045eacd:
    bVar3 = true;
    local_48 = 0;
    bVar2 = true;
    bVar1 = true;
    lVar6 = *(longlong *)(unaff_RDI + 0x98);
joined_r0x0045ebe4:
    if (lVar6 != 0) {
      *(undefined8 *)(unaff_RDI + 0x98) = 0;
      FUN_00d50b20();
      bVar1 = bVar2;
    }
    if (bVar1) goto LAB_0045eeb5;
  }
  else {
    if (local_40 == 0) goto LAB_0045eacd;
LAB_0045ea95:
    FUN_0021a630();
    uVar4 = (**(code **)(*local_58 + 0xa00))();
    lVar6 = local_40;
    if (local_40 == 0) {
      lVar6 = 0;
      local_48 = 0;
    }
    else if (local_38 == '\0') {
      uVar4 = FUN_00d50b00();
      local_48 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_48 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar6 == 0) {
      bVar3 = true;
      bVar2 = false;
      bVar1 = false;
      lVar6 = *(longlong *)(unaff_RDI + 0x98);
      goto joined_r0x0045ebe4;
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar6 = FUN_00e8b990();
    if (lVar6 == 0) {
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      lVar6 = *(longlong *)(unaff_RDI + 0x98);
      goto joined_r0x0045ebe4;
    }
    if (*(longlong *)(unaff_RDI + 0x98) == 0) {
LAB_0045ec41:
      FUN_00d50b00();
      local_b8 = DAT_027060a0;
      if (DAT_027060a0 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = FUN_00e8b990();
      local_70 = 0;
      if (local_78 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      FUN_00115af0();
      FUN_00e86210();
      local_a8 = DAT_027060a8;
      if (DAT_027060a8 != 0) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      FUN_00c841b0();
      local_68 = local_58;
      local_60 = 0;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_60 = '\x01';
      local_90 = '\0';
      local_98 = 0;
      FUN_000bfbc0(&local_78,&local_b8,0xa0,&local_68);
      lVar6 = *(longlong *)(unaff_RDI + 0x98);
      lVar7 = lVar6;
      if (lVar6 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar7 = 0;
            goto LAB_0045ed9c;
          }
          FUN_00d50b00();
          lVar6 = *(longlong *)(unaff_RDI + 0x98);
          *(longlong *)(unaff_RDI + 0x98) = local_40;
          lVar7 = local_40;
        }
        else {
          local_38 = '\0';
          lVar7 = local_40;
LAB_0045ed9c:
          *(longlong *)(unaff_RDI + 0x98) = lVar7;
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
          lVar7 = local_40;
        }
      }
      if ((local_38 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      bVar3 = false;
    }
    else {
      FUN_000bfee0();
      lVar6 = local_40;
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar7 = FUN_00e8b990();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != lVar7) goto LAB_0045ec41;
      bVar3 = false;
    }
  }
  FUN_00d50b20();
LAB_0045eeb5:
  if (((char)local_48 != '\0') && (!bVar3)) {
    FUN_00d50b20();
  }
  return;
}



