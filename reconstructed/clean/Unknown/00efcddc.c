// Function: FUN_00efcddc
// Address: 00efcddc
// Size: 817 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox"

uint64_t FUN_00efcddc(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  uint64_t uVar5;
  int64_t lVar6;
  byte *pbVar7;
  int64_t arg1;
  int64_t *this_ptr;
  void*puVar8;
  uint64_t local_res8;
  int64_t local_res10;
  uint32_t local_res18;
  char local_c0;
  char local_bc;
  char local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  uint32_t local_a0;
  
  lVar6 = this_ptr[1] - *this_ptr;
  puVar8 = (void*)(lVar6 >> 3);
  uVar5 = this_ptr[3] - this_ptr[2];
  lVar1 = this_ptr[6];
  lVar2 = this_ptr[5];
  lVar3 = local_res10 + 0xd4;
  uVar5 = _ZSTD_compressLiterals
                    (uVar5,this_ptr[2],lVar3,&g_00002204,
                     lVar6 == 0 || 0x13 < uVar5 / (uint64_t)puVar8,local_res18);
  if (0xffffffffffffff88 < uVar5) goto LAB_00efd0b4;
  pbVar7 = (byte *)(uVar5 + param_3);
  if ((int64_t)((param_3 + param_4) - (int64_t)pbVar7) < 4) {
    if (local_res8 <= param_4) {
      return 0;
    }
    return 0xffffffffffffffba;
  }
  if (puVar8 < (void*)0x80) {
    *pbVar7 = (byte)puVar8;
    pbVar7 = pbVar7 + 1;
  }
  else if (&UNK_00007eff < puVar8) {
    *pbVar7 = 0xff;
    *(short *)(pbVar7 + 1) = (short)puVar8 + -0x7f00;
    pbVar7 = pbVar7 + 3;
  }
  else {
    *pbVar7 = (byte)((uint64_t)puVar8 >> 8) ^ 0x80;
    pbVar7[1] = (byte)puVar8;
    pbVar7 = pbVar7 + 2;
  }
  if (lVar6 == 0) {
    _memcpy((void *)(arg1 + 0x810),
            "/System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox",
            (size_t)lVar3);
  }
  else {
    FUN_00efb761(arg1 + 0x810,puVar8,param_2 + 0x810,pbVar7 + 1,&g_00002204);
    uVar5 = local_b0;
    if (0xffffffffffffff88 < local_b0) goto LAB_00efd0b4;
    *pbVar7 = local_bc * '\x10' + local_c0 * '@' + local_b8 * '\x04';
    uVar5 = _ZSTD_encodeSequences(lVar2,param_2 + 0xb14,param_2 + 0x810,lVar1,local_a0,local_res18);
    if (0xffffffffffffff88 < uVar5) goto LAB_00efd0b4;
    if ((local_a8 != 0) && (local_a8 + uVar5 < 4)) {
      return 0;
    }
    pbVar7 = pbVar7 + 1 + uVar5 + local_b0;
  }
  uVar5 = (int64_t)pbVar7 - param_3;
  if ((int64_t)pbVar7 - param_3 == 0) {
    return 0;
  }
LAB_00efd0b4:
  if ((local_res8 <= param_4) && (uVar5 == 0xffffffffffffffba)) {
    return 0;
  }
  if (0xffffffffffffff88 < uVar5) {
    return uVar5;
  }
  bVar4 = 6;
  if (7 < *(uint *)(param_1 + 0x1c)) {
    bVar4 = (char)*(uint *)(param_1 + 0x1c) - 1;
  }
  if ((local_res8 - (local_res8 >> (bVar4 & 0x3f))) - 2 <= uVar5) {
    return 0;
  }
  return uVar5;
}

