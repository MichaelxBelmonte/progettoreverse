// Function: FUN_0195b5f0
// Address: 0195b5f0
// Size: 996 bytes
// Class: MUDetectionEditorView


undefined8 FUN_0195b5f0(pthread_key_t param_1,undefined8 param_2)

{
  byte bVar1;
  void *pvVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined8 in_XMM1_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (unaff_RDI[0x2f] != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_38 == (longlong *)0x0) {
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
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
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
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
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
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      uVar7 = (**(code **)(*local_38 + 0x938))(uVar3);
      fVar5 = (float)(**(code **)(*unaff_RDI + 0x4d8))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      local_58 = (**(code **)(*local_38 + 0x938))(uVar4);
      uStack_50 = extraout_XMM0_Dc_00;
      uStack_4c = extraout_XMM0_Dd_00;
      fVar6 = (float)(**(code **)(*unaff_RDI + 0x4d8))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      uVar8 = FUN_01e436c0();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      fVar5 = (float)uVar7 - fVar5;
      auVar10._4_12_ = local_58._4_12_;
      auVar10._0_4_ = ((float)local_58 - fVar6) - fVar5;
      uVar9 = (**(code **)(*unaff_RDI + 0x4d8))();
      auVar12._0_4_ = (float)uVar8 - (float)uVar9;
      auVar12._4_4_ = (float)((ulonglong)uVar8 >> 0x20) - (float)((ulonglong)uVar9 >> 0x20);
      auVar12._8_4_ = extraout_XMM0_Dc_01 - extraout_XMM0_Dc_02;
      auVar12._12_4_ = extraout_XMM0_Dd_01 - extraout_XMM0_Dd_02;
      auVar11._8_8_ = in_XMM1_Qb;
      auVar11._0_8_ = param_2;
      auVar11 = blendps(auVar10,auVar11,0xe);
      auVar13._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
      auVar13._0_4_ = fVar5;
      auVar13._8_4_ = extraout_XMM0_Dc;
      auVar13._12_4_ = extraout_XMM0_Dd;
      auVar13 = blendps(auVar12,auVar13,1);
      (**(code **)(*(longlong *)*unaff_RSI + 0x390))(auVar13._0_4_,auVar11._0_8_);
      return 1;
    }
  }
  return 0;
}


