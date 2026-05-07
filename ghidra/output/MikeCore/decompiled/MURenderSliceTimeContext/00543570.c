// Function: FUN_00543570
// Address: 00543570
// Size: 616 bytes
// Class: MURenderSliceTimeContext


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543570(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar10;
  float fVar11;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar8 = (undefined4)param_2;
  cVar4 = (**(code **)(*unaff_RDI + 0x988))();
  if (cVar4 != '\0') {
    local_98._0_8_ = FUN_01e3f820();
    local_98._8_8_ = extraout_XMM0_Qb;
    local_88._4_4_ = uVar9;
    local_88._0_4_ = uVar8;
    local_88._8_4_ = in_XMM1_Dc;
    local_88._12_4_ = in_XMM1_Dd;
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_58 + 0x470))();
    local_68 = local_38;
    local_60 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_60 = '\x01';
    FUN_01d488d0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    fVar11 = *(float *)(unaff_RDI + 0x35);
    local_b8 = local_98;
    uVar5 = *(byte *)(unaff_RDI + 0x31) ^ 1;
    fVar10 = *(float *)(local_b8 + (ulonglong)(uVar5 & 3) * 4) + fVar11;
    auVar7._0_4_ = -(uint)(uVar5 == _DAT_0238fcc0);
    auVar7._4_4_ = -(uint)(uVar5 == _UNK_0238fcc4);
    auVar7._8_4_ = -(uint)(uVar5 == _UNK_0238fcc8);
    auVar7._12_4_ = -(uint)(uVar5 == _UNK_0238fccc);
    auVar1._4_4_ = fVar10;
    auVar1._0_4_ = fVar10;
    auVar1._8_4_ = fVar10;
    auVar1._12_4_ = fVar10;
    local_98 = blendvps(local_98,auVar1,auVar7);
    local_a8 = local_88;
    fVar11 = *(float *)(local_a8 + (ulonglong)(uVar5 & 3) * 4) - (fVar11 + fVar11);
    auVar2._4_4_ = fVar11;
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar11;
    auVar2._12_4_ = fVar11;
    local_88 = blendvps(local_88,auVar2,auVar7);
    uVar6 = (**(code **)(*unaff_RDI + 0x640))();
    plVar3 = local_58;
    local_78 = DAT_026fe4b8;
    if (DAT_026fe4b8 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_70 = '\x01';
    (**(code **)(*plVar3 + 0x3b0))(uVar6,&local_78);
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_01d488d0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
  }
  return;
}


