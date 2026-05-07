// Reconstructed implementation of MDNotificationObserver
// From MikeCore binary — reverse-engineered pseudocode

#include "MDNotificationObserver.h"

// ============================================================
// @00302550 — 2538 bytes
// str: ""bool""
// str: ""MDNotificationObserver""
// str: ""float""
// str: ""MDDocumentViewController""
// str: ""MDDocumentController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00302550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_002fb9c0();
  unaff_RDI[0x45] = &DAT_024c8618;
  if (DAT_026ff970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e0230 = "GNHeartbeatHandler";
      DAT_026e0240 = 0;
      _DAT_026e0238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_024e0b10;
  unaff_RDI[2] = &DAT_024e1580;
  unaff_RDI[0x27] = &DAT_024e15c0;
  unaff_RDI[0x45] = &DAT_024e16b8;
  unaff_RDI[0x46] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003032c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x47] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003033b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  puVar4 = unaff_RDI + 0x48;
  unaff_RDI[0x48] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003034a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver",param_3,param_4,puVar4);
  }
  unaff_RDI[0x49] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDTimeGridSetter");
  }
  *(undefined4 *)(unaff_RDI + 0x4a) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ffad8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ffaa0 = FUN_000829c0();
        _DAT_026ffa98 = "_trackHeaderWidth";
        _DAT_026ffaa8 = 0;
        _DAT_026ffab0 = 0x6600;
        _DAT_026ffab8 = "float";
        _DAT_026ffac0 = 0;
        uRam00000000026ffac8 = 0;
        _DAT_026ffad0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x4b] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocumentController");
  }
  unaff_RDI[0x4c] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocumentViewController");
  }
  unaff_RDI[0x4d] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  unaff_RDI[0x4e] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  unaff_RDI[0x4f] = 0;
  unaff_RDI[0x50] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ffc40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ffc08 = FUN_000829c0();
        _DAT_026ffc00 = "_startTimeRange";
        _DAT_026ffc10 = 0;
        _DAT_026ffc18 = 0;
        _DAT_026ffc20 = "GNDoubleRange";
        _DAT_026ffc28 = 0;
        uRam00000000026ffc30 = 0;
        _DAT_026ffc38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x51] = 0;
  unaff_RDI[0x52] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ffc88 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ffc50 = FUN_000829c0();
        _DAT_026ffc48 = "_destTimeRange";
        _DAT_026ffc58 = 0;
        _DAT_026ffc60 = 0;
        _DAT_026ffc68 = "GNDoubleRange";
        _DAT_026ffc70 = 0;
        uRam00000000026ffc78 = 0;
        _DAT_026ffc80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x53) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ffcd0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ffc98 = FUN_000829c0();
        _DAT_026ffc90 = "_animateZoomToTimeProgress";
        _DAT_026ffca0 = 0;
        _DAT_026ffca8 = 0x6600;
        _DAT_026ffcb0 = "float";
        _DAT_026ffcb8 = 0;
        uRam00000000026ffcc0 = 0;
        _DAT_026ffcc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00303a40();
  unaff_RDI[0x55] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303b20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x56] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303c10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x57] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303d00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x58] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303df0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  unaff_RDI[0x59] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303ee0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDKeyModifierActionHelper");
  }
  FUN_00303fd0();
  *(undefined1 *)(unaff_RDI + 0x5b) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026fff10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ffed8 = FUN_000829c0();
        _DAT_026ffed0 = "_updateViewPositionDisabled";
        _DAT_026ffee0 = 0;
        _DAT_026ffee8 = 0x6200;
        _DAT_026ffef0 = "bool";
        _DAT_026ffef8 = 0;
        uRam00000000026fff00 = 0;
        _DAT_026fff08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x5c] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003040b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDMultiTrackViewDelegate");
  }
  unaff_RDI[0x5d] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003041f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDSelectionController");
  }
  return;
}




