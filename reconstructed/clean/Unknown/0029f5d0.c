// Function: FUN_0029f5d0
// Address: 0029f5d0
// Size: 2231 bytes
// Class: Unknown

void FUN_0029f5d0(int param_1,int64_t *param_2,uchar *param_3)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  code *pcVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int iVar9;
  RSA *rsa;
  RSA *pRVar10;
  void*puVar11;
  uchar *puVar12;
  BIO *a;
  RSA *pRVar13;
  EVP_CIPHER_CTX *ctx;
  ENGINE *outl;
  void*this_ptr;
  ENGINE *impl;
  int iVar14;
  uint uVar15;
  EVP_CIPHER_CTX *ctx_00;
  char cVar16;
  uint in_stack_fffffffffffffb38;
  uint siglen;
  uint32_t in_stack_fffffffffffffb3c;
  int in_stack_fffffffffffffb40;
  uint32_t in_stack_fffffffffffffb44;
  char local_4b8;
  uchar local_494 [4];
  int64_t local_490;
  int64_t local_488;
  int64_t local_458;
  char local_450;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (param_1 != 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
      return;
    }
    goto LAB_0029fe82;
  }
  lVar1 = *param_2;
  siglen = in_stack_fffffffffffffb38 & 0xffffff00;
  FUN_00c923f0();
  lVar3 = CONCAT44(in_stack_fffffffffffffb44,in_stack_fffffffffffffb40);
  if (local_4b8 == '\0') {
    if (lVar3 != 0) {
      FUN_00d50b00();
      goto LAB_0029f674;
    }
LAB_0029f69b:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_4b8 = '\0';
    if (lVar3 == 0) goto LAB_0029f69b;
LAB_0029f674:
    if (*(int *)(lVar3 + 0x18) < 0x201) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      FUN_00e7b4e0();
      FUN_00c92250();
      lVar3 = local_458;
      if ((((local_450 == '\0') && (local_458 != 0)) && (FUN_00d50b00(), local_450 != '\0')) &&
         (local_458 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00e7b4e0();
      FUN_00c92250();
      lVar5 = local_458;
      if (((local_450 == '\0') && (local_458 != 0)) &&
         ((FUN_00d50b00(), local_450 != '\0' && (local_458 != 0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00e7b4e0();
      FUN_00c92250();
      local_490 = local_458;
      if (((local_450 == '\0') && (local_458 != 0)) &&
         ((FUN_00d50b00(), local_450 != '\0' && (local_458 != 0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00e7b4e0();
      FUN_00c92250();
      lVar6 = local_458;
      if ((((local_450 == '\0') && (local_458 != 0)) && (FUN_00d50b00(), local_450 != '\0')) &&
         (local_458 != 0)) {
        FUN_00d50b20();
      }
      local_488 = lVar6;
      FUN_00c92170();
      FUN_007db100();
      a = (BIO *)0x0;
      rsa = (RSA *)_PEM_read_bio_RSA_PUBKEY(0,0);
      _BIO_free(a);
      if (rsa == (RSA *)0x0) {
LAB_0029fcf8:
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
      else {
        pRVar13 = *(RSA **)(lVar3 + 0x10);
        uVar15 = *(uint *)(lVar3 + 0x18);
        _SHA256((uchar *)a,(size_t)&local_458,param_3);
        iVar8 = _RSA_verify((int)pRVar13,(uchar *)&segment_command_00000020,uVar15,(uchar *)rsa,
                            siglen,(RSA *)CONCAT44(in_stack_fffffffffffffb44,
                                                   in_stack_fffffffffffffb40));
        _RSA_free(pRVar13);
        if (iVar8 == 0) goto LAB_0029fcf8;
        FUN_004ef640();
        pRVar13 = (RSA *)0x0;
        pRVar10 = (RSA *)_PEM_read_bio_RSAPrivateKey(0,0);
        _BIO_free((BIO *)pRVar13);
        if (pRVar10 == (RSA *)0x0) goto LAB_0029fcf8;
        puVar11 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar11 = &g_025683c0;
        pcVar4 = g_025683d8;
        (*g_025683d8)();
        FUN_00c92170();
        iVar8 = *(int *)(local_490 + 0x18);
        _RSA_size(pRVar13);
        puVar12 = (uchar *)FUN_00e83010();
        if (0 < iVar8) {
          do {
            ___bzero();
            _RSA_size(pRVar13);
            pRVar13 = pRVar10;
            iVar9 = _RSA_private_decrypt
                              ((int)pRVar10,puVar12,(uchar *)((int64_t)&MACH_HEADER.magic + 1),rsa,
                               siglen);
            if (iVar9 == -1) {
              FUN_00e83070();
              _RSA_free(pRVar13);
              if (puVar11 != (void*)0x0) {
                FUN_00d50b20();
              }
              goto LAB_0029fcf8;
            }
            FUN_00c92190();
            iVar9 = _RSA_size(pRVar13);
            _RSA_size(pRVar13);
            iVar14 = iVar8 - iVar9;
            bVar2 = iVar9 <= iVar8;
            iVar8 = iVar14;
          } while (iVar14 != 0 && bVar2);
        }
        if (puVar12 != (uchar *)0x0) {
          FUN_00e83070();
        }
        _RSA_free(pRVar13);
        if (puVar11 == (void*)0x0) goto LAB_0029fcf8;
        if (*(int *)(puVar11 + 3) == 0x30) {
          FUN_00e7b4e0();
          FUN_00c92250();
          lVar6 = local_458;
          if (((local_450 == '\0') && (local_458 != 0)) &&
             ((FUN_00d50b00(), local_450 != '\0' && (local_458 != 0)))) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          iVar8 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340();
          *(void*)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar8) = 0;
          FUN_00e7b4e0();
          FUN_00c92250();
          lVar7 = local_458;
          if (((local_450 == '\0') && (local_458 != 0)) &&
             ((FUN_00d50b00(), local_450 != '\0' && (local_458 != 0)))) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          iVar8 = *(int *)(lVar7 + 0x18);
          FUN_00c8e340();
          *(void*)(*(int64_t *)(lVar7 + 0x10) + (int64_t)iVar8) = 0;
          puVar11 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar11 = &g_025683c0;
          (*pcVar4)();
          FUN_00c92170();
          _EVP_CIPHER_CTX_new();
          _EVP_aes_256_cbc();
          ctx = *(EVP_CIPHER_CTX **)(lVar7 + 0x10);
          impl = *(ENGINE **)(lVar6 + 0x10);
          puVar12 = (uchar *)0x0;
          iVar8 = _EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,impl,(uchar *)0x0,
                                     (uchar *)CONCAT44(in_stack_fffffffffffffb3c,siglen),
                                     in_stack_fffffffffffffb40);
          if (iVar8 == 0) {
            _EVP_CIPHER_CTX_reset();
            *(void*)(this_ptr + 1) = 0;
            *this_ptr = 0;
LAB_0029fe4e:
            FUN_00d50b20();
          }
          else {
            uVar15 = *(uint *)(local_488 + 0x18);
            if (uVar15 != 0) {
              ctx_00 = *(EVP_CIPHER_CTX **)(local_488 + 0x10);
              outl = (ENGINE *)&segment_command_000003d8.fileoff;
              do {
                if ((int)uVar15 < 0x400) {
                  outl = (ENGINE *)(uint64_t)uVar15;
                }
                ctx = ctx_00;
                impl = outl;
                iVar8 = _EVP_CipherUpdate(ctx_00,local_494,(int *)outl,puVar12,siglen);
                if (iVar8 == 0) {
                  _EVP_CIPHER_CTX_reset();
                  goto LAB_0029fe30;
                }
                FUN_00c92190();
                ctx_00 = (EVP_CIPHER_CTX *)(ctx_00->oiv + (int64_t)(int)outl + -0x18);
                uVar15 = uVar15 - (int)outl;
              } while (uVar15 != 0);
            }
            iVar8 = _EVP_CipherFinal_ex(ctx,local_494,(int *)impl);
            if (iVar8 == 0) {
              _EVP_CIPHER_CTX_reset();
LAB_0029fe30:
              *(void*)(this_ptr + 1) = 0;
              *this_ptr = 0;
              if (puVar11 != (void*)0x0) goto LAB_0029fe4e;
            }
            else {
              FUN_00c92190();
              _EVP_CIPHER_CTX_reset();
              *this_ptr = puVar11;
              *(void*)(this_ptr + 1) = 1;
            }
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
        }
        FUN_00d50b20();
      }
      if (local_488 != 0) {
        FUN_00d50b20();
      }
      if (local_490 != 0) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  cVar16 = (char)siglen;
  if ((local_4b8 != '\0') && (CONCAT44(in_stack_fffffffffffffb44,in_stack_fffffffffffffb40) != 0)) {
    FUN_00d50b20();
  }
  if ((cVar16 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
LAB_0029fe82:
                      ___stack_chk_fail();
}

