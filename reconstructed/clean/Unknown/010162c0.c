// Function: FUN_010162c0
// Address: 010162c0
// Size: 823 bytes
// Class: Unknown
// String references:
//   "crypto/ec/ecx_meth.c"

uint64_t FUN_010162c0(EVP_PKEY *param_1,char *param_2,void **param_3,X509_ALGOR *param_4)

{
  int iVar1;
  uint uVar2;
  int64_t lVar3;
  byte *pbVar4;
  segment_command *psVar5;
  int unaff_ESI;
  void **key;
  int iVar6;
  uint32_t uVar7;
  int unaff_R12D;
  int local_34;
  
  uVar7 = (uint32_t)((uint64_t)param_4 >> 0x20);
  iVar6 = (int)param_4;
  iVar1 = iVar6;
  if (iVar6 == 2) {
    lVar3 = _CRYPTO_zalloc(param_1,0x46);
    param_2 = (char *)param_1;
    key = param_3;
    if (lVar3 == 0) {
LAB_0101647e:
      _ERR_put_error(0x200f197,0x41,0x48,(char *)CONCAT44(uVar7,iVar1),unaff_R12D);
      return 0;
    }
  }
  else {
    key = param_3;
    if (((EVP_PKEY *)param_2 != (EVP_PKEY *)0x0) &&
       (_X509_ALGOR_get0((ASN1_OBJECT **)param_2,(int *)0x0,param_3,param_4), local_34 != -1)) {
      _ERR_put_error(0x200f197,0x66,0x3b,(char *)CONCAT44(uVar7,iVar1),unaff_R12D);
      return 0;
    }
    if (param_1 == (EVP_PKEY *)0x0) {
LAB_010164a6:
      _ERR_put_error(0x200f197,0x66,0x41,(char *)CONCAT44(uVar7,iVar1),unaff_R12D);
      return 0;
    }
    uVar2 = 0x20;
    if ((unaff_ESI != 0x40a) && (unaff_ESI != 0x43f)) {
      uVar2 = unaff_ESI == 0x40b ^ 0x39;
    }
    if (uVar2 != (uint)param_3) goto LAB_010164a6;
    lVar3 = _CRYPTO_zalloc();
    if (lVar3 == 0) goto LAB_0101647e;
    if (iVar6 == 0) {
      _memcpy(param_2,(void *)(int64_t)(int)(uint)param_3,(size_t)key);
      goto LAB_010165d2;
    }
  }
  pbVar4 = (byte *)_CRYPTO_secure_malloc();
  *(byte **)(lVar3 + 0x40) = pbVar4;
  if (pbVar4 == (byte *)0x0) {
    param_2 = "crypto/ec/ecx_meth.c";
    _ERR_put_error(0x200f197,0x41,0x52,(char *)CONCAT44(uVar7,iVar1),unaff_R12D);
LAB_01016591:
    _CRYPTO_free(param_2);
    return 0;
  }
  if (iVar6 == 2) {
    iVar1 = _RAND_priv_bytes();
    if (iVar1 < 1) {
      _CRYPTO_secure_free();
      *(void*)(lVar3 + 0x40) = 0;
      goto LAB_01016591;
    }
    if (0x43e < unaff_ESI) goto LAB_01016556;
    if (unaff_ESI == 0x40a) {
      *pbVar4 = *pbVar4 & 0xf8;
      pbVar4[0x1f] = pbVar4[0x1f] & 0x3f | 0x40;
      goto LAB_010165c7;
    }
    if (unaff_ESI != 0x40b) goto LAB_010165d2;
    *pbVar4 = *pbVar4 & 0xfc;
    pbVar4[0x37] = pbVar4[0x37] | 0x80;
  }
  else {
    psVar5 = &segment_command_00000020;
    if ((unaff_ESI != 0x40a) && (unaff_ESI != 0x43f)) {
      psVar5 = (segment_command *)((uint64_t)(unaff_ESI == 0x40b) ^ 0x39);
    }
    _memcpy(param_2,psVar5,(size_t)key);
    if (0x43e < unaff_ESI) {
LAB_01016556:
      if (unaff_ESI == 0x43f) {
        _ED25519_public_from_private();
      }
      else if (unaff_ESI == 0x440) {
        _ED448_public_from_private();
      }
      goto LAB_010165d2;
    }
    if (unaff_ESI == 0x40a) {
LAB_010165c7:
      _X25519_public_from_private();
      goto LAB_010165d2;
    }
    if (unaff_ESI != 0x40b) goto LAB_010165d2;
  }
  _X448_public_from_private();
LAB_010165d2:
  _EVP_PKEY_assign((EVP_PKEY *)param_2,(int)lVar3,(char *)key);
  return 1;
}

