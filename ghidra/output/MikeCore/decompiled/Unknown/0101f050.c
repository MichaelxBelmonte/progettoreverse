// Function: FUN_0101f050
// Address: 0101f050
// Size: 546 bytes
// Class: Unknown
// String references:
//   "crypto/evp/bio_b64.c"
//   "assertion failed: ctx->buf_len >= ctx->buf_off"


/* WARNING: Type propagation algorithm not settling */

int FUN_0101f050(BIO *param_1,int *param_2,undefined8 param_3,void *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int *out;
  BIO *pBVar4;
  BIO *b;
  uint *b_00;
  int *f;
  int unaff_ESI;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)param_3 >> 0x20);
  lVar1 = (long)param_3;
  b = param_1;
  f = param_2;
  out = (int *)_BIO_get_data();
  pBVar4 = _BIO_next(b);
  if (out == (int *)0x0) {
    return 0;
  }
  if (pBVar4 == (BIO *)0x0) {
    return 0;
  }
  iVar2 = 1;
  b_00 = &switchD_0101f0b4::switchdataD_0101f27c;
  switch(unaff_ESI) {
  case 1:
    out[6] = 1;
    out[4] = 0;
    out[5] = 1;
    break;
  case 2:
    if (out[6] < 1) {
      return 1;
    }
    break;
  case 10:
    iVar2 = *out - out[1];
    if (*out < out[1]) {
                    /* WARNING: Subroutine does not return */
      _OPENSSL_die(&switchD_0101f0b4::switchdataD_0101f27c,0x1e3);
    }
    goto joined_r0x0101f141;
  case 0xb:
    do {
      while (*out == out[1]) {
        uVar3 = _BIO_test_flags((BIO *)b_00,(int)f);
        if ((uVar3 & 0x100) == 0) {
          if ((out[4] == 0) || (iVar2 = _EVP_ENCODE_CTX_num(), iVar2 == 0)) goto LAB_0101f231;
          out[1] = 0;
          f = out;
          _EVP_EncodeFinal((EVP_ENCODE_CTX *)b_00,(uchar *)out,(int *)CONCAT44(uVar5,lVar1));
        }
        else {
          f = (int *)(ulonglong)(uint)out[2];
          if (out[2] == 0) goto LAB_0101f231;
          iVar2 = _EVP_EncodeBlock((uchar *)b_00,(uchar *)f,lVar1);
          *out = iVar2;
          out[1] = 0;
          out[2] = 0;
        }
      }
      f = (int *)0x0;
      iVar2 = FUN_0101e260();
    } while (-1 < iVar2);
  case 0xc:
    return iVar2;
  case 0xd:
    iVar2 = *out - out[1];
    if (*out < out[1]) {
                    /* WARNING: Subroutine does not return */
      _OPENSSL_die(&switchD_0101f0b4::switchdataD_0101f27c,0x1da);
    }
    if (iVar2 == 0) {
      if ((out[4] != 0) && (iVar2 = _EVP_ENCODE_CTX_num(), iVar2 != 0)) {
        return 1;
      }
      break;
    }
joined_r0x0101f141:
    if (0 < iVar2) {
      return iVar2;
    }
    break;
  default:
    if (unaff_ESI == 0x65) {
      _BIO_clear_flags(b,(int)f);
      lVar1 = _BIO_ctrl(param_1,(int)param_2,lVar1,param_4);
      _BIO_copy_next_retry(param_1);
      return lVar1;
    }
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  }
LAB_0101f231:
  lVar1 = _BIO_ctrl(param_1,(int)param_2,lVar1,param_4);
  return lVar1;
}


