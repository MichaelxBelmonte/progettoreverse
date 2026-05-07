// Reconstructed implementation of MDExportController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDExportController.h"

// ============================================================
// @0011c470 — 4164 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011c470(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong unaff_R12;
  double dVar7;
  undefined8 uVar8;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
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
  ulonglong uStack_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_00d50100();
  FUN_00b7cae0();
  lVar4 = local_68;
  if ((char)uStack_60 == '\0') {
    if (local_68 == 0) goto LAB_0011ca7f;
    FUN_00d50b00();
    if (((char)uStack_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == 0) goto LAB_0011ca7f;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  local_68 = 0;
  local_58 = lVar4;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_50._4_4_ = 0;
  while( true ) {
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        iVar6 = -local_50._4_4_;
      }
      else {
        iVar6 = (int)local_50 - local_50._4_4_;
        local_50 = CONCAT44(local_50._4_4_,iVar6);
        FUN_00d23690();
        local_48 = local_48 + local_50._4_4_;
        iVar6 = 0;
      }
      local_50 = CONCAT44(iVar6,(int)local_50);
    }
    lVar4 = (longlong)(int)local_50;
    iVar6 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar6);
    if (*(int *)(local_58 + 0xc) <= iVar6) break;
    local_130 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar4 * 8);
    local_128 = '\0';
    local_68 = local_130;
    iVar6 = FUN_00b7f240();
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = DAT_026e1810;
    if (iVar6 != 1) {
      if ((iVar6 == 6) || (iVar6 == 9)) {
        if (DAT_026e1810 != 0) {
          FUN_00d50b00();
        }
        dVar7 = (double)FUN_00e7d6f0();
        uVar5 = (ulonglong)(dVar7 * DAT_023907c0);
        dVar7 = dVar7 * DAT_023907c0 - _DAT_023907c8;
        uVar8 = FUN_0071a120();
        if ((((local_70 == '\0') && (local_78 != 0)) && (uVar8 = FUN_00d50b00(), local_70 != '\0'))
           && (local_78 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        bVar3 = (byte)(((longlong)dVar7 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
        local_88 = lVar4;
        local_80 = '\0';
        FUN_000175c0(uVar8,&local_88);
        lVar1 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          local_70 = '\0';
          local_78 = lVar1;
          bVar3 = FUN_00c70bc0();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        bVar3 = lVar1 != 0 & bVar3 ^ 1;
        unaff_R12 = lVar4;
        if (iVar6 != 9) goto LAB_0011c708;
LAB_0011c70e:
        unaff_R12 = lVar4;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        bVar3 = 0;
        lVar4 = unaff_R12;
        if (iVar6 == 9) goto LAB_0011c70e;
LAB_0011c708:
        lVar4 = unaff_R12;
        if (iVar6 == 6) goto LAB_0011c70e;
      }
      if (bVar3 == 0) {
        FUN_00df1990();
        local_f8 = local_98;
        local_f0 = 0;
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        lVar4 = DAT_026e1818;
        local_f0 = '\x01';
        local_250 = local_68;
        local_248 = '\0';
        if (DAT_026e1818 != 0) {
          FUN_00d50b00();
        }
        local_240 = lVar4;
        local_238 = '\x01';
        FUN_00b89160();
        local_e8 = local_120;
        local_e0 = 0;
        if (local_118 == '\0') {
          if (local_120 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_118 = '\0';
        }
        local_e0 = '\x01';
        FUN_00b88680();
        local_d8 = local_110;
        local_d0 = 0;
        if (local_108 == '\0') {
          if (local_110 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_108 = '\0';
        }
        local_d0 = '\x01';
        local_228 = '\0';
        local_230 = 0;
        FUN_003b8e30(&local_250,&local_f8,&local_240,&local_e8,1,&local_230);
        lVar4 = local_88;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_78 = lVar4;
        local_70 = '\0';
        FUN_00d21140();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_228 != '\0') && (local_230 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        if ((local_238 != '\0') && (local_240 != 0)) {
          FUN_00d50b20();
        }
        if ((local_248 != '\0') && (local_250 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00136a40();
  FUN_00d50b20();
LAB_0011ca7f:
  lVar4 = DAT_026e1820;
  if (DAT_026e1820 != 0) {
    FUN_00d50b00();
  }
  dVar7 = (double)FUN_00e7d6f0();
  uVar5 = (ulonglong)(dVar7 * DAT_023907c0);
  dVar7 = dVar7 * DAT_023907c0 - _DAT_023907c8;
  uVar8 = FUN_0071a120();
  if (((char)uStack_60 == '\0') && (local_68 != 0)) {
    uVar8 = FUN_00d50b00();
    if (((char)uStack_60 != '\0') && (local_68 != 0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  bVar3 = (byte)(((longlong)dVar7 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
  local_78 = lVar4;
  local_70 = '\0';
  FUN_000175c0(uVar8,&local_78);
  lVar1 = local_68;
  if ((char)uStack_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      if (((char)uStack_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uStack_60 = uStack_60 & 0xffffffffffffff00;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    local_68 = lVar1;
    bVar3 = FUN_00c70bc0();
    if (((char)uStack_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = DAT_026e1828;
  if ((lVar1 != 0 & bVar3) != 0) {
    if (DAT_026e1828 != 0) {
      FUN_00d50b00();
    }
    local_220 = lVar4;
    local_218 = '\x01';
    FUN_00b5dfe0();
    local_c8 = local_88;
    local_c0 = 0;
    local_210 = DAT_026e1830;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
        local_210 = DAT_026e1830;
      }
    }
    else {
      local_80 = '\0';
    }
    local_c0 = '\x01';
    DAT_026e1830 = local_210;
    if (local_210 != 0) {
      local_c0 = '\x01';
      FUN_00d50b00();
    }
    local_208 = '\x01';
    local_200 = 0;
    local_1f8 = '\0';
    local_1f0 = 0;
    local_1e8 = '\0';
    local_1e0 = 0;
    local_1d8 = '\0';
    FUN_003b8e30(&local_c8,&local_220,&local_210,&local_200,0,&local_1e0);
    lVar4 = local_78;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_68 = lVar4;
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    FUN_00d21140();
    if (((char)uStack_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
  }
  local_58 = CONCAT44(local_58._4_4_,DAT_02393960);
  local_68 = _DAT_02393950;
  uStack_60 = _UNK_02393958;
  FUN_00c8e2b0(_DAT_02393950,0x14);
  lVar4 = local_78;
  if ((((local_70 == '\0') && (local_78 != 0)) && (FUN_00d50b00(), local_70 != '\0')) &&
     (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = DAT_026e1838;
  if (DAT_026e1838 != 0) {
    FUN_00d50b00();
  }
  dVar7 = (double)FUN_00e7d6f0();
  uVar5 = (ulonglong)(dVar7 * DAT_023907c0);
  dVar7 = dVar7 * DAT_023907c0 - _DAT_023907c8;
  uVar8 = FUN_0071a120();
  if (((local_70 == '\0') && (local_78 != 0)) &&
     ((uVar8 = FUN_00d50b00(), local_70 != '\0' && (local_78 != 0)))) {
    uVar8 = FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar7 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
  local_88 = lVar1;
  local_80 = '\0';
  FUN_000175c0(uVar8,&local_88);
  lVar2 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_70 = '\0';
    local_78 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026e1840;
  if ((lVar2 != 0 & bVar3) != 0) {
    if (DAT_026e1840 != 0) {
      FUN_00d50b00();
    }
    local_1d0 = lVar1;
    local_1c8 = '\x01';
    FUN_00b5dfe0();
    local_b8 = local_98;
    local_b0 = 0;
    local_1c0 = DAT_026e1830;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        FUN_00d50b00();
        local_1c0 = DAT_026e1830;
      }
    }
    else {
      local_90 = '\0';
    }
    local_b0 = '\x01';
    DAT_026e1830 = local_1c0;
    if (local_1c0 != 0) {
      local_b0 = '\x01';
      FUN_00d50b00();
    }
    local_1b8 = '\x01';
    local_1b0 = 0;
    local_1a8 = '\0';
    local_1a0 = 0;
    local_198 = '\0';
    local_190 = lVar4;
    local_188 = '\0';
    FUN_003b8e30(&local_b8,&local_1d0,&local_1c0,&local_1b0,0,&local_190);
    lVar1 = local_88;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_78 = lVar1;
    local_70 = '\0';
    FUN_00d21140();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_026e1848;
  if (DAT_026e1848 != 0) {
    FUN_00d50b00();
  }
  local_180 = lVar1;
  local_178 = '\x01';
  FUN_00b5dfe0();
  local_a8 = local_98;
  local_a0 = 0;
  local_170 = DAT_026e1830;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
      local_170 = DAT_026e1830;
    }
  }
  else {
    local_90 = '\0';
  }
  local_a0 = '\x01';
  DAT_026e1830 = local_170;
  if (local_170 != 0) {
    local_a0 = '\x01';
    FUN_00d50b00();
  }
  local_168 = '\x01';
  local_160 = 0;
  local_158 = '\0';
  local_150 = 0;
  local_148 = '\0';
  local_140 = lVar4;
  local_138 = '\0';
  FUN_003b8e30(&local_a8,&local_180,&local_170,&local_160,0,&local_140);
  lVar1 = local_88;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_78 = lVar1;
  local_70 = '\0';
  FUN_00d21140();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




// ============================================================
// @0011b850 — 3053 bytes
// str: ""handleExportMix""
// str: ""handleExport""
// str: ""handleCancel""
// str: ""handleExportIndividuals""
// str: ""handleSelectFormat""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011b850(void)

{
  int iVar1;
  
  if (DAT_02804090 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e1988 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e18d8 = FUN_00015ff0();
          _DAT_026e18c0 = "MDExportController";
          _DAT_026e18c8 = 0x168;
          _DAT_026e18d0 = FUN_0012b3d0;
          _DAT_026e18e0 = 0;
          uRam00000000026e18e8 = 0;
          _DAT_026e18f0 = 0;
          uRam00000000026e18f8 = 0;
          _DAT_026e1900 = 0;
          uRam00000000026e1908 = 0;
          _DAT_026e1910 = 0;
          uRam00000000026e1918 = 0;
          _DAT_026e1920 = 0;
          uRam00000000026e1928 = 0;
          _DAT_026e1930 = 0;
          uRam00000000026e1938 = 0;
          _DAT_026e1940 = 0;
          uRam00000000026e1948 = 0;
          _DAT_026e1950 = 0;
          uRam00000000026e1958 = 0;
          _DAT_026e1960 = 0;
          uRam00000000026e1968 = 0;
          _DAT_026e1970 = 0;
          uRam00000000026e1978 = 0;
          _DAT_026e1980 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02804050 = "handleExportMix";
      _DAT_02804058 = &DAT_026e18c0;
      _DAT_02804060 = 0;
      _DAT_02804068 = &DAT_026e3218;
      _DAT_02804070 = FUN_001369b0;
      _DAT_02804078 = 0x5d1;
      _DAT_02804080 = 0;
      uRam0000000002804088 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028040d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e1988 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e18d8 = FUN_00015ff0();
          _DAT_026e18c0 = "MDExportController";
          _DAT_026e18c8 = 0x168;
          _DAT_026e18d0 = FUN_0012b3d0;
          _DAT_026e18e0 = 0;
          uRam00000000026e18e8 = 0;
          _DAT_026e18f0 = 0;
          uRam00000000026e18f8 = 0;
          _DAT_026e1900 = 0;
          uRam00000000026e1908 = 0;
          _DAT_026e1910 = 0;
          uRam00000000026e1918 = 0;
          _DAT_026e1920 = 0;
          uRam00000000026e1928 = 0;
          _DAT_026e1930 = 0;
          uRam00000000026e1938 = 0;
          _DAT_026e1940 = 0;
          uRam00000000026e1948 = 0;
          _DAT_026e1950 = 0;
          uRam00000000026e1958 = 0;
          _DAT_026e1960 = 0;
          uRam00000000026e1968 = 0;
          _DAT_026e1970 = 0;
          uRam00000000026e1978 = 0;
          _DAT_026e1980 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02804098 = "handleExport";
      _DAT_028040a0 = &DAT_026e18c0;
      _DAT_028040a8 = 0;
      _DAT_028040b0 = &DAT_026e3218;
      _DAT_028040b8 = FUN_001369b0;
      _DAT_028040c0 = 0x5c9;
      _DAT_028040c8 = 0;
      uRam00000000028040d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02804120 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e1988 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e18d8 = FUN_00015ff0();
          _DAT_026e18c0 = "MDExportController";
          _DAT_026e18c8 = 0x168;
          _DAT_026e18d0 = FUN_0012b3d0;
          _DAT_026e18e0 = 0;
          uRam00000000026e18e8 = 0;
          _DAT_026e18f0 = 0;
          uRam00000000026e18f8 = 0;
          _DAT_026e1900 = 0;
          uRam00000000026e1908 = 0;
          _DAT_026e1910 = 0;
          uRam00000000026e1918 = 0;
          _DAT_026e1920 = 0;
          uRam00000000026e1928 = 0;
          _DAT_026e1930 = 0;
          uRam00000000026e1938 = 0;
          _DAT_026e1940 = 0;
          uRam00000000026e1948 = 0;
          _DAT_026e1950 = 0;
          uRam00000000026e1958 = 0;
          _DAT_026e1960 = 0;
          uRam00000000026e1968 = 0;
          _DAT_026e1970 = 0;
          uRam00000000026e1978 = 0;
          _DAT_026e1980 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028040e0 = "handleCancel";
      _DAT_028040e8 = &DAT_026e18c0;
      _DAT_028040f0 = 0;
      _DAT_028040f8 = &DAT_026e3218;
      _DAT_02804100 = FUN_001369b0;
      _DAT_02804108 = 0x5d9;
      _DAT_02804110 = 0;
      uRam0000000002804118 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02804168 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e1988 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e18d8 = FUN_00015ff0();
          _DAT_026e18c0 = "MDExportController";
          _DAT_026e18c8 = 0x168;
          _DAT_026e18d0 = FUN_0012b3d0;
          _DAT_026e18e0 = 0;
          uRam00000000026e18e8 = 0;
          _DAT_026e18f0 = 0;
          uRam00000000026e18f8 = 0;
          _DAT_026e1900 = 0;
          uRam00000000026e1908 = 0;
          _DAT_026e1910 = 0;
          uRam00000000026e1918 = 0;
          _DAT_026e1920 = 0;
          uRam00000000026e1928 = 0;
          _DAT_026e1930 = 0;
          uRam00000000026e1938 = 0;
          _DAT_026e1940 = 0;
          uRam00000000026e1948 = 0;
          _DAT_026e1950 = 0;
          uRam00000000026e1958 = 0;
          _DAT_026e1960 = 0;
          uRam00000000026e1968 = 0;
          _DAT_026e1970 = 0;
          uRam00000000026e1978 = 0;
          _DAT_026e1980 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02804128 = "handleExportIndividuals";
      _DAT_02804130 = &DAT_026e18c0;
      _DAT_02804138 = 0;
      _DAT_02804140 = &DAT_026e3218;
      _DAT_02804148 = FUN_001369b0;
      _DAT_02804150 = 0x5e1;
      _DAT_02804158 = 0;
      uRam0000000002804160 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028041b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e1988 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e18d8 = FUN_00015ff0();
          _DAT_026e18c0 = "MDExportController";
          _DAT_026e18c8 = 0x168;
          _DAT_026e18d0 = FUN_0012b3d0;
          _DAT_026e18e0 = 0;
          uRam00000000026e18e8 = 0;
          _DAT_026e18f0 = 0;
          uRam00000000026e18f8 = 0;
          _DAT_026e1900 = 0;
          uRam00000000026e1908 = 0;
          _DAT_026e1910 = 0;
          uRam00000000026e1918 = 0;
          _DAT_026e1920 = 0;
          uRam00000000026e1928 = 0;
          _DAT_026e1930 = 0;
          uRam00000000026e1938 = 0;
          _DAT_026e1940 = 0;
          uRam00000000026e1948 = 0;
          _DAT_026e1950 = 0;
          uRam00000000026e1958 = 0;
          _DAT_026e1960 = 0;
          uRam00000000026e1968 = 0;
          _DAT_026e1970 = 0;
          uRam00000000026e1978 = 0;
          _DAT_026e1980 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02804170 = "handleSelectFormat";
      _DAT_02804178 = &DAT_026e18c0;
      _DAT_02804180 = 0;
      _DAT_02804188 = &DAT_026e3218;
      _DAT_02804190 = FUN_001369b0;
      _DAT_02804198 = 0x5e9;
      _DAT_028041a0 = 0;
      uRam00000000028041a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028041f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e1988 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e18d8 = FUN_00015ff0();
          _DAT_026e18c0 = "MDExportController";
          _DAT_026e18c8 = 0x168;
          _DAT_026e18d0 = FUN_0012b3d0;
          _DAT_026e18e0 = 0;
          uRam00000000026e18e8 = 0;
          _DAT_026e18f0 = 0;
          uRam00000000026e18f8 = 0;
          _DAT_026e1900 = 0;
          uRam00000000026e1908 = 0;
          _DAT_026e1910 = 0;
          uRam00000000026e1918 = 0;
          _DAT_026e1920 = 0;
          uRam00000000026e1928 = 0;
          _DAT_026e1930 = 0;
          uRam00000000026e1938 = 0;
          _DAT_026e1940 = 0;
          uRam00000000026e1948 = 0;
          _DAT_026e1950 = 0;
          uRam00000000026e1958 = 0;
          _DAT_026e1960 = 0;
          uRam00000000026e1968 = 0;
          _DAT_026e1970 = 0;
          uRam00000000026e1978 = 0;
          _DAT_026e1980 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028041b8 = "handleSelectSampleRate";
      _DAT_028041c0 = &DAT_026e18c0;
      _DAT_028041c8 = 0;
      _DAT_028041d0 = &DAT_026e3218;
      _DAT_028041d8 = FUN_001369b0;
      _DAT_028041e0 = 0x5f1;
      _DAT_028041e8 = 0;
      uRam00000000028041f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02804240 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e1988 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e18d8 = FUN_00015ff0();
          _DAT_026e18c0 = "MDExportController";
          _DAT_026e18c8 = 0x168;
          _DAT_026e18d0 = FUN_0012b3d0;
          _DAT_026e18e0 = 0;
          uRam00000000026e18e8 = 0;
          _DAT_026e18f0 = 0;
          uRam00000000026e18f8 = 0;
          _DAT_026e1900 = 0;
          uRam00000000026e1908 = 0;
          _DAT_026e1910 = 0;
          uRam00000000026e1918 = 0;
          _DAT_026e1920 = 0;
          uRam00000000026e1928 = 0;
          _DAT_026e1930 = 0;
          uRam00000000026e1938 = 0;
          _DAT_026e1940 = 0;
          uRam00000000026e1948 = 0;
          _DAT_026e1950 = 0;
          uRam00000000026e1958 = 0;
          _DAT_026e1960 = 0;
          uRam00000000026e1968 = 0;
          _DAT_026e1970 = 0;
          uRam00000000026e1978 = 0;
          _DAT_026e1980 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02804200 = "handleSelectSampleFormat";
      _DAT_02804208 = &DAT_026e18c0;
      _DAT_02804210 = 0;
      _DAT_02804218 = &DAT_026e3218;
      _DAT_02804220 = FUN_001369b0;
      _DAT_02804228 = 0x5f9;
      _DAT_02804230 = 0;
      uRam0000000002804238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02804288 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e1988 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e18d8 = FUN_00015ff0();
          _DAT_026e18c0 = "MDExportController";
          _DAT_026e18c8 = 0x168;
          _DAT_026e18d0 = FUN_0012b3d0;
          _DAT_026e18e0 = 0;
          uRam00000000026e18e8 = 0;
          _DAT_026e18f0 = 0;
          uRam00000000026e18f8 = 0;
          _DAT_026e1900 = 0;
          uRam00000000026e1908 = 0;
          _DAT_026e1910 = 0;
          uRam00000000026e1918 = 0;
          _DAT_026e1920 = 0;
          uRam00000000026e1928 = 0;
          _DAT_026e1930 = 0;
          uRam00000000026e1938 = 0;
          _DAT_026e1940 = 0;
          uRam00000000026e1948 = 0;
          _DAT_026e1950 = 0;
          uRam00000000026e1958 = 0;
          _DAT_026e1960 = 0;
          uRam00000000026e1968 = 0;
          _DAT_026e1970 = 0;
          uRam00000000026e1978 = 0;
          _DAT_026e1980 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02804248 = "handleSelectRegion";
      _DAT_02804250 = &DAT_026e18c0;
      _DAT_02804258 = 0;
      _DAT_02804260 = &DAT_026e3218;
      _DAT_02804268 = FUN_001369b0;
      _DAT_02804270 = 0x601;
      _DAT_02804278 = 0;
      uRam0000000002804280 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028042d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e1988 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e18d8 = FUN_00015ff0();
          _DAT_026e18c0 = "MDExportController";
          _DAT_026e18c8 = 0x168;
          _DAT_026e18d0 = FUN_0012b3d0;
          _DAT_026e18e0 = 0;
          uRam00000000026e18e8 = 0;
          _DAT_026e18f0 = 0;
          uRam00000000026e18f8 = 0;
          _DAT_026e1900 = 0;
          uRam00000000026e1908 = 0;
          _DAT_026e1910 = 0;
          uRam00000000026e1918 = 0;
          _DAT_026e1920 = 0;
          uRam00000000026e1928 = 0;
          _DAT_026e1930 = 0;
          uRam00000000026e1938 = 0;
          _DAT_026e1940 = 0;
          uRam00000000026e1948 = 0;
          _DAT_026e1950 = 0;
          uRam00000000026e1958 = 0;
          _DAT_026e1960 = 0;
          uRam00000000026e1968 = 0;
          _DAT_026e1970 = 0;
          uRam00000000026e1978 = 0;
          _DAT_026e1980 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02804290 = "handleSelectReferenceTrack";
      _DAT_02804298 = &DAT_026e18c0;
      _DAT_028042a0 = 0;
      _DAT_028042a8 = &DAT_026e3218;
      _DAT_028042b0 = FUN_001369b0;
      _DAT_028042b8 = 0x609;
      _DAT_028042c0 = 0;
      uRam00000000028042c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @0011a370 — 3044 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011a370(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_RDI;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa;
  longlong local_210;
  undefined1 local_208;
  longlong local_200;
  undefined1 local_1f8;
  longlong local_1f0;
  undefined1 local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  longlong local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  longlong local_1a0;
  undefined1 local_198;
  longlong local_190;
  undefined1 local_188;
  longlong local_180;
  undefined1 local_178;
  longlong local_170;
  undefined1 local_168;
  longlong local_160;
  undefined1 local_158;
  longlong local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128;
  longlong local_120;
  undefined1 local_118;
  longlong local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  longlong local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  ulonglong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  ulonglong local_50;
  ulonglong local_48;
  longlong *local_40;
  char local_38;
  
  uVar7 = FUN_01d70da0();
  if ((int)uVar7 < 0) {
    return;
  }
  lVar9 = *(longlong *)(unaff_RDI + 0x108);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_50 = (ulonglong)uVar7;
  local_48 = lVar9;
  uVar4 = FUN_003b9040();
  lVar9 = DAT_026e1868;
  if (DAT_026e1868 != 0) {
    FUN_00d50b00();
  }
  local_210 = lVar9;
  local_208 = 1;
  lVar1 = *(longlong *)(unaff_RDI + 0xa0);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = 1;
  lVar2 = *(longlong *)(unaff_RDI + 0x80);
  local_200 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_1e8 = 1;
  local_1f0 = lVar2;
  FUN_0011f440(&local_210,uVar4,&local_200,&local_1f0);
  uVar10 = local_48;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (uVar10 != 0) {
    FUN_00d50b20();
  }
  lVar9 = *(longlong *)(unaff_RDI + 0x118);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = 1;
  local_1e0 = lVar9;
  uVar4 = FUN_003b9060();
  lVar1 = DAT_026e1870;
  if (DAT_026e1870 != 0) {
    FUN_00d50b00();
  }
  local_1d0 = lVar1;
  local_1c8 = 1;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  FUN_0011f440(&local_1d0,uVar4,&local_1c0,&local_1b0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  lVar9 = *(longlong *)(unaff_RDI + 0x110);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_198 = 1;
  local_1a0 = lVar9;
  local_48 = lVar9;
  uVar4 = FUN_003b9050();
  lVar9 = DAT_026e1878;
  if (DAT_026e1878 != 0) {
    FUN_00d50b00();
  }
  local_190 = lVar9;
  local_188 = 1;
  lVar1 = *(longlong *)(unaff_RDI + 0xa8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_178 = 1;
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  local_180 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_168 = 1;
  local_170 = lVar2;
  FUN_0011f440(&local_190,uVar4,&local_180,&local_170);
  uVar10 = local_48;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (uVar10 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x148) != 0) {
    FUN_01d70da0();
    iVar8 = FUN_004f0440();
    if (iVar8 == 0) {
      uVar11 = FUN_00d6f370();
      local_90 = DAT_026e1880;
      if (DAT_026e1880 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_88 = '\x01';
      FUN_00d70ea0(uVar11,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = **(longlong **)(unaff_RDI + 0x148);
LAB_0011a7c2:
      (**(code **)(lVar9 + 0x918))();
      lVar9 = **(longlong **)(unaff_RDI + 0x148);
    }
    else {
      cVar5 = FUN_003b9150();
      plVar3 = *(longlong **)(unaff_RDI + 0x148);
      if (cVar5 == '\0') {
        lVar9 = *plVar3;
        goto LAB_0011a7c2;
      }
      uVar11 = FUN_00d6f370();
      local_80 = DAT_026e1880;
      if (DAT_026e1880 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_78 = '\x01';
      FUN_00d70f90(uVar11,0);
      (**(code **)(*plVar3 + 0x918))();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = **(longlong **)(unaff_RDI + 0x148);
    }
    (**(code **)(lVar9 + 0x998))();
  }
  uVar10 = DAT_026e1800;
  if (DAT_026e1800 != 0) {
    FUN_00d50b00();
  }
  local_48 = uVar10;
  FUN_00e7d6f0();
  uVar11 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  local_a0 = uVar10;
  local_98 = '\0';
  FUN_000175c0(uVar11,&local_a0);
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
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar3;
    uVar7 = FUN_00c70bc0();
    uVar10 = (ulonglong)uVar7;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (longlong *)0x0 & (byte)uVar10) == 0) {
    lVar9 = *(longlong *)(unaff_RDI + 0x120);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_026e1888;
    local_158 = 1;
    local_160 = lVar9;
    if (DAT_026e1888 != 0) {
      FUN_00d50b00();
    }
    local_150 = lVar1;
    local_148 = 1;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    FUN_0011f440(&local_150,0,&local_140,&local_130);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0011aae5;
  }
  iVar8 = FUN_01d6fde0();
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      FUN_004f0440();
      bVar6 = FUN_003b9160();
      FUN_01d70db0(extraout_XMM0_Qa,bVar6 ^ 1);
      lVar9 = lVar9 + 1;
      iVar8 = FUN_01d6fde0();
    } while (lVar9 < iVar8);
  }
  iVar8 = FUN_01d70da0();
  if (-1 < iVar8) {
    FUN_01d70da0();
    cVar5 = FUN_01d70e30();
    if (cVar5 == '\0') {
      iVar8 = FUN_01d6fde0();
      while ((iVar8 != 0 && (cVar5 = FUN_01d70e30(), cVar5 == '\0'))) {
        iVar8 = FUN_01d6fde0();
      }
      FUN_01d6ed40();
    }
  }
  cVar5 = FUN_003b9060();
  if ((cVar5 == '\0') || (iVar8 = FUN_01d70da0(), iVar8 < 0)) {
    FUN_0011b6f0();
    (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x998))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x998))();
    lVar9 = *(longlong *)(unaff_RDI + 0x120);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_026e1888;
    local_d8 = 1;
    local_e0 = lVar9;
    if (DAT_026e1888 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar1;
    local_c8 = 1;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    FUN_0011f440(&local_d0,0,&local_c0,&local_b0);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0011ad5e;
  }
  lVar9 = *(longlong *)(unaff_RDI + 0x120);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_118 = 1;
  local_120 = lVar9;
  FUN_01d70da0();
  uVar4 = FUN_004ef6f0();
  lVar1 = DAT_026e1888;
  if (DAT_026e1888 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar1;
  local_108 = 1;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  FUN_0011f440(&local_110,uVar4,&local_100,&local_f0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  cVar5 = FUN_003b9080();
  if (cVar5 == '\0') {
LAB_0011aae5:
    FUN_0011b6f0();
    uVar11 = 0;
  }
  else {
    FUN_01d70da0();
    cVar5 = FUN_004ef710();
    uVar11 = 1;
    if (cVar5 != '\0') goto LAB_0011aae5;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x998))(uVar11);
  (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x998))();
LAB_0011ad5e:
  cVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x9a0))();
  if (cVar5 == '\0') {
    FUN_01e40eb0();
    plVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x478))();
    }
  }
  else {
    FUN_01e40eb0();
    plVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_01e40eb0();
      plVar3 = local_40;
      local_58 = 0;
      local_60 = *(longlong *)(unaff_RDI + 0xd0);
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      (**(code **)(*plVar3 + 0x450))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x9a0))();
  if (cVar5 == '\0') {
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x478))();
    }
  }
  else {
    FUN_01e40eb0();
    plVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (longlong *)0x0) {
      FUN_01e40eb0();
      plVar3 = local_40;
      local_68 = 0;
      local_70 = *(longlong *)(unaff_RDI + 0xd8);
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      (**(code **)(*plVar3 + 0x450))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @007954a0 — 1963 bytes
// str: ""MDExportController""
// str: ""MDExportAudioDelegate""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007954a0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  unaff_RDI[0xe] = &DAT_025127c0;
  if (DAT_026e26c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e26a8 = "MDExportAudioDelegate";
      DAT_026e26b8 = 0;
      _DAT_026e26b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_024cf690;
  unaff_RDI[0xe] = &DAT_024cfce8;
  FUN_00795fd0();
  FUN_00796250();
  FUN_007964d0();
  unaff_RDI[0x12] = 0;
  if (DAT_026e1988 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e18d8 = FUN_00015ff0();
      _DAT_026e18c0 = "MDExportController";
      _DAT_026e18c8 = 0x168;
      _DAT_026e18d0 = FUN_0012b3d0;
      _DAT_026e18e0 = 0;
      uRam00000000026e18e8 = 0;
      _DAT_026e18f0 = 0;
      uRam00000000026e18f8 = 0;
      _DAT_026e1900 = 0;
      uRam00000000026e1908 = 0;
      _DAT_026e1910 = 0;
      uRam00000000026e1918 = 0;
      _DAT_026e1920 = 0;
      uRam00000000026e1928 = 0;
      _DAT_026e1930 = 0;
      uRam00000000026e1938 = 0;
      _DAT_026e1940 = 0;
      uRam00000000026e1948 = 0;
      _DAT_026e1950 = 0;
      uRam00000000026e1958 = 0;
      _DAT_026e1960 = 0;
      uRam00000000026e1968 = 0;
      _DAT_026e1970 = 0;
      _uRam00000000026e1978 = 0;
      _DAT_026e1980 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e197b == '\0') {
    FUN_00796750();
    FUN_00e87980();
  }
  unaff_RDI[0x13] = 0;
  if (DAT_026e1988 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e18d8 = FUN_00015ff0();
      _DAT_026e18c0 = "MDExportController";
      _DAT_026e18c8 = 0x168;
      _DAT_026e18d0 = FUN_0012b3d0;
      _DAT_026e18e0 = 0;
      uRam00000000026e18e8 = 0;
      _DAT_026e18f0 = 0;
      uRam00000000026e18f8 = 0;
      _DAT_026e1900 = 0;
      uRam00000000026e1908 = 0;
      _DAT_026e1910 = 0;
      uRam00000000026e1918 = 0;
      _DAT_026e1920 = 0;
      uRam00000000026e1928 = 0;
      _DAT_026e1930 = 0;
      uRam00000000026e1938 = 0;
      _DAT_026e1940 = 0;
      uRam00000000026e1948 = 0;
      _DAT_026e1950 = 0;
      uRam00000000026e1958 = 0;
      _DAT_026e1960 = 0;
      uRam00000000026e1968 = 0;
      _DAT_026e1970 = 0;
      _uRam00000000026e1978 = 0;
      _DAT_026e1980 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e197b == '\0') {
    FUN_007968c0();
    FUN_00e87980();
  }
  FUN_00796a30();
  FUN_00796cb0();
  *(undefined1 *)(unaff_RDI + 0x16) = 0;
  if (DAT_026e1988 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e18d8 = FUN_00015ff0();
      _DAT_026e18c0 = "MDExportController";
      _DAT_026e18c8 = 0x168;
      _DAT_026e18d0 = FUN_0012b3d0;
      _DAT_026e18e0 = 0;
      uRam00000000026e18e8 = 0;
      _DAT_026e18f0 = 0;
      uRam00000000026e18f8 = 0;
      _DAT_026e1900 = 0;
      uRam00000000026e1908 = 0;
      _DAT_026e1910 = 0;
      uRam00000000026e1918 = 0;
      _DAT_026e1920 = 0;
      uRam00000000026e1928 = 0;
      _DAT_026e1930 = 0;
      uRam00000000026e1938 = 0;
      _DAT_026e1940 = 0;
      uRam00000000026e1948 = 0;
      _DAT_026e1950 = 0;
      uRam00000000026e1958 = 0;
      _DAT_026e1960 = 0;
      uRam00000000026e1968 = 0;
      _DAT_026e1970 = 0;
      _uRam00000000026e1978 = 0;
      _DAT_026e1980 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e197b == '\0') {
    FUN_00796f30();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xb1) = 0;
  if (DAT_026e1988 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e18d8 = FUN_00015ff0();
      _DAT_026e18c0 = "MDExportController";
      _DAT_026e18c8 = 0x168;
      _DAT_026e18d0 = FUN_0012b3d0;
      _DAT_026e18e0 = 0;
      uRam00000000026e18e8 = 0;
      _DAT_026e18f0 = 0;
      uRam00000000026e18f8 = 0;
      _DAT_026e1900 = 0;
      uRam00000000026e1908 = 0;
      _DAT_026e1910 = 0;
      uRam00000000026e1918 = 0;
      _DAT_026e1920 = 0;
      uRam00000000026e1928 = 0;
      _DAT_026e1930 = 0;
      uRam00000000026e1938 = 0;
      _DAT_026e1940 = 0;
      uRam00000000026e1948 = 0;
      _DAT_026e1950 = 0;
      uRam00000000026e1958 = 0;
      _DAT_026e1960 = 0;
      uRam00000000026e1968 = 0;
      _DAT_026e1970 = 0;
      _uRam00000000026e1978 = 0;
      _DAT_026e1980 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e197b == '\0') {
    FUN_007970a0();
    FUN_00e87980();
  }
  FUN_00797210();
  FUN_00797500();
  FUN_007977f0();
  FUN_00797ae0();
  FUN_00797dd0();
  FUN_007980c0();
  FUN_007983b0();
  FUN_007986a0();
  FUN_00798990();
  FUN_00798c80();
  FUN_00798f70();
  FUN_00799260();
  FUN_00799550();
  FUN_00799840();
  FUN_00799b30();
  FUN_00799e20();
  FUN_0079a110();
  FUN_0079a400();
  FUN_0079a6f0();
  FUN_0079a9e0();
  FUN_0079acd0();
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  if (DAT_026e1988 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e18d8 = FUN_00015ff0();
      _DAT_026e18c0 = "MDExportController";
      _DAT_026e18c8 = 0x168;
      _DAT_026e18d0 = FUN_0012b3d0;
      _DAT_026e18e0 = 0;
      uRam00000000026e18e8 = 0;
      _DAT_026e18f0 = 0;
      uRam00000000026e18f8 = 0;
      _DAT_026e1900 = 0;
      uRam00000000026e1908 = 0;
      _DAT_026e1910 = 0;
      uRam00000000026e1918 = 0;
      _DAT_026e1920 = 0;
      uRam00000000026e1928 = 0;
      _DAT_026e1930 = 0;
      uRam00000000026e1938 = 0;
      _DAT_026e1940 = 0;
      uRam00000000026e1948 = 0;
      _DAT_026e1950 = 0;
      uRam00000000026e1958 = 0;
      _DAT_026e1960 = 0;
      uRam00000000026e1968 = 0;
      _DAT_026e1970 = 0;
      _uRam00000000026e1978 = 0;
      _DAT_026e1980 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e197b == '\0') {
    FUN_0079afc0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00119af0 — 1444 bytes
// str: ""%0.3f kHz""
// ============================================================

void FUN_00119af0(void)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RDI;
  undefined4 uVar7;
  undefined8 *local_c0;
  undefined4 local_b8;
  float local_b4;
  ulonglong local_b0;
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
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  uVar3 = FUN_01d70da0();
  if ((int)uVar3 < 0) {
    iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x150) + 0xc);
    if (0 < iVar4) {
      uVar3 = 0;
    }
  }
  else {
    iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x150) + 0xc);
  }
  uVar2 = iVar4 - 1;
  if ((int)uVar3 < iVar4) {
    uVar2 = uVar3;
  }
  uVar3 = FUN_01d70da0();
  if (uVar2 != uVar3) {
    FUN_01d6ed40();
  }
  FUN_01d6f8d0();
  FUN_01d6f8d0();
  if ((int)uVar2 < 0) {
    return;
  }
  local_b0 = (ulonglong)uVar2;
  iVar4 = FUN_003b9070();
  if (iVar4 == 0) goto LAB_00119faa;
  FUN_003b9120();
  lVar5 = *(longlong *)(unaff_RDI + 0x80);
  lVar6 = lVar5;
  if (lVar5 != local_58) {
    if (local_50 == '\0') {
      if (local_58 == 0) {
        lVar6 = 0;
        goto LAB_00119be1;
      }
      FUN_00d50b00();
      lVar5 = *(longlong *)(unaff_RDI + 0x80);
      *(longlong *)(unaff_RDI + 0x80) = local_58;
      lVar6 = local_58;
    }
    else {
      local_50 = '\0';
      lVar6 = local_58;
LAB_00119be1:
      *(longlong *)(unaff_RDI + 0x80) = lVar6;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar6 = local_58;
    }
  }
  if ((local_50 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  FUN_003b90f0();
  lVar5 = *(longlong *)(unaff_RDI + 0x88);
  lVar6 = lVar5;
  if (lVar5 != local_58) {
    if (local_50 == '\0') {
      if (local_58 == 0) {
        lVar6 = 0;
        goto LAB_00119c7a;
      }
      FUN_00d50b00();
      lVar5 = *(longlong *)(unaff_RDI + 0x88);
      *(longlong *)(unaff_RDI + 0x88) = local_58;
      lVar6 = local_58;
    }
    else {
      local_50 = '\0';
      lVar6 = local_58;
LAB_00119c7a:
      *(longlong *)(unaff_RDI + 0x88) = lVar6;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar6 = local_58;
    }
  }
  if ((local_50 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x80) != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *(longlong *)(unaff_RDI + 0x80);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar4 = -local_40._4_4_;
        }
        else {
          iVar4 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar4);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar4 = 0;
        }
        local_40 = CONCAT44(iVar4,(int)local_40);
      }
      lVar5 = (longlong)(int)local_40;
      iVar4 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar4);
      if (*(int *)(local_48 + 0xc) <= iVar4) break;
      local_58 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar5 * 8);
      local_b4 = (float)FUN_00d459e0();
      local_b4 = local_b4 / DAT_02393944;
      local_b8 = 1;
      local_c0 = &DAT_024d0b28;
      FUN_00d8cb40(local_b4,&local_c0);
      local_a8 = local_68;
      local_a0 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_a0 = '\x01';
      FUN_01d6f990();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00136b80();
  }
  if (*(longlong *)(unaff_RDI + 0x88) != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *(longlong *)(unaff_RDI + 0x88);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar4 = -local_40._4_4_;
        }
        else {
          iVar4 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar4);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar4 = 0;
        }
        local_40 = CONCAT44(iVar4,(int)local_40);
      }
      lVar5 = (longlong)(int)local_40;
      iVar4 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar4);
      if (*(int *)(local_48 + 0xc) <= iVar4) break;
      local_58 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar5 * 8);
      FUN_00d45870();
      FUN_00ae7020();
      local_98 = local_68;
      local_90 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_90 = '\x01';
      FUN_01d6f990();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00136b80();
  }
LAB_00119faa:
  plVar1 = *(longlong **)(unaff_RDI + 0xd0);
  uVar7 = FUN_003b9090();
  local_78 = local_68;
  local_70 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_70 = '\x01';
  FUN_00e427c0(uVar7,&local_78);
  local_88 = local_58;
  local_80 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_80 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0070b860 — 1286 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0070b972) */
/* WARNING: Removing unreachable block (ram,0x0070b97e) */
/* WARNING: Removing unreachable block (ram,0x0070bb89) */
/* WARNING: Removing unreachable block (ram,0x0070bb95) */
/* WARNING: Removing unreachable block (ram,0x0070bc40) */
/* WARNING: Removing unreachable block (ram,0x0070bc4c) */

void FUN_0070b860(void)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong *plVar6;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  undefined8 local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  char local_41;
  longlong *local_40;
  char local_38;
  
  FUN_007f2390();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  local_80 = 0;
  local_41 = '\0';
  FUN_01e561b0();
  local_78 = local_68;
  local_70 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_70 = '\x01';
  plVar5 = &local_78;
  FUN_007f3210(plVar5,&local_80,&local_41);
  plVar6 = local_40;
  pVar4 = (pthread_key_t)plVar5;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    FUN_007f32f0();
    goto LAB_0070bd3f;
  }
  if (local_41 != '\0') {
    FUN_01f27fe0();
    (**(code **)(*local_40 + 0x560))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((longlong *)*unaff_RSI != (longlong *)0x0) {
    (**(code **)(&UNK_00001668 + *(longlong *)*unaff_RSI))();
    plVar5 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_016cbba0();
      plVar5 = local_40;
      plVar2 = plVar6;
      if (plVar6 == local_40) {
joined_r0x0070bb4d:
        plVar5 = plVar2;
        if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar2 = plVar5;
          plVar6 = local_40;
          goto joined_r0x0070bb4d;
        }
        FUN_00d50b20();
        local_38 = '\0';
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016ea7c0(local_80);
      (**(code **)(&UNK_00001668 + *(longlong *)*unaff_RSI))();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d960();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      lVar1 = DAT_027ebe30;
      if (DAT_027ebe30 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\0';
      local_a0 = 0;
      local_98 = '\0';
      local_b0 = plVar5;
      FUN_00d40470(&local_a0,&local_b0,3,3);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar6 = plVar5;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0070bd3f;
    }
  }
  local_90 = plVar6;
  local_88 = '\0';
  FUN_006f3f00();
  FUN_00757c60();
  local_58 = local_40;
  local_50 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_50 = '\x01';
  FUN_01c77060(local_80,1);
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0070bd3f:
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @0070b120 — 894 bytes
// str: ""MDExportController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070b120(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar3 = DAT_02727af8;
  if (DAT_0280c948 == (longlong *)0x0) {
    if (DAT_02727af8 != 0) {
      FUN_00d50b00();
    }
    local_78 = 0;
    local_70 = '\0';
    local_68 = 0;
    local_60 = '\0';
    pplVar7 = &local_38;
    FUN_01e4fcf0(&local_68,&local_78);
    plVar1 = local_38;
    if ((DAT_026e1988 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026e18d8 = FUN_00015ff0();
      _DAT_026e18c0 = "MDExportController";
      _DAT_026e18c8 = 0x168;
      _DAT_026e18d0 = FUN_0012b3d0;
      _DAT_026e18e0 = 0;
      uRam00000000026e18e8 = 0;
      _DAT_026e18f0 = 0;
      uRam00000000026e18f8 = 0;
      _DAT_026e1900 = 0;
      uRam00000000026e1908 = 0;
      _DAT_026e1910 = 0;
      uRam00000000026e1918 = 0;
      _DAT_026e1920 = 0;
      uRam00000000026e1928 = 0;
      _DAT_026e1930 = 0;
      uRam00000000026e1938 = 0;
      _DAT_026e1940 = 0;
      uRam00000000026e1948 = 0;
      _DAT_026e1950 = 0;
      uRam00000000026e1958 = 0;
      _DAT_026e1960 = 0;
      uRam00000000026e1968 = 0;
      _DAT_026e1970 = 0;
      uRam00000000026e1978 = 0;
      _DAT_026e1980 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_0070b1c2:
      pplVar7 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_0070b1c2;
    }
    plVar1 = *pplVar7;
    plVar6 = DAT_0280c948;
    if (DAT_0280c948 != plVar1) {
      if (*(char *)(pplVar7 + 1) == '\0') {
        if (plVar1 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar6 = *pplVar7;
        }
      }
      else {
        *(undefined1 *)(pplVar7 + 1) = 0;
        plVar6 = plVar1;
      }
      bVar2 = DAT_0280c948 != (longlong *)0x0;
      DAT_0280c948 = plVar6;
      if (bVar2) {
        FUN_00d50b20();
        plVar6 = *pplVar7;
      }
    }
    if ((plVar6 != (longlong *)0x0) && (DAT_0280c950 == '\0')) {
      DAT_0280c950 = '\x01';
      FUN_00e8cb90();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (DAT_0280c948 == (longlong *)0x0) {
      return;
    }
  }
  FUN_006f3f00();
  plVar1 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) goto LAB_0070b2f0;
    FUN_00d50b00();
  }
  else if (local_38 == (longlong *)0x0) {
LAB_0070b2f0:
    local_30 = '\0';
    local_38 = (longlong *)0x0;
    bVar2 = true;
    goto LAB_0070b367;
  }
  FUN_00756eb0();
  plVar6 = local_38;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0070b322;
    }
  }
  else if (local_38 != (longlong *)0x0) {
LAB_0070b322:
    uVar8 = (**(code **)(*plVar6 + 0x408))();
    uVar9 = (**(code **)(*plVar6 + 0x418))();
    FUN_00116890(uVar8,uVar9);
    FUN_00d50b20();
  }
  bVar2 = false;
