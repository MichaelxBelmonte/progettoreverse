// Function: FUN_01023110
// Address: 01023110
// Size: 1212 bytes
// Class: GNUni
// String references:
//   "crypto/evp/e_aes.c"


undefined8 FUN_01023110(undefined8 *param_1,uint param_2,size_t param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  void *pvVar7;
  uint *buf;
  longlong lVar8;
  undefined4 unaff_ESI;
  longlong unaff_RDI;
  undefined8 uVar9;
  int unaff_R14D;
  
  pvVar7 = (void *)(ulonglong)param_2;
  lVar5 = _EVP_CIPHER_CTX_get_cipher_data();
  uVar9 = 0xffffffff;
  buf = &switchD_01023154::switchdataD_010235cc;
  switch(unaff_ESI) {
  case 0:
    *(undefined8 *)(lVar5 + 0xf8) = 0;
    iVar2 = _EVP_CIPHER_iv_length((EVP_CIPHER *)&switchD_01023154::switchdataD_010235cc);
    *(int *)(lVar5 + 0x2c0) = iVar2;
    *(longlong *)(lVar5 + 0x2b8) = unaff_RDI + 0x28;
    *(undefined8 *)(lVar5 + 0x2c4) = 0xffffffff;
    *(undefined4 *)(lVar5 + 0x2cc) = 0xffffffff;
    break;
  default:
    goto switchD_01023154_caseD_1;
  case 8:
    lVar6 = _EVP_CIPHER_CTX_get_cipher_data();
    if (*(longlong *)(lVar5 + 0x280) != 0) {
      if (*(longlong *)(lVar5 + 0x280) != lVar5) {
        return 0;
      }
      *(longlong *)(lVar6 + 0x280) = lVar6;
    }
    if (*(longlong *)(lVar5 + 0x2b8) != unaff_RDI + 0x28) {
      pvVar7 = _CRYPTO_malloc((int)buf,(char *)((longlong)
                                                &dylib_command_00000b90.dylib.current_version + 1),
                              param_3);
      *(void **)(lVar6 + 0x2b8) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _ERR_put_error(0x20104e0,0x41,0xba2,param_4,unaff_R14D);
        return 0;
      }
      pvVar7 = (void *)(longlong)*(int *)(lVar5 + 0x2c0);
      goto LAB_010232b3;
    }
    *(undefined8 **)(lVar6 + 0x2b8) = param_1 + 5;
    break;
  case 9:
    if ((int)param_2 < 1) {
      return 0;
    }
    if ((0x10 < (int)param_2) && (*(int *)(lVar5 + 0x2c0) < (int)param_2)) {
      if (*(longlong *)(lVar5 + 0x2b8) != unaff_RDI + 0x28) {
        _CRYPTO_free(&switchD_01023154::switchdataD_010235cc);
      }
      pvVar7 = _CRYPTO_malloc((int)buf,(char *)&dylib_command_00000b30.dylib.timestamp,param_3);
      *(void **)(lVar5 + 0x2b8) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _ERR_put_error(0x20104e0,0x41,0xb3d,param_4,unaff_R14D);
        return 0;
      }
    }
    *(uint *)(lVar5 + 0x2c0) = param_2;
    break;
  case 0x10:
    if (0xf < param_2 - 1) {
      return 0;
    }
    if (*(int *)(unaff_RDI + 0x10) == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x2c4) < 0) {
      return 0;
    }
