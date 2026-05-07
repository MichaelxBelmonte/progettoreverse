// Function: FUN_00f5e830
// Address: 00f5e830
// Size: 596 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/a_int.c"

uint64_t FUN_00f5e830(uint64_t param_1,byte *param_2,uint64_t param_3,char *param_4)

{
  byte *pbVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  byte bVar5;
  int func;
  int64_t lVar6;
  uint uVar7;
  uint *arg1;
  byte *this_ptr;
  byte *pbVar8;
  int reason;
  uint uVar9;
  uint64_t uVar10;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t in_XMM2 [16];
  uint8_t auVar13 [16];
  uint8_t in_XMM3 [16];
  int in_stack_00000008;
  
  if (param_1 == 0) {
    func = 0xde;
    reason = 0x9a;
    goto LAB_00f5e88e;
  }
  bVar5 = *param_2;
  uVar9 = bVar5 & 0xffffff80;
  param_4 = (char *)(uint64_t)uVar9;
  if (arg1 != (uint *)0x0) {
    *arg1 = uVar9;
  }
  if (param_1 == 1) {
    if (this_ptr == (byte *)0x0) {
      return 1;
    }
    bVar5 = *param_2;
    if ((byte)uVar9 != 0) {
      bVar5 = -bVar5;
    }
    *this_ptr = bVar5;
    return 1;
  }
  if (*param_2 == 0) {
LAB_00f5e993:
    lVar3 = -1;
    if ((byte)uVar9 == (param_2[1] & 0x80)) {
      func = 0xdd;
      reason = 0xbb;
LAB_00f5e88e:
      _ERR_put_error(0x2007335,func,reason,param_4,in_stack_00000008);
      return 0;
    }
  }
  else {
    if (*param_2 == 0xff) {
      uVar4 = param_1 - 1;
      if (uVar4 < 8) {
        uVar7 = 0;
        uVar2 = 1;
LAB_00f5e980:
        do {
          uVar7 = uVar7 | param_2[uVar2];
          uVar2 = uVar2 + 1;
        } while (param_1 != uVar2);
      }
      else {
        uVar2 = uVar4 & 0xfffffffffffffff8;
        uVar10 = (uVar2 - 8 >> 3) + 1;
        if (uVar2 - 8 == 0) {
          auVar11 = (uint8_t  [16])0x0;
          lVar3 = 1;
          auVar12 = (uint8_t  [16])0x0;
LAB_00f5e93b:
          auVar13 = pmovzxbd(in_XMM2,*(void*)(param_2 + lVar3 + 4));
          auVar12 = auVar12 | auVar13;
          auVar13 = pmovzxbd(auVar13,*(void*)(param_2 + lVar3));
          auVar11 = auVar11 | auVar13;
        }
        else {
          lVar6 = -(uVar10 & 0xfffffffffffffffe);
          auVar11 = (uint8_t  [16])0x0;
          lVar3 = 1;
          auVar12 = (uint8_t  [16])0x0;
          do {
            auVar13 = pmovzxbd(in_XMM2,*(void*)(param_2 + lVar3));
            in_XMM2 = auVar13 | auVar11;
            auVar13 = pmovzxbd(in_XMM3,*(void*)(param_2 + lVar3 + 4));
            in_XMM3 = auVar13 | auVar12;
            auVar11 = pmovzxbd(auVar11,*(void*)(param_2 + lVar3 + 8));
            auVar12 = pmovzxbd(auVar12,*(void*)(param_2 + lVar3 + 0xc));
            auVar11 = auVar11 | in_XMM2;
            auVar12 = auVar12 | in_XMM3;
            lVar3 = lVar3 + 0x10;
            lVar6 = lVar6 + 2;
          } while (lVar6 != 0);
          if ((uVar10 & 1) != 0) goto LAB_00f5e93b;
        }
        auVar11 = auVar11 | auVar12;
        auVar12._0_8_ = auVar11._8_8_;
        auVar12._8_4_ = auVar11._8_4_;
        auVar12._12_4_ = auVar11._12_4_;
        uVar7 = SUB164(auVar12 | auVar11,4) | SUB164(auVar12 | auVar11,0);
        if (uVar4 != uVar2) {
          uVar2 = uVar2 | 1;
          goto LAB_00f5e980;
        }
      }
      if (uVar7 != 0) goto LAB_00f5e993;
    }
    lVar3 = 0;
  }
  uVar4 = lVar3 + param_1;
  if (this_ptr != (byte *)0x0) {
    if (uVar4 == 0) {
      return 0;
    }
    bVar5 = (char)bVar5 >> 7;
    param_2 = param_2 + param_1;
    pbVar8 = this_ptr + uVar4;
    uVar9 = (uint)(bVar5 & 1);
    uVar2 = uVar4;
    if ((uVar4 & 1) != 0) {
      pbVar1 = param_2 + -1;
      param_2 = param_2 + -1;
      uVar9 = (uint)(bVar5 & 1) + (uint)(*pbVar1 ^ bVar5);
      pbVar8[-1] = (byte)uVar9;
      pbVar8 = pbVar8 + -1;
      uVar9 = uVar9 >> 8;
      uVar2 = uVar4 - 1;
    }
    if (uVar4 != 1) {
      lVar3 = 0;
      do {
        uVar9 = (param_2[lVar3 + -1] ^ bVar5) + uVar9;
        pbVar8[lVar3 + -1] = (byte)uVar9;
        uVar9 = (uint)(param_2[lVar3 + -2] ^ bVar5) + (uVar9 >> 8);
        pbVar8[lVar3 + -2] = (byte)uVar9;
        uVar9 = uVar9 >> 8;
        lVar3 = lVar3 + -2;
      } while (-lVar3 != uVar2);
    }
  }
  return uVar4;
}

