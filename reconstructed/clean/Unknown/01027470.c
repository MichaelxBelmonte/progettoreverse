// Function: FUN_01027470
// Address: 01027470
// Size: 3980 bytes
// Class: Unknown

uint64_t FUN_01027470(void *param_1,SHA256_CTX *param_2,size_t param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  SHA256_CTX *pSVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint uVar15;
  uint uVar16;
  int64_t lVar17;
  uint64_t uVar18;
  SHA256_CTX *pSVar19;
  uint uVar20;
  uint uVar21;
  void *data;
  void *pvVar22;
  uint uVar23;
  void *pvVar24;
  SHA256_CTX *pSVar25;
  segment_command *psVar26;
  SHA256_CTX *arg1;
  uint *puVar27;
  uint uVar28;
  size_t sVar29;
  uint64_t uVar30;
  int64_t lVar31;
  uint uVar32;
  void *pvVar33;
  SHA256_CTX *pSVar34;
  SHA256_CTX *pSVar35;
  uint extraout_XMM0_Da;
  uint32_t uVar36;
  uint64_t local_c0;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  pSVar34 = param_2;
  pSVar12 = (SHA256_CTX *)_EVP_CIPHER_CTX_get_cipher_data();
  pvVar24 = (void *)(uint64_t)(0x40 - pSVar12[5].h[3]);
  pvVar33 = *(void **)(pSVar12[5].h + 6);
  pSVar12[5].h[6] = 0xffffffff;
  pSVar12[5].h[7] = 0xffffffff;
  uVar13 = 0;
  if (((uint64_t)param_1 & 0xf) == 0) {
    puVar1 = pSVar12[4].h + 5;
    iVar11 = _EVP_CIPHER_CTX_encrypting();
    if (iVar11 == 0) {
      uVar14 = _EVP_CIPHER_CTX_iv_noconst();
      pSVar34 = pSVar12;
      _aesni_cbc_encrypt(pSVar12,param_1,uVar14,0);
      sVar29 = (size_t)uVar14;
      if (pvVar33 != (void *)0xffffffffffffffff) {
        uVar20 = (uint)*(ushort *)((int64_t)pvVar33 + (int64_t)(pSVar12[5].h + 7)) << 0x10;
        uVar13 = (uint64_t)(0x301 < (uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8));
        if (param_1 < (void *)(uVar13 * 0x10 + 0x21)) {
          if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
            return 0;
          }
          goto LAB_010283f8;
        }
        puVar27 = arg1->h + uVar13 * 4;
        param_1 = (void *)((int64_t)param_1 + uVar13 * -0x10);
        uVar28 = 0x120U - (int)param_1 >> 0x18 | (int)param_1 + 0xdfU & 0xff;
        uVar16 = (uint)*(byte *)((int64_t)param_1 + (int64_t)puVar27 + -1);
        uVar20 = -(uint)(uVar28 < uVar16);
        sVar29 = (int)pSVar12 + 0x250;
        uVar15 = ~uVar20;
        uVar16 = uVar15 & uVar16;
        pSVar34 = (SHA256_CTX *)(uint64_t)uVar16;
        uVar16 = uVar20 & uVar28 | uVar16;
        lVar17 = (int64_t)param_1 + (-0x21 - (uint64_t)uVar16);
        *(ushort *)((void*)((int64_t)pSVar12[5].h + 0x1e) + (int64_t)pvVar33) =
             (ushort)lVar17 << 8 | (ushort)lVar17 >> 8;
        uVar14 = *(void*)(pSVar12[3].h + 3);
        *(void*)(pSVar12[5].h + 1) = *(void*)(pSVar12[3].h + 1);
        *(void*)(pSVar12[5].h + 3) = uVar14;
        uVar14 = *(void*)&pSVar12[2].md_len;
        *(void*)(pSVar12[4].data + 0xf) = *(void*)(pSVar12[2].data + 0xf);
        *(void*)&pSVar12[4].md_len = uVar14;
        uVar14 = *(void*)(pSVar12[2].data + 0xd);
        *(void*)(pSVar12[4].data + 0xb) = *(void*)(pSVar12[2].data + 0xb);
        *(void*)(pSVar12[4].data + 0xd) = uVar14;
        uVar20 = pSVar12[2].h[5];
        uVar23 = pSVar12[2].h[6];
        uVar32 = pSVar12[2].h[7];
        uVar21 = pSVar12[2].Nl;
        uVar9 = pSVar12[2].Nh;
        uVar10 = pSVar12[2].data[0];
        uVar14 = *(void*)(pSVar12[2].data + 1);
        uVar4 = *(void*)(pSVar12[2].data + 3);
        uVar5 = *(void*)(pSVar12[2].data + 5);
        uVar6 = *(void*)(pSVar12[2].data + 9);
        *(void*)(pSVar12[4].data + 7) = *(void*)(pSVar12[2].data + 7);
        *(void*)(pSVar12[4].data + 9) = uVar6;
        *(void*)(pSVar12[4].data + 3) = uVar4;
        *(void*)(pSVar12[4].data + 5) = uVar5;
        pSVar12[4].Nh = uVar9;
        pSVar12[4].data[0] = uVar10;
        *(void*)(pSVar12[4].data + 1) = uVar14;
        *puVar1 = uVar20;
        pSVar12[4].h[6] = uVar23;
        pSVar12[4].h[7] = uVar32;
        pSVar12[4].Nl = uVar21;
        if ((uint64_t)pSVar12[5].h[3] != 0) {
          pvVar24 = (void *)(0x40 - (uint64_t)pSVar12[5].h[3]);
          if (pvVar33 < pvVar24) {
            pvVar24 = pvVar33;
          }
          _SHA256_Update(pSVar34,pvVar24,sVar29);
          sVar29 = sVar29 + (int)pvVar24;
          pvVar33 = (void *)((int64_t)pvVar33 - (int64_t)pvVar24);
          uVar20 = extraout_XMM0_Da;
        }
        pvVar24 = (void *)(uint64_t)((uint)pvVar33 & 0x3f);
        if (((uint64_t)pvVar33 & 0xffffffffffffffc0) != 0) {
          _sha256_block_data_order(uVar20,(uint64_t)pvVar33 >> 6);
          iVar11 = (int)((uint64_t)pvVar33 & 0xffffffffffffffc0);
          sVar29 = sVar29 + iVar11;
          uVar32 = (int)((uint64_t)pvVar33 >> 0x1d) + pSVar12[4].data[4];
          pSVar12[4].data[4] = uVar32;
          uVar23 = iVar11 * 8;
          puVar2 = pSVar12[4].data + 3;
          uVar20 = *puVar2;
          *puVar2 = *puVar2 + uVar23;
          if (CARRY4(uVar20,uVar23)) {
            pSVar12[4].data[4] = uVar32 + 1;
          }
        }
        if (pvVar24 != (void *)0x0) {
          _SHA256_Update(pSVar34,pvVar24,sVar29);
        }
        uVar13 = (int64_t)param_1 - 0x20;
        if (0x13f < uVar13) {
          uVar20 = pSVar12[5].h[3];
          pvVar24 = (void *)((uint64_t)(0x40 - uVar20) +
                            ((int64_t)param_1 - 0x160U & 0xffffffffffffffc0));
          pvVar33 = pvVar24;
          if ((uint64_t)uVar20 != 0) {
            pvVar33 = (void *)(0x40 - (uint64_t)uVar20);
            if (pvVar24 < pvVar33) {
              pvVar33 = pvVar24;
            }
            _SHA256_Update(pSVar34,pvVar33,sVar29);
            pvVar33 = (void *)((int64_t)pvVar24 - (int64_t)pvVar33);
          }
          pvVar22 = (void *)(uint64_t)((uint)pvVar33 & 0x3f);
          if (((uint64_t)pvVar33 & 0xffffffffffffffc0) != 0) {
            _sha256_block_data_order();
            uVar32 = (int)((uint64_t)pvVar33 >> 0x1d) + pSVar12[4].data[4];
            pSVar12[4].data[4] = uVar32;
            uVar23 = (int)((uint64_t)pvVar33 & 0xffffffffffffffc0) * 8;
            puVar2 = pSVar12[4].data + 3;
            uVar20 = *puVar2;
            *puVar2 = *puVar2 + uVar23;
            if (CARRY4(uVar20,uVar23)) {
              pSVar12[4].data[4] = uVar32 + 1;
            }
          }
          if (pvVar22 != (void *)0x0) {
            _SHA256_Update(pSVar34,pvVar22,sVar29);
          }
          puVar27 = (uint *)((int64_t)puVar27 + (int64_t)pvVar24);
          uVar13 = uVar13 - (int64_t)pvVar24;
          lVar17 = lVar17 - (int64_t)pvVar24;
        }
        puVar2 = pSVar12[4].data + 5;
        iVar11 = (int)lVar17;
        uVar20 = iVar11 * 8 + pSVar12[4].data[3];
        uVar23 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                 uVar20 * 0x1000000;
        uVar36 = 0;
        local_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        local_80 = 0;
        uStack_7c = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uVar20 = pSVar12[5].h[3];
        if (uVar13 != 0) {
          uVar30 = 0;
          lVar31 = lVar17;
          do {
            bVar3 = (byte)(uVar30 - lVar17 >> 0x38);
            uVar18 = (uint64_t)uVar20;
            uVar20 = uVar20 + 1;
            *(byte *)((int64_t)puVar2 + uVar18) =
                 ~(byte)((uint64_t)lVar31 >> 0x38) & ~bVar3 & 0x80 |
                 *(byte *)((int64_t)puVar27 + uVar30) & bVar3;
            if (uVar20 == 0x40) {
              uVar20 = (uint)((uint64_t)(lVar31 + 7) >> 0x20);
              pSVar12[5].h[2] = pSVar12[5].h[2] | uVar23 & (int)uVar20 >> 0x1f;
              uVar36 = _sha256_block_data_order(uVar18,1);
              uVar20 = (int)((uint)((-0x48 - lVar17) + uVar30 >> 0x20) & uVar20) >> 0x1f;
              local_80 = local_80 | pSVar12[4].h[5] & uVar20;
              uStack_7c = uStack_7c | pSVar12[4].h[6] & uVar20;
              uStack_78 = uStack_78 | pSVar12[4].h[7] & uVar20;
              uStack_74 = uStack_74 | pSVar12[4].Nl & uVar20;
              local_70 = local_70 | pSVar12[4].Nh & uVar20;
              uStack_6c = uStack_6c | pSVar12[4].data[0] & uVar20;
              uStack_68 = uStack_68 | pSVar12[4].data[1] & uVar20;
              uStack_64 = uStack_64 | uVar20 & pSVar12[4].data[2];
              uVar20 = 0;
            }
            uVar30 = uVar30 + 1;
            lVar31 = lVar31 + -1;
          } while (uVar13 != uVar30);
        }
        uVar30 = uVar13;
        if (uVar20 < 0x40) {
          uVar36 = ___bzero();
          uVar30 = (uVar13 - uVar20) + 0x40;
          if (0x38 < uVar20) goto LAB_01027c08;
          lVar17 = -0x49 - lVar17;
        }
        else {
LAB_01027c08:
          uVar20 = (uint)((lVar17 - uVar30) + 8 >> 0x20);
          pSVar12[5].h[2] = pSVar12[5].h[2] | uVar23 & (int)uVar20 >> 0x1f;
          _sha256_block_data_order(uVar36,1,puVar2);
          lVar17 = -0x49 - lVar17;
          uVar20 = (int)((uint)(lVar17 + uVar30 >> 0x20) & uVar20) >> 0x1f;
          local_80 = local_80 | pSVar12[4].h[5] & uVar20;
          uStack_7c = uStack_7c | pSVar12[4].h[6] & uVar20;
          uStack_78 = uStack_78 | pSVar12[4].h[7] & uVar20;
          uStack_74 = uStack_74 | pSVar12[4].Nl & uVar20;
          local_70 = local_70 | pSVar12[4].Nh & uVar20;
          uStack_6c = uStack_6c | pSVar12[4].data[0] & uVar20;
          uStack_68 = uStack_68 | pSVar12[4].data[1] & uVar20;
          uStack_64 = uStack_64 | uVar20 & pSVar12[4].data[2];
          uVar36 = 0;
          *(void*)&pSVar12[4].md_len = 0;
          pSVar12[5].h[1] = 0;
          pSVar12[5].h[2] = 0;
          pSVar12[4].data[0xd] = 0;
          pSVar12[4].data[0xe] = 0;
          *(void*)(pSVar12[4].data + 0xf) = 0;
          pSVar12[4].data[9] = 0;
          pSVar12[4].data[10] = 0;
          pSVar12[4].data[0xb] = 0;
          pSVar12[4].data[0xc] = 0;
          puVar2[0] = 0;
          puVar2[1] = 0;
          pSVar12[4].data[7] = 0;
          pSVar12[4].data[8] = 0;
          uVar30 = uVar30 + 0x40;
        }
        pSVar12[5].h[2] = uVar23;
        _sha256_block_data_order(uVar36,1);
        uVar20 = (uint)((int64_t)(lVar17 + uVar30) >> 0x3f);
        local_80 = pSVar12[4].h[5] & uVar20 | local_80;
        uStack_7c = pSVar12[4].h[6] & uVar20 | uStack_7c;
        uStack_78 = pSVar12[4].h[7] & uVar20 | uStack_78;
        uStack_74 = pSVar12[4].Nl & uVar20 | uStack_74;
        local_70 = pSVar12[4].Nh & uVar20 | local_70;
        uStack_6c = pSVar12[4].data[0] & uVar20 | uStack_6c;
        uStack_68 = pSVar12[4].data[1] & uVar20 | uStack_68;
        uStack_64 = uVar20 & pSVar12[4].data[2] | uStack_64;
        sVar29 = local_80 >> 0x18 | (local_80 & 0xff0000) >> 8 | (local_80 & 0xff00) << 8 |
                 local_80 << 0x18;
        uVar20 = uStack_7c >> 0x18 | (uStack_7c & 0xff0000) >> 8 | (uStack_7c & 0xff00) << 8 |
                 uStack_7c << 0x18;
        pSVar34 = (SHA256_CTX *)(uint64_t)uVar20;
        _local_80 = CONCAT44(uVar20,sVar29);
        _uStack_78 = CONCAT44(uStack_74 >> 0x18 | (uStack_74 & 0xff0000) >> 8 |
                              (uStack_74 & 0xff00) << 8 | uStack_74 << 0x18,
                              uStack_78 >> 0x18 | (uStack_78 & 0xff0000) >> 8 |
                              (uStack_78 & 0xff00) << 8 | uStack_78 << 0x18);
        _local_70 = CONCAT44(uStack_6c >> 0x18 | (uStack_6c & 0xff0000) >> 8 |
                             (uStack_6c & 0xff00) << 8 | uStack_6c << 0x18,
                             local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 |
                             (local_70 & 0xff00) << 8 | local_70 << 0x18);
        _uStack_68 = CONCAT44(uStack_64 >> 0x18 | (uStack_64 & 0xff0000) >> 8 |
                              (uStack_64 & 0xff00) << 8 | uStack_64 << 0x18,
                              uStack_68 >> 0x18 | (uStack_68 & 0xff0000) >> 8 |
                              (uStack_68 & 0xff00) << 8 | uStack_68 << 0x18);
        uVar14 = *(void*)(pSVar12[4].h + 3);
        *(void*)(pSVar12[5].h + 1) = *(void*)(pSVar12[4].h + 1);
        *(void*)(pSVar12[5].h + 3) = uVar14;
        uVar14 = *(void*)&pSVar12[3].md_len;
        *(void*)(pSVar12[4].data + 0xf) = *(void*)(pSVar12[3].data + 0xf);
        *(void*)&pSVar12[4].md_len = uVar14;
        uVar14 = *(void*)(pSVar12[3].data + 0xd);
        *(void*)(pSVar12[4].data + 0xb) = *(void*)(pSVar12[3].data + 0xb);
        *(void*)(pSVar12[4].data + 0xd) = uVar14;
        uVar14 = *(void*)(pSVar12[3].h + 5);
        uVar4 = *(void*)(pSVar12[3].h + 7);
        uVar20 = pSVar12[3].Nh;
        uVar23 = pSVar12[3].data[0];
        uVar5 = *(void*)(pSVar12[3].data + 1);
        uVar6 = *(void*)(pSVar12[3].data + 3);
        uVar7 = *(void*)(pSVar12[3].data + 5);
        uVar8 = *(void*)(pSVar12[3].data + 9);
        *(void*)(pSVar12[4].data + 7) = *(void*)(pSVar12[3].data + 7);
        *(void*)(pSVar12[4].data + 9) = uVar8;
        *(void*)(pSVar12[4].data + 3) = uVar6;
        *(void*)(pSVar12[4].data + 5) = uVar7;
        pSVar12[4].Nh = uVar20;
        pSVar12[4].data[0] = uVar23;
        *(void*)(pSVar12[4].data + 1) = uVar5;
        *(void*)puVar1 = uVar14;
        *(void*)(pSVar12[4].h + 7) = uVar4;
        if ((uint64_t)pSVar12[5].h[3] == 0) {
          pSVar19 = (SHA256_CTX *)&segment_command_00000020;
LAB_01028317:
          pSVar35 = pSVar19;
          _SHA256_Update(pSVar34,pSVar35,sVar29);
        }
        else {
          psVar26 = (segment_command *)(0x40 - (uint64_t)pSVar12[5].h[3]);
          if ((SHA256_CTX *)((int64_t)&MACH_HEADER.reserved + 3) < psVar26) {
            psVar26 = &segment_command_00000020;
          }
          pSVar35 = (SHA256_CTX *)psVar26;
          _SHA256_Update(pSVar34,psVar26,sVar29);
          pSVar19 = (SHA256_CTX *)(0x20 - (int64_t)psVar26);
          if (((uint64_t)pSVar19 & 0xffffffffffffffc0) != 0) {
            pSVar35 = (SHA256_CTX *)((uint64_t)pSVar19 >> 6);
            _sha256_block_data_order();
            uVar23 = (int)((uint64_t)pSVar19 >> 0x1d) + pSVar12[4].data[4];
            pSVar12[4].data[4] = uVar23;
            uVar32 = (int)((uint64_t)pSVar19 & 0xffffffffffffffc0) * 8;
            puVar1 = pSVar12[4].data + 3;
            uVar20 = *puVar1;
            *puVar1 = *puVar1 + uVar32;
            if (CARRY4(uVar20,uVar32)) {
              pSVar12[4].data[4] = uVar23 + 1;
            }
          }
          if (pSVar19 != (SHA256_CTX *)0x0) goto LAB_01028317;
        }
        _SHA256_Final((uchar *)pSVar34,pSVar35);
        lVar17 = -(uint64_t)uVar28;
        uVar23 = (((int)uVar13 - uVar28) - iVar11) - 0x21;
        uVar32 = (uVar28 + iVar11) - (int)uVar13;
        lVar31 = 0;
        uVar20 = 0;
        do {
          bVar3 = *(byte *)((int64_t)puVar27 + lVar17 + (uVar13 - 1));
          uVar21 = (int)(uVar32 & uVar23) >> 0x1f;
          uVar20 = (*(byte *)((int64_t)&local_80 + lVar31) ^ bVar3) & uVar21 |
                   ~((int)uVar23 >> 0x1f) & (bVar3 ^ uVar16) | uVar20;
          lVar31 = lVar31 + (uint64_t)(uVar21 & 1);
          lVar17 = lVar17 + 1;
          uVar23 = uVar23 + 1;
          uVar32 = uVar32 - 1;
        } while (lVar17 != 0x20);
        if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
          return (uint64_t)(uVar15 & 1 & ~((int)-uVar20 >> 0x1f));
        }
        goto LAB_010283f8;
      }
      if ((uint64_t)pSVar12[5].h[3] != 0) {
        pvVar33 = (void *)(0x40 - (uint64_t)pSVar12[5].h[3]);
        if (param_1 < pvVar33) {
          pvVar33 = param_1;
        }
        _SHA256_Update(pSVar34,pvVar33,sVar29);
        param_1 = (void *)((int64_t)param_1 - (int64_t)pvVar33);
      }
      pvVar33 = (void *)(uint64_t)((uint)param_1 & 0x3f);
      if (((uint64_t)param_1 & 0xffffffffffffffc0) != 0) {
        _sha256_block_data_order();
        uVar23 = (int)((uint64_t)param_1 >> 0x1d) + pSVar12[4].data[4];
        pSVar12[4].data[4] = uVar23;
        uVar32 = (int)((uint64_t)param_1 & 0xffffffffffffffc0) * 8;
        puVar1 = pSVar12[4].data + 3;
        uVar20 = *puVar1;
        *puVar1 = *puVar1 + uVar32;
        if (CARRY4(uVar20,uVar32)) {
          pSVar12[4].data[4] = uVar23 + 1;
        }
      }
      if (pvVar33 != (void *)0x0) {
        _SHA256_Update(pSVar34,pvVar33,sVar29);
      }
    }
    else {
      uVar13 = 0;
      pvVar22 = param_1;
      if (pvVar33 != (void *)0xffffffffffffffff) {
        if ((void *)((int64_t)pvVar33 + 0x30U & 0xfffffffffffffff0) != param_1) goto LAB_01028058;
        uVar13 = (uint64_t)(0x301 < pSVar12[5].Nl) << 4;
        pvVar22 = pvVar33;
      }
      if (((g_0280304c._7_1_ & 0x20) == 0) &&
         ((((uint)g_0280304c & 0x10000000) == 0 ||
          (uVar20 = g_02803048 & 0x40000000 | (uint)g_0280304c & 0x800,
          pSVar34 = (SHA256_CTX *)(uint64_t)uVar20, uVar20 == 0)))) {
        local_c0 = 0;
        lVar17 = 0;
      }
      else {
        pSVar34 = (SHA256_CTX *)0x0;
        local_c0 = 0;
        uVar30 = (int64_t)pvVar22 - (int64_t)(uVar13 + (int64_t)pvVar24);
        if (pvVar22 < (void *)(uVar13 + (int64_t)pvVar24) || uVar30 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = 0;
          if (0x3f < uVar30) {
            pSVar19 = (SHA256_CTX *)((int64_t)param_2->h + uVar13);
            pvVar33 = pvVar24;
            if ((uint64_t)pSVar12[5].h[3] != 0) {
              pvVar33 = (void *)(0x40 - (uint64_t)pSVar12[5].h[3]);
              if (pvVar24 < pvVar33) {
                pvVar33 = pvVar24;
              }
              _SHA256_Update(pSVar19,pvVar33,param_3);
              pvVar33 = (void *)((int64_t)pvVar24 - (int64_t)pvVar33);
            }
            data = (void *)(uint64_t)((uint)pvVar33 & 0x3f);
            if (((uint64_t)pvVar33 & 0xffffffffffffffc0) != 0) {
              _sha256_block_data_order();
              uVar23 = (int)((uint64_t)pvVar33 >> 0x1d) + pSVar12[4].data[4];
              pSVar12[4].data[4] = uVar23;
              uVar32 = (int)((uint64_t)pvVar33 & 0xffffffffffffffc0) * 8;
              puVar27 = pSVar12[4].data + 3;
              uVar20 = *puVar27;
              *puVar27 = *puVar27 + uVar32;
              if (CARRY4(uVar20,uVar32)) {
                pSVar12[4].data[4] = uVar23 + 1;
              }
            }
            pSVar34 = (SHA256_CTX *)(uVar30 >> 6);
            if (data != (void *)0x0) {
              _SHA256_Update(pSVar19,data,param_3);
            }
            uVar14 = _EVP_CIPHER_CTX_iv_noconst();
            _aesni_cbc_sha256_enc(pSVar12,pSVar34,uVar14,puVar1);
            param_3 = (size_t)uVar14;
            local_c0 = uVar30 & 0xffffffffffffffc0;
            lVar17 = (int64_t)pvVar24 + local_c0;
            uVar32 = (int)(uVar30 >> 0x1d) + pSVar12[4].data[4];
            pSVar12[4].data[4] = uVar32;
            uVar23 = (int)local_c0 * 8;
            puVar27 = pSVar12[4].data + 3;
            uVar20 = *puVar27;
            *puVar27 = *puVar27 + uVar23;
            if (CARRY4(uVar20,uVar23)) {
              pSVar12[4].data[4] = uVar32 + 1;
            }
          }
        }
      }
      pSVar19 = (SHA256_CTX *)(lVar17 + uVar13);
      pSVar35 = (SHA256_CTX *)((int64_t)pvVar22 - (int64_t)pSVar19);
      if ((uint64_t)pSVar12[5].h[3] != 0) {
        pSVar25 = (SHA256_CTX *)(0x40 - (uint64_t)pSVar12[5].h[3]);
        if (pSVar35 < pSVar25) {
          pSVar25 = pSVar35;
        }
        pSVar34 = pSVar25;
        _SHA256_Update(pSVar19,pSVar25,param_3);
        pSVar35 = (SHA256_CTX *)((int64_t)pSVar35 - (int64_t)pSVar25);
      }
      pSVar25 = (SHA256_CTX *)(uint64_t)((uint)pSVar35 & 0x3f);
      if (((uint64_t)pSVar35 & 0xffffffffffffffc0) != 0) {
        pSVar34 = (SHA256_CTX *)((uint64_t)pSVar35 >> 6);
        _sha256_block_data_order();
        uVar32 = (int)((uint64_t)pSVar35 >> 0x1d) + pSVar12[4].data[4];
        pSVar12[4].data[4] = uVar32;
        uVar23 = (int)((uint64_t)pSVar35 & 0xffffffffffffffc0) * 8;
        puVar27 = pSVar12[4].data + 3;
        uVar20 = *puVar27;
        *puVar27 = *puVar27 + uVar23;
        if (CARRY4(uVar20,uVar23)) {
          pSVar12[4].data[4] = uVar32 + 1;
        }
      }
      if (pSVar25 != (SHA256_CTX *)0x0) {
        _SHA256_Update(pSVar19,pSVar25,param_3);
        pSVar34 = pSVar25;
      }
      if (pvVar22 == param_1) {
        uVar14 = _EVP_CIPHER_CTX_iv_noconst();
      }
      else {
        if (param_2 != arg1) {
          pSVar34 = (SHA256_CTX *)((int64_t)pvVar22 - local_c0);
          _memcpy(pSVar19,pSVar34,param_3);
        }
        _SHA256_Final((uchar *)pSVar19,pSVar34);
        uVar14 = *(void*)(pSVar12[4].h + 3);
        *(void*)(pSVar12[5].h + 1) = *(void*)(pSVar12[4].h + 1);
        *(void*)(pSVar12[5].h + 3) = uVar14;
        uVar14 = *(void*)&pSVar12[3].md_len;
        *(void*)(pSVar12[4].data + 0xf) = *(void*)(pSVar12[3].data + 0xf);
        *(void*)&pSVar12[4].md_len = uVar14;
        uVar14 = *(void*)(pSVar12[3].data + 0xd);
        *(void*)(pSVar12[4].data + 0xb) = *(void*)(pSVar12[3].data + 0xb);
        *(void*)(pSVar12[4].data + 0xd) = uVar14;
        uVar14 = *(void*)(pSVar12[3].h + 5);
        uVar4 = *(void*)(pSVar12[3].h + 7);
        uVar20 = pSVar12[3].Nh;
        uVar23 = pSVar12[3].data[0];
        uVar5 = *(void*)(pSVar12[3].data + 1);
        uVar6 = *(void*)(pSVar12[3].data + 3);
        uVar7 = *(void*)(pSVar12[3].data + 5);
        uVar8 = *(void*)(pSVar12[3].data + 9);
        *(void*)(pSVar12[4].data + 7) = *(void*)(pSVar12[3].data + 7);
        *(void*)(pSVar12[4].data + 9) = uVar8;
        *(void*)(pSVar12[4].data + 3) = uVar6;
        *(void*)(pSVar12[4].data + 5) = uVar7;
        pSVar12[4].Nh = uVar20;
        pSVar12[4].data[0] = uVar23;
        *(void*)(pSVar12[4].data + 1) = uVar5;
        *(void*)puVar1 = uVar14;
        *(void*)(pSVar12[4].h + 7) = uVar4;
        if ((uint64_t)pSVar12[5].h[3] == 0) {
          pSVar34 = (SHA256_CTX *)&segment_command_00000020;
LAB_01027fcd:
          pSVar35 = pSVar34;
          _SHA256_Update(pSVar19,pSVar35,param_3);
        }
        else {
          psVar26 = (segment_command *)(0x40 - (uint64_t)pSVar12[5].h[3]);
          if ((SHA256_CTX *)((int64_t)&MACH_HEADER.reserved + 3) < psVar26) {
            psVar26 = &segment_command_00000020;
          }
          pSVar35 = (SHA256_CTX *)psVar26;
          _SHA256_Update(pSVar19,psVar26,param_3);
          pSVar34 = (SHA256_CTX *)(0x20 - (int64_t)psVar26);
          if (((uint64_t)pSVar34 & 0xffffffffffffffc0) != 0) {
            pSVar35 = (SHA256_CTX *)((uint64_t)pSVar34 >> 6);
            _sha256_block_data_order();
            uVar23 = (int)((uint64_t)pSVar34 >> 0x1d) + pSVar12[4].data[4];
            pSVar12[4].data[4] = uVar23;
            uVar32 = (int)((uint64_t)pSVar34 & 0xffffffffffffffc0) * 8;
            puVar1 = pSVar12[4].data + 3;
            uVar20 = *puVar1;
            *puVar1 = *puVar1 + uVar32;
            if (CARRY4(uVar20,uVar32)) {
              pSVar12[4].data[4] = uVar23 + 1;
            }
          }
          if (pSVar34 != (SHA256_CTX *)0x0) goto LAB_01027fcd;
        }
        _SHA256_Final((uchar *)pSVar19,pSVar35);
        if ((void *)((int64_t)pvVar22 + 0x20U) < param_1) {
          _memset(pSVar19,((int)param_1 - (int)pvVar22) + -0x20,param_3);
        }
        uVar14 = _EVP_CIPHER_CTX_iv_noconst();
      }
      _aesni_cbc_encrypt(pSVar12,(int64_t)param_1 - local_c0,uVar14,1);
    }
    uVar13 = 1;
  }
LAB_01028058:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar13;
  }
LAB_010283f8:
                      ___stack_chk_fail();
}

