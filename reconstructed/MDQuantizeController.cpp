// Reconstructed implementation of MDQuantizeController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDQuantizeController.h"

// ============================================================
// @00365870 — 1716 bytes
// str: ""handleTransportToggleCycle""
// str: ""handleTransportRecord""
// str: ""handleTransportStop""
// str: ""handleTransportStart""
// str: ""handleTransportTogglePlayback""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00365870(void)

{
  int iVar1;
  
  if (DAT_028077e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028077b0 = FUN_003708c0();
      _DAT_028077a8 = "handleCreateTranslationFiles";
      _DAT_028077b8 = 0;
      _DAT_028077c0 = &DAT_02703b60;
      _DAT_028077c8 = FUN_00370af0;
      _DAT_028077d0 = FUN_0036e670;
      _DAT_028077d8 = 0;
      uRam00000000028077e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807830 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028077f8 = FUN_003708c0();
      _DAT_028077f0 = "handleCloseDocument";
      _DAT_02807800 = 0;
      _DAT_02807808 = &DAT_02703b60;
      _DAT_02807810 = FUN_00370af0;
      _DAT_02807818 = FUN_003696e0;
      _DAT_02807820 = 0;
      uRam0000000002807828 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807878 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02807840 = FUN_003708c0();
      _DAT_02807838 = "handleTransportTogglePlayback";
      _DAT_02807848 = 0;
      _DAT_02807850 = &DAT_02703b60;
      _DAT_02807858 = FUN_00370af0;
      _DAT_02807860 = FUN_0036d010;
      _DAT_02807868 = 0;
      uRam0000000002807870 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028078c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02807888 = FUN_003708c0();
      _DAT_02807880 = "handleTransportToggleCycle";
      _DAT_02807890 = 0;
      _DAT_02807898 = &DAT_02703b60;
      _DAT_028078a0 = FUN_00370af0;
      _DAT_028078a8 = FUN_0036d0e0;
      _DAT_028078b0 = 0;
      uRam00000000028078b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807908 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028078d0 = FUN_003708c0();
      _DAT_028078c8 = "handleTransportRecord";
      _DAT_028078d8 = 0;
      _DAT_028078e0 = &DAT_02703b60;
      _DAT_028078e8 = FUN_00370af0;
      _DAT_028078f0 = FUN_0036d1b0;
      _DAT_028078f8 = 0;
      uRam0000000002807900 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807950 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02807918 = FUN_003708c0();
      _DAT_02807910 = "handleTransportStop";
      _DAT_02807920 = 0;
      _DAT_02807928 = &DAT_02703b60;
      _DAT_02807930 = FUN_00370af0;
      _DAT_02807938 = FUN_0036d3d0;
      _DAT_02807940 = 0;
      uRam0000000002807948 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807998 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02807960 = FUN_003708c0();
      _DAT_02807958 = "handleTransportStart";
      _DAT_02807968 = 0;
      _DAT_02807970 = &DAT_02703b60;
      _DAT_02807978 = FUN_00370af0;
      _DAT_02807980 = FUN_0036d280;
      _DAT_02807988 = 0;
      uRam0000000002807990 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028079e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028079a8 = FUN_003708c0();
      _DAT_028079a0 = "handleOpenGlobalValues";
      _DAT_028079b0 = 0;
      _DAT_028079b8 = &DAT_02703b60;
      _DAT_028079c0 = FUN_00370af0;
      _DAT_028079c8 = FUN_00369670;
      _DAT_028079d0 = 0;
      uRam00000000028079d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807a28 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028079f0 = FUN_003708c0();
      _DAT_028079e8 = "handleOpenLastRecent";
      _DAT_028079f8 = 0;
      _DAT_02807a00 = &DAT_02703b60;
      _DAT_02807a08 = FUN_00370af0;
      _DAT_02807a10 = FUN_0036e160;
      _DAT_02807a18 = 0;
      uRam0000000002807a20 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807a70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02807a38 = FUN_003708c0();
      _DAT_02807a30 = "handleShowMidiTestWindow";
      _DAT_02807a40 = 0;
      _DAT_02807a48 = &DAT_02703b60;
      _DAT_02807a50 = FUN_00370af0;
      _DAT_02807a58 = FUN_0036e240;
      _DAT_02807a60 = 0;
      uRam0000000002807a68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807ab8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02807a80 = FUN_003708c0();
      _DAT_02807a78 = "handleShowTestGrooveWindow";
      _DAT_02807a88 = 0;
      _DAT_02807a90 = &DAT_02703b60;
      _DAT_02807a98 = FUN_00370af0;
      _DAT_02807aa0 = FUN_0036e430;
      _DAT_02807aa8 = 0;
      uRam0000000002807ab0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00363290 — 1257 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x003634ce) */
/* WARNING: Removing unreachable block (ram,0x003634da) */
/* WARNING: Removing unreachable block (ram,0x003635f8) */
/* WARNING: Removing unreachable block (ram,0x00363601) */
/* WARNING: Removing unreachable block (ram,0x00363785) */
/* WARNING: Removing unreachable block (ram,0x00363795) */

void FUN_00363290(pthread_key_t param_1)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  char *pcVar6;
  int iVar7;
  longlong local_c0;
  char local_b8;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong local_58;
  char local_50;
  char *local_48;
  char local_40 [8];
  char *local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_b8 == '\0') && (local_c0 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    FUN_00d50b20();
  }
  if (local_c0 != 0) {
    if (0 < *(int *)(local_c0 + 0xc)) {
      iVar7 = 0;
      do {
        FUN_004f9670();
        pcVar1 = local_48;
        local_68 = local_40[0];
        pcVar6 = &local_68;
        pcVar3 = local_40;
        if (local_40[0] == '\0') {
          pcVar3 = pcVar6;
        }
        *pcVar3 = '\0';
        if ((local_40[0] != '\0') && (pcVar1 != (char *)0x0)) {
          FUN_00d50b20();
        }
        local_38 = pcVar1;
        pvVar2 = _pthread_getspecific((pthread_key_t)pcVar6);
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          pcVar6 = local_38;
        }
        pVar5 = (pthread_key_t)pcVar6;
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7d10();
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f2610();
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012a46e0();
        FUN_004fac10();
        if ((local_40[0] != '\0') && (local_48 != (char *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific(pVar5);
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          pVar5 = (pthread_key_t)local_38;
        }
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f49e0();
        FUN_004f7990();
        pvVar2 = _pthread_getspecific(pVar5);
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          pVar5 = (pthread_key_t)local_38;
        }
        pvVar2 = _pthread_getspecific(pVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f49f0();
        FUN_004f7900();
        if ((local_68 != '\0') && (local_38 != (char *)0x0)) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(local_c0 + 0xc));
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00364340 — 1101 bytes
// str: ""handleCancel""
// str: ""MDQuantizeController""
// str: ""handleSheetClose""
// str: ""handleOK""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00364340(void)

{
  int iVar1;
  
  if (DAT_02807708 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271e090 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f84d8 = FUN_00015ff0();
          _DAT_026f84c0 = "MDQuantizeController";
          _DAT_026f84c8 = 0x88;
          _DAT_026f84d0 = FUN_00273000;
          _DAT_026f84e0 = 0;
          uRam00000000026f84e8 = 0;
          _DAT_026f84f0 = 0;
          _DAT_026f8568 = 0;
          uRam00000000026f8570 = 0;
          _DAT_026f8578 = 0;
          DAT_026f857a = 1;
          _DAT_026f84f8 = 0;
          uRam00000000026f8500 = 0;
          _DAT_026f8508 = 0;
          uRam00000000026f8510 = 0;
          _DAT_026f8518 = 0;
          uRam00000000026f8520 = 0;
          _DAT_026f8528 = 0;
          uRam00000000026f8530 = 0;
          _DAT_026f8538 = 0;
          uRam00000000026f8540 = 0;
          _DAT_026f8548 = 0;
          uRam00000000026f8550 = 0;
          _DAT_026f8558 = 0;
          uRam00000000026f8560 = 0;
          DAT_026f8583 = 0;
          _DAT_026f857b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028076c8 = "handleSheetClose";
      _DAT_028076d0 = &DAT_026f84c0;
      _DAT_028076d8 = 0;
      _DAT_028076e0 = &DAT_02703878;
      _DAT_028076e8 = FUN_00365790;
      _DAT_028076f0 = 0x5e1;
      _DAT_028076f8 = 0;
      uRam0000000002807700 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807750 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271e090 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f84d8 = FUN_00015ff0();
          _DAT_026f84c0 = "MDQuantizeController";
          _DAT_026f84c8 = 0x88;
          _DAT_026f84d0 = FUN_00273000;
          _DAT_026f84e0 = 0;
          uRam00000000026f84e8 = 0;
          _DAT_026f84f0 = 0;
          _DAT_026f8568 = 0;
          uRam00000000026f8570 = 0;
          _DAT_026f8578 = 0;
          DAT_026f857a = 1;
          _DAT_026f84f8 = 0;
          uRam00000000026f8500 = 0;
          _DAT_026f8508 = 0;
          uRam00000000026f8510 = 0;
          _DAT_026f8518 = 0;
          uRam00000000026f8520 = 0;
          _DAT_026f8528 = 0;
          uRam00000000026f8530 = 0;
          _DAT_026f8538 = 0;
          uRam00000000026f8540 = 0;
          _DAT_026f8548 = 0;
          uRam00000000026f8550 = 0;
          _DAT_026f8558 = 0;
          uRam00000000026f8560 = 0;
          DAT_026f8583 = 0;
          _DAT_026f857b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807710 = "handleCancel";
      _DAT_02807718 = &DAT_026f84c0;
      _DAT_02807720 = 0;
      _DAT_02807728 = &DAT_02703878;
      _DAT_02807730 = FUN_00365790;
      _DAT_02807738 = 0x5d1;
      _DAT_02807740 = 0;
      uRam0000000002807748 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807798 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0271e090 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f84d8 = FUN_00015ff0();
          _DAT_026f84c0 = "MDQuantizeController";
          _DAT_026f84c8 = 0x88;
          _DAT_026f84d0 = FUN_00273000;
          _DAT_026f84e0 = 0;
          uRam00000000026f84e8 = 0;
          _DAT_026f84f0 = 0;
          _DAT_026f8568 = 0;
          uRam00000000026f8570 = 0;
          _DAT_026f8578 = 0;
          DAT_026f857a = 1;
          _DAT_026f84f8 = 0;
          uRam00000000026f8500 = 0;
          _DAT_026f8508 = 0;
          uRam00000000026f8510 = 0;
          _DAT_026f8518 = 0;
          uRam00000000026f8520 = 0;
          _DAT_026f8528 = 0;
          uRam00000000026f8530 = 0;
          _DAT_026f8538 = 0;
          uRam00000000026f8540 = 0;
          _DAT_026f8548 = 0;
          uRam00000000026f8550 = 0;
          _DAT_026f8558 = 0;
          uRam00000000026f8560 = 0;
          DAT_026f8583 = 0;
          _DAT_026f857b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807758 = "handleOK";
      _DAT_02807760 = &DAT_026f84c0;
      _DAT_02807768 = 0;
      _DAT_02807770 = &DAT_02703878;
      _DAT_02807778 = FUN_00365790;
      _DAT_02807780 = 0x5d9;
      _DAT_02807788 = 0;
      uRam0000000002807790 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00362b80 — 838 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00362c03) */
/* WARNING: Removing unreachable block (ram,0x00362c0c) */
/* WARNING: Removing unreachable block (ram,0x00362ce2) */
/* WARNING: Removing unreachable block (ram,0x00362ceb) */
/* WARNING: Removing unreachable block (ram,0x00362e37) */
/* WARNING: Removing unreachable block (ram,0x00362e44) */
/* WARNING: Removing unreachable block (ram,0x00362bc7) */
/* WARNING: Removing unreachable block (ram,0x00362bd0) */
/* WARNING: Removing unreachable block (ram,0x00362eaf) */
/* WARNING: Removing unreachable block (ram,0x00362ebc) */

void FUN_00362b80(pthread_key_t param_1)

{
  int iVar1;
  void *pvVar2;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_017a7800();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_00362c26;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_00362c26;
  local_40 = DAT_02729540;
  if (DAT_02729540 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  FUN_00ca13a0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00362c26:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_004faf60();
  if (local_40 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313b00();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eff0();
        iVar1 = *(int *)(local_40 + 0xc);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          *(undefined1 *)(unaff_RDI + 0x48) = 1;
        }
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00362540 — 659 bytes
// ============================================================

void FUN_00362540(pthread_key_t param_1)

{
  double dVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = *(double *)(unaff_RDI + 0x48);
  dVar6 = *(double *)(unaff_RDI + 0x50);
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar9 = *(double *)(lVar4 + 0x48);
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar4 + 0x50);
  dVar5 = dVar1;
  dVar7 = dVar9;
  if ((dVar8 < dVar6) && (dVar5 = dVar6, dVar7 = dVar8, dVar9 < dVar1)) {
    if (dVar8 <= dVar9) {
      dVar9 = dVar8;
    }
    dVar5 = dVar1;
    dVar7 = dVar9;
    if (dVar1 <= dVar6) {
      dVar5 = dVar6;
    }
  }
  if ((*(double *)(unaff_RDI + 0x48) != dVar7) || (NAN(*(double *)(unaff_RDI + 0x48)) || NAN(dVar7))
     ) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0x48) = dVar7;
    FUN_00d64910();
  }
  if ((*(double *)(unaff_RDI + 0x50) != dVar5) || (NAN(*(double *)(unaff_RDI + 0x50)) || NAN(dVar5))
     ) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0x50) = dVar5;
    FUN_00d64910();
  }
  dVar8 = *(double *)(unaff_RDI + 0x38);
  dVar6 = *(double *)(unaff_RDI + 0x40);
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar9 = *(double *)(lVar4 + 0x38);
  lVar4 = *unaff_RSI;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *unaff_RSI;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar4 + 0x38);
  if (dVar8 < dVar6) {
    if (dVar1 <= dVar9) goto LAB_00362745;
    if (dVar8 <= dVar9) {
      dVar9 = dVar8;
    }
    dVar8 = dVar9;
    dVar9 = dVar8;
    if (dVar1 <= dVar6) goto LAB_00362745;
  }
  dVar8 = dVar9;
  dVar6 = dVar1;
LAB_00362745:
  if ((*(double *)(unaff_RDI + 0x38) != dVar8) || (NAN(*(double *)(unaff_RDI + 0x38)) || NAN(dVar8))
     ) {
    FUN_00d64850();
    *(double *)(unaff_RDI + 0x38) = dVar8;
    FUN_00d64910();
  }
  if ((*(double *)(unaff_RDI + 0x40) == dVar6) &&
     (!NAN(*(double *)(unaff_RDI + 0x40)) && !NAN(dVar6))) {
    return;
  }
  FUN_00d64850();
  *(double *)(unaff_RDI + 0x40) = dVar6;
  FUN_00d64910();
  return;
}




