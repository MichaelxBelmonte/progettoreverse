// Function: FUN_01c76920
// Address: 01c76920
// Size: 836 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01c76920(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  char cVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t this_ptr;
  uint64_t uVar10;
  double dVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint64_t in_XMM1_Qb;
  
  FUN_01d384c0();
  FUN_01e49090();
  plVar1 = *(int64_t **)(this_ptr + 0x170);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar10 = (**(code **)(*plVar1 + 0x388))();
  *(void*)(this_ptr + 0x280) = uVar10;
  FUN_00d50b20();
  uVar10 = FUN_01e3f820();
  if (*(int *)(this_ptr + 0x1c8) == 1) {
    *(void*)(this_ptr + 0x280) = 0;
  }
  else {
    cVar6 = FUN_016bf360();
    lVar2 = *(int64_t *)(this_ptr + 0x188);
    if (cVar6 == '\0') {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(int64_t *)(this_ptr + 0x188);
      }
      else {
        lVar8 = *(int64_t *)(this_ptr + 0x188);
      }
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c45d0(*(void*)(this_ptr + 0x280),0);
      uVar12 = FUN_016c46a0(0,0);
      *(void*)(this_ptr + 0x280) = uVar12;
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016bf2e0();
      pVar9 = 0;
      uVar12 = FUN_016c46a0(0,0);
      *(void*)(this_ptr + 0x280) = uVar12;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x188);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016bf310();
      FUN_00e7c260();
      dVar11 = (double)FUN_016c46a0(0,0);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      *(double *)(this_ptr + 0x278) = dVar11 - *(double *)(this_ptr + 0x280);
    }
  }
  plVar1 = *(int64_t **)(this_ptr + 0x170);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar12 = (**(code **)(*plVar1 + 0x390))(*(void*)(this_ptr + 0x280));
  FUN_00d50b20();
  plVar1 = *(int64_t **)(this_ptr + 0x170);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar13 = (**(code **)(*plVar1 + 0x390))
                     (*(double *)(this_ptr + 0x280) + *(double *)(this_ptr + 0x278));
  FUN_00d50b20();
  auVar5._8_8_ = extraout_XMM0_Qb_00;
  auVar5._0_8_ = uVar12;
  auVar3._8_8_ = extraout_XMM0_Qb_01;
  auVar3._0_8_ = uVar13;
  auVar14._4_12_ = auVar3._4_12_;
  auVar14._0_4_ = (float)uVar13 - (float)uVar12;
  auVar15._8_8_ = in_XMM1_Qb;
  auVar15._0_8_ = param_2;
  blendps(auVar15,auVar14,1);
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4._0_8_ = uVar10;
  auVar15 = blendps(auVar4,auVar5,1);
  return auVar15._0_8_;
}