LAB_0070b367:
  local_58 = plVar1;
  local_50 = '\0';
  FUN_001168b0();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = DAT_0280c948;
  local_40 = 0;
  if (DAT_0280c948 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_48 = plVar1;
  local_40 = '\x01';
  FUN_01d83990();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0079afc0 — 532 bytes
// str: ""MDExportController""
// str: ""MDPlaybackSetup""
// str: ""_lastSetup""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0079afc0(void)

{
  int iVar1;
  
  if (DAT_0271cca0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271cc90 = 0x100000000;
      _DAT_0271cc98 = 2;
      DAT_0271cc9c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271ccd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271cca8 = "MDPlaybackSetup";
      _DAT_0271ccb0 = 3;
      DAT_0271ccb4 = DAT_0271cc9c;
      _DAT_0271ccb8 = &DAT_0271cc90;
      _DAT_0271ccc0 = &DAT_0271cc70;
      _DAT_0271ccc8 = 0;
      uRam000000000271ccd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0272a068 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e1988 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e18d8 = FUN_00015ff0();
          _DAT_026e18c0 = "MDExportController";
          _DAT_026e18c8 = 0x168;
          _DAT_026e18d0 = FUN_0012b3d0;
          _DAT_026e18e0 = 0;
          uRam00000000026e18e8 = 0;
          _DAT_026e18f0 = 0;
          uRam00000000026e18f8 = 0;
          _DAT_026e1900 = 0;
          uRam00000000026e1908 = 0;
          _DAT_026e1910 = 0;
          uRam00000000026e1918 = 0;
          _DAT_026e1920 = 0;
          uRam00000000026e1928 = 0;
          _DAT_026e1930 = 0;
          uRam00000000026e1938 = 0;
          _DAT_026e1940 = 0;
          uRam00000000026e1948 = 0;
          _DAT_026e1950 = 0;
          uRam00000000026e1958 = 0;
          _DAT_026e1960 = 0;
          uRam00000000026e1968 = 0;
          _DAT_026e1970 = 0;
          uRam00000000026e1978 = 0;
          _DAT_026e1980 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0272a028 = "_lastSetup";
      _DAT_0272a030 = &DAT_026e18c0;
      _DAT_0272a038 = 0;
      _DAT_0272a040 = 0x6500;
      _DAT_0272a048 = "MDPlaybackSetup";
      _DAT_0272a050 = &DAT_0271cca8;
      _DAT_0272a058 = 0;
      uRam000000000272a060 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0272a028;
}



