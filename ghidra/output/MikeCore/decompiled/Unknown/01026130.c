// Function: FUN_01026130
// Address: 01026130
// Size: 4453 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01026130(undefined8 *param_1,uint param_2,undefined1 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  size_t sVar11;
  SHA_CTX *pSVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  byte bVar18;
  uint uVar19;
  SHA_CTX *c;
  longlong *ptr;
  longlong lVar21;
  uint *puVar22;
  qword *pqVar23;
  uint uVar24;
  uint uVar25;
  SHA_CTX *pSVar26;
  undefined1 *puVar27;
  qword *pqVar28;
  int unaff_ESI;
  longlong lVar29;
  size_t sVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  void *pvVar35;
  size_t sVar36;
  SHA_CTX *pSVar37;
  uint uVar38;
  uint uVar39;
  undefined8 uVar40;
  undefined8 local_738;
  undefined1 auStack_730 [8];
  undefined1 local_728 [8];
  undefined1 auStack_720 [8];
  undefined1 local_718 [8];
  undefined1 auStack_710 [8];
  undefined1 local_708 [8];
  undefined8 uStack_700;
  undefined1 local_338 [32];
  uint auStack_318 [8];
  uint auStack_2f8 [8];
  uint auStack_2d8 [8];
  uint auStack_2b8 [8];
  uint auStack_298 [8];
  longlong local_278;
  undefined1 *puStack_270;
  undefined4 local_268 [2];
  ulonglong local_260;
  ulonglong uStack_258;
  longlong local_250 [35];
  longlong local_138;
  int aiStack_130 [2];
  undefined8 uStack_128;
  undefined4 auStack_120 [26];
  longlong local_b8;
  uint auStack_b0 [2];
  longlong alStack_a8 [14];
  longlong local_38;
  undefined1 *puVar20;
  
  pSVar37 = (SHA_CTX *)(ulonglong)param_2;
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  pSVar12 = (SHA_CTX *)_EVP_CIPHER_CTX_get_cipher_data();
  sVar36 = (size_t)param_3;
  uVar13 = 0xffffffff;
  if (6 < unaff_ESI - 0x16U) goto switchD_01026187_caseD_18;
  puVar22 = &switchD_01026187::switchdataD_01027298;
  c = (SHA_CTX *)
      ((longlong)&switchD_01026187::switchdataD_01027298 +
      (longlong)(int)(&switchD_01026187::switchdataD_01027298)[unaff_ESI - 0x16U]);
  switch(unaff_ESI) {
  case 0x16:
    if (param_2 != 0xd) break;
    uVar8 = *(ushort *)((longlong)param_1 + 0xb);
    iVar9 = _EVP_CIPHER_CTX_encrypting();
    if (iVar9 == 0) {
      uVar40 = *param_1;
      *(undefined8 *)((longlong)pSVar12[5].data + 0x29) = *(undefined8 *)((longlong)param_1 + 5);
      *(undefined8 *)(pSVar12[5].data + 9) = uVar40;
      pSVar12[5].data[7] = 0xd;
      pSVar12[5].data[8] = 0;
      uVar13 = 0x14;
      break;
    }
    uVar13 = (ulonglong)uVar8 << 0x30;
    uVar33 = uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28;
    *(ulonglong *)(pSVar12[5].data + 7) = uVar33;
    uVar24 = (uint)*(ushort *)((longlong)param_1 + 9) << 0x10;
    uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8;
    pSVar12[5].data[9] = uVar24;
    if (0x301 < uVar24) {
      uVar13 = 0;
      if ((uint)uVar33 < 0x10) break;
      uVar24 = (uint)uVar33 - 0x10;
      uVar33 = (ulonglong)uVar24;
      uVar8 = (ushort)uVar24;
      *(ushort *)((longlong)param_1 + 0xb) = uVar8 << 8 | uVar8 >> 8;
    }
    uVar40 = *(undefined8 *)(pSVar12[3].data + 4);
    *(undefined8 *)(pSVar12[5].data + 2) = *(undefined8 *)(pSVar12[3].data + 2);
    *(undefined8 *)(pSVar12[5].data + 4) = uVar40;
    uVar24 = pSVar12[3].Nh;
    uVar40 = *(undefined8 *)pSVar12[3].data;
    pSVar12[5].Nl = pSVar12[3].Nl;
    pSVar12[5].Nh = uVar24;
    *(undefined8 *)pSVar12[5].data = uVar40;
    uVar40 = *(undefined8 *)(pSVar12[2].data + 6);
    uVar3 = *(undefined8 *)(pSVar12[2].data + 8);
    uVar4 = *(undefined8 *)(pSVar12[2].data + 10);
    uVar5 = *(undefined8 *)(pSVar12[2].data + 0xc);
    uVar6 = *(undefined8 *)(pSVar12[2].data + 0xe);
    uVar7 = *(undefined8 *)&pSVar12[2].num;
    uVar24 = pSVar12[3].h2;
    uVar10 = pSVar12[3].h3;
    uVar31 = pSVar12[3].h4;
    pSVar12[5].h1 = pSVar12[3].h1;
    pSVar12[5].h2 = uVar24;
    pSVar12[5].h3 = uVar10;
    pSVar12[5].h4 = uVar31;
    *(undefined8 *)(pSVar12[4].data + 0xe) = uVar6;
    *(undefined8 *)&pSVar12[4].num = uVar7;
    *(undefined8 *)(pSVar12[4].data + 10) = uVar4;
    *(undefined8 *)(pSVar12[4].data + 0xc) = uVar5;
    *(undefined8 *)(pSVar12[4].data + 6) = uVar40;
    *(undefined8 *)(pSVar12[4].data + 8) = uVar3;
    if ((ulonglong)pSVar12[5].data[5] == 0) {
      pvVar35 = (void *)((longlong)&MACH_HEADER.filetype + 1);
LAB_01027096:
      _SHA1_Update(c,pvVar35,sVar36);
    }
    else {
      puVar17 = (undefined1 *)(0x40 - (ulonglong)pSVar12[5].data[5]);
      if (&MACH_HEADER.filetype < puVar17) {
        puVar17 = (undefined1 *)((longlong)&MACH_HEADER.filetype + 1);
      }
      _SHA1_Update(c,puVar17,sVar36);
      pvVar35 = (void *)(0xd - (longlong)puVar17);
      if (((ulonglong)pvVar35 & 0xffffffffffffffc0) != 0) {
        _sha1_block_data_order();
        uVar10 = (int)((ulonglong)pvVar35 >> 0x1d) + pSVar12[4].data[0xc];
        pSVar12[4].data[0xc] = uVar10;
        uVar31 = (int)((ulonglong)pvVar35 & 0xffffffffffffffc0) * 8;
        puVar22 = pSVar12[4].data + 0xb;
        uVar24 = *puVar22;
        *puVar22 = *puVar22 + uVar31;
        if (CARRY4(uVar24,uVar31)) {
          pSVar12[4].data[0xc] = uVar10 + 1;
        }
      }
      if (pvVar35 != (void *)0x0) goto LAB_01027096;
    }
    uVar13 = (ulonglong)(((int)uVar33 + 0x24U & 0xfffffff0) - (int)uVar33);
    break;
  case 0x17:
    local_708 = (undefined1  [8])0x0;
    uStack_700 = 0;
    local_718 = (undefined1  [8])0x0;
    auStack_710 = (undefined1  [8])0x0;
    local_728 = (undefined1  [8])0x0;
    auStack_720 = (undefined1  [8])0x0;
    local_738 = 0;
    auStack_730 = (undefined1  [8])0x0;
    if ((int)param_2 < 0x41) {
      c = (SHA_CTX *)&segment_command_00000020.vmsize;
      ___memcpy_chk(0x40,(longlong)(int)param_2);
    }
    else {
      _SHA1_Init(c);
      if ((ulonglong)pSVar12[3].data[5] != 0) {
        pSVar26 = (SHA_CTX *)(0x40 - (ulonglong)pSVar12[3].data[5]);
        if (pSVar37 < pSVar26) {
          pSVar26 = pSVar37;
        }
        puVar22 = &pSVar26->h0;
        _SHA1_Update(c,pSVar26,sVar36);
        pSVar37 = (SHA_CTX *)((longlong)pSVar37 - (longlong)pSVar26);
      }
      pSVar26 = (SHA_CTX *)(ulonglong)((uint)pSVar37 & 0x3f);
      if (((ulonglong)pSVar37 & 0xffffffffffffffc0) != 0) {
        puVar22 = (uint *)((ulonglong)pSVar37 >> 6);
        _sha1_block_data_order();
        uVar31 = (int)((ulonglong)pSVar37 >> 0x1d) + pSVar12[2].data[0xc];
        pSVar12[2].data[0xc] = uVar31;
        uVar10 = (int)((ulonglong)pSVar37 & 0xffffffffffffffc0) * 8;
        puVar1 = pSVar12[2].data + 0xb;
        uVar24 = *puVar1;
        *puVar1 = *puVar1 + uVar10;
        if (CARRY4(uVar24,uVar10)) {
          pSVar12[2].data[0xc] = uVar31 + 1;
        }
      }
      if (pSVar26 != (SHA_CTX *)0x0) {
        _SHA1_Update(c,pSVar26,sVar36);
        puVar22 = &pSVar26->h0;
      }
      _SHA1_Final((uchar *)c,(SHA_CTX *)puVar22);
    }
    local_738 = CONCAT44(local_738._4_4_ ^ _UNK_024042f4,(uint)local_738 ^ _DAT_024042f0);
    auStack_730._4_4_ = auStack_730._4_4_ ^ _UNK_024042fc;
    auStack_730._0_4_ = auStack_730._0_4_ ^ _UNK_024042f8;
    local_728._4_4_ = local_728._4_4_ ^ _UNK_024042f4;
    local_728._0_4_ = local_728._0_4_ ^ _DAT_024042f0;
    auStack_720._4_4_ = auStack_720._4_4_ ^ _UNK_024042fc;
    auStack_720._0_4_ = auStack_720._0_4_ ^ _UNK_024042f8;
    local_718._4_4_ = local_718._4_4_ ^ _UNK_024042f4;
    local_718._0_4_ = local_718._0_4_ ^ _DAT_024042f0;
    auStack_710._4_4_ = auStack_710._4_4_ ^ _UNK_024042fc;
    auStack_710._0_4_ = auStack_710._0_4_ ^ _UNK_024042f8;
    local_708._4_4_ = _UNK_024042f4 ^ local_708._4_4_;
    local_708._0_4_ = _DAT_024042f0 ^ local_708._0_4_;
    uStack_700 = CONCAT44(_UNK_024042fc ^ uStack_700._4_4_,_UNK_024042f8 ^ (uint)uStack_700);
    _SHA1_Init(c);
    uVar24 = pSVar12[3].data[5];
    if ((ulonglong)uVar24 == 0) {
      pvVar35 = (void *)0x0;
      uVar13 = 0x40;
LAB_010268c8:
      _sha1_block_data_order();
      uVar10 = pSVar12[2].data[0xc];
      uVar31 = (int)uVar13 * 8;
      puVar22 = pSVar12[2].data + 0xb;
      uVar24 = *puVar22;
      *puVar22 = *puVar22 + uVar31;
      c = pSVar12;
      if (CARRY4(uVar24,uVar31)) {
        pSVar12[2].data[0xc] = uVar10 + 1;
      }
    }
    else {
      pqVar28 = (qword *)(0x40 - (ulonglong)uVar24);
      if (0x40 < uVar24) {
        pqVar28 = &segment_command_00000020.vmsize;
      }
      _SHA1_Update(c,pqVar28,sVar36);
      pvVar35 = (void *)(ulonglong)((uint)(0x40U - (longlong)pqVar28) & 0x3f);
      uVar13 = 0x40U - (longlong)pqVar28 & 0xffffffffffffffc0;
      if (uVar13 != 0) goto LAB_010268c8;
    }
    if (pvVar35 != (void *)0x0) {
      _SHA1_Update(c,pvVar35,sVar36);
    }
    local_738 = local_738 ^ _DAT_024040e0;
    auStack_730 = (undefined1  [8])((ulonglong)auStack_730 ^ _UNK_024040e8);
    local_728 = (undefined1  [8])((ulonglong)local_728 ^ _DAT_024040e0);
    auStack_720 = (undefined1  [8])((ulonglong)auStack_720 ^ _UNK_024040e8);
    local_718 = (undefined1  [8])((ulonglong)local_718 ^ _DAT_024040e0);
    auStack_710 = (undefined1  [8])((ulonglong)auStack_710 ^ _UNK_024040e8);
    local_708 = (undefined1  [8])(_DAT_024040e0 ^ (ulonglong)local_708);
    uStack_700 = _UNK_024040e8 ^ uStack_700;
    _SHA1_Init(c);
    uVar24 = pSVar12[4].data[5];
    if ((ulonglong)uVar24 == 0) {
      pvVar35 = (void *)0x0;
      uVar13 = 0x40;
LAB_010269dd:
      sVar11 = 1;
      _sha1_block_data_order();
      uVar10 = pSVar12[3].data[0xc];
      uVar31 = (int)uVar13 * 8;
      puVar22 = pSVar12[3].data + 0xb;
      uVar24 = *puVar22;
      *puVar22 = *puVar22 + uVar31;
      c = pSVar12;
      if (CARRY4(uVar24,uVar31)) {
        pSVar12[3].data[0xc] = uVar10 + 1;
      }
    }
    else {
      pqVar28 = (qword *)(0x40 - (ulonglong)uVar24);
      if (0x40 < uVar24) {
        pqVar28 = &segment_command_00000020.vmsize;
      }
      pqVar23 = pqVar28;
      _SHA1_Update(c,pqVar28,sVar36);
      sVar11 = (size_t)pqVar23;
      pvVar35 = (void *)(ulonglong)((uint)(0x40U - (longlong)pqVar28) & 0x3f);
      uVar13 = 0x40U - (longlong)pqVar28 & 0xffffffffffffffc0;
      if (uVar13 != 0) goto LAB_010269dd;
    }
    if (pvVar35 != (void *)0x0) {
      _SHA1_Update(c,pvVar35,sVar36);
      sVar11 = (size_t)pvVar35;
    }
    _OPENSSL_cleanse(c,sVar11);
    uVar13 = 1;
    break;
  case 0x19:
    if ((int)param_2 < 0x20) break;
    uVar8 = *(ushort *)(param_1[1] + 0xb);
    iVar9 = _EVP_CIPHER_CTX_encrypting();
    if (iVar9 == 0) {
      uVar13 = 0xffffffff;
      break;
    }
    uVar24 = (uint)*(ushort *)(param_1[1] + 9) << 0x10;
    uVar13 = 0xffffffff;
    if ((uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8) < 0x302) break;
    uVar24 = (uint)uVar8 << 0x10;
    uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8;
    if (uVar24 == 0) {
      uVar24 = *(uint *)(param_1 + 3) - 4;
      c = (SHA_CTX *)(ulonglong)uVar24;
      if (7 < uVar24) break;
      uVar10 = *(uint *)(param_1 + 3) >> 2;
      uVar24 = *(uint *)(param_1 + 2);
    }
    else {
      uVar13 = 0;
      if (uVar24 < 0x1000) break;
      uVar10 = 1;
      if (0x1fff < uVar24) {
        uVar10 = 2 - ((DAT_0280304c._4_1_ & 0x20) == 0);
      }
    }
    uVar40 = *(undefined8 *)(pSVar12[3].data + 4);
    *(undefined8 *)(pSVar12[5].data + 2) = *(undefined8 *)(pSVar12[3].data + 2);
    *(undefined8 *)(pSVar12[5].data + 4) = uVar40;
    uVar31 = pSVar12[3].Nh;
    uVar40 = *(undefined8 *)pSVar12[3].data;
    pSVar12[5].Nl = pSVar12[3].Nl;
    pSVar12[5].Nh = uVar31;
    *(undefined8 *)pSVar12[5].data = uVar40;
    uVar40 = *(undefined8 *)(pSVar12[2].data + 6);
    uVar3 = *(undefined8 *)(pSVar12[2].data + 8);
    uVar4 = *(undefined8 *)(pSVar12[2].data + 10);
    uVar5 = *(undefined8 *)(pSVar12[2].data + 0xc);
    uVar6 = *(undefined8 *)(pSVar12[2].data + 0xe);
    uVar7 = *(undefined8 *)&pSVar12[2].num;
    uVar31 = pSVar12[3].h2;
    uVar38 = pSVar12[3].h3;
    uVar25 = pSVar12[3].h4;
    pSVar12[5].h1 = pSVar12[3].h1;
    pSVar12[5].h2 = uVar31;
    pSVar12[5].h3 = uVar38;
    pSVar12[5].h4 = uVar25;
    *(undefined8 *)(pSVar12[4].data + 0xe) = uVar6;
    *(undefined8 *)&pSVar12[4].num = uVar7;
    *(undefined8 *)(pSVar12[4].data + 10) = uVar4;
    *(undefined8 *)(pSVar12[4].data + 0xc) = uVar5;
    *(undefined8 *)(pSVar12[4].data + 6) = uVar40;
    *(undefined8 *)(pSVar12[4].data + 8) = uVar3;
    if ((ulonglong)pSVar12[5].data[5] == 0) {
      pvVar35 = (void *)((longlong)&MACH_HEADER.filetype + 1);
LAB_0102720d:
      _SHA1_Update(c,pvVar35,sVar36);
    }
    else {
      puVar17 = (undefined1 *)(0x40 - (ulonglong)pSVar12[5].data[5]);
      if (&MACH_HEADER.filetype < puVar17) {
        puVar17 = (undefined1 *)((longlong)&MACH_HEADER.filetype + 1);
      }
      _SHA1_Update(c,puVar17,sVar36);
      pvVar35 = (void *)(0xd - (longlong)puVar17);
      if (((ulonglong)pvVar35 & 0xffffffffffffffc0) != 0) {
        _sha1_block_data_order();
        uVar38 = (int)((ulonglong)pvVar35 >> 0x1d) + pSVar12[4].data[0xc];
        pSVar12[4].data[0xc] = uVar38;
        uVar25 = (int)((ulonglong)pvVar35 & 0xffffffffffffffc0) * 8;
        puVar22 = pSVar12[4].data + 0xb;
        uVar31 = *puVar22;
        *puVar22 = *puVar22 + uVar25;
        if (CARRY4(uVar31,uVar25)) {
          pSVar12[4].data[0xc] = uVar38 + 1;
        }
      }
      if (pvVar35 != (void *)0x0) goto LAB_0102720d;
    }
    bVar18 = (char)uVar10 + 1;
    uVar31 = uVar24 >> (bVar18 & 0x1f);
    uVar24 = (uVar24 + uVar31) - (uVar31 << (bVar18 & 0x1f));
    if ((uVar31 < uVar24) && (uVar38 = uVar10 * 4 - 1, (uVar24 + 0x16 & 0x3f) < uVar38)) {
      uVar31 = uVar31 + 1;
      uVar24 = uVar24 - uVar38;
    }
    uVar31 = uVar31 + 0x24 & 0xfffffff0;
    *(uint *)(param_1 + 3) = uVar10 * 4;
    uVar13 = (ulonglong)
             (((uVar24 + 0x24 & 0xfffffff0) - uVar31) + (uVar31 + 0x15 << (bVar18 & 0x1f)));
    break;
  case 0x1a:
    puVar17 = (undefined1 *)*param_1;
    lVar29 = param_1[1];
    uVar40 = param_1[2];
    uVar24 = *(uint *)(param_1 + 3);
    sVar36 = uVar24 >> 2;
    iVar9 = _RAND_bytes((uchar *)c,0x1027298);
    if (iVar9 < 1) {
      uVar13 = 0;
    }
    else {
      bVar18 = (char)sVar36 + 1;
      uVar10 = (uint)uVar40 >> (bVar18 & 0x1f);
      uVar31 = uVar24 & 0xfffffffc;
      uVar13 = (ulonglong)uVar31;
      uVar38 = ((uint)uVar40 + uVar10) - (uVar10 << (bVar18 & 0x1f));
      ptr = (longlong *)(ulonglong)uVar38;
      if ((uVar10 < uVar38) && ((uVar38 + 0x16 & 0x3f) < uVar31 - 1)) {
        uVar10 = uVar10 + 1;
        ptr = (longlong *)(ulonglong)(uVar38 - (uVar31 - 1));
      }
      uVar33 = (ulonglong)((uint)local_338 & 0x10);
      local_b8 = lVar29;
      local_278 = lVar29;
      puVar20 = puVar17 + 0x15;
      puStack_270 = puVar20;
      *(ulonglong *)(puVar17 + 5) = local_738;
      *(undefined1 (*) [8])(puVar17 + 0xd) = auStack_730;
      local_260 = local_738;
      uStack_258 = (ulonglong)auStack_730;
      if (3 < uVar24) {
        uVar14 = (ulonglong)((uVar10 + 0x24 & 0xfffffff0) + 0x15);
        uVar32 = 2;
        if (2 < uVar31) {
          uVar32 = (ulonglong)uVar24 & 0xfffffffffffffffc;
        }
        plVar16 = local_250;
        param_3 = local_728;
        lVar21 = 0;
        while( true ) {
          lVar29 = lVar29 + (longlong)(ulonglong)uVar10;
          *(longlong *)((longlong)alStack_a8 + lVar21) = lVar29;
          *plVar16 = lVar29;
          plVar16[1] = (longlong)(puVar20 + uVar14);
          uVar40 = *(undefined8 *)(auStack_720 + lVar21);
          *(undefined8 *)(puVar20 + (uVar14 - 0x10)) = *(undefined8 *)(param_3 + lVar21);
          *(undefined8 *)((longlong)(puVar20 + (uVar14 - 0x10)) + 8) = uVar40;
          lVar2 = *(longlong *)(auStack_720 + lVar21);
          plVar16[3] = *(longlong *)(param_3 + lVar21);
          plVar16[4] = lVar2;
          if (uVar32 * 0x10 + -0x20 == lVar21) break;
          puVar20 = (undefined1 *)plVar16[1];
          lVar21 = lVar21 + 0x10;
          plVar16 = plVar16 + 5;
        }
      }
      uVar38 = uVar31 - 1;
      local_738 = *(ulonglong *)(pSVar12[4].data + 0xd);
      uVar25 = (uint)ptr;
      if (3 < uVar24) {
        uVar32 = local_738 >> 0x38 | (local_738 & 0xff000000000000) >> 0x28 |
                 (local_738 & 0xff0000000000) >> 0x18 | (local_738 & 0xff00000000) >> 8 |
                 (local_738 & 0xff000000) << 8 | (local_738 & 0xff0000) << 0x18 |
                 (local_738 & 0xff00) << 0x28 | local_738 << 0x38;
        uVar14 = 1;
        if (1 < uVar31) {
          uVar14 = uVar13;
        }
        puVar22 = (uint *)((longlong)auStack_298 - uVar33);
        param_3 = (undefined1 *)((ulonglong)uVar38 << 4);
        lVar29 = 0;
        puVar27 = (undefined1 *)0x0;
        do {
          uVar19 = uVar10;
          if (param_3 == puVar27) {
            uVar19 = uVar25;
          }
          puVar22[-0x20] = pSVar12[4].data[6];
          puVar22[-0x18] = pSVar12[4].data[7];
          puVar22[-0x10] = pSVar12[4].data[8];
          puVar22[-8] = pSVar12[4].data[9];
          *puVar22 = pSVar12[4].data[10];
          (&local_738)[(longlong)puVar27] =
               uVar32 >> 0x38 | (uVar32 & 0xff000000000000) >> 0x28 |
               (uVar32 & 0xff0000000000) >> 0x18 | (uVar32 & 0xff00000000) >> 8 |
               (uVar32 & 0xff000000) << 8 | (uVar32 & 0xff0000) << 0x18 | (uVar32 & 0xff00) << 0x28
               | uVar32 << 0x38;
          auStack_730[(longlong)puVar27 * 8] = (char)pSVar12[4].data[0xf];
          auStack_730[(longlong)puVar27 * 8 + 1] = *(undefined1 *)((longlong)pSVar12[4].data + 0x3d)
          ;
          auStack_730[(longlong)puVar27 * 8 + 2] = *(undefined1 *)((longlong)pSVar12[4].data + 0x3e)
          ;
          auStack_730[(longlong)puVar27 * 8 + 3] = (char)(uVar19 >> 8);
          auStack_730[(longlong)puVar27 * 8 + 4] = (char)uVar19;
          puVar34 = *(undefined8 **)((longlong)&local_b8 + (longlong)puVar27);
          uVar40 = puVar34[1];
          uVar3 = puVar34[2];
          uVar4 = puVar34[3];
          uVar5 = puVar34[4];
          uVar6 = puVar34[5];
          *(undefined8 *)(auStack_730 + (longlong)puVar27 * 8 + 5) = *puVar34;
          *(undefined8 *)(local_728 + (longlong)puVar27 * 8 + 5) = uVar40;
          *(undefined8 *)(auStack_720 + (longlong)puVar27 * 8 + 5) = uVar3;
          *(undefined8 *)(local_718 + (longlong)puVar27 * 8 + 5) = uVar4;
          *(undefined8 *)(auStack_710 + (longlong)puVar27 * 8 + 5) = uVar5;
          *(undefined8 *)(local_708 + (longlong)puVar27 * 8 + 5) = uVar6;
          *(undefined4 *)((longlong)&uStack_700 + (longlong)puVar27 * 8 + 4) =
               *(undefined4 *)((longlong)puVar34 + 0x2f);
          *(longlong *)((longlong)&local_b8 + (longlong)puVar27) = (longlong)puVar34 + 0x33;
          uVar19 = uVar19 - 0x33 >> 6;
          puVar20 = (undefined1 *)(ulonglong)uVar19;
          *(uint *)((longlong)auStack_b0 + (longlong)puVar27) = uVar19;
          *(longlong *)((longlong)&local_138 + (longlong)puVar27) = (longlong)&local_738 + lVar29;
          *(undefined4 *)((longlong)aiStack_130 + (longlong)puVar27) = 1;
          puVar27 = puVar27 + 0x10;
          lVar29 = lVar29 + 0x80;
          uVar32 = uVar32 + 1;
          puVar22 = puVar22 + 1;
        } while ((undefined1 *)(uVar14 * 0x10) != puVar27);
      }
      lVar29 = _sha1_multi_block(puVar20,sVar36);
      uVar19 = uVar10;
      if (uVar25 < uVar10) {
        uVar19 = uVar25;
      }
      sVar11 = 0;
      if (0x83f < uVar19 - 0x33) {
        uVar19 = uVar19 - 0x33 >> 6;
        if (uVar24 < 4) {
          sVar11 = 0;
          do {
            _sha1_multi_block(lVar29,0);
            lVar29 = _aesni_multi_cbc_encrypt();
            sVar11 = sVar11 + 0x800;
            uVar19 = uVar19 - 0x20;
          } while (0x20 < uVar19);
        }
        else {
          uVar14 = 1;
          if (1 < uVar31) {
            uVar14 = uVar13;
          }
          puVar15 = local_268;
          lVar21 = 0;
          do {
            *(undefined8 *)((longlong)aiStack_130 + lVar21 + -8) =
                 *(undefined8 *)((longlong)auStack_b0 + lVar21 + -8);
            *(undefined4 *)((longlong)aiStack_130 + lVar21) = 0x20;
            *puVar15 = 0x80;
            *(undefined8 *)((longlong)auStack_120 + lVar21 + -8) =
                 *(undefined8 *)((longlong)alStack_a8 + lVar21);
            *(undefined4 *)((longlong)auStack_120 + lVar21) = 0x20;
            puVar15[10] = 0x80;
            lVar21 = lVar21 + 0x20;
            puVar15 = puVar15 + 0x14;
          } while (uVar14 * 0x10 != lVar21);
          sVar11 = 0;
          do {
            uVar40 = _sha1_multi_block(lVar21,sVar36);
            _aesni_multi_cbc_encrypt(uVar40,sVar36);
            plVar16 = &local_278;
            lVar21 = 0;
            do {
              lVar29 = *(longlong *)((longlong)auStack_b0 + lVar21 + -8) + 0x800;
              *(longlong *)((longlong)auStack_b0 + lVar21 + -8) = lVar29;
              *(longlong *)((longlong)aiStack_130 + lVar21 + -8) = lVar29;
              *(int *)((longlong)auStack_b0 + lVar21) =
                   *(int *)((longlong)auStack_b0 + lVar21) + -0x20;
              *(undefined4 *)((longlong)aiStack_130 + lVar21) = 0x20;
              lVar2 = plVar16[1];
              *plVar16 = *plVar16 + _DAT_024040d0;
              plVar16[1] = lVar2 + _UNK_024040d8;
              *(undefined4 *)(plVar16 + 2) = 0x80;
              lVar29 = *(longlong *)(lVar2 + 0x7f0);
              lVar2 = *(longlong *)(lVar2 + 0x7f8);
              plVar16[3] = lVar29;
              plVar16[4] = lVar2;
              lVar21 = lVar21 + 0x10;
              plVar16 = plVar16 + 5;
            } while (uVar14 * 0x10 != lVar21);
            sVar11 = sVar11 + 0x800;
            uVar19 = uVar19 - 0x20;
          } while (0x20 < uVar19);
        }
      }
      _sha1_multi_block(lVar29,sVar36);
      ___bzero();
      if (3 < uVar24) {
        uVar14 = 1;
        if (1 < uVar31) {
          uVar14 = uVar13;
        }
        lVar29 = 0;
        puVar34 = &local_738;
        do {
          plVar16 = (longlong *)(ulonglong)uVar10;
          if ((ulonglong)uVar38 << 4 == lVar29) {
            plVar16 = ptr;
          }
          uVar39 = ((int)plVar16 - (*(int *)((longlong)auStack_b0 + lVar29) * 0x40 + sVar11)) - 0x33
          ;
          _memcpy(ptr,(void *)(ulonglong)uVar39,(size_t)param_3);
          *(undefined1 *)((longlong)&local_738 + (longlong)(ulonglong)uVar39 + lVar29 * 8) = 0x80;
          uVar19 = (int)plVar16 * 8 + 0x268;
          *(uint *)((longlong)&uStack_700 + lVar29 * 8 + (ulonglong)(uVar39 >= 0x38) * 0x40 + 4) =
               uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 |
               uVar19 * 0x1000000;
          *(uint *)((longlong)aiStack_130 + lVar29) = 2 - (uint)(uVar39 < 0x38);
          *(undefined8 **)((longlong)aiStack_130 + lVar29 + -8) = puVar34;
          lVar29 = lVar29 + 0x10;
          puVar34 = puVar34 + 0x10;
        } while (uVar14 << 4 != lVar29);
      }
      _sha1_multi_block(ptr,sVar36);
      puVar22 = (uint *)&local_738;
      uVar40 = ___bzero();
      if (uVar24 < 4) {
        uVar13 = 0;
        _sha1_multi_block(uVar40,0);
      }
      else {
        uVar14 = 1;
        if (1 < uVar31) {
          uVar14 = uVar13;
        }
        lVar29 = -uVar33;
        pvVar35 = (void *)((longlong)auStack_298 + lVar29);
        lVar21 = 0;
        do {
          uVar24 = *(uint *)((longlong)auStack_318 + lVar21 + lVar29);
          *puVar22 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                     uVar24 << 0x18;
          *(uint *)((longlong)auStack_318 + lVar21 + lVar29) = pSVar12[3].data[6];
          uVar24 = *(uint *)((longlong)auStack_2f8 + lVar21 + lVar29);
          puVar22[1] = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                       uVar24 << 0x18;
          *(uint *)((longlong)auStack_2f8 + lVar21 + lVar29) = pSVar12[3].data[7];
          uVar24 = *(uint *)((longlong)auStack_2d8 + lVar21 + lVar29);
          puVar22[2] = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                       uVar24 << 0x18;
          *(uint *)((longlong)auStack_2d8 + lVar21 + lVar29) = pSVar12[3].data[8];
          uVar24 = *(uint *)((longlong)auStack_2b8 + lVar21 + lVar29);
          puVar22[3] = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                       uVar24 << 0x18;
          *(uint *)((longlong)auStack_2b8 + lVar21 + lVar29) = pSVar12[3].data[9];
          uVar24 = *(uint *)((longlong)pvVar35 + lVar21);
          puVar22[4] = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                       uVar24 << 0x18;
          *(uint *)((longlong)pvVar35 + lVar21) = pSVar12[3].data[10];
          *(undefined1 *)(puVar22 + 5) = 0x80;
          puVar22[0xf] = 0xa0020000;
          *(uint **)(aiStack_130 + lVar21 + -2) = puVar22;
          aiStack_130[lVar21] = 1;
          lVar21 = lVar21 + 4;
          puVar22 = puVar22 + 0x20;
        } while (uVar14 * 4 - lVar21 != 0);
        _sha1_multi_block(lVar21,sVar36);
        ptr = &local_278;
        uVar33 = 0;
        uVar13 = 0;
        do {
          uVar24 = uVar10;
          if (uVar38 == uVar33) {
            uVar24 = uVar25;
          }
          sVar30 = sVar11;
          _memcpy(ptr,(void *)(ulonglong)(uVar24 - sVar11),sVar11);
          *ptr = ptr[1];
          uVar32 = (ulonglong)(uVar24 + 0x15);
          uVar31 = *(uint *)((longlong)auStack_318 + uVar33 * 4 + lVar29);
          *(uint *)(puVar17 + uVar32) =
               uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 | uVar31 << 0x18;
          uVar31 = *(uint *)((longlong)auStack_2f8 + uVar33 * 4 + lVar29);
          *(uint *)(puVar17 + uVar32 + 4) =
               uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 | uVar31 << 0x18;
          uVar31 = *(uint *)((longlong)auStack_2d8 + uVar33 * 4 + lVar29);
          *(uint *)(puVar17 + uVar32 + 8) =
               uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 | uVar31 << 0x18;
          uVar31 = *(uint *)((longlong)auStack_2b8 + uVar33 * 4 + lVar29);
          *(uint *)(puVar17 + uVar32 + 0xc) =
               uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 | uVar31 << 0x18;
          uVar31 = *(uint *)((longlong)pvVar35 + uVar33 * 4);
          *(uint *)(puVar17 + uVar32 + 0x10) =
               uVar31 >> 0x18 | (uVar31 & 0xff0000) >> 8 | (uVar31 & 0xff00) << 8 | uVar31 << 0x18;
          uVar31 = 0xb - uVar24 & 0xf;
          _memset(pvVar35,uVar31 + 1,sVar30);
          uVar24 = uVar24 + 0x14 & 0xfffffff0;
          *(uint *)(ptr + 2) = (uVar24 - sVar11) + 0x10 >> 4;
          *puVar17 = (char)pSVar12[4].data[0xf];
          puVar17[1] = *(undefined1 *)((longlong)pSVar12[4].data + 0x3d);
          puVar17[2] = *(undefined1 *)((longlong)pSVar12[4].data + 0x3e);
          puVar17[3] = (char)(uVar24 + 0x20 >> 8);
          puVar17[4] = (char)(uVar24 + 0x20);
          puVar17 = puVar17 + uVar32 + uVar31 + 0x15;
          uVar13 = uVar13 + (uVar24 + 0x25);
          uVar33 = uVar33 + 1;
          ptr = ptr + 5;
        } while (uVar14 != uVar33);
      }
      _aesni_multi_cbc_encrypt();
      _OPENSSL_cleanse(ptr,sVar36);
      _OPENSSL_cleanse(ptr,sVar36);
    }
    break;
  case 0x1c:
    uVar13 = (ulonglong)((param_2 + 0x24 & 0xfffffff0) + 0x15);
  }
switchD_01026187_caseD_18:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}