// ============================================================
// @00364bb0 — 570 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00364d93) */
/* WARNING: Removing unreachable block (ram,0x00364d9c) */
/* WARNING: Removing unreachable block (ram,0x00364cad) */
/* WARNING: Removing unreachable block (ram,0x00364cb6) */

longlong * FUN_00364bb0(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_40;
  char local_38;
  
  lVar6 = unaff_RSI[0xe];
  if (*(int *)(lVar6 + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_00364c71:
    FUN_00d50b00();
  }
  else {
    if (0 < *(int *)(lVar6 + 0xc)) {
      lVar5 = 0;
LAB_00364bf0:
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar5 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*unaff_RSI + 0x5c0))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') goto code_r0x00364c3a;
      FUN_0025e9a0();
      if (local_40 == 0) {
        bVar2 = true;
        lVar5 = unaff_RSI[0xe];
        iVar1 = *(int *)(lVar5 + 0xc);
        lVar6 = 0;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        bVar2 = false;
        lVar5 = unaff_RSI[0xe];
        iVar1 = *(int *)(lVar5 + 0xc);
        lVar6 = local_40;
      }
      if (0 < iVar1) {
        lVar4 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar4 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*unaff_RSI + 0x5c0))();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            lVar5 = *(longlong *)(*(longlong *)(unaff_RSI[0xe] + 0x10) + lVar4 * 8);
            if (lVar5 != 0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
          }
          lVar4 = lVar4 + 1;
          lVar5 = unaff_RSI[0xe];
        } while (lVar4 < *(int *)(lVar5 + 0xc));
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar2) goto LAB_00364dd7;
      if (lVar6 != 0) goto LAB_00364c71;
      goto LAB_00364cd7;
    }