// ============================================================
// @00d549a0 — 1804 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d55002) */
/* WARNING: Removing unreachable block (ram,0x00d5500e) */
/* WARNING: Removing unreachable block (ram,0x00d54ee5) */
/* WARNING: Removing unreachable block (ram,0x00d54ef1) */
/* WARNING: Removing unreachable block (ram,0x00d54e5f) */
/* WARNING: Removing unreachable block (ram,0x00d54e6b) */
/* WARNING: Removing unreachable block (ram,0x00d54c88) */
/* WARNING: Removing unreachable block (ram,0x00d54ca1) */
/* WARNING: Removing unreachable block (ram,0x00d54a1c) */
/* WARNING: Removing unreachable block (ram,0x00d54a28) */
/* WARNING: Removing unreachable block (ram,0x00d54b1a) */
/* WARNING: Removing unreachable block (ram,0x00d54b26) */
/* WARNING: Removing unreachable block (ram,0x00d54e45) */
/* WARNING: Removing unreachable block (ram,0x00d54e51) */
/* WARNING: Removing unreachable block (ram,0x00d54fab) */
/* WARNING: Removing unreachable block (ram,0x00d54fb7) */
/* WARNING: Removing unreachable block (ram,0x00d5501c) */
/* WARNING: Removing unreachable block (ram,0x00d55028) */
/* WARNING: Removing unreachable block (ram,0x00d54ecb) */
/* WARNING: Removing unreachable block (ram,0x00d54ed4) */
/* WARNING: Removing unreachable block (ram,0x00d54d48) */
/* WARNING: Removing unreachable block (ram,0x00d54d21) */
/* WARNING: Removing unreachable block (ram,0x00d54abc) */
/* WARNING: Removing unreachable block (ram,0x00d54ac9) */
/* WARNING: Removing unreachable block (ram,0x00d54d3b) */
/* WARNING: Removing unreachable block (ram,0x00d54b34) */
/* WARNING: Removing unreachable block (ram,0x00d54ba5) */
/* WARNING: Removing unreachable block (ram,0x00d54d52) */
/* WARNING: Removing unreachable block (ram,0x00d54bbc) */
/* WARNING: Removing unreachable block (ram,0x00d54bd5) */
/* WARNING: Removing unreachable block (ram,0x00d54bdd) */
/* WARNING: Removing unreachable block (ram,0x00d54cb0) */
/* WARNING: Removing unreachable block (ram,0x00d54cb9) */
/* WARNING: Removing unreachable block (ram,0x00d54cd4) */
/* WARNING: Removing unreachable block (ram,0x00d54ce1) */
/* WARNING: Removing unreachable block (ram,0x00d54c34) */
/* WARNING: Removing unreachable block (ram,0x00d54c38) */
/* WARNING: Removing unreachable block (ram,0x00d54c4d) */
/* WARNING: Removing unreachable block (ram,0x00d54c52) */
/* WARNING: Removing unreachable block (ram,0x00d54db2) */
/* WARNING: Removing unreachable block (ram,0x00d54dd6) */
/* WARNING: Removing unreachable block (ram,0x00d54ddb) */
/* WARNING: Removing unreachable block (ram,0x00d54df1) */
/* WARNING: Removing unreachable block (ram,0x00d54dfa) */
/* WARNING: Removing unreachable block (ram,0x00d54dff) */
/* WARNING: Removing unreachable block (ram,0x00d54e80) */
/* WARNING: Removing unreachable block (ram,0x00d54e88) */
/* WARNING: Removing unreachable block (ram,0x00d54cf9) */
/* WARNING: Removing unreachable block (ram,0x00d54b80) */
/* WARNING: Removing unreachable block (ram,0x00d54ba0) */
/* WARNING: Removing unreachable block (ram,0x00d54b82) */
/* WARNING: Removing unreachable block (ram,0x00d54ba2) */
/* WARNING: Removing unreachable block (ram,0x00d54d13) */
/* WARNING: Removing unreachable block (ram,0x00d550a2) */
/* WARNING: Removing unreachable block (ram,0x00d550af) */
/* WARNING: Removing unreachable block (ram,0x00d55040) */
/* WARNING: Removing unreachable block (ram,0x00d54d9c) */
/* WARNING: Removing unreachable block (ram,0x00d54eae) */
/* WARNING: Removing unreachable block (ram,0x00d54da6) */
/* WARNING: Removing unreachable block (ram,0x00d55088) */
/* WARNING: Removing unreachable block (ram,0x00d55061) */

undefined8 * FUN_00d549a0(void)

