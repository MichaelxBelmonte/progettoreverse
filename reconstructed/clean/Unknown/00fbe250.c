// Function: FUN_00fbe250
// Address: 00fbe250
// Size: 502 bytes
// Class: Unknown
// String references:
//   "crypto/dh/dh_pmeth.c"

uint FUN_00fbe250(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint64_t uVar2;
  int unaff_ESI;
  int64_t this_ptr;
  uint uVar3;
  
  uVar3 = 1;
  if (0xf < unaff_ESI - 0x1001U) {
    if (unaff_ESI == 2) {
      return 1;
    }
    goto LAB_00fbe37d;
  }
  puVar1 = *(uint **)(this_ptr + 0x28);
  switch(unaff_ESI) {
  case 0x1001:
    uVar3 = 0xfffffffe;
    if (0xff < (int)param_2) {
      *puVar1 = param_2;
      uVar3 = 1;
    }
    break;
  case 0x1002:
    uVar3 = 0xfffffffe;
    if (puVar1[2] == 0) {
      puVar1[1] = param_2;
      uVar3 = 1;
    }
    break;
  case 0x1003:
    uVar3 = 0xfffffffe;
    if ((param_2 - 1 < 3) && (puVar1[9] == 0)) {
      puVar1[8] = param_2;
      uVar3 = 1;
    }
    break;
  case 0x1004:
    if (puVar1[2] != 0) {
      puVar1[3] = param_2;
      return 1;
    }
    goto LAB_00fbe37d;
  case 0x1005:
    uVar3 = 0xfffffffe;
    if (param_2 < 3) {
      puVar1[2] = param_2;
      uVar3 = 1;
    }
    break;
  case 0x1006:
    if (param_2 == 0xfffffffe) {
      uVar3 = (uint)(char)puVar1[0xc];
    }
    else {
      uVar3 = 0xfffffffe;
      if (param_2 - 1 < 2) {
        *(char *)(puVar1 + 0xc) = (char)param_2;
        uVar3 = 1;
      }
    }
    break;
  case 0x1007:
    *(uint **)(puVar1 + 0x10) = param_1;
    break;
  case 0x1008:
    uVar2 = *(void*)(puVar1 + 0x10);
    goto LAB_00fbe3e3;
  case 0x1009:
    if (0 < (int)param_2) {
      *(uint64_t *)(puVar1 + 0x16) = (uint64_t)param_2;
      return 1;
    }
LAB_00fbe37d:
    uVar3 = 0xfffffffe;
    break;
  case 0x100a:
    *param_1 = puVar1[0x16];
    break;
  case 0x100b:
    _CRYPTO_free(&switchD_00fbe284::switchdataD_00fbe448);
    *(uint **)(puVar1 + 0x12) = param_1;
    if (param_1 == (uint *)0x0) {
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
    }
    else {
      *(int64_t *)(puVar1 + 0x14) = (int64_t)(int)param_2;
    }
    break;
  case 0x100c:
    *(void*)param_1 = *(void*)(puVar1 + 0x12);
    uVar3 = puVar1[0x14];
    break;
  case 0x100d:
    _ASN1_OBJECT_free((ASN1_OBJECT *)&switchD_00fbe284::switchdataD_00fbe448);
    *(uint **)(puVar1 + 0xe) = param_1;
    break;
  case 0x100e:
    uVar2 = *(void*)(puVar1 + 0xe);
LAB_00fbe3e3:
    *(void*)param_1 = uVar2;
    break;
  case 0x100f:
    uVar3 = 0xfffffffe;
    if ((0 < (int)param_2) && (puVar1[8] == 0)) {
      puVar1[9] = param_2;
      uVar3 = 1;
    }
    break;
  case 0x1010:
    puVar1[4] = param_2;
    uVar3 = 1;
  }
  return uVar3;
}

