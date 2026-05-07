// Function: FUN_010252c0
// Address: 010252c0
// Size: 3687 bytes
// Class: Unknown


ulonglong FUN_010252c0(SHA_CTX *param_1,SHA_CTX *param_2,size_t param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  SHA_CTX *pSVar13;
  uint *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  SHA_CTX *pSVar17;
  uint uVar18;
  void *pvVar19;
  SHA_CTX *c;
  uint uVar20;
  uint uVar21;
  void *pvVar22;
  SHA_CTX *pSVar23;
  SHA_CTX *pSVar24;
  uint uVar25;
  SHA_CTX *unaff_RSI;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  size_t sVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  void *pvVar33;
  undefined1 *puVar34;
  uint *puVar35;
  uint uVar36;
  undefined1 *puVar37;
  undefined4 uVar38;
  ulonglong local_a0;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  pSVar13 = (SHA_CTX *)_EVP_CIPHER_CTX_get_cipher_data();
  pvVar33 = (void *)(ulonglong)(0x40 - pSVar13[5].data[5]);
  pSVar17 = *(SHA_CTX **)(pSVar13[5].data + 7);
  pSVar13[5].data[7] = 0xffffffff;
  pSVar13[5].data[8] = 0xffffffff;
  uVar26 = 0;
  if (((ulonglong)param_1 & 0xf) != 0) goto LAB_01025a72;
  puVar1 = pSVar13[4].data + 6;
  iVar12 = _EVP_CIPHER_CTX_encrypting();
  if (iVar12 == 0) {
    if (pSVar17 == (SHA_CTX *)0xffffffffffffffff) {
      uVar16 = _EVP_CIPHER_CTX_iv_noconst();
      pSVar17 = pSVar13;
      _aesni_cbc_encrypt(pSVar13,param_1,uVar16,0);
      sVar29 = (size_t)uVar16;
      if ((ulonglong)pSVar13[5].data[5] != 0) {
        pSVar23 = (SHA_CTX *)(0x40 - (ulonglong)pSVar13[5].data[5]);
        if (param_1 < pSVar23) {
          pSVar23 = param_1;
        }
        _SHA1_Update(pSVar17,pSVar23,sVar29);
        param_1 = (SHA_CTX *)((longlong)param_1 - (longlong)pSVar23);
      }
      pvVar33 = (void *)(ulonglong)((uint)param_1 & 0x3f);
      if (((ulonglong)param_1 & 0xffffffffffffffc0) != 0) {
        _sha1_block_data_order();
        uVar36 = (int)((ulonglong)param_1 >> 0x1d) + pSVar13[4].data[0xc];
        pSVar13[4].data[0xc] = uVar36;
        uVar20 = (int)((ulonglong)param_1 & 0xffffffffffffffc0) * 8;
        puVar1 = pSVar13[4].data + 0xb;
        uVar30 = *puVar1;
        *puVar1 = *puVar1 + uVar20;
        if (CARRY4(uVar30,uVar20)) {
          pSVar13[4].data[0xc] = uVar36 + 1;
        }
      }
      if (pvVar33 != (void *)0x0) {
        _SHA1_Update(pSVar17,pvVar33,sVar29);
      }
      goto LAB_01025a6d;
    }
    uVar30 = (uint)*(ushort *)((longlong)(pSVar17[5].data + 8) + (longlong)pSVar13) << 0x10;
    if ((uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8) < 0x302) {
      uVar26 = 0;
      if (&MACH_HEADER.sizeofcmds < param_1) goto LAB_01025693;
    }
    else {
      uVar26 = 0;
      if (&segment_command_00000020.cmdsize < param_1) {
        puVar14 = (uint *)_EVP_CIPHER_CTX_iv_noconst();
        uVar30 = param_2->h1;
        uVar20 = param_2->h2;
        uVar36 = param_2->h3;
        *puVar14 = param_2->h0;
        puVar14[1] = uVar30;
        puVar14[2] = uVar20;
        puVar14[3] = uVar36;
        unaff_RSI = (SHA_CTX *)&unaff_RSI->h4;
        param_1 = (SHA_CTX *)(param_1[-1].data + 0xd);
LAB_01025693:
        uVar16 = _EVP_CIPHER_CTX_iv_noconst();
        _aesni_cbc_encrypt(pSVar13,param_1,uVar16,0);
        sVar29 = (size_t)uVar16;
        uVar27 = 0x114U - (int)param_1 >> 0x18 | (int)param_1 + 0xebU & 0xff;
        uVar20 = (uint)(byte)((undefined1 *)((longlong)&param_1[-1].num + 3))[(longlong)unaff_RSI];
        uVar30 = -(uint)(uVar27 < uVar20);
        uVar18 = ~uVar30;
        uVar25 = uVar30 & uVar27 | uVar18 & uVar20;
        puVar32 = (undefined1 *)((longlong)param_1 + (-0x15 - (ulonglong)uVar25));
        *(ushort *)((undefined1 *)((longlong)pSVar13[5].data + 0x22) + (longlong)pSVar17) =
             (ushort)puVar32 << 8 | (ushort)puVar32 >> 8;
        uVar16 = *(undefined8 *)(pSVar13[3].data + 4);
        *(undefined8 *)(pSVar13[5].data + 2) = *(undefined8 *)(pSVar13[3].data + 2);
        *(undefined8 *)(pSVar13[5].data + 4) = uVar16;
        uVar30 = pSVar13[3].Nh;
        uVar16 = *(undefined8 *)pSVar13[3].data;
        pSVar13[5].Nl = pSVar13[3].Nl;
        pSVar13[5].Nh = uVar30;
        *(undefined8 *)pSVar13[5].data = uVar16;
        uVar30 = pSVar13[2].data[6];
        uVar20 = pSVar13[2].data[7];
        uVar36 = pSVar13[2].data[8];
        uVar21 = pSVar13[2].data[9];
        uVar16 = *(undefined8 *)(pSVar13[2].data + 10);
        uVar4 = *(undefined8 *)(pSVar13[2].data + 0xc);
        uVar5 = *(undefined8 *)(pSVar13[2].data + 0xe);
        uVar6 = *(undefined8 *)&pSVar13[2].num;
        uVar9 = pSVar13[3].h2;
        uVar10 = pSVar13[3].h3;
        uVar11 = pSVar13[3].h4;
        pSVar13[5].h1 = pSVar13[3].h1;
        pSVar13[5].h2 = uVar9;
        pSVar13[5].h3 = uVar10;
        pSVar13[5].h4 = uVar11;
        *(undefined8 *)(pSVar13[4].data + 0xe) = uVar5;
        *(undefined8 *)&pSVar13[4].num = uVar6;
        *(undefined8 *)(pSVar13[4].data + 10) = uVar16;
        *(undefined8 *)(pSVar13[4].data + 0xc) = uVar4;
        *puVar1 = uVar30;
        pSVar13[4].data[7] = uVar20;
        pSVar13[4].data[8] = uVar36;
        pSVar13[4].data[9] = uVar21;
        if ((ulonglong)pSVar13[5].data[5] != 0) {
          pSVar23 = (SHA_CTX *)(0x40 - (ulonglong)pSVar13[5].data[5]);
          if (pSVar17 < pSVar23) {
            pSVar23 = pSVar17;
          }
          _SHA1_Update(pSVar17,pSVar23,sVar29);
          pSVar17 = (SHA_CTX *)((longlong)pSVar17 - (longlong)pSVar23);
        }
        pvVar33 = (void *)(ulonglong)((uint)pSVar17 & 0x3f);
        pSVar23 = pSVar17;
        if (((ulonglong)pSVar17 & 0xffffffffffffffc0) != 0) {
          _sha1_block_data_order(pSVar17,(ulonglong)pSVar17 >> 6);
          uVar20 = (int)((ulonglong)pSVar17 >> 0x1d) + pSVar13[4].data[0xc];
          pSVar13[4].data[0xc] = uVar20;
          uVar36 = (int)((ulonglong)pSVar17 & 0xffffffffffffffc0) * 8;
          puVar14 = pSVar13[4].data + 0xb;
          uVar30 = *puVar14;
          *puVar14 = *puVar14 + uVar36;
          if (CARRY4(uVar30,uVar36)) {
            pSVar13[4].data[0xc] = uVar20 + 1;
          }
        }
        if (pvVar33 != (void *)0x0) {
          _SHA1_Update(pSVar23,pvVar33,sVar29);
        }
        puVar14 = param_1[-1].data + 0xc;
        if (&section_00000108.reloff <= puVar14) {
          uVar30 = pSVar13[5].data[5];
          pvVar22 = (void *)((ulonglong)(0x40 - uVar30) +
                            ((ulonglong)(param_1[-4].data + 4) & 0xffffffffffffffc0));
          pvVar33 = pvVar22;
          if ((ulonglong)uVar30 != 0) {
            pvVar33 = (void *)(0x40 - (ulonglong)uVar30);
            if (pvVar22 < pvVar33) {
              pvVar33 = pvVar22;
            }
            _SHA1_Update(pSVar23,pvVar33,sVar29);
            pvVar33 = (void *)((longlong)pvVar22 - (longlong)pvVar33);
          }
          pvVar19 = (void *)(ulonglong)((uint)pvVar33 & 0x3f);
          if (((ulonglong)pvVar33 & 0xffffffffffffffc0) != 0) {
            _sha1_block_data_order();
            uVar36 = (int)((ulonglong)pvVar33 >> 0x1d) + pSVar13[4].data[0xc];
            pSVar13[4].data[0xc] = uVar36;
            uVar20 = (int)((ulonglong)pvVar33 & 0xffffffffffffffc0) * 8;
            puVar2 = pSVar13[4].data + 0xb;
            uVar30 = *puVar2;
            *puVar2 = *puVar2 + uVar20;
            if (CARRY4(uVar30,uVar20)) {
              pSVar13[4].data[0xc] = uVar36 + 1;
            }
          }
          if (pvVar19 != (void *)0x0) {
            _SHA1_Update(pSVar23,pvVar19,sVar29);
          }
          unaff_RSI = (SHA_CTX *)((longlong)pvVar22 + (longlong)(unaff_RSI->data + -7));
          puVar14 = (uint *)((longlong)puVar14 - (longlong)pvVar22);
          puVar32 = puVar32 + -(longlong)pvVar22;
        }
        puVar2 = pSVar13[4].data + 0xd;
        iVar12 = (int)puVar32;
        uVar30 = iVar12 * 8 + pSVar13[4].data[0xb];
        uVar20 = uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 |
                 uVar30 * 0x1000000;
        uVar38 = 0;
        local_60._0_4_ = 0;
        local_60._4_4_ = 0;
        uStack_58._0_4_ = 0;
        uStack_58._4_4_ = 0;
        local_50 = 0;
        uVar30 = pSVar13[5].data[5];
        if (puVar14 != (uint *)0x0) {
          lVar15 = -0x48 - (longlong)puVar32;
          puVar34 = (undefined1 *)0x0;
          puVar37 = puVar32;
          do {
            bVar3 = (byte)((ulonglong)((longlong)puVar34 - (longlong)puVar32) >> 0x38);
            uVar26 = (ulonglong)uVar30;
            uVar30 = uVar30 + 1;
            *(byte *)((longlong)puVar2 + uVar26) =
                 ~(byte)((ulonglong)puVar37 >> 0x38) & ~bVar3 & 0x80 |
                 puVar34[(longlong)(unaff_RSI->data + -7)] & bVar3;
            if (uVar30 == 0x40) {
              uVar30 = (uint)((ulonglong)(puVar37 + 7) >> 0x20);
              pSVar13[5].data[4] = pSVar13[5].data[4] | uVar20 & (int)uVar30 >> 0x1f;
              uVar38 = _sha1_block_data_order(uVar26,1);
              uVar30 = (int)((uint)((ulonglong)(puVar34 + lVar15) >> 0x20) & uVar30) >> 0x1f;
              local_60._0_4_ = (uint)local_60 | pSVar13[4].data[6] & uVar30;
              local_60._4_4_ = local_60._4_4_ | pSVar13[4].data[7] & uVar30;
              uStack_58._0_4_ = (uint)uStack_58 | pSVar13[4].data[8] & uVar30;
              uStack_58._4_4_ = uStack_58._4_4_ | pSVar13[4].data[9] & uVar30;
              local_50 = local_50 | uVar30 & pSVar13[4].data[10];
              uVar30 = 0;
            }
            puVar34 = puVar34 + 1;
            puVar37 = puVar37 + -1;
          } while (puVar14 != (uint *)puVar34);
        }
        puVar35 = puVar14;
        if (uVar30 < 0x40) {
          uVar36 = uVar20;
          uVar38 = ___bzero();
          puVar35 = (uint *)((longlong)puVar14 + (0x40 - (ulonglong)uVar30));
          if (0x38 < uVar30) goto LAB_01025dfc;
          lVar15 = -0x49 - (longlong)puVar32;
        }
        else {
LAB_01025dfc:
          uVar30 = (uint)((ulonglong)(puVar32 + (8 - (longlong)puVar35)) >> 0x20);
          pSVar13[5].data[4] = pSVar13[5].data[4] | uVar20 & (int)uVar30 >> 0x1f;
          uVar36 = uVar20;
          _sha1_block_data_order(uVar38,1);
          lVar15 = -0x49 - (longlong)puVar32;
          uVar30 = (int)((uint)((ulonglong)(lVar15 + (longlong)puVar35) >> 0x20) & uVar30) >> 0x1f;
          local_60._0_4_ = (uint)local_60 | pSVar13[4].data[6] & uVar30;
          local_60._4_4_ = local_60._4_4_ | pSVar13[4].data[7] & uVar30;
          uStack_58._0_4_ = (uint)uStack_58 | pSVar13[4].data[8] & uVar30;
          uStack_58._4_4_ = uStack_58._4_4_ | pSVar13[4].data[9] & uVar30;
          local_50 = local_50 | uVar30 & pSVar13[4].data[10];
          uVar38 = 0;
          pSVar13[5].data[1] = 0;
          pSVar13[5].data[2] = 0;
          pSVar13[5].data[3] = 0;
          pSVar13[5].data[4] = 0;
          pSVar13[5].h4 = 0;
          pSVar13[5].Nl = 0;
          pSVar13[5].Nh = 0;
          pSVar13[5].data[0] = 0;
          pSVar13[5].h0 = 0;
          pSVar13[5].h1 = 0;
          pSVar13[5].h2 = 0;
          pSVar13[5].h3 = 0;
          puVar2[0] = 0;
          puVar2[1] = 0;
          *(undefined8 *)(pSVar13[4].data + 0xf) = 0;
          puVar35 = puVar35 + 0x10;
        }
        pSVar13[5].data[4] = uVar20;
        _sha1_block_data_order(uVar38,1);
        uVar30 = (uint)((longlong)(lVar15 + (longlong)puVar35) >> 0x3f);
        local_60._0_4_ = pSVar13[4].data[6] & uVar30 | (uint)local_60;
        local_60._4_4_ = pSVar13[4].data[7] & uVar30 | local_60._4_4_;
        uStack_58._0_4_ = pSVar13[4].data[8] & uVar30 | (uint)uStack_58;
        uStack_58._4_4_ = pSVar13[4].data[9] & uVar30 | uStack_58._4_4_;
        local_50 = uVar30 & pSVar13[4].data[10] | local_50;
        uVar30 = local_60._4_4_ >> 0x18 | (local_60._4_4_ & 0xff0000) >> 8 |
                 (local_60._4_4_ & 0xff00) << 8 | local_60._4_4_ << 0x18;
        pSVar17 = (SHA_CTX *)(ulonglong)uVar30;
        local_60 = CONCAT44(uVar30,(uint)local_60 >> 0x18 | ((uint)local_60 & 0xff0000) >> 8 |
                                   ((uint)local_60 & 0xff00) << 8 | (uint)local_60 << 0x18);
        uStack_58 = CONCAT44(uStack_58._4_4_ >> 0x18 | (uStack_58._4_4_ & 0xff0000) >> 8 |
                             (uStack_58._4_4_ & 0xff00) << 8 | uStack_58._4_4_ << 0x18,
                             (uint)uStack_58 >> 0x18 | ((uint)uStack_58 & 0xff0000) >> 8 |
                             ((uint)uStack_58 & 0xff00) << 8 | (uint)uStack_58 << 0x18);
        local_50 = local_50 >> 0x18 | (local_50 & 0xff0000) >> 8 | (local_50 & 0xff00) << 8 |
                   local_50 << 0x18;
        uVar16 = *(undefined8 *)(pSVar13[4].data + 4);
        *(undefined8 *)(pSVar13[5].data + 2) = *(undefined8 *)(pSVar13[4].data + 2);
        *(undefined8 *)(pSVar13[5].data + 4) = uVar16;
        uVar30 = pSVar13[4].Nh;
        uVar16 = *(undefined8 *)pSVar13[4].data;
        pSVar13[5].Nl = pSVar13[4].Nl;
        pSVar13[5].Nh = uVar30;
        *(undefined8 *)pSVar13[5].data = uVar16;
        uVar16 = *(undefined8 *)(pSVar13[3].data + 6);
        uVar4 = *(undefined8 *)(pSVar13[3].data + 8);
        uVar5 = *(undefined8 *)(pSVar13[3].data + 10);
        uVar6 = *(undefined8 *)(pSVar13[3].data + 0xc);
        uVar7 = *(undefined8 *)(pSVar13[3].data + 0xe);
        uVar8 = *(undefined8 *)&pSVar13[3].num;
        uVar30 = pSVar13[4].h2;
        uVar20 = pSVar13[4].h3;
        uVar21 = pSVar13[4].h4;
        pSVar13[5].h1 = pSVar13[4].h1;
        pSVar13[5].h2 = uVar30;
        pSVar13[5].h3 = uVar20;
        pSVar13[5].h4 = uVar21;
        *(undefined8 *)(pSVar13[4].data + 0xe) = uVar7;
        *(undefined8 *)&pSVar13[4].num = uVar8;
        *(undefined8 *)(pSVar13[4].data + 10) = uVar5;
        *(undefined8 *)(pSVar13[4].data + 0xc) = uVar6;
        *(undefined8 *)puVar1 = uVar16;
        *(undefined8 *)(pSVar13[4].data + 8) = uVar4;
        if ((ulonglong)pSVar13[5].data[5] == 0) {
          pSVar23 = (SHA_CTX *)&MACH_HEADER.sizeofcmds;
LAB_01026054:
          pSVar24 = pSVar23;
          _SHA1_Update(pSVar17,pSVar24,uVar36);
        }
        else {
          pSVar23 = (SHA_CTX *)(0x40 - (ulonglong)pSVar13[5].data[5]);
          if ((SHA_CTX *)((longlong)&MACH_HEADER.ncmds + 3) < pSVar23) {
            pSVar23 = (SHA_CTX *)&MACH_HEADER.sizeofcmds;
          }
          pSVar24 = pSVar23;
          _SHA1_Update(pSVar17,pSVar23,uVar36);
          pSVar23 = (SHA_CTX *)(0x14 - (longlong)pSVar23);
          if (((ulonglong)pSVar23 & 0xffffffffffffffc0) != 0) {
            pSVar24 = (SHA_CTX *)((ulonglong)pSVar23 >> 6);
            _sha1_block_data_order();
            uVar20 = (int)((ulonglong)pSVar23 >> 0x1d) + pSVar13[4].data[0xc];
            pSVar13[4].data[0xc] = uVar20;
            uVar21 = (int)((ulonglong)pSVar23 & 0xffffffffffffffc0) * 8;
            puVar1 = pSVar13[4].data + 0xb;
            uVar30 = *puVar1;
            *puVar1 = *puVar1 + uVar21;
            if (CARRY4(uVar30,uVar21)) {
              pSVar13[4].data[0xc] = uVar20 + 1;
            }
          }
          if (pSVar23 != (SHA_CTX *)0x0) goto LAB_01026054;
        }
        _SHA1_Final((uchar *)pSVar17,pSVar24);
        lVar15 = -(ulonglong)uVar27;
        uVar20 = (((int)puVar14 - uVar27) - iVar12) - 0x15;
        uVar36 = (uVar27 + iVar12) - (int)puVar14;
        lVar28 = 0;
        uVar30 = 0;
        do {
          uVar21 = (int)(uVar36 & uVar20) >> 0x1f;
          uVar30 = (*(byte *)((longlong)&local_60 + lVar28) ^
                   ((undefined1 *)((longlong)puVar14 + (longlong)unaff_RSI))[lVar15 + -1]) & uVar21
                   | ~((int)uVar20 >> 0x1f) &
                     ((byte)((undefined1 *)((longlong)puVar14 + (longlong)unaff_RSI))[lVar15 + -1] ^
                     uVar25) | uVar30;
          lVar28 = lVar28 + (ulonglong)(uVar21 & 1);
          lVar15 = lVar15 + 1;
          uVar20 = uVar20 + 1;
          uVar36 = uVar36 - 1;
        } while (lVar15 != 0x14);
        if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
          return (ulonglong)(uVar18 & 1 & ~((int)-uVar30 >> 0x1f));
        }
        goto LAB_01026125;
      }
    }
  }
  else {
    uVar26 = 0;
    pSVar23 = param_1;
    if (pSVar17 != (SHA_CTX *)0xffffffffffffffff) {
      if ((SHA_CTX *)((ulonglong)(pSVar17->data + 2) & 0xfffffffffffffff0) != param_1)
      goto LAB_01025a72;
      uVar26 = (ulonglong)(0x301 < pSVar13[5].data[9]) << 4;
      pSVar23 = pSVar17;
    }
    local_a0 = 0;
    uVar31 = (longlong)pSVar23 - (longlong)(uVar26 + (longlong)pvVar33);
    if (pSVar23 < (SHA_CTX *)(uVar26 + (longlong)pvVar33) || uVar31 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (0x3f < uVar31) {
        pSVar24 = (SHA_CTX *)((longlong)param_2->data + (uVar26 - 0x1c));
        pvVar22 = pvVar33;
        pSVar17 = pSVar24;
        if ((ulonglong)pSVar13[5].data[5] != 0) {
          pvVar22 = (void *)(0x40 - (ulonglong)pSVar13[5].data[5]);
          if (pvVar33 < pvVar22) {
            pvVar22 = pvVar33;
          }
          _SHA1_Update(pSVar24,pvVar22,param_3);
          pvVar22 = (void *)((longlong)pvVar33 - (longlong)pvVar22);
        }
        pvVar19 = (void *)(ulonglong)((uint)pvVar22 & 0x3f);
        if (((ulonglong)pvVar22 & 0xffffffffffffffc0) != 0) {
          _sha1_block_data_order();
          uVar36 = (int)((ulonglong)pvVar22 >> 0x1d) + pSVar13[4].data[0xc];
          pSVar13[4].data[0xc] = uVar36;
          uVar20 = (int)((ulonglong)pvVar22 & 0xffffffffffffffc0) * 8;
          puVar14 = pSVar13[4].data + 0xb;
          uVar30 = *puVar14;
          *puVar14 = *puVar14 + uVar20;
          if (CARRY4(uVar30,uVar20)) {
            pSVar13[4].data[0xc] = uVar36 + 1;
          }
        }
        if (pvVar19 != (void *)0x0) {
          _SHA1_Update(pSVar24,pvVar19,param_3);
        }
        uVar16 = _EVP_CIPHER_CTX_iv_noconst();
        _aesni_cbc_sha1_enc(pSVar13,uVar31 >> 6,uVar16,puVar1,pSVar17);
        param_3 = (size_t)uVar16;
        local_a0 = uVar31 & 0xffffffffffffffc0;
        lVar15 = (longlong)pvVar33 + local_a0;
        uVar36 = (int)(uVar31 >> 0x1d) + pSVar13[4].data[0xc];
        pSVar13[4].data[0xc] = uVar36;
        uVar20 = (int)local_a0 * 8;
        puVar14 = pSVar13[4].data + 0xb;
        uVar30 = *puVar14;
        *puVar14 = *puVar14 + uVar20;
        if (CARRY4(uVar30,uVar20)) {
          pSVar13[4].data[0xc] = uVar36 + 1;
        }
      }
    }
    pvVar33 = (void *)((longlong)pSVar23 - (lVar15 + uVar26));
    pSVar17 = param_2;
    if ((ulonglong)pSVar13[5].data[5] != 0) {
      pvVar22 = (void *)(0x40 - (ulonglong)pSVar13[5].data[5]);
      if (pvVar33 < pvVar22) {
        pvVar22 = pvVar33;
      }
      _SHA1_Update(param_2,pvVar22,param_3);
      pvVar33 = (void *)((longlong)pvVar33 - (longlong)pvVar22);
    }
    pvVar22 = (void *)(ulonglong)((uint)pvVar33 & 0x3f);
    if (((ulonglong)pvVar33 & 0xffffffffffffffc0) != 0) {
      _sha1_block_data_order();
      uVar36 = (int)((ulonglong)pvVar33 >> 0x1d) + pSVar13[4].data[0xc];
      pSVar13[4].data[0xc] = uVar36;
      uVar20 = (int)((ulonglong)pvVar33 & 0xffffffffffffffc0) * 8;
      puVar14 = pSVar13[4].data + 0xb;
      uVar30 = *puVar14;
      *puVar14 = *puVar14 + uVar20;
      if (CARRY4(uVar30,uVar20)) {
        pSVar13[4].data[0xc] = uVar36 + 1;
      }
    }
    if (pvVar22 != (void *)0x0) {
      _SHA1_Update(pSVar17,pvVar22,param_3);
    }
    if (pSVar23 == param_1) {
      uVar16 = _EVP_CIPHER_CTX_iv_noconst();
    }
    else {
      if (param_2 != unaff_RSI) {
        _memcpy(pSVar17,(void *)((longlong)pSVar23 - local_a0),param_3);
      }
      _SHA1_Final((uchar *)pSVar17,pSVar23);
      uVar16 = *(undefined8 *)(pSVar13[4].data + 4);
      *(undefined8 *)(pSVar13[5].data + 2) = *(undefined8 *)(pSVar13[4].data + 2);
      *(undefined8 *)(pSVar13[5].data + 4) = uVar16;
      uVar30 = pSVar13[4].Nh;
      uVar16 = *(undefined8 *)pSVar13[4].data;
      pSVar13[5].Nl = pSVar13[4].Nl;
      pSVar13[5].Nh = uVar30;
      *(undefined8 *)pSVar13[5].data = uVar16;
      uVar16 = *(undefined8 *)(pSVar13[3].data + 6);
      uVar4 = *(undefined8 *)(pSVar13[3].data + 8);
      uVar5 = *(undefined8 *)(pSVar13[3].data + 10);
      uVar6 = *(undefined8 *)(pSVar13[3].data + 0xc);
      uVar7 = *(undefined8 *)(pSVar13[3].data + 0xe);
      uVar8 = *(undefined8 *)&pSVar13[3].num;
      uVar30 = pSVar13[4].h2;
      uVar20 = pSVar13[4].h3;
      uVar36 = pSVar13[4].h4;
      pSVar13[5].h1 = pSVar13[4].h1;
      pSVar13[5].h2 = uVar30;
      pSVar13[5].h3 = uVar20;
      pSVar13[5].h4 = uVar36;
      *(undefined8 *)(pSVar13[4].data + 0xe) = uVar7;
      *(undefined8 *)&pSVar13[4].num = uVar8;
      *(undefined8 *)(pSVar13[4].data + 10) = uVar5;
      *(undefined8 *)(pSVar13[4].data + 0xc) = uVar6;
      *(undefined8 *)puVar1 = uVar16;
      *(undefined8 *)(pSVar13[4].data + 8) = uVar4;
      if ((ulonglong)pSVar13[5].data[5] == 0) {
        pSVar24 = (SHA_CTX *)&MACH_HEADER.sizeofcmds;
LAB_010259f0:
        c = pSVar24;
        _SHA1_Update(pSVar17,c,param_3);
      }
      else {
        pSVar24 = (SHA_CTX *)(0x40 - (ulonglong)pSVar13[5].data[5]);
        if ((SHA_CTX *)((longlong)&MACH_HEADER.ncmds + 3) < pSVar24) {
          pSVar24 = (SHA_CTX *)&MACH_HEADER.sizeofcmds;
        }
        c = pSVar24;
        _SHA1_Update(pSVar17,pSVar24,param_3);
        pSVar24 = (SHA_CTX *)(0x14 - (longlong)pSVar24);
        if (((ulonglong)pSVar24 & 0xffffffffffffffc0) != 0) {
          c = (SHA_CTX *)((ulonglong)pSVar24 >> 6);
          _sha1_block_data_order();
          uVar20 = (int)((ulonglong)pSVar24 >> 0x1d) + pSVar13[4].data[0xc];
          pSVar13[4].data[0xc] = uVar20;
          uVar36 = (int)((ulonglong)pSVar24 & 0xffffffffffffffc0) * 8;
          puVar1 = pSVar13[4].data + 0xb;
          uVar30 = *puVar1;
          *puVar1 = *puVar1 + uVar36;
          if (CARRY4(uVar30,uVar36)) {
            pSVar13[4].data[0xc] = uVar20 + 1;
          }
        }
        if (pSVar24 != (SHA_CTX *)0x0) goto LAB_010259f0;
      }
      _SHA1_Final((uchar *)pSVar17,c);
      if (&pSVar23->Nl < param_1) {
        _memset(pSVar17,((int)param_1 - (int)pSVar23) + -0x14,param_3);
      }
      uVar16 = _EVP_CIPHER_CTX_iv_noconst();
    }
    _aesni_cbc_encrypt(pSVar13,(longlong)param_1 - local_a0,uVar16,1);
LAB_01025a6d:
    uVar26 = 1;
  }
LAB_01025a72:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar26;
  }
LAB_01026125:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


