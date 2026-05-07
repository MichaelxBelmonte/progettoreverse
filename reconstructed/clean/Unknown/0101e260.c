// Function: FUN_0101e260
// Address: 0101e260
// Size: 1258 bytes
// Class: Unknown
// String references:
//   "assertion failed: ctx->buf_off < (int)sizeof(ctx->buf)"
//   "crypto/evp/bio_b64.c"
//   "assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)"
//   "assertion failed: ctx->buf_len >= ctx->buf_off"
//   "assertion failed: i <= n"
//   "assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)"
//   "assertion failed: ctx->tmp_len <= 3"

uint FUN_0101e260(BIO *param_1,uint *param_2,qword *param_3,uchar *param_4)

{
  uint uVar1;
  int extraout_EAX;
  uint *out;
  BIO *pBVar2;
  uint inl;
  uint uVar3;
  BIO *arg1;
  size_t n;
  qword *outl;
  uint uVar4;
  uint local_34;
  
  inl = (uint)param_2;
  out = (uint *)_BIO_get_data();
  pBVar2 = _BIO_next(param_1);
  if ((out != (uint *)0x0) && (pBVar2 != (BIO *)0x0)) {
    _BIO_clear_flags(param_1,(int)param_2);
    if (out[4] != 1) {
      out[4] = 1;
      out[0] = 0;
      out[1] = 0;
      out[2] = 0;
      _EVP_EncodeInit((EVP_ENCODE_CTX *)param_1);
    }
    uVar1 = out[1];
    if (0x5dd < (int)uVar1) {
                          _OPENSSL_die();
    }
    uVar4 = *out;
    if (0x5de < (int)uVar4) {
                          _OPENSSL_die();
    }
    if ((int)uVar4 < (int)uVar1) {
                          _OPENSSL_die();
    }
    uVar3 = uVar4 - uVar1;
    if (uVar4 - uVar1 != 0 && (int)uVar1 <= (int)uVar4) {
      do {
        param_2 = (uint *)(uint64_t)uVar3;
        uVar1 = _BIO_write(param_1,param_2,(int)param_3);
        if ((int)uVar1 < 1) {
          _BIO_copy_next_retry(param_1);
          return uVar1;
        }
        uVar4 = uVar3 - uVar1;
        if ((int)uVar3 < (int)uVar1) {
                              _OPENSSL_die();
        }
        uVar1 = out[1] + uVar1;
        out[1] = uVar1;
        if (0x5de < (int)uVar1) {
                              _OPENSSL_die();
        }
        if ((int)*out < (int)uVar1) {
                              _OPENSSL_die();
        }
        uVar3 = uVar4;
      } while (0 < (int)uVar4);
    }
    out[0] = 0;
    out[1] = 0;
    if ((arg1 != (BIO *)0x0) && (0 < (int)inl)) {
      local_34 = 0;
      do {
        outl = &segment_command_000003d8.fileoff;
        if ((int)inl < 0x400) {
          outl = (qword *)(uint64_t)inl;
        }
        uVar4 = _BIO_test_flags(param_1,(int)param_2);
        uVar1 = (uint)outl;
        if ((uVar4 & 0x100) == 0) {
          param_1 = arg1;
          param_2 = out;
          _EVP_EncodeUpdate((EVP_ENCODE_CTX *)arg1,(uchar *)out,(int *)outl,param_4,inl);
          if (extraout_EAX == 0) {
            return local_34 | -(uint)(local_34 == 0);
          }
          uVar4 = *out;
          if (0x5de < (int)uVar4) {
                                _OPENSSL_die();
          }
          param_3 = outl;
          if ((int)uVar4 < (int)out[1]) {
                                _OPENSSL_die();
          }
LAB_0101e4dc:
          local_34 = local_34 + uVar1;
        }
        else {
          uVar4 = out[2];
          n = (size_t)param_3;
          if ((int)uVar4 < 1) {
            if ((int)uVar1 < 3) {
              _memcpy(param_1,outl,n);
              out[2] = uVar1;
              return local_34 + uVar1;
            }
            uVar4 = uVar1 + ((uVar1 & 0xffff) / 3) * -3;
            param_1 = (BIO *)(uint64_t)uVar4;
            uVar1 = uVar1 - (uVar4 & 0xffff);
            param_2 = (uint *)(uint64_t)uVar1;
            uVar4 = _EVP_EncodeBlock((uchar *)param_1,(uchar *)param_2,n);
            *out = uVar4;
            if (0x5de < (int)uVar4) {
                                  _OPENSSL_die();
            }
            if ((int)uVar4 < (int)out[1]) {
                                  _OPENSSL_die();
            }
            goto LAB_0101e4dc;
          }
          if (3 < (int)uVar4) {
                                _OPENSSL_die();
          }
          uVar1 = 3 - uVar4;
          if ((int)inl < (int)(3 - uVar4)) {
            uVar1 = 1;
          }
          _memcpy(param_1,(void *)(uint64_t)uVar1,n);
          uVar4 = out[2] + uVar1;
          param_2 = (uint *)(uint64_t)uVar4;
          out[2] = uVar4;
          local_34 = local_34 + uVar1;
          if ((int)uVar4 < 3) {
            return local_34;
          }
          uVar4 = _EVP_EncodeBlock((uchar *)param_1,(uchar *)param_2,(int)param_3);
          *out = uVar4;
          if (0x5de < (int)uVar4) {
                                _OPENSSL_die();
          }
          if ((int)uVar4 < (int)out[1]) {
                                _OPENSSL_die();
          }
          out[2] = 0;
        }
        inl = inl - uVar1;
        arg1 = (BIO *)((int64_t)&arg1->method + (uint64_t)uVar1);
        out[1] = 0;
        while (0 < (int)uVar4) {
          param_2 = (uint *)(uint64_t)uVar4;
          uVar1 = _BIO_write(param_1,param_2,(int)param_3);
          if ((int)uVar1 < 1) {
            _BIO_copy_next_retry(param_1);
            if (local_34 != 0) {
              return local_34;
            }
            return uVar1;
          }
          if ((int)uVar4 < (int)uVar1) {
                                _OPENSSL_die();
          }
          uVar3 = uVar1 + out[1];
          out[1] = uVar3;
          if (0x5de < (int)uVar3) {
                                _OPENSSL_die();
          }
          uVar4 = uVar4 - uVar1;
          if ((int)*out < (int)uVar3) {
                                _OPENSSL_die();
          }
        }
        out[0] = 0;
        out[1] = 0;
        if ((int)inl < 1) {
          return local_34;
        }
      } while( true );
    }
  }
  return 0;
}

