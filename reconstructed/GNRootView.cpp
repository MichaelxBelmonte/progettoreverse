// Reconstructed implementation of GNRootView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNRootView.h"

// ============================================================
// @00095750 — 3845 bytes
// str: ""GNRootView""
// str: ""MDURLOpenedController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095750(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar9;
  longlong **pplVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_1e8;
  undefined1 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  longlong *local_198;
  undefined1 local_190;
  undefined1 local_188 [8];
  undefined1 local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  char local_c8;
  undefined7 uStack_c7;
  char local_c0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  FUN_00d3ecc0();
  plVar8 = local_40;
  local_178 = DAT_026d8aa8;
  if (DAT_026d8aa8 != 0) {
    FUN_00d50b00();
  }
  local_170 = '\x01';
  cVar4 = (**(code **)(*plVar8 + 0x50))();
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar8 = local_40;
    local_158 = DAT_026d8aa0;
    if (DAT_026d8aa0 != 0) {
      FUN_00d50b00();
    }
    local_150 = '\x01';
    cVar4 = (**(code **)(*plVar8 + 0x50))();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      uVar11 = FUN_00d3ecf0();
      lVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar11 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_180 = 1;
      FUN_00095530(uVar11,local_188);
      if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        local_1c8 = local_40;
        local_1c0 = 0;
        FUN_00094580();
        FUN_00d50b20();
        return;
      }
      return;
    }
    FUN_00d3ecc0();
    plVar8 = local_40;
    local_148 = DAT_027ebc70;
    if (DAT_027ebc70 != 0) {
      FUN_00d50b00();
    }
    local_140 = '\x01';
    cVar4 = (**(code **)(*plVar8 + 0x50))();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      local_e8 = *unaff_RSI;
      local_e0 = '\0';
      FUN_00d530a0();
      if (local_e0 == '\0') {
        return;
      }
      if (local_e8 != 0) {
        FUN_00d50b20();
        return;
      }
      return;
    }
    FUN_00d403d0();
    if (unaff_RDI != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_027ebc70;
    if (DAT_027ebc70 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar1;
    local_130 = '\x01';
    FUN_00d3ecf0();
    local_98 = local_50;
    local_90 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_90 = '\x01';
    FUN_00d41040(&local_98,&local_138);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar8 = *(longlong **)(unaff_RDI + 0x10);
    if (plVar8 == (longlong *)0x0) {
      FUN_00093070();
      plVar9 = local_40;
      if (local_38[0] == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_00095dd0;
        }
      }
      else if (local_40 != (longlong *)0x0) {
LAB_00095dd0:
        (**(code **)(*plVar9 + 0x5e8))();
        FUN_00d23310();
        plVar9 = local_40;
        pcVar7 = &local_c8;
        if (local_38[0] != '\0') {
          pcVar7 = local_38;
        }
        local_c8 = local_38[0];
        *pcVar7 = '\0';
        if ((local_38[0] != '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((plVar9 != (longlong *)0x0) && (plVar8 = plVar9, local_c8 == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
    }
    pplVar10 = &local_40;
    local_58 = plVar8;
    FUN_00d3ecf0();
    plVar8 = local_40;
    FUN_00098010();
    if (plVar8 == (longlong *)0x0) {
LAB_00095e98:
      pplVar10 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00095e98;
    }
    plVar9 = local_58;
    plVar8 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar10 + 1) = 0;
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (longlong *)0x0) {
      pplVar10 = &local_40;
      FUN_00d3ecf0();
      plVar8 = local_40;
      FUN_000982d0();
      if (plVar8 == (longlong *)0x0) {
LAB_00095f38:
        pplVar10 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_00095f38;
      }
      plVar9 = local_58;
      plVar8 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar8 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
        local_f0 = '\0';
        local_f8 = plVar8;
        uVar11 = FUN_00d50b00();
        FUN_00639aa0(uVar11,&stack0xffffffffffffff58);
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_000960a6;
    }
    FUN_00e34d60();
    if (local_38[0] == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_00095f91;
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00095f7c:
      FUN_00d50b20();
    }
    else {
      if (local_40 != (longlong *)0x0) goto LAB_00095f7c;
LAB_00095f91:
      FUN_00e198c0();
      plVar8 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_01e697d0();
        uVar11 = FUN_00e198c0();
        local_88 = local_50;
        local_80 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            uVar11 = FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_80 = '\x01';
        FUN_01e69930(uVar11,0);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00e19900();
        if (local_40 == (longlong *)0x0) {
          bVar5 = 1;
        }
        else {
          FUN_01f27fe0();
          FUN_00281390();
          FUN_00e19900();
          local_78 = local_d8;
          local_70 = 0;
          if (local_d0 == '\0') {
            if (local_d8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_d0 = '\0';
          }
          local_70 = '\x01';
          bVar5 = FUN_00e6d4e0();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (CONCAT71(uStack_c7,local_c8) != 0)) {
            FUN_00d50b20();
          }
          bVar5 = bVar5 ^ 1;
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = DAT_026d8ab8;
        if (bVar5 != 0) {
          if (DAT_026d8ab8 != 0) {
            FUN_00d50b00();
          }
          local_128 = lVar1;
          local_120 = '\x01';
          local_118 = 0;
          local_110 = '\0';
          local_108 = 0;
          local_100 = '\0';
          pplVar10 = &local_40;
          FUN_01e4fcf0(&local_108,&local_118);
          plVar8 = local_40;
          if ((DAT_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
            _DAT_02726298 = FUN_00015ff0();
            _DAT_02726280 = "MDURLOpenedController";
            _DAT_02726288 = 0x90;
            _DAT_02726290 = FUN_00098280;
            _DAT_027262a0 = 0;
            uRam00000000027262a8 = 0;
            _DAT_027262b0 = 0;
            uRam00000000027262b8 = 0;
            _DAT_027262c0 = 0;
            uRam00000000027262c8 = 0;
            _DAT_027262d0 = 0;
            uRam00000000027262d8 = 0;
            _DAT_027262e0 = 0;
            uRam00000000027262e8 = 0;
            _DAT_027262f0 = 0;
            uRam00000000027262f8 = 0;
            _DAT_02726300 = 0;
            uRam0000000002726308 = 0;
            _DAT_02726310 = 0;
            uRam0000000002726318 = 0;
            _DAT_02726320 = 0;
            uRam0000000002726328 = 0;
            _DAT_02726330 = 0;
            uRam0000000002726338 = 0;
            _DAT_02726340 = 0;
            ___cxa_guard_release();
            plVar9 = local_58;
          }
          if (plVar8 == (longlong *)0x0) {
LAB_000962ce:
            pplVar10 = (longlong **)&DAT_02802688;
          }
          else {
            (**(code **)(*plVar8 + 0x360))();
            cVar4 = FUN_00e85ea0();
            if (cVar4 == '\0') goto LAB_000962ce;
          }
          plVar8 = *pplVar10;
          if (*(char *)(pplVar10 + 1) == '\0') {
            if (plVar8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar10 + 1) = 0;
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (longlong *)0x0) {
            FUN_00e198c0();
            FUN_00dbbbc0();
            local_68 = local_40;
            local_60 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_60 = '\x01';
            uVar11 = FUN_0054d030();
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              uVar11 = FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              uVar11 = FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              uVar11 = FUN_00d50b20();
            }
            local_1b0 = 0;
            local_1a8 = 0;
            local_1a0 = 0;
            local_1b8 = plVar8;
            FUN_00093bd0(uVar11,&local_1a8);
            if (plVar9 != (longlong *)0x0) {
              local_190 = 0;
              local_198 = plVar9;
              FUN_00094580();
            }
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_00d50b20();
LAB_000960a6:
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
      return;
    }
    return;
  }
  uVar11 = FUN_00d3ed20();
  local_168 = DAT_026d8ab0;
  if (DAT_026d8ab0 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_160 = '\x01';
  pplVar10 = &local_40;
  FUN_000175c0(uVar11,&local_168);
  plVar8 = local_40;
  if ((DAT_026e85e0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027f4bd8 = FUN_0006d940();
    _DAT_027f4bc0 = "GNRootView";
    _DAT_027f4bc8 = 0x1d0;
    _DAT_027f4bd0 = FUN_00097da0;
    _DAT_027f4be0 = 0;
    uRam00000000027f4be8 = 0;
    _DAT_027f4bf0 = 0;
    uRam00000000027f4bf8 = 0;
    _DAT_027f4c00 = 0;
    uRam00000000027f4c08 = 0;
    _DAT_027f4c10 = 0;
    uRam00000000027f4c18 = 0;
    _DAT_027f4c20 = 0;
    uRam00000000027f4c28 = 0;
    _DAT_027f4c30 = 0;
    uRam00000000027f4c38 = 0;
    _DAT_027f4c40 = 0;
    uRam00000000027f4c48 = 0;
    _DAT_027f4c50 = 0;
    uRam00000000027f4c58 = 0;
    _DAT_027f4c60 = 0;
    uRam00000000027f4c68 = 0;
    _DAT_027f4c70 = 0;
    uRam00000000027f4c78 = 0;
    _DAT_027f4c80 = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (longlong *)0x0) {
LAB_00095863:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00095863;
  }
  plVar8 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pplVar10 = &local_40;
  local_58 = plVar8;
  uVar11 = FUN_00d3ecf0();
  plVar8 = local_40;
  if ((DAT_026e85e0 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar11 = extraout_XMM0_Da_00, iVar6 != 0)) {
    _DAT_027f4bd8 = FUN_0006d940();
    _DAT_027f4bc0 = "GNRootView";
    _DAT_027f4bc8 = 0x1d0;
    _DAT_027f4bd0 = FUN_00097da0;
    _DAT_027f4be0 = 0;
    uRam00000000027f4be8 = 0;
    _DAT_027f4bf0 = 0;
    uRam00000000027f4bf8 = 0;
    _DAT_027f4c00 = 0;
    uRam00000000027f4c08 = 0;
    _DAT_027f4c10 = 0;
    uRam00000000027f4c18 = 0;
    _DAT_027f4c20 = 0;
    uRam00000000027f4c28 = 0;
    _DAT_027f4c30 = 0;
    uRam00000000027f4c38 = 0;
    _DAT_027f4c40 = 0;
    uRam00000000027f4c48 = 0;
    _DAT_027f4c50 = 0;
    uRam00000000027f4c58 = 0;
    _DAT_027f4c60 = 0;
    uRam00000000027f4c68 = 0;
    _DAT_027f4c70 = 0;
    uRam00000000027f4c78 = 0;
    _DAT_027f4c80 = 0;
    uVar11 = ___cxa_guard_release();
  }
  if (plVar8 == (longlong *)0x0) {
LAB_00095ac9:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar11 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_00095ac9;
  }
  plVar8 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar8 != (longlong *)0x0) {
      uVar11 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    lVar1 = *(longlong *)(unaff_RDI + 0x10);
joined_r0x00095b5a:
    bVar3 = false;
    bVar2 = false;
    plVar9 = (longlong *)0x0;
  }
  else {
    local_1e0 = 0;
    local_1e8 = plVar8;
    FUN_00095530(uVar11,&local_1e8);
    plVar9 = local_40;
    if (local_40 == (longlong *)0x0) {
      lVar1 = *(longlong *)(unaff_RDI + 0x10);
      goto joined_r0x00095b5a;
    }
    bVar3 = true;
    bVar2 = true;
    if (local_38[0] == '\0') {
      FUN_00d50b00();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x10);
  }
  if (lVar1 != 0) {
    FUN_01e561b0();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = bVar3;
    if (local_40 == local_58) {
      if (plVar9 == (longlong *)0x0) {
        FUN_00094d10();
        goto LAB_00095c17;
      }
      local_1d0 = 0;
      local_1d8 = plVar9;
      FUN_00094580();
    }
  }
  if ((bVar2) && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00095c17:
  plVar9 = local_58;
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @000c49f0 — 3184 bytes
// str: ""GNRootView""
// str: ""MDMetaWindowController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x000c51b1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c49f0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  longlong **pplVar8;
  longlong *unaff_RSI;
  bool bVar9;
  undefined4 uVar10;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_58;
  lVar6 = DAT_026cb128;
  if (DAT_026cb128 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar1 = local_58;
    local_e0 = DAT_026cb130;
    if (DAT_026cb130 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_000c5300;
    pplVar8 = &local_58;
    FUN_00d3ecf0();
    plVar1 = local_58;
    if ((DAT_026e85e0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_000c4bab:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_000c4bab;
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
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_80 = plVar1;
    (**(code **)(*plVar1 + 0x4a0))();
    FUN_00d23310();
    plVar1 = local_58;
    pcVar7 = &local_90;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_90 = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pplVar8 = &local_68;
    (**(code **)(*plVar1 + 0x370))();
    plVar1 = local_68;
    if ((DAT_026fddb0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026e0ab8 = FUN_00015ff0();
      _DAT_026e0aa0 = "MDMetaWindowController";
      _DAT_026e0aa8 = 0x198;
      _DAT_026e0ab0 = FUN_0006dea0;
      _DAT_026e0ac0 = 0;
      uRam00000000026e0ac8 = 0;
      _DAT_026e0ad0 = 0;
      _DAT_026e0b48 = 0;
      uRam00000000026e0b50 = 0;
      _DAT_026e0b58 = 0;
      DAT_026e0b5a = 1;
      _DAT_026e0ad8 = 0;
      uRam00000000026e0ae0 = 0;
      _DAT_026e0ae8 = 0;
      uRam00000000026e0af0 = 0;
      _DAT_026e0af8 = 0;
      uRam00000000026e0b00 = 0;
      _DAT_026e0b08 = 0;
      uRam00000000026e0b10 = 0;
      _DAT_026e0b18 = 0;
      uRam00000000026e0b20 = 0;
      _DAT_026e0b28 = 0;
      uRam00000000026e0b30 = 0;
      _DAT_026e0b38 = 0;
      uRam00000000026e0b40 = 0;
      DAT_026e0b63 = 0;
      _DAT_026e0b5b = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_000c4fd7:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_000c4fd7;
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
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_90 != '\0') {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e561b0();
    if (local_58 == (longlong *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01e561b0();
      FUN_01d8f0f0();
      bVar9 = local_68 != (longlong *)0x0;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      FUN_01e561b0();
      FUN_01d8b010();
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar1 + 0x5f8))();
    local_a0 = local_68;
    local_98 = 0;
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_98 = '\x01';
    FUN_000c5e20();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_50[0] = '\0';
      local_58 = (longlong *)0x0;
      local_48 = plVar2;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar6 = (longlong)(int)local_40;
        iVar5 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
        if (*(int *)((longlong)local_48 + 0xc) <= iVar5) break;
        local_d0 = *(longlong **)(local_48[2] + 8 + lVar6 * 8);
        local_c8 = '\0';
        local_58 = local_d0;
        (**(code **)(*plVar1 + 0x608))();
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50130();
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar5 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar5 = 0;
          }
          local_40 = CONCAT44(iVar5,(int)local_40);
        }
      }
      FUN_000e3600();
      FUN_00d50b20();
    }
    FUN_00612250();
    plVar3 = local_58;
    plVar2 = local_80;
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00612250();
      local_b8 = '\0';
      local_c0 = plVar1;
      (**(code **)(*local_58 + 0x4b8))();
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_000c5300;
  }
  pplVar8 = &local_58;
  FUN_00d3ecf0();
  plVar1 = local_58;
  if ((DAT_026e85e0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027f4bd8 = FUN_0006d940();
    _DAT_027f4bc0 = "GNRootView";
    _DAT_027f4bc8 = 0x1d0;
    _DAT_027f4bd0 = FUN_00097da0;
    _DAT_027f4be0 = 0;
    uRam00000000027f4be8 = 0;
    _DAT_027f4bf0 = 0;
    uRam00000000027f4bf8 = 0;
    _DAT_027f4c00 = 0;
    uRam00000000027f4c08 = 0;
    _DAT_027f4c10 = 0;
    uRam00000000027f4c18 = 0;
    _DAT_027f4c20 = 0;
    uRam00000000027f4c28 = 0;
    _DAT_027f4c30 = 0;
    uRam00000000027f4c38 = 0;
    _DAT_027f4c40 = 0;
    uRam00000000027f4c48 = 0;
    _DAT_027f4c50 = 0;
    uRam00000000027f4c58 = 0;
    _DAT_027f4c60 = 0;
    uRam00000000027f4c68 = 0;
    _DAT_027f4c70 = 0;
    uRam00000000027f4c78 = 0;
    _DAT_027f4c80 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_000c4aca:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_000c4aca;
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
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = plVar1;
  (**(code **)(*plVar1 + 0x4a0))();
  FUN_00d23310();
  plVar1 = local_58;
  pcVar7 = &local_90;
  if (local_50[0] != '\0') {
    pcVar7 = local_50;
  }
  local_90 = local_50[0];
  *pcVar7 = '\0';
  if ((local_50[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pplVar8 = &local_68;
  (**(code **)(*plVar1 + 0x370))();
  plVar1 = local_68;
  if ((DAT_026fddb0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026e0ab8 = FUN_00015ff0();
    _DAT_026e0aa0 = "MDMetaWindowController";
    _DAT_026e0aa8 = 0x198;
    _DAT_026e0ab0 = FUN_0006dea0;
    _DAT_026e0ac0 = 0;
    uRam00000000026e0ac8 = 0;
    _DAT_026e0ad0 = 0;
    _DAT_026e0b48 = 0;
    uRam00000000026e0b50 = 0;
    _DAT_026e0b58 = 0;
    DAT_026e0b5a = 1;
    _DAT_026e0ad8 = 0;
    uRam00000000026e0ae0 = 0;
    _DAT_026e0ae8 = 0;
    uRam00000000026e0af0 = 0;
    _DAT_026e0af8 = 0;
    uRam00000000026e0b00 = 0;
    _DAT_026e0b08 = 0;
    uRam00000000026e0b10 = 0;
    _DAT_026e0b18 = 0;
    uRam00000000026e0b20 = 0;
    _DAT_026e0b28 = 0;
    uRam00000000026e0b30 = 0;
    _DAT_026e0b38 = 0;
    uRam00000000026e0b40 = 0;
    DAT_026e0b63 = 0;
    _DAT_026e0b5b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_000c4c8c:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_000c4c8c;
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
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_90 != '\0') {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0062abf0();
  uVar10 = FUN_00521db0();
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  local_f8 = '\0';
  local_100 = plVar1;
  (**(code **)(*plVar2 + 0x600))(uVar10,&local_100);
  plVar2 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = plVar2;
  local_e8 = '\0';
  (**(code **)(*plVar1 + 0x600))();
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0062abf0();
  FUN_00b34cb0();
  if (local_58 == (longlong *)0x0) {
    cVar4 = '\0';
  }
  else {
    FUN_0062abf0();
    FUN_00b34cb0();
    cVar4 = (**(code **)(*local_78 + 0x58))();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_0064dff0();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_000c5300:
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  FUN_00292f50();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01e23740 — 3122 bytes
// str: ""GNRootView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e23d53) */
/* WARNING: Removing unreachable block (ram,0x01e23a04) */
/* WARNING: Removing unreachable block (ram,0x01e23a10) */
/* WARNING: Removing unreachable block (ram,0x01e23d47) */
/* WARNING: Removing unreachable block (ram,0x01e24072) */
/* WARNING: Removing unreachable block (ram,0x01e2407e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01e23740(char param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *in_RDX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar12;
  float extraout_XMM0_Db;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar15 = (undefined4)param_2;
  FUN_01e24810();
  if (((*in_RDX == 0) || (iVar4 = FUN_01d3b630(), iVar4 != 1)) && (param_1 != '\0')) {
    lVar8 = *unaff_RSI;
  }
  else {
    DAT_028b9519 = '\x01';
    lVar8 = *unaff_RSI;
  }
  if (lVar8 != 0) {
    FUN_01e42030();
    plVar5 = local_40;
    plVar7 = DAT_028b9508;
    if (DAT_028b9508 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar5 = local_40;
        }
      }
      else {
        local_38 = '\0';
      }
      bVar9 = DAT_028b9508 != (longlong *)0x0;
      plVar7 = plVar5;
      DAT_028b9508 = plVar5;
      if (bVar9) {
        plVar5 = (longlong *)FUN_00d50b20();
        plVar7 = local_40;
      }
    }
    if ((plVar7 != (longlong *)0x0) && (DAT_028b9510 == '\0')) {
      DAT_028b9510 = '\x01';
      plVar5 = (longlong *)FUN_00e8cb90();
      plVar7 = local_40;
    }
    if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
      plVar5 = (longlong *)FUN_00d50b20();
    }
    goto LAB_01e2395a;
  }
  if ((DAT_026e85e0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027f4bd8 = FUN_0006d940();
    _DAT_027f4bc0 = "GNRootView";
    _DAT_027f4bc8 = 0x1d0;
    _DAT_027f4bd0 = FUN_00097da0;
    _DAT_027f4be0 = 0;
    uRam00000000027f4be8 = 0;
    _DAT_027f4bf0 = 0;
    uRam00000000027f4bf8 = 0;
    _DAT_027f4c00 = 0;
    uRam00000000027f4c08 = 0;
    _DAT_027f4c10 = 0;
    uRam00000000027f4c18 = 0;
    _DAT_027f4c20 = 0;
    uRam00000000027f4c28 = 0;
    _DAT_027f4c30 = 0;
    uRam00000000027f4c38 = 0;
    _DAT_027f4c40 = 0;
    uRam00000000027f4c48 = 0;
    _DAT_027f4c50 = 0;
    uRam00000000027f4c58 = 0;
    _DAT_027f4c60 = 0;
    uRam00000000027f4c68 = 0;
    _DAT_027f4c70 = 0;
    uRam00000000027f4c78 = 0;
    _DAT_027f4c80 = 0;
    ___cxa_guard_release();
  }
  local_78 = FUN_00e86210();
  local_70 = 0;
  uVar12 = extraout_XMM0_Qa;
  if (local_78 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_70 = '\x01';
  plVar5 = (longlong *)FUN_01d824e0(uVar12,&local_78);
  plVar7 = DAT_028b9508;
  if (DAT_028b9508 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_01e2384c;
      }
      FUN_00d50b00();
      plVar3 = DAT_028b9508;
      DAT_028b9508 = local_40;
      plVar5 = (longlong *)0x0;
      plVar7 = local_40;
      if (plVar3 == (longlong *)0x0) goto LAB_01e23911;
    }
    else {
      local_38 = '\0';
      plVar7 = local_40;
LAB_01e2384c:
      bVar9 = DAT_028b9508 == (longlong *)0x0;
      DAT_028b9508 = plVar7;
      if (bVar9) {
        plVar5 = (longlong *)0x0;
        goto LAB_01e23911;
      }
    }
    plVar5 = (longlong *)FUN_00d50b20();
    plVar7 = local_40;
  }
LAB_01e23911:
  if ((plVar7 != (longlong *)0x0) && (DAT_028b9510 == '\0')) {
    DAT_028b9510 = '\x01';
    plVar5 = (longlong *)FUN_00e8cb90();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    plVar5 = (longlong *)FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    plVar5 = (longlong *)FUN_00d50b20();
  }
LAB_01e2395a:
  if (DAT_028b9508 != (longlong *)0x0) {
    FUN_01d907a0();
    local_48 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    uVar12 = FUN_01d3abf0();
    *(undefined8 *)(unaff_RDI + 0x44) = uVar12;
    FUN_01d3abf0();
    FUN_01f514b0();
    uVar12 = FUN_01f51370();
    *(undefined8 *)(unaff_RDI + 0x34) = uVar12;
    *(ulonglong *)(unaff_RDI + 0x3c) = CONCAT44(uVar16,uVar15);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int *)(unaff_RDI + 0xc) != -1) {
      fVar11 = (float)FUN_01e21f60();
      fVar17 = 0.0;
      *(float *)(unaff_RDI + 0x44) = *(float *)(unaff_RDI + 0x44) - fVar11;
      if (*(int *)(unaff_RDI + 0x10) != -1) {
        FUN_01e21df0();
        *(float *)(unaff_RDI + 0x48) =
             *(float *)(unaff_RDI + 0x48) - (extraout_XMM0_Db + fVar17 + DAT_02390d00);
      }
    }
    fVar11 = DAT_0239011c;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    *(float *)(unaff_RDI + 0x44) =
         *(float *)(unaff_RDI + 0x44) - (float)*(undefined8 *)(unaff_RDI + 0x28) * DAT_0239011c;
    *(float *)(unaff_RDI + 0x48) =
         *(float *)(unaff_RDI + 0x48) -
         (float)((ulonglong)*(undefined8 *)(unaff_RDI + 0x28) >> 0x20) * fVar11;
    if (*unaff_RSI != 0) {
      FUN_01e3f820();
      uVar12 = FUN_01e46ed0();
      *(undefined8 *)(unaff_RDI + 0x44) = uVar12;
    }
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = &DAT_026a3350;
    puVar6[2] = &DAT_026a37c8;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(undefined2 *)(puVar6 + 5) = 0;
    puVar6[6] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x37) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x5c) = 0;
    *(undefined8 *)((longlong)puVar6 + 100) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x69) = 0;
    puVar6[0xf] = 0;
    *(undefined4 *)((longlong)puVar6 + 0x7f) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x84) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x8c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x94) = 0;
    uVar12 = (*DAT_026a3368)();
    if (DAT_028b94c8 == puVar6) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = DAT_028b94c8 != (undefined8 *)0x0;
      DAT_028b94c8 = puVar6;
      if (bVar10) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (DAT_028b94d0 == '\0') {
      DAT_028b94d0 = '\x01';
      uVar12 = FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      uVar12 = FUN_00d50b20();
    }
    plVar5 = DAT_028b9508;
    local_60 = 0;
    if (DAT_028b9508 != (longlong *)0x0) {
      uVar12 = FUN_00d50b00();
    }
    local_68 = plVar5;
    local_60 = '\x01';
    FUN_01e5b6f0(uVar12,&local_68);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_01e21f60();
    auVar13._0_4_ = (float)uVar12 + fVar11;
    auVar13._4_4_ = (float)((ulonglong)uVar12 >> 0x20) + fVar17;
    auVar13._8_4_ = (float)extraout_XMM0_Qb + fVar18;
    auVar13._12_4_ = (float)((ulonglong)extraout_XMM0_Qb >> 0x20) + fVar19;
    auVar14._4_4_ = fVar17;
    auVar14._0_4_ = fVar11;
    auVar14._8_4_ = fVar18;
    auVar14._12_4_ = fVar19;
    auVar14 = blendps(auVar13,auVar14,2);
    *(longlong *)(unaff_RDI + 0x4c) = auVar14._0_8_;
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar5 = (longlong)&DAT_0269f1a0;
    plVar5[2] = (longlong)&DAT_0269fac8;
    plVar5[0x27] = 0;
    *(undefined1 *)(plVar5 + 0x28) = 0;
    FUN_00d500e0();
    if (DAT_028b94a8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = DAT_028b94a8 != (longlong *)0x0;
      DAT_028b94a8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (DAT_028b94b0 == '\0') {
      DAT_028b94b0 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    plVar5 = DAT_028b94a8;
    FUN_00d50b00();
    plVar5[0x27] = unaff_RDI;
    FUN_00d50b20();
    (**(code **)(*DAT_028b94a8 + 0x4d0))();
    FUN_01e5bc80();
    FUN_01e5bb70(*(undefined8 *)(unaff_RDI + 0x44));
    FUN_01e5ca90();
    plVar5 = local_40;
    local_58 = DAT_028b94a8;
    local_50 = 0;
    if (DAT_028b94a8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*plVar5 + 0x450))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar5 = (longlong)&DAT_0269f1a0;
    plVar5[2] = (longlong)&DAT_0269fac8;
    plVar5[0x27] = 0;
    *(undefined1 *)(plVar5 + 0x28) = 0;
    FUN_00d500e0();
    if (DAT_028b94b8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = DAT_028b94b8 != (longlong *)0x0;
      DAT_028b94b8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (DAT_028b94c0 == '\0') {
      DAT_028b94c0 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    plVar5 = DAT_028b94b8;
    *(undefined1 *)(DAT_028b94b8 + 0x28) = 1;
    FUN_00d50b00();
    plVar5[0x27] = unaff_RDI;
    FUN_00d50b20();
    (**(code **)(*DAT_028b94b8 + 0x4d0))();
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x27] = 0;
    *(undefined4 *)(plVar5 + 0x28) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x17c) = 0;
    plVar5[0x30] = 0;
    *(undefined1 *)(plVar5 + 0x31) = 0;
    plVar5[0x29] = 0;
    plVar5[0x2a] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x154) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x15c) = 0;
    plVar5[0x2d] = 0;
    plVar5[0x2e] = 0;
    *(undefined1 *)(plVar5 + 0x2f) = 0;
    *plVar5 = (longlong)&DAT_0269e7e8;
    plVar5[2] = (longlong)&DAT_0269f160;
    plVar5[0x32] = 0;
    FUN_00d500e0();
    if (DAT_028b94f8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = DAT_028b94f8 != (longlong *)0x0;
      DAT_028b94f8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (DAT_028b9500 == '\0') {
      DAT_028b9500 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    (**(code **)(*DAT_028b94f8 + 0x4d0))();
    uVar12 = _DAT_023dcd04;
    *(undefined8 *)(unaff_RDI + 100) = _DAT_023dccfc;
    *(undefined8 *)(unaff_RDI + 0x6c) = uVar12;
    uVar12 = _DAT_023dcd04;
    *(undefined8 *)(unaff_RDI + 0x54) = _DAT_023dccfc;
    *(undefined8 *)(unaff_RDI + 0x5c) = uVar12;
    plVar5 = DAT_028b94f8;
    lVar8 = *(longlong *)(unaff_RDI + 0x20);
    lVar1 = DAT_028b94f8[0x32];
    if (lVar1 != lVar8) {
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      plVar5[0x32] = lVar8;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01d3abf0();
    FUN_01e22920();
    FUN_01e5d9c0();
    if (*(int *)(unaff_RDI + 0xc) == -1) {
      *(undefined4 *)(unaff_RDI + 0x10) = 0xffffffff;
    }
    FUN_01e1f2c0();
    *(undefined1 *)(unaff_RDI + 0x31) = 1;
    (**(code **)(*DAT_028b94a8 + 0x3c0))();
    *(undefined1 *)(unaff_RDI + 0x31) = 0;
    FUN_01e42030();
    (**(code **)(*local_40 + 0x6e0))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((longlong)*(int *)(unaff_RDI + 0xc) != -1) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) +
         (longlong)*(int *)(unaff_RDI + 0xc) * 8) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      if ((longlong)*(int *)(unaff_RDI + 0xc) == -1) {
        lVar8 = 0;
        bVar9 = true;
      }
      else {
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) +
                 (longlong)*(int *)(unaff_RDI + 0xc) * 8);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_00d50b00();
        }
        bVar9 = false;
      }
      FUN_01e25fd0();
      plVar5 = local_40;
      if (local_40 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (!bVar9 && lVar8 != 0) {
        FUN_00d50b20();
      }
      if (((DAT_028b9519 == '\0') && (plVar5 != (longlong *)0x0)) &&
         (iVar4 = FUN_01d5b230(), iVar4 != 0)) {
        FUN_01d62b90();
        plVar7 = *(longlong **)(unaff_RDI + 0x20);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == plVar7) {
          FUN_01d62b80();
        }
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01e23600();
    FUN_01e236a0();
    if ((DAT_028b94c8 != (undefined8 *)0x0) && (FUN_01e5e740(), DAT_028b94c8 != (undefined8 *)0x0))
    {
      FUN_00d50130();
    }
    if (DAT_028b94b8 != (longlong *)0x0) {
      FUN_00d50130();
    }
    if (DAT_028b94f8 != (longlong *)0x0) {
      FUN_00d50130();
    }
    if (DAT_028b94f8 != (longlong *)0x0) {
      DAT_028b94f8 = (longlong *)0x0;
      FUN_00d50b20();
    }
    local_48 = (longlong *)0x0;
    FUN_00d50b20();
    if (DAT_028b94a8 != (longlong *)0x0) {
      DAT_028b94a8 = (longlong *)0x0;
      FUN_00d50b20();
    }
    if (DAT_028b94c8 != (undefined8 *)0x0) {
      DAT_028b94c8 = (undefined8 *)0x0;
      FUN_00d50b20();
    }
    if (DAT_028b94b8 != (longlong *)0x0) {
      DAT_028b94b8 = (longlong *)0x0;
      FUN_00d50b20();
    }
    plVar5 = (longlong *)FUN_01e24a90();
    DAT_028b9519 = '\0';
  }
  return plVar5;
}




// ============================================================
// @001adcf0 — 2812 bytes
// str: ""GNRootView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001adcf0(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_0268b6d0;
  unaff_RDI[2] = &DAT_0268c0a8;
  FUN_001ae9c0();
  FUN_001aecb0();
  FUN_001aefa0();
  FUN_001af280();
  *(undefined1 *)(unaff_RDI + 0x2b) = 0;
  if (DAT_026e85e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      _uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f4c7b == '\0') {
    FUN_001af560();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x159) = 0;
  if (DAT_026e85e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      _uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f4c7b == '\0') {
    FUN_001af6d0();
    FUN_00e87980();
  }
  FUN_001af840();
  FUN_001afb30();
  FUN_001afdb0();
  FUN_001b00a0();
  unaff_RDI[0x30] = 0;
  if (DAT_026e85e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      _uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f4c7b == '\0') {
    FUN_001b0390();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x31) = 0;
  if (DAT_026e85e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      _uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f4c7b == '\0') {
    FUN_001b0500();
    FUN_00e87980();
  }
  FUN_001b0670();
  FUN_001b0960();
  *(undefined1 *)(unaff_RDI + 0x34) = 0;
  if (DAT_026e85e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      _uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f4c7b == '\0') {
    FUN_001b0c50();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1a1) = 0;
  if (DAT_026e85e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      _uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f4c7b == '\0') {
    FUN_001b0dc0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1a2) = 0;
  if (DAT_026e85e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      _uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f4c7b == '\0') {
    FUN_001b0f30();
    FUN_00e87980();
  }
  FUN_001b10a0();
  FUN_001b1390();
  FUN_001b1610();
  unaff_RDI[0x38] = *(undefined8 *)(unaff_RSI + 0x1c0);
  *(undefined1 *)(unaff_RDI + 0x39) = 0;
  if (DAT_026e85e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      _uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f4c7b == '\0') {
    FUN_001b1900();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1c9) = 0;
  if (DAT_026e85e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      _uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f4c7b == '\0') {
    FUN_001b1a70();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1ca) = 0;
  if (DAT_026e85e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      _uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f4c7b == '\0') {
    FUN_001b1be0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1cc) = 0;
  if (DAT_026e85e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f4bd8 = FUN_0006d940();
      _DAT_027f4bc0 = "GNRootView";
      _DAT_027f4bc8 = 0x1d0;
      _DAT_027f4bd0 = FUN_00097da0;
      _DAT_027f4be0 = 0;
      uRam00000000027f4be8 = 0;
      _DAT_027f4bf0 = 0;
      uRam00000000027f4bf8 = 0;
      _DAT_027f4c00 = 0;
      uRam00000000027f4c08 = 0;
      _DAT_027f4c10 = 0;
      uRam00000000027f4c18 = 0;
      _DAT_027f4c20 = 0;
      uRam00000000027f4c28 = 0;
      _DAT_027f4c30 = 0;
      uRam00000000027f4c38 = 0;
      _DAT_027f4c40 = 0;
      uRam00000000027f4c48 = 0;
      _DAT_027f4c50 = 0;
      uRam00000000027f4c58 = 0;
      _DAT_027f4c60 = 0;
      uRam00000000027f4c68 = 0;
      _DAT_027f4c70 = 0;
      _uRam00000000027f4c78 = 0;
      _DAT_027f4c80 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f4c7b == '\0') {
    FUN_001b1d50();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01e22920 — 2356 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e22af1) */
/* WARNING: Removing unreachable block (ram,0x01e23239) */
/* WARNING: Removing unreachable block (ram,0x01e23153) */
/* WARNING: Removing unreachable block (ram,0x01e2315c) */
/* WARNING: Removing unreachable block (ram,0x01e22fdb) */
/* WARNING: Removing unreachable block (ram,0x01e22fe4) */
/* WARNING: Removing unreachable block (ram,0x01e22c79) */
/* WARNING: Removing unreachable block (ram,0x01e22c85) */
/* WARNING: Removing unreachable block (ram,0x01e22f78) */
/* WARNING: Removing unreachable block (ram,0x01e22f81) */
/* WARNING: Removing unreachable block (ram,0x01e23090) */
/* WARNING: Removing unreachable block (ram,0x01e23099) */
/* WARNING: Removing unreachable block (ram,0x01e231ba) */
/* WARNING: Removing unreachable block (ram,0x01e231c6) */
/* WARNING: Removing unreachable block (ram,0x01e23245) */
/* WARNING: Removing unreachable block (ram,0x01e22ab6) */
/* WARNING: Removing unreachable block (ram,0x01e22abf) */
/* WARNING: Removing unreachable block (ram,0x01e22a3c) */
/* WARNING: Removing unreachable block (ram,0x01e22a59) */
/* WARNING: Removing unreachable block (ram,0x01e22a3e) */
/* WARNING: Removing unreachable block (ram,0x01e22a5b) */
/* WARNING: Removing unreachable block (ram,0x01e22b00) */
/* WARNING: Removing unreachable block (ram,0x01e22b20) */
/* WARNING: Removing unreachable block (ram,0x01e22b02) */
/* WARNING: Removing unreachable block (ram,0x01e22b22) */
/* WARNING: Removing unreachable block (ram,0x01e22c36) */
/* WARNING: Removing unreachable block (ram,0x01e22c3f) */

void FUN_01e22920(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 uVar13;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined4 uVar14;
  undefined1 auVar12 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_114;
  float fStack_10c;
  float local_f8;
  float fStack_f4;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  int local_68;
  longlong local_58;
  char local_50;
  int local_40;
  
  if (((((*(float *)(unaff_RDI + 100) != DAT_023dccfc) ||
        (NAN(*(float *)(unaff_RDI + 100)) || NAN(DAT_023dccfc))) ||
       (*(float *)(unaff_RDI + 0x68) != DAT_023dcd00)) ||
      ((NAN(*(float *)(unaff_RDI + 0x68)) || NAN(DAT_023dcd00) ||
       (*(float *)(unaff_RDI + 0x6c) != DAT_023dcd04)))) ||
     ((NAN(*(float *)(unaff_RDI + 0x6c)) || NAN(DAT_023dcd04) ||
      ((*(float *)(unaff_RDI + 0x70) != DAT_023dcd08 ||
       (NAN(*(float *)(unaff_RDI + 0x70)) || NAN(DAT_023dcd08))))))) goto LAB_01e22e61;
  local_b8 = DAT_023dccfc;
  fStack_b4 = DAT_023dcd00;
  uVar13 = 0;
  uVar14 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x18);
  local_98 = DAT_023dcd04;
  fStack_94 = DAT_023dcd08;
  if (lVar2 != 0) {
    local_68 = -1;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_a8 = DAT_023dcd04;
    fStack_a4 = DAT_023dcd08;
    uStack_a0 = 0;
    uStack_9c = 0;
    fVar20 = DAT_023dcd04;
    fVar21 = DAT_023dcd08;
    local_f8 = local_b8;
    fStack_f4 = fStack_b4;
LAB_01e22a38:
    do {
      lVar4 = local_58;
      local_68 = local_68 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_68) goto LAB_01e22d64;
      FUN_01e262a0();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          goto LAB_01e22ad0;
        }
      }
      else if (local_58 != 0) {
LAB_01e22ad0:
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        fVar22 = local_a8;
        fVar23 = fStack_a4;
        uVar18 = uStack_a0;
        uVar19 = uStack_9c;
LAB_01e22b25:
        uStack_9c = uVar19;
        uStack_a0 = uVar18;
        fStack_a4 = fVar23;
        local_a8 = fVar22;
        lVar10 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (local_40 < *(int *)(lVar4 + 0xc)) {
          lVar3 = *(longlong *)(lVar4 + 0x10);
          local_58 = *(longlong *)(lVar3 + 8 + lVar10 * 8);
          fVar22 = fVar20;
          fVar23 = fVar21;
          uVar18 = uVar13;
          uVar19 = uVar14;
          uVar11 = FUN_01e21df0(lVar3,local_40);
          if ((((local_b8 == DAT_023dccfc) && (!NAN(local_b8) && !NAN(DAT_023dccfc))) &&
              (fStack_b4 == DAT_023dcd00)) &&
             (((!NAN(fStack_b4) && !NAN(DAT_023dcd00) && (local_a8 == DAT_023dcd04)) &&
              (!NAN(local_a8) && !NAN(DAT_023dcd04))))) goto code_r0x01e22b83;
          goto LAB_01e22ba0;
        }
        FUN_00274dd0();
        FUN_00d50b20();
      }
      if (DAT_028b9519 == '\0') {
        FUN_01e25fd0();
        if (local_50 == '\0') {
          if (local_58 == 0) goto LAB_01e22a38;
          FUN_00d50b00();
        }
        else if (local_58 == 0) goto LAB_01e22a38;
        (**(code **)(*DAT_028b94f8 + 0x918))();
        FUN_01e22190();
        lVar4 = DAT_028b94f8[0x2d];
        fVar22 = local_98;
        fVar23 = fStack_94;
        if ((lVar4 != 0) && (0xf < *(int *)(lVar4 + 0x18))) {
          iVar9 = 0;
          lVar10 = 8;
          fVar20 = local_f8;
          fVar21 = fStack_f4;
          do {
            uVar11 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + -8 + lVar10);
            local_f8 = (float)uVar11;
            fStack_f4 = (float)((ulonglong)uVar11 >> 0x20);
            uVar13 = 0;
            uVar14 = 0;
            uVar11 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + lVar10);
            fVar22 = (float)uVar11;
            fVar23 = (float)((ulonglong)uVar11 >> 0x20);
            if ((((fVar20 != DAT_023dccfc) || (NAN(fVar20) || NAN(DAT_023dccfc))) ||
                (fVar21 != DAT_023dcd00)) ||
               (((NAN(fVar21) || NAN(DAT_023dcd00) || (local_98 != DAT_023dcd04)) ||
                (NAN(local_98) || NAN(DAT_023dcd04))))) {
LAB_01e22d20:
              fVar22 = local_98;
              fVar23 = fStack_94;
              uVar11 = FUN_00d052e0();
              local_f8 = (float)uVar11;
              fStack_f4 = (float)((ulonglong)uVar11 >> 0x20);
              uVar13 = (undefined4)extraout_XMM0_Qb_01;
              uVar14 = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
            }
            else if ((fStack_94 != DAT_023dcd08) || (NAN(fStack_94) || NAN(DAT_023dcd08)))
            goto LAB_01e22d20;
            iVar9 = iVar9 + 1;
            iVar1 = *(int *)(lVar4 + 0x18);
            iVar8 = iVar1 + 0xf;
            if (-1 < iVar1) {
              iVar8 = iVar1;
            }
            lVar10 = lVar10 + 0x10;
            fVar20 = local_f8;
            fVar21 = fStack_f4;
            local_98 = fVar22;
            fStack_94 = fVar23;
          } while (iVar9 < iVar8 >> 4);
        }
        FUN_00d50b20();
        local_98 = fVar22;
        fStack_94 = fVar23;
      }
    } while( true );
  }
  local_a8 = DAT_023dcd04;
  fStack_a4 = DAT_023dcd08;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_f8 = DAT_023dccfc;
  fStack_f4 = DAT_023dcd00;
LAB_01e22d8b:
  if (((((local_f8 != DAT_023dccfc) || (NAN(local_f8) || NAN(DAT_023dccfc))) ||
       (fStack_f4 != DAT_023dcd00)) ||
      ((NAN(fStack_f4) || NAN(DAT_023dcd00) || (local_98 != DAT_023dcd04)))) ||
     (NAN(local_98) || NAN(DAT_023dcd04))) {
LAB_01e22dbd:
    FUN_00d051c0();
    *(float *)(unaff_RDI + 0x6c) = local_98;
    *(float *)(unaff_RDI + 0x70) = fStack_94;
    *(undefined4 *)(unaff_RDI + 100) = *(undefined4 *)(unaff_RDI + 0x44);
    *(float *)(unaff_RDI + 0x68) = *(float *)(unaff_RDI + 0x48) - fStack_94;
  }
  else if ((fStack_94 != DAT_023dcd08) || (NAN(fStack_94) || NAN(DAT_023dcd08))) goto LAB_01e22dbd;
  if ((local_b8 == DAT_023dccfc) && (!NAN(local_b8) && !NAN(DAT_023dccfc))) {
    if ((fStack_b4 == DAT_023dcd00) && (!NAN(fStack_b4) && !NAN(DAT_023dcd00))) {
      if ((local_a8 == DAT_023dcd04) && (!NAN(local_a8) && !NAN(DAT_023dcd04))) {
        if ((fStack_a4 == DAT_023dcd08) && (!NAN(fStack_a4) && !NAN(DAT_023dcd08)))
        goto LAB_01e22e61;
      }
    }
  }
  *(undefined8 *)(unaff_RDI + 0x54) = *(undefined8 *)(unaff_RDI + 0x44);
  *(undefined8 *)(unaff_RDI + 0x5c) = *(undefined8 *)(unaff_RDI + 0x4c);
  *(float *)(unaff_RDI + 0x58) = *(float *)(unaff_RDI + 0x50) + *(float *)(unaff_RDI + 0x58);
  auVar15._4_4_ = fStack_a4;
  auVar15._0_4_ = local_a8;
  auVar15._8_4_ = uStack_a0;
  auVar15._12_4_ = uStack_9c;
  uVar11 = extractps(auVar15,1);
  *(undefined8 *)(unaff_RDI + 0x60) = uVar11;
LAB_01e22e61:
  fStack_10c = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  uVar11 = FUN_00d052e0(*(undefined8 *)(unaff_RDI + 0x44),*(undefined8 *)(unaff_RDI + 0x4c),
                        (int)*(undefined8 *)(unaff_RDI + 0x54),
                        (int)*(undefined8 *)(unaff_RDI + 0x5c));
  if (DAT_028b9519 == '\0') {
    uVar11 = FUN_00d052e0();
    local_a8 = (float)uVar11;
    fStack_a4 = (float)((ulonglong)uVar11 >> 0x20);
  }
  else {
    local_a8 = (float)uVar11;
    fStack_a4 = (float)((ulonglong)uVar11 >> 0x20);
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  if (*unaff_RSI == 0) {
    FUN_01ede360(*(undefined8 *)(unaff_RDI + 0x34),*(undefined8 *)(unaff_RDI + 0x3c),0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(ulonglong *)(unaff_RDI + 0x3c);
    fStack_114 = (float)((ulonglong)param_1 >> 0x20);
    auVar15 = insertps(auVar17,ZEXT416((uint)((DAT_02390d00 + fStack_114) -
                                             (float)((ulonglong)*(undefined8 *)(unaff_RDI + 0x34) >>
                                                    0x20))),0x10);
    FUN_01ede360(0,auVar15._0_8_,0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)(unaff_RDI + 0x34);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(ulonglong *)(unaff_RDI + 0x3c);
    fVar20 = (float)(*(ulonglong *)(unaff_RDI + 0x3c) >> 0x20) -
             (fStack_114 - (float)(*(ulonglong *)(unaff_RDI + 0x34) >> 0x20));
    fVar21 = 0.0 - (fStack_10c - 0.0);
    auVar6._4_4_ = fStack_114;
    auVar6._0_4_ = fStack_114 + DAT_02390124;
    auVar6._8_4_ = fStack_10c;
    auVar6._12_4_ = fStack_10c;
    auVar15 = insertps(auVar12,auVar6,0x10);
    auVar5._4_4_ = fVar20;
    auVar5._0_4_ = fVar20 + DAT_02390d00;
    auVar5._8_4_ = fVar21;
    auVar5._12_4_ = fVar21;
    auVar17 = insertps(auVar16,auVar5,0x10);
    FUN_01ede360(auVar15._0_8_,auVar17._0_8_,0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ede360(*(undefined8 *)(unaff_RDI + 0x34),*(undefined8 *)(unaff_RDI + 0x3c),0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_01edf3b0();
  local_b8 = (float)uVar11;
  fStack_b4 = (float)((ulonglong)uVar11 >> 0x20);
  *(float *)(unaff_RDI + 0x44) = *(float *)(unaff_RDI + 0x44) + (local_b8 - local_a8);
  *(float *)(unaff_RDI + 0x48) = (fStack_b4 - fStack_a4) + *(float *)(unaff_RDI + 0x48);
  FUN_01e5ba50(*(undefined8 *)(unaff_RDI + 0x44),*(undefined8 *)(unaff_RDI + 0x4c));
  FUN_00d50b20();
  return;
code_r0x01e22b83:
  if ((fStack_a4 != DAT_023dcd08) ||
     (fVar20 = local_b8, fVar21 = fStack_b4, uVar13 = uStack_b0, uVar14 = uStack_ac,
     uStack_b0 = (int)extraout_XMM0_Qb, uStack_ac = (int)((ulonglong)extraout_XMM0_Qb >> 0x20),
     local_b8 = (float)uVar11, fStack_b4 = (float)((ulonglong)uVar11 >> 0x20),
     NAN(fStack_a4) || NAN(DAT_023dcd08))) {
LAB_01e22ba0:
    fVar20 = local_a8;
    fVar21 = fStack_a4;
    uVar13 = uStack_a0;
    uVar14 = uStack_9c;
    uVar11 = FUN_00d052e0();
    local_b8 = (float)uVar11;
    fStack_b4 = (float)((ulonglong)uVar11 >> 0x20);
    uStack_b0 = (undefined4)extraout_XMM0_Qb_00;
    uStack_ac = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    fVar22 = fVar20;
    fVar23 = fVar21;
    uVar18 = uVar13;
    uVar19 = uVar14;
  }
  goto LAB_01e22b25;
LAB_01e22d64:
  FUN_00274dd0();
  goto LAB_01e22d8b;
}




// ============================================================
// @01e24a90 — 1999 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e2518e) */
/* WARNING: Removing unreachable block (ram,0x01e25197) */
/* WARNING: Removing unreachable block (ram,0x01e2502c) */
/* WARNING: Removing unreachable block (ram,0x01e25035) */
/* WARNING: Removing unreachable block (ram,0x01e25092) */
/* WARNING: Removing unreachable block (ram,0x01e2509b) */
/* WARNING: Removing unreachable block (ram,0x01e24f45) */
/* WARNING: Removing unreachable block (ram,0x01e24f4e) */

void FUN_01e24a90(void)

{
  bool bVar1;
  char cVar2;
  longlong unaff_RDI;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_78;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_00d403d0();
  lVar3 = DAT_027f33c8;
  if (DAT_027f33c8 != 0) {
    FUN_00d50b00();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  local_d8 = 0;
  local_d0 = '\0';
  FUN_00d40470(&local_d8,&stack0xffffffffffffff58,1,3);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x20) == 0) {
    return;
  }
  if ((*(int *)(unaff_RDI + 0xc) != -1) && (*(int *)(unaff_RDI + 0x10) != -1)) {
    FUN_01e26090();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      if ((*(int *)(unaff_RDI + 0xc) == -1) || (*(int *)(unaff_RDI + 0x10) == -1)) {
        local_38 = '\0';
        local_40 = 0;
      }
      else {
        FUN_01e26090();
      }
      cVar2 = FUN_01e26480();
      if (cVar2 == '\0') {
        bVar5 = false;
      }
      else {
        if ((*(int *)(unaff_RDI + 0xc) == -1) || (*(int *)(unaff_RDI + 0x10) == -1)) {
          local_58 = '\0';
          local_60 = 0;
        }
        else {
          FUN_01e26090();
        }
        FUN_01e26490();
        bVar5 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar5) {
        return;
      }
      if ((*(int *)(unaff_RDI + 0xc) == -1) || (*(int *)(unaff_RDI + 0x10) == -1)) {
        local_58 = '\0';
        local_60 = 0;
      }
      else {
        FUN_01e26090();
      }
      FUN_01e26490();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01caeba0();
      if (local_40 == 0) {
        local_40 = 0;
        bVar6 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar6 = true;
      }
      else {
        bVar6 = true;
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_01caec40();
      if ((*(int *)(unaff_RDI + 0xc) == -1) || (*(int *)(unaff_RDI + 0x10) == -1)) {
        local_58 = '\0';
        local_60 = 0;
LAB_01e2514e:
        local_78 = 0;
      }
      else {
        FUN_01e26090();
        if (local_58 == '\0') {
          if (local_60 == 0) goto LAB_01e2514e;
          FUN_00d50b00();
          local_78 = local_60;
        }
        else {
          local_78 = local_60;
          local_58 = '\0';
        }
      }
      lVar3 = DAT_027e1388;
      if (DAT_027e1388 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01e251e5;
    }
  }
  if ((longlong)*(int *)(unaff_RDI + 0xc) == -1) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) +
       (longlong)*(int *)(unaff_RDI + 0xc) * 8) == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  if ((longlong)*(int *)(unaff_RDI + 0xc) == -1) {
    lVar3 = 0;
    bVar5 = true;
  }
  else {
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) +
             (longlong)*(int *)(unaff_RDI + 0xc) * 8);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar5 = false;
  }
  cVar2 = FUN_01e26480();
  if (cVar2 == '\0') {
    bVar6 = false;
    if (!bVar5 && lVar3 != 0) goto LAB_01e24e89;
  }
  else {
    if ((longlong)*(int *)(unaff_RDI + 0xc) == -1) {
      lVar4 = 0;
      bVar1 = true;
    }
    else {
      lVar4 = *(longlong *)
               (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) +
               (longlong)*(int *)(unaff_RDI + 0xc) * 8);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_00d50b00();
      }
      bVar1 = false;
    }
    FUN_01e26490();
    bVar6 = local_40 != 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar1 && lVar4 != 0) {
      FUN_00d50b20();
    }
    if (!bVar5 && lVar3 != 0) {
LAB_01e24e89:
      FUN_00d50b20();
    }
  }
  if (!bVar6) {
    return;
  }
  if ((longlong)*(int *)(unaff_RDI + 0xc) == -1) {
    lVar3 = 0;
    bVar5 = true;
  }
  else {
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) +
             (longlong)*(int *)(unaff_RDI + 0xc) * 8);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar5 = false;
  }
  FUN_01e26490();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01caeba0();
  if (local_40 == 0) {
    local_40 = 0;
    bVar6 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar6 = true;
  }
  else {
    bVar6 = true;
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar5 && lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_01caec40();
  lVar3 = DAT_027e1388;
  if ((longlong)*(int *)(unaff_RDI + 0xc) == -1) {
    local_b8 = 0;
  }
  else {
    local_b8 = *(longlong *)
                (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) +
                (longlong)*(int *)(unaff_RDI + 0xc) * 8);
    if (local_b8 != 0) {
      FUN_00d50b00();
      lVar3 = DAT_027e1388;
    }
  }
  local_b0 = '\x01';
  DAT_027e1388 = lVar3;
  if (lVar3 != 0) {
    local_b0 = '\x01';
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_01e251e5:
  if (local_40 != 0) {
    local_c0 = '\0';
    local_c8 = local_40;
    (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x3b8))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @000c6aa0 — 1823 bytes
// ============================================================

void FUN_000c6aa0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong unaff_RDI;
  longlong lVar9;
  longlong *plVar10;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
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
  longlong local_48;
  longlong *local_40;
  char local_38;
  
  plVar10 = *(longlong **)(unaff_RDI + 0x158);
  (**(code **)(*plVar10 + 0x368))();
  bVar2 = true;
  if (*(longlong *)(unaff_RDI + 0x168) == 0) {
    local_48 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x168) + 0x10);
    iVar4 = *(int *)(lVar1 + 0xc);
    if (iVar4 < 1) {
      local_48 = 0;
      bVar2 = true;
    }
    else {
      lVar9 = 0;
      local_a0 = plVar10;
      do {
        lVar8 = *(longlong *)(lVar1 + 0x10);
        local_48 = *(longlong *)(lVar8 + lVar9 * 8);
        if (*(longlong *)(local_48 + 0x308) == 0) {
          FUN_0051b4f0();
          plVar3 = local_40;
          pVar7 = (pthread_key_t)lVar8;
          plVar10 = (longlong *)*param_2;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = local_48;
          if (plVar3 == plVar10) {
            FUN_00d50b00();
            plVar10 = local_a0;
            if (*(longlong *)(lVar8 + 0x308) == 0) {
              FUN_013fb420();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_00521db0();
              FUN_00757c60();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012caf10();
              local_88 = local_68;
              local_80 = 0;
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              local_80 = '\x01';
              FUN_016cbba0();
              local_98 = local_58;
              local_90 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_90 = '\x01';
              FUN_0132d960();
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != 0)) {
                FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d403d0();
              lVar1 = DAT_027ebe30;
              if (DAT_027ebe30 != 0) {
                FUN_00d50b00();
              }
              FUN_013fb420();
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0132d610();
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
              local_f8 = '\0';
              local_100 = 0;
              FUN_00d40470(&local_100,&local_78,3,3);
              if ((local_f8 != '\0') && (local_100 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            plVar5 = (longlong *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar5 + 0x18))();
            plVar3 = DAT_026de560;
            lVar1 = *param_1;
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) != 0)) {
              local_e8 = '\0';
              local_f0 = lVar1;
              if (DAT_026de560 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar3;
              local_38 = '\0';
              FUN_00ca0840();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_e8 != '\0') && (local_f0 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar3 = DAT_0270b8f0;
            lVar1 = *param_3;
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) != 0)) {
              local_d8 = '\0';
              local_e0 = lVar1;
              if (DAT_0270b8f0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_40 = plVar3;
              local_38 = '\0';
              FUN_00ca0840();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d403d0();
            local_d0 = DAT_026de568;
            if (DAT_026de568 != 0) {
              FUN_00d50b00();
            }
            local_c8 = '\x01';
            local_c0 = local_48;
            local_b8 = '\0';
            local_a8 = '\0';
            local_b0 = plVar5;
            FUN_00d40470(&local_b0,&local_c0,3,3);
            if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00b34cb0();
            plVar3 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                (**(code **)(*local_40 + 0x10))();
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  (**(code **)(*local_40 + 0x10))();
                  FUN_00d50b20();
                }
                goto LAB_000c6ef1;
              }
            }
            else if (local_40 != (longlong *)0x0) {
LAB_000c6ef1:
              (**(code **)(*plVar3 + 0x50))();
              (**(code **)(*plVar3 + 0x10))();
              FUN_00d50b20();
            }
            FUN_00d50b20();
            bVar2 = false;
            goto LAB_000c6f17;
          }
          iVar4 = *(int *)(lVar1 + 0xc);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
      local_48 = 0;
      bVar2 = true;
      plVar10 = local_a0;
    }
  }
LAB_000c6f17:
  (**(code **)(*plVar10 + 0x378))();
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01e22190 — 1166 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e221d8) */
/* WARNING: Removing unreachable block (ram,0x01e221e1) */
/* WARNING: Removing unreachable block (ram,0x01e2237a) */

void FUN_01e22190(undefined8 param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong unaff_RDI;
  float *pfVar15;
  int iVar16;
  undefined8 unaff_R15;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  float fVar18;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  longlong local_90;
  char local_88;
  longlong *local_80;
  undefined4 local_74;
  longlong *local_70;
  char local_68;
  float local_54;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  
  uVar17 = FUN_01cb4790();
  if (local_50 == (longlong *)0x0) {
    local_74 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
    plVar13 = (longlong *)0x0;
  }
  else {
    plVar13 = local_50;
    if (local_48 == '\0') {
      uVar17 = FUN_00d50b00();
      local_74 = 0;
    }
    else {
      local_74 = 0;
    }
  }
  local_80 = plVar13;
  if (*(longlong *)(unaff_RDI + 0x168) == 0) {
    puVar11 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    uVar17 = FUN_00c92160();
    puVar1 = *(undefined8 **)(unaff_RDI + 0x168);
    if (puVar1 == puVar11) {
      uVar17 = FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x168) = puVar11;
      if (puVar1 != (undefined8 *)0x0) {
        uVar17 = FUN_00d50b20();
      }
    }
  }
  else {
    uVar17 = FUN_00c8e340(uVar17,0);
  }
  local_a8._0_8_ = (**(code **)(*plVar13 + 0x3c8))(uVar17,0);
  local_a8._8_4_ = extraout_XMM0_Dc;
  local_a8._12_4_ = extraout_XMM0_Dd;
  uVar5 = (**(code **)(*plVar13 + 0x3c8))((int)local_a8._0_8_,1);
  auVar4._8_4_ = extraout_XMM0_Dc_00;
  auVar4._0_8_ = uVar5;
  auVar4._12_4_ = extraout_XMM0_Dd_00;
  local_a8 = insertps(local_a8,auVar4,0x10);
  local_54 = DAT_023b169c;
  bVar8 = false;
  local_40 = (longlong *)0x0;
  iVar16 = 0;
  do {
    iVar10 = FUN_01d5b230();
    uVar17 = local_74;
    plVar13 = local_80;
    if (iVar10 <= iVar16) {
      uVar2 = *(uint *)(*(longlong *)(unaff_RDI + 0x168) + 0x18);
      if (0xf < (int)uVar2) {
        uVar2 = uVar2 >> 4;
        lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x168) + 0x10);
        if ((ulonglong)uVar2 - 1 < 3) {
          uVar14 = 0;
        }
        else {
          pfVar15 = (float *)(lVar3 + 0x38);
          uVar14 = 0;
          do {
            pfVar15[-0xc] = local_54;
            pfVar15[-8] = local_54;
            pfVar15[-4] = local_54;
            *pfVar15 = local_54;
            uVar14 = uVar14 + 4;
            pfVar15 = pfVar15 + 0x10;
          } while ((uVar2 & 0xfffffffc) != uVar14);
        }
        if ((ulonglong)(uVar2 & 3) != 0) {
          lVar12 = 0;
          do {
            *(float *)(lVar3 + uVar14 * 0x10 + 8 + lVar12) = local_54;
            lVar12 = lVar12 + 0x10;
          } while ((ulonglong)(uVar2 & 3) << 4 != lVar12);
        }
      }
      if ((bVar8) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar17 == '\0' && plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_01d5b240(extraout_XMM0_Da,iVar16);
    if (local_50 == local_40) {
      if ((bVar8) || (local_50 == (longlong *)0x0)) {
joined_r0x01e22360:
        plVar13 = local_40;
        bVar9 = bVar8;
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar13 = local_40;
        bVar9 = true;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01e22348;
        }
      }
    }
    else {
      plVar13 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = true;
        if ((bVar8) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_40 = local_50;
LAB_01e22348:
          bVar8 = true;
          goto joined_r0x01e22360;
        }
      }
      else {
        bVar9 = true;
        if ((bVar8) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar8 = bVar9;
    FUN_01d65230();
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    local_70 = local_50;
    local_90 = *(longlong *)(unaff_RDI + 0x158);
    local_88 = '\0';
    local_b8 = (undefined1  [8])
               (**(code **)(*local_80 + 0x5d0))(*(undefined1 *)(unaff_RDI + 0x178),&local_90);
    fStack_b0 = (float)extraout_XMM0_Dc_01;
    fStack_ac = (float)extraout_XMM0_Dd_01;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar7._8_4_ = in_XMM0_Dc;
    auVar7._0_8_ = param_1;
    auVar7._12_4_ = in_XMM0_Dd;
    if (SUB84(local_b8,0) < (float)param_1) {
      _local_b8 = blendps(_local_b8,auVar7,1);
    }
    lVar3 = *(longlong *)(unaff_RDI + 0x168);
    iVar10 = *(int *)(lVar3 + 0x18);
    FUN_00c8e340((float)param_1,1);
    fVar18 = (float)local_b8._0_4_;
    if ((float)local_b8._0_4_ <= local_54) {
      fVar18 = local_54;
    }
    puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar10);
    *puVar1 = local_a8._0_8_;
    *(undefined4 *)(puVar1 + 1) = local_b8._0_4_;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_b8._4_4_;
    auVar6._4_4_ = (float)local_b8._4_4_ + local_a8._4_4_;
    auVar6._0_4_ = (float)local_b8._0_4_ + local_a8._0_4_;
    auVar6._8_4_ = fStack_b0 + local_a8._8_4_;
    auVar6._12_4_ = fStack_ac + local_a8._12_4_;
    local_a8 = blendps(local_a8,auVar6,2);
    iVar16 = iVar16 + 1;
    local_54 = fVar18;
    local_40 = plVar13;
  } while( true );
}




// ============================================================
// @01d83990 — 1019 bytes
// str: ""GNRootView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d839d3) */
/* WARNING: Removing unreachable block (ram,0x01d83b96) */
/* WARNING: Removing unreachable block (ram,0x01d83ba0) */
/* WARNING: Removing unreachable block (ram,0x01d83bd3) */
/* WARNING: Removing unreachable block (ram,0x01d83d43) */
/* WARNING: Removing unreachable block (ram,0x01d83d4f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d83990(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *plVar9;
  longlong *local_50;
  char local_48;
  
  plVar9 = unaff_RDI;
  if (unaff_RDI == (longlong *)0x0) {
    bVar1 = false;
    cVar3 = '\0';
    lVar6 = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    FUN_00d50b00();
    bVar1 = false;
    plVar8 = (longlong *)0x0;
    do {
      if ((DAT_026e85e0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_027f4bd8 = FUN_0006d940();
        _DAT_027f4bc0 = "GNRootView";
        _DAT_027f4bc8 = 0x1d0;
        _DAT_027f4bd0 = FUN_00097da0;
        _DAT_027f4be0 = 0;
        uRam00000000027f4be8 = 0;
        _DAT_027f4bf0 = 0;
        uRam00000000027f4bf8 = 0;
        _DAT_027f4c00 = 0;
        uRam00000000027f4c08 = 0;
        _DAT_027f4c10 = 0;
        uRam00000000027f4c18 = 0;
        _DAT_027f4c20 = 0;
        uRam00000000027f4c28 = 0;
        _DAT_027f4c30 = 0;
        uRam00000000027f4c38 = 0;
        _DAT_027f4c40 = 0;
        uRam00000000027f4c48 = 0;
        _DAT_027f4c50 = 0;
        uRam00000000027f4c58 = 0;
        _DAT_027f4c60 = 0;
        uRam00000000027f4c68 = 0;
        _DAT_027f4c70 = 0;
        uRam00000000027f4c78 = 0;
        _DAT_027f4c80 = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*plVar9 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar5 = (longlong *)&stack0xffffffffffffffa0;
      if (cVar3 == '\0') {
        plVar5 = &DAT_02802688;
      }
      lVar6 = *plVar5;
      plVar7 = plVar8;
      if (lVar6 != 0) {
        cVar3 = (char)plVar5[1];
        if (cVar3 != '\0') {
          FUN_00d50b00();
        }
        FUN_01d8c6e0();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_50 == (longlong *)0x0) goto LAB_01d83ccb;
        FUN_01d8c6e0();
        if (plVar8 == local_50) {
          bVar2 = bVar1;
          if ((bVar1) || (plVar8 == (longlong *)0x0)) goto joined_r0x01d83afc;
          bVar2 = true;
          if (local_48 == '\0') {
            FUN_00d50b00();
            goto LAB_01d83b20;
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar7 = local_50;
          if ((bVar1) && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d83b20:
          plVar8 = plVar7;
          bVar2 = true;
joined_r0x01d83afc:
          plVar7 = plVar8;
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar2 = true;
          plVar7 = local_50;
          if ((bVar1) && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar1 = bVar2;
        if (cVar3 != '\0') {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar9 + 0x370))();
      if (local_50 == plVar9) {
LAB_01d83bda:
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar9 = local_50;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_01d83bda;
        }
        FUN_00d50b20();
      }
      plVar8 = plVar7;
    } while (plVar9 != (longlong *)0x0);
    cVar3 = '\0';
    lVar6 = 0;
  }
LAB_01d83ccb:
  local_68 = 0;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_78 = '\0';
  local_80 = plVar7;
  local_70 = unaff_RDI;
  FUN_01e57a30(&local_80,&local_70);
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar3 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @000c4430 — 647 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x000c4686) */
/* WARNING: Removing unreachable block (ram,0x000c468f) */

void FUN_000c4430(void)

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  FUN_00ca1380();
  plVar1 = local_40;
  local_50 = local_38[0];
  pcVar3 = local_38;
  if (local_38[0] == '\0') {
    pcVar3 = &local_50;
  }
  *pcVar3 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = (longlong *)*unaff_RSI;
  local_38[0] = '\0';
  cVar2 = FUN_00d23d70();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    if (unaff_RDI[0x2a] != 0) {
      FUN_00ca1380();
      plVar1 = local_40;
      pcVar3 = local_38;
      if (local_38[0] == '\0') {
        pcVar3 = &local_50;
      }
      local_50 = local_38[0];
      *pcVar3 = '\0';
      if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_40 = (longlong *)*unaff_RSI;
      local_38[0] = '\0';
      cVar2 = FUN_00d24090();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        local_40 = (longlong *)*unaff_RSI;
        local_38[0] = '\0';
        FUN_00ca1990();
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    (**(code **)(*unaff_RDI + 0x720))();
    if (CONCAT71(uStack_4f,local_50) == 0) {
      cVar2 = '\0';
    }
    else {
      (**(code **)(*unaff_RDI + 0x720))();
      (**(code **)(*local_78 + 0x618))();
      local_40 = (longlong *)*unaff_RSI;
      local_38[0] = '\0';
      cVar2 = FUN_00d24090();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (**(code **)(*unaff_RDI + 0x720))();
      (**(code **)(*local_40 + 0x5f8))();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @000c6250 — 615 bytes
// str: ""Melodyne #%I""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x000c630e) */
/* WARNING: Removing unreachable block (ram,0x000c6317) */

undefined8 * FUN_000c6250(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  longlong lVar9;
  longlong *local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x158);
  (**(code **)(*plVar1 + 0x368))();
  bVar4 = false;
  do {
    FUN_00d8cb40();
    if (local_40 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      bVar4 = true;
      plVar8 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    if (*(longlong *)(unaff_RSI + 0x168) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(unaff_RSI + 0x168) + 0x10);
      pVar7 = *(pthread_key_t *)(lVar2 + 0xc);
      if (0 < (int)pVar7) {
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar9 * 8);
          if ((*(longlong *)(lVar3 + 0x308) == 0) && (*param_2 != lVar3)) {
            FUN_0051be00();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6000();
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            cVar5 = (**(code **)(*plVar8 + 0x50))();
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (cVar5 != '\0') {
              if (bVar4) {
                FUN_00d50b20();
                bVar4 = false;
                plVar8 = (longlong *)0x0;
              }
              else {
                bVar4 = false;
                plVar8 = (longlong *)0x0;
              }
              break;
            }
            pVar7 = *(pthread_key_t *)(lVar2 + 0xc);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)pVar7);
      }
    }
    if (plVar8 != (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar4) {
        FUN_00d50b00();
      }
      *unaff_RDI = plVar8;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      (**(code **)(*plVar1 + 0x378))();
      return unaff_RDI;
    }
  } while( true );
}




