// Function: FUN_0102fcd0
// Address: 0102fcd0
// Size: 1121 bytes
// Class: Unknown

uint64_t FUN_0102fcd0(MD5_CTX *param_1,RC4_KEY *param_2,uchar *param_3,uchar *param_4)

{
  uint *puVar1;
  int64_t lVar2;
  int iVar3;
  uint *puVar4;
  uchar *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  RC4_KEY *pRVar8;
  MD5_CTX *pMVar9;
  int64_t lVar10;
  ulong len;
  MD5_CTX *pMVar11;
  MD5_CTX *pMVar12;
  uint uVar13;
  uint64_t uVar14;
  RC4_KEY *arg1;
  size_t len_00;
  uint *puVar15;
  uint uVar16;
  uint64_t uVar17;
  uint uVar18;
  int64_t lVar19;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  puVar4 = (uint *)_EVP_CIPHER_CTX_get_cipher_data();
  uVar18 = 0x40 - puVar4[0x146];
  pMVar9 = (MD5_CTX *)(uint64_t)uVar18;
  pMVar12 = *(MD5_CTX **)(puVar4 + 0x148);
  if ((pMVar12 == (MD5_CTX *)0xffffffffffffffff) || (uVar7 = 0, (MD5_CTX *)&pMVar12->Nl == param_1))
  {
    uVar16 = ~*puVar4 & 0x1f;
    uVar17 = (uint64_t)uVar16;
    puVar15 = puVar4 + 0x130;
    iVar3 = _EVP_CIPHER_CTX_encrypting();
    len = (ulong)param_2;
    if (iVar3 == 0) {
      pMVar11 = (MD5_CTX *)((uint64_t)(uVar16 < uVar18) * 0x40 + uVar17 + 0x40);
      if (pMVar11 < param_1) {
        uVar17 = (int64_t)param_1 - (int64_t)pMVar11;
        if ((uVar17 < 0x40) || ((g_02803048._2_1_ & 0x10) != 0)) {
          lVar10 = 0;
          lVar19 = 0;
        }
        else {
          puVar5 = (uchar *)(uVar17 >> 6);
          pRVar8 = arg1;
          _RC4(arg1,len,param_3,param_4);
          _MD5_Update((MD5_CTX *)pRVar8,pMVar9,(size_t)param_3);
          param_3 = arg1->data + (int64_t)pMVar9->data + -0x1a;
          _rc4_md5_enc(puVar15,arg1->data + (int64_t)pMVar11->data + -0x1a);
          uVar14 = uVar17 & 0xffffffffffffffc0;
          lVar10 = (int64_t)pMVar11->data + (uVar14 - 0x18);
          lVar19 = (int64_t)pMVar9->data + (uVar14 - 0x18);
          uVar16 = (int)uVar14 * 8;
          puVar1 = puVar4 + 0x134;
          uVar18 = *puVar1;
          *puVar1 = *puVar1 + uVar16;
          puVar4[0x135] = puVar4[0x135] + (int)(uVar17 >> 0x1d) + (uint)CARRY4(uVar18,uVar16);
          param_4 = puVar5;
        }
      }
      else {
        lVar10 = 0;
        lVar19 = 0;
      }
      pRVar8 = (RC4_KEY *)(arg1->data + lVar10 + -2);
      _RC4(pRVar8,len + (int)lVar10,param_3,param_4);
      len_00 = (size_t)param_3;
      if (pMVar12 == (MD5_CTX *)0xffffffffffffffff) {
        _MD5_Update((MD5_CTX *)pRVar8,(void *)((int64_t)param_1 - lVar19),len_00);
      }
      else {
        pMVar12 = (MD5_CTX *)((int64_t)pMVar12 - lVar19);
        _MD5_Update((MD5_CTX *)pRVar8,pMVar12,len_00);
        _MD5_Final(&pRVar8->x,pMVar12);
        *(void*)puVar15 = *(void*)(puVar4 + 0x119);
        *(void*)(puVar4 + 0x132) = *(void*)(puVar4 + 0x11b);
        *(void*)(puVar4 + 0x134) = *(void*)(puVar4 + 0x11d);
        *(void*)(puVar4 + 0x136) = *(void*)(puVar4 + 0x11f);
        *(void*)(puVar4 + 0x138) = *(void*)(puVar4 + 0x121);
        *(void*)(puVar4 + 0x13a) = *(void*)(puVar4 + 0x123);
        *(void*)(puVar4 + 0x13c) = *(void*)(puVar4 + 0x125);
        *(void*)(puVar4 + 0x13e) = *(void*)(puVar4 + 0x127);
        *(void*)(puVar4 + 0x140) = *(void*)(puVar4 + 0x129);
        *(void*)(puVar4 + 0x142) = *(void*)(puVar4 + 299);
        *(void*)(puVar4 + 0x143) = *(void*)(puVar4 + 300);
        *(void*)(puVar4 + 0x145) = *(void*)(puVar4 + 0x12e);
        pMVar12 = (MD5_CTX *)&MACH_HEADER.ncmds;
        _MD5_Update((MD5_CTX *)pRVar8,&MACH_HEADER.ncmds,len_00);
        _MD5_Final(&pRVar8->x,pMVar12);
        iVar3 = _CRYPTO_memcmp(pRVar8,&MACH_HEADER.ncmds,len_00);
        if (iVar3 != 0) {
          uVar7 = 0;
          goto LAB_0103010d;
        }
      }
    }
    else {
      if (pMVar12 == (MD5_CTX *)0xffffffffffffffff) {
        pMVar12 = param_1;
      }
      pMVar11 = (MD5_CTX *)(pMVar9->data + 10);
      if (uVar16 <= uVar18) {
        pMVar11 = pMVar9;
      }
      uVar14 = (int64_t)pMVar12 - (int64_t)pMVar11;
      puVar5 = param_4;
      if (pMVar12 < pMVar11 || uVar14 == 0) {
        uVar17 = 0;
        lVar10 = 0;
      }
      else if ((uVar14 < 0x40) || ((g_02803048._2_1_ & 0x10) != 0)) {
        uVar17 = 0;
        lVar10 = 0;
      }
      else {
        puVar5 = (uchar *)(uVar14 >> 6);
        _MD5_Update(pMVar12,pMVar11,(size_t)param_3);
        _RC4(arg1,len,param_3,param_4);
        param_3 = (uchar *)((int64_t)pMVar11->data + (int64_t)(param_2->data + -0x1a));
        _rc4_md5_enc(puVar15,arg1->data + (uVar17 - 2));
        uVar6 = uVar14 & 0xffffffffffffffc0;
        uVar17 = uVar17 | uVar6;
        lVar10 = (int64_t)pMVar11->data + (uVar6 - 0x18);
        uVar13 = (int)(uVar14 >> 0x1d) + puVar4[0x135];
        puVar4[0x135] = uVar13;
        uVar16 = (int)uVar6 * 8;
        puVar1 = puVar4 + 0x134;
        uVar18 = *puVar1;
        *puVar1 = *puVar1 + uVar16;
        if (CARRY4(uVar18,uVar16)) {
          puVar4[0x135] = uVar13 + 1;
        }
      }
      pMVar11 = (MD5_CTX *)((int64_t)pMVar12 - lVar10);
      pMVar9 = pMVar12;
      _MD5_Update(pMVar12,pMVar11,(size_t)param_3);
      if (pMVar12 == param_1) {
        _RC4((RC4_KEY *)(arg1->data + (uVar17 - 2)),len + (int)uVar17,param_3,puVar5);
      }
      else {
        if (param_2 != arg1) {
          pMVar11 = (MD5_CTX *)((int64_t)pMVar12 - uVar17);
          _memcpy(pMVar9,pMVar11,(size_t)param_3);
        }
        _MD5_Final((uchar *)pMVar9,pMVar11);
        *(void*)puVar15 = *(void*)(puVar4 + 0x119);
        *(void*)(puVar4 + 0x132) = *(void*)(puVar4 + 0x11b);
        *(void*)(puVar4 + 0x134) = *(void*)(puVar4 + 0x11d);
        *(void*)(puVar4 + 0x136) = *(void*)(puVar4 + 0x11f);
        *(void*)(puVar4 + 0x138) = *(void*)(puVar4 + 0x121);
        *(void*)(puVar4 + 0x13a) = *(void*)(puVar4 + 0x123);
        *(void*)(puVar4 + 0x13c) = *(void*)(puVar4 + 0x125);
        *(void*)(puVar4 + 0x13e) = *(void*)(puVar4 + 0x127);
        *(void*)(puVar4 + 0x140) = *(void*)(puVar4 + 0x129);
        *(void*)(puVar4 + 0x142) = *(void*)(puVar4 + 299);
        *(void*)(puVar4 + 0x143) = *(void*)(puVar4 + 300);
        *(void*)(puVar4 + 0x145) = *(void*)(puVar4 + 0x12e);
        pMVar12 = (MD5_CTX *)&MACH_HEADER.ncmds;
        _MD5_Update(pMVar9,&MACH_HEADER.ncmds,(size_t)param_3);
        _MD5_Final((uchar *)pMVar9,pMVar12);
        _RC4((RC4_KEY *)(arg1->data + (uVar17 - 2)),
             (ulong)(RC4_KEY *)(arg1->data + (uVar17 - 2)),param_3,puVar5);
      }
    }
    puVar4[0x148] = 0xffffffff;
    puVar4[0x149] = 0xffffffff;
    uVar7 = 1;
  }
LAB_0103010d:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar2) {
                        ___stack_chk_fail();
  }
  return uVar7;
}

