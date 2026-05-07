// Function: FUN_00f94950
// Address: 00f94950
// Size: 500 bytes
// Class: Unknown
// String references:
//   "crypto/bn/bn_rand.c"


bool FUN_00f94950(BIGNUM *param_1,int param_2,BIGNUM *param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  BIGNUM *pBVar5;
  uchar *buf;
  undefined8 uVar6;
  uint num;
  uchar *puVar7;
  int unaff_ESI;
  int unaff_EDI;
  int line;
  int unaff_R12D;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  byte local_31;
  
  iVar9 = (int)param_1;
  line = (int)param_3;
  if (param_2 == 0) {
    if ((iVar9 == -1) && (line == 0)) {
      _BN_set_word(param_1,0);
      return true;
    }
LAB_00f94a10:
    _ERR_put_error(0x200a01b,0x76,0x5d,param_4,unaff_R12D);
    return false;
  }
  if ((param_2 < 0) || ((param_2 == 1 && (0 < iVar9)))) goto LAB_00f94a10;
  uVar10 = (ulonglong)(param_2 + 7U >> 3);
  num = param_2 + 7U & 7;
  puVar7 = (uchar *)(ulonglong)num;
  iVar2 = 0x1fe << (sbyte)num;
  uVar6 = 0x27;
  buf = puVar7;
  pbVar4 = _CRYPTO_malloc(num,(char *)((longlong)&segment_command_00000020.cmdsize + 3),line);
  if (pbVar4 == (byte *)0x0) {
    _ERR_put_error(0x200a01b,0x41,0x29,param_4,unaff_R12D);
    bVar11 = false;
    goto LAB_00f94b1c;
  }
  if (unaff_EDI == 0) {
    iVar3 = _RAND_bytes(buf,(int)uVar6);
    if (iVar3 < 1) goto LAB_00f94ac5;
  }
  else {
    iVar3 = _RAND_priv_bytes();
    if (iVar3 < 1) {
LAB_00f94ac5:
      bVar11 = false;
      goto LAB_00f94b1c;
    }
    if (unaff_EDI == 1) {
      uVar8 = 0;
      do {
        iVar3 = _RAND_bytes(buf,(int)uVar6);
        if (iVar3 < 1) goto LAB_00f94ac5;
        buf = (uchar *)(ulonglong)local_31;
        if (((char)local_31 < '\0') && (uVar8 != 0)) {
          bVar1 = pbVar4[(int)uVar8 - 1];
LAB_00f94a43:
          pbVar4[uVar8] = bVar1;
        }
        else {
          if (local_31 < 0x2a) {
            bVar1 = 0;
            goto LAB_00f94a43;
          }
          bVar1 = 0xff;
          if (local_31 < 0x54) goto LAB_00f94a43;
        }
        uVar8 = uVar8 + 1;
      } while (uVar10 != uVar8);
    }
  }
  if (iVar9 < 0) {
    bVar1 = *pbVar4;
  }
  else {
    if (iVar9 == 0) {
      iVar9 = 1;
    }
    else {
      if (num == 0) {
        *pbVar4 = 1;
        pbVar4[1] = pbVar4[1] | 0x80;
        bVar1 = 1;
        goto LAB_00f94aee;
      }
      puVar7 = (uchar *)(ulonglong)(byte)((sbyte)num - 1);
      iVar9 = 3;
    }
    bVar1 = (byte)(iVar9 << ((byte)puVar7 & 0x1f)) | *pbVar4;
    *pbVar4 = bVar1;
  }
LAB_00f94aee:
  bVar1 = ~(byte)iVar2 & bVar1;
  *pbVar4 = bVar1;
  if (line != 0) {
    pbVar4[uVar10 - 1] = pbVar4[uVar10 - 1] | 1;
  }
  pBVar5 = _BN_bin2bn((uchar *)(ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),bVar1),unaff_ESI,param_3
                     );
  bVar11 = pBVar5 != (BIGNUM *)0x0;
LAB_00f94b1c:
  _CRYPTO_clear_free(0x58,"crypto/bn/bn_rand.c");
  return bVar11;
}


