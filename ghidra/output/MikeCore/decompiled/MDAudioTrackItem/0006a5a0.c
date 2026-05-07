// Function: FUN_0006a5a0
// Address: 0006a5a0
// Size: 589 bytes
// Class: MDAudioTrackItem


void FUN_0006a5a0(pthread_key_t param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  longlong *local_30;
  char local_28;
  
  uVar10 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar9 = (undefined4)param_2;
  (**(code **)(*unaff_RDI + 0x4d8))();
  lVar4 = unaff_RDI[0x27];
  lVar1 = *unaff_RSI;
  if (lVar4 == lVar1) {
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  unaff_RDI[0x27] = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x28] != 0) {
    unaff_RDI[0x28] = 0;
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2a] != 0) {
    unaff_RDI[0x2a] = 0;
    FUN_00d50b20();
  }
  if (unaff_RDI[0x27] == 0) {
    if ((unaff_RDI[0x32] != 0) && (FUN_01e1e360(), unaff_RDI[0x32] != 0)) {
      unaff_RDI[0x32] = 0;
      FUN_00d50b20();
    }
    goto LAB_0006a7cf;
  }
  FUN_013fb320();
  pvVar3 = _pthread_getspecific(param_1);
  plVar6 = local_30;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (longlong *)local_30[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  dVar7 = (double)(**(code **)(*plVar6 + 0x398))();
  unaff_RDI[0x2d] = (longlong)dVar7;
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
    dVar7 = (double)unaff_RDI[0x2d];
  }
  dVar2 = DAT_0238fee8;
  if (dVar7 < DAT_0238fee8) {
    unaff_RDI[0x2d] = 0x3ff0000000000000;
    dVar7 = dVar2;
  }
  auVar8._4_4_ = uVar10;
  auVar8._0_4_ = uVar9;
  auVar8._8_4_ = in_XMM1_Dc;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar8 = blendps(auVar8,ZEXT416((uint)((float)dVar7 * *(float *)((longlong)unaff_RDI + 0x15c) +
                                        DAT_02390110)),1);
  (**(code **)(*unaff_RDI + 0x4e8))(auVar8._0_8_);
  (**(code **)(*unaff_RDI + 0x968))();
  FUN_01e1eb80(DAT_02390108);
  plVar6 = (longlong *)unaff_RDI[0x32];
  plVar5 = plVar6;
  if (plVar6 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_0006a749;
      }
      FUN_00d50b00();
      plVar6 = (longlong *)unaff_RDI[0x32];
      unaff_RDI[0x32] = (longlong)local_30;
    }
    else {
      local_28 = '\0';
LAB_0006a749:
      unaff_RDI[0x32] = (longlong)plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0006a7cf:
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}


