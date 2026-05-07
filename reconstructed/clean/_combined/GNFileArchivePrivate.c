// ===================================================================
// GNFileArchivePrivate — Complete reconstructed pseudocode
// 4 functions
// ===================================================================


// ============================================================
// 00ccff10
// ============================================================
// Function: FUN_00ccff10
// Address: 00ccff10
// Size: 2167 bytes
// Class: GNFileArchivePrivate

void FUN_00ccff10(void)

{
  uint *puVar1;
  ushort uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint3 uVar5;
  uint5 uVar6;
  uint6 uVar7;
  uint7 uVar8;
  int64_t lVar9;
  uint uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int64_t *this_ptr;
  uint64_t uVar15;
  uint64_t uVar16;
  bool bVar17;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_07;
  uint64_t extraout_XMM0_Qb_08;
  uint64_t extraout_XMM0_Qb_09;
  uint64_t extraout_XMM0_Qb_10;
  uint64_t extraout_XMM0_Qb_11;
  uint64_t extraout_XMM0_Qb_12;
  uint64_t extraout_XMM0_Qb_13;
  uint64_t extraout_XMM0_Qb_14;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  int64_t local_300;
  char local_2f8;
  int64_t local_2f0;
  char local_2e8;
  int local_298;
  int local_294;
  int64_t local_288;
  char local_280;
  ushort uStack_27a;
  uint32_t local_278;
  uint32_t local_274;
  uint32_t local_270;
  uint32_t local_26c;
  uint32_t local_268;
  uint8_t local_264;
  uint8_t local_263;
  uint8_t local_262;
  uint8_t local_261;
  byte local_260;
  uint8_t local_25f;
  uint8_t local_25e;
  uint8_t local_25d;
  byte local_25c;
  uint8_t local_25b;
  uint8_t local_25a;
  uint8_t local_259;
  byte local_258;
  uint8_t local_257;
  uint8_t local_256;
  uint8_t local_255;
  uint64_t local_254;
  uint8_t auStack_244 [496];
  byte local_54;
  uint8_t local_53;
  uint8_t local_52;
  uint8_t local_51;
  uint8_t local_50;
  uint8_t local_4f;
  uint8_t local_4e;
  uint8_t local_4d;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  plVar3 = *(int64_t **)(*this_ptr + 0x38);
  if (plVar3 != (int64_t *)0x0) {
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
  lVar4 = g_02774d38;
  if (local_288 != 0 || bVar17) {
    if (g_02774d38 != 0) {
      FUN_00d50b00();
    }
    auVar19._0_8_ = FUN_00cc78b0();
    auVar19._8_8_ = extraout_XMM0_Qb_01;
    if (lVar4 != 0) {
      auVar19._0_8_ = FUN_00d50b20();
      auVar19._8_8_ = extraout_XMM0_Qb_02;
    }
  }
  lVar4 = g_02774d38;
  if (local_278 != 0x41464e47) {
    if (g_02774d38 != 0) {
      FUN_00d50b00();
    }
    auVar19._0_8_ = FUN_00cc78b0();
    auVar19._8_8_ = extraout_XMM0_Qb_03;
    if (lVar4 != 0) {
      auVar19._0_8_ = FUN_00d50b20();
      auVar19._8_8_ = extraout_XMM0_Qb_04;
    }
  }
  lVar4 = *this_ptr;
  uVar10 = local_274 >> 0x18 | (local_274 & 0xff0000) >> 8 | (local_274 & 0xff00) << 8 |
           local_274 << 0x18;
  *(uint *)(lVar4 + 0x10) = uVar10;
  *(uint *)(lVar4 + 0x14) =
       local_270 >> 0x18 | (local_270 & 0xff0000) >> 8 | (local_270 & 0xff00) << 8 |
       local_270 << 0x18;
  lVar4 = g_02774d38;
  if (uVar10 < 0x14) {
    if (g_02774d38 != 0) {
      FUN_00d50b00();
    }
    auVar19._0_8_ = FUN_00cc78b0();
    auVar19._8_8_ = extraout_XMM0_Qb_05;
    if (lVar4 != 0) {
      auVar19._0_8_ = FUN_00d50b20();
      auVar19._8_8_ = extraout_XMM0_Qb_06;
    }
  }
  lVar4 = *this_ptr;
  *(uint *)(lVar4 + 0x18) =
       local_26c >> 0x18 | (local_26c & 0xff0000) >> 8 | (local_26c & 0xff00) << 8 |
       local_26c << 0x18;
  uVar10 = local_268 >> 0x18 | (local_268 & 0xff0000) >> 8 | (local_268 & 0xff00) << 8 |
           local_268 << 0x18;
  *(uint *)(lVar4 + 0x1c) = uVar10;
  uVar15 = (uint64_t)*(uint *)(lVar4 + 0x10);
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
    lVar4 = *(int64_t *)(*this_ptr + 0x20);
    if (lVar4 == local_288) {
      auVar19._0_8_ = FUN_00d50b20();
      auVar19._8_8_ = extraout_XMM0_Qb_10;
    }
    else {
      *(int64_t *)(*this_ptr + 0x20) = local_288;
      if (lVar4 != 0) {
        auVar19._0_8_ = FUN_00d50b20();
        auVar19._8_8_ = extraout_XMM0_Qb_09;
      }
    }
  }
  lVar4 = *this_ptr;
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(void*)(lVar4 + 0x40) = 1;
  }
  if (*(int *)(lVar4 + 0x1c) != 0) {
    uVar16 = 0;
    do {
      (**(code **)(*plVar3 + 0x3a0))(auVar19._0_8_,uVar15);
      if ((local_2e8 != '\0') && (local_2f0 != 0)) {
        FUN_00d50b20();
      }
      lVar9 = g_02774d38;
      lVar4 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x20) + 0x10);
      if (*(uint64_t *)(*this_ptr + 0x28) < uVar15) {
        if (g_02774d38 != 0) {
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
      lVar9 = g_02774d40;
      if (local_288 != 0 || bVar17) {
        if (g_02774d40 != 0) {
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
      *(uint64_t *)(lVar4 + 0x22c + lVar9) = uVar15;
      *(void*)(lVar4 + lVar9) = 0;
      *(uint *)(lVar4 + lVar9) = local_278 & 0xff;
      *(uint *)(lVar4 + lVar9) = (uint)CONCAT11((uint8_t)local_278,local_278._1_1_);
      uVar5 = CONCAT21(CONCAT11((uint8_t)local_278,local_278._1_1_),local_278._2_1_);
      *(uint *)(lVar4 + lVar9) = (uint)uVar5;
      *(uint *)(lVar4 + lVar9) = CONCAT31(uVar5,local_278._3_1_);
      *(void*)(lVar4 + 4 + lVar9) = 0;
      *(uint *)(lVar4 + 4 + lVar9) = local_274 & 0xff;
      *(uint *)(lVar4 + 4 + lVar9) = (uint)CONCAT11((uint8_t)local_274,local_274._1_1_);
      uVar5 = CONCAT21(CONCAT11((uint8_t)local_274,local_274._1_1_),local_274._2_1_);
      *(uint *)(lVar4 + 4 + lVar9) = (uint)uVar5;
      *(uint *)(lVar4 + 4 + lVar9) = CONCAT31(uVar5,local_274._3_1_);
      *(void*)(lVar4 + 8 + lVar9) = 0;
      *(uint64_t *)(lVar4 + 8 + lVar9) = (uint64_t)(byte)local_270;
      *(uint64_t *)(lVar4 + 8 + lVar9) = (uint64_t)CONCAT11((byte)local_270,local_270._1_1_);
      uVar5 = CONCAT21(CONCAT11((byte)local_270,local_270._1_1_),local_270._2_1_);
      *(uint64_t *)(lVar4 + 8 + lVar9) = (uint64_t)uVar5;
      uVar10 = CONCAT31(uVar5,local_270._3_1_);
      *(uint64_t *)(lVar4 + 8 + lVar9) = (uint64_t)uVar10;
      uVar6 = CONCAT41(uVar10,(uint8_t)local_26c);
      *(uint64_t *)(lVar4 + 8 + lVar9) = (uint64_t)uVar6;
      uVar7 = CONCAT51(uVar6,local_26c._1_1_);
      *(uint64_t *)(lVar4 + 8 + lVar9) = (uint64_t)uVar7;
      uVar8 = CONCAT61(uVar7,local_26c._2_1_);
      *(uint64_t *)(lVar4 + 8 + lVar9) = (uint64_t)uVar8;
      *(uint64_t *)(lVar4 + 8 + lVar9) = CONCAT71(uVar8,local_26c._3_1_);
      *(void*)(lVar4 + 0x10 + lVar9) = 0;
      *(uint64_t *)(lVar4 + 0x10 + lVar9) = (uint64_t)(byte)local_268;
      *(uint64_t *)(lVar4 + 0x10 + lVar9) = (uint64_t)CONCAT11((byte)local_268,local_268._1_1_);
      uVar5 = CONCAT21(CONCAT11((byte)local_268,local_268._1_1_),local_268._2_1_);
      *(uint64_t *)(lVar4 + 0x10 + lVar9) = (uint64_t)uVar5;
      uVar10 = CONCAT31(uVar5,local_268._3_1_);
      *(uint64_t *)(lVar4 + 0x10 + lVar9) = (uint64_t)uVar10;
      uVar6 = CONCAT41(uVar10,local_264);
      *(uint64_t *)(lVar4 + 0x10 + lVar9) = (uint64_t)uVar6;
      uVar7 = CONCAT51(uVar6,local_263);
      *(uint64_t *)(lVar4 + 0x10 + lVar9) = (uint64_t)uVar7;
      uVar8 = CONCAT61(uVar7,local_262);
      *(uint64_t *)(lVar4 + 0x10 + lVar9) = (uint64_t)uVar8;
      *(uint64_t *)(lVar4 + 0x10 + lVar9) = CONCAT71(uVar8,local_261);
      *(void*)(lVar4 + 0x18 + lVar9) = 0;
      *(uint *)(lVar4 + 0x18 + lVar9) = (uint)local_260;
      *(uint *)(lVar4 + 0x18 + lVar9) = (uint)CONCAT11(local_260,local_25f);
      uVar5 = CONCAT21(CONCAT11(local_260,local_25f),local_25e);
      *(uint *)(lVar4 + 0x18 + lVar9) = (uint)uVar5;
      *(uint *)(lVar4 + 0x18 + lVar9) = CONCAT31(uVar5,local_25d);
      *(void*)(lVar4 + 0x1c + lVar9) = 0;
      *(uint *)(lVar4 + 0x1c + lVar9) = (uint)local_25c;
      *(uint *)(lVar4 + 0x1c + lVar9) = (uint)CONCAT11(local_25c,local_25b);
      uVar5 = CONCAT21(CONCAT11(local_25c,local_25b),local_25a);
      *(uint *)(lVar4 + 0x1c + lVar9) = (uint)uVar5;
      *(uint *)(lVar4 + 0x1c + lVar9) = CONCAT31(uVar5,local_259);
      *(void*)(lVar4 + 0x20 + lVar9) = 0;
      *(uint *)(lVar4 + 0x20 + lVar9) = (uint)local_258;
      *(uint *)(lVar4 + 0x20 + lVar9) = (uint)CONCAT11(local_258,local_257);
      uVar5 = CONCAT21(CONCAT11(local_258,local_257),local_256);
      *(uint *)(lVar4 + 0x20 + lVar9) = (uint)uVar5;
      *(uint *)(lVar4 + 0x20 + lVar9) = CONCAT31(uVar5,local_255);
      puVar12 = (uint64_t *)(lVar4 + lVar9 + 0x224);
      if (((byte *)(lVar4 + lVar9 + 0x24) < &local_54) && (&local_254 < puVar12)) {
        lVar13 = 0x13;
        do {
          *(ushort *)((int64_t)puVar1 + lVar13 * 2 + -2) =
               (&uStack_27a)[lVar13] << 8 | (&uStack_27a)[lVar13] >> 8;
          uVar2 = *(ushort *)((int64_t)&local_278 + lVar13 * 2);
          *(ushort *)((int64_t)puVar1 + lVar13 * 2) = uVar2 << 8 | uVar2 >> 8;
          lVar13 = lVar13 + 2;
        } while (lVar13 != 0x113);
      }
      else {
        lVar13 = 0;
        do {
          auVar19 = g_023de250;
          auVar18 = pshufb(*(uint8_t (*) [16])((int64_t)&local_254 + lVar13 * 2),g_023de250);
          *(uint8_t (*) [16])(lVar4 + lVar9 + 0x24 + lVar13 * 2) = auVar18;
          auVar19 = pshufb(*(uint8_t (*) [16])(auStack_244 + lVar13 * 2),auVar19);
          *(uint8_t (*) [16])(lVar4 + lVar9 + 0x34 + lVar13 * 2) = auVar19;
          lVar13 = lVar13 + 0x10;
        } while (lVar13 != 0x100);
      }
      plVar14 = (int64_t *)(lVar4 + lVar9 + 0x10);
      *puVar12 = 0;
      *puVar12 = (uint64_t)local_54;
      *puVar12 = (uint64_t)CONCAT11(local_54,local_53);
      uVar5 = CONCAT21(CONCAT11(local_54,local_53),local_52);
      *puVar12 = (uint64_t)uVar5;
      uVar10 = CONCAT31(uVar5,local_51);
      *puVar12 = (uint64_t)uVar10;
      uVar6 = CONCAT41(uVar10,local_50);
      *puVar12 = (uint64_t)uVar6;
      uVar7 = CONCAT51(uVar6,local_4f);
      *puVar12 = (uint64_t)uVar7;
      uVar8 = CONCAT61(uVar7,local_4e);
      *puVar12 = (uint64_t)uVar8;
      *puVar12 = CONCAT71(uVar8,local_4d);
      if (*(int *)(*this_ptr + 0x18) == 0) {
        lVar13 = *puVar1 + uVar15;
        uVar11 = (uint64_t)*puVar1 + *plVar14;
      }
      else {
        lVar13 = *plVar14;
        uVar11 = (uint64_t)*puVar1;
      }
      *(int64_t *)(lVar4 + 0x234 + lVar9) = lVar13;
      uVar15 = uVar15 + uVar11;
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(*this_ptr + 0x1c));
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 00ccfb30
// ============================================================
// Function: FUN_00ccfb30
// Address: 00ccfb30
// Size: 563 bytes
// Class: GNFileArchivePrivate

void FUN_00ccfb30(code *param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t local_60;
  char local_58;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar4 = *arg1;
  if (*(int *)(lVar4 + 0x1c) != 0) {
    if (param_1 == 0x0) {
      lVar6 = 0x20;
      uVar5 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar4 + 0x20) + 0x10);
        if ((*(int64_t *)(lVar1 + -0x18 + lVar6) != 0) && (*(int *)(lVar1 + lVar6) == param_2)) {
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
          lVar4 = *arg1;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x23c;
      } while (uVar5 < *(uint *)(lVar4 + 0x1c));
    }
    else {
      lVar6 = 0;
      uVar5 = 0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x20) + 0x10);
        if (((*(int64_t *)(lVar4 + 8 + lVar6) != 0) && (*(int *)(lVar4 + 0x20 + lVar6) == param_2))
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
        lVar4 = *arg1;
        lVar6 = lVar6 + 0x23c;
      } while (uVar5 < *(uint *)(lVar4 + 0x1c));
    }
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00ccf640
// ============================================================
// Function: FUN_00ccf640
// Address: 00ccf640
// Size: 505 bytes
// Class: GNFileArchivePrivate
// String references:
//   "GNFileArchivePrivate"

void FUN_00ccf640(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_98;
  int64_t local_88;
  int64_t local_80;
  
  if ((g_02774e80 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02774dd0 = FUN_00d4fe50();
    g_02774db8 = "GNFileArchivePrivate";
    g_02774dc0 = 0x50;
    g_02774dc8 = FUN_00cdb4a0;
    g_02774dd8 = 0;
    ram_0000000002774de0 = 0;
    g_02774de8 = 0;
    g_02774e60 = 0;
    ram_0000000002774e68 = 0;
    g_02774e70 = 0;
    g_02774e72 = 1;
    g_02774df0 = 0;
    ram_0000000002774df8 = 0;
    g_02774e00 = 0;
    ram_0000000002774e08 = 0;
    g_02774e10 = 0;
    ram_0000000002774e18 = 0;
    g_02774e20 = 0;
    ram_0000000002774e28 = 0;
    g_02774e30 = 0;
    ram_0000000002774e38 = 0;
    g_02774e40 = 0;
    ram_0000000002774e48 = 0;
    g_02774e50 = 0;
    ram_0000000002774e58 = 0;
    g_02774e7b = 0;
    g_02774e73 = 0;
    ___cxa_guard_release();
  }
  if (g_02774e73 == '\0') {
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



// ============================================================
// 00cdb840
// ============================================================
// Function: FUN_00cdb840
// Address: 00cdb840
// Size: 854 bytes
// Class: GNFileArchivePrivate
// String references:
//   "GNFileArchivePrivate"

void FUN_00cdb840(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0256dc20;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02774e73 == '\0') {
    FUN_00cdbc30();
    FUN_00e87980();
  }
  FUN_00cdbdc0();
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_02774e73 == '\0') {
    FUN_00cdc080();
    FUN_00e87980();
  }
  FUN_00cdc210();
  FUN_00cdc4d0();
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_02774e73 == '\0') {
    FUN_00cdc790();
    FUN_00e87980();
  }
  FUN_00cdc920();
  return;
}

