// Function: FUN_00b77650
// Address: 00b77650
// Size: 536 bytes
// Class: GNFilePath

void FUN_00b77650(float param_1)

{
  uint32_t uVar1;
  float fVar2;
  int64_t this_ptr;
  float fVar3;
  float fVar4;
  
  param_1 = param_1 * g_02394214;
  if ((*(float *)(this_ptr + 0x98) == param_1) &&
     (!NAN(*(float *)(this_ptr + 0x98)) && !NAN(param_1))) {
    return;
  }
  *(float *)(this_ptr + 0x98) = param_1;
  fVar3 = g_02390124;
  fVar2 = g_0239011c;
  uVar1 = *(void*)(this_ptr + 0x94);
  fVar4 = g_02390124 - *(float *)(this_ptr + 0xa4);
  *(float *)(this_ptr + 0xa8) =
       (*(float *)(this_ptr + 0xa4) * g_0239011c + g_0239011c) * *(float *)(this_ptr + 0x9c);
  *(float *)(this_ptr + 0xac) = fVar4 * fVar2 * *(float *)(this_ptr + 0x9c);
  *(void*)(this_ptr + 0xb0) = uVar1;
  *(float *)(this_ptr + 0xb4) = param_1;
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
  fVar3 = fVar3 - param_1;
  *(float *)(this_ptr + 0xc0) = param_1;
  *(float *)(this_ptr + 0xc4) = fVar3;
  *(float *)(this_ptr + 0x1c0) = param_1;
  *(float *)(this_ptr + 0x1c4) = fVar3;
  *(float *)(this_ptr + 0xe0) = param_1;
  *(float *)(this_ptr + 0xe4) = fVar3;
  *(float *)(this_ptr + 0x1e0) = param_1;
  *(float *)(this_ptr + 0x1e4) = fVar3;
  *(float *)(this_ptr + 0x100) = param_1;
  *(float *)(this_ptr + 0x104) = fVar3;
  *(float *)(this_ptr + 0x200) = param_1;
  *(float *)(this_ptr + 0x204) = fVar3;
  *(float *)(this_ptr + 0x120) = param_1;
  *(float *)(this_ptr + 0x124) = fVar3;
  *(float *)(this_ptr + 0x220) = param_1;
  *(float *)(this_ptr + 0x224) = fVar3;
  *(float *)(this_ptr + 0x140) = param_1;
  *(float *)(this_ptr + 0x144) = fVar3;
  *(float *)(this_ptr + 0x240) = param_1;
  *(float *)(this_ptr + 0x244) = fVar3;
  *(float *)(this_ptr + 0x160) = param_1;
  *(float *)(this_ptr + 0x164) = fVar3;
  *(float *)(this_ptr + 0x260) = param_1;
  *(float *)(this_ptr + 0x264) = fVar3;
  *(float *)(this_ptr + 0x180) = param_1;
  *(float *)(this_ptr + 0x184) = fVar3;
  *(float *)(this_ptr + 0x280) = param_1;
  *(float *)(this_ptr + 0x284) = fVar3;
  *(float *)(this_ptr + 0x1a0) = param_1;
  *(float *)(this_ptr + 0x1a4) = fVar3;
  *(float *)(this_ptr + 0x2a0) = param_1;
  *(float *)(this_ptr + 0x2a4) = fVar3;
  FUN_00b32040();
  return;
}

