// Function: FUN_015b5100
// Address: 015b5100
// Size: 2419 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015b536d) */
/* WARNING: Removing unreachable block (ram,0x015b5376) */
/* WARNING: Removing unreachable block (ram,0x015b5426) */
/* WARNING: Removing unreachable block (ram,0x015b542f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015b5100(void)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined4 *unaff_RSI;
  undefined8 *unaff_RDI;
  uint uVar17;
  bool bVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int local_60;
  int local_5c;
  undefined8 local_50;
  char local_48;
  undefined8 local_38;
  
  if ((DAT_028ad520 == 0) || (DAT_028ad529 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ad520 == 0) {
      FUN_00e7d780();
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_025683c0;
      pcVar4 = DAT_025683d8;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &DAT_025683c0;
      (*pcVar4)();
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e7d0();
      FUN_00c8e7d0();
      fVar24 = DAT_02390124;
      do {
        FUN_015c24c0((double)fVar24,0x10);
        bVar18 = local_5c != 0xe &&
                 ((local_5c != 0xd && (local_5c != 0xb && local_5c != 7)) &&
                 (1 < local_60 - 0xdU && (local_60 - 7U & 0xfffffffb) != 0));
        if ((DAT_02410f90 < fVar24) && (fVar24 < DAT_02410f94)) {
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
        *(undefined8 *)(puVar9[2] + (longlong)iVar15) = uVar10;
        iVar15 = *(int *)(puVar8 + 3);
        FUN_00c8e340(uVar12,1);
        *(float *)(puVar8[2] + (longlong)iVar15) = fVar24;
        fVar24 = fVar24 + _DAT_02410f98;
      } while (fVar24 < DAT_02410f9c);
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
      lVar5 = DAT_028ad520;
      if ((DAT_028ad520 != local_50) && (DAT_028ad520 = local_50, lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        if (DAT_028ad528 == '\0') {
          DAT_028ad528 = '\x01';
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
      lVar5 = DAT_028ad530;
      if ((DAT_028ad530 != local_50) && (DAT_028ad530 = local_50, lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        if (DAT_028ad538 == '\0') {
          DAT_028ad538 = '\x01';
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
                if ((longlong)uVar11 < 1) goto LAB_015b55e5;
                uVar3 = *(uint *)(puVar9[2] + -4 + uVar11 * 8);
                uVar11 = uVar11 - 1;
              } while ((uVar3 == 0) || (uVar3 == uVar2));
              local_38 = CONCAT44(uVar3,*(undefined4 *)(puVar9[2] + (uVar11 & 0xffffffff) * 8));
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
              if ((longlong)(int)uVar17 <= (longlong)uVar1) goto LAB_015b5642;
              uVar3 = *(uint *)(puVar9[2] + 0xc + uVar16 * 8);
              uVar16 = uVar1;
            } while ((uVar3 == 0) || (uVar3 == uVar2));
            uVar2 = *(uint *)(puVar9[2] + (uVar1 & 0xffffffff) * 8);
            uVar11 = (ulonglong)uVar2;
            local_50 = CONCAT44(uVar3,uVar2);
            uVar14 = (ulonglong)uVar3;
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
               (float)(int)((uint)(_DAT_02410ff0 < iVar15) * _DAT_02410ff0 |
                           (uint)(_DAT_02410ff0 >= iVar15) * iVar15);
          auVar25._4_4_ =
               (float)(int)((uint)(_UNK_02410ff4 < local_38._4_4_) * _UNK_02410ff4 |
                           (uint)(_UNK_02410ff4 >= local_38._4_4_) * local_38._4_4_);
          auVar25._8_4_ = (float)(int)((uint)(_UNK_02410ff8 < 0) * _UNK_02410ff8);
          auVar25._12_4_ = (float)(int)((uint)(_UNK_02410ffc < 0) * _UNK_02410ffc);
          auVar22 = divps(_DAT_023b5570,auVar25);
          auVar26 = sqrtps(auVar25,auVar22);
          auVar27._0_4_ = auVar26._0_4_ & _DAT_02390140;
          auVar27._4_4_ = auVar26._4_4_ & _UNK_02390144;
          auVar27._8_4_ = auVar26._8_4_ & _UNK_02390148;
          auVar27._12_4_ = auVar26._12_4_ & _UNK_0239014c;
          auVar26._4_4_ = -(uint)(auVar22._4_4_ == _UNK_02411004);
          auVar26._0_4_ = -(uint)(auVar22._0_4_ == _DAT_02411000);
          auVar26._8_4_ = -(uint)(auVar22._8_4_ == _UNK_02411008);
          auVar26._12_4_ = -(uint)(auVar22._12_4_ == _UNK_0241100c);
          auVar22 = blendvps(auVar27,_DAT_02411010,auVar26);
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
            *(undefined4 *)(*(longlong *)(DAT_028ad530 + 0x10) + uVar19 * 4) = uVar20;
            *(ulonglong *)(*(longlong *)(DAT_028ad520 + 0x10) + uVar19 * 8) = local_38;
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
          *(undefined4 *)(*(longlong *)(DAT_028ad530 + 0x10) + uVar19 * 4) = uVar20;
          *(ulonglong *)(*(longlong *)(DAT_028ad520 + 0x10) + uVar19 * 8) = local_50;
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar17);
      }
      FUN_00d50b20();
      if (puVar8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      DAT_028ad529 = '\x01';
      FUN_00e8cb70();
      in_XMM0 = ZEXT416(in_XMM0._0_4_);
    }
    else {
      DAT_028ad529 = '\x01';
      FUN_00e8cb70();
      in_XMM0 = ZEXT416(in_XMM0._0_4_);
    }
  }
  fVar24 = in_XMM0._0_4_;
  if (fVar24 <= 0.0) {
    uVar12 = FUN_00e7bcc0();
    uVar20 = 0;
    *unaff_RDI = uVar12;
  }
  else {
    while (fVar21 = in_XMM0._0_4_, fVar24 < DAT_02390124) {
      in_XMM0._0_4_ = fVar21 + fVar21;
      fVar24 = in_XMM0._0_4_;
    }
    while( true ) {
      if (fVar21 <= DAT_02390d34) break;
      in_XMM0._0_4_ = in_XMM0._0_4_ * DAT_0239011c;
      fVar21 = in_XMM0._0_4_;
    }
    auVar23._0_4_ = (in_XMM0._0_4_ + DAT_02390d00) / _DAT_02410f98;
    auVar23._4_12_ = in_XMM0._4_12_;
    iVar7 = FUN_00e7d780(auVar23._0_8_);
    iVar15 = 0;
    if (-1 < iVar7) {
      iVar15 = iVar7;
    }
    iVar7 = *(int *)(DAT_028ad520 + 0x18);
    iVar13 = iVar7 + 7;
    if (-1 < iVar7) {
      iVar13 = iVar7;
    }
    iVar7 = (iVar13 >> 3) + -1;
    if (iVar15 < iVar13 >> 3) {
      iVar7 = iVar15;
    }
    *unaff_RDI = *(undefined8 *)(*(longlong *)(DAT_028ad520 + 0x10) + (longlong)iVar7 * 8);
    uVar20 = *(undefined4 *)(*(longlong *)(DAT_028ad530 + 0x10) + (longlong)iVar7 * 4);
  }
  *unaff_RSI = uVar20;
  return;
}