{
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  
  (**(code **)(*unaff_RSI + 0x360))();
  FUN_00e86210();
  FUN_00c85dd0();
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00e31530();
  }
  if (local_58 == (longlong *)0x0) {
    (**(code **)(*unaff_RSI + 0xf8))();
    (**(code **)(*unaff_RSI + 0x1f8))();
    FUN_00c841b0();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00e31530();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00dd4dc0();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c85c30();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    FUN_00e31530();
    (**(code **)(*local_58 + 0x368))();
    if (unaff_RSI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @000aa260 — 1762 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aa260(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  double dVar8;
  undefined8 uVar9;
  undefined8 *local_c8;
  undefined1 local_c0;
  undefined8 *local_b8;
  undefined1 local_b0;
  undefined8 *local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  longlong local_40;
  char local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar2)();
  local_58 = puVar6;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*pcVar2)();
  lVar1 = unaff_RDI[0x1a];
  local_50 = puVar6;
  if (lVar1 != 0) {
    FUN_00d50b00();
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = unaff_RDI[0x13];
  if ((char)unaff_RDI[0x11] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x16];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x19];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x17];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    local_48 = puVar5;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x16];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x14];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x19];
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = DAT_026db000;
    if (DAT_026db000 != 0) {
      FUN_00d50b00();
    }
    dVar8 = (double)FUN_00e7d6f0();
    uVar7 = (ulonglong)(dVar8 * DAT_023907c0);
    dVar8 = dVar8 * DAT_023907c0 - _DAT_023907c8;
    uVar9 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar9 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    bVar4 = (byte)(((longlong)dVar8 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
    local_68 = lVar1;
    local_60 = '\0';
    FUN_000175c0(uVar9,&local_68);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
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
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar5 = local_48;
    if ((lVar3 != 0 & bVar4) != 0) {
      lVar1 = unaff_RDI[0x12];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = unaff_RDI[0x17];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    uVar9 = FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  uVar9 = FUN_004b43d0(uVar9,0);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = 1;
  local_98 = lVar1;
  local_c0 = 0;
  local_c8 = puVar5;
  uVar9 = FUN_000aaf60(uVar9,&local_c8);
  if (lVar1 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  uVar9 = FUN_004b43d0(uVar9,2);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = 1;
  local_88 = lVar1;
  local_b8 = local_58;
  local_b0 = 0;
  uVar9 = FUN_000aaf60(uVar9,&local_b8);
  if (lVar1 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  uVar9 = FUN_004b43d0(uVar9,1);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = 1;
  local_78 = lVar1;
  local_a8 = local_50;
  local_a0 = 0;
  FUN_000aaf60(uVar9,&local_a8);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x5c0))();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}




// ============================================================
// @00d51ef0 — 1374 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d52308) */
/* WARNING: Removing unreachable block (ram,0x00d52315) */
/* WARNING: Removing unreachable block (ram,0x00d521fc) */
/* WARNING: Removing unreachable block (ram,0x00d52209) */

void FUN_00d51ef0(void)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_110;
  char local_108 [16];
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x360))();
  FUN_00e86210();
  FUN_00c820a0();
  pcVar3 = local_38;
  if (local_108[0] != '\0') {
    pcVar3 = local_108;
  }
  local_38[0] = local_108[0];
  *pcVar3 = '\0';
  if ((local_108[0] != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (local_110 != 0) {
    local_108[0] = '\0';
    local_f0 = 0;
    local_f8 = 0;
    if (0 < *(int *)(local_110 + 0xc)) {
      lVar4 = 0;
      do {
        local_e8 = *(longlong *)(*(longlong *)(local_110 + 0x10) + lVar4 * 8);
        local_e0 = '\0';
        cVar1 = (**(code **)(*unaff_RDI + 0x2b8))();
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          uVar2 = FUN_00d77bd0();
          if ((int)((ulonglong)uVar2 >> 0x20) < 2) {
            if ((int)uVar2 == 0) {
              FUN_00d74120();
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00e31530();
                }
              }
              else {
                local_58 = '\0';
              }
              (**(code **)(*unaff_RDI + 0x88))();
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00e31530();
                }
              }
              else {
                local_40 = '\0';
              }
              if (local_60 != 0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if (local_48 != 0) {
                if (local_48 == *unaff_RSI) {
                  local_b0 = '\0';
                  local_b8 = 0;
                  FUN_00d74120();
                  if (local_40 == '\0') {
                    if (local_48 != 0) {
                      FUN_00e31530();
                    }
                  }
                  else {
                    local_40 = '\0';
                  }
                  (**(code **)(*unaff_RDI + 0x80))();
                  if (local_48 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
            }
          }
          else {
            FUN_00d74120();
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_58 = '\0';
            }
            (**(code **)(*unaff_RDI + 0x88))();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if (local_48 != 0) {
              local_d8 = *unaff_RSI;
              local_d0 = '\0';
              cVar1 = FUN_00d23d70();
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              if (cVar1 != '\0') {
                local_c8 = *unaff_RSI;
                local_c0 = '\0';
                FUN_00d74120();
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00e31530();
                  }
                }
                else {
                  local_40 = '\0';
                }
                (**(code **)(*unaff_RDI + 200))();
                if (local_48 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_c0 != '\0') && (local_c8 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
          }
        }
        lVar4 = lVar4 + 1;
        local_f8 = CONCAT44(local_f8._4_4_,(int)lVar4);
      } while ((int)lVar4 < *(int *)(local_110 + 0xc));
    }
    FUN_00559a70();
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @005e3630 — 1325 bytes
// str: ""bool""
// str: ""MDNotificationObserver""
// str: ""GNLabel""
// str: ""GNSlider""
// str: ""GNPopUpButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e3630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_002730b0();
  *unaff_RDI = &DAT_02512e00;
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3dc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNControlMatrix");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3eb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3fa0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4090();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  puVar4 = unaff_RDI + 0x15;
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4180();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton",param_3,param_4,puVar4);
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4270();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4360();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPopUpButton");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4450();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformance");
  }
  *(undefined1 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271e730 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271e6f8 = FUN_005e3450();
        _DAT_0271e6f0 = "_didChooseQuantization";
        _DAT_0271e700 = 0;
        _DAT_0271e708 = 0x6200;
        _DAT_0271e710 = "bool";
        _DAT_0271e718 = 0;
        uRam000000000271e720 = 0;
        _DAT_0271e728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4540();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x1b] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4630();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNComboBox");
  }
  *(undefined1 *)(unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271e808 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271e7d0 = FUN_005e3450();
        _DAT_0271e7c8 = "_customValue";
        _DAT_0271e7d8 = 0;
        _DAT_0271e7e0 = 0x6200;
        _DAT_0271e7e8 = "bool";
        _DAT_0271e7f0 = 0;
        uRam000000000271e7f8 = 0;
        _DAT_0271e800 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @000a9c40 — 1176 bytes
// ============================================================

void FUN_000a9c40(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_30;
  char local_28;
  
  FUN_004b3c80();
  FUN_004b4d40();
  lVar2 = DAT_026daff8;
  if (DAT_026daff8 != 0) {
    FUN_00d50b00();
  }
  FUN_003b6200();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0x88) = 1;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &DAT_024cd8a0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  (*DAT_024cd8b8)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xa0);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xa0) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &DAT_024cde70;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  (*DAT_024cde88)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xa8);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xa8) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0xb0) == 0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_000161a0();
    *puVar4 = &DAT_024f08f0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    (*DAT_024f0908)();
    puVar1 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar1 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0xb0) = puVar4;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &DAT_02515cb0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  (*DAT_02515cc8)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x90);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x90) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &DAT_024f6e28;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  (*DAT_024f6e40)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x98);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x98) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &DAT_0250a0d8;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  (*DAT_0250a0f0)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xb8);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xb8) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  iVar3 = FUN_000030b0();
  if (iVar3 != 2) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_000161a0();
    *puVar4 = &DAT_024c53f8;
    (*DAT_024c5410)();
    puVar1 = *(undefined8 **)(unaff_RDI + 200);
    if (puVar1 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 200) = puVar4;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b00();
  local_70 = DAT_02709de0;
  if (DAT_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6cf0;
  local_68 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf690(&local_60,&local_70,&local_50);
  lVar2 = *(longlong *)(unaff_RDI + 0xc0);
  lVar5 = lVar2;
  if (lVar2 == local_30) goto LAB_000aa051;
  lVar5 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar5 = 0;
      goto LAB_000aa006;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0xc0);
    *(longlong *)(unaff_RDI + 0xc0) = local_30;
  }
  else {
    local_28 = '\0';
LAB_000aa006:
    *(longlong *)(unaff_RDI + 0xc0) = lVar5;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar5 = local_30;
  }
