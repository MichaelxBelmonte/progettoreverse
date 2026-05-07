// Function: FUN_01c5f8c0
// Address: 01c5f8c0
// Size: 515 bytes
// Class: GNString


undefined8 FUN_01c5f8c0(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  void *pvVar5;
  bool bVar6;
  pthread_key_t in_ECX;
  char unaff_SIL;
  longlong unaff_RDI;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar11;
  float fVar12;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  fVar12 = (float)((ulonglong)param_2 >> 0x20);
  fVar11 = (float)param_2;
  fVar9 = fVar11;
  fVar8 = fVar12;
  if (*(int *)(unaff_RDI + 0x1c8) == 1) {
    auVar14._0_8_ = FUN_01e3f820();
    auVar14._8_4_ = extraout_XMM0_Dc;
    auVar14._12_4_ = extraout_XMM0_Dd;
    auVar13._4_4_ = fVar8;
    auVar13._0_4_ = fVar9;
    auVar13._8_4_ = in_XMM1_Dc;
    auVar13._12_4_ = in_XMM1_Dd;
    if (*(int *)(unaff_RDI + 0x1c8) == 1) {
      auVar4._4_4_ = fVar8;
      auVar4._0_4_ = fVar8 + DAT_0241c6e8 + DAT_02390d00;
      auVar4._8_4_ = in_XMM1_Dd;
      auVar4._12_4_ = in_XMM1_Dd;
      auVar14 = insertps(auVar14,auVar4,0x10);
      uVar10 = auVar14._0_8_;
      uVar7 = DAT_02392fd8;
    }
    else {
      auVar14 = blendps(auVar14,auVar13,2);
      uVar10 = auVar14._0_8_;
      uVar7 = 0;
    }
    auVar13 = insertps(auVar13,ZEXT416(uVar7),0x10);
    fVar9 = (float)uVar10;
    fVar8 = (float)((ulonglong)uVar10 >> 0x20);
    in_ECX = FUN_00d05410(fVar11,fVar9,auVar13._0_8_);
    if ((char)in_ECX != '\0') {
      return 5;
    }
  }
  lVar2 = *(longlong *)(unaff_RDI + 0x188);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar3 = (double)FUN_016c9480(param_1);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01e3f820();
  fVar8 = fVar8 + (float)((ulonglong)uVar10 >> 0x20) + DAT_02390d00;
  iVar1 = *(int *)(unaff_RDI + 0x1c8);
  if (iVar1 == 1) {
    fVar8 = fVar8 + DAT_0241c6e8;
  }
  fVar9 = (float)_logf((float)(dVar3 / *(double *)(unaff_RDI + 0x1c0)),fVar9 + (float)uVar10);
  fVar8 = fVar8 - (fVar9 / *(float *)(unaff_RDI + 0x2a8)) * fVar8;
  bVar6 = fVar12 < fVar8 && DAT_023b5d74 + fVar8 <= fVar12;
  if ((iVar1 == 0) || (unaff_SIL != '\0')) {
    if (bVar6) {
      return 1;
    }
    fVar9 = fVar8 + DAT_023b36a0;
    if (fVar12 < fVar8) goto LAB_01c5faac;
    uVar10 = 2;
  }
  else {
    if (bVar6) {
      return 1;
    }
    fVar9 = fVar12;
    FUN_01e3f820();
    fVar9 = ((fVar9 + DAT_0241c6e8) - fVar8) * DAT_02390118 + fVar9 + DAT_0241c6e8;
    if (fVar12 < fVar8) goto LAB_01c5faac;
    uVar10 = 4;
  }
  if (fVar12 < fVar9) {
    return uVar10;
  }
LAB_01c5faac:
  uVar10 = 3;
  if (fVar12 < fVar9) {
    uVar10 = 0;
  }
  return uVar10;
}


