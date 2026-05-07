// Function: FUN_01cdecb0
// Address: 01cdecb0
// Size: 2350 bytes
// Class: Unknown

void FUN_01cdecb0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int *piVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint uVar6;
  int iVar7;
  int64_t *in_RCX;
  int iVar8;
  void*arg1;
  void*this_ptr;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar13 [16];
  float fVar15;
  uint8_t auVar14 [16];
  float fVar16;
  float fVar21;
  float fVar23;
  uint8_t in_XMM1 [16];
  float fVar22;
  float fVar24;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint64_t in_XMM2_Qb;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint64_t in_XMM3_Qb;
  float fVar35;
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  float fVar36;
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t local_1a8 [16];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint8_t local_158 [16];
  float fStack_144;
  uint32_t uStack_13c;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int local_38;
  int local_34;
  
  local_68 = (float)param_3;
  fStack_64 = (float)((uint64_t)param_3 >> 0x20);
  fStack_60 = (float)in_XMM2_Qb;
  fStack_5c = (float)((uint64_t)in_XMM2_Qb >> 0x20);
  auVar27 = in_XMM1;
  auVar13._0_8_ = FUN_01d530c0();
  auVar13._8_8_ = extraout_XMM0_Qb;
  fVar36 = auVar27._0_4_;
  fVar21 = auVar27._4_4_;
  fVar16 = auVar27._12_4_;
  auVar20 = auVar27;
  if (6 < *(int *)(*in_RCX + 0x18) + 3U) {
    piVar1 = *(int **)(*in_RCX + 0x10);
    fVar23 = (float)*piVar1;
    fVar22 = (float)auVar13._0_8_;
    auVar13._0_4_ = fVar22 - fVar23;
    auVar20 = blendps(ZEXT416((uint)((float)piVar1[2] + fVar23 + fVar36)),auVar27,0xe);
  }
  local_58 = in_XMM1._0_4_;
  fStack_54 = in_XMM1._4_4_;
  fStack_50 = in_XMM1._8_4_;
  fStack_4c = in_XMM1._12_4_;
  local_198 = (float)param_4;
  fStack_194 = (float)((uint64_t)param_4 >> 0x20);
  fStack_190 = (float)in_XMM3_Qb;
  fStack_18c = (float)((uint64_t)in_XMM3_Qb >> 0x20);
  local_198 = (fVar36 - local_58) + local_198;
  fStack_194 = (fVar21 - fStack_54) + fStack_194;
  auVar17._4_4_ = fStack_194;
  auVar17._0_4_ = local_198;
  fStack_190 = (auVar27._8_4_ - fStack_50) + fStack_190;
  fStack_18c = (fVar16 - fStack_4c) + fStack_18c;
  fVar22 = auVar20._0_4_;
  fVar23 = auVar20._4_4_;
  fVar24 = auVar20._8_4_;
  fVar35 = auVar20._12_4_;
  if ((param_2 & 2) == 0) {
    auVar37 = auVar27;
    auVar42 = auVar27;
    if ((param_2 & 1) != 0) {
      fVar15 = auVar13._0_4_;
      if ((param_2 & 4) == 0) {
        auVar37._0_4_ = (local_198 - fVar22) + fVar15;
        auVar37._4_4_ = (fStack_194 - fVar23) + auVar13._4_4_;
        auVar37._8_4_ = (fStack_190 - fVar24) + auVar13._8_4_;
        auVar37._12_4_ = (fStack_18c - fVar35) + auVar13._12_4_;
        auVar13 = blendps(auVar13,auVar37,0xd);
      }
      else {
        auVar37._0_4_ = (fVar22 - fVar36) - fVar15;
        auVar37._4_12_ = auVar20._4_12_;
        if ((fVar15 != auVar37._0_4_) || (NAN(fVar15) || NAN(auVar37._0_4_))) {
          if (((fVar15 != 0.0) || (NAN(fVar15))) ||
             ((auVar37._0_4_ == 0.0 && (!NAN(auVar37._0_4_))))) {
            if (((fVar15 != 0.0) || (NAN(fVar15))) &&
               ((auVar37._0_4_ == 0.0 && (!NAN(auVar37._0_4_))))) {
              auVar2._4_4_ = (fStack_194 - fVar23) + auVar13._4_4_;
              auVar2._0_4_ = (local_198 - fVar22) + fVar15;
              auVar2._8_4_ = (fStack_190 - fVar24) + auVar13._8_4_;
              auVar2._12_4_ = (fStack_18c - fVar35) + auVar13._12_4_;
              auVar13 = blendps(auVar13,auVar2,0xd);
              goto LAB_01cded80;
            }
            auVar41._0_12_ = ZEXT812(0);
            auVar41._12_4_ = 0;
            auVar3._4_4_ = fStack_194 - fVar23;
            auVar3._0_4_ = (local_198 - fVar22) * (fVar15 / auVar37._0_4_);
            auVar3._8_4_ = fStack_190 - fVar24;
            auVar3._12_4_ = fStack_18c - fVar35;
            auVar40 = roundss(auVar41,auVar3,9);
          }
          else {
            auVar40._0_12_ = ZEXT812(0);
            auVar40._12_4_ = 0;
          }
        }
        else {
          auVar17._8_4_ = fStack_190;
          auVar17._12_4_ = fStack_18c;
          auVar39._4_12_ = auVar17._4_12_;
          auVar39._0_4_ = (local_198 - fVar22) * g_0239011c;
          auVar40 = roundss(auVar39,auVar39,9);
        }
        auVar37._4_12_ = auVar40._4_12_;
        auVar37._0_4_ = auVar40._0_4_ + fVar15;
        auVar13 = blendps(auVar13,auVar37,1);
      }
    }
  }
  else {
    auVar20._0_4_ = (local_198 - fVar22) + fVar36;
    auVar20._4_4_ = (fStack_194 - fVar23) + fVar21;
    auVar20._8_4_ = (fStack_190 - fVar24) + auVar27._8_4_;
    auVar20._12_4_ = (fStack_18c - fVar35) + fVar16;
    auVar37 = blendps(auVar20,auVar27,2);
    auVar42 = auVar37;
  }
