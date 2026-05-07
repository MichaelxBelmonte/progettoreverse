// Function: FUN_00f9b500
// Address: 00f9b500
// Size: 711 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00f9b77a) */
/* WARNING: Removing unreachable block (ram,0x00f9b743) */
/* WARNING: Removing unreachable block (ram,0x00f9b70c) */
/* WARNING: Removing unreachable block (ram,0x00f9b6d5) */
/* WARNING: Removing unreachable block (ram,0x00f9b69e) */
/* WARNING: Removing unreachable block (ram,0x00f9b667) */
/* WARNING: Removing unreachable block (ram,0x00f9b630) */

ulonglong FUN_00f9b500(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  ulonglong local_88 [4];
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
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
  return ((longlong)in_RAX >> 0x3f & unaff_RBP) << 0x3f ^
         ((longlong)(in_RAX * 2) >> 0x3f & unaff_RBP) << 0x3e ^
         ((longlong)(in_RAX * 4) >> 0x3f & unaff_RBP) << 0x3d ^
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


