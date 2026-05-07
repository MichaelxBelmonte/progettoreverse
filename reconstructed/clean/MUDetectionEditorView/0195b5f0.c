// Function: FUN_0195b5f0
// Address: 0195b5f0
// Size: 996 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_0195b5f0(void* param_1,uint64_t param_2)

{
  byte bVar1;
  void *pvVar2;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar3;
  uint32_t uVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  uint64_t in_XMM1_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint64_t local_58;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (this_ptr[0x2f] != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_38 == (int64_t *)0x0) {
      bVar1 = 0;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      if (local_88 == 0) {
        bVar1 = 0;
      }
      else {
        FUN_01989f80();
        bVar1 = FUN_019b43a0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        bVar1 = bVar1 ^ 1;
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar1 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_012f7cb0();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_012f9490();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      uVar7 = (**(code **)(*local_38 + 0x938))(uVar3);
      fVar5 = (float)(**(code **)(*this_ptr + 0x4d8))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      local_58 = (**(code **)(*local_38 + 0x938))(uVar4);
      uStack_50 = extraout_XMM0_Dc_00;
      uStack_4c = extraout_XMM0_Dd_00;
      fVar6 = (float)(**(code **)(*this_ptr + 0x4d8))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      uVar8 = FUN_01e436c0();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      fVar5 = (float)uVar7 - fVar5;
      auVar10._4_12_ = local_58._4_12_;
      auVar10._0_4_ = ((float)local_58 - fVar6) - fVar5;
      uVar9 = (**(code **)(*this_ptr + 0x4d8))();
      auVar12._0_4_ = (float)uVar8 - (float)uVar9;
      auVar12._4_4_ = (float)((uint64_t)uVar8 >> 0x20) - (float)((uint64_t)uVar9 >> 0x20);
      auVar12._8_4_ = extraout_XMM0_Dc_01 - extraout_XMM0_Dc_02;
      auVar12._12_4_ = extraout_XMM0_Dd_01 - extraout_XMM0_Dd_02;
      auVar11._8_8_ = in_XMM1_Qb;
      auVar11._0_8_ = param_2;
      auVar11 = blendps(auVar10,auVar11,0xe);
      auVar13._4_4_ = (int)((uint64_t)uVar7 >> 0x20);
      auVar13._0_4_ = fVar5;
      auVar13._8_4_ = extraout_XMM0_Dc;
      auVar13._12_4_ = extraout_XMM0_Dd;
      auVar13 = blendps(auVar12,auVar13,1);
      (**(code **)(*(int64_t *)*arg1 + 0x390))(auVar13._0_4_,auVar11._0_8_);
      return 1;
    }
  }
  return 0;
}

