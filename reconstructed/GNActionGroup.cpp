// Reconstructed implementation of GNActionGroup
// From MikeCore binary — reverse-engineered pseudocode

#include "GNActionGroup.h"

// ============================================================
// @01f89e00 — 3331 bytes
// str: ""GNActionGroup""
// str: ""GNActionRegistration""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01f89e00(undefined8 param_1,char param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong unaff_RDI;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  int local_f4;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  undefined8 *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01eda0f0();
  local_88 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) {
      local_88 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_88 = local_68;
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  uVar12 = (*DAT_02572370)();
  if ((DAT_026e73b0 == '\0') &&
     (iVar7 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_01, iVar7 != 0)) {
    _DAT_02801338 = FUN_00d4fe50();
    _DAT_02801320 = "GNActionGroup";
    _DAT_02801328 = 0x38;
    _DAT_02801330 = FUN_001a4a20;
    _DAT_02801340 = 0;
    uRam0000000002801348 = 0;
    _DAT_02801350 = 0;
    uRam0000000002801358 = 0;
    _DAT_02801360 = 0;
    uRam0000000002801368 = 0;
    _DAT_02801370 = 0;
    uRam0000000002801378 = 0;
    _DAT_02801380 = 0;
    uRam0000000002801388 = 0;
    _DAT_02801390 = 0;
    uRam0000000002801398 = 0;
    _DAT_028013a0 = 0;
    uRam00000000028013a8 = 0;
    _DAT_028013b0 = 0;
    uRam00000000028013b8 = 0;
    _DAT_028013c0 = 0;
    uRam00000000028013c8 = 0;
    _DAT_028013d0 = 0;
    uRam00000000028013d8 = 0;
    _DAT_028013e0 = 0;
    uVar12 = ___cxa_guard_release();
  }
  if (local_88 == (longlong *)0x0) {
LAB_01f89e9e:
    if (DAT_02802688 != 0) goto LAB_01f89eab;
LAB_01f89f12:
    if ((DAT_026e7b78 == '\0') &&
       (iVar7 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_02, iVar7 != 0)) {
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
      uVar12 = ___cxa_guard_release();
    }
    if (local_88 == (longlong *)0x0) {
LAB_01f89f4c:
      if (DAT_02802688 == 0) goto LAB_01f8a728;
LAB_01f89f5d:
      local_68 = local_88;
      local_60 = '\0';
      FUN_00d21140();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar12 = FUN_01caf440();
      local_80 = local_68;
      if (local_68 == (longlong *)0x0) goto LAB_01f8a08a;
      bVar1 = true;
      if (((local_60 == '\0') && (uVar12 = FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      goto LAB_01f8a093;
    }
    (**(code **)(*local_88 + 0x360))();
    cVar6 = FUN_00e85ea0();
    uVar12 = extraout_XMM0_Da_00;
    if (cVar6 == '\0') goto LAB_01f89f4c;
    if (local_88 != (longlong *)0x0) goto LAB_01f89f5d;
LAB_01f8a728:
    bVar1 = false;
    local_80 = (longlong *)0x0;
    local_f4 = *(int *)((longlong)puVar9 + 0xc);
    lVar11 = DAT_027f1fc8;
  }
  else {
    (**(code **)(*local_88 + 0x360))();
    cVar6 = FUN_00e85ea0();
    uVar12 = extraout_XMM0_Da;
    if (cVar6 == '\0') goto LAB_01f89e9e;
    if (local_88 == (longlong *)0x0) goto LAB_01f89f12;
LAB_01f89eab:
    uVar12 = FUN_01caf170();
    plVar4 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar12 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = plVar4;
    local_60 = '\0';
    FUN_00d214d0(uVar12,*(undefined4 *)((longlong)puVar9 + 0xc));
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_01caf0e0();
    local_80 = local_68;
    if (local_68 == (longlong *)0x0) {
LAB_01f8a08a:
      bVar1 = false;
      local_80 = local_68;
    }
    else {
      bVar1 = true;
      if (((local_60 == '\0') && (uVar12 = FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
LAB_01f8a093:
    local_f4 = *(int *)((longlong)puVar9 + 0xc);
    lVar11 = DAT_027f1fc8;
  }
  DAT_027f1fc8 = lVar11;
  if ((local_f4 == 0) || (param_2 == '\0')) goto LAB_01f8a97e;
  if (lVar11 != 0) {
    uVar12 = FUN_00d50b00();
  }
  lVar3 = DAT_02801070;
  if (DAT_02801070 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_158 = lVar3;
  local_150 = '\x01';
  FUN_01f6ca30(uVar12,&local_158);
  plVar4 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  plVar10 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar10 + 0x18))();
  FUN_01da4890();
  uVar12 = FUN_01da7e30();
  plVar5 = local_40;
  plVar2 = DAT_02801078;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      uVar12 = FUN_00d50b00();
      plVar2 = DAT_02801078;
    }
  }
  else {
    local_38 = '\0';
  }
  DAT_02801078 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    uVar12 = FUN_00d50b00();
  }
  local_60 = '\0';
  local_68 = plVar2;
  FUN_00ca0840(uVar12,&local_68);
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = DAT_02801080;
  local_140 = '\0';
  local_148 = local_80;
  if (DAT_02801080 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_68 = plVar2;
  local_60 = '\0';
  FUN_00ca0840();
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_130 = '\0';
  local_138 = plVar10;
  iVar7 = (**(code **)(*plVar4 + 0x5d8))();
  if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar7 == 2) {
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    local_58 = puVar9;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar7 = -local_50._4_4_;
        }
        else {
          iVar7 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar7);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar7 = 0;
        }
        local_50 = CONCAT44(iVar7,(int)local_50);
      }
      lVar11 = (longlong)(int)local_50;
      iVar7 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar7);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar7) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar11 * 8);
      FUN_01da4890();
      plVar2 = local_40;
      FUN_01caf470();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      (**(code **)(*plVar2 + 0x460))();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_002a0990();
    (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x920))();
    FUN_01da4890();
    FUN_01f27fe0();
    FUN_01f28c30();
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01da8a40();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01f8a957:
    if (plVar10 != (longlong *)0x0) goto LAB_01f8a961;
  }
  else {
    if (iVar7 == 1) {
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      local_58 = puVar9;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar7 = -local_50._4_4_;
          }
          else {
            iVar7 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar7);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar7 = 0;
          }
          local_50 = CONCAT44(iVar7,(int)local_50);
        }
        lVar11 = (longlong)(int)local_50;
        iVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar7);
        if (*(int *)((longlong)local_58 + 0xc) <= iVar7) break;
        local_68 = *(longlong **)(local_58[2] + 8 + lVar11 * 8);
        if (local_68 != (longlong *)0x0) {
          FUN_01caf470();
          plVar2 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01f8a470;
            }
          }
          else if (local_40 != (longlong *)0x0) {
LAB_01f8a470:
            uVar12 = FUN_01da4890();
            local_128 = 0;
            local_120 = '\0';
            local_118 = plVar2;
            local_110 = '\0';
            FUN_01da4a10(uVar12,&local_118);
            if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
      }
      FUN_002a0990();
      FUN_01eda0f0();
      plVar2 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01f8a76f;
        }