LAB_000aa051:
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_000aa260();
  return;
}




// ============================================================
// @00d529a0 — 1099 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d52dba) */
/* WARNING: Removing unreachable block (ram,0x00d52dc7) */
/* WARNING: Removing unreachable block (ram,0x00d52d80) */
/* WARNING: Removing unreachable block (ram,0x00d52d8d) */
/* WARNING: Removing unreachable block (ram,0x00d52c17) */
/* WARNING: Removing unreachable block (ram,0x00d52c40) */
/* WARNING: Removing unreachable block (ram,0x00d52c19) */
/* WARNING: Removing unreachable block (ram,0x00d52c42) */

void FUN_00d529a0(void)

{
  longlong lVar1;
  char cVar2;
  int extraout_var;
  longlong lVar3;
  char *pcVar4;
  code *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar5;
  longlong local_f8;
  char local_f0 [16];
  undefined8 local_e0;
  undefined4 local_d8;
  longlong local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x360))();
  FUN_00e86210();
  FUN_00c820a0();
  pcVar4 = local_38;
  if (local_f0[0] != '\0') {
    pcVar4 = local_f0;
  }
  local_38[0] = local_f0[0];
  *pcVar4 = '\0';
  if ((local_f0[0] != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (local_f8 != 0) {
    local_f0[0] = '\0';
    local_d8 = 0;
    local_e0 = 0;
    if (0 < *(int *)(local_f8 + 0xc)) {
      uVar5 = 0;
      local_d0 = local_f8;
      do {
        lVar1 = local_70;
        local_c8 = *(longlong *)(*(longlong *)(local_d0 + 0x10) + (ulonglong)uVar5 * 8);
        local_c0 = '\0';
        cVar2 = (**(code **)(*unaff_RDI + 0x2b8))();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_00d77bd0();
          if (extraout_var < 2) {
            FUN_00d74120();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            (**(code **)(*unaff_RDI + 0x88))();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_68 = '\0';
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 != 0) {
              local_a8 = local_70;
              local_a0 = '\0';
              (*unaff_RSI)();
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          else {
            FUN_00d74120();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            (**(code **)(*unaff_RDI + 0x88))();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_68 = '\0';
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 != 0) {
              local_68 = '\0';
              local_70 = 0;
              local_58 = -1;
              while( true ) {
                lVar3 = (longlong)local_58;
                local_58 = local_58 + 1;
                if (*(int *)(lVar1 + 0xc) <= local_58) break;
                local_70 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
                local_b0 = '\0';
                local_b8 = local_70;
                (*unaff_RSI)();
                if ((local_b0 != '\0') && (local_b8 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00083b20();
              FUN_00d50b20();
            }
          }
        }
        uVar5 = uVar5 + 1;
        local_e0 = CONCAT44(local_e0._4_4_,uVar5);
      } while ((int)uVar5 < *(int *)(local_d0 + 0xc));
    }
    FUN_00559a70();
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00307e60 — 1083 bytes
// str: ""MDNotificationObserver""
// str: ""GNTextField""
// str: ""GNButton""
// str: ""MDPropertyObserver""
// str: ""MDVolumeSlider""
// ============================================================

void FUN_00307e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00304cf0();
  *unaff_RDI = &DAT_024e90b8;
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308500();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUMeterView");
  }
  puVar4 = unaff_RDI + 0x17;
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003085f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField",param_3,param_4,puVar4);
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003086e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDVolumeSlider");
  }
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003087d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003088c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  unaff_RDI[0x1b] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003089b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  unaff_RDI[0x1c] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308aa0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  unaff_RDI[0x1d] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308b90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  FUN_00308c80();
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308d60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x20] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308e50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x21] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308f40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  return;
}




