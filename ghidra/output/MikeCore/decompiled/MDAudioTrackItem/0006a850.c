// Function: FUN_0006a850
// Address: 0006a850
// Size: 785 bytes
// Class: MDAudioTrackItem


void FUN_0006a850(pthread_key_t param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  pthread_key_t pVar7;
  int in_EDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined4)param_2;
  (**(code **)(*unaff_RDI + 0x4d8))();
  lVar5 = unaff_RDI[0x28];
  lVar1 = *unaff_RSI;
  if (lVar5 == lVar1) {
    if ((int)unaff_RDI[0x29] == in_EDX) {
      return;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x28] = lVar1;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x27] != 0) {
    unaff_RDI[0x27] = 0;
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2a] != 0) {
    unaff_RDI[0x2a] = 0;
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x29) = in_EDX;
  if (unaff_RDI[0x28] == 0) {
    if ((unaff_RDI[0x32] != 0) && (FUN_01e1e360(), unaff_RDI[0x32] != 0)) {
      unaff_RDI[0x32] = 0;
      FUN_00d50b20();
    }
    goto LAB_0006ab41;
  }
  FUN_01646440();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01646020();
  pVar7 = *(pthread_key_t *)(unaff_RDI + 0x29);
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  pvVar4 = _pthread_getspecific(pVar7);
  plVar8 = local_38;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar8 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = (**(code **)(*plVar8 + 0x398))();
  unaff_RDI[0x2d] = lVar5;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  dVar3 = DAT_0238fee8;
  dVar2 = (double)unaff_RDI[0x2d];
  if ((double)unaff_RDI[0x2d] < DAT_0238fee8) {
    unaff_RDI[0x2d] = 0x3ff0000000000000;
    dVar2 = dVar3;
  }
  auVar9._4_4_ = uVar11;
  auVar9._0_4_ = uVar10;
  auVar9._8_4_ = in_XMM1_Dc;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar9 = blendps(auVar9,ZEXT416((uint)((float)dVar2 * *(float *)((longlong)unaff_RDI + 0x15c) +
                                        DAT_02390110)),1);
  (**(code **)(*unaff_RDI + 0x4e8))(auVar9._0_8_);
  (**(code **)(*unaff_RDI + 0x968))();
  FUN_01e1eb80(DAT_02390108);
  plVar8 = (longlong *)unaff_RDI[0x32];
  plVar6 = plVar8;
  if (plVar8 != local_38) {
    plVar6 = local_38;
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        goto LAB_0006aabb;
      }
      FUN_00d50b00();
      plVar8 = (longlong *)unaff_RDI[0x32];
      unaff_RDI[0x32] = (longlong)local_38;
    }
    else {
      local_30 = '\0';
LAB_0006aabb:
      unaff_RDI[0x32] = (longlong)plVar6;
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0006ab41:
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}


