// Function: FUN_00fa07d0
// Address: 00fa07d0
// Size: 711 bytes
// Class: Unknown

uint FUN_00fa07d0(uint64_t param_1,uint64_t param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int64_t unaff_RBP;
  uint in_R10D;
  uint uVar5;
  uint in_R11D;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *unaff_R14;
  uint *unaff_R15;
  
  param_4 = param_4 ^ *unaff_R14;
  param_3 = param_3 ^ unaff_R14[1];
  uVar6 = in_R11D ^ unaff_R14[2];
  uVar5 = in_R10D ^ unaff_R14[3];
  while( true ) {
    uVar2 = unaff_R14[-1] ^ param_3;
    uVar4 = unaff_R14[-2] ^ param_4;
    uVar3 = *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (uint64_t)(uVar2 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar2 >> 0x10 & 0xff) * 8);
    uVar2 = *(uint *)(unaff_RBP + (uint64_t)(uVar4 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar4 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar4 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar4 >> 0x18) * 8) ^ uVar3;
    uVar5 = uVar5 ^ uVar2;
    uVar7 = uVar6 ^ uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18);
    uVar6 = unaff_R14[-3] ^ uVar5;
    uVar3 = unaff_R14[-4] ^ uVar7;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (uint64_t)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (uint64_t)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar3 >> 0x18) * 8) ^ uVar2;
    param_3 = param_3 ^ uVar6;
    uVar4 = param_4 ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar6 = unaff_R14[-5] ^ param_3;
    uVar3 = unaff_R14[-6] ^ uVar4;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (uint64_t)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (uint64_t)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar3 >> 0x18) * 8) ^ uVar2;
    uVar5 = uVar5 ^ uVar6;
    uVar8 = uVar7 ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar6 = unaff_R14[-7] ^ uVar5;
    uVar3 = unaff_R14[-8] ^ uVar8;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (uint64_t)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (uint64_t)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar3 >> 0x18) * 8) ^ uVar2;
    param_3 = param_3 ^ uVar6;
    uVar7 = uVar4 ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar6 = unaff_R14[-9] ^ param_3;
    uVar3 = unaff_R14[-10] ^ uVar7;
    uVar2 = *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar6 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar6 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (uint64_t)(uVar6 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar6 >> 0x10 & 0xff) * 8);
    uVar6 = *(uint *)(unaff_RBP + (uint64_t)(uVar3 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar3 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar3 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar3 >> 0x18) * 8) ^ uVar2;
    uVar5 = uVar5 ^ uVar6;
    uVar6 = uVar8 ^ uVar6 ^ (uVar2 >> 8 | uVar2 << 0x18);
    uVar2 = unaff_R14[-0xb] ^ uVar5;
    uVar4 = unaff_R14[-0xc] ^ uVar6;
    uVar3 = *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar2 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar2 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + (uint64_t)(uVar2 >> 0x18) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar2 >> 0x10 & 0xff) * 8);
    uVar2 = *(uint *)(unaff_RBP + (uint64_t)(uVar4 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 4 + (uint64_t)(uVar4 >> 8 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x804 + (uint64_t)(uVar4 >> 0x10 & 0xff) * 8) ^
            *(uint *)(unaff_RBP + 0x800 + (uint64_t)(uVar4 >> 0x18) * 8) ^ uVar3;
    param_3 = param_3 ^ uVar2;
    puVar1 = unaff_R14 + -0x10;
    if (puVar1 == unaff_R15) break;
    uVar4 = unaff_R14[-0xd] & param_3;
    uVar5 = uVar5 ^ (*puVar1 | uVar6);
    param_4 = uVar7 ^ uVar2 ^ (uVar3 >> 8 | uVar3 << 0x18) ^ (uVar4 << 1 | (uint)((int)uVar4 < 0));
    param_3 = param_3 ^ (unaff_R14[-0xe] | param_4);
    uVar6 = uVar6 ^ ((unaff_R14[-0xf] & uVar5) << 1 | (uint)((int)(unaff_R14[-0xf] & uVar5) < 0));
    unaff_R14 = puVar1;
  }
  return unaff_R14[-0xd] ^ param_3;
}

