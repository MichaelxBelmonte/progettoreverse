// Function: FUN_00b77650
// Address: 00b77650
// Size: 536 bytes
// Class: GNFilePath


void FUN_00b77650(float param_1)

{
  undefined4 uVar1;
  float fVar2;
  longlong unaff_RDI;
  float fVar3;
  float fVar4;
  
  param_1 = param_1 * DAT_02394214;
  if ((*(float *)(unaff_RDI + 0x98) == param_1) &&
     (!NAN(*(float *)(unaff_RDI + 0x98)) && !NAN(param_1))) {
    return;
  }
  *(float *)(unaff_RDI + 0x98) = param_1;
  fVar3 = DAT_02390124;
  fVar2 = DAT_0239011c;
  uVar1 = *(undefined4 *)(unaff_RDI + 0x94);
  fVar4 = DAT_02390124 - *(float *)(unaff_RDI + 0xa4);
  *(float *)(unaff_RDI + 0xa8) =
       (*(float *)(unaff_RDI + 0xa4) * DAT_0239011c + DAT_0239011c) * *(float *)(unaff_RDI + 0x9c);
  *(float *)(unaff_RDI + 0xac) = fVar4 * fVar2 * *(float *)(unaff_RDI + 0x9c);
  *(undefined4 *)(unaff_RDI + 0xb0) = uVar1;
  *(float *)(unaff_RDI + 0xb4) = param_1;
  *(undefined4 *)(unaff_RDI + 0xb8) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x1b8) = uVar1;
  *(undefined4 *)(unaff_RDI + 0xd8) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x1d8) = uVar1;
  *(undefined4 *)(unaff_RDI + 0xf8) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x1f8) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x118) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x218) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x138) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x238) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x158) = uVar1;
  *(undefined4 *)(unaff_RDI + 600) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x178) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x278) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x198) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x298) = uVar1;
  fVar3 = fVar3 - param_1;
  *(float *)(unaff_RDI + 0xc0) = param_1;
  *(float *)(unaff_RDI + 0xc4) = fVar3;
  *(float *)(unaff_RDI + 0x1c0) = param_1;
  *(float *)(unaff_RDI + 0x1c4) = fVar3;
  *(float *)(unaff_RDI + 0xe0) = param_1;
  *(float *)(unaff_RDI + 0xe4) = fVar3;
  *(float *)(unaff_RDI + 0x1e0) = param_1;
  *(float *)(unaff_RDI + 0x1e4) = fVar3;
  *(float *)(unaff_RDI + 0x100) = param_1;
  *(float *)(unaff_RDI + 0x104) = fVar3;
  *(float *)(unaff_RDI + 0x200) = param_1;
  *(float *)(unaff_RDI + 0x204) = fVar3;
  *(float *)(unaff_RDI + 0x120) = param_1;
  *(float *)(unaff_RDI + 0x124) = fVar3;
  *(float *)(unaff_RDI + 0x220) = param_1;
  *(float *)(unaff_RDI + 0x224) = fVar3;
  *(float *)(unaff_RDI + 0x140) = param_1;
  *(float *)(unaff_RDI + 0x144) = fVar3;
  *(float *)(unaff_RDI + 0x240) = param_1;
  *(float *)(unaff_RDI + 0x244) = fVar3;
  *(float *)(unaff_RDI + 0x160) = param_1;
  *(float *)(unaff_RDI + 0x164) = fVar3;
  *(float *)(unaff_RDI + 0x260) = param_1;
  *(float *)(unaff_RDI + 0x264) = fVar3;
  *(float *)(unaff_RDI + 0x180) = param_1;
  *(float *)(unaff_RDI + 0x184) = fVar3;
  *(float *)(unaff_RDI + 0x280) = param_1;
  *(float *)(unaff_RDI + 0x284) = fVar3;
  *(float *)(unaff_RDI + 0x1a0) = param_1;
  *(float *)(unaff_RDI + 0x1a4) = fVar3;
  *(float *)(unaff_RDI + 0x2a0) = param_1;
  *(float *)(unaff_RDI + 0x2a4) = fVar3;
  FUN_00b32040();
  return;
}


