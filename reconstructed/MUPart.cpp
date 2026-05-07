// Reconstructed implementation of MUPart
// From MikeCore binary — reverse-engineered pseudocode

#include "MUPart.h"

// ============================================================
// @01183b10 — 816 bytes
// str: ""bool""
// str: ""MUPart""
// str: ""_didRequestCacheValidation""
// str: ""MUNoteMappingGroup""
// str: ""MUNoteMapping""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01183b10(void)

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
  *unaff_RDI = &DAT_02606ad8;
  unaff_RDI[7] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01183fb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011840a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_partMapping";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMapping");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01184190();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_partMapping";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMappingLine");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01184280();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_partMapping";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteMappingGroup");
  }
  FUN_01184370();
  FUN_01184450();
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9e70 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9e38 = FUN_01183780();
        _DAT_027a9e30 = "_didRequestCacheValidation";
        _DAT_027a9e40 = 0;
        _DAT_027a9e48 = 0x6201;
        _DAT_027a9e50 = "bool";
        _DAT_027a9e58 = 0;
        uRam00000000027a9e60 = 0;
        _DAT_027a9e68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x69) = 0;
  lVar9 = FUN_01183780();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9eb8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9e80 = FUN_01183780();
        _DAT_027a9e78 = "_isVoicingValid";
        _DAT_027a9e88 = 0;
        _DAT_027a9e90 = 0x6200;
        _DAT_027a9e98 = "bool";
        _DAT_027a9ea0 = 0;
        uRam00000000027a9ea8 = 0;
        _DAT_027a9eb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01508bf0 — 708 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01508c6e) */
/* WARNING: Removing unreachable block (ram,0x01508c77) */

ulonglong FUN_01508bf0(pthread_key_t param_1)

{
  undefined8 uVar1;
  char cVar2;
  void *pvVar3;
  int extraout_var;
  int extraout_var_00;
  ulonglong uVar4;
  pthread_key_t pVar5;
  longlong unaff_RDI;
  ulonglong local_58;
  int iStack_4c;
  longlong local_40;
  char local_38;
  
  local_58 = *(ulonglong *)(unaff_RDI + 0x38);
  uVar1 = *(undefined8 *)(unaff_RDI + 0x40);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150ff70();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016caaa0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016caaa0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  FUN_016c4630(0,1);
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  FUN_016c4630();
  FUN_00e7c260();
  iStack_4c = (int)((ulonglong)uVar1 >> 0x20);
  if (((((iStack_4c != 0) && (local_58 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0')) &&
      ((extraout_var_00 != 0 && (extraout_var != 0)))) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_016c4760();
    FUN_00e7b970();
    if ((uVar4 >> 0x20 != 0) && (cVar2 = FUN_00e7c6b0(), cVar2 == '\0')) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = FUN_016c4760();
    }
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return local_58;
}




// ============================================================
// @015095d0 — 599 bytes
// str: ""MUPart""
// str: ""_instrument""
// str: ""MUFretInstrument""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01509750) */
/* WARNING: Removing unreachable block (ram,0x0150975e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015095d0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined4 uVar4;
  longlong local_30;
  longlong local_28;
  
  if ((DAT_027c2a18 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027c2968 = FUN_0151beb0();
    _DAT_027c2950 = "MUFretInstrument";
    _DAT_027c2958 = 0x50;
    _DAT_027c2960 = FUN_0151c1e0;
    _DAT_027c2970 = 0;
    uRam00000000027c2978 = 0;
    _DAT_027c2980 = 0;
    uRam00000000027c2988 = 0;
    _DAT_027c2990 = 0;
    uRam00000000027c2998 = 0;
    _DAT_027c29a0 = 0;
    uRam00000000027c29a8 = 0;
    _DAT_027c29b0 = 0;
    uRam00000000027c29b8 = 0;
    _DAT_027c29c0 = 0;
    uRam00000000027c29c8 = 0;
    _DAT_027c29d0 = 0;
    uRam00000000027c29d8 = 0;
    _DAT_027c29e0 = 0;
    uRam00000000027c29e8 = 0;
    _DAT_027c29f0 = 0;
    uRam00000000027c29f8 = 0;
    _DAT_027c2a00 = 0;
    _uRam00000000027c2a08 = 0;
    _DAT_027c2a10 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027c2a0b == '\0') {
    FUN_01509470();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00d4ff80();
    lVar2 = FUN_0151beb0();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_0151c0a0();
      iVar1 = FUN_00e7ddf0();
      pcVar3 = "_instrument";
      if (iVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"MUPart");
    }
    FUN_0151c360();
    FUN_0151c5e0();
    FUN_00d50c00();
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}



