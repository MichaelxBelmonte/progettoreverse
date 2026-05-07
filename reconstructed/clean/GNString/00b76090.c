// Function: FUN_00b76090
// Address: 00b76090
// Size: 1377 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00b76090(int param_1,int param_2,uint param_3)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  byte bVar25;
  uint uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint uVar29;
  int64_t arg1;
  uint uVar30;
  uint uVar31;
  int64_t this_ptr;
  uint uVar32;
  uint64_t uVar33;
  uint uVar34;
  int iVar35;
  uint64_t uVar36;
  uint uVar37;
  uint uVar38;
  bool bVar39;
  float fVar40;
  uint8_t in_XMM0 [16];
  uint8_t auVar47 [12];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar48 [16];
  float fVar49;
  uint uVar52;
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint uVar53;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  int iVar59;
  int iVar60;
  uint8_t auVar61 [16];
  uint8_t auVar62 [16];
  uint8_t auVar63 [16];
  uint64_t extraout_XMM0_Qb;
  
  lVar1 = g_02765700;
  auVar47 = in_XMM0._4_12_;
  if (*(int64_t *)(this_ptr + 0x78) < 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    auVar46._0_8_ = FUN_00cc78b0();
    auVar46._8_8_ = extraout_XMM0_Qb;
    auVar47 = auVar46._4_12_;
    if (lVar1 != 0) {
      auVar48._0_8_ = FUN_00d50b20();
      auVar48._8_8_ = extraout_XMM0_Qb_00;
      auVar47 = auVar48._4_12_;
    }
  }
  uVar3 = *(uint *)(this_ptr + 0x54);
  uVar37 = 0x18;
  if (*(uint *)(this_ptr + 0x50) != 0x14) {
    uVar37 = *(uint *)(this_ptr + 0x50);
  }
  uVar2 = uVar37 - 1;
  auVar61._0_4_ = (float)uVar2;
  auVar61._4_12_ = auVar47;
  fVar40 = (float)_exp2f(auVar61._0_8_);
  uVar20 = _UNK_0241133c;
  uVar19 = _UNK_02411338;
  uVar18 = _UNK_02411334;
  uVar17 = g_02411330;
  iVar16 = _UNK_023de31c;
  iVar15 = _UNK_023de318;
  iVar14 = _UNK_023de314;
  iVar13 = g_023de310;
  iVar12 = _UNK_023d84fc;
  iVar11 = _UNK_023d84f8;
  iVar10 = _UNK_023d84f4;
  iVar9 = g_023d84f0;
  auVar46 = g_023d84e0;
  iVar8 = _UNK_023b2d5c;
  iVar7 = _UNK_023b2d58;
  iVar6 = _UNK_023b2d54;
  iVar5 = g_023b2d50;
  if ((0 < (int)param_3) && (uVar3 != 0)) {
    fVar40 = g_02390124 / fVar40;
    uVar28 = (uint64_t)(param_1 * uVar3 * uVar37 >> 3);
    uVar34 = *(int *)(this_ptr + 0x80) * uVar37;
    uVar21 = 1 << ((byte)uVar2 & 0x1f);
    uVar22 = -2 << ((byte)uVar2 & 0x1f);
    uVar23 = (uVar2 >> 3) + 1;
    fVar49 = fVar40 * 0.0;
    uVar26 = uVar23 & 0xfffffff8;
    uVar27 = 0;
    do {
      lVar1 = uVar27 + (int64_t)param_2;
      if (uVar37 == 0) {
        uVar33 = 0;
        if (uVar3 != 1) {
          do {
            lVar4 = *(int64_t *)(arg1 + uVar33 * 8);
            if (lVar4 != 0) {
              *(float *)(lVar4 + lVar1 * 4) = fVar49;
            }
            lVar4 = *(int64_t *)(arg1 + 8 + uVar33 * 8);
            if (lVar4 != 0) {
              *(float *)(lVar4 + lVar1 * 4) = fVar49;
            }
            uVar33 = uVar33 + 2;
          } while ((uVar3 & 0xfffffffe) != uVar33);
        }
        if (((uVar3 & 1) != 0) && (lVar4 = *(int64_t *)(arg1 + uVar33 * 8), lVar4 != 0)) {
          *(float *)(lVar4 + lVar1 * 4) = fVar49;
        }
      }
      else if (uVar2 < 0x38) {
        uVar33 = 0;
        do {
          uVar29 = 0;
          uVar38 = (uint)uVar28;
          if (uVar38 <= uVar34) {
            uVar31 = 0;
            lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x90) + 0x10);
            iVar24 = 0;
            if (7 < uVar2) {
              uVar31 = 0;
              iVar24 = 0;
              iVar35 = -(uVar23 & 0xfffffffe);
              uVar29 = uVar37;
              do {
                uVar32 = ~(-1 << ((byte)uVar29 & 0x1f));
                if (7 < uVar29) {
                  uVar32 = 0xff;
                }
                uVar30 = ~(-1 << ((byte)(uVar29 - 8) & 0x1f));
                if (7 < uVar29 - 8) {
                  uVar30 = 0xff;
                }
                uVar31 = (uVar30 & *(byte *)(lVar4 + (uint64_t)((int)uVar28 + 1))) <<
                         ((byte)iVar24 + 8 & 0x1f) |
                         (uVar32 & *(byte *)(lVar4 + uVar28)) << ((byte)iVar24 & 0x1f) | uVar31;
                iVar24 = iVar24 + 0x10;
                uVar28 = (uint64_t)((int)uVar28 + 2);
                uVar29 = uVar29 - 0x10;
                iVar35 = iVar35 + 2;
              } while (iVar35 != 0);
            }
            if ((uVar23 & 1) != 0) {
              uVar29 = ~(-1 << ((byte)(uVar37 - iVar24) & 0x1f));
              if (7 < uVar37 - iVar24) {
                uVar29 = 0xff;
              }
              uVar31 = uVar31 | (*(byte *)(lVar4 + uVar28) & uVar29) << ((byte)iVar24 & 0x1f);
            }
            uVar28 = (uint64_t)(uVar38 + uVar23);
            uVar29 = 0;
            if ((uVar31 & uVar21) != 0) {
              uVar29 = uVar22;
            }
            uVar29 = uVar29 | uVar31;
          }
          lVar4 = *(int64_t *)(arg1 + uVar33 * 8);
          if (lVar4 != 0) {
            *(float *)(lVar4 + lVar1 * 4) = (float)(int)uVar29 * fVar40;
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 != uVar3);
      }
      else {
        uVar33 = 0;
        do {
          uVar29 = 0;
          uVar38 = (uint)uVar28;
          if (uVar38 <= uVar34) {
            lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x90) + 0x10);
            uVar31 = 0;
            uVar36 = uVar28;
            uVar29 = 0;
            if (CARRY4(uVar38,uVar2 >> 3)) {
LAB_00b7655a:
              uVar32 = uVar37 - uVar29;
              do {
                bVar25 = (byte)uVar32;
                bVar39 = 7 < uVar32;
                uVar32 = uVar32 - 8;
                uVar30 = ~(-1 << (bVar25 & 0x1f));
                if (bVar39) {
                  uVar30 = 0xff;
                }
                uVar31 = uVar31 | (uVar30 & *(byte *)(lVar4 + uVar36)) << ((byte)uVar29 & 0x1f);
                uVar29 = uVar29 + 8;
                uVar36 = (uint64_t)((int)uVar36 + 1);
              } while (uVar29 < uVar37);
            }
            else {
              uVar36 = (uint64_t)(uVar38 + uVar26);
              auVar61 = (uint8_t  [16])0x0;
              auVar48 = ZEXT816(0);
              iVar24 = g_023d84d0;
              iVar35 = _UNK_023d84d4;
              iVar59 = _UNK_023d84d8;
              iVar60 = _UNK_023d84dc;
              uVar29 = uVar26;
              do {
                uVar31 = uVar37 - iVar24;
                uVar32 = uVar37 - iVar35;
                uVar30 = uVar37 - iVar59;
                uVar52 = uVar37 - iVar60;
                uVar53 = uVar37 - (iVar24 + iVar13);
                uVar56 = uVar37 - (iVar35 + iVar14);
                uVar57 = uVar37 - (iVar59 + iVar15);
                uVar58 = uVar37 - (iVar60 + iVar16);
                auVar50._0_4_ =
                     -(uint)(((uVar17 < uVar31) * uVar17 | (uVar17 >= uVar31) * uVar31) == uVar31);
                auVar50._4_4_ =
                     -(uint)(((uVar18 < uVar32) * uVar18 | (uVar18 >= uVar32) * uVar32) == uVar32);
                auVar50._8_4_ =
                     -(uint)(((uVar19 < uVar30) * uVar19 | (uVar19 >= uVar30) * uVar30) == uVar30);
                auVar50._12_4_ =
                     -(uint)(((uVar20 < uVar52) * uVar20 | (uVar20 >= uVar52) * uVar52) == uVar52);
                auVar63._4_4_ = -(int)(float)(uVar32 * 0x800000 + iVar6);
                auVar63._0_4_ = -(int)(float)(uVar31 * 0x800000 + iVar5);
                auVar63._8_4_ = -(int)(float)(uVar30 * 0x800000 + iVar7);
                auVar63._12_4_ = -(int)(float)(uVar52 * 0x800000 + iVar8);
                auVar42._8_4_ = 0xffffffff;
                auVar42._0_8_ = 0xffffffffffffffff;
                auVar42._12_4_ = 0xffffffff;
                auVar50 = blendvps(auVar46,auVar63 ^ auVar42,auVar50);
                auVar41._0_4_ =
                     -(uint)(((uVar17 < uVar53) * uVar17 | (uVar17 >= uVar53) * uVar53) == uVar53);
                auVar41._4_4_ =
                     -(uint)(((uVar18 < uVar56) * uVar18 | (uVar18 >= uVar56) * uVar56) == uVar56);
                auVar41._8_4_ =
                     -(uint)(((uVar19 < uVar57) * uVar19 | (uVar19 >= uVar57) * uVar57) == uVar57);
                auVar41._12_4_ =
                     -(uint)(((uVar20 < uVar58) * uVar20 | (uVar20 >= uVar58) * uVar58) == uVar58);
                auVar62._4_4_ = -(int)(float)(uVar56 * 0x800000 + iVar6);
                auVar62._0_4_ = -(int)(float)(uVar53 * 0x800000 + iVar5);
                auVar62._8_4_ = -(int)(float)(uVar57 * 0x800000 + iVar7);
                auVar62._12_4_ = -(int)(float)(uVar58 * 0x800000 + iVar8);
                auVar54._8_4_ = 0xffffffff;
                auVar54._0_8_ = 0xffffffffffffffff;
                auVar54._12_4_ = 0xffffffff;
                auVar54 = blendvps(auVar46,auVar62 ^ auVar54,auVar41);
                auVar42 = pmovzxbd(auVar41,*(void*)(lVar4 + uVar28));
                auVar51._0_4_ = auVar50._0_4_ & auVar42._0_4_;
                auVar51._4_4_ = auVar50._4_4_ & auVar42._4_4_;
                auVar51._8_4_ = auVar50._8_4_ & auVar42._8_4_;
                auVar51._12_4_ = auVar50._12_4_ & auVar42._12_4_;
                auVar42 = pmovzxbd(auVar42,*(void*)(lVar4 + 4 + uVar28));
                auVar55._0_4_ = auVar54._0_4_ & auVar42._0_4_;
                auVar55._4_4_ = auVar54._4_4_ & auVar42._4_4_;
                auVar55._8_4_ = auVar54._8_4_ & auVar42._8_4_;
                auVar55._12_4_ = auVar54._12_4_ & auVar42._12_4_;
                auVar43._0_4_ = (int)(float)(iVar24 * 0x800000 + iVar5);
                auVar43._4_4_ = (int)(float)(iVar35 * 0x800000 + iVar6);
                auVar43._8_4_ = (int)(float)(iVar59 * 0x800000 + iVar7);
                auVar43._12_4_ = (int)(float)(iVar60 * 0x800000 + iVar8);
                auVar42 = pmulld(auVar43,auVar51);
                auVar61 = auVar61 | auVar42;
                auVar44._0_4_ = (int)(float)((iVar24 + iVar13) * 0x800000 + iVar5);
                auVar44._4_4_ = (int)(float)((iVar35 + iVar14) * 0x800000 + iVar6);
                auVar44._8_4_ = (int)(float)((iVar59 + iVar15) * 0x800000 + iVar7);
                auVar44._12_4_ = (int)(float)((iVar60 + iVar16) * 0x800000 + iVar8);
                auVar42 = pmulld(auVar44,auVar55);
                auVar48 = auVar48 | auVar42;
                iVar24 = iVar24 + iVar9;
                iVar35 = iVar35 + iVar10;
                iVar59 = iVar59 + iVar11;
                iVar60 = iVar60 + iVar12;
                uVar28 = (uint64_t)((int)uVar28 + 8);
                uVar29 = uVar29 - 8;
              } while (uVar29 != 0);
              auVar48 = auVar48 | auVar61;
              auVar45._0_8_ = auVar48._8_8_;
              auVar45._8_4_ = auVar48._8_4_;
              auVar45._12_4_ = auVar48._12_4_;
              uVar31 = SUB164(auVar45 | auVar48,4) | SUB164(auVar45 | auVar48,0);
              uVar29 = uVar26 * 8;
              if (uVar23 != uVar26) goto LAB_00b7655a;
            }
            uVar28 = (uint64_t)(uVar38 + uVar23);
            uVar29 = 0;
            if ((uVar31 & uVar21) != 0) {
              uVar29 = uVar22;
            }
            uVar29 = uVar29 | uVar31;
          }
          lVar4 = *(int64_t *)(arg1 + uVar33 * 8);
          if (lVar4 != 0) {
            *(float *)(lVar4 + lVar1 * 4) = (float)(int)uVar29 * fVar40;
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 != uVar3);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != param_3);
  }
  return;
}

