// Function: FUN_00503190
// Address: 00503190
// Size: 1086 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00503190(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  int64_t *this_ptr;
  int64_t **pplVar9;
  bool bVar10;
  float fVar11;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar12 [16];
  uint32_t uVar13;
  float fVar14;
  uint32_t in_XMM1_Dc;
  float fVar15;
  uint32_t in_XMM1_Dd;
  float fVar16;
  uint8_t auVar17 [16];
  int64_t *local_68;
  char local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint8_t local_48 [16];
  int64_t *local_38;
  char local_30;
  uint64_t extraout_XMM0_Qb_02;
  
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  uVar13 = (uint32_t)param_2;
  FUN_01f96ec0();
  plVar6 = local_38;
  plVar1 = (int64_t *)this_ptr[0x42];
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == plVar1) {
    FUN_01e40eb0();
    plVar1 = local_38;
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == this_ptr) {
      if ((int64_t *)this_ptr[0x2b] != (int64_t *)0x0) {
        local_48._0_8_ = (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d8))();
        local_48._8_8_ = extraout_XMM0_Qb;
        local_58 = (float)uVar13;
        fStack_54 = fVar11;
        fStack_50 = (float)in_XMM1_Dc;
        fStack_4c = (float)in_XMM1_Dd;
        fVar11 = (float)FUN_01b2b5d0();
        auVar4._4_4_ = fStack_54;
        auVar4._0_4_ = local_58;
        auVar4._8_4_ = fStack_50;
        auVar4._12_4_ = fStack_4c;
        auVar17._4_4_ = fStack_54;
        auVar17._0_4_ = fStack_54 - fVar11;
        auVar17._8_4_ = fStack_4c;
        auVar17._12_4_ = fStack_4c;
        auVar17 = insertps(auVar4,auVar17,0x10);
        uVar13 = auVar17._0_4_;
        fVar11 = auVar17._4_4_;
        in_XMM1_Dc = auVar17._8_4_;
        in_XMM1_Dd = auVar17._12_4_;
        (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d0))();
        FUN_01cf5a00();
      }
      local_48._0_8_ = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
      local_48._8_8_ = extraout_XMM0_Qb_00;
      local_58 = (float)uVar13;
      fStack_54 = fVar11;
      fStack_50 = (float)in_XMM1_Dc;
      fStack_4c = (float)in_XMM1_Dd;
      fVar11 = (float)FUN_01b2b5d0();
      auVar5._4_4_ = fStack_54;
      auVar5._0_4_ = local_58;
      auVar5._8_4_ = fStack_50;
      auVar5._12_4_ = fStack_4c;
      auVar2._4_4_ = fStack_54;
      auVar2._0_4_ = fStack_54 - fVar11;
      auVar2._8_4_ = fStack_4c;
      auVar2._12_4_ = fStack_4c;
      insertps(auVar5,auVar2,0x10);
      (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d0))();
      FUN_01cf5a00();
    }
    if (*(char *)((int64_t)this_ptr + 0x234) != '\0') {
      *(void*)((int64_t)this_ptr + 0x234) = 0;
    }
    if (*(char *)((int64_t)this_ptr + 0x235) != '\0') {
      *(void*)((int64_t)this_ptr + 0x235) = 0;
    }
    if (this_ptr[0x47] != 0) {
      this_ptr[0x47] = 0;
      FUN_00d50b20();
    }
  }
  FUN_01f96ec0();
  pplVar9 = &local_68;
  FUN_01d98320();
  plVar1 = local_68;
  FUN_00275460();
  if (plVar1 == (int64_t *)0x0) {
LAB_00503338:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_00503338;
  }
  plVar6 = local_38;
  plVar1 = *pplVar9;
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != plVar1) {
    return;
  }
  FUN_01d98320();
  plVar1 = local_38;
  if ((((local_30 == '\0') && (local_38 != (int64_t *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_48._0_8_ = FUN_01cf5cf0();
  local_48._8_8_ = extraout_XMM0_Qb_01;
  FUN_01b18290();
  (**(code **)(*plVar1 + 0x4e8))();
  FUN_01cf5c80();
  (**(code **)(*this_ptr + 0x928))();
  auVar12._0_8_ = FUN_01cf5cf0();
  auVar12._8_8_ = extraout_XMM0_Qb_02;
  fVar11 = (float)((uint64_t)auVar12._0_8_ >> 0x20);
  fVar15 = (float)extraout_XMM0_Qb_02;
  fVar16 = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
  fVar14 = (float)auVar12._0_8_ + *(float *)(this_ptr + 0x46);
  if (fVar14 < 0.0) {
    fVar14 = 0.0;
    fVar11 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    local_48 = blendps(auVar12,ZEXT816(0),1);
  }
  else {
    local_48._4_12_ = auVar12._4_12_;
    local_48._0_4_ = (float)auVar12._0_8_ + *(float *)(this_ptr + 0x46);
  }
  FUN_01cf3f40();
  (**(code **)(*local_38 + 0x4d8))();
  local_58 = fVar14;
  fStack_54 = fVar11;
  fStack_50 = fVar15;
  fStack_4c = fVar16;
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  fVar14 = local_58 - fVar14;
  if (fVar14 < (float)local_48._0_4_) {
    fVar11 = fStack_54;
    fVar15 = fStack_50;
    fVar16 = fStack_4c;
    FUN_01cf3f40();
    (**(code **)(*local_38 + 0x4d8))();
    local_58 = fVar14;
    fStack_54 = fVar11;
    fStack_50 = fVar15;
    fStack_4c = fVar16;
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar14 = local_58 - fVar14;
    auVar3._4_4_ = fStack_54 - fVar11;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = fStack_50 - fVar15;
    auVar3._12_4_ = fStack_4c - fVar16;
    blendps(local_48,auVar3,0xd);
  }
  FUN_01cf5c80();
  (**(code **)(*plVar1 + 0x620))();
  FUN_01ad5a70();
  FUN_01adaed0();
  if ((fVar14 == 0.0) && (!NAN(fVar14))) {
    FUN_01e40eb0();
    plVar1 = local_38;
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x968))();
      goto LAB_005035b9;
    }
  }
  FUN_01adaed0();
  if ((fVar14 != 0.0) || (NAN(fVar14))) {
    FUN_01e40eb0();
    if (local_38 == (int64_t *)0x0) {
      iVar8 = FUN_01ad3ca0();
      bVar10 = iVar8 != -1000000;
    }
    else {
      bVar10 = false;
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar10) {
      (**(code **)(*this_ptr + 0x960))();
    }
  }
LAB_005035b9:
  FUN_00d50b20();
  return;
}