LAB_01cded80:
  fStack_54 = fVar21;
  local_58 = fVar21;
  fStack_50 = fVar16;
  fStack_4c = fVar16;
  if ((param_2 & 0x10) != 0) {
    auVar26._0_4_ = (local_198 - fVar22) + auVar42._0_4_;
    auVar26._4_4_ = (fStack_194 - fVar23) + auVar42._4_4_;
    auVar26._8_4_ = (fStack_190 - fVar24) + auVar42._8_4_;
    auVar26._12_4_ = (fStack_18c - fVar35) + auVar42._12_4_;
    auVar42 = blendps(auVar42,auVar26,2);
    goto LAB_01cdedb8;
  }
  if ((param_2 & 8) == 0) goto LAB_01cdedb8;
  fVar16 = auVar13._4_4_;
  fVar15 = auVar13._12_4_;
  if ((param_2 & 0x20) == 0) {
LAB_01cdeda1:
    auVar25._0_4_ = (local_198 - fVar22) + auVar13._0_4_;
    auVar25._4_4_ = (fStack_194 - fVar23) + fVar16;
    auVar25._8_4_ = (fStack_190 - fVar24) + auVar13._8_4_;
    auVar25._12_4_ = (fStack_18c - fVar35) + fVar15;
    auVar13 = blendps(auVar13,auVar25,2);
  }
  else {
    auVar33._4_4_ = fVar16;
    auVar33._0_4_ = fVar16;
    auVar37._4_4_ = (fVar23 - auVar42._4_4_) - fVar16;
    auVar37._12_4_ = (fVar35 - auVar42._12_4_) - fVar15;
    auVar37._0_4_ = auVar37._4_4_;
    auVar37._8_4_ = auVar37._12_4_;
    if ((fVar16 != auVar37._4_4_) || (NAN(fVar16) || NAN(auVar37._4_4_))) {
      if (((fVar16 != 0.0) || (NAN(fVar16))) || ((auVar37._4_4_ == 0.0 && (!NAN(auVar37._4_4_))))) {
        if (((fVar16 != 0.0) || (NAN(fVar16))) && ((auVar37._4_4_ == 0.0 && (!NAN(auVar37._4_4_)))))
        goto LAB_01cdeda1;
        auVar33._8_4_ = fVar15;
        auVar33._12_4_ = fVar15;
        auVar34._4_12_ = auVar33._4_12_;
        auVar34._0_4_ = (fVar16 / auVar37._4_4_) * (fStack_194 - fVar23);
        auVar20 = roundss(ZEXT816(0),auVar34,9);
      }
      else {
        auVar20 = ZEXT816(0);
      }
    }
    else {
      auVar28._4_4_ = fStack_194 - fVar23;
      auVar28._12_4_ = fStack_18c - fVar35;
      auVar28._0_4_ = auVar28._4_4_;
      auVar28._8_4_ = auVar28._12_4_;
      auVar29._4_12_ = auVar28._4_12_;
      auVar29._0_4_ = auVar28._4_4_ * g_0239011c;
      auVar20 = roundss(auVar29,auVar29,9);
    }
    auVar30._4_12_ = auVar20._4_12_;
    auVar30._0_4_ = auVar20._0_4_ + fVar16;
    auVar13 = insertps(auVar13,auVar30,0x10);
  }
