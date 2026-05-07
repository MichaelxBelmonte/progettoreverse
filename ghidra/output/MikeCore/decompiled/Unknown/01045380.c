// Function: FUN_01045380
// Address: 01045380
// Size: 1376 bytes
// Class: Unknown


void FUN_01045380(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
                 longlong param_4,undefined8 param_5,undefined8 param_6,ulonglong param_7,
                 ulonglong param_8,ulonglong param_9,ulonglong param_10,ulonglong param_11,
                 ulonglong param_12,ulonglong param_13,ulonglong param_14,undefined8 param_15,
                 undefined8 param_16)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint unaff_EBX;
  uint unaff_EBP;
  undefined1 (*unaff_RSI) [16];
  undefined1 (*unaff_RDI) [16];
  undefined1 (*in_R11) [16];
  undefined8 *unaff_R14;
  undefined8 *unaff_R15;
  bool bVar33;
  undefined1 auVar34 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [16];
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined1 in_ZMM8 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 local_res18 [16];
  
  auVar61 = in_R11[2];
  auVar35 = ZEXT1664((undefined1  [16])0x0);
  auVar66 = param_1[-8];
  auVar58 = vpaddb_avx(in_ZMM1._0_16_,auVar61);
  auVar65 = vpaddb_avx(auVar58,auVar61);
  auVar36 = vpaddb_avx(auVar65,auVar61);
  auVar50 = vpaddb_avx(auVar36,auVar61);
  auVar34 = vpaddb_avx(auVar50,auVar61);
  auVar5 = in_ZMM1._0_16_ ^ auVar66;
  local_res18 = (undefined1  [16])0x0;
  while( true ) {
    param_2 = param_2 - 6;
    bVar33 = unaff_EBX < 0xfa000000;
    unaff_EBX = unaff_EBX + 0x6000000;
    if (bVar33) {
      uVar37 = *(ulonglong *)(param_4 + -0x20);
      uVar38 = *(ulonglong *)(param_4 + -0x18);
      auVar61 = vpaddb_avx(auVar34,auVar61);
    }
    else {
      auVar61 = *in_R11;
      auVar65 = vpshufb_avx(in_ZMM1._0_16_,auVar61);
      auVar50 = in_R11[3];
      auVar58 = vpaddd_avx(auVar65,in_R11[4]);
      auVar65 = vpaddd_avx(auVar65,auVar50);
      uVar37 = *(ulonglong *)(param_4 + -0x20);
      uVar38 = *(ulonglong *)(param_4 + -0x18);
      auVar36 = vpaddd_avx(auVar58,auVar50);
      auVar58 = vpshufb_avx(auVar58,auVar61);
      auVar34 = vpaddd_avx(auVar65,auVar50);
      auVar65 = vpshufb_avx(auVar65,auVar61);
      auVar62 = vpaddd_avx(auVar36,auVar50);
      auVar36 = vpshufb_avx(auVar36,auVar61);
      auVar44 = vpaddd_avx(auVar34,auVar50);
      auVar50 = vpshufb_avx(auVar34,auVar61);
      auVar34 = vpshufb_avx(auVar62,auVar61);
      auVar61 = vpshufb_avx(auVar44,auVar61);
    }
    *param_3 = auVar61;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = unaff_XMM7_Qa;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar38;
    auVar61 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar62 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar61 = auVar61 ^ auVar44 << uVar7;
      }
    }
    auVar62 = param_1[-7];
    auVar39._8_8_ = 0;
    auVar39._0_8_ = unaff_XMM7_Qb;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar37;
    auVar44 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar39 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar44 = auVar44 ^ auVar45 << uVar7;
      }
    }
    auVar39 = aesenc(auVar5,auVar62);
    auVar51._8_8_ = 0;
    auVar51._0_8_ = unaff_XMM7_Qa;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar37;
    auVar5 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar51 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar5 = auVar5 ^ auVar56 << uVar7;
      }
    }
    auVar45 = aesenc(auVar58 ^ auVar66,auVar62);
    auVar59._8_8_ = 0;
    auVar59._0_8_ = unaff_XMM7_Qb;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar38;
    auVar58 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar59 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar58 = auVar58 ^ auVar63 << uVar7;
      }
    }
    auVar51 = aesenc(auVar65 ^ auVar66,auVar62);
    auVar56 = aesenc(auVar36 ^ auVar66,auVar62);
    auVar36._8_8_ = 0;
    auVar36._0_8_ = param_7;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = *(ulonglong *)(param_4 + -0x10);
    auVar65 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar36 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar65 = auVar65 ^ auVar40 << uVar7;
      }
    }
    auVar59 = aesenc(auVar50 ^ auVar66,auVar62);
    auVar36 = param_1[-6];
    auVar46._8_8_ = 0;
    auVar46._0_8_ = param_7;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = *(ulonglong *)(param_4 + -8);
    auVar50 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar46 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar50 = auVar50 ^ auVar52 << uVar7;
      }
    }
    auVar62 = aesenc(auVar34 ^ auVar66,auVar62);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = param_8;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = *(ulonglong *)(param_4 + -0x10);
    auVar66 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar34 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar66 = auVar66 ^ auVar57 << uVar7;
      }
    }
    unaff_R14 = (undefined8 *)((longlong)unaff_R14 + (-(ulonglong)(unaff_R14 <= unaff_R15) & 0x60));
    auVar39 = aesenc(auVar39,auVar36);
    auVar41._8_8_ = 0;
    auVar41._0_8_ = param_8;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = *(ulonglong *)(param_4 + -8);
    auVar34 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar41 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar34 = auVar34 ^ auVar47 << uVar7;
      }
    }
    auVar45 = aesenc(auVar45,auVar36);
    unaff_XMM7_Qa = swap_bytes(unaff_R14[0xb]);
    auVar51 = aesenc(auVar51,auVar36);
    unaff_XMM7_Qb = swap_bytes(unaff_R14[10]);
    auVar56 = aesenc(auVar56,auVar36);
    auVar59 = aesenc(auVar59,auVar36);
    auVar63 = aesenc(auVar62,auVar36);
    auVar36 = param_1[-5];
    auVar53._8_8_ = 0;
    auVar53._0_8_ = param_9;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = *(ulonglong *)(param_4 + 0x10);
    auVar62 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar53 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar62 = auVar62 ^ auVar60 << uVar7;
      }
    }
    auVar40 = aesenc(auVar39,auVar36);
    auVar42._8_8_ = 0;
    auVar42._0_8_ = param_9;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = *(ulonglong *)(param_4 + 0x18);
    auVar39 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar42 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar39 = auVar39 ^ auVar48 << uVar7;
      }
    }
    auVar46 = aesenc(auVar45,auVar36);
    auVar54._8_8_ = 0;
    auVar54._0_8_ = param_10;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = *(ulonglong *)(param_4 + 0x10);
    auVar45 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar54 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar45 = auVar45 ^ auVar64 << uVar7;
      }
    }
    auVar52 = aesenc(auVar51,auVar36);
    auVar43._8_8_ = 0;
    auVar43._0_8_ = param_10;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = *(ulonglong *)(param_4 + 0x18);
    auVar51 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar43 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar51 = auVar51 ^ auVar49 << uVar7;
      }
    }
    auVar57 = aesenc(auVar56,auVar36);
    auVar59 = aesenc(auVar59,auVar36);
    auVar63 = aesenc(auVar63,auVar36);
    auVar36 = param_1[-4];
    auVar55._8_8_ = 0;
    auVar55._0_8_ = param_11;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(param_4 + 0x20);
    auVar56 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar55 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar56 = auVar56 ^ auVar10 << uVar7;
      }
    }
    auVar41 = aesenc(auVar40,auVar36);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = param_11;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = *(ulonglong *)(param_4 + 0x28);
    auVar40 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar19 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar40 = auVar40 ^ auVar23 << uVar7;
      }
    }
    auVar47 = aesenc(auVar46,auVar36);
    param_7 = swap_bytes(unaff_R14[9]);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = param_12;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(ulonglong *)(param_4 + 0x20);
    auVar46 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar13 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar46 = auVar46 ^ auVar16 << uVar7;
      }
    }
    auVar53 = aesenc(auVar52,auVar36);
    param_8 = swap_bytes(unaff_R14[8]);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = param_12;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *(ulonglong *)(param_4 + 0x28);
    auVar52 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar27 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar52 = auVar52 ^ auVar30 << uVar7;
      }
    }
    auVar57 = aesenc(auVar57,auVar36);
    auVar60 = aesenc(auVar59,auVar36);
    auVar63 = aesenc(auVar63,auVar36);
    auVar36 = param_1[-3];
    auVar8._8_8_ = 0;
    auVar8._0_8_ = param_13;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulonglong *)(param_4 + 0x40);
    auVar59 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar8 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar59 = auVar59 ^ auVar11 << uVar7;
      }
    }
    auVar42 = aesenc(auVar41,auVar36);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = param_13;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulonglong *)(param_4 + 0x48);
    auVar41 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar20 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar41 = auVar41 ^ auVar24 << uVar7;
      }
    }
    auVar48 = aesenc(auVar47,auVar36);
    param_9 = swap_bytes(unaff_R14[7]);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = param_14;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(ulonglong *)(param_4 + 0x40);
    auVar47 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar14 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar47 = auVar47 ^ auVar17 << uVar7;
      }
    }
    auVar6._8_8_ = param_16;
    auVar6._0_8_ = param_15;
    auVar6 = in_ZMM8._0_16_ ^ auVar35._0_16_ ^ local_res18 ^ auVar6;
    auVar54 = aesenc(auVar53,auVar36);
    param_10 = swap_bytes(unaff_R14[6]);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = param_14;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = *(ulonglong *)(param_4 + 0x48);
    auVar53 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar28 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar53 = auVar53 ^ auVar31 << uVar7;
      }
    }
    auVar57 = aesenc(auVar57,auVar36);
    auVar60 = aesenc(auVar60,auVar36);
    auVar64 = aesenc(auVar63,auVar36);
    auVar36 = param_1[-2];
    uVar37 = auVar6._0_8_;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar37;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = *(ulonglong *)(param_4 + 0x58);
    auVar63 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar21 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar63 = auVar63 ^ auVar25 << uVar7;
      }
    }
    auVar43 = aesenc(auVar42,auVar36);
    uVar38 = auVar6._8_8_;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar38;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *(ulonglong *)(param_4 + 0x50);
    auVar42 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar15 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar42 = auVar42 ^ auVar18 << uVar7;
      }
    }
    auVar49 = aesenc(auVar48,auVar36);
    param_11 = swap_bytes(unaff_R14[5]);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar37;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)(param_4 + 0x50);
    auVar48 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar9 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar48 = auVar48 ^ auVar12 << uVar7;
      }
    }
    auVar55 = aesenc(auVar54,auVar36);
    param_12 = swap_bytes(unaff_R14[4]);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar38;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *(ulonglong *)(param_4 + 0x58);
    auVar54 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar29 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar54 = auVar54 ^ auVar32 << uVar7;
      }
    }
    auVar57 = aesenc(auVar57,auVar36);
    auVar60 = aesenc(auVar60,auVar36);
    auVar64 = aesenc(auVar64,auVar36);
    auVar42 = auVar44 ^ auVar61 ^ auVar50 ^ auVar66 ^ auVar39 ^ auVar45 ^ auVar40 ^ auVar46 ^
              auVar41 ^ auVar47 ^ auVar63 ^ auVar42;
    auVar66 = param_1[-1];
    auVar36 = vpslldq_avx(auVar42,8);
    auVar44 = aesenc(auVar43,auVar66);
    auVar39 = aesenc(auVar49,auVar66);
    auVar36 = auVar5 ^ auVar65 ^ auVar62 ^ auVar56 ^ auVar59 ^ auVar48 ^ auVar36;
    param_13 = swap_bytes(unaff_R14[3]);
    auVar62 = aesenc(auVar55,auVar66);
    param_14 = swap_bytes(unaff_R14[2]);
    auVar61 = vpalignr_avx(auVar36,auVar36,8);
    auVar65._8_8_ = 0;
    auVar65._0_8_ = auVar36._0_8_;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = *(ulonglong *)(in_R11[1] + 8);
    auVar5 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar65 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar5 = auVar5 ^ auVar50 << uVar7;
      }
    }
    auVar45 = aesenc(auVar57,auVar66);
    auVar56 = aesenc(auVar60,auVar66);
    auVar65 = *param_1;
    auVar59 = aesenc(auVar64,auVar66);
    auVar36 = aesenc(auVar44,auVar65);
    auVar66 = param_1[1];
    auVar50 = aesenc(auVar39,auVar65);
    local_res18 = vpsrldq_avx(auVar42,8);
    auVar62 = aesenc(auVar62,auVar65);
    local_res18 = auVar58 ^ auVar34 ^ auVar51 ^ auVar52 ^ auVar53 ^ auVar54 ^ local_res18;
    auVar58 = aesenc(auVar45,auVar65);
    auVar5 = auVar5 ^ auVar61;
    param_15 = swap_bytes(unaff_R14[1]);
    auVar61 = aesenc(auVar56,auVar65);
    param_16 = swap_bytes(*unaff_R14);
    auVar65 = aesenc(auVar59,auVar65);
    auVar34 = param_1[2];
    if (10 < unaff_EBP) {
      auVar36 = aesenc(auVar36,auVar66);
      auVar50 = aesenc(auVar50,auVar66);
      auVar62 = aesenc(auVar62,auVar66);
      auVar58 = aesenc(auVar58,auVar66);
      auVar61 = aesenc(auVar61,auVar66);
      auVar65 = aesenc(auVar65,auVar66);
      auVar36 = aesenc(auVar36,auVar34);
      auVar50 = aesenc(auVar50,auVar34);
      auVar62 = aesenc(auVar62,auVar34);
      auVar58 = aesenc(auVar58,auVar34);
      auVar61 = aesenc(auVar61,auVar34);
      auVar66 = param_1[3];
      auVar65 = aesenc(auVar65,auVar34);
      auVar34 = param_1[4];
      if (unaff_EBP != 0xb) {
        auVar36 = aesenc(auVar36,auVar66);
        auVar50 = aesenc(auVar50,auVar66);
        auVar62 = aesenc(auVar62,auVar66);
        auVar58 = aesenc(auVar58,auVar66);
        auVar61 = aesenc(auVar61,auVar66);
        auVar65 = aesenc(auVar65,auVar66);
        auVar36 = aesenc(auVar36,auVar34);
        auVar50 = aesenc(auVar50,auVar34);
        auVar62 = aesenc(auVar62,auVar34);
        auVar58 = aesenc(auVar58,auVar34);
        auVar61 = aesenc(auVar61,auVar34);
        auVar66 = param_1[5];
        auVar65 = aesenc(auVar65,auVar34);
        auVar34 = param_1[6];
      }
    }
    auVar44 = aesenc(auVar36,auVar66);
    auVar36 = vpalignr_avx(auVar5,auVar5,8);
    in_ZMM8 = ZEXT1664(auVar36);
    auVar36 = aesenc(auVar50,auVar66);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = auVar5._0_8_;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = *(ulonglong *)(in_R11[1] + 8);
    auVar5 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar22 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar5 = auVar5 ^ auVar26 << uVar7;
      }
    }
    auVar35 = ZEXT1664(auVar5);
    auVar50 = aesenc(auVar62,auVar66);
    auVar45 = aesenc(auVar58,auVar66);
    pauVar1 = unaff_RDI + 2;
    auVar51 = aesenc(auVar61,auVar66);
    pauVar2 = unaff_RDI + 3;
    auVar56 = aesenc(auVar65,auVar66);
    pauVar3 = unaff_RDI + 4;
    pauVar4 = unaff_RDI + 5;
    auVar5 = *param_3;
    in_ZMM1 = ZEXT1664(auVar5);
    auVar62 = aesenclast(auVar44,auVar34 ^ *unaff_RDI);
    auVar61 = in_R11[2];
    auVar44 = aesenclast(auVar36,auVar34 ^ unaff_RDI[1]);
    auVar58 = vpaddb_avx(auVar5,auVar61);
    unaff_RDI = unaff_RDI + 6;
    auVar39 = aesenclast(auVar50,auVar34 ^ *pauVar1);
    auVar65 = vpaddb_avx(auVar58,auVar61);
    auVar66 = param_1[-8];
    auVar45 = aesenclast(auVar45,auVar34 ^ *pauVar2);
    auVar36 = vpaddb_avx(auVar65,auVar61);
    auVar51 = aesenclast(auVar51,auVar34 ^ *pauVar3);
    auVar50 = vpaddb_avx(auVar36,auVar61);
    auVar56 = aesenclast(auVar56,auVar34 ^ *pauVar4);
    auVar34 = vpaddb_avx(auVar50,auVar61);
    if (param_2 < 6) break;
    *unaff_RSI = auVar62;
    auVar5 = auVar5 ^ auVar66;
    unaff_RSI[1] = auVar44;
    unaff_RSI[2] = auVar39;
    unaff_RSI[3] = auVar45;
    unaff_RSI[4] = auVar51;
    unaff_RSI[5] = auVar56;
    unaff_RSI = unaff_RSI + 6;
  }
  return;
}