LAB_01f8a7b7:
        iVar7 = -1;
      }
      else {
        if (local_68 == (longlong *)0x0) goto LAB_01f8a7b7;
LAB_01f8a76f:
        local_108 = plVar2;
        local_100 = '\0';
        iVar7 = FUN_01ed2ec0();
        if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x920))();
      FUN_01da4890();
      FUN_01f27fe0();
      FUN_01f28c30();
      plVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01da8a40();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar7 != -1) {
        iVar8 = FUN_01dcea80();
        if (iVar8 <= iVar7) {
          FUN_01dcea80();
        }
        FUN_01dd3d10();
      }
      goto LAB_01f8a957;
    }
LAB_01f8a961:
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01f8a97e:
  if ((bVar1) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return local_f4 != 0;
}




// ============================================================
// @01f8f0f0 — 2758 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f8f484) */
/* WARNING: Removing unreachable block (ram,0x01f8f490) */
/* WARNING: Removing unreachable block (ram,0x01f8f4e3) */
/* WARNING: Removing unreachable block (ram,0x01f8f4ef) */

void FUN_01f8f0f0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_1b0;
  char local_1a8;
  longlong local_148;
  char local_140;
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
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  int local_7c;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar2 = local_68;
  lVar6 = DAT_02801020;
  if (DAT_02801020 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar5 != '\0') && ((longlong *)unaff_RDI[0x10] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x920))();
    local_b0 = 0;
    local_b8 = unaff_RDI[0x10];
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    (**(code **)(*unaff_RDI + 0x5e8))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d3ecc0();
  plVar2 = local_68;
  lVar6 = DAT_027f0e10;
  if (DAT_027f0e10 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar2 + 0x50))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') goto LAB_01f8fb55;
  FUN_01d77960();
  FUN_01d5e2b0();
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  FUN_01f904a0();
  local_88 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != (longlong *)0x0) {
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = local_88;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    do {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar7 = -local_50._4_4_;
        }
        else {
          iVar7 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar7);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar7 = 0;
        }
        local_50 = CONCAT44(iVar7,(int)local_50);
      }
      lVar6 = (longlong)(int)local_50;
      iVar7 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar7);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar7) goto LAB_01f8f590;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar6 * 8);
      FUN_01d66da0();
      lVar6 = DAT_02801038;
      if (DAT_02801038 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        cVar5 = FUN_00c70bc0();
        if (cVar5 != '\0') goto LAB_01f8f585;
        FUN_00d50b20();
      }
      FUN_01d77960();
      FUN_01d5dde0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    } while( true );
  }
  goto LAB_01f8f599;
