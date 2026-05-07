// Function: FUN_0101f6c0
// Address: 0101f6c0
// Size: 715 bytes
// Class: Unknown


uint FUN_0101f6c0(BIO *param_1,uint *param_2,int *param_3,uchar *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *outm;
  BIO *pBVar5;
  EVP_CIPHER_CTX *pEVar6;
  uint uVar7;
  uint uVar8;
  longlong unaff_RSI;
  uint uVar9;
  EVP_CIPHER_CTX *pEVar10;
  uint *puVar11;
  uint local_4c;
  uint *puVar12;
  uint local_34;
  
  local_34 = 0;
  if (unaff_RSI != 0) {
    pEVar10 = (EVP_CIPHER_CTX *)((ulonglong)param_2 & 0xffffffff);
    puVar11 = param_2;
    outm = (uint *)_BIO_get_data();
    pBVar5 = _BIO_next(param_1);
    if (outm == (uint *)0x0) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      if (pBVar5 != (BIO *)0x0) {
        uVar1 = *outm;
        pEVar6 = (EVP_CIPHER_CTX *)(ulonglong)uVar1;
        if ((int)uVar1 < 1) {
          local_34 = 0;
        }
        else {
          pEVar6 = (EVP_CIPHER_CTX *)(ulonglong)(uVar1 - outm[1]);
          if ((int)param_2 < (int)(uVar1 - outm[1])) {
            pEVar6 = pEVar10;
          }
          local_34 = (uint)pEVar6;
          puVar11 = (uint *)(longlong)(int)local_34;
          _memcpy(pEVar6,puVar11,(size_t)param_3);
          pEVar10 = (EVP_CIPHER_CTX *)(ulonglong)((int)param_2 - local_34);
          uVar1 = outm[1];
          outm[1] = local_34 + uVar1;
          if (*outm == local_34 + uVar1) {
            outm[0] = 0;
            outm[1] = 0;
          }
        }
        uVar2 = _EVP_CIPHER_CTX_block_size(pEVar6);
        iVar3 = (int)puVar11;
        uVar1 = 0;
        if (uVar2 != 1) {
          uVar1 = uVar2;
        }
        pEVar6 = (EVP_CIPHER_CTX *)(ulonglong)uVar1;
        uVar2 = local_34;
        if (0 < (int)pEVar10) {
          puVar12 = outm + 0xc;
          while( true ) {
            iVar3 = (int)puVar11;
            uVar9 = (uint)pEVar10;
            uVar2 = local_34;
            if ((int)outm[2] < 1) break;
            if (*(longlong *)(outm + 8) == *(longlong *)(outm + 10)) {
              *(uint **)(outm + 8) = outm + 0x54;
              *(uint **)(outm + 10) = outm + 0x54;
              iVar3 = 0x1000;
              uVar2 = _BIO_read((BIO *)pEVar6,&dylib_command_00000ff0.dylib.current_version,
                                (int)param_3);
              if ((int)uVar2 < 1) goto LAB_0101f8c0;
              *(ulonglong *)(outm + 10) = *(longlong *)(outm + 10) + (ulonglong)uVar2;
              if ((int)uVar9 < 0x101) goto LAB_0101f875;
LAB_0101f7ea:
              uVar7 = uVar9 - uVar1;
              pEVar6 = *(EVP_CIPHER_CTX **)(outm + 8);
              uVar8 = uVar2;
              if ((int)uVar7 < (int)uVar2) {
                uVar8 = uVar7;
              }
              param_3 = (int *)(ulonglong)uVar8;
              puVar11 = &local_4c;
              iVar3 = _EVP_CipherUpdate(pEVar6,(uchar *)puVar11,param_3,param_4,(int)puVar12);
              if (iVar3 == 0) {
                _BIO_clear_flags((BIO *)pEVar6,(int)puVar11);
                return 0;
              }
              local_34 = local_34 + local_4c;
              pEVar10 = (EVP_CIPHER_CTX *)(ulonglong)(uVar9 - local_4c);
              if (uVar2 - uVar7 != 0 && (int)uVar7 <= (int)uVar2) {
                pEVar6 = (EVP_CIPHER_CTX *)((longlong)(int)uVar7 + *(longlong *)(outm + 8));
                *(EVP_CIPHER_CTX **)(outm + 8) = pEVar6;
                uVar2 = uVar2 - uVar7;
                goto LAB_0101f879;
              }
              *(undefined8 *)(outm + 8) = *(undefined8 *)(outm + 10);
            }
            else {
              uVar2 = (int)*(longlong *)(outm + 10) - (int)*(longlong *)(outm + 8);
              if ((int)uVar2 < 1) {
LAB_0101f8c0:
                iVar4 = _BIO_test_flags((BIO *)pEVar6,iVar3);
                if (iVar4 != 0) {
                  if (local_34 != 0) {
                    uVar2 = local_34;
                  }
                  break;
                }
                outm[2] = uVar2;
                puVar11 = outm;
                uVar2 = _EVP_CipherFinal_ex(pEVar6,(uchar *)outm,param_3);
                iVar3 = (int)puVar11;
                outm[4] = uVar2;
                outm[1] = 0;
                uVar8 = *outm;
              }
              else {
                if (0x100 < (int)uVar9) goto LAB_0101f7ea;
LAB_0101f875:
                pEVar6 = *(EVP_CIPHER_CTX **)(outm + 8);
LAB_0101f879:
                uVar9 = (uint)pEVar10;
                if (0xff < (int)uVar2) {
                  uVar2 = 0x100;
                }
                param_3 = (int *)(ulonglong)uVar2;
                puVar11 = outm;
                iVar4 = _EVP_CipherUpdate(pEVar6,(uchar *)outm,param_3,param_4,(int)puVar12);
                iVar3 = (int)puVar11;
                if (iVar4 == 0) {
                  _BIO_clear_flags((BIO *)pEVar6,iVar3);
                  outm[4] = 0;
                  return 0;
                }
                *(ulonglong *)(outm + 8) = *(longlong *)(outm + 8) + (ulonglong)uVar2;
                outm[2] = 1;
                uVar8 = *outm;
                if (uVar8 == 0) goto LAB_0101f7b0;
              }
              if ((int)uVar9 < (int)uVar8) {
                uVar8 = uVar9;
              }
              uVar2 = local_34;
              if ((int)uVar8 < 1) break;
              puVar11 = (uint *)(ulonglong)uVar8;
              _memcpy(pEVar6,puVar11,(size_t)param_3);
              local_34 = local_34 + uVar8;
              outm[1] = uVar8;
              pEVar10 = (EVP_CIPHER_CTX *)(ulonglong)(uVar9 - uVar8);
            }
LAB_0101f7b0:
            iVar3 = (int)puVar11;
            uVar2 = local_34;
            if ((int)pEVar10 < 1) break;
          }
        }
        local_34 = uVar2;
        _BIO_clear_flags((BIO *)pEVar6,iVar3);
        _BIO_copy_next_retry((BIO *)pEVar6);
        if (local_34 == 0) {
          local_34 = outm[2];
        }
      }
    }
  }
  return local_34;
}


