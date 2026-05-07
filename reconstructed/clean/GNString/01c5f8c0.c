// Function: FUN_01c5f8c0
// Address: 01c5f8c0
// Size: 515 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01c5f8c0(uint32_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  double dVar3;
  uint8_t auVar4 [16];
  void *pvVar5;
  bool bVar6;
  void* in_ECX;
  char unaff_SIL;
  int64_t this_ptr;
  uint uVar7;
  float fVar8;
  float fVar9;
  uint64_t uVar10;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  float fVar11;
  float fVar12;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  
  fVar12 = (float)((uint64_t)param_2 >> 0x20);
  fVar11 = (float)param_2;
  fVar9 = fVar11;
  fVar8 = fVar12;
  if (*(int *)(this_ptr + 0x1c8) == 1) {
    auVar14._0_8_ = FUN_01e3f820();
    auVar14._8_4_ = extraout_XMM0_Dc;
    auVar14._12_4_ = extraout_XMM0_Dd;
    auVar13._4_4_ = fVar8;
    auVar13._0_4_ = fVar9;
    auVar13._8_4_ = in_XMM1_Dc;
    auVar13._12_4_ = in_XMM1_Dd;
    if (*(int *)(this_ptr + 0x1c8) == 1) {
      auVar4._4_4_ = fVar8;
      auVar4._0_4_ = fVar8 + g_0241c6e8 + g_02390d00;
      auVar4._8_4_ = in_XMM1_Dd;
      auVar4._12_4_ = in_XMM1_Dd;
      auVar14 = insertps(auVar14,auVar4,0x10);
      uVar10 = auVar14._0_8_;
      uVar7 = g_02392fd8;
    }
    else {
      auVar14 = blendps(auVar14,auVar13,2);
      uVar10 = auVar14._0_8_;
      uVar7 = 0;
    }
    auVar13 = insertps(auVar13,ZEXT416(uVar7),0x10);
    fVar9 = (float)uVar10;
    fVar8 = (float)((uint64_t)uVar10 >> 0x20);
    in_ECX = FUN_00d05410(fVar11,fVar9,auVar13._0_8_);
    if ((char)in_ECX != '\0') {
      return 5;
    }
  }
  lVar2 = *(int64_t *)(this_ptr + 0x188);
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
  fVar8 = fVar8 + (float)((uint64_t)uVar10 >> 0x20) + g_02390d00;
  iVar1 = *(int *)(this_ptr + 0x1c8);
  if (iVar1 == 1) {
    fVar8 = fVar8 + g_0241c6e8;
  }
  fVar9 = (float)_logf((float)(dVar3 / *(double *)(this_ptr + 0x1c0)),fVar9 + (float)uVar10);
  fVar8 = fVar8 - (fVar9 / *(float *)(this_ptr + 0x2a8)) * fVar8;
  bVar6 = fVar12 < fVar8 && g_023b5d74 + fVar8 <= fVar12;
  if ((iVar1 == 0) || (unaff_SIL != '\0')) {
    if (bVar6) {
      return 1;
    }
    fVar9 = fVar8 + g_023b36a0;
    if (fVar12 < fVar8) goto LAB_01c5faac;
    uVar10 = 2;
  }
  else {
    if (bVar6) {
      return 1;
    }
    fVar9 = fVar12;
    FUN_01e3f820();
    fVar9 = ((fVar9 + g_0241c6e8) - fVar8) * g_02390118 + fVar9 + g_0241c6e8;
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