LAB_01f8f585:
  FUN_00d50b20();
LAB_01f8f590:
  FUN_002a0a30();
LAB_01f8f599:
  FUN_01da4890();
  FUN_01da7fd0();
  local_98 = local_40;
  local_90 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = '\x01';
  local_140 = '\0';
  local_148 = 0;
  local_138 = 0;
  local_130 = '\0';
  local_128 = 0;
  local_120 = '\0';
  FUN_01d64d40(&local_138,&local_148,&local_128);
  plVar2 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d77960();
  local_118 = plVar2;
  local_110 = '\0';
  FUN_01d5d7f0();
  if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_7c = 1;
  FUN_01d77960();
  plVar3 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_01f27fe0();
  (**(code **)(*local_1b0 + 0x610))();
  plVar1 = local_78;
  local_108 = DAT_02800ff0;
  if (DAT_02800ff0 != 0) {
    FUN_00d50b00();
  }
  local_100 = '\x01';
  (**(code **)(*plVar1 + 0x400))();
  lVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d50b00();
  FUN_01f82cb0(&stack0xfffffffffffffdf0,&local_7c);
  FUN_00d50b20();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d77960();
  plVar3 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_01f83aa0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d50b00();
  FUN_01f82cb0(&stack0xfffffffffffffe00,&local_7c);
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_026fce10;
  if (local_7c != 0) {
    if (DAT_026fce10 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar6;
    local_f0 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    FUN_01d64ce0();
    plVar3 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d66c80();
    FUN_01d77960();
    local_d8 = plVar3;
    local_d0 = '\0';
    FUN_01d5d7f0();
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_88 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01f8fb55:
  local_c8 = *unaff_RSI;
  local_c0 = '\0';
  FUN_00d530a0();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01f8e100 — 1741 bytes
// str: ""GNActionGroup""
// str: ""GNActionRegistration""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f8e100(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *unaff_RDI;
  undefined4 uVar5;
  longlong local_90;
  char local_88;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01db9a80();
  plVar4 = local_40;
  lVar1 = DAT_027feca0;
  if (DAT_027feca0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar4 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    plVar4 = (longlong *)*param_1;
    if ((DAT_026e73b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_02801338 = FUN_00d4fe50();
      _DAT_02801320 = "GNActionGroup";
      _DAT_02801328 = 0x38;
      _DAT_02801330 = FUN_001a4a20;
      _DAT_02801340 = 0;
      uRam0000000002801348 = 0;
      _DAT_02801350 = 0;
      uRam0000000002801358 = 0;
      _DAT_02801360 = 0;
      uRam0000000002801368 = 0;
      _DAT_02801370 = 0;
      uRam0000000002801378 = 0;
      _DAT_02801380 = 0;
      uRam0000000002801388 = 0;
      _DAT_02801390 = 0;
      uRam0000000002801398 = 0;
      _DAT_028013a0 = 0;
      uRam00000000028013a8 = 0;
      _DAT_028013b0 = 0;
      uRam00000000028013b8 = 0;
      _DAT_028013c0 = 0;
      uRam00000000028013c8 = 0;
      _DAT_028013d0 = 0;
      uRam00000000028013d8 = 0;
      _DAT_028013e0 = 0;
      ___cxa_guard_release();
    }
    if (plVar4 == (longlong *)0x0) {
LAB_01f8e1be:
      plVar4 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar4 = param_1;
      if (cVar2 == '\0') goto LAB_01f8e1be;
    }
    if (*plVar4 == 0) {
      plVar4 = (longlong *)*param_1;
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
      if (plVar4 == (longlong *)0x0) {
LAB_01f8e25c:
        plVar4 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar4 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar4 = param_1;
        if (cVar2 == '\0') goto LAB_01f8e25c;
      }
      if (*plVar4 == 0) goto LAB_01f8e2c2;
      FUN_01caf440();
      plVar4 = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 != '\0') goto LAB_01f8e403;
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        *unaff_RDI = plVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (local_38 == '\0') {
          return;
        }
        if (local_40 == (longlong *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
    else {
      FUN_01caf0e0();
      plVar4 = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 != '\0') goto LAB_01f8e403;
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        *unaff_RDI = plVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (local_38 == '\0') {
          return;
        }
        if (local_40 == (longlong *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
    local_40 = (longlong *)0x0;
LAB_01f8e403:
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
LAB_01f8e2c2:
  FUN_01db9a80();
  plVar4 = local_40;
  lVar1 = DAT_02704000;
  if (DAT_02704000 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar4 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_01f8e370;
  plVar4 = (longlong *)*param_1;
  if ((DAT_026e73b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02801338 = FUN_00d4fe50();
    _DAT_02801320 = "GNActionGroup";
    _DAT_02801328 = 0x38;
    _DAT_02801330 = FUN_001a4a20;
    _DAT_02801340 = 0;
    uRam0000000002801348 = 0;
    _DAT_02801350 = 0;
    uRam0000000002801358 = 0;
    _DAT_02801360 = 0;
    uRam0000000002801368 = 0;
    _DAT_02801370 = 0;
    uRam0000000002801378 = 0;
    _DAT_02801380 = 0;
    uRam0000000002801388 = 0;
    _DAT_02801390 = 0;
    uRam0000000002801398 = 0;
    _DAT_028013a0 = 0;
    uRam00000000028013a8 = 0;
    _DAT_028013b0 = 0;
    uRam00000000028013b8 = 0;
    _DAT_028013c0 = 0;
    uRam00000000028013c8 = 0;
    _DAT_028013d0 = 0;
    uRam00000000028013d8 = 0;
    _DAT_028013e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_01f8e363:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = param_1;
    if (cVar2 == '\0') goto LAB_01f8e363;
  }
  if (*plVar4 != 0) goto LAB_01f8e370;
  plVar4 = (longlong *)*param_1;
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
  if (plVar4 == (longlong *)0x0) {
LAB_01f8e3b9:
    param_1 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01f8e3b9;
  }
  if (*param_1 == 0) {
LAB_01f8e370:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_01da4890();
  uVar5 = FUN_01caf470();
  local_48 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_60;
  FUN_01da5370(uVar5,&local_50);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) goto LAB_01f8e370;
  FUN_01d3d730();
  plVar4 = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      *unaff_RDI = plVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f8e4bb;
    }
    local_40 = (longlong *)0x0;
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01f8e4bb:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01f8d910 — 1346 bytes
// str: ""GNActionGroup""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f8ddc1) */
/* WARNING: Removing unreachable block (ram,0x01f8dd12) */
/* WARNING: Removing unreachable block (ram,0x01f8dd1b) */
/* WARNING: Removing unreachable block (ram,0x01f8dc0c) */
/* WARNING: Removing unreachable block (ram,0x01f8dc1c) */
/* WARNING: Removing unreachable block (ram,0x01f8dab2) */
/* WARNING: Removing unreachable block (ram,0x01f8dabe) */
/* WARNING: Removing unreachable block (ram,0x01f8dc72) */
/* WARNING: Removing unreachable block (ram,0x01f8dc7b) */
/* WARNING: Removing unreachable block (ram,0x01f8db2e) */
/* WARNING: Removing unreachable block (ram,0x01f8db37) */
/* WARNING: Removing unreachable block (ram,0x01f8dd95) */
/* WARNING: Removing unreachable block (ram,0x01f8dda2) */
/* WARNING: Removing unreachable block (ram,0x01f8db77) */
/* WARNING: Removing unreachable block (ram,0x01f8dba0) */
/* WARNING: Removing unreachable block (ram,0x01f8db79) */
/* WARNING: Removing unreachable block (ram,0x01f8dba2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01f8d910(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_68;
  char local_60;
  int local_50;
  
  lVar3 = local_68;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_01caf660();
    FUN_01cafb00();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      if (0 < *(int *)(local_68 + 0xc)) {
        iVar5 = 0;
        do {
          cVar4 = FUN_01f8ce40();
          if (cVar4 != '\0') {
            FUN_00d21140();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(local_68 + 0xc));
      }
      FUN_01cb0380();
      FUN_00d50b20();
    }
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  if ((DAT_026e73b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_02801338 = FUN_00d4fe50();
    _DAT_02801320 = "GNActionGroup";
    _DAT_02801328 = 0x38;
    _DAT_02801330 = FUN_001a4a20;
    _DAT_02801340 = 0;
    uRam0000000002801348 = 0;
    _DAT_02801350 = 0;
    uRam0000000002801358 = 0;
    _DAT_02801360 = 0;
    uRam0000000002801368 = 0;
    _DAT_02801370 = 0;
    uRam0000000002801378 = 0;
    _DAT_02801380 = 0;
    uRam0000000002801388 = 0;
    _DAT_02801390 = 0;
    uRam0000000002801398 = 0;
    _DAT_028013a0 = 0;
    uRam00000000028013a8 = 0;
    _DAT_028013b0 = 0;
    uRam00000000028013b8 = 0;
    _DAT_028013c0 = 0;
    uRam00000000028013c8 = 0;
    _DAT_028013d0 = 0;
    uRam00000000028013d8 = 0;
    _DAT_028013e0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  cVar4 = FUN_00e85ea0();
  if (cVar4 == '\0') {
    param_1 = &DAT_02802688;
  }
  lVar2 = param_1[1];
  if (((char)lVar2 == '\0') || (*param_1 == 0)) {
    if (*param_1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if (puVar6 == (undefined8 *)0x0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01caf140();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01f8db3c;
    }
  }
  else if (local_68 != 0) {
LAB_01f8db3c:
    local_60 = '\0';
    local_68 = 0;
    local_50 = -1;
    while( true ) {
      lVar7 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_50) break;
      local_68 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar7 * 8);
      cVar4 = FUN_01f8d150();
      if (cVar4 != '\0') {
        FUN_00d21140();
      }
    }
    FUN_002a0990();
    FUN_00d50b20();
  }
  FUN_01caf110();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_01f8dd37;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_01f8dd37;
  if (0 < *(int *)(local_68 + 0xc)) {
    iVar5 = 0;
    do {
      cVar4 = FUN_01f8ce40();
      if (cVar4 != '\0') {
        FUN_00d21140();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_68 + 0xc));
  }
  FUN_01cb0380();
  FUN_00d50b20();
LAB_01f8dd37:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01f90590 — 511 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f9067d) */
/* WARNING: Removing unreachable block (ram,0x01f90686) */
/* WARNING: Removing unreachable block (ram,0x01f905d7) */
/* WARNING: Removing unreachable block (ram,0x01f905e0) */

undefined8 FUN_01f90590(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *unaff_RDI;
  longlong local_78;
  char local_70;
  longlong *local_38;
  char local_30;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_01eda7e0();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x10] + 0x920))();
  FUN_01f8cb70();
  if (local_38 == (longlong *)0x0) {
    FUN_01f8bbb0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 == 0) {
      (**(code **)(*(longlong *)unaff_RDI[0x10] + 0xa60))();
      goto LAB_01f90655;
    }
  }
  else if (local_30 != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x10] + 0xa58))();
LAB_01f90655:
  if (local_38 != (longlong *)0x0) {
    FUN_01eda650();
    FUN_01eda7e0();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    cVar2 = (**(code **)(*local_38 + 0x50))();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_01dd4c60();
    }
  }
  lVar1 = unaff_RDI[0x10];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x5e8))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}