// ============================================================
// @0026b600 — 1063 bytes
// str: ""bool""
// str: ""MDNotificationObserver""
// str: ""MDToolbarVersionCtrl""
// str: ""MDToolbarQuantizeMacrosCtrl""
// str: ""MDToolbarUndoCtrl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0026b600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_0026adc0();
  *unaff_RDI = &DAT_024c8000;
  *(undefined1 *)(unaff_RDI + 0x11) = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f7138 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f7100 = FUN_000ad2d0();
        _DAT_026f70f8 = "_showsEditorBar";
        _DAT_026f7108 = 0;
        _DAT_026f7110 = 0x6200;
        _DAT_026f7118 = "bool";
        _DAT_026f7120 = 0;
        uRam00000000026f7128 = 0;
        _DAT_026f7130 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bc70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditMixCtrl");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bd60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditModeCtrl");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026be50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarQuantizeMacrosCtrl");
  }
  puVar4 = unaff_RDI + 0x15;
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bf40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarUndoCtrl",param_3,param_4,puVar4);
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c030();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarToolCtrl");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c120();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditorViewCtrl");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c210();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c300();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarVersionCtrl");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c3f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTrackMemoryUsageCtrl");
  }
  return;
}




// ============================================================
// @00d53a00 — 1007 bytes
// ============================================================

