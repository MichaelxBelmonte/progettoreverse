// Reconstructed implementation of MUBeatSelection
// From MikeCore binary — reverse-engineered pseudocode

#include "MUBeatSelection.h"

// ============================================================
// @01704df0 — 2918 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0170512e) */
/* WARNING: Removing unreachable block (ram,0x01705137) */
/* WARNING: Removing unreachable block (ram,0x01705470) */
/* WARNING: Removing unreachable block (ram,0x01705479) */

void FUN_01704df0(double param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  pthread_key_t pVar9;
  longlong in_RCX;
  longlong lVar10;
  longlong unaff_RDI;
  double dVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa;
  int iStack_7c;
  char local_58;
  undefined8 local_40;
  char local_38;
  
  lVar10 = in_RCX;
  FUN_00e7bcc0();
  if ((param_1 != 0.0) || (NAN(param_1))) {
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 < 3) {
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019012b0();
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_01907950();
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901eb0(param_1 - dVar11);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018fc680(param_1);
      local_40 = FUN_00e7cd00();
      FUN_00e7bfe0();
      FUN_016ea680();
    }
  }
  while( true ) {
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_019079b0();
    if (uVar6 >> 0x20 == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = FUN_00e7c6b0();
      bVar3 = bVar3 ^ 1;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3 == 0) break;
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_019079b0();
    uVar12 = FUN_00e7b820();
    FUN_016da710(uVar12,uVar7);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (uVar6 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_016ebc80();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      lVar2 = **(longlong **)(*(longlong *)(unaff_RDI + 0x60) + 0x10);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_016d7fb0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fc0b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_01909fa0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  while( true ) {
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_019079b0();
    if (uVar6 >> 0x20 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = FUN_00e7c650();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') break;
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_00e7b970();
    FUN_016da710();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (uVar6 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_01909fa0();
    if (local_40 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar9 = 0;
  FUN_0165c340(0,0,0);
  FUN_0123ff00();
  FUN_00e7c2a0();
  FUN_00e7c3c0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_00e7bcc0();
  iStack_7c = (int)((ulonglong)in_RCX >> 0x20);
  if (((iStack_7c == 0) || (uVar6 >> 0x20 == 0)) || (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
    FUN_016f4db0();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  uVar8 = FUN_00e7bcc0();
  if ((uVar8 >> 0x20 != 0) && (cVar4 = FUN_00e7c650(), cVar4 != '\0')) {
    FUN_00e7c240();
  }
  local_40 = CONCAT44((int)(uVar6 >> 0x20),1);
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_018fc1e0(param_1,0);
  uVar12 = FUN_0123fbe0(extraout_XMM0_Qa,param_2);
  if (local_58 == '\0') {
    if (in_RCX != 0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_0165b0c0(uVar12,uVar7);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d64850();
  lVar10 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar10 != local_40) {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x58) = local_40;
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (in_RCX != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (in_RCX != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c70ce0 — 2020 bytes
// ============================================================

void FUN_01c70ce0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  pthread_key_t in_ECX;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  longlong *local_d8;
  undefined1 local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  pthread_key_t local_74;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = unaff_RDI[0x31];
  local_58 = param_2;
  local_50 = param_1;
  pVar7 = in_ECX;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_b8 = lVar1;
  FUN_016cbba0();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_48 = plVar3;
  cVar4 = FUN_016bf360();
  if (cVar4 == '\0') {
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar7 = 0;
    uVar6 = FUN_016c45d0(local_50,0);
    uVar9 = extraout_XMM0_Qa;
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
    FUN_016bef80(uVar9,uVar6);
  }
  local_74 = in_ECX;
  local_70 = (longlong *)FUN_00e7bdb0();
  cVar4 = FUN_016bf4e0();
  if ((cVar4 == '\0') ||
     ((cVar4 = FUN_016bf4e0(), cVar4 == '\0' && (cVar4 = FUN_016bf360(), cVar4 != '\0')))) {
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_98 = *unaff_RSI;
    local_90 = '\0';
    local_88 = *local_58;
    local_80 = '\0';
    local_60 = 0;
    lVar2 = unaff_RDI[0x42];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    pVar7 = local_74 & 0xff;
    local_68 = lVar2;
    FUN_016c4850((undefined1)local_74,&local_88,&local_68,0);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    cVar4 = FUN_016bf530();
    if (cVar4 == '\0') {
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016bf100();
      pVar7 = 0;
      local_58 = (longlong *)FUN_016c46a0(0,0);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar3 = (longlong *)unaff_RDI[0x2d];
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *plVar3 + 0x20))();
      (**(code **)(*local_40 + 0x60))(local_58);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01907d20();
    pVar7 = 0;
    FUN_016cb9d0(local_50,4);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = *unaff_RSI;
    local_a0 = '\0';
    FUN_016f1400(local_50);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_00e7bdb0();
    local_40 = (longlong *)FUN_016c4760(uVar9,0);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00e7b970();
    local_70 = local_40;
    FUN_016bf010();
    plVar3 = (longlong *)unaff_RDI[0x2d];
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *plVar3 + 0x20))();
    (**(code **)(*local_40 + 0x60))(local_50);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if ((int)unaff_RDI[0x39] == 0) {
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01c44d20();
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_d0 = 1;
    local_d8 = plVar3;
    plVar8 = local_70;
    FUN_01c45410(local_70,&local_d8);
    pVar7 = (pthread_key_t)plVar8;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
    if ((local_70._4_4_ == 0) || (cVar4 = FUN_00e7c630(), cVar4 == '\0')) {
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar9 = FUN_01c44d20();
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_c0 = 1;
      local_c8 = plVar3;
      FUN_01c44700(uVar9,&local_c8);
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01c62c70();
  if (unaff_RDI[0x31] != 0) {
    FUN_00d50b00();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x620))();
  *(undefined1 *)(unaff_RDI + 0x3a) = 1;
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01705e00 — 1340 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01705e00(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  void *pvVar2;
  int extraout_var;
  longlong lVar3;
  pthread_key_t in_ECX;
  pthread_key_t pVar4;
  undefined8 uVar5;
  longlong *unaff_RDI;
  double dVar6;
  longlong local_78;
  char local_70;
  double local_48;
  
  pVar4 = in_ECX;
  FUN_016cbba0();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = 0;
  FUN_018fc1e0(param_1,0);
  pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e7bdb0();
  pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165d690();
  pVar4 = (pthread_key_t)uVar5;
  local_48._0_1_ = (char)in_ECX;
  if (local_48._0_1_ != '\0') {
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = (double)FUN_018fd630();
    pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7bdb0();
    pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar6 = (double)FUN_018fd630();
    FUN_00e7bcc0();
    local_48 = local_48 / dVar6;
    if (local_48 < DAT_02411a10) {
      do {
        FUN_00e7c3c0();
        local_48 = local_48 + local_48;
      } while (local_48 < DAT_02411a10);
    }
    pVar4 = (pthread_key_t)uVar5;
    if (_DAT_02411a18 <= local_48) {
      do {
        FUN_00e7c2a0();
        pVar4 = (pthread_key_t)uVar5;
        local_48 = local_48 * DAT_023942d0;
      } while (_DAT_02411a18 <= local_48);
    }
    if ((extraout_var == 0) || (cVar1 = FUN_00e7c630(), cVar1 == '\0')) {
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        pVar4 = (pthread_key_t)local_78;
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901fe0();
      FUN_00e7bac0();
    }
  }
  if (param_3 != '\0') {
    FUN_00e7b970();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    pVar4 = (pthread_key_t)local_78;
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01901eb0(param_1);
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ea680();
  *unaff_RDI = local_78;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @018fc1e0 — 1174 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018fc1e0(double param_1)

{
  int iVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  int *in_RCX;
  int *piVar4;
  int iVar5;
  longlong unaff_RDI;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if ((DAT_023e1698 <= (double)(_DAT_023908f0 & (ulonglong)param_1)) || (NAN(param_1))) {
    FUN_00e7bdb0();
    return;
  }
  iVar5 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
  piVar4 = in_RCX;
  dVar9 = (double)FUN_01907950();
  pVar3 = (pthread_key_t)piVar4;
  if (param_1 < dVar9) {
    iVar8 = 0;
    goto LAB_018fc472;
  }
  iVar7 = iVar5 + -2;
  dVar9 = (double)FUN_01907950();
  pVar3 = (pthread_key_t)piVar4;
  iVar8 = iVar7;
  if (dVar9 <= param_1) goto LAB_018fc472;
  iVar1 = 1;
  if ((in_RCX != (int *)0x0) && (iVar8 = *in_RCX, iVar8 != -1)) {
    iVar6 = iVar8;
    if (iVar7 < iVar8) {
      iVar6 = iVar7;
    }
    if (iVar8 < 1) {
      iVar6 = 1;
    }
    piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
    dVar9 = (double)FUN_01907950();
    if (dVar9 <= param_1) {
      iVar1 = iVar6;
      if (iVar6 < iVar5 + -1) {
        iVar8 = iVar6 + 1;
        piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        dVar9 = (double)FUN_01907950();
        if (dVar9 <= param_1) goto LAB_018fc3a8;
LAB_018fc3f0:
        iVar7 = iVar8;
      }
      else {
LAB_018fc3a8:
        iVar8 = iVar6 + 2;
        if (iVar8 < iVar5) {
          piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
          dVar9 = (double)FUN_01907950();
          if (param_1 < dVar9) goto LAB_018fc3f0;
        }
        iVar8 = iVar6 + 3;
        if (iVar8 < iVar5) {
          piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
          dVar9 = (double)FUN_01907950();
          if (param_1 < dVar9) goto LAB_018fc3f0;
        }
      }
    }
    else {
      iVar1 = 1;
      iVar7 = iVar6;
      if (0 < iVar6) {
        piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
        dVar9 = (double)FUN_01907950();
        iVar1 = iVar6 + -1;
        if (param_1 < dVar9) {
          if (iVar6 < 2) {
            iVar1 = 1;
            iVar7 = 1;
          }
          else {
            piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
            dVar9 = (double)FUN_01907950();
            iVar1 = iVar6 + -2;
            if (param_1 < dVar9) {
              if (iVar6 < 3) {
                iVar1 = 1;
                iVar7 = 2;
              }
              else {
                piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
                dVar9 = (double)FUN_01907950();
                iVar1 = iVar6 + -3;
                if (param_1 < dVar9) {
                  iVar1 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  do {
    iVar8 = iVar1;
    pVar3 = (pthread_key_t)piVar4;
    if (iVar7 - iVar8 == 1) break;
    iVar5 = (iVar7 - iVar8) / 2 + iVar8;
    piVar4 = *(int **)(*(longlong *)(unaff_RDI + 0x38) + 0x10);
    dVar9 = (double)FUN_01907950();
    pVar3 = (pthread_key_t)piVar4;
    iVar1 = iVar5;
    if (param_1 <= dVar9) {
      iVar1 = iVar8;
      iVar7 = iVar5;
    }
  } while ((dVar9 != param_1) || (iVar8 = iVar5, NAN(dVar9) || NAN(param_1)));
LAB_018fc472:
  if (in_RCX != (int *)0x0) {
    *in_RCX = iVar8;
  }
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar9 = (double)FUN_01907950();
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  if ((dVar9 != param_1) || (NAN(dVar9) || NAN(param_1))) {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_01907950();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    if ((dVar10 != param_1) || (NAN(dVar10) || NAN(param_1))) {
      dVar11 = (double)FUN_00e7c860();
      dVar12 = (double)FUN_00e7c860();
      if ((0.0 < dVar10 - dVar9) &&
         ((dVar13 = ((param_1 - dVar9) * dVar12 + (dVar10 - param_1) * dVar11) / (dVar10 - dVar9),
          dVar11 <= dVar13 || (param_1 < dVar9)))) {
        dVar11 = (double)(-(ulonglong)(dVar13 <= dVar12) & (ulonglong)dVar13 |
                         ~-(ulonglong)(dVar13 <= dVar12) &
                         (~-(ulonglong)(dVar10 < param_1) & (ulonglong)dVar12 |
                         -(ulonglong)(dVar10 < param_1) & (ulonglong)dVar13));
      }
      FUN_00e7cd00(dVar11);
    }
  }
  return;
}




// ============================================================
// @01c71b80 — 1086 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c71ef6) */
/* WARNING: Removing unreachable block (ram,0x01c71e34) */
/* WARNING: Removing unreachable block (ram,0x01c71d70) */
/* WARNING: Removing unreachable block (ram,0x01c71d42) */
/* WARNING: Removing unreachable block (ram,0x01c71d4b) */
/* WARNING: Removing unreachable block (ram,0x01c71e06) */
/* WARNING: Removing unreachable block (ram,0x01c71e0f) */
/* WARNING: Removing unreachable block (ram,0x01c71eca) */
/* WARNING: Removing unreachable block (ram,0x01c71ed3) */
/* WARNING: Removing unreachable block (ram,0x01c71f8c) */
/* WARNING: Removing unreachable block (ram,0x01c71f95) */

void FUN_01c71b80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  (**(code **)(*unaff_RSI + 0x4d8))();
  (**(code **)(*unaff_RSI + 0x7b8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c71bed;
    }
  }
  else if (local_40 != 0) {
LAB_01c71bed:
    FUN_01d97870();
    if (local_40 == 0) {
      bVar3 = false;
    }
    else {
      FUN_01d97850();
      bVar3 = local_50 != 0;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      plVar2 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar2 + 0x18))();
      uVar4 = FUN_00d46dc0(CONCAT44(uVar5,uVar5));
      lVar1 = DAT_027ebed8;
      if ((local_48 == '\0') && (local_50 != 0)) {
        uVar4 = FUN_00d50b00();
        lVar1 = DAT_027ebed8;
      }
      DAT_027ebed8 = lVar1;
      if (lVar1 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d470c0(unaff_RSI[0x37]);
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = DAT_027ebee0;
      if (DAT_027ebee0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d470c0(unaff_RSI[0x38]);
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = DAT_027ebee8;
      if (DAT_027ebee8 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d46530();
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = DAT_027ebef0;
      if (DAT_027ebef0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar2 = (longlong *)0x0;
    }
    *unaff_RDI = plVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return;
  }
  *unaff_RDI = 0;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01c707d0 — 869 bytes
// str: ""MUBeatSelection""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c707d0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_98;
  undefined1 local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  undefined8 local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar8 = FUN_01ca6970();
  local_88 = DAT_027ebec8;
  if (DAT_027ebec8 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_80 = '\x01';
  pplVar7 = &local_50;
  FUN_01cacbe0(uVar8,&local_88);
  plVar1 = local_50;
  FUN_0119c4c0();
  if (plVar1 == (longlong *)0x0) {
LAB_01c7084f:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01c7084f;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_01c70a5e;
  }
  local_58 = CONCAT44(local_58._4_4_,param_2);
  uVar8 = FUN_01ca6970();
  local_78 = DAT_027ebed0;
  if (DAT_027ebed0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_70 = '\x01';
  pplVar7 = &local_50;
  uVar8 = FUN_01cacbe0(uVar8,&local_78);
  plVar1 = local_50;
  if (DAT_027cb558 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    uVar8 = extraout_XMM0_Da_00;
    if (iVar5 != 0) {
      _DAT_027cb4a8 = FUN_00d4fe50();
      _DAT_027cb490 = "MUBeatSelection";
      _DAT_027cb498 = 0x20;
      _DAT_027cb4a0 = FUN_017063c0;
      _DAT_027cb4b0 = 0;
      uRam00000000027cb4b8 = 0;
      _DAT_027cb4c0 = 0;
      _DAT_027cb538 = 0;
      uRam00000000027cb540 = 0;
      _DAT_027cb548 = 0;
      DAT_027cb54a = 2;
      _DAT_027cb4c8 = 0;
      uRam00000000027cb4d0 = 0;
      _DAT_027cb4d8 = 0;
      uRam00000000027cb4e0 = 0;
      _DAT_027cb4e8 = 0;
      uRam00000000027cb4f0 = 0;
      _DAT_027cb4f8 = 0;
      uRam00000000027cb500 = 0;
      _DAT_027cb508 = 0;
      uRam00000000027cb510 = 0;
      _DAT_027cb518 = 0;
      uRam00000000027cb520 = 0;
      _DAT_027cb528 = 0;
      uRam00000000027cb530 = 0;
      DAT_027cb553 = 0;
      _DAT_027cb54b = 0;
      uVar8 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01c70930:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01c70930;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    local_60 = '\0';
    local_68 = plVar1;
    uVar4 = FUN_016bf700(uVar8,0);
    uVar6 = (ulonglong)uVar4;
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((byte)local_58 & (byte)uVar4) != 0) {
      plVar2 = *(longlong **)(unaff_RDI + 0x170);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_58 = (**(code **)(*plVar2 + 0x388))(*(undefined4 *)(unaff_RDI + 0x254));
      FUN_00d50b20();
      local_90 = 0;
      uVar6 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
      local_98 = plVar1;
      FUN_01c70ce0((int)local_58,&local_98);
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01c70a5e:
  return uVar6 & 0xffffffff;
}




// ============================================================
// @01704aa0 — 696 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01704aa0(pthread_key_t param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  void *pvVar5;
  undefined8 *puVar6;
  pthread_key_t pVar7;
  undefined4 uVar8;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_018fe5d0();
  if (cVar4 == '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar7 = 0;
    FUN_0165cf20(0,0);
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = FUN_0165cf20(0,0);
    local_34 = 4;
    FUN_00e7c260();
    uVar3 = local_60;
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025fa538;
    uVar2 = _UNK_0239372c;
    uVar1 = _UNK_02393728;
    uVar8 = _UNK_02393724;
    *(undefined4 *)((longlong)puVar6 + 0xc) = _DAT_02393720;
    *(undefined4 *)(puVar6 + 2) = uVar8;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar1;
    *(undefined4 *)(puVar6 + 3) = uVar2;
    uVar8 = FUN_00d500e0();
    FUN_016bf110(uVar8,uVar3);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_016d9380();
    local_70 = 0;
    local_68 = 0;
    FUN_016dcbf0(0,&local_70,param_3,param_4,0);
    FUN_016d63b0();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01704680 — 541 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01704680(undefined8 param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  int iVar18;
  longlong *unaff_RSI;
  ulonglong uVar19;
  longlong *unaff_RDI;
  ulonglong uVar20;
  double local_58;
  
  iVar17 = 1;
  if (1 < (int)param_2) {
    iVar8 = *(int *)(*unaff_RDI + 0x18);
    iVar18 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar18 = iVar8;
    }
    if ((int)param_2 < (iVar18 >> 3) + -2) {
      uVar20 = (ulonglong)param_2;
      lVar9 = *(longlong *)(*unaff_RSI + 0x10);
      dVar2 = *(double *)(lVar9 + uVar20 * 8);
      dVar3 = *(double *)(lVar9 + (ulonglong)(param_2 - 1) * 8);
      if ((dVar2 <= dVar3) ||
         (iVar17 = 0, pdVar1 = (double *)(lVar9 + 8 + uVar20 * 8),
         dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
        uVar19 = (ulonglong)(param_2 + 1);
        if ((dVar2 < dVar3) && (dVar2 < *(double *)(lVar9 + uVar19 * 8))) {
          return 0;
        }
        dVar2 = *(double *)(lVar9 + (ulonglong)(param_2 - 2) * 8);
        dVar10 = (double)FUN_00e7c860();
        dVar11 = (double)FUN_00e7c860();
        local_58 = (double)FUN_00e7c860();
        dVar12 = (double)FUN_00e7c860();
        lVar9 = *(longlong *)(*unaff_RSI + 0x10);
        dVar4 = *(double *)(lVar9 + (ulonglong)(param_2 - 1) * 8);
        dVar5 = *(double *)(lVar9 + 0x10 + uVar20 * 8);
        dVar6 = *(double *)(lVar9 + uVar19 * 8);
        dVar7 = *(double *)(lVar9 + uVar20 * 8);
        dVar13 = (double)FUN_00e7c860();
        dVar14 = (double)FUN_00e7c860();
        dVar15 = (double)FUN_00e7c860();
        dVar16 = (double)FUN_00e7c860();
        iVar17 = (uint)((double)((ulonglong)
                                 ((*(double *)(*(longlong *)(*unaff_RSI + 0x10) + uVar19 * 8) -
                                  (dVar15 - dVar16) * ((dVar5 - dVar6) / (dVar13 - dVar14))) -
                                 *(double *)(*(longlong *)(*unaff_RSI + 0x10) + uVar20 * 8)) &
                                _DAT_023908f0) <
                       (double)((ulonglong)
                                (dVar7 - ((local_58 - dVar12) *
                                          ((dVar3 - dVar2) / (dVar10 - dVar11)) + dVar4)) &
                               _UNK_023908f8)) * 2 + -1;
      }
    }
  }
  return iVar17;
}




// ============================================================
// @01706530 — 516 bytes
// str: ""MUBeatSelection""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01706530(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025fa538;
  *(undefined8 *)((longlong)unaff_RDI + 0xc) = 0x100000000;
  if (DAT_027cb558 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb4a8 = FUN_00d4fe50();
      _DAT_027cb490 = "MUBeatSelection";
      _DAT_027cb498 = 0x20;
      _DAT_027cb4a0 = FUN_017063c0;
      _DAT_027cb4b0 = 0;
      uRam00000000027cb4b8 = 0;
      _DAT_027cb4c0 = 0;
      _DAT_027cb538 = 0;
      uRam00000000027cb540 = 0;
      _DAT_027cb548 = 0;
      DAT_027cb54a = 2;
      _DAT_027cb4c8 = 0;
      uRam00000000027cb4d0 = 0;
      _DAT_027cb4d8 = 0;
      uRam00000000027cb4e0 = 0;
      _DAT_027cb4e8 = 0;
      uRam00000000027cb4f0 = 0;
      _DAT_027cb4f8 = 0;
      uRam00000000027cb500 = 0;
      _DAT_027cb508 = 0;
      uRam00000000027cb510 = 0;
      _DAT_027cb518 = 0;
      uRam00000000027cb520 = 0;
      _DAT_027cb528 = 0;
      uRam00000000027cb530 = 0;
      DAT_027cb553 = 0;
      _DAT_027cb54b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb54b == '\0') {
    FUN_01706760();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x14) = 0x100000000;
  if (DAT_027cb558 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb4a8 = FUN_00d4fe50();
      _DAT_027cb490 = "MUBeatSelection";
      _DAT_027cb498 = 0x20;
      _DAT_027cb4a0 = FUN_017063c0;
      _DAT_027cb4b0 = 0;
      uRam00000000027cb4b8 = 0;
      _DAT_027cb4c0 = 0;
      _DAT_027cb538 = 0;
      uRam00000000027cb540 = 0;
      _DAT_027cb548 = 0;
      DAT_027cb54a = 2;
      _DAT_027cb4c8 = 0;
      uRam00000000027cb4d0 = 0;
      _DAT_027cb4d8 = 0;
      uRam00000000027cb4e0 = 0;
      _DAT_027cb4e8 = 0;
      uRam00000000027cb4f0 = 0;
      _DAT_027cb4f8 = 0;
      uRam00000000027cb500 = 0;
      _DAT_027cb508 = 0;
      uRam00000000027cb510 = 0;
      _DAT_027cb518 = 0;
      uRam00000000027cb520 = 0;
      _DAT_027cb528 = 0;
      uRam00000000027cb530 = 0;
      DAT_027cb553 = 0;
      _DAT_027cb54b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb54b == '\0') {
    FUN_017068f0();
    FUN_00e87980();
  }
  return;
}



