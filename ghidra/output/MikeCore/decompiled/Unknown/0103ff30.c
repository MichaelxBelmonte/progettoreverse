// Function: FUN_0103ff30
// Address: 0103ff30
// Size: 587 bytes
// Class: Unknown
// String references:
//   "crypto/kdf/scrypt.c"


undefined8 FUN_0103ff30(ulonglong *param_1,uint param_2,int param_3,char *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  void *pvVar3;
  int num;
  ulonglong uVar4;
  int unaff_ESI;
  longlong unaff_RDI;
  int unaff_R14D;
  
  if (5 < unaff_ESI - 0x1008U) {
    return 0xfffffffe;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x28);
  num = (&switchD_0103ff65::switchdataD_0104017c)[unaff_ESI - 0x1008U] + 0x104017c;
  switch(unaff_ESI) {
  case 0x1008:
    if (param_1 == (ulonglong *)0x0) {
      return 1;
    }
    if ((int)param_2 < 0) {
      return 0;
    }
    if (*plVar1 != 0) {
      num = 100;
      _CRYPTO_clear_free(100,"crypto/kdf/scrypt.c");
    }
    if ((int)param_2 < 1) {
      pvVar3 = _CRYPTO_malloc(num,section_00000068.sectname + 1,param_3);
      *plVar1 = (longlong)pvVar3;
    }
    else {
      pvVar3 = (void *)_CRYPTO_memdup(0x67,"crypto/kdf/scrypt.c");
      *plVar1 = (longlong)pvVar3;
    }
    if (pvVar3 == (void *)0x0) {
LAB_01040158:
      _ERR_put_error(0x2011947,0x41,0x6c,param_4,unaff_R14D);
      return 0;
    }
    plVar1[1] = (ulonglong)param_2;
    break;
  case 0x1009:
    if (param_1 == (ulonglong *)0x0) {
      return 1;
    }
    if ((int)param_2 < 0) {
      return 0;
    }
    if (plVar1[2] != 0) {
      num = 100;
      _CRYPTO_clear_free(100,"crypto/kdf/scrypt.c");
    }
    if ((int)param_2 < 1) {
      pvVar3 = _CRYPTO_malloc(num,section_00000068.sectname + 1,param_3);
      plVar1[2] = (longlong)pvVar3;
    }
    else {
      pvVar3 = (void *)_CRYPTO_memdup(0x67,"crypto/kdf/scrypt.c");
      plVar1[2] = (longlong)pvVar3;
    }
    if (pvVar3 == (void *)0x0) goto LAB_01040158;
    plVar1[3] = (ulonglong)param_2;
    break;
  case 0x100a:
    uVar2 = *param_1;
    if (uVar2 < 2) {
      return 0;
    }
    uVar4 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    if (1 < (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
      return 0;
    }
    plVar1[4] = uVar2;
    break;
  case 0x100b:
    if (*param_1 == 0) {
      return 0;
    }
    plVar1[5] = *param_1;
    break;
  case 0x100c:
    if (*param_1 == 0) {
      return 0;
    }
    plVar1[6] = *param_1;
    break;
  case 0x100d:
    if (*param_1 == 0) {
      return 0;
    }
    plVar1[7] = *param_1;
  }
  return 1;
}