void FUN_00d53a00(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_58;
  uint local_50;
  undefined4 local_4c;
  longlong *local_48;
  uint local_40;
  undefined8 local_38;
  
  local_d8 = *param_1;
  local_d0 = '\0';
  uVar4 = (**(code **)(*unaff_RDI + 0xe8))(param_1,&local_d8);
  plVar2 = local_48;
  if ((char)local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      uVar4 = FUN_00e31530(uVar4,0);
      if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar4 = FUN_00d50b20();
      }
    }
  }
  else {
    local_40 = local_40 & 0xffffff00;
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)FUN_00d8b910();
    uVar4 = extraout_XMM0_Qa;
  }
  if (param_2 == 'I') {
    FUN_00e31530(uVar4,0);
    local_50 = 1;
    local_58 = &DAT_024cc6f0;
    local_4c = *(undefined4 *)unaff_RSI;
    uVar4 = FUN_00d3af80(&DAT_0277e4be,pcVar3,&local_58);
    plVar1 = local_48;
    if ((char)local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  else if (param_2 == 'd') {
    FUN_00e31530(uVar4,0);
    local_40 = 1;
    local_48 = (longlong *)&DAT_024de5e0;
    local_38 = *unaff_RSI;
    uVar4 = FUN_00d3af80(&DAT_0277e4b8,pcVar3,&local_48);
    plVar1 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  else if (param_2 == 'f') {
    FUN_00e31530(uVar4,0);
    local_50 = 1;
    local_58 = &DAT_024d0b28;
    local_4c = *(undefined4 *)unaff_RSI;
    uVar4 = FUN_00d3af80(&DAT_0277e4bb,pcVar3,&local_58);
    plVar1 = local_48;
    if ((char)local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  local_c8 = *param_1;
  local_c0 = '\0';
  (**(code **)(*unaff_RDI + 0x260))(&local_c8,(int)param_2);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @005e4eb0 — 968 bytes
// str: ""MDNotificationObserver""
// str: ""_startTime""
// str: ""MUTimeJump""
// str: ""MUScrubbingTimeProgressor""
// str: ""MURenderer""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e4eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_005da070();
  *unaff_RDI = &DAT_024e25a0;
  unaff_RDI[2] = &DAT_024e2a70;
  unaff_RDI[5] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5440();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeJump");
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ee18 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ede0 = FUN_003235a0();
        _DAT_0271edd8 = "_stopTime";
        _DAT_0271ede8 = 0;
        _DAT_0271edf0 = 0x6400;
        _DAT_0271edf8 = "double";
        _DAT_0271ee00 = 0;
        uRam000000000271ee08 = 0;
        _DAT_0271ee10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ee60 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ee28 = FUN_003235a0();
        _DAT_0271ee20 = "_startTime";
        _DAT_0271ee30 = 0;
        _DAT_0271ee38 = 0x6400;
        _DAT_0271ee40 = "double";
        _DAT_0271ee48 = 0;
        uRam000000000271ee50 = 0;
        _DAT_0271ee58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5530();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScrubbingTimeProgressor");
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5620();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  puVar4 = unaff_RDI + 10;
  unaff_RDI[10] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5710();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver",param_3,param_4,puVar4);
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5800();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e58f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  FUN_005e59e0();
  FUN_005e5ac0();
  return;
}




// ============================================================
// @005e5dc0 — 965 bytes
// str: ""MDNotificationObserver""
// str: ""MDToolbarGridCtrl""
// str: ""MDToolbarLeftConfigCtrl""
// str: ""MDToolbarTempoCtrl""
// str: ""MDToolbarTransportCtrl""
// ============================================================

void FUN_005e5dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_0026adc0();
  *unaff_RDI = &DAT_02515680;
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e63f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTransportCtrl");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e64e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTempoCtrl");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e65d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarRightConfigCtrl");
  }
  puVar4 = unaff_RDI + 0x14;
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e66c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarLeftConfigCtrl",param_3,param_4,puVar4);
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e67b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarVolumeCtrl");
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e68a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEdtionCtrl");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6990();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarActivityCtrl");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarGridCtrl");
  }
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6b70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarScaleModeCtrl");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6c60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  return;
}




// ============================================================
// @00d51840 — 807 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d51b3a) */
/* WARNING: Removing unreachable block (ram,0x00d51b43) */
/* WARNING: Removing unreachable block (ram,0x00d51ad2) */
/* WARNING: Removing unreachable block (ram,0x00d51adb) */
/* WARNING: Removing unreachable block (ram,0x00d51b04) */
/* WARNING: Removing unreachable block (ram,0x00d51b0d) */
/* WARNING: Removing unreachable block (ram,0x00d518e8) */
/* WARNING: Removing unreachable block (ram,0x00d518f4) */
/* WARNING: Removing unreachable block (ram,0x00d51a16) */
/* WARNING: Removing unreachable block (ram,0x00d51a1f) */
/* WARNING: Removing unreachable block (ram,0x00d51a67) */
/* WARNING: Removing unreachable block (ram,0x00d51a90) */
/* WARNING: Removing unreachable block (ram,0x00d51a69) */
/* WARNING: Removing unreachable block (ram,0x00d51a92) */

