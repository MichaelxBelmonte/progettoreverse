// Reconstructed implementation of GNCelemonyHTTPDownloadRequest
// From MikeCore binary — reverse-engineered pseudocode

#include "GNCelemonyHTTPDownloadRequest.h"

// ============================================================
// @00e51950 — 1949 bytes
// str: ""GNCelemonyHTTPDownloadRequest""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e51950(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  int iVar7;
  longlong unaff_RDI;
  longlong *plVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
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
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 local_60;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_00e93050();
  local_90 = local_58;
  local_88 = 0;
  if (local_50[0] == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  local_88 = '\x01';
  uVar3 = FUN_00e1cfc0();
  uVar3 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,uVar3);
  uVar9 = extraout_XMM0_Da_00;
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  plVar8 = (longlong *)(unaff_RDI + 0x10);
  local_60 = (*(code *)PTR__objc_msgSend_024a9998)(uVar9,uVar3);
  FUN_00e94b90();
  local_80 = local_58;
  local_78 = 0;
  if (local_50[0] == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  local_78 = '\x01';
  uVar3 = FUN_00e1cfc0();
  (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_01,uVar3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e92270();
  (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_00e94c30();
  lVar4 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00e51b24;
    }
  }
  else if (local_58 != 0) {
LAB_00e51b24:
    uVar3 = (*(code *)PTR__objc_msgSend_024a9998)
                      ((longlong)*(int *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x10));
    (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_02,uVar3);
    FUN_00d50b20();
  }
  FUN_00e94af0();
  FUN_00c9fe20();
  lVar4 = local_58;
  pcVar6 = &local_a0;
  if (local_50[0] != '\0') {
    pcVar6 = local_50;
  }
  local_a0 = local_50[0];
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 == '\0') && (lVar4 != 0)) {
    FUN_00d50b00();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    local_50[0] = '\0';
    local_58 = 0;
    local_48 = lVar4;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar7 = -local_40._4_4_;
        }
        else {
          iVar7 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar7);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar7 = 0;
        }
        local_40 = CONCAT44(iVar7,(int)local_40);
      }
      lVar4 = (longlong)(int)local_40;
      iVar7 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar7);
      if (*(int *)(local_48 + 0xc) <= iVar7) break;
      local_58 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar4 * 8);
      uVar9 = FUN_00e94af0();
      local_f0 = local_58;
      local_e8 = '\0';
      FUN_01de4130(uVar9,&local_f0);
      lVar4 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (CONCAT71(uStack_9f,local_a0) != 0)) {
        FUN_00d50b20();
      }
      local_e0 = lVar4;
      local_d8 = '\0';
      uVar3 = FUN_00e1cfc0();
      local_d0 = local_58;
      local_c8 = '\0';
      uVar5 = FUN_00e1cfc0();
      (*(code *)PTR__objc_msgSend_024a9998)(uVar5,uVar3);
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00018280();
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*plVar8;
  if ((DAT_02786ce8 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_02786c38 = FUN_00e79220();
    _DAT_02786c20 = "GNCelemonyHTTPDownloadRequest";
    _DAT_02786c28 = 0xd0;
    _DAT_02786c30 = FUN_00e53020;
    _DAT_02786c40 = 0;
    uRam0000000002786c48 = 0;
    _DAT_02786c50 = 0;
    _DAT_02786cc8 = 0;
    uRam0000000002786cd0 = 0;
    _DAT_02786cd8 = 0;
    DAT_02786cda = 2;
    _DAT_02786c58 = 0;
    uRam0000000002786c60 = 0;
    _DAT_02786c68 = 0;
    uRam0000000002786c70 = 0;
    _DAT_02786c78 = 0;
    uRam0000000002786c80 = 0;
    _DAT_02786c88 = 0;
    uRam0000000002786c90 = 0;
    _DAT_02786c98 = 0;
    uRam0000000002786ca0 = 0;
    _DAT_02786ca8 = 0;
    uRam0000000002786cb0 = 0;
    _DAT_02786cb8 = 0;
    uRam0000000002786cc0 = 0;
    DAT_02786ce3 = 0;
    _DAT_02786cdb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00e51e14;
  }
  plVar8 = &DAT_02802688;
LAB_00e51e14:
  if (*plVar8 == 0) {
    FUN_00e2da70();
    uVar9 = FUN_00e2dce0();
    (*(code *)PTR__objc_msgSend_024a9998)(uVar9,local_60);
    uVar3 = (*(code *)PTR__objc_retain_024a99a8)();
    *(undefined8 *)(unaff_RDI + 0x38) = uVar3;
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    _objc_alloc();
    uVar9 = FUN_00d50b00();
    local_a8 = '\x01';
    local_b0 = unaff_RDI;
    (*(code *)PTR__objc_msgSend_024a9998)(uVar9,&local_b0);
    uVar3 = _objc_autorelease();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00e2da70();
    uVar9 = FUN_00e2dce0();
    (*(code *)PTR__objc_msgSend_024a9998)(uVar9,local_60);
    uVar3 = (*(code *)PTR__objc_retain_024a99a8)();
    *(undefined8 *)(unaff_RDI + 0x38) = uVar3;
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    _objc_alloc();
    uVar9 = FUN_00d50b00();
    local_b8 = '\x01';
    local_c0 = unaff_RDI;
    (*(code *)PTR__objc_msgSend_024a9998)(uVar9,&local_c0);
    uVar3 = _objc_autorelease();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  iVar7 = FUN_01f99c60(0,0);
  if (iVar7 == 0) {
    FUN_00e50fb0();
    *(undefined1 *)(unaff_RDI + 0x60) = 1;
    lVar4 = *(longlong *)(unaff_RDI + 0x38);
  }
  else {
    (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_03,uVar3);
    *(undefined1 *)(unaff_RDI + 0x60) = 1;
    lVar4 = *(longlong *)(unaff_RDI + 0x38);
  }
  if (lVar4 != 0) {
    cVar2 = FUN_00e92480();
    if (cVar2 == '\0') {
      if (*(char *)(unaff_RDI + 0x60) != '\0') {
        *(undefined1 *)(unaff_RDI + 0x60) = 0;
        (*(code *)PTR__objc_msgSend_024a9998)();
      }
    }
    else if (*(char *)(unaff_RDI + 0x60) == '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)();
      *(undefined1 *)(unaff_RDI + 0x60) = 1;
    }
  }
  (*(code *)PTR__objc_release_024a99a0)();
  return;
}



