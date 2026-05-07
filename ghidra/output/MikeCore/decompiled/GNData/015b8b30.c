// Function: FUN_015b8b30
// Address: 015b8b30
// Size: 970 bytes
// Class: GNData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_015b8b30(undefined8 param_1,char param_2)

{
  double dVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t in_ECX;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [12];
  float fVar19;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_3c;
  float local_38;
  float local_34;
  ulonglong uVar11;
  
  fVar8 = (float)param_1;
  uStack_50 = in_XMM0_Dc;
  local_58 = param_1;
  uStack_4c = in_XMM0_Dd;
  lVar6 = (longlong)unaff_ESI;
  fVar12 = *(float *)(unaff_RDI + 0x90);
  local_3c = *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10) + lVar6 * 4);
  uVar11 = FUN_015bcfa0(local_3c,&local_3c);
  uVar13 = uVar11 >> 0x20;
  fVar9 = (float)uVar11;
  auVar18 = local_58._4_12_;
  fVar19 = (float)(~-(uint)(fVar8 < DAT_02394274) & (uint)fVar8 |
                  -(uint)(fVar8 < DAT_02394274) & (uint)DAT_02390d34);
  if (fVar19 < DAT_02390124) {
    fVar19 = DAT_02390124 / fVar19;
  }
  fVar17 = DAT_02390d34;
  if (fVar19 <= DAT_02390d34) {
    fVar17 = fVar19;
  }
  local_38 = local_3c /
             *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10) + lVar6 * 4);
  fVar17 = DAT_02390d34 - fVar17;
  uVar3 = uVar11;
  if (0.0 < fVar9) {
    if (fVar9 <= DAT_02390124) {
      fVar17 = 0.0;
      uVar3 = 0;
    }
    else {
      local_38 = DAT_02390124 / local_38;
      fVar19 = fVar9 + DAT_02390d00 + fVar9 + DAT_02390d00;
      uVar11 = (ulonglong)(uint)(DAT_02390d34 - fVar9);
      uVar3 = CONCAT44(_UNK_023945e4 ^ (uint)uVar13,(float)(_DAT_023945e0 ^ (uint)fVar19) * fVar19);
    }
  }
  auVar14._0_4_ =
       fVar8 / *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x80) + 0x10) + lVar6 * 4);
  auVar14._4_12_ = auVar18;
  uVar13 = auVar14._0_8_;
  if (*(int *)(unaff_RDI + 0x40) == 3) {
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_34 = (float)FUN_017f2da0();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_017f2d90();
    local_34 = local_34 * (float)iVar4;
    fVar19 = (float)_exp2f((float)(unaff_ESI + 0x23) * DAT_023908e0 * DAT_023941f4);
    fVar8 = (fVar19 * DAT_023941f8) / local_34;
    fVar19 = local_34;
  }
  else {
    fVar8 = (float)unaff_ESI;
    fVar19 = local_34;
  }
  local_34 = fVar8;
  if ((0 < unaff_ESI) && (0.0 < local_34)) {
    fVar12 = (float)_powf(local_34,CONCAT44(_UNK_023945e4,
                                            (uint)(DAT_02390d34 - (fVar12 + fVar12 + DAT_02390d00))
                                            ^ _DAT_023945e0));
    fVar12 = auVar14._0_4_ / (fVar12 * local_34);
    if (DAT_0239424c < fVar17) {
      uVar10 = _powf(local_38);
      fVar19 = (float)_powf(uVar10,uVar3);
      fVar12 = fVar12 / fVar19;
    }
    auVar15._4_12_ = auVar18;
    auVar15._0_4_ = fVar12;
    uVar13 = auVar15._0_8_;
    fVar19 = local_34;
    if (0.0 < (float)uVar11) {
      fVar19 = (float)_powf(local_34,*(undefined4 *)(unaff_RDI + 0x98));
      fVar19 = (DAT_02390124 / fVar19) /
               *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10) + lVar6 * 4);
      if ((*(int *)(unaff_RDI + 0x40) == 3) && (local_34 < DAT_02390124)) {
        fVar19 = (float)_powf(fVar19,local_34 * local_34);
      }
      fVar19 = (float)_powf(fVar19,uVar11);
      auVar16._0_4_ = fVar12 / fVar19;
      auVar16._4_12_ = auVar18;
      uVar13 = auVar16._0_8_;
      fVar19 = local_34;
    }
  }
  local_34 = fVar19;
  if (param_2 != '\0') {
    dVar1 = (double)(float)uVar13;
    if ((0 < unaff_ESI) && (DAT_023e16a0 <= dVar1)) {
      fVar12 = *(float *)(unaff_RDI + 0x94) + DAT_02390124;
      uVar2 = -(uint)(fVar12 < DAT_02390124) & (uint)(fVar12 + fVar12 + DAT_02390d00) |
              ~-(uint)(fVar12 < DAT_02390124) & (uint)fVar12;
      uVar7 = -(uint)((float)(uVar2 & _DAT_02390140) < DAT_02394254);
      fVar12 = (float)(uVar7 & (uint)DAT_02394254 | ~uVar7 & uVar2);
      if (DAT_02394274 <= (float)(_DAT_02390140 & (uint)fVar12)) {
        dVar1 = (double)_log();
        dVar1 = (double)_exp(SUB84(dVar1 / (double)fVar12,0));
      }
    }
    uVar13 = (ulonglong)(uint)(float)dVar1;
  }
  return CONCAT44((int)(uVar13 >> 0x20),
                  (float)uVar13 *
                  *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10) + lVar6 * 4));
}