undefined8 * FUN_00d51840(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar5;
  longlong local_a8;
  char local_a0;
  longlong local_58;
  char local_50;
  int local_40;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  *(undefined4 *)(puVar3 + 1) = 0;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*unaff_RSI + 0x360))();
  FUN_00e86210();
  FUN_00c85c00();
  if (local_a0 == '\0') {
    if (local_a8 == 0) goto LAB_00d51b70;
    FUN_00e31530();
  }
  else if (local_a8 == 0) goto LAB_00d51b70;
  if (0 < *(int *)(local_a8 + 0xc)) {
    iVar5 = 0;
    do {
      lVar1 = local_58;
      cVar2 = FUN_00d77de0();
      if (cVar2 == '\0') {
        (**(code **)(*unaff_RSI + 0x210))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00e31530();
            goto LAB_00d51b20;
          }
        }
        else if (local_58 != 0) {
LAB_00d51b20:
          FUN_00d21140();
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*unaff_RSI + 0x210))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00e31530();
            goto LAB_00d51a30;
          }
        }
        else if (local_58 != 0) {
LAB_00d51a30:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          while( true ) {
            lVar4 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar1 + 0xc) <= local_40) break;
            local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
            FUN_00d21140();
          }
          FUN_00083b20();
          FUN_00d50b20();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_a8 + 0xc));
  }
  FUN_00559a70();
  FUN_00d50b20();
LAB_00d51b70:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @00d55d70 — 723 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d55eef) */
/* WARNING: Removing unreachable block (ram,0x00d55efb) */
/* WARNING: Removing unreachable block (ram,0x00d55f0d) */
/* WARNING: Removing unreachable block (ram,0x00d55f1d) */

void FUN_00d55d70(void)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar5 = FUN_00d8ca50();
  lVar2 = DAT_02774da0;
  if (cVar5 == '\0') {
    (**(code **)(*unaff_RDI + 0x80))();
  }
  else {
    if (DAT_02774da0 != 0) {
      FUN_00e31530();
    }
    local_88 = lVar2;
    local_80 = '\x01';
    FUN_00d91000(1,&local_88);
    plVar3 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00e31530(), local_40[0] != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    plVar4 = local_48;
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00e31530();
    }
    FUN_00d23740();
    if (*(int *)((longlong)plVar3 + 0xc) == 0) {
      if (unaff_RDI == (longlong *)0x0) {
        unaff_RDI = (longlong *)0x0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        FUN_00e31530();
      }
    }
    else {
      local_78 = plVar3;
      local_70 = '\0';
      (**(code **)(*unaff_RDI + 0xa0))();
      unaff_RDI = local_48;
      if (local_48 == (longlong *)0x0) {
        bVar1 = false;
        unaff_RDI = (longlong *)0x0;
      }
      else if (local_40[0] == '\0') {
        FUN_00e31530();
        bVar1 = true;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        bVar1 = true;
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_68 = *unaff_RSI;
    local_60 = '\0';
    local_58 = plVar4;
    local_50 = '\0';
    (**(code **)(*unaff_RDI + 0x80))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00d50630 — 722 bytes
// str: ""MDNotificationObserver""
// str: ""MDPropertyObserver""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d508bd) */
/* WARNING: Removing unreachable block (ram,0x00d508ca) */
/* WARNING: Removing unreachable block (ram,0x00d50884) */
/* WARNING: Removing unreachable block (ram,0x00d50891) */
/* WARNING: Removing unreachable block (ram,0x00d506f6) */
/* WARNING: Removing unreachable block (ram,0x00d506ff) */
/* WARNING: Removing unreachable block (ram,0x00d507c9) */
/* WARNING: Removing unreachable block (ram,0x00d5082f) */
/* WARNING: Removing unreachable block (ram,0x00d50845) */
/* WARNING: Removing unreachable block (ram,0x00d5084e) */
/* WARNING: Removing unreachable block (ram,0x00d50853) */
/* WARNING: Removing unreachable block (ram,0x00d5089b) */
/* WARNING: Removing unreachable block (ram,0x00d5085f) */
/* WARNING: Removing unreachable block (ram,0x00d5073e) */

void FUN_00d50630(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  int iVar5;
  longlong local_80;
  char local_78;
  longlong local_40;
  char local_38;
  
  plVar4 = (longlong *)*unaff_RDI;
  FUN_00e8b690();
  if (plVar4 == (longlong *)0x0) {
LAB_00d50675:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar4 = unaff_RDI;
    if (cVar1 == '\0') goto LAB_00d50675;
  }
  if (*plVar4 != 0) {
    return;
  }
  (**(code **)(*(longlong *)*unaff_RDI + 0x360))();
  lVar3 = FUN_00e86210();
  if (lVar3 != 0) {
    FUN_00e31530();
  }
  FUN_00c81c60();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00d508e5;
    FUN_00e31530();
  }
  else if (local_80 == 0) goto LAB_00d508e5;
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar5 = 0;
    do {
      cVar1 = FUN_00d77e10();
      if (cVar1 != '\0') {
        FUN_00d77be0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          FUN_00d76b90();
          FUN_00d8b910();
          iVar2 = FUN_00e7ddf0();
          if ((iVar2 == 0) || (iVar2 = FUN_00e7ddf0(), iVar2 == 0)) {
            (**(code **)(*(longlong *)*unaff_RDI + 0x210))();
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_80 + 0xc));
  }
  FUN_00559a70();
  FUN_00d50b20();
LAB_00d508e5:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0050da50 — 719 bytes
// str: ""bool""
// str: ""MDNotificationObserver""
// str: ""_showsReplaceRanges""
// str: ""_isEditingDetection""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050da50(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0050aad0();
  *unaff_RDI = &DAT_024e31c0;
  unaff_RDI[2] = &DAT_024e3c40;
  unaff_RDI[0x27] = &DAT_024e3c80;
  *(undefined1 *)((longlong)unaff_RDI + 0x1ae) = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0270a720 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0270a6e8 = FUN_00275860();
        _DAT_0270a6e0 = "_showsReplaceRanges";
        _DAT_0270a6f0 = 0;
        _DAT_0270a6f8 = 0x6200;
        _DAT_0270a700 = "bool";
        _DAT_0270a708 = 0;
        uRam000000000270a710 = 0;
        _DAT_0270a718 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0050de10();
  unaff_RDI[0x37] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050def0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x38] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050dfe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x39] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050e0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  *(undefined1 *)(unaff_RDI + 0x3a) = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0270a888 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0270a850 = FUN_00275860();
        _DAT_0270a848 = "_isEditingDetection";
        _DAT_0270a858 = 0;
        _DAT_0270a860 = 0x6200;
        _DAT_0270a868 = "bool";
        _DAT_0270a870 = 0;
        uRam000000000270a878 = 0;
        _DAT_0270a880 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00d54360 — 612 bytes
