// Function: FUN_01ef6ef0
// Address: 01ef6ef0
// Size: 1135 bytes
// Class: Unknown

void FUN_01ef6ef0(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  void*puVar1;
  int64_t arg1;
  void*this_ptr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint32_t in_XMM1_Dd;
  float fVar6;
  float fVar7;
  float fVar8;
  uint8_t auVar9 [16];
  float fVar10;
  float in_XMM4_Da;
  
  fVar5 = (float)((uint64_t)param_2 >> 0x20);
  fVar10 = (float)param_1;
  fVar3 = *(float *)(arg1 + 0x19c);
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02680400;
  *(void*)((int64_t)puVar1 + 0xc) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(void*)((int64_t)puVar1 + 0x39) = 0;
  *(void*)((int64_t)puVar1 + 0x41) = 0;
  (*g_02680418)();
  fVar2 = fVar10 - fVar3;
  fVar4 = fVar10 + (float)param_2 + g_02390d00 + fVar3;
  auVar9._4_4_ = fVar5;
  auVar9._0_4_ = fVar5 * g_0239011c + (float)((uint64_t)param_1 >> 0x20);
  auVar9._8_4_ = in_XMM1_Dd;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar9 = roundss(ZEXT816(0),auVar9,9);
  fVar5 = auVar9._0_4_ - fVar3;
  fVar6 = auVar9._0_4_ + fVar3;
  fVar10 = g_02390124 + param_3 + fVar10;
  fVar7 = ((float)param_2 - (param_3 + g_02390d34)) - fVar10;
  fVar8 = fVar7 * param_4 + fVar10;
  param_3 = param_3 * g_024229f8;
  if ((in_XMM4_Da != param_4) || (NAN(in_XMM4_Da) || NAN(param_4))) {
    FUN_01d39400();
    FUN_01d38ba0(fVar8 - param_3,fVar5);
    FUN_01d39310(fVar8,fVar5);
    fVar3 = param_3 - (fVar3 + g_02390d34);
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
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