// ============================================================
// @000c3e50 — 543 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x000c3f89) */
/* WARNING: Removing unreachable block (ram,0x000c3f92) */
/* WARNING: Removing unreachable block (ram,0x000c4004) */
/* WARNING: Removing unreachable block (ram,0x000c400d) */
/* WARNING: Removing unreachable block (ram,0x000c3eb4) */
/* WARNING: Removing unreachable block (ram,0x000c3ebd) */

longlong * FUN_000c3e50(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_000c41f0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    plVar1 = *(longlong **)(unaff_RSI + 0x158);
    (**(code **)(*plVar1 + 0x368))();
    if ((*(longlong *)(unaff_RSI + 0x168) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(unaff_RSI + 0x168) + 0x10), 0 < *(int *)(lVar2 + 0xc)))
    {
      lVar4 = 0;
      do {
        FUN_0051be00();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        cVar3 = FUN_00d24090();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          FUN_0051b590();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_00d235a0();
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (*(int *)(local_40 + 0xc) == *(int *)(*param_2 + 0xc)) break;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar2 + 0xc));
    }
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    (**(code **)(*plVar1 + 0x378))();
  }
  return unaff_RDI;
}




// ============================================================
// @000c67f0 — 536 bytes
// ============================================================

ulonglong FUN_000c67f0(undefined8 param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong unaff_RDI;
  longlong lVar9;
  undefined1 *local_res8;
  char *local_res10;
  longlong *local_res18;
  longlong local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x158);
  (**(code **)(*plVar1 + 0x368))();
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(longlong *)(unaff_RDI + 0x168) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x168) + 0x10);
    iVar4 = *(int *)(lVar2 + 0xc);
    if (0 < iVar4) {
      lVar9 = 0;
      do {
        lVar7 = *(longlong *)(lVar2 + 0x10);
        if (*(longlong *)(*(longlong *)(lVar7 + lVar9 * 8) + 0x308) == 0) {
          FUN_0051b4f0();
          pVar6 = (pthread_key_t)lVar7;
          lVar7 = *param_2;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == lVar7) {
            FUN_00d50b00();
            if (*local_res10 == '\0') {
              cVar3 = FUN_0052f210();
              *local_res10 = cVar3;
            }
            *param_3 = 1;
            *param_4 = 0;
            *local_res8 = 0;
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            lVar2 = *local_res18;
            if (lVar2 == local_40) {
              if (((char)local_res18[1] == '\0') && (local_40 != 0)) {
                if (local_38 != '\0') goto LAB_000c6985;
                FUN_00d50b00();
                goto LAB_000c69c1;
              }
LAB_000c69c5:
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar9 = local_res18[1];
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
                *local_res18 = local_40;
                if (((char)lVar9 != '\0') && (lVar2 != 0)) {
                  FUN_00d50b20();
                }
LAB_000c69c1:
                *(undefined1 *)(local_res18 + 1) = 1;
                goto LAB_000c69c5;
              }
              *local_res18 = local_40;
              if (((char)lVar9 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_000c6985:
              *(undefined1 *)(local_res18 + 1) = 1;
            }
            uVar8 = 0;
            goto LAB_000c69de;
          }
          iVar4 = *(int *)(lVar2 + 0xc);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar4);
      uVar8 = CONCAT71((int7)((ulonglong)local_res10 >> 8),1);
    }
  }
