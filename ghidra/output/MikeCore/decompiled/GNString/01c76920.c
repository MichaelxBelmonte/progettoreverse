// Function: FUN_01c76920
// Address: 01c76920
// Size: 836 bytes
// Class: GNString


undefined8 FUN_01c76920(pthread_key_t param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong unaff_RDI;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 in_XMM1_Qb;
  
  FUN_01d384c0();
  FUN_01e49090();
  plVar1 = *(longlong **)(unaff_RDI + 0x170);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  uVar10 = (**(code **)(*plVar1 + 0x388))();
  *(undefined8 *)(unaff_RDI + 0x280) = uVar10;
  FUN_00d50b20();
  uVar10 = FUN_01e3f820();
  if (*(int *)(unaff_RDI + 0x1c8) == 1) {
    *(undefined8 *)(unaff_RDI + 0x280) = 0;
  }
  else {
    cVar6 = FUN_016bf360();
    lVar2 = *(longlong *)(unaff_RDI + 0x188);
    if (cVar6 == '\0') {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(longlong *)(unaff_RDI + 0x188);
      }
      else {
        lVar8 = *(longlong *)(unaff_RDI + 0x188);
      }
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c45d0(*(undefined8 *)(unaff_RDI + 0x280),0);
      uVar12 = FUN_016c46a0(0,0);
      *(undefined8 *)(unaff_RDI + 0x280) = uVar12;
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
      *(undefined8 *)(unaff_RDI + 0x280) = uVar12;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = *(longlong *)(unaff_RDI + 0x188);
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
      *(double *)(unaff_RDI + 0x278) = dVar11 - *(double *)(unaff_RDI + 0x280);
    }
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x170);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  uVar12 = (**(code **)(*plVar1 + 0x390))(*(undefined8 *)(unaff_RDI + 0x280));
  FUN_00d50b20();
  plVar1 = *(longlong **)(unaff_RDI + 0x170);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  uVar13 = (**(code **)(*plVar1 + 0x390))
                     (*(double *)(unaff_RDI + 0x280) + *(double *)(unaff_RDI + 0x278));
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


