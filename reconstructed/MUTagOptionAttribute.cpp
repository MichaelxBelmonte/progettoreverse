// Reconstructed implementation of MUTagOptionAttribute
// From MikeCore binary — reverse-engineered pseudocode

#include "MUTagOptionAttribute.h"

// ============================================================
// @018c18e0 — 884 bytes
// str: ""MUTagOptionAttribute""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018c195c) */
/* WARNING: Removing unreachable block (ram,0x018c1961) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c18e0(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *unaff_RSI;
  longlong *plVar6;
  undefined4 uVar7;
  longlong local_c8;
  undefined1 local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined1 local_a0;
  longlong *local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined4 local_4c;
  longlong *local_48;
  char local_40;
  char local_38;
  
  local_4c = (undefined4)param_1;
  local_c8 = *param_2;
  local_c0 = 0;
  FUN_018bf620(param_1,&local_c8);
  plVar1 = local_48;
  pVar5 = (pthread_key_t)param_1;
  local_38 = local_40 != '\0';
  local_98 = local_48;
  if ((bool)local_38) {
    local_40 = '\0';
  }
  if (local_48 == (longlong *)0x0) {
    local_70 = *unaff_RSI;
    local_68 = '\0';
    local_60 = *param_2;
    local_58 = '\0';
    FUN_00d61270(local_4c,&local_60,param_3);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 == '\0') {
      return;
    }
    if (local_70 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((DAT_027b5198 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_027b50e8 = FUN_011b5ca0();
    _DAT_027b50d0 = "MUTagOptionAttribute";
    _DAT_027b50d8 = 0xe8;
    pVar5 = 0x11bbd10;
    _DAT_027b50e0 = FUN_011bbd10;
    _DAT_027b50f0 = 0;
    uRam00000000027b50f8 = 0;
    _DAT_027b5100 = 0;
    uRam00000000027b5108 = 0;
    _DAT_027b5110 = 0;
    uRam00000000027b5118 = 0;
    _DAT_027b5120 = 0;
    uRam00000000027b5128 = 0;
    _DAT_027b5130 = 0;
    uRam00000000027b5138 = 0;
    _DAT_027b5140 = 0;
    uRam00000000027b5148 = 0;
    _DAT_027b5150 = 0;
    uRam00000000027b5158 = 0;
    _DAT_027b5160 = 0;
    uRam00000000027b5168 = 0;
    _DAT_027b5170 = 0;
    uRam00000000027b5178 = 0;
    _DAT_027b5180 = 0;
    uRam00000000027b5188 = 0;
    _DAT_027b5190 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  uVar7 = FUN_00e85ea0();
  plVar1 = local_98;
  local_b8 = local_98;
  local_b0 = 0;
  FUN_018bf6f0(uVar7,&local_b8);
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_018c1a43;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_018c1a43:
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_90 = *unaff_RSI;
    local_88 = '\0';
    FUN_01883820();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_018c1b85;
  }
  pvVar3 = _pthread_getspecific(pVar5);
  plVar6 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  local_80 = *unaff_RSI;
  local_78 = '\0';
  (**(code **)(*plVar6 + 0x368))();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_a0 = 1;
  FUN_018bfc40();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_018c1b85:
  if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @011bbe70 — 878 bytes
// str: ""MUTagOptionAttribute""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011bbe70(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_011b5fd0();
  *unaff_RDI = &DAT_0260e720;
  *(undefined1 *)(unaff_RDI + 0x14) = 0;
  if (DAT_027b5198 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b50e8 = FUN_011b5ca0();
      _DAT_027b50d0 = "MUTagOptionAttribute";
      _DAT_027b50d8 = 0xe8;
      _DAT_027b50e0 = FUN_011bbd10;
      _DAT_027b50f0 = 0;
      uRam00000000027b50f8 = 0;
      _DAT_027b5100 = 0;
      uRam00000000027b5108 = 0;
      _DAT_027b5110 = 0;
      uRam00000000027b5118 = 0;
      _DAT_027b5120 = 0;
      uRam00000000027b5128 = 0;
      _DAT_027b5130 = 0;
      uRam00000000027b5138 = 0;
      _DAT_027b5140 = 0;
      uRam00000000027b5148 = 0;
      _DAT_027b5150 = 0;
      uRam00000000027b5158 = 0;
      _DAT_027b5160 = 0;
      uRam00000000027b5168 = 0;
      _DAT_027b5170 = 0;
      uRam00000000027b5178 = 0;
      _DAT_027b5180 = 0;
      _uRam00000000027b5188 = 0;
      _DAT_027b5190 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b518b == '\0') {
    FUN_011bc290();
    FUN_00e87980();
  }
  FUN_011bc400();
  FUN_011bc680();
  FUN_011bc970();
  *(undefined4 *)(unaff_RDI + 0x18) = 0;
  if (DAT_027b5198 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b50e8 = FUN_011b5ca0();
      _DAT_027b50d0 = "MUTagOptionAttribute";
      _DAT_027b50d8 = 0xe8;
      _DAT_027b50e0 = FUN_011bbd10;
      _DAT_027b50f0 = 0;
      uRam00000000027b50f8 = 0;
      _DAT_027b5100 = 0;
      uRam00000000027b5108 = 0;
      _DAT_027b5110 = 0;
      uRam00000000027b5118 = 0;
      _DAT_027b5120 = 0;
      uRam00000000027b5128 = 0;
      _DAT_027b5130 = 0;
      uRam00000000027b5138 = 0;
      _DAT_027b5140 = 0;
      uRam00000000027b5148 = 0;
      _DAT_027b5150 = 0;
      uRam00000000027b5158 = 0;
      _DAT_027b5160 = 0;
      uRam00000000027b5168 = 0;
      _DAT_027b5170 = 0;
      uRam00000000027b5178 = 0;
      _DAT_027b5180 = 0;
      _uRam00000000027b5188 = 0;
      _DAT_027b5190 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b518b == '\0') {
    FUN_011bcc60();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xc4) = 0;
  if (DAT_027b5198 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b50e8 = FUN_011b5ca0();
      _DAT_027b50d0 = "MUTagOptionAttribute";
      _DAT_027b50d8 = 0xe8;
      _DAT_027b50e0 = FUN_011bbd10;
      _DAT_027b50f0 = 0;
      uRam00000000027b50f8 = 0;
      _DAT_027b5100 = 0;
      uRam00000000027b5108 = 0;
      _DAT_027b5110 = 0;
      uRam00000000027b5118 = 0;
      _DAT_027b5120 = 0;
      uRam00000000027b5128 = 0;
      _DAT_027b5130 = 0;
      uRam00000000027b5138 = 0;
      _DAT_027b5140 = 0;
      uRam00000000027b5148 = 0;
      _DAT_027b5150 = 0;
      uRam00000000027b5158 = 0;
      _DAT_027b5160 = 0;
      uRam00000000027b5168 = 0;
      _DAT_027b5170 = 0;
      uRam00000000027b5178 = 0;
      _DAT_027b5180 = 0;
      _uRam00000000027b5188 = 0;
      _DAT_027b5190 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b518b == '\0') {
    FUN_011bcdd0();
    FUN_00e87980();
  }
  FUN_011bcf40();
  FUN_011bd1c0();
  FUN_011bd4a0();
  FUN_011bd780();
  return;
}




// ============================================================
// @018c1400 — 866 bytes
// str: ""MUTagOptionAttribute""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018c1479) */
/* WARNING: Removing unreachable block (ram,0x018c147e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c1400(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  longlong *plVar7;
  undefined4 uVar8;
  longlong local_c0;
  undefined1 local_b8;
  longlong *local_b0;
  undefined1 local_a8;
  undefined1 local_98;
  longlong *local_90;
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
  char local_38;
  
  local_c0 = *param_2;
  local_b8 = 0;
  uVar6 = param_1;
  FUN_018bf620(param_1,&local_c0);
  plVar1 = local_48;
  pVar5 = (pthread_key_t)uVar6;
  local_38 = local_40 != '\0';
  local_90 = local_48;
  if ((bool)local_38) {
    local_40 = '\0';
  }
  if (local_48 == (longlong *)0x0) {
    local_68 = *unaff_RSI;
    local_60 = '\0';
    local_58 = *param_2;
    local_50 = '\0';
    FUN_00d61130(param_1 & 0xff,&local_58);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 == '\0') {
      return;
    }
    if (local_68 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((DAT_027b5198 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_027b50e8 = FUN_011b5ca0();
    _DAT_027b50d0 = "MUTagOptionAttribute";
    _DAT_027b50d8 = 0xe8;
    pVar5 = 0x11bbd10;
    _DAT_027b50e0 = FUN_011bbd10;
    _DAT_027b50f0 = 0;
    uRam00000000027b50f8 = 0;
    _DAT_027b5100 = 0;
    uRam00000000027b5108 = 0;
    _DAT_027b5110 = 0;
    uRam00000000027b5118 = 0;
    _DAT_027b5120 = 0;
    uRam00000000027b5128 = 0;
    _DAT_027b5130 = 0;
    uRam00000000027b5138 = 0;
    _DAT_027b5140 = 0;
    uRam00000000027b5148 = 0;
    _DAT_027b5150 = 0;
    uRam00000000027b5158 = 0;
    _DAT_027b5160 = 0;
    uRam00000000027b5168 = 0;
    _DAT_027b5170 = 0;
    uRam00000000027b5178 = 0;
    _DAT_027b5180 = 0;
    uRam00000000027b5188 = 0;
    _DAT_027b5190 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  uVar8 = FUN_00e85ea0();
  plVar1 = local_90;
  local_b0 = local_90;
  local_a8 = 0;
  FUN_018bf6f0(uVar8,&local_b0);
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_018c155d;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_018c155d:
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = *unaff_RSI;
    local_80 = '\0';
    FUN_018836f0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_018c1693;
  }
  pvVar3 = _pthread_getspecific(pVar5);
  plVar7 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar7 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  local_78 = *unaff_RSI;
  local_70 = '\0';
  (**(code **)(*plVar7 + 0x368))();
  plVar7 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_98 = 1;
  FUN_018bfc40();
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_018c1693:
  if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @018c28f0 — 854 bytes
// ============================================================

longlong * FUN_018c28f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
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
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  if (*(int *)(*(longlong *)(unaff_RSI + 0x48) + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else if (*(longlong *)(unaff_RSI + 0x50) == 0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_0258a670;
    (*DAT_0258a688)();
    lVar1 = *(longlong *)(unaff_RSI + 0x50);
    *(undefined8 **)(unaff_RSI + 0x50) = puVar2;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    uVar4 = 1;
    FUN_00e38130(1,0,1);
    lVar1 = *(longlong *)(unaff_RSI + 0x48);
    if (lVar1 != 0) {
      local_60 = '\0';
      local_68 = 0;
      local_48 = 0;
      local_50 = 0;
      local_58 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        do {
          local_98 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          local_90 = '\0';
          local_68 = local_98;
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_018909c0();
          local_40 = local_78;
          local_38 = 0;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_38 = '\x01';
          FUN_018c2840();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar5);
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      FUN_017d9900();
    }
    local_88 = *param_2;
    local_80 = '\0';
    FUN_018c2db0();
    lVar1 = local_68;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = lVar1;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *unaff_RDI = local_68;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_60 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8 = *param_2;
    local_a0 = '\0';
    FUN_018c2db0(param_1,&local_a8);
    lVar1 = local_68;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = lVar1;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *unaff_RDI = local_68;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_60 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}




// ============================================================
// @018c2150 — 741 bytes
// ============================================================

int FUN_018c2150(void)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar10;
  longlong *plVar11;
  longlong *local_90;
  char local_88 [8];
  longlong *local_70;
  char local_68 [8];
  longlong local_60;
  undefined8 local_58;
  int local_50;
  uint local_44;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar1 == 0) {
    iVar10 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      iVar10 = 0;
    }
    else {
      uVar8 = 0;
      iVar10 = 0;
      do {
        plVar2 = local_70;
        plVar11 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar8 * 8);
        pvVar3 = _pthread_getspecific(uVar8);
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar11 + 0x368))();
        local_38[0] = local_68[0];
        pcVar7 = local_38;
        pcVar5 = local_68;
        if (local_68[0] == '\0') {
          pcVar5 = pcVar7;
        }
        local_44 = uVar8;
        *pcVar5 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar4 = *unaff_RSI;
        pvVar3 = _pthread_getspecific((pthread_key_t)pcVar7);
        if (pvVar3 != (void *)0x0) {
          lVar4 = *unaff_RSI;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        lVar4 = *(longlong *)(lVar4 + 0x48);
        uVar8 = local_44;
        if (lVar4 != 0) {
          FUN_00d50b00();
          local_68[0] = '\0';
          local_70 = (longlong *)0x0;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_58._4_4_ = 0;
          local_60 = lVar4;
          while( true ) {
            uVar8 = local_44;
            if (local_58._4_4_ != 0) {
              if (local_58._4_4_ < 1) {
                iVar9 = -local_58._4_4_;
              }
              else {
                iVar9 = (int)local_58 - local_58._4_4_;
                local_58 = CONCAT44(local_58._4_4_,iVar9);
                FUN_00d23690();
                local_50 = local_50 + local_58._4_4_;
                iVar9 = 0;
              }
              local_58 = CONCAT44(iVar9,(int)local_58);
            }
            lVar4 = (longlong)(int)local_58;
            iVar9 = (int)local_58 + 1;
            local_58 = CONCAT44(local_58._4_4_,iVar9);
            if (*(int *)(local_60 + 0xc) <= iVar9) break;
            local_70 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_60 + 0x10));
            plVar11 = local_70;
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              plVar11 = (longlong *)local_70[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar11 + 0x368))();
            local_40[0] = local_88[0];
            pcVar7 = local_88;
            if (local_88[0] == '\0') {
              pcVar7 = local_40;
            }
            *pcVar7 = '\0';
            if ((local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40[0] != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            iVar10 = iVar10 + (uint)(local_90 == plVar2);
          }
          FUN_01894d60();
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_01894d60();
  }
  return iVar10;
}




// ============================================================
// @018c1dd0 — 641 bytes
// str: ""MUTagOptionAttribute""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x018c1e43) */
/* WARNING: Removing unreachable block (ram,0x018c1e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c1dd0(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  undefined4 uVar6;
  longlong local_a0;
  undefined1 local_98;
  longlong *local_90;
  undefined1 local_88;
  longlong *local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  char local_38;
  
  local_a0 = *param_2;
  local_98 = 0;
  uVar5 = param_1;
  FUN_018bf620(param_1,&local_a0);
  plVar1 = local_48;
  pVar4 = (pthread_key_t)uVar5;
  local_38 = local_40 != '\0';
  local_80 = local_48;
  if ((bool)local_38) {
    local_40 = '\0';
  }
  if (local_48 == (longlong *)0x0) {
    local_68 = *unaff_RSI;
    local_60 = '\0';
    local_58 = *param_2;
    local_50 = '\0';
    FUN_00d61730(param_1 & 0xff,&local_58);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 == '\0') {
      return;
    }
    if (local_68 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((DAT_027b5198 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_027b50e8 = FUN_011b5ca0();
    _DAT_027b50d0 = "MUTagOptionAttribute";
    _DAT_027b50d8 = 0xe8;
    pVar4 = 0x11bbd10;
    _DAT_027b50e0 = FUN_011bbd10;
    _DAT_027b50f0 = 0;
    uRam00000000027b50f8 = 0;
    _DAT_027b5100 = 0;
    uRam00000000027b5108 = 0;
    _DAT_027b5110 = 0;
    uRam00000000027b5118 = 0;
    _DAT_027b5120 = 0;
    uRam00000000027b5128 = 0;
    _DAT_027b5130 = 0;
    uRam00000000027b5138 = 0;
    _DAT_027b5140 = 0;
    uRam00000000027b5148 = 0;
    _DAT_027b5150 = 0;
    uRam00000000027b5158 = 0;
    _DAT_027b5160 = 0;
    uRam00000000027b5168 = 0;
    _DAT_027b5170 = 0;
    uRam00000000027b5178 = 0;
    _DAT_027b5180 = 0;
    uRam00000000027b5188 = 0;
    _DAT_027b5190 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  uVar6 = FUN_00e85ea0();
  plVar1 = local_80;
  local_90 = local_80;
  local_88 = 0;
  FUN_018bf6f0(uVar6,&local_90);
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_018c1f85;
    FUN_00d50b00();
  }
  else if (local_48 == (longlong *)0x0) goto LAB_018c1f85;
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = *unaff_RSI;
  local_70 = '\0';
  FUN_01883960();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_018c1f85:
  if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



