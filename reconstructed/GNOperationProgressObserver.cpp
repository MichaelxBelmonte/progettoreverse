// Reconstructed implementation of GNOperationProgressObserver
// From MikeCore binary — reverse-engineered pseudocode

#include "GNOperationProgressObserver.h"

// ============================================================
// @00044470 — 2086 bytes
// str: ""GNOperationProgressObserver""
// str: ""GNOperationCancelDelegate""
// str: ""GNJob""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00044470(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_024c1578;
  if (DAT_0278c920 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cf630 = "GNOperationCancelDelegate";
      DAT_026cf640 = 0;
      _DAT_026cf638 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[3] = &DAT_024c15b0;
  if (DAT_0278c930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ceef0 = "GNOperationProgressObserver";
      DAT_026cef00 = 0;
      _DAT_026ceef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02589ed0;
  unaff_RDI[2] = &DAT_0258a288;
  unaff_RDI[3] = &DAT_0258a2c0;
  FUN_00044d20();
  FUN_00045040();
  FUN_000453c0();
  *(undefined4 *)(unaff_RDI + 7) = 0;
  if (DAT_0278c910 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
  if (DAT_026d1f9b == '\0') {
    FUN_00045740();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  if (DAT_0278c910 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
  if (DAT_026d1f9b == '\0') {
    FUN_000459e0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3d) = 0;
  if (DAT_0278c910 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
  if (DAT_026d1f9b == '\0') {
    FUN_00045b70();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3e) = 0;
  if (DAT_0278c910 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
  if (DAT_026d1f9b == '\0') {
    FUN_00045d00();
    FUN_00e87980();
  }
  FUN_00045e90();
  FUN_00046150();
  *(undefined4 *)(unaff_RDI + 10) = 0;
  if (DAT_0278c910 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
  if (DAT_026d1f9b == '\0') {
    FUN_00046410();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  if (DAT_0278c910 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
  if (DAT_026d1f9b == '\0') {
    FUN_000465a0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xb) = 0;
  if (DAT_0278c910 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
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
  if (DAT_026d1f9b == '\0') {
    FUN_00046730();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @007f1730 — 1311 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x007f17f2) */
/* WARNING: Removing unreachable block (ram,0x007f17fe) */

void FUN_007f1730(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  bool bVar7;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  undefined8 local_38;
  
  lVar5 = param_1;
  puVar1 = (undefined8 *)FUN_00e8fc40();
  pVar4 = (pthread_key_t)lVar5;
  FUN_00d4ff40();
  *puVar1 = &DAT_02510d80;
  puVar1[2] = &DAT_02511108;
  puVar1[3] = 0;
  FUN_00d500e0();
  if (*param_2 != 0) {
    uVar3 = *unaff_RSI;
    local_b0 = '\0';
    local_b8 = *param_2;
    FUN_007f28a0(uVar3,&local_b8);
    pVar4 = (pthread_key_t)uVar3;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00363970();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_007f184c;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_007f184c:
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    if (local_48 == (longlong *)0x0) {
      bVar7 = false;
    }
    else {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      bVar7 = local_78 != 0;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_68 = local_78;
      local_60 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_60 = '\x01';
      uVar3 = FUN_016cbba0();
      plVar6 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        local_38 = 0;
      }
      else if (local_40 == '\0') {
        uVar3 = FUN_00d50b00();
        local_38 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        local_38 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = 0;
      plVar6 = (longlong *)0x0;
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
    goto LAB_007f1b72;
  }
  plVar6 = (longlong *)0x0;
  local_38 = 0;
LAB_007f1b72:
  if (*param_2 != 0) {
    local_90 = '\0';
    local_98 = 0;
    local_88 = 0;
    local_80 = '\0';
    FUN_007f28a0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar6 != (longlong *)0x0) && (param_1 != 0)) {
    FUN_01f27fe0();
    (**(code **)(*local_48 + 0x560))();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (((char)local_38 == '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}




// ============================================================
// @007f0230 — 1271 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x007f032b) */
/* WARNING: Removing unreachable block (ram,0x007f0337) */
/* WARNING: Removing unreachable block (ram,0x007f03c7) */
/* WARNING: Removing unreachable block (ram,0x007f03d3) */
/* WARNING: Removing unreachable block (ram,0x007f04b1) */
/* WARNING: Removing unreachable block (ram,0x007f04be) */
/* WARNING: Removing unreachable block (ram,0x007f043d) */
/* WARNING: Removing unreachable block (ram,0x007f044a) */
/* WARNING: Removing unreachable block (ram,0x007f0655) */
/* WARNING: Removing unreachable block (ram,0x007f065e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f0230(ulonglong *param_1,double *param_2)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong *plVar4;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar5;
  double dVar6;
  ulonglong uVar7;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
  FUN_00b5dfe0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  cVar1 = (**(code **)(*local_40 + 0x50))();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_00b5f170();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 != (longlong *)0x0) {
      if (param_2 != (double *)0x0) {
        dVar6 = (double)FUN_00b5ec40();
        *param_2 = dVar6;
        if (dVar6 <= 0.0) {
          *param_2 = 3600.0;
        }
      }
      if (param_1 != (ulonglong *)0x0) {
        uVar7 = FUN_00b609e0();
        *param_1 = uVar7 ^ _DAT_023945b0;
      }
      pVar3 = 0;
      FUN_0153a4c0(0,0);
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (local_40 == (longlong *)0x0) {
        bVar5 = false;
        plVar4 = (longlong *)0x0;
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313b00();
        if (local_40 == (longlong *)0x0) {
          bVar5 = false;
        }
        else {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313b00();
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01505900();
          bVar5 = local_50 != 0;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar5) {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313b00();
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01505900();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_016cbba0();
          if (local_40 == (longlong *)0x0) {
            bVar5 = false;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar5 = true;
          }
          else {
            bVar5 = true;
          }
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          plVar4 = local_40;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar5 = false;
          plVar4 = (longlong *)0x0;
        }
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50130();
      }
      FUN_00d50130();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar5) {
        if (plVar4 == (longlong *)0x0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
      goto LAB_007f0711;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  plVar4 = (longlong *)0x0;
LAB_007f0711:
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @007f0cf0 — 1080 bytes
// ============================================================

void FUN_007f0cf0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  char cVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar5;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar5 = FUN_01f27fe0();
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  FUN_002a0320(uVar5,&local_b0);
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    plVar1 = local_40;
    FUN_014ffc90();
    local_60 = local_50;
    local_58 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_58 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      local_90 = *unaff_RSI;
      local_88 = '\0';
      FUN_01500300();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        uVar5 = FUN_01f27fe0();
        local_80 = plVar1;
        local_78 = '\0';
        FUN_002a0320(uVar5,&local_80);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          local_70 = plVar1;
          local_68 = '\0';
          uVar3 = FUN_00742b20();
          FUN_01500530(0,uVar3);
          plVar1 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
               (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            if (param_2 != (undefined8 *)0x0) {
              uVar5 = FUN_00b7a6e0();
              *param_2 = uVar5;
            }
            *unaff_RDI = plVar1;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            FUN_00d50b20();
            FUN_00d50b20();
            return;
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_a0 = *unaff_RSI;
    local_98 = '\0';
    uVar3 = FUN_00742b20();
    FUN_01500530(0,uVar3);
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      if (param_2 != (undefined8 *)0x0) {
        uVar5 = FUN_00b7a6e0();
        *param_2 = uVar5;
      }
      *unaff_RDI = plVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @007f28a0 — 1012 bytes
// ============================================================

void FUN_007f28a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
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
  longlong *local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    FUN_00172bc0();
    local_d8 = '\0';
    local_e0 = (longlong *)0x0;
    FUN_017a9390();
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      (**(code **)(*local_e0 + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x18);
  lVar3 = lVar2;
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x18) = lVar1;
    lVar3 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = *(longlong *)(unaff_RDI + 0x18);
    }
  }
  if ((lVar3 != 0) && (*param_2 != 0)) {
    FUN_017a6db0();
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 != (undefined8 *)0x0) {
      FUN_017a6db0();
      (**(code **)(*local_f0 + 0x468))();
      lVar1 = DAT_02729550;
      if (DAT_02729550 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar1;
      FUN_00083ea0(2,&local_108);
      FUN_000b4da0();
      lVar2 = local_90;
      if (local_88 == '\0') {
        if (((local_90 != 0) && (FUN_00d50b00(), local_88 != '\0')) && (local_90 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_88 = '\0';
      }
      local_70 = (undefined8 *)&DAT_0253d630;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_70 = &DAT_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_026f6f70;
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_0272f678;
      local_d0 = lVar1;
      local_c8 = '\x01';
      if (DAT_0272f678 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar3;
      local_b8 = '\x01';
      local_b0 = lVar2;
      local_a8 = '\0';
      FUN_00d31230(&local_b0,&local_c0);
      local_40 = local_70;
      local_38 = 0;
      if (local_68 == '\0') {
        if (local_70 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_38 = '\x01';
      local_a0 = *param_2;
      local_98 = '\0';
      FUN_00172950();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
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
      local_78 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_80 = (longlong *)(unaff_RDI + 0x10);
      FUN_017a9390();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @007efd50 — 896 bytes
// ============================================================

undefined8 FUN_007efd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char *pcVar2;
  longlong unaff_RDI;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_70;
  char local_68;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar5 = FUN_01d384d0();
  local_70 = DAT_026fcec0;
  if (DAT_026fcec0 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_01cac990(uVar5,&local_70);
  lVar4 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  *(undefined8 *)(unaff_RDI + 0x30) = 0;
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (0 < *(int *)(lVar4 + 0xc)) {
      FUN_00d23310();
      lVar4 = local_48;
      local_38[0] = local_40[0];
      pcVar2 = local_40;
      if (local_40[0] == '\0') {
        pcVar2 = local_38;
      }
      *pcVar2 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (lVar4 != 0)) {
        FUN_00d50b00();
      }
      FUN_007f0230(unaff_RDI + 0x30,&local_60);
      lVar1 = local_58;
      lVar3 = *(longlong *)(unaff_RDI + 0x18);
      if (lVar3 == local_58) {
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
          lVar3 = *(longlong *)(unaff_RDI + 0x18);
        }
        *(longlong *)(unaff_RDI + 0x18) = lVar1;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0x18) == 0) {
        uVar5 = FUN_00d23310();
        lVar4 = local_48;
        local_38[0] = local_40[0];
        pcVar2 = local_40;
        if (local_40[0] == '\0') {
          pcVar2 = local_38;
        }
        *pcVar2 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          uVar5 = FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (lVar4 != 0)) {
          uVar5 = FUN_00d50b00();
        }
        FUN_007f0a70(uVar5,&local_60);
        lVar1 = local_58;
        lVar3 = *(longlong *)(unaff_RDI + 0x20);
        if (lVar3 == local_58) {
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((local_50 == '\0') && (local_58 != 0)) {
            FUN_00d50b00();
            lVar3 = *(longlong *)(unaff_RDI + 0x20);
          }
          *(longlong *)(unaff_RDI + 0x20) = lVar1;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if ((*(longlong *)(unaff_RDI + 0x18) == 0) && (*(longlong *)(unaff_RDI + 0x20) == 0)) {
          uVar5 = FUN_00d23310();
          pcVar2 = local_40;
          if (local_40[0] == '\0') {
            pcVar2 = local_38;
          }
          local_38[0] = local_40[0];
          *pcVar2 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            uVar5 = FUN_00d50b20();
          }
          if ((local_38[0] == '\0') && (local_48 != 0)) {
            uVar5 = FUN_00d50b00();
          }
          FUN_007f0cf0(uVar5,&local_60,param_3,param_4,local_48,1);
          lVar4 = *(longlong *)(unaff_RDI + 0x28);
          if (lVar4 == local_58) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((local_50 == '\0') && (local_58 != 0)) {
              FUN_00d50b00();
              lVar4 = *(longlong *)(unaff_RDI + 0x28);
            }
            *(longlong *)(unaff_RDI + 0x28) = local_58;
            if (lVar4 != 0) {
              FUN_00d50b20();
            }
          }
          if (local_48 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    uVar5 = local_60;
    FUN_00d50b20();
  }
  return uVar5;
}




// ============================================================
// @002b1d10 — 740 bytes
// str: ""GNOperationProgressObserver""
// str: ""MDDocumentLoader""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b1d10(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_024c15b0;
  if (DAT_0278c930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ceef0 = "GNOperationProgressObserver";
      DAT_026cef00 = 0;
      _DAT_026ceef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_0250fb60;
  unaff_RDI[2] = &DAT_0250fee8;
  FUN_002b2090();
  FUN_002b23c0();
  FUN_002b26f0();
  FUN_002b2a20();
  *(undefined4 *)(unaff_RDI + 7) = 0;
  if (DAT_026fc300 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fc250 = FUN_00d4fe50();
      _DAT_026fc238 = "MDDocumentLoader";
      _DAT_026fc240 = 0x40;
      _DAT_026fc248 = FUN_002b1c00;
      _DAT_026fc258 = 0;
      uRam00000000026fc260 = 0;
      _DAT_026fc268 = 0;
      _DAT_026fc2e0 = 0;
      uRam00000000026fc2e8 = 0;
      _DAT_026fc2f0 = 0;
      DAT_026fc2f2 = 3;
      _DAT_026fc270 = 0;
      uRam00000000026fc278 = 0;
      _DAT_026fc280 = 0;
      uRam00000000026fc288 = 0;
      _DAT_026fc290 = 0;
      uRam00000000026fc298 = 0;
      _DAT_026fc2a0 = 0;
      uRam00000000026fc2a8 = 0;
      _DAT_026fc2b0 = 0;
      uRam00000000026fc2b8 = 0;
      _DAT_026fc2c0 = 0;
      uRam00000000026fc2c8 = 0;
      _DAT_026fc2d0 = 0;
      uRam00000000026fc2d8 = 0;
      DAT_026fc2fb = 0;
      _DAT_026fc2f3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fc2f3 == '\0') {
    FUN_002b2ce0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  if (DAT_026fc300 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fc250 = FUN_00d4fe50();
      _DAT_026fc238 = "MDDocumentLoader";
      _DAT_026fc240 = 0x40;
      _DAT_026fc248 = FUN_002b1c00;
      _DAT_026fc258 = 0;
      uRam00000000026fc260 = 0;
      _DAT_026fc268 = 0;
      _DAT_026fc2e0 = 0;
      uRam00000000026fc2e8 = 0;
      _DAT_026fc2f0 = 0;
      DAT_026fc2f2 = 3;
      _DAT_026fc270 = 0;
      uRam00000000026fc278 = 0;
      _DAT_026fc280 = 0;
      uRam00000000026fc288 = 0;
      _DAT_026fc290 = 0;
      uRam00000000026fc298 = 0;
      _DAT_026fc2a0 = 0;
      uRam00000000026fc2a8 = 0;
      _DAT_026fc2b0 = 0;
      uRam00000000026fc2b8 = 0;
      _DAT_026fc2c0 = 0;
      uRam00000000026fc2c8 = 0;
      _DAT_026fc2d0 = 0;
      uRam00000000026fc2d8 = 0;
      DAT_026fc2fb = 0;
      _DAT_026fc2f3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fc2f3 == '\0') {
    FUN_002b2e70();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @007f2390 — 724 bytes
// ============================================================

void FUN_007f2390(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  longlong *unaff_RDI;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00b5dfe0();
  lVar1 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar1;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  (**(code **)(*local_90 + 0x520))();
  lVar1 = CONCAT71(uStack_4f,local_50);
  if (local_48 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_38[0] = '\0';
  local_40 = lVar1;
  FUN_00d23480();
  if ((local_38[0] != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  local_80 = 0;
  local_78 = '\0';
  local_68 = '\0';
  local_60 = 0;
  local_58 = '\0';
  local_70 = puVar2;
  FUN_01f2a980(&local_70,&local_80,0,0);
  lVar1 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      FUN_00d23310();
      pcVar3 = local_38;
      if (local_38[0] == '\0') {
        pcVar3 = &local_50;
      }
      local_50 = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((local_50 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00e35460 — 688 bytes
// str: ""GNOperationProgressObserver""
// str: ""GNOperationProgressScalingAdapter""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e35460(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_024c15b0;
  if (DAT_0278c930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ceef0 = "GNOperationProgressObserver";
      DAT_026cef00 = 0;
      _DAT_026ceef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_025831e0;
  unaff_RDI[2] = &DAT_02583570;
  FUN_00e35760();
  *(undefined4 *)(unaff_RDI + 4) = 0;
  if (DAT_027863f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02786340 = FUN_00d4fe50();
      _DAT_02786328 = "GNOperationProgressScalingAdapter";
      _DAT_02786330 = 0x28;
      _DAT_02786338 = FUN_00e35410;
      _DAT_02786348 = 0;
      uRam0000000002786350 = 0;
      _DAT_02786358 = 0;
      _DAT_027863d0 = 0;
      uRam00000000027863d8 = 0;
      _DAT_027863e0 = 0;
      DAT_027863e2 = 2;
      _DAT_02786360 = 0;
      uRam0000000002786368 = 0;
      _DAT_02786370 = 0;
      uRam0000000002786378 = 0;
      _DAT_02786380 = 0;
      uRam0000000002786388 = 0;
      _DAT_02786390 = 0;
      uRam0000000002786398 = 0;
      _DAT_027863a0 = 0;
      uRam00000000027863a8 = 0;
      _DAT_027863b0 = 0;
      uRam00000000027863b8 = 0;
      _DAT_027863c0 = 0;
      uRam00000000027863c8 = 0;
      DAT_027863eb = 0;
      _DAT_027863e3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027863e3 == '\0') {
    FUN_00e35b00();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = 0;
  if (DAT_027863f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02786340 = FUN_00d4fe50();
      _DAT_02786328 = "GNOperationProgressScalingAdapter";
      _DAT_02786330 = 0x28;
      _DAT_02786338 = FUN_00e35410;
      _DAT_02786348 = 0;
      uRam0000000002786350 = 0;
      _DAT_02786358 = 0;
      _DAT_027863d0 = 0;
      uRam00000000027863d8 = 0;
      _DAT_027863e0 = 0;
      DAT_027863e2 = 2;
      _DAT_02786360 = 0;
      uRam0000000002786368 = 0;
      _DAT_02786370 = 0;
      uRam0000000002786378 = 0;
      _DAT_02786380 = 0;
      uRam0000000002786388 = 0;
      _DAT_02786390 = 0;
      uRam0000000002786398 = 0;
      _DAT_027863a0 = 0;
      uRam00000000027863a8 = 0;
      _DAT_027863b0 = 0;
      uRam00000000027863b8 = 0;
      _DAT_027863c0 = 0;
      uRam00000000027863c8 = 0;
      DAT_027863eb = 0;
      _DAT_027863e3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027863e3 == '\0') {
    FUN_00e35c90();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @013dbcd0 — 590 bytes
// str: ""GNOperationProgressObserver""
// str: ""MUSeparationProgressNotificationAdapter""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013dbcd0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_024c15b0;
  if (DAT_0278c930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ceef0 = "GNOperationProgressObserver";
      DAT_026cef00 = 0;
      _DAT_026ceef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_025d8bd0;
  unaff_RDI[2] = &DAT_025d8f58;
  *(undefined4 *)(unaff_RDI + 3) = 0;
  if (DAT_027bf620 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027bf570 = FUN_00d4fe50();
      _DAT_027bf558 = "MUSeparationProgressNotificationAdapter";
      _DAT_027bf560 = 0x28;
      _DAT_027bf568 = FUN_013d96e0;
      _DAT_027bf578 = 0;
      uRam00000000027bf580 = 0;
      _DAT_027bf588 = 0;
      uRam00000000027bf590 = 0;
      _DAT_027bf598 = 0;
      uRam00000000027bf5a0 = 0;
      _DAT_027bf5a8 = 0;
      uRam00000000027bf5b0 = 0;
      _DAT_027bf5b8 = 0;
      uRam00000000027bf5c0 = 0;
      _DAT_027bf5c8 = 0;
      uRam00000000027bf5d0 = 0;
      _DAT_027bf5d8 = 0;
      uRam00000000027bf5e0 = 0;
      _DAT_027bf5e8 = 0;
      uRam00000000027bf5f0 = 0;
      _DAT_027bf5f8 = 0;
      uRam00000000027bf600 = 0;
      _DAT_027bf608 = 0;
      _uRam00000000027bf610 = 0;
      _DAT_027bf618 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027bf613 == '\0') {
    FUN_013dbf50();
    FUN_00e87980();
  }
  unaff_RDI[4] = 0;
  if (DAT_027bf620 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027bf570 = FUN_00d4fe50();
      _DAT_027bf558 = "MUSeparationProgressNotificationAdapter";
      _DAT_027bf560 = 0x28;
      _DAT_027bf568 = FUN_013d96e0;
      _DAT_027bf578 = 0;
      uRam00000000027bf580 = 0;
      _DAT_027bf588 = 0;
      uRam00000000027bf590 = 0;
      _DAT_027bf598 = 0;
      uRam00000000027bf5a0 = 0;
      _DAT_027bf5a8 = 0;
      uRam00000000027bf5b0 = 0;
      _DAT_027bf5b8 = 0;
      uRam00000000027bf5c0 = 0;
      _DAT_027bf5c8 = 0;
      uRam00000000027bf5d0 = 0;
      _DAT_027bf5d8 = 0;
      uRam00000000027bf5e0 = 0;
      _DAT_027bf5e8 = 0;
      uRam00000000027bf5f0 = 0;
      _DAT_027bf5f8 = 0;
      uRam00000000027bf600 = 0;
      _DAT_027bf608 = 0;
      _uRam00000000027bf610 = 0;
      _DAT_027bf618 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027bf613 == '\0') {
    FUN_013dc0c0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @007ef7c0 — 559 bytes
// str: ""GNOperationProgressObserver""
// str: ""MDTempoEditorHelper2""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x007ef8cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ef7c0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_28;
  
  if ((DAT_0272f968 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0272f8b8 = FUN_00d4fe50();
    _DAT_0272f8a0 = "MDTempoEditorHelper2";
    _DAT_0272f8a8 = 0x20;
    _DAT_0272f8b0 = FUN_007f3780;
    _DAT_0272f8c0 = 0;
    uRam000000000272f8c8 = 0;
    _DAT_0272f8d0 = 0;
    _DAT_0272f948 = 0;
    uRam000000000272f950 = 0;
    _DAT_0272f958 = 0;
    DAT_0272f95a = 1;
    _DAT_0272f8d8 = 0;
    uRam000000000272f8e0 = 0;
    _DAT_0272f8e8 = 0;
    uRam000000000272f8f0 = 0;
    _DAT_0272f8f8 = 0;
    uRam000000000272f900 = 0;
    _DAT_0272f908 = 0;
    uRam000000000272f910 = 0;
    _DAT_0272f918 = 0;
    uRam000000000272f920 = 0;
    _DAT_0272f928 = 0;
    uRam000000000272f930 = 0;
    _DAT_0272f938 = 0;
    uRam000000000272f940 = 0;
    DAT_0272f963 = 0;
    _DAT_0272f95b = 0;
    ___cxa_guard_release();
  }
  if (DAT_0272f95b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00d4ff80();
    if ((DAT_0278c930 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      _DAT_026ceef0 = "GNOperationProgressObserver";
      DAT_026cef00 = 0;
      _DAT_026ceef8 = 0;
      ___cxa_guard_release();
    }
    FUN_00e87c40();
    FUN_007f3a00();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}




// ============================================================
// @013dd3f0 — 547 bytes
// ============================================================

double FUN_013dd3f0(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  longlong unaff_RDI;
  longlong *plVar6;
  double dVar7;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(longlong *)(unaff_RDI + 0x48) != 0) && (*(longlong *)(unaff_RDI + 0x40) != 0)) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = FUN_014bb8a0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df6b0();
    pVar4 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      pvVar1 = _pthread_getspecific(pVar4);
      plVar6 = local_48;
      if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        plVar6 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      lVar3 = (**(code **)(*plVar6 + 0x378))();
      if (lVar3 < lVar2) {
        pvVar1 = _pthread_getspecific(pVar4);
        if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
          local_48 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
        lVar2 = (**(code **)(*local_48 + 0x378))();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar3 = FUN_013de650();
    if (*(longlong *)(unaff_RDI + 0x40) == 0) {
      dVar7 = 0.0;
    }
    else {
      pvVar1 = _pthread_getspecific(pVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_013de950();
    }
    return dVar7 * (double)(lVar2 - lVar3);
  }
  dVar7 = (double)FUN_013dd200();
  return dVar7;
}




// ============================================================
// @00e34da0 — 523 bytes
// str: "" [low cpu]""
// str: "" [heavy cpu]""
// str: "" progress:""
// str: ""%g""
// str: "" COMPLEX!""
// ============================================================

void FUN_00e34da0(void)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *local_50;
  uint local_48;
  float local_44;
  longlong local_40;
  undefined8 *local_38;
  char local_30;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d4fff0();
  local_38 = local_50;
  local_30 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_30 = '\x01';
  FUN_00d8dbf0();
  if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)unaff_RSI[0xb] == '\0') {
    FUN_00d8db40();
  }
  else {
    FUN_00d8db40();
  }
  FUN_00d8db40();
  local_44 = *(float *)(unaff_RSI + 10) * DAT_023908e0;
  local_48 = 1;
  local_50 = &DAT_024d0b28;
  FUN_00d94d80(local_44,&local_50);
  FUN_00d8db40();
  cVar2 = (**(code **)(*unaff_RSI + 0x378))();
  if (cVar2 != '\0') {
    FUN_00d8db40();
  }
  iVar1 = (int)unaff_RSI[7];
  if (iVar1 == 1) {
    FUN_00d8db40();
  }
  else if (iVar1 == 0) {
    FUN_00d8db40();
  }
  else if (iVar1 == -1) {
    FUN_00d8db40();
  }
  if (unaff_RSI[4] != 0) {
    local_48 = 1;
    local_50 = (undefined8 *)&DAT_02576920;
    local_40 = unaff_RSI[4];
    FUN_00d94d80(&DAT_02576920,&local_50);
  }
  if (*(char *)((longlong)unaff_RSI + 0x3c) != '\0') {
    FUN_00d8db40();
  }
  if (*(char *)((longlong)unaff_RSI + 0x3d) != '\0') {
    FUN_00d8db40();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00045510 — 512 bytes
// str: ""_progressObserver""
// str: ""GNOperationProgressObserver""
// str: ""GNJob""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00045510(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0278c9b0 == '\0') {
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
      DAT_026d2048 = (iVar1 != 0) << 6 | 0x82;
      _DAT_026d2030 = "_progressObserver";
      _DAT_026d2038 = &DAT_026d1ee0;
      _DAT_026d2040 = 0;
      _DAT_026d2050 = 0;
      uRam00000000026d2058 = 0;
      _DAT_026d2060 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d2070 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0278c930 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026ceef0 = "GNOperationProgressObserver";
          DAT_026cef00 = 0;
          _DAT_026ceef8 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_026d2030;
}




// ============================================================
// @007f1f80 — 502 bytes
// ============================================================

void FUN_007f1f80(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_68 = '\0';
  local_70 = 0;
  FUN_01502670(param_2,&local_70);
  lVar4 = local_40;
  pVar5 = (pthread_key_t)param_2;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = 0;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    local_50 = local_60;
    local_48 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_48 = '\x01';
    FUN_016cbba0();
    lVar2 = local_40;
    if (local_40 == 0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        bVar1 = true;
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar4 = 0;
    if (bVar1) {
      lVar4 = lVar2;
    }
    if (lVar2 != 0 && !bVar1) {
      FUN_00d50b00();
      lVar4 = lVar2;
    }
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



