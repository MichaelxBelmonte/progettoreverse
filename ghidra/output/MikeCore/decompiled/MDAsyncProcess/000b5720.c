// Function: FUN_000b5720
// Address: 000b5720
// Size: 562 bytes
// Class: MDAsyncProcess


void FUN_000b5720(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_XMM1_Dc;
  float fVar7;
  float in_XMM1_Dd;
  float fVar8;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined1 local_20;
  
  fVar5 = (float)((ulonglong)param_2 >> 0x20);
  fVar3 = (float)param_2;
  FUN_01d97850();
  if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_28 == (longlong *)0x0) {
    FUN_01d94ee0();
    FUN_01d95060();
  }
  else {
    FUN_01d97870();
    (**(code **)(*local_28 + 0x4d8))();
    fVar4 = fVar3;
    fVar6 = fVar5;
    fVar7 = in_XMM1_Dc;
    fVar8 = in_XMM1_Dd;
    if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d97850();
    (**(code **)(*local_28 + 0x4d8))();
    local_38._0_4_ = fVar4;
    local_38._4_4_ = fVar6;
    local_38._8_4_ = fVar7;
    local_38._12_4_ = fVar8;
    if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar2._4_4_ = -(uint)(fVar5 < fVar6);
    auVar2._0_4_ = -(uint)(fVar3 < fVar4);
    auVar2._8_4_ = -(uint)(in_XMM1_Dc < fVar7);
    auVar2._12_4_ = -(uint)(in_XMM1_Dd < fVar8);
    extractps(auVar2,1);
    FUN_01d95060();
    FUN_01d94ee0();
    FUN_01d97870();
    (**(code **)(*local_28 + 0x4d8))();
    if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar1._4_4_ = fVar6;
    auVar1._0_4_ = fVar4;
    auVar1._8_4_ = fVar7;
    auVar1._12_4_ = fVar8;
    blendps(local_38,auVar1,2);
    FUN_01d97850();
    (**(code **)(*local_28 + 0x4d0))();
    if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d97e80();
  if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_28 != (longlong *)0x0) {
    FUN_01d97e80();
    FUN_01d92440();
    if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d97ec0();
  if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_28 != (longlong *)0x0) {
    FUN_01d97ec0();
    FUN_01d92440();
    if ((local_20 != '\0') && (local_28 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


