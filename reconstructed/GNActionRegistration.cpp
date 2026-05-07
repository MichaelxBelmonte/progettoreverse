// Reconstructed implementation of GNActionRegistration
// From MikeCore binary — reverse-engineered pseudocode

#include "GNActionRegistration.h"

// ============================================================
// @01f8be80 — 1534 bytes
// str: ""GNActionRegistration""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01f8be80(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong **pplVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar12 = FUN_01da4890();
  local_128 = *unaff_RSI;
  local_120 = '\0';
  FUN_01da5610(uVar12,&local_128);
  plVar5 = local_d8;
  if (local_d0 == '\0') {
    if (((local_d8 != (longlong *)0x0) && (FUN_00d50b00(), local_d0 != '\0')) &&
       (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d0 = '\0';
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    goto LAB_01f8c37d;
  }
  pplVar8 = &local_d8;
  FUN_01eda0f0();
  plVar1 = local_d8;
  if ((DAT_026e7b78 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_026e7ac8 = FUN_00d4fe50();
    _DAT_026e7ab0 = "GNActionRegistration";
    _DAT_026e7ab8 = 0x38;
    _DAT_026e7ac0 = FUN_001a8af0;
    _DAT_026e7ad0 = 0;
    uRam00000000026e7ad8 = 0;
    _DAT_026e7ae0 = 0;
    uRam00000000026e7ae8 = 0;
    _DAT_026e7af0 = 0;
    uRam00000000026e7af8 = 0;
    _DAT_026e7b00 = 0;
    uRam00000000026e7b08 = 0;
    _DAT_026e7b10 = 0;
    uRam00000000026e7b18 = 0;
    _DAT_026e7b20 = 0;
    uRam00000000026e7b28 = 0;
    _DAT_026e7b30 = 0;
    uRam00000000026e7b38 = 0;
    _DAT_026e7b40 = 0;
    uRam00000000026e7b48 = 0;
    _DAT_026e7b50 = 0;
    uRam00000000026e7b58 = 0;
    _DAT_026e7b60 = 0;
    uRam00000000026e7b68 = 0;
    _DAT_026e7b70 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01f8bf6c:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01f8bf6c;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01f8c08c:
    local_48 = plVar1;
    uVar12 = FUN_01caf660();
    local_118 = plVar5;
    local_110 = '\0';
    FUN_01caffb0(uVar12,&local_118);
    local_40 = local_d8;
    local_38 = 0;
    if (local_d0 == '\0') {
      if (local_d8 == (longlong *)0x0) {
        local_40 = (longlong *)0x0;
        local_38 = '\x01';
      }
      else {
        FUN_00d50b00();
        local_38 = '\x01';
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = local_d8;
      local_38 = '\x01';
      local_d0 = '\0';
    }
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    bVar10 = local_40 == (longlong *)0x0;
    if (bVar10) {
      bVar11 = true;
    }
    else {
      FUN_01d3d730();
      local_88 = DAT_02801088;
      local_80 = 0;
      if (DAT_02801088 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02801090;
      local_80 = '\x01';
      local_70 = 0;
      if (DAT_02801090 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar3;
      local_70 = '\x01';
      FUN_01f8c8c0(&local_40,&local_88,&local_78);
      FUN_000b4da0();
      lVar3 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      uVar12 = FUN_002d10d0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      lVar2 = DAT_027f1fc8;
      if (DAT_027f1fc8 != 0) {
        uVar12 = FUN_00d50b00();
      }
      lVar4 = DAT_02801098;
      local_108 = lVar2;
      local_100 = '\x01';
      if (DAT_02801098 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = '\x01';
      FUN_01f6ca30(uVar12,&local_f8);
      local_e8 = lVar3;
      local_e0 = '\0';
      iVar7 = (**(code **)(*local_d8 + 0x5d8))();
      bVar11 = iVar7 == 1;
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) goto LAB_01f8c368;
  }
  else {
    FUN_01caf470();
    local_68 = local_d8;
    local_60 = 0;
    if (local_d0 == '\0') {
      if (local_d8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_d0 = '\0';
    }
    local_60 = '\x01';
    cVar6 = (**(code **)(*plVar5 + 0x50))();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') goto LAB_01f8c08c;
    bVar10 = true;
    bVar11 = true;
LAB_01f8c368:
    FUN_00d50b20();
  }
  FUN_00d50b20();
  uVar9 = (ulonglong)(byte)(!bVar11 | bVar10);
LAB_01f8c37d:
  return uVar9 & 0xffffffff;
}




// ============================================================
// @01f8b430 — 1115 bytes
// str: ""GNActionRegistration""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f8b598) */
/* WARNING: Removing unreachable block (ram,0x01f8b5a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f8b430(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar6;
  longlong local_c8;
  char local_c0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar5 = &local_40;
  FUN_01eda0f0();
  plVar1 = local_40;
  if ((DAT_026e7b78 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026e7ac8 = FUN_00d4fe50();
    _DAT_026e7ab0 = "GNActionRegistration";
    _DAT_026e7ab8 = 0x38;
    _DAT_026e7ac0 = FUN_001a8af0;
    _DAT_026e7ad0 = 0;
    uRam00000000026e7ad8 = 0;
    _DAT_026e7ae0 = 0;
    uRam00000000026e7ae8 = 0;
    _DAT_026e7af0 = 0;
    uRam00000000026e7af8 = 0;
    _DAT_026e7b00 = 0;
    uRam00000000026e7b08 = 0;
    _DAT_026e7b10 = 0;
    uRam00000000026e7b18 = 0;
    _DAT_026e7b20 = 0;
    uRam00000000026e7b28 = 0;
    _DAT_026e7b30 = 0;
    uRam00000000026e7b38 = 0;
    _DAT_026e7b40 = 0;
    uRam00000000026e7b48 = 0;
    _DAT_026e7b50 = 0;
    uRam00000000026e7b58 = 0;
    _DAT_026e7b60 = 0;
    uRam00000000026e7b68 = 0;
    _DAT_026e7b70 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01f8b493:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01f8b493;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FUN_01caf470();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01f8b7c7;
    local_68 = local_40;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = local_40;
    if (local_40 == (longlong *)0x0) goto LAB_01f8b7c7;
  }
  iVar4 = FUN_01dd4c80();
  if (-1 < iVar4) {
    uVar6 = FUN_01da4890();
    local_a8 = local_68;
    local_a0 = '\0';
    FUN_01da4a10(uVar6,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f8bbb0();
  if (local_40 != (longlong *)0x0) {
    lVar2 = *unaff_RSI;
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      plVar1 = (longlong *)unaff_RDI[0x12];
      FUN_01d3d730();
      local_60 = local_40;
      local_58 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_98 = *unaff_RSI;
      local_90 = '\0';
      FUN_01d68520();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x920))();
  FUN_01da4890();
  FUN_01f27fe0();
  FUN_01f28c30();
  local_50 = local_88;
  local_48 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_48 = '\x01';
  FUN_01da8a40();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  lVar2 = unaff_RDI[0x10];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_78 = lVar2;
  (**(code **)(*unaff_RDI + 0x5e8))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f8b7c7:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01f8d150 — 1098 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f8d1fb) */
/* WARNING: Removing unreachable block (ram,0x01f8d207) */

ulonglong FUN_01f8d150(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 unaff_R13;
  undefined7 uVar9;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  FUN_01f8cb70();
  plVar6 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d68580();
  plVar1 = local_40;
  uVar9 = (undefined7)((ulonglong)unaff_R13 >> 8);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f8d1ab;
    }
    if (plVar6 == (longlong *)0x0) {
      uVar7 = CONCAT71(uVar9,1);
      goto LAB_01f8d580;
    }
LAB_01f8d1b4:
    local_60 = plVar6;
    FUN_01caf440();
    FUN_00d99300();
    uVar3 = FUN_00d90eb0();
    uVar7 = (ulonglong)uVar3;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      uVar8 = 0;
      uVar11 = uVar7;
      goto LAB_01f8d28f;
    }
  }
  else {
LAB_01f8d1ab:
    if (plVar6 != (longlong *)0x0) goto LAB_01f8d1b4;
    uVar7 = CONCAT71(uVar9,1);
    if (plVar1 == (longlong *)0x0) goto LAB_01f8d580;
    local_60 = plVar6;
    uVar11 = 0;
    uVar8 = uVar7;
LAB_01f8d28f:
    FUN_01da4890();
    FUN_01caf470();
    local_80 = 0;
    if (local_a0 == '\0') {
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    local_80 = '\x01';
    local_88 = local_a8;
    FUN_01da5370(param_1,&local_88);
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) {
      cVar10 = '\0';
    }
    else {
      iVar4 = FUN_01d3b590();
      uVar3 = FUN_01d3b590();
      uVar5 = FUN_01d3b590();
      bVar12 = (uVar5 & ~uVar3) == 0;
      FUN_01d3b5a0();
      cVar10 = bVar12 || iVar4 == 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01f8d438;
        }
      }
      else if (local_40 != (longlong *)0x0) {
LAB_01f8d438:
        FUN_01d3b5a0();
        local_68 = local_40;
        plVar6 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            plVar6 = local_68;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01f8d452;
          }
          cVar10 = '\0';
        }
        else {
LAB_01f8d452:
          if ((plVar6 == (longlong *)0x0) || (!bVar12 && iVar4 != 0)) {
            cVar10 = '\0';
            cVar2 = '\0';
            if (local_68 == (longlong *)0x0) goto LAB_01f8d546;
          }
          else {
            FUN_00d99300();
            plVar6 = local_40;
            FUN_00d99300();
            local_78 = local_58;
            local_70 = 0;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_70 = '\x01';
            cVar2 = (**(code **)(*plVar6 + 0x50))();
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          cVar10 = cVar2;
          FUN_00d50b20();
        }
LAB_01f8d546:
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar7 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 | cVar10 != '\0');
    if ((char)uVar8 != '\0') goto LAB_01f8d580;
  }
  FUN_00d50b20();
LAB_01f8d580:
  return uVar7 & 0xffffffff;
}




// ============================================================
// @01f92410 — 683 bytes
// str: ""GNActionRegistration""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f924e3) */
/* WARNING: Removing unreachable block (ram,0x01f924ec) */
/* WARNING: Removing unreachable block (ram,0x01f925a0) */
/* WARNING: Removing unreachable block (ram,0x01f925ad) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f92410(float param_1)

{
  char cVar1;
  int iVar2;
  undefined8 in_RCX;
  undefined8 *unaff_RDI;
  longlong **pplVar3;
  float fVar4;
  undefined4 extraout_XMM0_Da;
  longlong *local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  pplVar3 = &local_40;
  FUN_01dcc290(in_RCX,0);
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01f92561;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
LAB_01f92561:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  fVar4 = (float)FUN_01db9a50();
  if ((fVar4 < param_1) || (iVar2 = FUN_01dcea90(param_1), iVar2 < 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_01f92557;
  }
  FUN_01ed2e60(extraout_XMM0_Da,iVar2);
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01f924be;
    }
    local_40 = (longlong *)0x0;
    local_38 = '\x01';
LAB_01f925e2:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
LAB_01f924be:
    local_38 = '\x01';
    local_40 = local_60;
    if ((local_60 == (longlong *)0x0) || (iVar2 = FUN_01ed4e60(), iVar2 < 1)) goto LAB_01f925e2;
    if ((DAT_026e7b78 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_026e7ac8 = FUN_00d4fe50();
      _DAT_026e7ab0 = "GNActionRegistration";
      _DAT_026e7ab8 = 0x38;
      _DAT_026e7ac0 = FUN_001a8af0;
      _DAT_026e7ad0 = 0;
      uRam00000000026e7ad8 = 0;
      _DAT_026e7ae0 = 0;
      uRam00000000026e7ae8 = 0;
      _DAT_026e7af0 = 0;
      uRam00000000026e7af8 = 0;
      _DAT_026e7b00 = 0;
      uRam00000000026e7b08 = 0;
      _DAT_026e7b10 = 0;
      uRam00000000026e7b18 = 0;
      _DAT_026e7b20 = 0;
      uRam00000000026e7b28 = 0;
      _DAT_026e7b30 = 0;
      uRam00000000026e7b38 = 0;
      _DAT_026e7b40 = 0;
      uRam00000000026e7b48 = 0;
      _DAT_026e7b50 = 0;
      uRam00000000026e7b58 = 0;
      _DAT_026e7b60 = 0;
      uRam00000000026e7b68 = 0;
      _DAT_026e7b70 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*local_60 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') {
      pplVar3 = (longlong **)&DAT_02802688;
    }
    cVar1 = *(char *)(pplVar3 + 1);
    if ((cVar1 == '\0') || (*pplVar3 == (longlong *)0x0)) {
      if (*pplVar3 == (longlong *)0x0) goto LAB_01f925e2;
    }
    else {
      FUN_00d50b00();
    }
    FUN_01caf440();
    if (cVar1 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f92557:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01f92800 — 622 bytes
// str: ""GNActionRegistration""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f9282f) */
/* WARNING: Removing unreachable block (ram,0x01f92838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f92800(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar4;
  undefined4 uVar5;
  longlong *local_68;
  char local_60;
  longlong *local_38;
  char local_30;
  
  FUN_01dd11e0();
  cVar2 = FUN_01e420b0();
  if (cVar2 == '\0') {
    return;
  }
  if ((int)unaff_RDI[0x5c] == -1) {
    return;
  }
  pplVar4 = &local_38;
  FUN_01eda0f0();
  plVar1 = local_38;
  if ((DAT_026e7b78 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026e7ac8 = FUN_00d4fe50();
    _DAT_026e7ab0 = "GNActionRegistration";
    _DAT_026e7ab8 = 0x38;
    _DAT_026e7ac0 = FUN_001a8af0;
    _DAT_026e7ad0 = 0;
    uRam00000000026e7ad8 = 0;
    _DAT_026e7ae0 = 0;
    uRam00000000026e7ae8 = 0;
    _DAT_026e7af0 = 0;
    uRam00000000026e7af8 = 0;
    _DAT_026e7b00 = 0;
    uRam00000000026e7b08 = 0;
    _DAT_026e7b10 = 0;
    uRam00000000026e7b18 = 0;
    _DAT_026e7b20 = 0;
    uRam00000000026e7b28 = 0;
    _DAT_026e7b30 = 0;
    uRam00000000026e7b38 = 0;
    _DAT_026e7b40 = 0;
    uRam00000000026e7b48 = 0;
    _DAT_026e7b50 = 0;
    uRam00000000026e7b58 = 0;
    _DAT_026e7b60 = 0;
    uRam00000000026e7b68 = 0;
    _DAT_026e7b70 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01f928a7;
  }
  pplVar4 = (longlong **)&DAT_02802688;
LAB_01f928a7:
  plVar1 = *pplVar4;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_01d48370();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_68 + 0x4b8))();
    plVar1 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = FUN_01d48b40(DAT_02390d34);
    plVar1 = (longlong *)*unaff_RSI;
    (**(code **)(*unaff_RDI + 0x950))(uVar5,1);
    FUN_00d05530();
    (**(code **)(*plVar1 + 0x3b8))();
    FUN_01d48390();
  }
  return;
}




// ============================================================
// @01f8ce40 — 574 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f8cf14) */
/* WARNING: Removing unreachable block (ram,0x01f8cedc) */
/* WARNING: Removing unreachable block (ram,0x01f8cee5) */
/* WARNING: Removing unreachable block (ram,0x01f8cfe6) */
/* WARNING: Removing unreachable block (ram,0x01f8cfef) */
/* WARNING: Removing unreachable block (ram,0x01f8cf20) */
/* WARNING: Removing unreachable block (ram,0x01f8cf40) */
/* WARNING: Removing unreachable block (ram,0x01f8cf22) */
/* WARNING: Removing unreachable block (ram,0x01f8cf42) */

ulonglong FUN_01f8ce40(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  ulonglong unaff_R13;
  undefined7 uVar5;
  longlong local_88;
  char local_80;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar1 = local_58;
  FUN_01f8cb70();
  uVar5 = (undefined7)(unaff_R13 >> 8);
  if (local_58 == 0) {
    FUN_01f8bbb0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 == 0) {
      unaff_R13 = CONCAT71(uVar5,1);
      goto LAB_01f8d06f;
    }
  }
  else if (local_50 != '\0') {
    FUN_00d50b20();
  }
  FUN_01caf140();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01f8ceea;
    }
  }
  else if (local_58 != 0) {
LAB_01f8ceea:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    do {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_002a0990();
        FUN_00d50b20();
        goto LAB_01f8cf96;
      }
      local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar3 * 8);
      cVar2 = FUN_01f8d150();
    } while (cVar2 == '\0');
    FUN_002a0990();
    unaff_R13 = CONCAT71(uVar5,1);
    FUN_00d50b20();
    goto LAB_01f8d06f;
  }
LAB_01f8cf96:
  FUN_01caf110();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01f8cff4;
    }
  }
  else if (local_58 != 0) {
LAB_01f8cff4:
    iVar4 = 0;
    do {
      unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),iVar4 < *(int *)(local_58 + 0xc));
      if (*(int *)(local_58 + 0xc) <= iVar4) break;
      cVar2 = FUN_01f8ce40();
      iVar4 = iVar4 + 1;
    } while (cVar2 == '\0');
    FUN_01cb0380();
    FUN_00d50b20();
    goto LAB_01f8d06f;
  }
  unaff_R13 = 0;
LAB_01f8d06f:
  return unaff_R13 & 0xffffffff;
}