// ============================================================

void FUN_00d54360(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  char *pcVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_88;
  char local_80;
  undefined8 *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  local_c8 = *param_2;
  local_c0 = '\0';
  (**(code **)(*unaff_RDI + 0xe8))(param_1,&local_c8);
  puVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00e31530();
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 == (undefined8 *)0x0) {
    pcVar4 = "";
  }
  else {
    pcVar4 = (char *)FUN_00d8b910();
  }
  FUN_00e31530();
  local_40 = *unaff_RSI;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_40 != 0) {
    FUN_00e31530();
  }
  local_38 = '\x01';
  FUN_00d3af80(&DAT_026dc63a,pcVar4,&local_50);
  plVar1 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (longlong *)0x0) && (FUN_00e31530(), local_80 != '\0')) &&
       (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar1 + 0x368))();
  if (cVar3 == '\0') {
    local_b8 = *unaff_RSI;
    local_b0 = '\0';
    local_a8 = *param_2;
    local_a0 = '\0';
    (**(code **)(*unaff_RDI + 0x1f0))(1,&local_a8,1);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @000a8dd0 — 577 bytes
// str: ""MDNotificationObserver""
// str: ""MDInspectorViewController""
// str: ""_selectedIndex""
// str: ""_fixedCount""
// str: ""GNInt""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a8dd0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_000a5ee0();
  *unaff_RDI = &DAT_024e46f0;
  unaff_RDI[2] = &DAT_024e50e0;
  unaff_RDI[0x31] = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a9080();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDInspectorViewController");
  }
  unaff_RDI[0x32] = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a9170();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026dada8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026dad70 = FUN_000a2ee0();
        _DAT_026dad68 = "_selectedIndex";
        _DAT_026dad78 = 0;
        _DAT_026dad80 = 0x6900;
        _DAT_026dad88 = "GNInt";
        _DAT_026dad90 = 0;
        uRam00000000026dad98 = 0;
        _DAT_026dada0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x19c) = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026dadf0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026dadb8 = FUN_000a2ee0();
        _DAT_026dadb0 = "_fixedCount";
        _DAT_026dadc0 = 0;
        _DAT_026dadc8 = 0x6900;
        _DAT_026dadd0 = "GNInt";
        _DAT_026dadd8 = 0;
        uRam00000000026dade0 = 0;
        _DAT_026dade8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}



