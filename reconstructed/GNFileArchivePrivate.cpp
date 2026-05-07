// Reconstructed implementation of GNFileArchivePrivate
// From MikeCore binary — reverse-engineered pseudocode

#include "GNFileArchivePrivate.h"

// ============================================================
// @00ccff10 — 2167 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00cd0152) */
/* WARNING: Removing unreachable block (ram,0x00cd015e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ccff10(void)

{
  uint *puVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint3 uVar5;
  uint5 uVar6;
  uint6 uVar7;
  uint7 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *unaff_RDI;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong local_300;
  char local_2f8;
  longlong local_2f0;
  char local_2e8;
  int local_298;
  int local_294;
  longlong local_288;
  char local_280;
  ushort uStack_27a;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined1 local_264;
  undefined1 local_263;
  undefined1 local_262;
  undefined1 local_261;
  byte local_260;
  undefined1 local_25f;
  undefined1 local_25e;
  undefined1 local_25d;
  byte local_25c;
  undefined1 local_25b;
  undefined1 local_25a;
  undefined1 local_259;
  byte local_258;
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined8 local_254;
  undefined1 auStack_244 [496];
  byte local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  plVar3 = *(longlong **)(*unaff_RDI + 0x38);
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_294 = 0x14;
  (**(code **)(*plVar3 + 0x3a0))();
  if ((local_2f8 != '\0') && (local_300 != 0)) {
    FUN_00d50b20();
  }
  auVar19._0_8_ = (**(code **)(*plVar3 + 0x380))(&local_294,&local_278);
  auVar19._8_8_ = extraout_XMM0_Qb;
  bVar17 = local_294 != 0x14;
  if ((local_280 != '\0') && (local_288 != 0)) {
    auVar19._0_8_ = FUN_00d50b20();
    auVar19._8_8_ = extraout_XMM0_Qb_00;
  }
  lVar4 = DAT_02774d38;
  if (local_288 != 0 || bVar17) {
    if (DAT_02774d38 != 0) {
      FUN_00d50b00();
    }
    auVar19._0_8_ = FUN_00cc78b0();
    auVar19._8_8_ = extraout_XMM0_Qb_01;
    if (lVar4 != 0) {
      auVar19._0_8_ = FUN_00d50b20();
      auVar19._8_8_ = extraout_XMM0_Qb_02;
    }
  }
  lVar4 = DAT_02774d38;
  if (local_278 != 0x41464e47) {
    if (DAT_02774d38 != 0) {
      FUN_00d50b00();
    }
    auVar19._0_8_ = FUN_00cc78b0();
    auVar19._8_8_ = extraout_XMM0_Qb_03;
    if (lVar4 != 0) {
      auVar19._0_8_ = FUN_00d50b20();
      auVar19._8_8_ = extraout_XMM0_Qb_04;
    }
  }
  lVar4 = *unaff_RDI;
  uVar10 = local_274 >> 0x18 | (local_274 & 0xff0000) >> 8 | (local_274 & 0xff00) << 8 |
           local_274 << 0x18;
  *(uint *)(lVar4 + 0x10) = uVar10;
  *(uint *)(lVar4 + 0x14) =
       local_270 >> 0x18 | (local_270 & 0xff0000) >> 8 | (local_270 & 0xff00) << 8 |
       local_270 << 0x18;
  lVar4 = DAT_02774d38;
  if (uVar10 < 0x14) {
    if (DAT_02774d38 != 0) {
      FUN_00d50b00();
    }
    auVar19._0_8_ = FUN_00cc78b0();
    auVar19._8_8_ = extraout_XMM0_Qb_05;
    if (lVar4 != 0) {
      auVar19._0_8_ = FUN_00d50b20();
      auVar19._8_8_ = extraout_XMM0_Qb_06;
    }
  }
  lVar4 = *unaff_RDI;
  *(uint *)(lVar4 + 0x18) =
       local_26c >> 0x18 | (local_26c & 0xff0000) >> 8 | (local_26c & 0xff00) << 8 |
       local_26c << 0x18;
  uVar10 = local_268 >> 0x18 | (local_268 & 0xff0000) >> 8 | (local_268 & 0xff00) << 8 |
           local_268 << 0x18;
  *(uint *)(lVar4 + 0x1c) = uVar10;
  uVar15 = (ulonglong)*(uint *)(lVar4 + 0x10);
  if (uVar10 != 0) {
    local_294 = uVar10 * 0x23c;
    FUN_00c8e690();
    if ((local_280 == '\0') && (local_288 != 0)) {
      FUN_00d50b00();
    }
    auVar19._0_8_ = FUN_00c92170();
    auVar19._8_8_ = extraout_XMM0_Qb_07;
    if (0x23b < (int)*(uint *)(local_288 + 0x18)) {
      auVar19._0_8_ = ___bzero(*(uint *)(local_288 + 0x18) / 0x23c - 1);
      auVar19._8_8_ = extraout_XMM0_Qb_08;
    }
    lVar4 = *(longlong *)(*unaff_RDI + 0x20);
    if (lVar4 == local_288) {
      auVar19._0_8_ = FUN_00d50b20();
      auVar19._8_8_ = extraout_XMM0_Qb_10;
    }
    else {
      *(longlong *)(*unaff_RDI + 0x20) = local_288;
      if (lVar4 != 0) {
        auVar19._0_8_ = FUN_00d50b20();
        auVar19._8_8_ = extraout_XMM0_Qb_09;
      }
    }
  }
  lVar4 = *unaff_RDI;
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined1 *)(lVar4 + 0x40) = 1;
  }
  if (*(int *)(lVar4 + 0x1c) != 0) {
    uVar16 = 0;
    do {
      (**(code **)(*plVar3 + 0x3a0))(auVar19._0_8_,uVar15);
      if ((local_2e8 != '\0') && (local_2f0 != 0)) {
        FUN_00d50b20();
      }
      lVar9 = DAT_02774d38;
      lVar4 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x20) + 0x10);
      if (*(ulonglong *)(*unaff_RDI + 0x28) < uVar15) {
        if (DAT_02774d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
      }
      local_298 = 0x22c;
      auVar19._0_8_ = (**(code **)(*plVar3 + 0x380))(&local_298,&local_278);
      auVar19._8_8_ = extraout_XMM0_Qb_11;
      bVar17 = local_298 != 0x22c;
      if ((local_280 != '\0') && (local_288 != 0)) {
        auVar19._0_8_ = FUN_00d50b20();
        auVar19._8_8_ = extraout_XMM0_Qb_12;
      }
      lVar9 = DAT_02774d40;
      if (local_288 != 0 || bVar17) {
        if (DAT_02774d40 != 0) {
          FUN_00d50b00();
        }
        local_288 = lVar9;
        local_280 = '\x01';
        auVar19._0_8_ = FUN_00cc78b0();
        auVar19._8_8_ = extraout_XMM0_Qb_13;
        if (lVar9 != 0) {
          auVar19._0_8_ = FUN_00d50b20();
          auVar19._8_8_ = extraout_XMM0_Qb_14;
        }
      }
      lVar9 = uVar16 * 0x23c;
      puVar1 = (uint *)(lVar4 + lVar9);
      *(ulonglong *)(lVar4 + 0x22c + lVar9) = uVar15;
      *(undefined4 *)(lVar4 + lVar9) = 0;
      *(uint *)(lVar4 + lVar9) = local_278 & 0xff;
      *(uint *)(lVar4 + lVar9) = (uint)CONCAT11((undefined1)local_278,local_278._1_1_);
      uVar5 = CONCAT21(CONCAT11((undefined1)local_278,local_278._1_1_),local_278._2_1_);
      *(uint *)(lVar4 + lVar9) = (uint)uVar5;
      *(uint *)(lVar4 + lVar9) = CONCAT31(uVar5,local_278._3_1_);
      *(undefined4 *)(lVar4 + 4 + lVar9) = 0;
      *(uint *)(lVar4 + 4 + lVar9) = local_274 & 0xff;
      *(uint *)(lVar4 + 4 + lVar9) = (uint)CONCAT11((undefined1)local_274,local_274._1_1_);
      uVar5 = CONCAT21(CONCAT11((undefined1)local_274,local_274._1_1_),local_274._2_1_);
      *(uint *)(lVar4 + 4 + lVar9) = (uint)uVar5;
      *(uint *)(lVar4 + 4 + lVar9) = CONCAT31(uVar5,local_274._3_1_);
      *(undefined8 *)(lVar4 + 8 + lVar9) = 0;
      *(ulonglong *)(lVar4 + 8 + lVar9) = (ulonglong)(byte)local_270;
      *(ulonglong *)(lVar4 + 8 + lVar9) = (ulonglong)CONCAT11((byte)local_270,local_270._1_1_);
      uVar5 = CONCAT21(CONCAT11((byte)local_270,local_270._1_1_),local_270._2_1_);
      *(ulonglong *)(lVar4 + 8 + lVar9) = (ulonglong)uVar5;
      uVar10 = CONCAT31(uVar5,local_270._3_1_);
      *(ulonglong *)(lVar4 + 8 + lVar9) = (ulonglong)uVar10;
      uVar6 = CONCAT41(uVar10,(undefined1)local_26c);
      *(ulonglong *)(lVar4 + 8 + lVar9) = (ulonglong)uVar6;
      uVar7 = CONCAT51(uVar6,local_26c._1_1_);
      *(ulonglong *)(lVar4 + 8 + lVar9) = (ulonglong)uVar7;
      uVar8 = CONCAT61(uVar7,local_26c._2_1_);
      *(ulonglong *)(lVar4 + 8 + lVar9) = (ulonglong)uVar8;
      *(ulonglong *)(lVar4 + 8 + lVar9) = CONCAT71(uVar8,local_26c._3_1_);
      *(undefined8 *)(lVar4 + 0x10 + lVar9) = 0;
      *(ulonglong *)(lVar4 + 0x10 + lVar9) = (ulonglong)(byte)local_268;
      *(ulonglong *)(lVar4 + 0x10 + lVar9) = (ulonglong)CONCAT11((byte)local_268,local_268._1_1_);
      uVar5 = CONCAT21(CONCAT11((byte)local_268,local_268._1_1_),local_268._2_1_);
      *(ulonglong *)(lVar4 + 0x10 + lVar9) = (ulonglong)uVar5;
      uVar10 = CONCAT31(uVar5,local_268._3_1_);
      *(ulonglong *)(lVar4 + 0x10 + lVar9) = (ulonglong)uVar10;
      uVar6 = CONCAT41(uVar10,local_264);
      *(ulonglong *)(lVar4 + 0x10 + lVar9) = (ulonglong)uVar6;
      uVar7 = CONCAT51(uVar6,local_263);
      *(ulonglong *)(lVar4 + 0x10 + lVar9) = (ulonglong)uVar7;
      uVar8 = CONCAT61(uVar7,local_262);
      *(ulonglong *)(lVar4 + 0x10 + lVar9) = (ulonglong)uVar8;
      *(ulonglong *)(lVar4 + 0x10 + lVar9) = CONCAT71(uVar8,local_261);
      *(undefined4 *)(lVar4 + 0x18 + lVar9) = 0;
      *(uint *)(lVar4 + 0x18 + lVar9) = (uint)local_260;
      *(uint *)(lVar4 + 0x18 + lVar9) = (uint)CONCAT11(local_260,local_25f);
      uVar5 = CONCAT21(CONCAT11(local_260,local_25f),local_25e);
      *(uint *)(lVar4 + 0x18 + lVar9) = (uint)uVar5;
      *(uint *)(lVar4 + 0x18 + lVar9) = CONCAT31(uVar5,local_25d);
      *(undefined4 *)(lVar4 + 0x1c + lVar9) = 0;
      *(uint *)(lVar4 + 0x1c + lVar9) = (uint)local_25c;
      *(uint *)(lVar4 + 0x1c + lVar9) = (uint)CONCAT11(local_25c,local_25b);
      uVar5 = CONCAT21(CONCAT11(local_25c,local_25b),local_25a);
      *(uint *)(lVar4 + 0x1c + lVar9) = (uint)uVar5;
      *(uint *)(lVar4 + 0x1c + lVar9) = CONCAT31(uVar5,local_259);
      *(undefined4 *)(lVar4 + 0x20 + lVar9) = 0;
      *(uint *)(lVar4 + 0x20 + lVar9) = (uint)local_258;
      *(uint *)(lVar4 + 0x20 + lVar9) = (uint)CONCAT11(local_258,local_257);
      uVar5 = CONCAT21(CONCAT11(local_258,local_257),local_256);
      *(uint *)(lVar4 + 0x20 + lVar9) = (uint)uVar5;
      *(uint *)(lVar4 + 0x20 + lVar9) = CONCAT31(uVar5,local_255);
      puVar12 = (ulonglong *)(lVar4 + lVar9 + 0x224);
      if (((byte *)(lVar4 + lVar9 + 0x24) < &local_54) && (&local_254 < puVar12)) {
        lVar13 = 0x13;
        do {
          *(ushort *)((longlong)puVar1 + lVar13 * 2 + -2) =
               (&uStack_27a)[lVar13] << 8 | (&uStack_27a)[lVar13] >> 8;
          uVar2 = *(ushort *)((longlong)&local_278 + lVar13 * 2);
          *(ushort *)((longlong)puVar1 + lVar13 * 2) = uVar2 << 8 | uVar2 >> 8;
          lVar13 = lVar13 + 2;
        } while (lVar13 != 0x113);
      }
      else {
        lVar13 = 0;
        do {
          auVar19 = _DAT_023de250;
          auVar18 = pshufb(*(undefined1 (*) [16])((longlong)&local_254 + lVar13 * 2),_DAT_023de250);
          *(undefined1 (*) [16])(lVar4 + lVar9 + 0x24 + lVar13 * 2) = auVar18;
          auVar19 = pshufb(*(undefined1 (*) [16])(auStack_244 + lVar13 * 2),auVar19);
          *(undefined1 (*) [16])(lVar4 + lVar9 + 0x34 + lVar13 * 2) = auVar19;
          lVar13 = lVar13 + 0x10;
        } while (lVar13 != 0x100);
      }
      plVar14 = (longlong *)(lVar4 + lVar9 + 0x10);
      *puVar12 = 0;
      *puVar12 = (ulonglong)local_54;
      *puVar12 = (ulonglong)CONCAT11(local_54,local_53);
      uVar5 = CONCAT21(CONCAT11(local_54,local_53),local_52);
      *puVar12 = (ulonglong)uVar5;
      uVar10 = CONCAT31(uVar5,local_51);
      *puVar12 = (ulonglong)uVar10;
      uVar6 = CONCAT41(uVar10,local_50);
      *puVar12 = (ulonglong)uVar6;
      uVar7 = CONCAT51(uVar6,local_4f);
      *puVar12 = (ulonglong)uVar7;
      uVar8 = CONCAT61(uVar7,local_4e);
      *puVar12 = (ulonglong)uVar8;
      *puVar12 = CONCAT71(uVar8,local_4d);
      if (*(int *)(*unaff_RDI + 0x18) == 0) {
        lVar13 = *puVar1 + uVar15;
        uVar11 = (ulonglong)*puVar1 + *plVar14;
      }
      else {
        lVar13 = *plVar14;
        uVar11 = (ulonglong)*puVar1;
      }
      *(longlong *)(lVar4 + 0x234 + lVar9) = lVar13;
      uVar15 = uVar15 + uVar11;
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(*unaff_RDI + 0x1c));
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




// ============================================================
// @00cdb840 — 854 bytes
// str: ""GNFileArchivePrivate""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cdb840(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_0256dc20;
  *(undefined8 *)((longlong)unaff_RDI + 0xc) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x14) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_02774e80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02774dd0 = FUN_00d4fe50();
      _DAT_02774db8 = "GNFileArchivePrivate";
      _DAT_02774dc0 = 0x50;
      _DAT_02774dc8 = FUN_00cdb4a0;
      _DAT_02774dd8 = 0;
      uRam0000000002774de0 = 0;
      _DAT_02774de8 = 0;
      _DAT_02774e60 = 0;
      uRam0000000002774e68 = 0;
      _DAT_02774e70 = 0;
      DAT_02774e72 = 1;
      _DAT_02774df0 = 0;
      uRam0000000002774df8 = 0;
      _DAT_02774e00 = 0;
      uRam0000000002774e08 = 0;
      _DAT_02774e10 = 0;
      uRam0000000002774e18 = 0;
      _DAT_02774e20 = 0;
      uRam0000000002774e28 = 0;
      _DAT_02774e30 = 0;
      uRam0000000002774e38 = 0;
      _DAT_02774e40 = 0;
      uRam0000000002774e48 = 0;
      _DAT_02774e50 = 0;
      uRam0000000002774e58 = 0;
      DAT_02774e7b = 0;
      _DAT_02774e73 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02774e73 == '\0') {
    FUN_00cdbc30();
    FUN_00e87980();
  }
  FUN_00cdbdc0();
  unaff_RDI[5] = 0;
  if (DAT_02774e80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02774dd0 = FUN_00d4fe50();
      _DAT_02774db8 = "GNFileArchivePrivate";
      _DAT_02774dc0 = 0x50;
      _DAT_02774dc8 = FUN_00cdb4a0;
      _DAT_02774dd8 = 0;
      uRam0000000002774de0 = 0;
      _DAT_02774de8 = 0;
      _DAT_02774e60 = 0;
      uRam0000000002774e68 = 0;
      _DAT_02774e70 = 0;
      DAT_02774e72 = 1;
      _DAT_02774df0 = 0;
      uRam0000000002774df8 = 0;
      _DAT_02774e00 = 0;
      uRam0000000002774e08 = 0;
      _DAT_02774e10 = 0;
      uRam0000000002774e18 = 0;
      _DAT_02774e20 = 0;
      uRam0000000002774e28 = 0;
      _DAT_02774e30 = 0;
      uRam0000000002774e38 = 0;
      _DAT_02774e40 = 0;
      uRam0000000002774e48 = 0;
      _DAT_02774e50 = 0;
      uRam0000000002774e58 = 0;
      DAT_02774e7b = 0;
      _DAT_02774e73 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02774e73 == '\0') {
    FUN_00cdc080();
    FUN_00e87980();
  }
  FUN_00cdc210();
  FUN_00cdc4d0();
  *(undefined1 *)(unaff_RDI + 8) = 0;
  if (DAT_02774e80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02774dd0 = FUN_00d4fe50();
      _DAT_02774db8 = "GNFileArchivePrivate";
      _DAT_02774dc0 = 0x50;
      _DAT_02774dc8 = FUN_00cdb4a0;
      _DAT_02774dd8 = 0;
      uRam0000000002774de0 = 0;
      _DAT_02774de8 = 0;
      _DAT_02774e60 = 0;
      uRam0000000002774e68 = 0;
      _DAT_02774e70 = 0;
      DAT_02774e72 = 1;
      _DAT_02774df0 = 0;
      uRam0000000002774df8 = 0;
      _DAT_02774e00 = 0;
      uRam0000000002774e08 = 0;
      _DAT_02774e10 = 0;
      uRam0000000002774e18 = 0;
      _DAT_02774e20 = 0;
      uRam0000000002774e28 = 0;
      _DAT_02774e30 = 0;
      uRam0000000002774e38 = 0;
      _DAT_02774e40 = 0;
      uRam0000000002774e48 = 0;
      _DAT_02774e50 = 0;
      uRam0000000002774e58 = 0;
      DAT_02774e7b = 0;
      _DAT_02774e73 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02774e73 == '\0') {
    FUN_00cdc790();
    FUN_00e87980();
  }
  FUN_00cdc920();
  return;
}




// ============================================================
// @00ccfb30 — 563 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ccfc71) */
/* WARNING: Removing unreachable block (ram,0x00ccfc7a) */
/* WARNING: Removing unreachable block (ram,0x00ccfd34) */
/* WARNING: Removing unreachable block (ram,0x00ccfd3d) */
/* WARNING: Removing unreachable block (ram,0x00ccfc09) */
/* WARNING: Removing unreachable block (ram,0x00ccfc12) */