LAB_010232b3:
    _memcpy(buf,pvVar7,param_3);
    break;
  case 0x11:
    if (0xf < param_2 - 1) {
      return 0;
    }
    if (*(int *)(unaff_RDI + 0x10) != 0) {
      return 0;
    }
    _memcpy(&switchD_01023154::switchdataD_010235cc,pvVar7,param_3);
    *(uint *)(lVar5 + 0x2c4) = param_2;
    break;
  case 0x12:
    if (param_2 == 0xffffffff) {
      _memcpy(&switchD_01023154::switchdataD_010235cc,(void *)(longlong)*(int *)(lVar5 + 0x2c0),
              param_3);
      *(undefined4 *)(lVar5 + 0x2c8) = 1;
    }
    else {
      if ((int)param_2 < 4) {
        return 0;
      }
      if ((int)(*(int *)(lVar5 + 0x2c0) - param_2) < 8) {
        return 0;
      }
      _memcpy(&switchD_01023154::switchdataD_010235cc,pvVar7,param_3);
      if ((*(int *)(unaff_RDI + 0x10) != 0) &&
         (iVar2 = _RAND_bytes((uchar *)buf,param_2), iVar2 < 1)) {
        return 0;
      }
      *(undefined4 *)(lVar5 + 0x2c8) = 1;
    }
    break;
  case 0x13:
    if (*(int *)(lVar5 + 0x2c8) == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0xf8) == 0) {
      return 0;
    }
    _CRYPTO_gcm128_setiv(&switchD_01023154::switchdataD_010235cc,(longlong)*(int *)(lVar5 + 0x2c0));
    uVar3 = *(uint *)(lVar5 + 0x2c0);
    uVar4 = param_2;
    if ((int)uVar3 < (int)param_2) {
      uVar4 = uVar3;
    }
    if ((int)param_2 < 1) {
      uVar4 = uVar3;
    }
    _memcpy(buf,(void *)(longlong)(int)uVar4,param_3);
    lVar6 = *(longlong *)(lVar5 + 0x2b8);
    lVar8 = (longlong)*(int *)(lVar5 + 0x2c0);
    pcVar1 = (char *)(lVar8 + -1 + lVar6);
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 == '\0') {
      pcVar1 = (char *)(lVar8 + -2 + lVar6);
      *pcVar1 = *pcVar1 + '\x01';
      if (*pcVar1 == '\0') {
        pcVar1 = (char *)(lVar8 + -3 + lVar6);
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 == '\0') {
          pcVar1 = (char *)(lVar8 + -4 + lVar6);
          *pcVar1 = *pcVar1 + '\x01';
          if (*pcVar1 == '\0') {
            pcVar1 = (char *)(lVar8 + -5 + lVar6);
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 == '\0') {
              pcVar1 = (char *)(lVar8 + -6 + lVar6);
              *pcVar1 = *pcVar1 + '\x01';
              if (*pcVar1 == '\0') {
                pcVar1 = (char *)(lVar8 + -7 + lVar6);
                *pcVar1 = *pcVar1 + '\x01';
                if (*pcVar1 == '\0') {
                  pcVar1 = (char *)(lVar6 + -8 + lVar8);
                  *pcVar1 = *pcVar1 + '\x01';
                  *(undefined4 *)(lVar5 + 0xfc) = 1;
                  break;
                }
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(lVar5 + 0xfc) = 1;
    break;
  case 0x16:
    if (param_2 != 0xd) {
      return 0;
    }
    uVar9 = *param_1;
    *(undefined8 *)(unaff_RDI + 0x3d) = *(undefined8 *)((longlong)param_1 + 5);
    *(undefined8 *)(unaff_RDI + 0x38) = uVar9;
    *(undefined4 *)(lVar5 + 0x2cc) = 0xd;
    uVar3 = (uint)*(ushort *)(unaff_RDI + 0x43) << 0x10;
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8;
    if (uVar3 < 8) {
      return 0;
    }
    uVar4 = uVar3 - 8;
    if (*(int *)(unaff_RDI + 0x10) == 0) {
      if (uVar4 < 0x10) {
        return 0;
      }
      uVar4 = uVar3 - 0x18;
    }
    *(ushort *)(unaff_RDI + 0x43) = (ushort)uVar4 << 8 | (ushort)uVar4 >> 8;
    return 0x10;
  case 0x18:
    if (*(int *)(lVar5 + 0x2c8) == 0) {
      return 0;
    }
    if (*(int *)(lVar5 + 0xf8) == 0) {
      return 0;
    }
    if (*(int *)(unaff_RDI + 0x10) != 0) {
      return 0;
    }
    _memcpy(&switchD_01023154::switchdataD_010235cc,(void *)(longlong)(int)param_2,param_3);
    _CRYPTO_gcm128_setiv();
    *(undefined4 *)(lVar5 + 0xfc) = 1;
    break;
  case 0x25:
    *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + 0x2c0);
  }
  uVar9 = 1;
switchD_01023154_caseD_1:
  return uVar9;
}