LAB_01cdedb8:
  uVar6 = (uint)fVar36;
  local_a8 = (float)param_1;
  fStack_a4 = (float)((uint64_t)param_1 >> 0x20);
  fStack_a0 = (float)in_XMM0_Qb;
  fStack_9c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  iVar9 = (int)auVar42._0_4_;
  if ((int)uVar6 <= iVar9) {
    iVar10 = (int)uVar6 / 2;
    iVar7 = iVar10 - (uint)((uVar6 - ((int)uVar6 >> 0x1f) & 0xfffffffe) == uVar6);
    local_34 = (iVar9 - iVar7) - iVar10;
    local_158 = ZEXT416((uint)(float)iVar7);
  }
  else {
    iVar7 = iVar9 / 2;
    iVar10 = iVar9 - iVar7;
    local_158 = ZEXT816(0);
    local_34 = 0;
  }
  uVar11 = (uint)((int)uVar6 <= iVar9);
  fVar16 = (local_68 - local_a8) + auVar13._0_4_;
  fVar22 = (fStack_64 - fStack_a4) + auVar13._4_4_;
  fVar23 = (fStack_60 - fStack_a0) + auVar13._8_4_;
  fVar24 = (fStack_5c - fStack_9c) + auVar13._12_4_;
  uVar6 = (uint)fVar21;
  fStack_144 = auVar42._4_4_;
  uStack_13c = auVar42._12_4_;
  fStack_94 = fStack_144;
  local_98 = fStack_144;
  uStack_90 = uStack_13c;
  uStack_8c = uStack_13c;
  iVar9 = (int)fStack_144;
  if ((int)uVar6 <= iVar9) {
    iVar8 = (int)uVar6 / 2;
    iVar12 = iVar8 - (uint)((uVar6 - ((int)uVar6 >> 0x1f) & 0xfffffffe) == uVar6);
    local_38 = (iVar9 - iVar12) - iVar8;
    auVar20 = ZEXT416((uint)(float)iVar12);
    local_1a8 = auVar20;
  }
  else {
    auVar20 = ZEXT416((uint)(float)(iVar9 / 2));
    iVar8 = iVar9 - iVar9 / 2;
    local_1a8 = ZEXT816(0);
    local_38 = 0;
  }
  uVar6 = (uint)((int)uVar6 <= iVar9);
  auVar17 = ZEXT416((uint)(float)iVar7);
  auVar13 = insertps(auVar17,auVar20,0x10);
  (**(code **)(*(int64_t *)*this_ptr + 0x408))(*arg1,auVar13._0_8_);
  auVar38._4_12_ = auVar37._4_12_;
  auVar38._0_4_ = (float)iVar10;
  auVar18._4_12_ = auVar27._4_12_;
  auVar18._0_4_ = fVar36 - auVar38._0_4_;
  auVar13 = blendps(ZEXT816(0),auVar18,1);
  auVar27._4_4_ = fVar22;
  auVar27._0_4_ = fVar16;
  auVar27._8_4_ = fVar23;
  auVar27._12_4_ = fVar24;
  auVar31._4_12_ = auVar42._4_12_;
  auVar31._0_4_ = (auVar42._0_4_ + fVar16) - auVar38._0_4_;
  auVar19._4_4_ = auVar37._4_4_;
  auVar19._0_4_ = auVar38._0_4_;
  auVar19._8_4_ = auVar37._8_4_;
  auVar19._12_4_ = auVar37._12_4_;
  local_a8 = auVar20._0_4_;
  auVar20 = insertps(auVar19,local_a8,0x10);
  auVar27 = blendps(auVar27,auVar31,1);
  (**(code **)(*(int64_t *)*this_ptr + 0x408))(auVar13._0_8_,auVar20._0_8_,auVar27._0_8_);
  auVar42._4_4_ = fVar22;
  auVar42._0_4_ = fVar16;
  auVar42._8_4_ = fVar23;
  auVar42._12_4_ = fVar24;
  fVar36 = (float)iVar8;
  auVar14._4_12_ = local_58._4_12_;
  auVar14._0_4_ = fVar21 - fVar36;
  auVar32._4_12_ = local_98._4_12_;
  auVar32._0_4_ = (fStack_144 + fVar22) - fVar36;
  auVar20 = insertps(auVar17,ZEXT416((uint)fVar36),0x10);
  auVar27 = insertps(auVar14,auVar14,0x1d);
  auVar13 = insertps(auVar42,auVar32,0x10);
  (**(code **)(*(int64_t *)*this_ptr + 0x408))(auVar27._0_8_,auVar20._0_8_,auVar13._0_8_);
  auVar27 = insertps(auVar18,auVar14._0_4_,0x10);
  auVar20 = insertps(auVar38,fVar36,0x10);
  auVar13 = insertps(auVar31,auVar32._0_4_,0x10);
  (**(code **)(*(int64_t *)*this_ptr + 0x408))(auVar27._0_8_,auVar20._0_8_,auVar13._0_8_);
  if ((local_34 != 0) && (0 < local_34)) {
    blendps(ZEXT816(0),local_158,1);
    insertps(ZEXT416((uint)(float)uVar11),local_a8,0x10);
    insertps(local_158,auVar14._0_4_,0x10);
    insertps(ZEXT416((uint)(float)uVar11),fVar36,0x10);
    iVar10 = 0;
    iVar9 = local_34;
    do {
      auVar27 = ZEXT416((uint)((float)iVar10 + fVar16 + local_158._0_4_));
      auVar4._4_4_ = fVar22;
      auVar4._0_4_ = fVar16;
      auVar4._8_4_ = fVar23;
      auVar4._12_4_ = fVar24;
      blendps(auVar4,auVar27,1);
      (**(code **)(*(int64_t *)*this_ptr + 0x408))();
      insertps(auVar27,auVar32._0_4_,0x10);
      (**(code **)(*(int64_t *)*this_ptr + 0x408))();
      iVar10 = iVar10 + uVar11;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (local_38 != 0) {
    auVar27 = ZEXT416((uint)(float)uVar6);
    if (0 < local_38) {
      insertps(auVar27,local_1a8,0x1d);
      insertps(auVar17,auVar27,0x10);
      insertps(auVar18,local_1a8,0x10);
      insertps(auVar38,auVar27,0x10);
      iVar10 = 0;
      iVar9 = local_38;
      do {
        fVar36 = (float)iVar10 + fVar22 + local_a8;
        auVar5._4_4_ = fVar22;
        auVar5._0_4_ = fVar16;
        auVar5._8_4_ = fVar23;
        auVar5._12_4_ = fVar24;
        insertps(auVar5,ZEXT416((uint)fVar36),0x10);
        (**(code **)(*(int64_t *)*this_ptr + 0x408))();
        insertps(auVar31,fVar36,0x10);
        (**(code **)(*(int64_t *)*this_ptr + 0x408))();
        iVar10 = iVar10 + uVar6;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (((local_34 != 0) && (0 < local_34)) && (0 < local_38)) {
      insertps(local_158,local_1a8._0_4_,0x10);
      insertps(ZEXT416((uint)(float)uVar11),(float)uVar6,0x10);
      iVar9 = 0;
      do {
        iVar12 = 0;
        iVar10 = local_38;
        do {
          insertps(ZEXT416((uint)((float)(int)(iVar9 * uVar11) + fVar16 + (float)iVar7)),
                   ZEXT416((uint)((float)iVar12 + fVar22 + local_a8)),0x10);
          (**(code **)(*(int64_t *)*this_ptr + 0x408))();
          iVar12 = iVar12 + uVar6;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar9 = iVar9 + 1;
      } while (iVar9 != local_34);
    }
  }
  return;
}