void FUN_00ccfb30(code *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_60;
  char local_58;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar4 = *unaff_RSI;
  if (*(int *)(lVar4 + 0x1c) != 0) {
    if (param_1 == (code *)0x0) {
      lVar6 = 0x20;
      uVar5 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x10);
        if ((*(longlong *)(lVar1 + -0x18 + lVar6) != 0) && (*(int *)(lVar1 + lVar6) == param_2)) {
          FUN_00cd0ea0(lVar4,(int)uVar5 + 1);
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
          lVar4 = *unaff_RSI;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x23c;
      } while (uVar5 < *(uint *)(lVar4 + 0x1c));
    }
    else {
      lVar6 = 0;
      uVar5 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x10);
        if (((*(longlong *)(lVar4 + 8 + lVar6) != 0) && (*(int *)(lVar4 + 0x20 + lVar6) == param_2))
           && (cVar2 = (*param_1)(), cVar2 != '\0')) {
          FUN_00cd0ea0();
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00d21140();
          if (local_60 != 0) {
            FUN_00d50b20();
          }
        }
        uVar5 = uVar5 + 1;
        lVar4 = *unaff_RSI;
        lVar6 = lVar6 + 0x23c;
      } while (uVar5 < *(uint *)(lVar4 + 0x1c));
    }
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00ccf640 — 505 bytes
// str: ""GNFileArchivePrivate""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00ccf74b) */
/* WARNING: Removing unreachable block (ram,0x00ccf73d) */
/* WARNING: Removing unreachable block (ram,0x00ccf759) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ccf640(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_98;
  longlong local_88;
  longlong local_80;
  
  if ((DAT_02774e80 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_02774dd0 = FUN_00d4fe50();
    _DAT_02774db8 = "GNFileArchivePrivate";
    _DAT_02774dc0 = 0x50;
    _DAT_02774dc8 = FUN_00cdb4a0;
    _DAT_02774dd8 = 0;
    uRam0000000002774de0 = 0;
    _DAT_02774de8 = 0;
    _DAT_02774e60 = 0;
    uRam0000000002774e68 = 0;
    _DAT_02774e70 = 0;
    DAT_02774e72 = 1;
    _DAT_02774df0 = 0;
    uRam0000000002774df8 = 0;
    _DAT_02774e00 = 0;
    uRam0000000002774e08 = 0;
    _DAT_02774e10 = 0;
    uRam0000000002774e18 = 0;
    _DAT_02774e20 = 0;
    uRam0000000002774e28 = 0;
    _DAT_02774e30 = 0;
    uRam0000000002774e38 = 0;
    _DAT_02774e40 = 0;
    uRam0000000002774e48 = 0;
    _DAT_02774e50 = 0;
    uRam0000000002774e58 = 0;
    DAT_02774e7b = 0;
    _DAT_02774e73 = 0;
    ___cxa_guard_release();
  }
  if (DAT_02774e73 == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00cdb840();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if (local_98 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}