LAB_000c69de:
  (**(code **)(*plVar1 + 0x378))();
  if ((char)uVar8 == '\0') {
    FUN_00d50b20();
  }
  return (uVar8 ^ 1) & 0xffffffff;
}




// ============================================================
// @000c7760 — 521 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x000c784d) */
/* WARNING: Removing unreachable block (ram,0x000c7856) */
/* WARNING: Removing unreachable block (ram,0x000c78cb) */
/* WARNING: Removing unreachable block (ram,0x000c78d4) */
/* WARNING: Removing unreachable block (ram,0x000c7810) */
/* WARNING: Removing unreachable block (ram,0x000c7819) */
/* WARNING: Removing unreachable block (ram,0x000c7929) */
/* WARNING: Removing unreachable block (ram,0x000c7936) */

ulonglong FUN_000c7760(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong unaff_RDI;
  undefined8 unaff_R13;
  ulonglong uVar8;
  longlong lVar9;
  longlong *local_40;
  char local_38;
  
  plVar2 = *(longlong **)(unaff_RDI + 0x158);
  (**(code **)(*plVar2 + 0x368))();
  uVar8 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if (*(longlong *)(unaff_RDI + 0x168) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x168) + 0x10);
    lVar9 = -1;
LAB_000c77ac:
    do {
      lVar7 = (longlong)(int)lVar9;
      do {
        lVar9 = lVar7 + 1;
        if (*(int *)(lVar3 + 0xc) <= lVar9) goto LAB_000c794b;
        lVar1 = lVar7 * 8;
        lVar7 = lVar9;
      } while (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar1) + 0x308) != 0);
      FUN_0051be00();
      pVar6 = (pthread_key_t)lVar7;
      if (local_38 == '\0') goto LAB_000c77fd;
    } while (local_40 == (longlong *)0x0);
    goto LAB_000c7820;
  }
LAB_000c794b:
  (**(code **)(*plVar2 + 0x378))();
  return uVar8 & 0xffffffff;
LAB_000c77fd:
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b00();
LAB_000c7820:
    FUN_004f9670();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 != (longlong *)0x0) {
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004fae50();
      cVar4 = (**(code **)(*local_40 + 0x50))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (cVar4 != '\0') goto LAB_000c7940;
    }
    FUN_00d50b20();
    uVar8 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
  }
  goto LAB_000c77ac;
LAB_000c7940:
  FUN_00d50b20();
  uVar8 = 0;
  goto LAB_000c794b;
}



