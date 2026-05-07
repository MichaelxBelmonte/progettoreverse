// Function: FUN_00f9b500
// Address: 00f9b500
// Size: 711 bytes
// Class: Unknown

uint64_t FUN_00f9b500(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t in_RAX;
  uint64_t unaff_RBP;
  uint64_t local_88 [4];
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  uint64_t local_30;
  uint64_t local_28;
  uint64_t local_20;
  uint64_t local_18;
  uint64_t local_10;
  
  local_88[1] = in_RAX & 0x1fffffffffffffff;
  local_88[2] = local_88[1] * 2;
  local_68 = local_88[1] * 4;
  local_88[0] = 0;
  local_28 = local_68 ^ in_RAX * 8;
  local_88[3] = local_88[1] ^ local_88[2];
  local_60 = local_88[1] ^ local_68;
  local_50 = local_88[1] ^ local_88[2] ^ local_68;
  local_58 = local_88[2] ^ local_68;
  local_40 = local_88[1] ^ local_68 ^ local_28;
  local_38 = local_88[2] ^ local_68 ^ local_28;
  local_48 = in_RAX * 8;
  local_30 = local_50 ^ local_28;
  local_20 = local_40 ^ local_68;
  local_18 = local_38 ^ local_68;
  local_10 = local_30 ^ local_68;
  return ((int64_t)in_RAX >> 0x3f & unaff_RBP) << 0x3f ^
         ((int64_t)(in_RAX * 2) >> 0x3f & unaff_RBP) << 0x3e ^
         ((int64_t)(in_RAX * 4) >> 0x3f & unaff_RBP) << 0x3d ^
         local_88[param_3 & unaff_RBP >> 4] << 4 ^ local_88[param_3 & unaff_RBP >> 0xc] << 0xc ^
         local_88[param_3 & unaff_RBP >> 0x14] << 0x14 ^
         local_88[param_3 & unaff_RBP >> 0x1c] << 0x1c ^
         local_88[param_3 & unaff_RBP >> 0x24] << 0x24 ^
         local_88[param_3 & unaff_RBP >> 0x2c] << 0x2c ^
         local_88[param_3 & unaff_RBP >> 0x34] << 0x34 ^
         local_88[param_3 & unaff_RBP >> 0x3c] << 0x3c ^
         local_88[param_3 & unaff_RBP] ^ local_88[param_3 & unaff_RBP >> 8] << 8 ^
         local_88[param_3 & unaff_RBP >> 0x10] << 0x10 ^
         local_88[param_3 & unaff_RBP >> 0x18] << 0x18 ^
         local_88[param_3 & unaff_RBP >> 0x20] << 0x20 ^
         local_88[param_3 & unaff_RBP >> 0x28] << 0x28 ^
         local_88[param_3 & unaff_RBP >> 0x30] << 0x30 ^
         local_88[param_3 & unaff_RBP >> 0x38] << 0x38;
}

