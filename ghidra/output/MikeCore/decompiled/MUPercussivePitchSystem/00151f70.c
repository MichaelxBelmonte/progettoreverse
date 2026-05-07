// Function: FUN_00151f70
// Address: 00151f70
// Size: 715 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x00152177) */
/* WARNING: Removing unreachable block (ram,0x00152184) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00151f70(float param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar18;
  undefined1 auVar15 [16];
  float fVar19;
  undefined4 uVar20;
  longlong local_48;
  char local_40;
  longlong local_30;
  char local_28;
  
  fVar16 = (float)((ulonglong)param_2 >> 0x20);
  fVar12 = (float)param_2;
  fVar13 = fVar12;
  (**(code **)(*unaff_RDI + 0x4d8))();
  (**(code **)(*unaff_RDI + 0x958))();
  bVar5 = true;
  if (local_30 == 0) {
    (**(code **)(*unaff_RDI + 0x938))();
    bVar5 = local_48 != 0;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    (**(code **)(*unaff_RDI + 0x948))();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_28 == '\0') && (local_30 != 0)) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    dVar1 = *(double *)(local_30 + 0x38);
    fVar14 = *(float *)((longlong)unaff_RDI + 0x15c) * (float)dVar1;
    fVar17 = 0.0;
    uVar18 = 0;
    FUN_01e3f820();
    if (param_1 <= DAT_02390124) {
      if (param_1 < DAT_02390124) {
        fVar14 = fVar14 / _DAT_023942ac;
      }
    }
    else {
      fVar14 = fVar14 * _DAT_023942ac;
    }
    fVar6 = fVar17 / DAT_023941e0;
    fVar19 = fVar17;
    uVar20 = uVar18;
    if (fVar12 <= DAT_02390124) {
      fVar7 = fVar6;
      if (fVar12 < DAT_02390124) {
        if (DAT_02390d34 <= fVar6) {
          fVar7 = fVar6 + DAT_02390d00;
        }
        else {
          fVar7 = DAT_0239011c;
          fVar19 = 0.0;
          uVar20 = 0;
        }
      }
    }
    else {
      fVar7 = DAT_02390124;
      fVar19 = 0.0;
      uVar20 = 0;
      if (DAT_02390124 <= fVar6) {
        fVar7 = fVar6 + DAT_02390124;
        fVar19 = fVar17;
        uVar20 = uVar18;
      }
    }
    *(float *)((longlong)unaff_RDI + 0x15c) = fVar14 / (float)dVar1;
    FUN_00d50b20();
    auVar3._4_4_ = fVar19;
    auVar3._0_4_ = fVar7;
    auVar3._8_4_ = uVar20;
    auVar3._12_4_ = uVar20;
    auVar10._4_12_ = auVar3._4_12_;
    auVar10._0_4_ = fVar7 * DAT_023941e0;
    auVar2._4_4_ = fVar16;
    auVar2._0_4_ = fVar13;
    auVar2._8_4_ = in_XMM1_Dc;
    auVar2._12_4_ = in_XMM1_Dd;
    auVar15 = insertps(auVar2,auVar10,0x10);
    param_1 = *(float *)((longlong)unaff_RDI + 0x15c);
  }
  else {
    param_1 = param_1 * *(float *)((longlong)unaff_RDI + 0x15c);
    *(float *)((longlong)unaff_RDI + 0x15c) = param_1;
    auVar15._4_4_ = fVar16;
    auVar15._0_4_ = fVar13;
    auVar15._8_4_ = in_XMM1_Dc;
    auVar15._12_4_ = in_XMM1_Dd;
    auVar8._4_4_ = fVar16;
    auVar8._0_4_ = fVar16;
    auVar8._8_4_ = in_XMM1_Dd;
    auVar8._12_4_ = in_XMM1_Dd;
    auVar9._4_12_ = auVar8._4_12_;
    auVar9._0_4_ = fVar16 * fVar12;
    auVar15 = insertps(auVar15,auVar9,0x10);
  }
  auVar11._0_4_ = (float)(double)unaff_RDI[0x2d] * param_1 + DAT_02390110;
  auVar11._4_4_ = (int)((ulonglong)unaff_RDI[0x2d] >> 0x20);
  auVar11._8_8_ = 0;
  auVar15 = blendps(auVar11,auVar15,0xe);
  (**(code **)(*unaff_RDI + 0x4e8))(auVar15._0_8_);
  (**(code **)(*unaff_RDI + 0x988))();
  if (unaff_RDI[0x2a] != 0) {
    unaff_RDI[0x2a] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}


