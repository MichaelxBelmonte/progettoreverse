// Function: FUN_01b20d80
// Address: 01b20d80
// Size: 1546 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01b20d80(void* param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int unaff_ESI;
  int64_t *this_ptr;
  int iVar6;
  float fVar7;
  uint32_t uVar8;
  float fVar9;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  uint8_t in_XMM1 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t local_58 [12];
  float fStack_4c;
  int64_t local_48;
  char local_40;
  
  if ((int64_t *)this_ptr[0x52] == (int64_t *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*(int64_t *)this_ptr[0x52] + 0xa88))();
  FUN_01b1dbf0();
  FUN_01ad3cb0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_01b20dec;
    }
  }
  else if (local_48 != 0) {
LAB_01b20dec:
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01770870();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar6 = FUN_0174a9c0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_0174a9c0();
      if ((unaff_ESI < 1) || (iVar6 <= iVar4)) {
        if ((-1 < unaff_ESI) || (iVar4 <= iVar6)) {
          bVar1 = false;
          goto LAB_01b21082;
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_01770c70();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        unaff_ESI = unaff_ESI + iVar6;
      }
      else {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_01770c70();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        unaff_ESI = unaff_ESI - iVar6;
      }
    }
    bVar1 = false;
    goto LAB_01b21082;
  }
  bVar1 = true;
LAB_01b21082:
  iVar6 = unaff_ESI + *(int *)((int64_t)this_ptr + 0x194);
  *(int *)((int64_t)this_ptr + 0x194) = iVar6;
  FUN_01ad3320();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    iVar6 = -1000000;
  }
  if ((int)this_ptr[0x32] != iVar6) {
    *(int *)(this_ptr + 0x32) = iVar6;
    (**(code **)(*this_ptr + 0x620))();
  }
  FUN_01b03750();
  FUN_01ad37a0();
  if (iVar3 == 1) {
    FUN_01b06140();
    if ((*(int *)((int64_t)this_ptr + 0x284) == 1) || (*(int *)((int64_t)this_ptr + 0x284) == 0)
       ) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = g_023dccec;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = g_023dccf4;
    }
    else {
      local_58._0_8_ = FUN_01e3f820();
      local_58._8_4_ = extraout_XMM0_Dc_00;
      fStack_4c = extraout_XMM0_Dd_00;
      if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
        auVar13 = in_XMM1;
        FUN_01e3f820();
        auVar11 = blendps(auVar13,g_0241c700,0xd);
      }
      else {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = g_023dccf4;
      }
      auVar14._0_4_ = auVar11._0_4_ + (float)local_58._0_8_;
      auVar14._4_4_ = auVar11._4_4_ + (float)((uint64_t)local_58._0_8_ >> 0x20);
      auVar14._8_4_ = auVar11._8_4_ + extraout_XMM0_Dc_00;
      auVar14._12_4_ = auVar11._12_4_ + extraout_XMM0_Dd_00;
      auVar13 = blendps(auVar14,_local_58,2);
      auVar18 = blendps(in_XMM1,g_0241c710,0xd);
    }
    fVar9 = auVar18._0_4_;
    auVar19._4_12_ = auVar18._4_12_;
    auVar17._4_12_ = auVar13._4_12_;
    auVar17._0_4_ = auVar13._0_4_ + fVar9 * g_0239011c;
    if ((fVar9 == 0.0) && (!NAN(fVar9))) {
      auVar17 = auVar13;
    }
    auVar19._0_4_ = fVar9 * g_0239011c;
    if ((fVar9 == 0.0) && (!NAN(fVar9))) {
      auVar19 = auVar18;
    }
    fVar9 = auVar17._0_4_ + g_023942a8;
    if ((auVar19._0_4_ == 0.0) && (!NAN(auVar19._0_4_))) {
      fVar9 = auVar17._0_4_;
    }
    (**(code **)(*this_ptr + 0x618))(fVar9);
    uVar8 = FUN_01b05190();
    FUN_01e436c0();
    cVar2 = FUN_00d054a0(uVar8);
    if (cVar2 == '\0') {
      FUN_01b05190();
      (**(code **)(*this_ptr + 0x518))();
    }
  }
  else if (iVar3 == 0) {
    FUN_01b058e0();
    if ((*(int *)((int64_t)this_ptr + 0x284) == 1) || (*(int *)((int64_t)this_ptr + 0x284) == 0)
       ) {
      fVar9 = (float)g_023dccec;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = g_023dccf4;
    }
    else {
      local_58._0_8_ = FUN_01e3f820();
      local_58._8_4_ = extraout_XMM0_Dc;
      fStack_4c = extraout_XMM0_Dd;
      if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
        auVar13 = in_XMM1;
        FUN_01e3f820();
        auVar10 = blendps(auVar13,g_0241c700,0xd);
      }
      else {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = g_023dccf4;
      }
      auVar12._0_4_ = auVar10._0_4_ + (float)local_58._0_8_;
      auVar12._4_4_ = auVar10._4_4_ + (float)((uint64_t)local_58._0_8_ >> 0x20);
      auVar12._8_4_ = auVar10._8_4_ + extraout_XMM0_Dc;
      auVar12._12_4_ = auVar10._12_4_ + extraout_XMM0_Dd;
      auVar13 = blendps(auVar12,_local_58,2);
      fVar9 = auVar13._0_4_;
      auVar15 = blendps(in_XMM1,g_0241c710,0xd);
    }
    fVar7 = auVar15._0_4_;
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = fVar7 * g_0239011c;
    if ((fVar7 == 0.0) && (!NAN(fVar7))) {
      auVar16 = auVar15;
    }
    fVar7 = fVar9 + g_023942a8;
    if ((auVar16._0_4_ == 0.0) && (!NAN(auVar16._0_4_))) {
      fVar7 = fVar9;
    }
    (**(code **)(*this_ptr + 0x618))(fVar7);
    uVar8 = FUN_01b05190();
    FUN_01e436c0();
    cVar2 = FUN_00d054a0(uVar8);
    if (cVar2 == '\0') {
      FUN_01b05190();
      (**(code **)(*this_ptr + 0x518))();
    }
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}

