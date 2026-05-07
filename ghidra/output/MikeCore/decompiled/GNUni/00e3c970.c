// Function: FUN_00e3c970
// Address: 00e3c970
// Size: 650 bytes
// Class: GNUni


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e3c970(void)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined1 auVar3 [12];
  undefined1 *puVar4;
  uint *puVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint unaff_ESI;
  undefined1 (*unaff_RDI) [16];
  uint uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  
  if ((unaff_RDI != (undefined1 (*) [16])0x0) && (unaff_ESI != 0)) {
    if (((ulonglong)unaff_RDI & 0xf) == 0) {
      auVar20 = ZEXT816(0);
      uVar15 = 0;
    }
    else {
      uVar10 = 4 - (int)(((ulonglong)unaff_RDI & 0xf) >> 2);
      if ((int)unaff_ESI < (int)uVar10) {
        uVar10 = unaff_ESI;
      }
      if (((ulonglong)unaff_RDI & 3) != 0) {
        uVar10 = unaff_ESI;
      }
      auVar18._0_12_ = ZEXT812(0);
      auVar18._12_4_ = 0;
      pauVar6 = unaff_RDI;
      if ((uVar10 & 3) == 0) {
        auVar20 = ZEXT816(0);
        uVar7 = uVar10;
      }
      else {
        uVar7 = 0;
        do {
          puVar4 = *pauVar6;
          pauVar6 = (undefined1 (*) [16])(*pauVar6 + 4);
          fVar11 = (float)(*(uint *)puVar4 & _DAT_02390140);
          if (fVar11 <= auVar18._0_4_) {
            fVar11 = auVar18._0_4_;
          }
          auVar18 = ZEXT416((uint)fVar11);
          uVar7 = uVar7 + 1;
        } while ((uVar10 & 3) != uVar7);
        uVar7 = uVar10 - uVar7;
        auVar20 = auVar18;
      }
      unaff_ESI = unaff_ESI - uVar10;
      if (2 < uVar10 - 1) {
        lVar9 = 0;
        do {
          fVar11 = (float)(*(uint *)(*pauVar6 + lVar9 * 4) & _DAT_02390140);
          if (fVar11 <= auVar18._0_4_) {
            fVar11 = auVar18._0_4_;
          }
          fVar19 = (float)(*(uint *)(*pauVar6 + lVar9 * 4 + 4) & _DAT_02390140);
          if (fVar19 <= fVar11) {
            fVar19 = fVar11;
          }
          fVar11 = (float)(*(uint *)(*pauVar6 + lVar9 * 4 + 8) & _DAT_02390140);
          if (fVar11 <= fVar19) {
            fVar11 = fVar19;
          }
          fVar19 = (float)(*(uint *)(*pauVar6 + lVar9 * 4 + 0xc) & _DAT_02390140);
          if (fVar19 <= fVar11) {
            fVar19 = fVar11;
          }
          auVar18 = ZEXT416((uint)fVar19);
          lVar9 = lVar9 + 4;
          auVar20 = auVar18;
        } while (uVar7 != (uint)lVar9);
      }
      uVar15 = auVar20._0_4_;
      if (unaff_ESI == 0) {
        return;
      }
      unaff_RDI = (undefined1 (*) [16])(*unaff_RDI + (ulonglong)(uVar10 - 1) * 4 + 4);
    }
    if (3 < unaff_ESI) {
      auVar16._4_4_ = uVar15;
      auVar16._0_4_ = uVar15;
      auVar16._8_4_ = uVar15;
      auVar16._12_4_ = uVar15;
      uVar7 = (int)unaff_ESI >> 2;
      uVar10 = uVar7 - 1;
      auVar12._0_12_ = ZEXT812(0);
      auVar12._12_4_ = 0;
      pauVar6 = unaff_RDI;
      if ((uVar7 & 3) == 0) {
        auVar20 = ZEXT816(0);
      }
      else {
        uVar8 = 0;
        do {
          auVar20 = *pauVar6;
          pauVar6 = pauVar6 + 1;
          auVar16 = maxps(auVar20,auVar16);
          auVar12 = minps(auVar20,auVar12);
          uVar8 = uVar8 + 1;
        } while ((uVar7 & 3) != uVar8);
        uVar7 = uVar7 - uVar8;
        auVar20 = auVar12;
      }
      if (2 < uVar10) {
        do {
          pauVar1 = pauVar6 + 3;
          auVar20 = maxps(*pauVar6,auVar16);
          auVar18 = minps(*pauVar6,auVar12);
          auVar20 = maxps(pauVar6[1],auVar20);
          auVar18 = minps(pauVar6[1],auVar18);
          auVar20 = maxps(pauVar6[2],auVar20);
          auVar18 = minps(pauVar6[2],auVar18);
          pauVar6 = pauVar6 + 4;
          auVar16 = maxps(*pauVar1,auVar20);
          auVar12 = minps(*pauVar1,auVar18);
          uVar7 = uVar7 - 4;
          auVar20 = auVar12;
        } while (uVar7 != 0);
      }
      auVar17._0_4_ = auVar20._0_4_ ^ _DAT_023945e0;
      auVar17._4_4_ = auVar20._4_4_ ^ _UNK_023945e4;
      auVar17._8_4_ = auVar20._8_4_ ^ _UNK_023945e8;
      auVar17._12_4_ = auVar20._12_4_ ^ _UNK_023945ec;
      auVar20 = maxps(auVar16,auVar17);
      auVar3._4_8_ = auVar12._8_8_;
      auVar3._0_4_ = auVar20._4_4_;
      auVar13._0_8_ = auVar3._0_8_ << 0x20;
      auVar13._8_4_ = auVar20._8_4_;
      auVar13._12_4_ = auVar20._12_4_;
      auVar14._8_8_ = auVar20._8_8_;
      auVar14._0_8_ = auVar13._8_8_;
      auVar20 = maxps(auVar20,auVar14);
      if (auVar20._0_4_ <= auVar20._4_4_) {
        auVar20._0_4_ = auVar20._4_4_;
      }
    }
    uVar10 = (int)unaff_ESI % 4;
    if (uVar10 == 0) {
      return;
    }
    puVar5 = (uint *)(*unaff_RDI + (longlong)(int)(unaff_ESI - uVar10) * 4);
    uVar7 = uVar10 - 1;
    if ((uVar10 & 3) != 0) {
      uVar8 = 0;
      do {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        fVar11 = (float)(uVar2 & _DAT_02390140);
        if ((float)(uVar2 & _DAT_02390140) <= auVar20._0_4_) {
          fVar11 = auVar20._0_4_;
        }
        auVar20 = ZEXT416((uint)fVar11);
        uVar8 = uVar8 + 1;
      } while ((uVar10 & 3) != uVar8);
      uVar10 = uVar10 - uVar8;
    }
    if (2 < uVar7) {
      lVar9 = 0;
      do {
        fVar11 = (float)(puVar5[lVar9] & _DAT_02390140);
        if ((float)(puVar5[lVar9] & _DAT_02390140) <= auVar20._0_4_) {
          fVar11 = auVar20._0_4_;
        }
        fVar19 = (float)(puVar5[lVar9 + 1] & _DAT_02390140);
        if ((float)(puVar5[lVar9 + 1] & _DAT_02390140) <= fVar11) {
          fVar19 = fVar11;
        }
        fVar11 = (float)(puVar5[lVar9 + 2] & _DAT_02390140);
        if ((float)(puVar5[lVar9 + 2] & _DAT_02390140) <= fVar19) {
          fVar11 = fVar19;
        }
        fVar19 = (float)(puVar5[lVar9 + 3] & _DAT_02390140);
        if ((float)(puVar5[lVar9 + 3] & _DAT_02390140) <= fVar11) {
          fVar19 = fVar11;
        }
        auVar20 = ZEXT416((uint)fVar19);
        lVar9 = lVar9 + 4;
      } while (uVar10 != (uint)lVar9);
    }
  }
  return;
}


