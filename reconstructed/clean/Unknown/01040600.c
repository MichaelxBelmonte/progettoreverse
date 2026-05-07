// Function: FUN_01040600
// Address: 01040600
// Size: 896 bytes
// Class: Unknown
// String references:
//   "crypto/kdf/tls1_prf.c"

bool FUN_01040600(EVP_MD *param_1,uint64_t *param_2,uint64_t param_3,char *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  char *pcVar27;
  uint64_t uVar28;
  int64_t *plVar29;
  uint64_t uVar30;
  int64_t lVar31;
  uint64_t uVar32;
  int64_t lVar33;
  char *arg1;
  int64_t this_ptr;
  int reason;
  char *file;
  int64_t lVar34;
  int64_t *plVar35;
  int in_stack_ffffffffffffffc8;
  uint64_t uVar36;
  
  plVar35 = *(int64_t **)(this_ptr + 0x28);
  if (*plVar35 == 0) {
    iVar26 = 0x69;
    reason = 0x81;
LAB_01040810:
    _ERR_put_error(0x2011977,iVar26,reason,param_4,in_stack_ffffffffffffffc8);
    return false;
  }
  if (plVar35[1] == 0) {
    iVar26 = 0x6b;
    reason = 0x85;
    goto LAB_01040810;
  }
  lVar31 = plVar35[0x83];
  if (lVar31 == 0) {
    iVar26 = 0x6a;
    reason = 0x89;
    goto LAB_01040810;
  }
  uVar28 = plVar35[2];
  plVar35 = plVar35 + 3;
  uVar36 = *param_2;
  iVar26 = _EVP_MD_type(param_1);
  if (iVar26 != 0x72) {
    iVar26 = FUN_01040c10(plVar35,uVar28,lVar31);
    return iVar26 != 0;
  }
  _EVP_md5();
  lVar34 = (uint64_t)((uint)uVar28 & 1) + (uVar28 >> 1);
  plVar29 = plVar35;
  lVar33 = lVar31;
  file = arg1;
  iVar26 = FUN_01040c10(plVar35,lVar34);
  if (iVar26 == 0) {
    return false;
  }
  pcVar27 = _CRYPTO_malloc((int)plVar29,(char *)&section_000000b8.reserved3,(int)lVar33);
  if (pcVar27 == (char *)0x0) {
    _ERR_put_error(0x2011977,0x41,0x105,file,(int)uVar36);
    return false;
  }
  _EVP_sha1();
  iVar26 = FUN_01040c10(plVar35,lVar34,lVar31,pcVar27);
  if (iVar26 == 0) {
    _CRYPTO_clear_free(0x10a,"crypto/kdf/tls1_prf.c");
    return false;
  }
  if (uVar36 == 0) goto LAB_0104079f;
  if ((uVar36 < 8) || ((arg1 < pcVar27 + uVar36 && (pcVar27 < arg1 + uVar36)))) {
    uVar28 = 0;
  }
  else {
    if (uVar36 < 0x20) {
      uVar32 = 0;
    }
    else {
      uVar28 = uVar36 & 0xffffffffffffffe0;
      uVar32 = (uVar28 - 0x20 >> 5) + 1;
      if (uVar28 - 0x20 == 0) {
        lVar31 = 0;
      }
      else {
        lVar33 = -(uVar32 & 0xfffffffffffffffe);
        lVar31 = 0;
        do {
          puVar1 = (uint *)(pcVar27 + lVar31);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar2 = (uint *)(pcVar27 + lVar31 + 0x10);
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar2 = (uint *)(arg1 + lVar31);
          uVar11 = puVar2[1];
          uVar12 = puVar2[2];
          uVar13 = puVar2[3];
          puVar3 = (uint *)(arg1 + lVar31 + 0x10);
          uVar14 = *puVar3;
          uVar15 = puVar3[1];
          uVar16 = puVar3[2];
          uVar17 = puVar3[3];
          puVar3 = (uint *)(arg1 + lVar31 + 0x20);
          uVar18 = *puVar3;
          uVar19 = puVar3[1];
          uVar20 = puVar3[2];
          uVar21 = puVar3[3];
          puVar3 = (uint *)(arg1 + lVar31 + 0x30);
          uVar22 = *puVar3;
          uVar23 = puVar3[1];
          uVar24 = puVar3[2];
          uVar25 = puVar3[3];
          puVar3 = (uint *)(arg1 + lVar31);
          *puVar3 = *puVar2 ^ *puVar1;
          puVar3[1] = uVar11 ^ uVar4;
          puVar3[2] = uVar12 ^ uVar5;
          puVar3[3] = uVar13 ^ uVar6;
          puVar1 = (uint *)(arg1 + lVar31 + 0x10);
          *puVar1 = uVar14 ^ uVar7;
          puVar1[1] = uVar15 ^ uVar8;
          puVar1[2] = uVar16 ^ uVar9;
          puVar1[3] = uVar17 ^ uVar10;
          puVar1 = (uint *)(pcVar27 + lVar31 + 0x20);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar2 = (uint *)(pcVar27 + lVar31 + 0x30);
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar2 = (uint *)(arg1 + lVar31 + 0x20);
          *puVar2 = *puVar1 ^ uVar18;
          puVar2[1] = uVar4 ^ uVar19;
          puVar2[2] = uVar5 ^ uVar20;
          puVar2[3] = uVar6 ^ uVar21;
          puVar1 = (uint *)(arg1 + lVar31 + 0x30);
          *puVar1 = uVar7 ^ uVar22;
          puVar1[1] = uVar8 ^ uVar23;
          puVar1[2] = uVar9 ^ uVar24;
          puVar1[3] = uVar10 ^ uVar25;
          lVar31 = lVar31 + 0x40;
          lVar33 = lVar33 + 2;
        } while (lVar33 != 0);
      }
      if ((uVar32 & 1) != 0) {
        puVar1 = (uint *)(pcVar27 + lVar31);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (uint *)(pcVar27 + lVar31 + 0x10);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar2 = (uint *)(arg1 + lVar31);
        uVar11 = puVar2[1];
        uVar12 = puVar2[2];
        uVar13 = puVar2[3];
        puVar3 = (uint *)(arg1 + lVar31 + 0x10);
        uVar14 = *puVar3;
        uVar15 = puVar3[1];
        uVar16 = puVar3[2];
        uVar17 = puVar3[3];
        puVar3 = (uint *)(arg1 + lVar31);
        *puVar3 = *puVar2 ^ *puVar1;
        puVar3[1] = uVar11 ^ uVar4;
        puVar3[2] = uVar12 ^ uVar5;
        puVar3[3] = uVar13 ^ uVar6;
        puVar1 = (uint *)(arg1 + lVar31 + 0x10);
        *puVar1 = uVar14 ^ uVar7;
        puVar1[1] = uVar15 ^ uVar8;
        puVar1[2] = uVar16 ^ uVar9;
        puVar1[3] = uVar17 ^ uVar10;
      }
      if (uVar36 == uVar28) goto LAB_0104079f;
      uVar32 = uVar28;
      if ((uVar36 & 0x18) == 0) goto LAB_01040732;
    }
    uVar28 = uVar36 & 0xfffffffffffffff8;
    do {
      *(uint64_t *)(arg1 + uVar32) =
           *(uint64_t *)(arg1 + uVar32) ^ *(uint64_t *)(pcVar27 + uVar32);
      uVar32 = uVar32 + 8;
    } while (uVar28 != uVar32);
    if (uVar36 == uVar28) goto LAB_0104079f;
  }
LAB_01040732:
  uVar30 = ~uVar28;
  for (uVar32 = uVar36 & 3; uVar32 != 0; uVar32 = uVar32 - 1) {
    arg1[uVar28] = arg1[uVar28] ^ pcVar27[uVar28];
    uVar28 = uVar28 + 1;
  }
  if (2 < uVar30 + uVar36) {
    do {
      arg1[uVar28] = arg1[uVar28] ^ pcVar27[uVar28];
      arg1[uVar28 + 1] = arg1[uVar28 + 1] ^ pcVar27[uVar28 + 1];
      arg1[uVar28 + 2] = arg1[uVar28 + 2] ^ pcVar27[uVar28 + 2];
      arg1[uVar28 + 3] = arg1[uVar28 + 3] ^ pcVar27[uVar28 + 3];
      uVar28 = uVar28 + 4;
    } while (uVar36 != uVar28);
  }
LAB_0104079f:
  _CRYPTO_clear_free(0x10f,"crypto/kdf/tls1_prf.c");
  return true;
}

