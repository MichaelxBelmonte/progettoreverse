// Function: FUN_00efcddc
// Address: 00efcddc
// Size: 817 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox"


ulonglong FUN_00efcddc(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined *puVar8;
  ulonglong local_res8;
  longlong local_res10;
  undefined4 local_res18;
  char local_c0;
  char local_bc;
  char local_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  
  lVar6 = unaff_RDI[1] - *unaff_RDI;
  puVar8 = (undefined *)(lVar6 >> 3);
  uVar5 = unaff_RDI[3] - unaff_RDI[2];
  lVar1 = unaff_RDI[6];
  lVar2 = unaff_RDI[5];
  lVar3 = local_res10 + 0xd4;
  uVar5 = _ZSTD_compressLiterals
                    (uVar5,unaff_RDI[2],lVar3,&DAT_00002204,
                     lVar6 == 0 || 0x13 < uVar5 / (ulonglong)puVar8,local_res18);
  if (0xffffffffffffff88 < uVar5) goto LAB_00efd0b4;
  pbVar7 = (byte *)(uVar5 + param_3);
  if ((longlong)((param_3 + param_4) - (longlong)pbVar7) < 4) {
    if (local_res8 <= param_4) {
      return 0;
    }
    return 0xffffffffffffffba;
  }
  if (puVar8 < (undefined *)0x80) {
    *pbVar7 = (byte)puVar8;
    pbVar7 = pbVar7 + 1;
  }
  else if (&UNK_00007eff < puVar8) {
    *pbVar7 = 0xff;
    *(short *)(pbVar7 + 1) = (short)puVar8 + -0x7f00;
    pbVar7 = pbVar7 + 3;
  }
  else {
    *pbVar7 = (byte)((ulonglong)puVar8 >> 8) ^ 0x80;
    pbVar7[1] = (byte)puVar8;
    pbVar7 = pbVar7 + 2;
  }
  if (lVar6 == 0) {
    _memcpy((void *)(unaff_RSI + 0x810),
            "/System/Library/Frameworks/AudioToolbox.framework/Versions/A/AudioToolbox",
            (size_t)lVar3);
  }
  else {
    FUN_00efb761(unaff_RSI + 0x810,puVar8,param_2 + 0x810,pbVar7 + 1,&DAT_00002204);
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
  uVar5 = (longlong)pbVar7 - param_3;
  if ((longlong)pbVar7 - param_3 == 0) {
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


