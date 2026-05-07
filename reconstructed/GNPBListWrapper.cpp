// Reconstructed implementation of GNPBListWrapper
// From MikeCore binary — reverse-engineered pseudocode

#include "GNPBListWrapper.h"

// ============================================================
// @01cacee0 — 756 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01cad154) */
/* WARNING: Removing unreachable block (ram,0x01cad161) */

void FUN_01cacee0(undefined8 param_1,longlong *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_50;
  char local_48;
  
  local_c0 = *param_2;
  local_b8 = '\0';
  FUN_01cad410(param_1,&local_c0);
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    if (local_50 == (longlong *)*unaff_RSI) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
      return;
    }
    FUN_00d50b00();
    local_b0 = *param_2;
    local_a8 = '\0';
    (**(code **)(*local_50 + 0x20))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_50 + 0x10))();
    FUN_00d50b20();
  }
  local_a0 = (longlong *)*unaff_RSI;
  local_98 = '\0';
  local_90 = *param_2;
  local_88 = '\0';
  FUN_01cad550();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  local_80 = *param_2;
  local_78 = '\0';
  FUN_01ca74b0();
  if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00e1cfc0();
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x18) == 0) {
    FUN_00d50b00();
    FUN_01f27160();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  uVar2 = (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)puVar1)(*(undefined8 *)(*(longlong *)(unaff_RDI + 0x10) + 0x18),uVar2);
  (*(code *)PTR__objc_release_024a99a0)();
  return;
}




// ============================================================
// @01cacbe0 — 608 bytes
// str: ""GNPBListWrapper""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cacbe0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong local_68;
  undefined1 local_60;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  local_68 = *param_2;
  if (local_68 == 0) {
LAB_01caccd6:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_60 = 0;
  FUN_01cac990(param_1,&local_68);
  if (local_50[0] == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_01caccd6;
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) goto LAB_01caccd6;
  FUN_00d23340();
  pcVar5 = local_38;
  if (local_50[0] != '\0') {
    pcVar5 = local_50;
  }
  local_38[0] = local_50[0];
  *pcVar5 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_48 = local_58;
  local_40 = '\x01';
  if ((DAT_026efdd0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027f89a8 = FUN_00d4fe50();
    _DAT_027f8990 = "GNPBListWrapper";
    _DAT_027f8998 = 0x18;
    _DAT_027f89a0 = FUN_001e3740;
    _DAT_027f89b0 = 0;
    uRam00000000027f89b8 = 0;
    _DAT_027f89c0 = 0;
    uRam00000000027f89c8 = 0;
    _DAT_027f89d0 = 0;
    uRam00000000027f89d8 = 0;
    _DAT_027f89e0 = 0;
    uRam00000000027f89e8 = 0;
    _DAT_027f89f0 = 0;
    uRam00000000027f89f8 = 0;
    _DAT_027f8a00 = 0;
    uRam00000000027f8a08 = 0;
    _DAT_027f8a10 = 0;
    uRam00000000027f8a18 = 0;
    _DAT_027f8a20 = 0;
    uRam00000000027f8a28 = 0;
    _DAT_027f8a30 = 0;
    uRam00000000027f8a38 = 0;
    _DAT_027f8a40 = 0;
    uRam00000000027f8a48 = 0;
    _DAT_027f8a50 = 0;
    ___cxa_guard_release();
  }
  if (local_58 == (longlong *)0x0) {
LAB_01caccc1:
    plVar6 = DAT_02802688;
    cVar3 = DAT_02802690;
    if (DAT_02802690 == '\0') goto LAB_01cacd06;
LAB_01caccf7:
    if (plVar6 == (longlong *)0x0) goto LAB_01cacd06;
    FUN_00d50b00();
LAB_01cacd0b:
    lVar1 = plVar6[2];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (cVar3 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*local_58 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01caccc1;
    plVar6 = local_48;
    cVar3 = local_40;
    if (local_40 != '\0') goto LAB_01caccf7;
LAB_01cacd06:
    plVar2 = local_48;
    if (plVar6 != (longlong *)0x0) goto LAB_01cacd0b;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_40 != '\0') {
      *unaff_RDI = (longlong)local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto LAB_01cacd5f;
    }
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = (longlong)plVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01cacd5f:
  FUN_00d50b20();
  return;
}



