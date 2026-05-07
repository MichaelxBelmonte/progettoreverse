// Function: FUN_015b5100
// Address: 015b5100
// Size: 2419 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015b5100(void)

{
  uint64_t uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  void*puVar8;
  void*puVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int iVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t uVar16;
  void*arg1;
  void*this_ptr;
  uint uVar17;
  bool bVar18;
  uint64_t uVar19;
  uint32_t uVar20;
  float fVar21;
  uint64_t extraout_XMM0_Qa;
  uint8_t in_XMM0 [16];
  uint64_t extraout_XMM0_Qa_00;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  float fVar24;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  int local_60;
  int local_5c;
  uint64_t local_50;
  char local_48;
  uint64_t local_38;
  
  if ((g_028ad520 == 0) || (g_028ad529 == '\0')) {
    FUN_00e8cb50();
    if (g_028ad520 == 0) {
      FUN_00e7d780();
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_025683c0;
      pcVar4 = g_025683d8;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025683c0;
      (*pcVar4)();
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e7d0();
      FUN_00c8e7d0();
      fVar24 = g_02390124;
      do {
        FUN_015c24c0((double)fVar24,0x10);
        bVar18 = local_5c != 0xe &&
                 ((local_5c != 0xd && (local_5c != 0xb && local_5c != 7)) &&
                 (1 < local_60 - 0xdU && (local_60 - 7U & 0xfffffffb) != 0));
        if ((g_02410f90 < fVar24) && (fVar24 < g_02410f94)) {
          local_60 = 0x2d;
          local_5c = 0x20;
          bVar18 = true;
        }
        uVar10 = FUN_00e7bdb0();
        uVar12 = extraout_XMM0_Qa;
        if (bVar18) {
          uVar10 = FUN_00e7bcc0();
          uVar12 = extraout_XMM0_Qa_00;
        }
        iVar15 = *(int *)(puVar9 + 3);
        uVar12 = FUN_00c8e340(uVar12,1);
        *(void*)(puVar9[2] + (int64_t)iVar15) = uVar10;
        iVar15 = *(int *)(puVar8 + 3);
        FUN_00c8e340(uVar12,1);
        *(float *)(puVar8[2] + (int64_t)iVar15) = fVar24;
        fVar24 = fVar24 + g_02410f98;
      } while (fVar24 < g_02410f9c);
      iVar15 = *(int *)(puVar9 + 3);
      iVar7 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar7 = iVar15;
      }
      FUN_00c8e690();
      if ((local_48 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar5 = g_028ad520;
      if ((g_028ad520 != local_50) && (g_028ad520 = local_50, lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        if (g_028ad528 == '\0') {
          g_028ad528 = '\x01';
          FUN_00e8cb90();
        }
        if (local_50 != 0 && lVar5 == local_50) {
          FUN_00d50b20();
        }
      }
      uVar17 = iVar7 >> 3;
      FUN_00c8e690();
      if ((local_48 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar5 = g_028ad530;
      if ((g_028ad530 != local_50) && (g_028ad530 = local_50, lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        if (g_028ad538 == '\0') {
          g_028ad538 = '\x01';
          FUN_00e8cb90();
        }
        if (local_50 != 0 && lVar5 == local_50) {
          FUN_00d50b20();
        }
      }
      if (7 < iVar15) {
        uVar19 = 0;
LAB_015b551f:
        do {
          fVar24 = *(float *)(puVar8[2] + uVar19 * 4);
          iVar15 = *(int *)(puVar9[2] + uVar19 * 8);
          uVar2 = *(uint *)(puVar9[2] + 4 + uVar19 * 8);
          local_50 = FUN_00e7bdb0();
          local_38 = FUN_00e7bdb0();
          if (uVar2 == 0) {
LAB_015b5583:
            if (local_38 >> 0x20 == 0) {
LAB_015b55a5:
              local_38 = FUN_00e7bcc0();
              uVar11 = uVar19;
              do {
                if ((int64_t)uVar11 < 1) goto LAB_015b55e5;
                uVar3 = *(uint *)(puVar9[2] + -4 + uVar11 * 8);
                uVar11 = uVar11 - 1;
              } while ((uVar3 == 0) || (uVar3 == uVar2));
              local_38 = CONCAT44(uVar3,*(void*)(puVar9[2] + (uVar11 & 0xffffffff) * 8));
            }
          }
          else {
            if (fVar24 < (float)iVar15 / (float)(int)uVar2) {
              local_50 = CONCAT44(uVar2,iVar15);
              goto LAB_015b5583;
            }
            local_38 = CONCAT44(uVar2,iVar15);
            if (uVar2 == 0) goto LAB_015b55a5;
          }
LAB_015b55e5:
          uVar11 = local_50;
          uVar14 = local_50 >> 0x20;
          if (local_50 >> 0x20 == 0) {
            uVar11 = FUN_00e7bcc0();
            uVar14 = uVar11 >> 0x20;
            uVar16 = uVar19;
            do {
              uVar1 = uVar16 + 1;
              local_50 = uVar11;
              if ((int64_t)(int)uVar17 <= (int64_t)uVar1) goto LAB_015b5642;
              uVar3 = *(uint *)(puVar9[2] + 0xc + uVar16 * 8);
              uVar16 = uVar1;
            } while ((uVar3 == 0) || (uVar3 == uVar2));
            uVar2 = *(uint *)(puVar9[2] + (uVar1 & 0xffffffff) * 8);
            uVar11 = (uint64_t)uVar2;
            local_50 = CONCAT44(uVar3,uVar2);
            uVar14 = (uint64_t)uVar3;
          }
LAB_015b5642:
          iVar15 = (int)uVar14;
          auVar28._0_4_ = (float)(int)uVar11;
          auVar28._4_4_ = (float)(int)local_38;
          auVar28._8_8_ = 0;
          auVar22._0_4_ = (float)iVar15;
          auVar22._4_4_ = (float)local_38._4_4_;
          auVar22._8_8_ = 0;
          auVar28 = divps(auVar28,auVar22);
          auVar25._0_4_ =
               (float)(int)((uint)(g_02410ff0 < iVar15) * g_02410ff0 |
                           (uint)(g_02410ff0 >= iVar15) * iVar15);
          auVar25._4_4_ =
               (float)(int)((uint)(_UNK_02410ff4 < local_38._4_4_) * _UNK_02410ff4 |
                           (uint)(_UNK_02410ff4 >= local_38._4_4_) * local_38._4_4_);
          auVar25._8_4_ = (float)(int)((uint)(_UNK_02410ff8 < 0) * _UNK_02410ff8);
          auVar25._12_4_ = (float)(int)((uint)(_UNK_02410ffc < 0) * _UNK_02410ffc);
          auVar22 = divps(g_023b5570,auVar25);
          auVar26 = sqrtps(auVar25,auVar22);
          auVar27._0_4_ = auVar26._0_4_ & g_02390140;
          auVar27._4_4_ = auVar26._4_4_ & _UNK_02390144;
          auVar27._8_4_ = auVar26._8_4_ & _UNK_02390148;
          auVar27._12_4_ = auVar26._12_4_ & _UNK_0239014c;
          auVar26._4_4_ = -(uint)(auVar22._4_4_ == _UNK_02411004);
          auVar26._0_4_ = -(uint)(auVar22._0_4_ == g_02411000);
          auVar26._8_4_ = -(uint)(auVar22._8_4_ == _UNK_02411008);
          auVar26._12_4_ = -(uint)(auVar22._12_4_ == _UNK_0241100c);
          auVar22 = blendvps(auVar27,g_02411010,auVar26);
          if (fVar24 < auVar28._4_4_ +
                       (auVar22._4_4_ / (auVar22._0_4_ + auVar22._4_4_)) *
                       (auVar28._0_4_ - auVar28._4_4_)) {
            uVar11 = FUN_00e7bcc0();
            if (((((local_50._4_4_ == 0) || (uVar11 >> 0x20 == 0)) ||
                 (cVar6 = FUN_00e7c000(), cVar6 == '\0')) ||
                (((uVar11 = FUN_00e7bcc0(), local_38._4_4_ == 0 || (uVar11 >> 0x20 == 0)) ||
                 (cVar6 = FUN_00e7c000(), cVar6 == '\0')))) &&
               (((uVar11 = FUN_00e7bcc0(), local_50._4_4_ != 0 && (uVar11 >> 0x20 != 0)) &&
                ((cVar6 = FUN_00e7c000(), cVar6 != '\0' &&
                 ((uVar11 = FUN_00e7bcc0(), local_38._4_4_ != 0 && (uVar11 >> 0x20 != 0)))))))) {
              FUN_00e7c000();
            }
            uVar20 = FUN_00e84a50();
            *(void*)(*(int64_t *)(g_028ad530 + 0x10) + uVar19 * 4) = uVar20;
            *(uint64_t *)(*(int64_t *)(g_028ad520 + 0x10) + uVar19 * 8) = local_38;
            uVar19 = uVar19 + 1;
            if (uVar19 == uVar17) break;
            goto LAB_015b551f;
          }
          uVar11 = FUN_00e7bcc0();
          if ((((((local_50._4_4_ == 0) || (uVar11 >> 0x20 == 0)) ||
                (cVar6 = FUN_00e7c000(), cVar6 == '\0')) ||
               ((uVar11 = FUN_00e7bcc0(), local_38._4_4_ == 0 || (uVar11 >> 0x20 == 0)))) ||
              (cVar6 = FUN_00e7c000(), cVar6 == '\0')) &&
             (((uVar11 = FUN_00e7bcc0(), local_50._4_4_ != 0 && (uVar11 >> 0x20 != 0)) &&
              ((cVar6 = FUN_00e7c000(), cVar6 != '\0' &&
               ((uVar11 = FUN_00e7bcc0(), local_38._4_4_ != 0 && (uVar11 >> 0x20 != 0)))))))) {
            FUN_00e7c000();
          }
          uVar20 = FUN_00e84a50();
          *(void*)(*(int64_t *)(g_028ad530 + 0x10) + uVar19 * 4) = uVar20;
          *(uint64_t *)(*(int64_t *)(g_028ad520 + 0x10) + uVar19 * 8) = local_50;
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar17);
      }
      FUN_00d50b20();
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
      g_028ad529 = '\x01';
      FUN_00e8cb70();
      in_XMM0 = ZEXT416(in_XMM0._0_4_);
    }
    else {
      g_028ad529 = '\x01';
      FUN_00e8cb70();
      in_XMM0 = ZEXT416(in_XMM0._0_4_);
    }
  }
  fVar24 = in_XMM0._0_4_;
  if (fVar24 <= 0.0) {
    uVar12 = FUN_00e7bcc0();
    uVar20 = 0;
    *this_ptr = uVar12;
  }
  else {
    while (fVar21 = in_XMM0._0_4_, fVar24 < g_02390124) {
      in_XMM0._0_4_ = fVar21 + fVar21;
      fVar24 = in_XMM0._0_4_;
    }
    while( true ) {
      if (fVar21 <= g_02390d34) break;
      in_XMM0._0_4_ = in_XMM0._0_4_ * g_0239011c;
      fVar21 = in_XMM0._0_4_;
    }
    auVar23._0_4_ = (in_XMM0._0_4_ + g_02390d00) / g_02410f98;
    auVar23._4_12_ = in_XMM0._4_12_;
    iVar7 = FUN_00e7d780(auVar23._0_8_);
    iVar15 = 0;
    if (-1 < iVar7) {
      iVar15 = iVar7;
    }
    iVar7 = *(int *)(g_028ad520 + 0x18);
    iVar13 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar13 = iVar7;
    }
    iVar7 = (iVar13 >> 3) + -1;
    if (iVar15 < iVar13 >> 3) {
      iVar7 = iVar15;
    }
    *this_ptr = *(void*)(*(int64_t *)(g_028ad520 + 0x10) + (int64_t)iVar7 * 8);
    uVar20 = *(void*)(*(int64_t *)(g_028ad530 + 0x10) + (int64_t)iVar7 * 4);
  }
  *arg1 = uVar20;
  return;
}