LAB_00364c4f:
    if (lVar6 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_00364cd7:
      lVar6 = 0;
    }
    else {
      FUN_00d50b00();
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
  }
LAB_00364dd7:
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
code_r0x00364c3a:
  lVar5 = lVar5 + 1;
  lVar6 = unaff_RSI[0xe];
  if (*(int *)(lVar6 + 0xc) <= lVar5) goto LAB_00364c4f;
  goto LAB_00364bf0;
}




// ============================================================
// @00272a20 — 551 bytes
// str: ""MDQuantizeController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00272b56) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00272a20(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_b8;
  longlong local_a8;
  undefined8 *local_30;
  
  if ((DAT_0271e090 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026f84d8 = FUN_00015ff0();
    _DAT_026f84c0 = "MDQuantizeController";
    _DAT_026f84c8 = 0x88;
    _DAT_026f84d0 = FUN_00273000;
    _DAT_026f84e0 = 0;
    uRam00000000026f84e8 = 0;
    _DAT_026f84f0 = 0;
    _DAT_026f8568 = 0;
    uRam00000000026f8570 = 0;
    _DAT_026f8578 = 0;
    DAT_026f857a = 1;
    _DAT_026f84f8 = 0;
    uRam00000000026f8500 = 0;
    _DAT_026f8508 = 0;
    uRam00000000026f8510 = 0;
    _DAT_026f8518 = 0;
    uRam00000000026f8520 = 0;
    _DAT_026f8528 = 0;
    uRam00000000026f8530 = 0;
    _DAT_026f8538 = 0;
    uRam00000000026f8540 = 0;
    _DAT_026f8548 = 0;
    uRam00000000026f8550 = 0;
    _DAT_026f8558 = 0;
    uRam00000000026f8560 = 0;
    DAT_026f8583 = 0;
    _DAT_026f857b = 0;
    ___cxa_guard_release();
  }
  if (DAT_026f857b == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    local_30 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_30 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_30 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_002730b0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00364340();
    FUN_00e87920(uVar2,0);
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    if (local_30 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
  }
  return;
}



