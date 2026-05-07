// Function: FUN_00b77430
// Address: 00b77430
// Size: 544 bytes
// Class: GNFilePath

void FUN_00b77430(float param_1)

{
  float fVar1;
  float fVar2;
  int64_t this_ptr;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_1 * g_023d8510 + g_02390128;
  if ((*(float *)(this_ptr + 0x94) == fVar3) && (!NAN(*(float *)(this_ptr + 0x94)) && !NAN(fVar3))
     ) {
    return;
  }
  *(float *)(this_ptr + 0x94) = fVar3;
  fVar4 = g_02390124;
  fVar2 = g_0239011c;
  fVar1 = *(float *)(this_ptr + 0x98);
  fVar5 = g_02390124 - *(float *)(this_ptr + 0xa4);
  *(float *)(this_ptr + 0xa8) =
       (*(float *)(this_ptr + 0xa4) * g_0239011c + g_0239011c) * *(float *)(this_ptr + 0x9c);
  *(float *)(this_ptr + 0xac) = fVar5 * fVar2 * *(float *)(this_ptr + 0x9c);
  *(float *)(this_ptr + 0xb0) = fVar3;
  *(float *)(this_ptr + 0xb4) = fVar1;
  *(float *)(this_ptr + 0xb8) = fVar3;
  *(float *)(this_ptr + 0x1b8) = fVar3;
  *(float *)(this_ptr + 0xd8) = fVar3;
  *(float *)(this_ptr + 0x1d8) = fVar3;
  *(float *)(this_ptr + 0xf8) = fVar3;
  *(float *)(this_ptr + 0x1f8) = fVar3;
  *(float *)(this_ptr + 0x118) = fVar3;
  *(float *)(this_ptr + 0x218) = fVar3;
  *(float *)(this_ptr + 0x138) = fVar3;
  *(float *)(this_ptr + 0x238) = fVar3;
  *(float *)(this_ptr + 0x158) = fVar3;
  *(float *)(this_ptr + 600) = fVar3;
  *(float *)(this_ptr + 0x178) = fVar3;
  *(float *)(this_ptr + 0x278) = fVar3;
  *(float *)(this_ptr + 0x198) = fVar3;
  *(float *)(this_ptr + 0x298) = fVar3;
  fVar4 = fVar4 - fVar1;
  *(float *)(this_ptr + 0xc0) = fVar1;
  *(float *)(this_ptr + 0xc4) = fVar4;
  *(float *)(this_ptr + 0x1c0) = fVar1;
  *(float *)(this_ptr + 0x1c4) = fVar4;
  *(float *)(this_ptr + 0xe0) = fVar1;
  *(float *)(this_ptr + 0xe4) = fVar4;
  *(float *)(this_ptr + 0x1e0) = fVar1;
  *(float *)(this_ptr + 0x1e4) = fVar4;
  *(float *)(this_ptr + 0x100) = fVar1;
  *(float *)(this_ptr + 0x104) = fVar4;
  *(float *)(this_ptr + 0x200) = fVar1;
  *(float *)(this_ptr + 0x204) = fVar4;
  *(float *)(this_ptr + 0x120) = fVar1;
  *(float *)(this_ptr + 0x124) = fVar4;
  *(float *)(this_ptr + 0x220) = fVar1;
  *(float *)(this_ptr + 0x224) = fVar4;
  *(float *)(this_ptr + 0x140) = fVar1;
  *(float *)(this_ptr + 0x144) = fVar4;
  *(float *)(this_ptr + 0x240) = fVar1;
  *(float *)(this_ptr + 0x244) = fVar4;
  *(float *)(this_ptr + 0x160) = fVar1;
  *(float *)(this_ptr + 0x164) = fVar4;
  *(float *)(this_ptr + 0x260) = fVar1;
  *(float *)(this_ptr + 0x264) = fVar4;
  *(float *)(this_ptr + 0x180) = fVar1;
  *(float *)(this_ptr + 0x184) = fVar4;
  *(float *)(this_ptr + 0x280) = fVar1;
  *(float *)(this_ptr + 0x284) = fVar4;
  *(float *)(this_ptr + 0x1a0) = fVar1;
  *(float *)(this_ptr + 0x1a4) = fVar4;
  *(float *)(this_ptr + 0x2a0) = fVar1;
  *(float *)(this_ptr + 0x2a4) = fVar4;
  FUN_00b32040();
  return;
}

