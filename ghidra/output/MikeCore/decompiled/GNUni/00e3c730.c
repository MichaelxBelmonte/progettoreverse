// Function: FUN_00e3c730
// Address: 00e3c730
// Size: 563 bytes
// Class: GNUni


void FUN_00e3c730(void)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  ulonglong uVar3;
  undefined1 auVar4 [12];
  float fVar5;
  undefined1 *puVar6;
  undefined1 (*pauVar7) [16];
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  uint unaff_ESI;
  undefined1 (*unaff_RDI) [16];
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (((ulonglong)unaff_RDI & 0xf) == 0) {
    auVar14 = ZEXT416(DAT_02391078);
  }
  else {
    uVar12 = 4 - (int)(((ulonglong)unaff_RDI & 0xf) >> 2);
    if ((int)unaff_ESI < (int)uVar12) {
      uVar12 = unaff_ESI;
    }
    if (((ulonglong)unaff_RDI & 3) != 0) {
      uVar12 = unaff_ESI;
    }
    unaff_ESI = unaff_ESI - uVar12;
    if (uVar12 == 0) {
      auVar14 = ZEXT416(DAT_02391078);
    }
    else {
      uVar11 = uVar12 - 1;
      auVar14 = ZEXT416(DAT_02391078);
      pauVar7 = unaff_RDI;
      if ((uVar12 & 3) != 0) {
        uVar9 = 0;
        do {
          in_XMM1 = auVar14;
          puVar6 = *pauVar7;
          pauVar7 = (undefined1 (*) [16])(*pauVar7 + 4);
          fVar2 = *(float *)puVar6;
          if (in_XMM1._0_4_ <= *(float *)puVar6) {
            fVar2 = in_XMM1._0_4_;
          }
          auVar14 = ZEXT416((uint)fVar2);
          uVar9 = uVar9 + 1;
        } while ((uVar12 & 3) != uVar9);
        uVar12 = uVar12 - uVar9;
      }
      if (2 < uVar11) {
        lVar10 = 0;
        do {
          fVar2 = *(float *)(*pauVar7 + lVar10 * 4);
          if (auVar14._0_4_ <= *(float *)(*pauVar7 + lVar10 * 4)) {
            fVar2 = auVar14._0_4_;
          }
          fVar5 = *(float *)(*pauVar7 + lVar10 * 4 + 4);
          if (fVar2 <= *(float *)(*pauVar7 + lVar10 * 4 + 4)) {
            fVar5 = fVar2;
          }
          fVar2 = *(float *)(*pauVar7 + lVar10 * 4 + 8);
          if (fVar5 <= *(float *)(*pauVar7 + lVar10 * 4 + 8)) {
            fVar2 = fVar5;
          }
          in_XMM1._8_8_ = 0;
          in_XMM1._0_8_ = CONCAT44(0,fVar2);
          uVar3 = (ulonglong)(uint)*(float *)(*pauVar7 + lVar10 * 4 + 0xc);
          if (fVar2 <= *(float *)(*pauVar7 + lVar10 * 4 + 0xc)) {
            uVar3 = CONCAT44(0,fVar2);
          }
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar3;
          lVar10 = lVar10 + 4;
        } while (uVar12 != (uint)lVar10);
      }
      unaff_RDI = (undefined1 (*) [16])(*unaff_RDI + (ulonglong)uVar11 * 4 + 4);
    }
    if (unaff_ESI == 0) {
      return;
    }
  }
  if (3 < unaff_ESI) {
    auVar13._0_4_ = auVar14._0_4_;
    auVar13._4_4_ = auVar13._0_4_;
    auVar13._8_4_ = auVar13._0_4_;
    auVar13._12_4_ = auVar13._0_4_;
    uVar11 = (int)unaff_ESI >> 2;
    uVar12 = uVar11 - 1;
    pauVar7 = unaff_RDI;
    if ((uVar11 & 7) != 0) {
      uVar9 = 0;
      do {
        in_XMM1 = auVar13;
        auVar14 = *pauVar7;
        pauVar7 = pauVar7 + 1;
        auVar13 = minps(auVar14,in_XMM1);
        uVar9 = uVar9 + 1;
      } while ((uVar11 & 7) != uVar9);
      uVar11 = uVar11 - uVar9;
    }
    if (6 < uVar12) {
      do {
        auVar14 = minps(*pauVar7,auVar13);
        auVar14 = minps(pauVar7[1],auVar14);
        auVar14 = minps(pauVar7[2],auVar14);
        auVar14 = minps(pauVar7[3],auVar14);
        auVar14 = minps(pauVar7[4],auVar14);
        auVar14 = minps(pauVar7[5],auVar14);
        in_XMM1 = minps(pauVar7[6],auVar14);
        pauVar1 = pauVar7 + 7;
        pauVar7 = pauVar7 + 8;
        auVar13 = minps(*pauVar1,in_XMM1);
        uVar11 = uVar11 - 8;
      } while (uVar11 != 0);
    }
    auVar4._4_8_ = in_XMM1._8_8_;
    auVar4._0_4_ = auVar13._4_4_;
    auVar15._0_8_ = auVar4._0_8_ << 0x20;
    auVar15._8_4_ = auVar13._8_4_;
    auVar15._12_4_ = auVar13._12_4_;
    auVar16._8_8_ = auVar13._8_8_;
    auVar16._0_8_ = auVar15._8_8_;
    auVar14 = minps(auVar13,auVar16);
    if (auVar14._4_4_ <= auVar14._0_4_) {
      auVar14._0_4_ = auVar14._4_4_;
    }
  }
  uVar12 = (int)unaff_ESI % 4;
  if (uVar12 != 0) {
    pfVar8 = (float *)(*unaff_RDI + (longlong)(int)(unaff_ESI - uVar12) * 4);
    uVar11 = uVar12 - 1;
    if ((uVar12 & 3) != 0) {
      uVar9 = 0;
      do {
        fVar2 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        if (auVar14._0_4_ <= fVar2) {
          fVar2 = auVar14._0_4_;
        }
        auVar14 = ZEXT416((uint)fVar2);
        uVar9 = uVar9 + 1;
      } while ((uVar12 & 3) != uVar9);
      uVar12 = uVar12 - uVar9;
    }
    if (2 < uVar11) {
      lVar10 = 0;
      do {
        fVar2 = pfVar8[lVar10];
        if (auVar14._0_4_ <= pfVar8[lVar10]) {
          fVar2 = auVar14._0_4_;
        }
        fVar5 = pfVar8[lVar10 + 1];
        if (fVar2 <= pfVar8[lVar10 + 1]) {
          fVar5 = fVar2;
        }
        fVar2 = pfVar8[lVar10 + 2];
        if (fVar5 <= pfVar8[lVar10 + 2]) {
          fVar2 = fVar5;
        }
        fVar5 = pfVar8[lVar10 + 3];
        if (fVar2 <= pfVar8[lVar10 + 3]) {
          fVar5 = fVar2;
        }
        auVar14 = ZEXT416((uint)fVar5);
        lVar10 = lVar10 + 4;
      } while (uVar12 != (uint)lVar10);
    }
  }
  return;
}


