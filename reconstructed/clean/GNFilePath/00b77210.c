// Function: FUN_00b77210
// Address: 00b77210
// Size: 536 bytes
// Class: GNFilePath

void FUN_00b77210(float param_1)

{
  uint32_t uVar1;
  float fVar2;
  int64_t this_ptr;
  float fVar3;
  float fVar4;
  
  param_1 = param_1 * g_02394298;
  if ((*(float *)(this_ptr + 0x9c) == param_1) &&
     (!NAN(*(float *)(this_ptr + 0x9c)) && !NAN(param_1))) {
    return;
  }
  *(float *)(this_ptr + 0x9c) = param_1;
  fVar3 = g_02390124;
  fVar2 = g_0239011c;
  fVar4 = g_02390124 - *(float *)(this_ptr + 0xa4);
  *(float *)(this_ptr + 0xa8) =
       (*(float *)(this_ptr + 0xa4) * g_0239011c + g_0239011c) * param_1;
  *(float *)(this_ptr + 0xac) = fVar4 * fVar2 * param_1;
  uVar1 = *(void*)(this_ptr + 0x94);
  fVar2 = *(float *)(this_ptr + 0x98);
  *(void*)(this_ptr + 0xb0) = uVar1;
  *(float *)(this_ptr + 0xb4) = fVar2;
  *(void*)(this_ptr + 0xb8) = uVar1;
  *(void*)(this_ptr + 0x1b8) = uVar1;
  *(void*)(this_ptr + 0xd8) = uVar1;
  *(void*)(this_ptr + 0x1d8) = uVar1;
  *(void*)(this_ptr + 0xf8) = uVar1;
  *(void*)(this_ptr + 0x1f8) = uVar1;
  *(void*)(this_ptr + 0x118) = uVar1;
  *(void*)(this_ptr + 0x218) = uVar1;
  *(void*)(this_ptr + 0x138) = uVar1;
  *(void*)(this_ptr + 0x238) = uVar1;
  *(void*)(this_ptr + 0x158) = uVar1;
  *(void*)(this_ptr + 600) = uVar1;
  *(void*)(this_ptr + 0x178) = uVar1;
  *(void*)(this_ptr + 0x278) = uVar1;
  *(void*)(this_ptr + 0x198) = uVar1;
  *(void*)(this_ptr + 0x298) = uVar1;
  fVar3 = fVar3 - fVar2;
  *(float *)(this_ptr + 0xc0) = fVar2;
  *(float *)(this_ptr + 0xc4) = fVar3;
  *(float *)(this_ptr + 0x1c0) = fVar2;
  *(float *)(this_ptr + 0x1c4) = fVar3;
  *(float *)(this_ptr + 0xe0) = fVar2;
  *(float *)(this_ptr + 0xe4) = fVar3;
  *(float *)(this_ptr + 0x1e0) = fVar2;
  *(float *)(this_ptr + 0x1e4) = fVar3;
  *(float *)(this_ptr + 0x100) = fVar2;
  *(float *)(this_ptr + 0x104) = fVar3;
  *(float *)(this_ptr + 0x200) = fVar2;
  *(float *)(this_ptr + 0x204) = fVar3;
  *(float *)(this_ptr + 0x120) = fVar2;
  *(float *)(this_ptr + 0x124) = fVar3;
  *(float *)(this_ptr + 0x220) = fVar2;
  *(float *)(this_ptr + 0x224) = fVar3;
  *(float *)(this_ptr + 0x140) = fVar2;
  *(float *)(this_ptr + 0x144) = fVar3;
  *(float *)(this_ptr + 0x240) = fVar2;
  *(float *)(this_ptr + 0x244) = fVar3;
  *(float *)(this_ptr + 0x160) = fVar2;
  *(float *)(this_ptr + 0x164) = fVar3;
  *(float *)(this_ptr + 0x260) = fVar2;
  *(float *)(this_ptr + 0x264) = fVar3;
  *(float *)(this_ptr + 0x180) = fVar2;
  *(float *)(this_ptr + 0x184) = fVar3;
  *(float *)(this_ptr + 0x280) = fVar2;
  *(float *)(this_ptr + 0x284) = fVar3;
  *(float *)(this_ptr + 0x1a0) = fVar2;
  *(float *)(this_ptr + 0x1a4) = fVar3;
  *(float *)(this_ptr + 0x2a0) = fVar2;
  *(float *)(this_ptr + 0x2a4) = fVar3;
  FUN_00b32040();
  return;
}

