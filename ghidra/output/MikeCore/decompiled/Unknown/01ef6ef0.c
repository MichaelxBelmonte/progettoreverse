// Function: FUN_01ef6ef0
// Address: 01ef6ef0
// Size: 1135 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ef6ef0(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_XMM1_Dd;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float in_XMM4_Da;
  
  fVar5 = (float)((ulonglong)param_2 >> 0x20);
  fVar10 = (float)param_1;
  fVar3 = *(float *)(unaff_RSI + 0x19c);
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x41) = 0;
  (*DAT_02680418)();
  fVar2 = fVar10 - fVar3;
  fVar4 = fVar10 + (float)param_2 + DAT_02390d00 + fVar3;
  auVar9._4_4_ = fVar5;
  auVar9._0_4_ = fVar5 * DAT_0239011c + (float)((ulonglong)param_1 >> 0x20);
  auVar9._8_4_ = in_XMM1_Dd;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar9 = roundss(ZEXT816(0),auVar9,9);
  fVar5 = auVar9._0_4_ - fVar3;
  fVar6 = auVar9._0_4_ + fVar3;
  fVar10 = DAT_02390124 + param_3 + fVar10;
  fVar7 = ((float)param_2 - (param_3 + DAT_02390d34)) - fVar10;
  fVar8 = fVar7 * param_4 + fVar10;
  param_3 = param_3 * _DAT_024229f8;
  if ((in_XMM4_Da != param_4) || (NAN(in_XMM4_Da) || NAN(param_4))) {
    FUN_01d39400();
    FUN_01d38ba0(fVar8 - param_3,fVar5);
    FUN_01d39310(fVar8,fVar5);
    fVar3 = param_3 - (fVar3 + DAT_02390d34);
    FUN_01d38ba0(fVar8,fVar5 - fVar3);
    FUN_01d39310(fVar8,fVar5);
    fVar10 = fVar10 + fVar7 * in_XMM4_Da;
    FUN_01d38ba0(fVar10 + fVar3,fVar5);
    FUN_01d39310(fVar10,fVar5);
    FUN_01d38ba0(fVar10,fVar5 - param_3);
    FUN_01d39310(fVar10,fVar5);
    FUN_01d38ba0(fVar4,fVar5);
    FUN_01d38ba0(fVar4,fVar6);
    FUN_01d38ba0(param_3 + fVar10,fVar6);
    FUN_01d39310(fVar10,fVar6);
    FUN_01d38ba0(fVar10,fVar6 + fVar3);
    FUN_01d39310(fVar10,fVar6);
    FUN_01d38ba0(fVar8 - fVar3,fVar6);
    FUN_01d39310(fVar8,fVar6);
    FUN_01d38ba0(fVar8,param_3 + fVar6);
    FUN_01d39310(fVar8,fVar6);
    FUN_01d38ba0(fVar2,fVar6);
    FUN_01d38ba0(fVar2,fVar5);
  }
  else {
    FUN_01d39400();
    FUN_01d38ba0(fVar8 - param_3,fVar5);
    FUN_01d39310(fVar8,fVar5);
    FUN_01d38ba0(fVar4,fVar5);
    FUN_01d38ba0(fVar4,fVar6);
    FUN_01d38ba0(param_3 + fVar8,fVar6);
    FUN_01d39310(fVar8,fVar6);
    FUN_01d38ba0(fVar2,fVar6);
    FUN_01d38ba0(fVar2,fVar5);
  }
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


