// Function: FUN_01028400
// Address: 01028400
// Size: 4642 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01028400(undefined8 *param_1,uint param_2,undefined1 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  size_t sVar12;
  SHA256_CTX *pSVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  byte bVar17;
  uint uVar18;
  SHA256_CTX *c;
  longlong *ptr;
  longlong lVar19;
  uint *puVar20;
  qword *pqVar21;
  uint uVar22;
  SHA256_CTX *pSVar23;
  undefined1 *puVar24;
  qword *pqVar25;
  undefined1 *puVar26;
  int unaff_ESI;
  longlong *plVar27;
  longlong lVar28;
  size_t sVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined1 *puVar34;
  void *pvVar35;
  size_t sVar36;
  uint uVar37;
  SHA256_CTX *pSVar38;
  uint uVar39;
  undefined8 uVar40;
  undefined1 local_798 [16];
  undefined1 local_788 [16];
  undefined1 local_778 [16];
  undefined1 local_768 [16];
  undefined1 local_398 [32];
  uint auStack_378 [8];
  uint auStack_358 [8];
  uint auStack_338 [8];
  uint auStack_318 [8];
  uint auStack_2f8 [8];
  uint auStack_2d8 [8];
  uint auStack_2b8 [8];
  uint auStack_298 [8];
  longlong local_278;
  undefined1 *puStack_270;
  undefined4 local_268 [2];
  undefined8 local_260;
  undefined8 uStack_258;
  longlong local_250 [35];
  longlong local_138;
  int aiStack_130 [2];
  undefined8 uStack_128;
  undefined4 auStack_120 [26];
  longlong local_b8;
  uint auStack_b0 [2];
  longlong alStack_a8 [14];
  longlong local_38;
  
  pSVar38 = (SHA256_CTX *)(ulonglong)param_2;
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  pSVar13 = (SHA256_CTX *)_EVP_CIPHER_CTX_get_cipher_data();
  sVar36 = (size_t)param_3;
  uVar14 = 0xffffffff;
  if (6 < unaff_ESI - 0x16U) goto switchD_01028457_caseD_18;
  puVar20 = &switchD_01028457::switchdataD_01029624;
  c = (SHA256_CTX *)
      ((longlong)&switchD_01028457::switchdataD_01029624 +
      (longlong)(int)(&switchD_01028457::switchdataD_01029624)[unaff_ESI - 0x16U]);
  switch(unaff_ESI) {
  case 0x16:
    if (param_2 != 0xd) break;
    uVar9 = *(ushort *)((longlong)param_1 + 0xb);
    iVar10 = _EVP_CIPHER_CTX_encrypting();
    if (iVar10 == 0) {
      uVar40 = *param_1;
      *(undefined8 *)((longlong)&pSVar13[5].Nh + 1) = *(undefined8 *)((longlong)param_1 + 5);
      pSVar13[5].Nl = (int)uVar40;
      pSVar13[5].Nh = (int)((ulonglong)uVar40 >> 0x20);
      pSVar13[5].h[6] = 0xd;
      pSVar13[5].h[7] = 0;
      uVar14 = 0x20;
      break;
    }
    uVar14 = (ulonglong)uVar9 << 0x30;
    uVar33 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28;
    *(ulonglong *)(pSVar13[5].h + 6) = uVar33;
    uVar37 = (uint)*(ushort *)((longlong)param_1 + 9) << 0x10;
    uVar37 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8;
    pSVar13[5].Nl = uVar37;
    if (0x301 < uVar37) {
      uVar14 = 0;
      if ((uint)uVar33 < 0x10) break;
      uVar37 = (uint)uVar33 - 0x10;
      uVar33 = (ulonglong)uVar37;
      uVar9 = (ushort)uVar37;
      *(ushort *)((longlong)param_1 + 0xb) = uVar9 << 8 | uVar9 >> 8;
    }
    uVar40 = *(undefined8 *)(pSVar13[3].h + 3);
    *(undefined8 *)(pSVar13[5].h + 1) = *(undefined8 *)(pSVar13[3].h + 1);
    *(undefined8 *)(pSVar13[5].h + 3) = uVar40;
    uVar40 = *(undefined8 *)&pSVar13[2].md_len;
    *(undefined8 *)(pSVar13[4].data + 0xf) = *(undefined8 *)(pSVar13[2].data + 0xf);
    *(undefined8 *)&pSVar13[4].md_len = uVar40;
    uVar40 = *(undefined8 *)(pSVar13[2].data + 0xd);
    *(undefined8 *)(pSVar13[4].data + 0xb) = *(undefined8 *)(pSVar13[2].data + 0xb);
    *(undefined8 *)(pSVar13[4].data + 0xd) = uVar40;
    uVar40 = *(undefined8 *)(pSVar13[2].h + 5);
    uVar4 = *(undefined8 *)(pSVar13[2].h + 7);
    uVar37 = pSVar13[2].Nh;
    uVar11 = pSVar13[2].data[0];
    uVar5 = *(undefined8 *)(pSVar13[2].data + 1);
    uVar6 = *(undefined8 *)(pSVar13[2].data + 3);
    uVar7 = *(undefined8 *)(pSVar13[2].data + 5);
    uVar8 = *(undefined8 *)(pSVar13[2].data + 9);
    *(undefined8 *)(pSVar13[4].data + 7) = *(undefined8 *)(pSVar13[2].data + 7);
    *(undefined8 *)(pSVar13[4].data + 9) = uVar8;
    *(undefined8 *)(pSVar13[4].data + 3) = uVar6;
    *(undefined8 *)(pSVar13[4].data + 5) = uVar7;
    pSVar13[4].Nh = uVar37;
    pSVar13[4].data[0] = uVar11;
    *(undefined8 *)(pSVar13[4].data + 1) = uVar5;
    *(undefined8 *)(pSVar13[4].h + 5) = uVar40;
    *(undefined8 *)(pSVar13[4].h + 7) = uVar4;
    if ((ulonglong)pSVar13[5].h[3] == 0) {
      pvVar35 = (void *)((longlong)&MACH_HEADER.filetype + 1);
LAB_01029411:
      _SHA256_Update(c,pvVar35,sVar36);
    }
    else {
      puVar26 = (undefined1 *)(0x40 - (ulonglong)pSVar13[5].h[3]);
      if (&MACH_HEADER.filetype < puVar26) {
        puVar26 = (undefined1 *)((longlong)&MACH_HEADER.filetype + 1);
      }
      _SHA256_Update(c,puVar26,sVar36);
      pvVar35 = (void *)(0xd - (longlong)puVar26);
      if (((ulonglong)pvVar35 & 0xffffffffffffffc0) != 0) {
        _sha256_block_data_order();
        uVar11 = (int)((ulonglong)pvVar35 >> 0x1d) + pSVar13[4].data[4];
        pSVar13[4].data[4] = uVar11;
        uVar30 = (int)((ulonglong)pvVar35 & 0xffffffffffffffc0) * 8;
        puVar20 = pSVar13[4].data + 3;
        uVar37 = *puVar20;
        *puVar20 = *puVar20 + uVar30;
        if (CARRY4(uVar37,uVar30)) {
          pSVar13[4].data[4] = uVar11 + 1;
        }
      }
      if (pvVar35 != (void *)0x0) goto LAB_01029411;
    }
    uVar14 = (ulonglong)(((int)uVar33 + 0x30U & 0xfffffff0) - (int)uVar33);
    break;
  case 0x17:
    local_768 = (undefined1  [16])0x0;
    local_778 = (undefined1  [16])0x0;
    local_788 = (undefined1  [16])0x0;
    local_798 = (undefined1  [16])0x0;
    if ((int)param_2 < 0) {
LAB_01028b0c:
      uVar14 = 0xffffffff;
      break;
    }
    if (param_2 < 0x41) {
      c = (SHA256_CTX *)&segment_command_00000020.vmsize;
      ___memcpy_chk(0x40,pSVar38);
    }
    else {
      _SHA256_Init(c);
      if ((ulonglong)pSVar13[3].h[3] != 0) {
        pSVar23 = (SHA256_CTX *)(0x40 - (ulonglong)pSVar13[3].h[3]);
        if (pSVar38 < pSVar23) {
          pSVar23 = pSVar38;
        }
        puVar20 = pSVar23->h;
        _SHA256_Update(c,pSVar23,sVar36);
        pSVar38 = (SHA256_CTX *)((longlong)pSVar38 - (longlong)pSVar23);
      }
      pSVar23 = (SHA256_CTX *)(ulonglong)((uint)pSVar38 & 0x3f);
      if (((ulonglong)pSVar38 & 0xffffffffffffffc0) != 0) {
        puVar20 = (uint *)((ulonglong)pSVar38 >> 6);
        _sha256_block_data_order();
        uVar30 = (int)((ulonglong)pSVar38 >> 0x1d) + pSVar13[2].data[4];
        pSVar13[2].data[4] = uVar30;
        uVar11 = (int)((ulonglong)pSVar38 & 0xffffffffffffffc0) * 8;
        puVar1 = pSVar13[2].data + 3;
        uVar37 = *puVar1;
        *puVar1 = *puVar1 + uVar11;
        if (CARRY4(uVar37,uVar11)) {
          pSVar13[2].data[4] = uVar30 + 1;
        }
      }
      if (pSVar23 != (SHA256_CTX *)0x0) {
        _SHA256_Update(c,pSVar23,sVar36);
        puVar20 = pSVar23->h;
      }
      _SHA256_Final((uchar *)c,(SHA256_CTX *)puVar20);
    }
    local_798._4_4_ = local_798._4_4_ ^ _UNK_024042f4;
    local_798._0_4_ = local_798._0_4_ ^ _DAT_024042f0;
    local_798._8_4_ = local_798._8_4_ ^ _UNK_024042f8;
    local_798._12_4_ = local_798._12_4_ ^ _UNK_024042fc;
    local_788._4_4_ = local_788._4_4_ ^ _UNK_024042f4;
    local_788._0_4_ = local_788._0_4_ ^ _DAT_024042f0;
    local_788._8_4_ = local_788._8_4_ ^ _UNK_024042f8;
    local_788._12_4_ = local_788._12_4_ ^ _UNK_024042fc;
    local_778._4_4_ = local_778._4_4_ ^ _UNK_024042f4;
    local_778._0_4_ = local_778._0_4_ ^ _DAT_024042f0;
    local_778._8_4_ = local_778._8_4_ ^ _UNK_024042f8;
    local_778._12_4_ = local_778._12_4_ ^ _UNK_024042fc;
    local_768._4_4_ = _UNK_024042f4 ^ local_768._4_4_;
    local_768._0_4_ = _DAT_024042f0 ^ local_768._0_4_;
    local_768._8_4_ = _UNK_024042f8 ^ local_768._8_4_;
    local_768._12_4_ = _UNK_024042fc ^ local_768._12_4_;
    _SHA256_Init(c);
    uVar37 = pSVar13[3].h[3];
    if ((ulonglong)uVar37 == 0) {
      pvVar35 = (void *)0x0;
      uVar14 = 0x40;
LAB_01028c71:
      _sha256_block_data_order();
      uVar11 = pSVar13[2].data[4];
      uVar30 = (int)uVar14 * 8;
      puVar20 = pSVar13[2].data + 3;
      uVar37 = *puVar20;
      *puVar20 = *puVar20 + uVar30;
      c = pSVar13;
      if (CARRY4(uVar37,uVar30)) {
        pSVar13[2].data[4] = uVar11 + 1;
      }
    }
    else {
      pqVar25 = (qword *)(0x40 - (ulonglong)uVar37);
      if (0x40 < uVar37) {
        pqVar25 = &segment_command_00000020.vmsize;
      }
      _SHA256_Update(c,pqVar25,sVar36);
      pvVar35 = (void *)(ulonglong)((uint)(0x40U - (longlong)pqVar25) & 0x3f);
      uVar14 = 0x40U - (longlong)pqVar25 & 0xffffffffffffffc0;
      if (uVar14 != 0) goto LAB_01028c71;
    }
    if (pvVar35 != (void *)0x0) {
      _SHA256_Update(c,pvVar35,sVar36);
    }
    local_798._8_8_ = local_798._8_8_ ^ _UNK_024040e8;
    local_798._0_8_ = local_798._0_8_ ^ _DAT_024040e0;
    local_788._8_8_ = local_788._8_8_ ^ _UNK_024040e8;
    local_788._0_8_ = local_788._0_8_ ^ _DAT_024040e0;
    local_778._8_8_ = local_778._8_8_ ^ _UNK_024040e8;
    local_778._0_8_ = local_778._0_8_ ^ _DAT_024040e0;
    local_768._8_8_ = _UNK_024040e8 ^ local_768._8_8_;
    local_768._0_8_ = _DAT_024040e0 ^ local_768._0_8_;
    _SHA256_Init(c);
    uVar37 = pSVar13[4].h[3];
    if ((ulonglong)uVar37 == 0) {
      pvVar35 = (void *)0x0;
      uVar14 = 0x40;
LAB_01028d86:
      sVar12 = 1;
      _sha256_block_data_order();
      uVar11 = pSVar13[3].data[4];
      uVar30 = (int)uVar14 * 8;
      puVar20 = pSVar13[3].data + 3;
      uVar37 = *puVar20;
      *puVar20 = *puVar20 + uVar30;
      c = pSVar13;
      if (CARRY4(uVar37,uVar30)) {
        pSVar13[3].data[4] = uVar11 + 1;
      }
    }
    else {
      pqVar25 = (qword *)(0x40 - (ulonglong)uVar37);
      if (0x40 < uVar37) {
        pqVar25 = &segment_command_00000020.vmsize;
      }
      pqVar21 = pqVar25;
      _SHA256_Update(c,pqVar25,sVar36);
      sVar12 = (size_t)pqVar21;
      pvVar35 = (void *)(ulonglong)((uint)(0x40U - (longlong)pqVar25) & 0x3f);
      uVar14 = 0x40U - (longlong)pqVar25 & 0xffffffffffffffc0;
      if (uVar14 != 0) goto LAB_01028d86;
    }
    if (pvVar35 != (void *)0x0) {
      _SHA256_Update(c,pvVar35,sVar36);
      sVar12 = (size_t)pvVar35;
    }
    _OPENSSL_cleanse(c,sVar12);
    uVar14 = 1;
    break;
  case 0x19:
    if (((int)param_2 < 0) || (param_2 < 0x20)) break;
    uVar9 = *(ushort *)(param_1[1] + 0xb);
    iVar10 = _EVP_CIPHER_CTX_encrypting();
    if (iVar10 == 0) goto LAB_01028b0c;
    uVar37 = (uint)*(ushort *)(param_1[1] + 9) << 0x10;
    uVar14 = 0xffffffff;
    if ((uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8) < 0x302) break;
    uVar37 = (uint)uVar9 << 0x10;
    uVar37 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8;
    if (uVar37 == 0) {
      uVar37 = *(uint *)(param_1 + 3) - 4;
      c = (SHA256_CTX *)(ulonglong)uVar37;
      if (7 < uVar37) break;
      uVar11 = *(uint *)(param_1 + 3) >> 2;
      uVar37 = *(uint *)(param_1 + 2);
    }
    else {
      uVar14 = 0;
      if (uVar37 < 0x1000) break;
      uVar11 = 1;
      if (0x1fff < uVar37) {
        uVar11 = 2 - ((DAT_0280304c._4_1_ & 0x20) == 0);
      }
    }
    uVar40 = *(undefined8 *)(pSVar13[3].h + 3);
    *(undefined8 *)(pSVar13[5].h + 1) = *(undefined8 *)(pSVar13[3].h + 1);
    *(undefined8 *)(pSVar13[5].h + 3) = uVar40;
    uVar40 = *(undefined8 *)&pSVar13[2].md_len;
    *(undefined8 *)(pSVar13[4].data + 0xf) = *(undefined8 *)(pSVar13[2].data + 0xf);
    *(undefined8 *)&pSVar13[4].md_len = uVar40;
    uVar40 = *(undefined8 *)(pSVar13[2].data + 0xd);
    *(undefined8 *)(pSVar13[4].data + 0xb) = *(undefined8 *)(pSVar13[2].data + 0xb);
    *(undefined8 *)(pSVar13[4].data + 0xd) = uVar40;
    uVar40 = *(undefined8 *)(pSVar13[2].h + 5);
    uVar4 = *(undefined8 *)(pSVar13[2].h + 7);
    uVar30 = pSVar13[2].Nh;
    uVar39 = pSVar13[2].data[0];
    uVar5 = *(undefined8 *)(pSVar13[2].data + 1);
    uVar6 = *(undefined8 *)(pSVar13[2].data + 3);
    uVar7 = *(undefined8 *)(pSVar13[2].data + 5);
    uVar8 = *(undefined8 *)(pSVar13[2].data + 9);
    *(undefined8 *)(pSVar13[4].data + 7) = *(undefined8 *)(pSVar13[2].data + 7);
    *(undefined8 *)(pSVar13[4].data + 9) = uVar8;
    *(undefined8 *)(pSVar13[4].data + 3) = uVar6;
    *(undefined8 *)(pSVar13[4].data + 5) = uVar7;
    pSVar13[4].Nh = uVar30;
    pSVar13[4].data[0] = uVar39;
    *(undefined8 *)(pSVar13[4].data + 1) = uVar5;
    *(undefined8 *)(pSVar13[4].h + 5) = uVar40;
    *(undefined8 *)(pSVar13[4].h + 7) = uVar4;
    if ((ulonglong)pSVar13[5].h[3] == 0) {
      pvVar35 = (void *)((longlong)&MACH_HEADER.filetype + 1);
LAB_0102959a:
      _SHA256_Update(c,pvVar35,sVar36);
    }
    else {
      puVar26 = (undefined1 *)(0x40 - (ulonglong)pSVar13[5].h[3]);
      if (&MACH_HEADER.filetype < puVar26) {
        puVar26 = (undefined1 *)((longlong)&MACH_HEADER.filetype + 1);
      }
      _SHA256_Update(c,puVar26,sVar36);
      pvVar35 = (void *)(0xd - (longlong)puVar26);
      if (((ulonglong)pvVar35 & 0xffffffffffffffc0) != 0) {
        _sha256_block_data_order();
        uVar39 = (int)((ulonglong)pvVar35 >> 0x1d) + pSVar13[4].data[4];
        pSVar13[4].data[4] = uVar39;
        uVar22 = (int)((ulonglong)pvVar35 & 0xffffffffffffffc0) * 8;
        puVar20 = pSVar13[4].data + 3;
        uVar30 = *puVar20;
        *puVar20 = *puVar20 + uVar22;
        if (CARRY4(uVar30,uVar22)) {
          pSVar13[4].data[4] = uVar39 + 1;
        }
      }
      if (pvVar35 != (void *)0x0) goto LAB_0102959a;
    }
    bVar17 = (char)uVar11 + 1;
    uVar30 = uVar37 >> (bVar17 & 0x1f);
    uVar37 = (uVar37 + uVar30) - (uVar30 << (bVar17 & 0x1f));
    if ((uVar30 < uVar37) && (uVar39 = uVar11 * 4 - 1, (uVar37 + 0x16 & 0x3f) < uVar39)) {
      uVar30 = uVar30 + 1;
      uVar37 = uVar37 - uVar39;
    }
    uVar30 = uVar30 + 0x30 & 0xfffffff0;
    *(uint *)(param_1 + 3) = uVar11 * 4;
    uVar14 = (ulonglong)
             (((uVar37 + 0x30 & 0xfffffff0) - uVar30) + (uVar30 + 0x15 << (bVar17 & 0x1f)));
    break;
  case 0x1a:
    puVar26 = (undefined1 *)*param_1;
    lVar28 = param_1[1];
    uVar40 = param_1[2];
    uVar37 = *(uint *)(param_1 + 3);
    sVar36 = uVar37 >> 2;
    iVar10 = _RAND_bytes((uchar *)c,0x1029624);
    if (iVar10 < 1) {
      uVar14 = 0;
    }
    else {
      bVar17 = (char)sVar36 + 1;
      uVar11 = (uint)uVar40 >> (bVar17 & 0x1f);
      uVar30 = uVar37 & 0xfffffffc;
      uVar14 = (ulonglong)uVar30;
      uVar39 = ((uint)uVar40 + uVar11) - (uVar11 << (bVar17 & 0x1f));
      ptr = (longlong *)(ulonglong)uVar39;
      if ((uVar11 < uVar39) && ((uVar39 + 0x16 & 0x3f) < uVar30 - 1)) {
        uVar11 = uVar11 + 1;
        ptr = (longlong *)(ulonglong)(uVar39 - (uVar30 - 1));
      }
      uVar33 = (ulonglong)((uint)local_398 & 0x10);
      local_b8 = lVar28;
      local_278 = lVar28;
      puVar34 = puVar26 + 0x15;
      puStack_270 = puVar34;
      *(undefined8 *)(puVar26 + 5) = local_798._0_8_;
      *(undefined8 *)(puVar26 + 0xd) = local_798._8_8_;
      local_260 = local_798._0_8_;
      uStack_258 = local_798._8_8_;
      if (3 < uVar37) {
        uVar15 = (ulonglong)((uVar11 + 0x30 & 0xfffffff0) + 0x15);
        uVar31 = 2;
        if (2 < uVar30) {
          uVar31 = (ulonglong)uVar37 & 0xfffffffffffffffc;
        }
        plVar27 = local_250;
        param_3 = local_788;
        lVar19 = 0;
        while( true ) {
          lVar28 = lVar28 + (ulonglong)uVar11;
          *(longlong *)((longlong)alStack_a8 + lVar19) = lVar28;
          *plVar27 = lVar28;
          plVar27[1] = (longlong)(puVar34 + uVar15);
          uVar40 = *(undefined8 *)(local_788 + lVar19 + 8);
          *(undefined8 *)(puVar34 + (uVar15 - 0x10)) = *(undefined8 *)(param_3 + lVar19);
          *(undefined8 *)((longlong)(puVar34 + (uVar15 - 0x10)) + 8) = uVar40;
          lVar3 = *(longlong *)(local_788 + lVar19 + 8);
          plVar27[3] = *(longlong *)(param_3 + lVar19);
          plVar27[4] = lVar3;
          if (uVar31 * 0x10 + -0x20 == lVar19) break;
          puVar34 = (undefined1 *)plVar27[1];
          lVar19 = lVar19 + 0x10;
          plVar27 = plVar27 + 5;
        }
      }
      uVar39 = uVar30 - 1;
      local_798._0_8_ = *(undefined8 *)(pSVar13[4].data + 5);
      uVar22 = (uint)ptr;
      if (3 < uVar37) {
        uVar31 = (ulonglong)local_798._0_8_ >> 0x38 | (local_798._0_8_ & 0xff000000000000) >> 0x28 |
                 (local_798._0_8_ & 0xff0000000000) >> 0x18 | (local_798._0_8_ & 0xff00000000) >> 8
                 | (local_798._0_8_ & 0xff000000) << 8 | (local_798._0_8_ & 0xff0000) << 0x18 |
                 (local_798._0_8_ & 0xff00) << 0x28 | local_798._0_8_ << 0x38;
        uVar15 = 1;
        if (1 < uVar30) {
          uVar15 = uVar14;
        }
        puVar20 = (uint *)((longlong)auStack_298 - uVar33);
        param_3 = (undefined1 *)((ulonglong)uVar39 << 4);
        lVar28 = 0;
        puVar24 = (undefined1 *)0x0;
        do {
          uVar18 = uVar11;
          if (param_3 == puVar24) {
            uVar18 = uVar22;
          }
          puVar20[-0x38] = pSVar13[4].h[5];
          puVar20[-0x30] = pSVar13[4].h[6];
          puVar20[-0x28] = pSVar13[4].h[7];
          puVar20[-0x20] = pSVar13[4].Nl;
          puVar20[-0x18] = pSVar13[4].Nh;
          puVar20[-0x10] = pSVar13[4].data[0];
          puVar20[-8] = pSVar13[4].data[1];
          *puVar20 = pSVar13[4].data[2];
          *(ulonglong *)(local_798 + (longlong)puVar24 * 8) =
               uVar31 >> 0x38 | (uVar31 & 0xff000000000000) >> 0x28 |
               (uVar31 & 0xff0000000000) >> 0x18 | (uVar31 & 0xff00000000) >> 8 |
               (uVar31 & 0xff000000) << 8 | (uVar31 & 0xff0000) << 0x18 | (uVar31 & 0xff00) << 0x28
               | uVar31 << 0x38;
          local_798[(longlong)puVar24 * 8 + 8] = (char)pSVar13[4].data[7];
          local_788[(longlong)puVar24 * 8 + -7] = *(undefined1 *)((longlong)pSVar13[4].data + 0x1d);
          local_788[(longlong)puVar24 * 8 + -6] = *(undefined1 *)((longlong)pSVar13[4].data + 0x1e);
          local_788[(longlong)puVar24 * 8 + -5] = (char)(uVar18 >> 8);
          local_788[(longlong)puVar24 * 8 + -4] = (char)uVar18;
          puVar2 = *(undefined8 **)((longlong)&local_b8 + (longlong)puVar24);
          uVar40 = puVar2[1];
          uVar4 = puVar2[2];
          uVar5 = puVar2[3];
          uVar6 = puVar2[4];
          uVar7 = puVar2[5];
          *(undefined8 *)(local_788 + (longlong)puVar24 * 8 + -3) = *puVar2;
          *(undefined8 *)(local_788 + (longlong)puVar24 * 8 + 5) = uVar40;
          *(undefined8 *)(local_778 + (longlong)puVar24 * 8 + -3) = uVar4;
          *(undefined8 *)(local_778 + (longlong)puVar24 * 8 + 5) = uVar5;
          *(undefined8 *)(local_768 + (longlong)puVar24 * 8 + -3) = uVar6;
          *(undefined8 *)(local_768 + (longlong)puVar24 * 8 + 5) = uVar7;
          *(undefined4 *)(local_768 + (longlong)puVar24 * 8 + 0xc) =
               *(undefined4 *)((longlong)puVar2 + 0x2f);
          *(longlong *)((longlong)&local_b8 + (longlong)puVar24) = (longlong)puVar2 + 0x33;
          uVar18 = uVar18 - 0x33 >> 6;
          puVar34 = (undefined1 *)(ulonglong)uVar18;
          *(uint *)((longlong)auStack_b0 + (longlong)puVar24) = uVar18;
          *(undefined1 **)((longlong)&local_138 + (longlong)puVar24) = local_798 + lVar28;
          *(undefined4 *)((longlong)aiStack_130 + (longlong)puVar24) = 1;
          puVar24 = puVar24 + 0x10;
          lVar28 = lVar28 + 0x80;
          uVar31 = uVar31 + 1;
          puVar20 = puVar20 + 1;
        } while ((undefined1 *)(uVar15 * 0x10) != puVar24);
      }
      lVar28 = _sha256_multi_block(puVar34,sVar36);
      uVar18 = uVar11;
      if (uVar22 < uVar11) {
        uVar18 = uVar22;
      }
      sVar12 = 0;
      if (0x83f < uVar18 - 0x33) {
        uVar18 = uVar18 - 0x33 >> 6;
        if (uVar37 < 4) {
          sVar12 = 0;
          do {
            _sha256_multi_block(lVar28,0);
            lVar28 = _aesni_multi_cbc_encrypt();
            sVar12 = sVar12 + 0x800;
            uVar18 = uVar18 - 0x20;
          } while (0x20 < uVar18);
        }
        else {
          uVar15 = 1;
          if (1 < uVar30) {
            uVar15 = uVar14;
          }
          puVar16 = local_268;
          lVar19 = 0;
          do {
            *(undefined8 *)((longlong)aiStack_130 + lVar19 + -8) =
                 *(undefined8 *)((longlong)auStack_b0 + lVar19 + -8);
            *(undefined4 *)((longlong)aiStack_130 + lVar19) = 0x20;
            *puVar16 = 0x80;
            *(undefined8 *)((longlong)auStack_120 + lVar19 + -8) =
                 *(undefined8 *)((longlong)alStack_a8 + lVar19);
            *(undefined4 *)((longlong)auStack_120 + lVar19) = 0x20;
            puVar16[10] = 0x80;
            lVar19 = lVar19 + 0x20;
            puVar16 = puVar16 + 0x14;
          } while (uVar15 * 0x10 != lVar19);
          sVar12 = 0;
          do {
            uVar40 = _sha256_multi_block(lVar19,sVar36);
            plVar27 = &local_278;
            _aesni_multi_cbc_encrypt(uVar40,sVar36);
            lVar19 = 0;
            do {
              lVar28 = *(longlong *)((longlong)auStack_b0 + lVar19 + -8) + 0x800;
              *(longlong *)((longlong)auStack_b0 + lVar19 + -8) = lVar28;
              *(longlong *)((longlong)aiStack_130 + lVar19 + -8) = lVar28;
              *(int *)((longlong)auStack_b0 + lVar19) =
                   *(int *)((longlong)auStack_b0 + lVar19) + -0x20;
              *(undefined4 *)((longlong)aiStack_130 + lVar19) = 0x20;
              lVar3 = plVar27[1];
              *plVar27 = *plVar27 + _DAT_024040d0;
              plVar27[1] = lVar3 + _UNK_024040d8;
              *(undefined4 *)(plVar27 + 2) = 0x80;
              lVar28 = *(longlong *)(lVar3 + 0x7f0);
              lVar3 = *(longlong *)(lVar3 + 0x7f8);
              plVar27[3] = lVar28;
              plVar27[4] = lVar3;
              lVar19 = lVar19 + 0x10;
              plVar27 = plVar27 + 5;
            } while (uVar15 * 0x10 != lVar19);
            sVar12 = sVar12 + 0x800;
            uVar18 = uVar18 - 0x20;
          } while (0x20 < uVar18);
        }
      }
      _sha256_multi_block(lVar28,sVar36);
      ___bzero();
      if (3 < uVar37) {
        uVar15 = 1;
        if (1 < uVar30) {
          uVar15 = uVar14;
        }
        lVar28 = 0;
        puVar34 = local_798;
        do {
          uVar18 = uVar11;
          if ((ulonglong)uVar39 << 4 == lVar28) {
            uVar18 = uVar22;
          }
          uVar32 = (uVar18 - (*(int *)((longlong)auStack_b0 + lVar28) * 0x40 + sVar12)) - 0x33;
          _memcpy(ptr,(void *)(ulonglong)uVar32,(size_t)param_3);
          (local_798 + (longlong)(ulonglong)uVar32)[lVar28 * 8] = 0x80;
          uVar18 = uVar18 * 8 + 0x268;
          *(uint *)(local_768 + lVar28 * 8 + (ulonglong)(uVar32 >= 0x38) * 0x40 + 0xc) =
               uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
               uVar18 * 0x1000000;
          *(uint *)((longlong)aiStack_130 + lVar28) = 2 - (uint)(uVar32 < 0x38);
          *(undefined1 **)((longlong)aiStack_130 + lVar28 + -8) = puVar34;
          lVar28 = lVar28 + 0x10;
          puVar34 = puVar34 + 0x80;
        } while (uVar15 << 4 != lVar28);
      }
      _sha256_multi_block(ptr,sVar36);
      puVar20 = (uint *)local_798;
      uVar40 = ___bzero();
      if (uVar37 < 4) {
        uVar14 = 0;
        _sha256_multi_block(uVar40,0);
      }
      else {
        uVar15 = 1;
        if (1 < uVar30) {
          uVar15 = uVar14;
        }
        lVar28 = -uVar33;
        pvVar35 = (void *)((longlong)auStack_298 + lVar28);
        lVar19 = 0;
        do {
          uVar37 = *(uint *)((longlong)auStack_378 + lVar19 + lVar28);
          *puVar20 = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                     uVar37 << 0x18;
          *(uint *)((longlong)auStack_378 + lVar19 + lVar28) = pSVar13[3].h[5];
          uVar37 = *(uint *)((longlong)auStack_358 + lVar19 + lVar28);
          puVar20[1] = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                       uVar37 << 0x18;
          *(uint *)((longlong)auStack_358 + lVar19 + lVar28) = pSVar13[3].h[6];
          uVar37 = *(uint *)((longlong)auStack_338 + lVar19 + lVar28);
          puVar20[2] = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                       uVar37 << 0x18;
          *(uint *)((longlong)auStack_338 + lVar19 + lVar28) = pSVar13[3].h[7];
          uVar37 = *(uint *)((longlong)auStack_318 + lVar19 + lVar28);
          puVar20[3] = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                       uVar37 << 0x18;
          *(uint *)((longlong)auStack_318 + lVar19 + lVar28) = pSVar13[3].Nl;
          uVar37 = *(uint *)((longlong)auStack_2f8 + lVar19 + lVar28);
          puVar20[4] = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                       uVar37 << 0x18;
          *(uint *)((longlong)auStack_2f8 + lVar19 + lVar28) = pSVar13[3].Nh;
          uVar37 = *(uint *)((longlong)auStack_2d8 + lVar19 + lVar28);
          puVar20[5] = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                       uVar37 << 0x18;
          *(uint *)((longlong)auStack_2d8 + lVar19 + lVar28) = pSVar13[3].data[0];
          uVar37 = *(uint *)((longlong)auStack_2b8 + lVar19 + lVar28);
          puVar20[6] = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                       uVar37 << 0x18;
          *(uint *)((longlong)auStack_2b8 + lVar19 + lVar28) = pSVar13[3].data[1];
          uVar37 = *(uint *)((longlong)pvVar35 + lVar19);
          puVar20[7] = uVar37 >> 0x18 | (uVar37 & 0xff0000) >> 8 | (uVar37 & 0xff00) << 8 |
                       uVar37 << 0x18;
          *(uint *)((longlong)pvVar35 + lVar19) = pSVar13[3].data[2];
          *(undefined1 *)(puVar20 + 8) = 0x80;
          puVar20[0xf] = 0x30000;
          *(uint **)(aiStack_130 + lVar19 + -2) = puVar20;
          aiStack_130[lVar19] = 1;
          lVar19 = lVar19 + 4;
          puVar20 = puVar20 + 0x20;
        } while (uVar15 * 4 - lVar19 != 0);
        _sha256_multi_block(lVar19,sVar36);
        ptr = &local_278;
        uVar33 = 0;
        uVar14 = 0;
        do {
          uVar37 = uVar11;
          if (uVar39 == uVar33) {
            uVar37 = uVar22;
          }
          sVar29 = sVar12;
          _memcpy(ptr,(void *)(ulonglong)(uVar37 - sVar12),sVar12);
          *ptr = ptr[1];
          uVar31 = (ulonglong)(uVar37 + 0x15);
          uVar30 = *(uint *)((longlong)auStack_378 + uVar33 * 4 + lVar28);
          *(uint *)(puVar26 + uVar31) =
               uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
          uVar30 = *(uint *)((longlong)auStack_358 + uVar33 * 4 + lVar28);
          *(uint *)(puVar26 + uVar31 + 4) =
               uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
          uVar30 = *(uint *)((longlong)auStack_338 + uVar33 * 4 + lVar28);
          *(uint *)(puVar26 + uVar31 + 8) =
               uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
          uVar30 = *(uint *)((longlong)auStack_318 + uVar33 * 4 + lVar28);
          *(uint *)(puVar26 + uVar31 + 0xc) =
               uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
          uVar30 = *(uint *)((longlong)auStack_2f8 + uVar33 * 4 + lVar28);
          *(uint *)(puVar26 + uVar31 + 0x10) =
               uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
          uVar30 = *(uint *)((longlong)auStack_2d8 + uVar33 * 4 + lVar28);
          *(uint *)(puVar26 + uVar31 + 0x14) =
               uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
          uVar30 = *(uint *)((longlong)auStack_2b8 + uVar33 * 4 + lVar28);
          *(uint *)(puVar26 + uVar31 + 0x18) =
               uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
          uVar30 = *(uint *)((longlong)pvVar35 + uVar33 * 4);
          *(uint *)(puVar26 + uVar31 + 0x1c) =
               uVar30 >> 0x18 | (uVar30 & 0xff0000) >> 8 | (uVar30 & 0xff00) << 8 | uVar30 << 0x18;
          uVar30 = uVar37 & 0xf ^ 0xf;
          _memset(pvVar35,uVar30 + 1,sVar29);
          uVar37 = uVar37 & 0xfffffff0;
          *(uint *)(ptr + 2) = (uVar37 - sVar12) + 0x30 >> 4;
          *puVar26 = (char)pSVar13[4].data[7];
          puVar26[1] = *(undefined1 *)((longlong)pSVar13[4].data + 0x1d);
          puVar26[2] = *(undefined1 *)((longlong)pSVar13[4].data + 0x1e);
          puVar26[3] = (char)(uVar37 + 0x40 >> 8);
          puVar26[4] = (char)(uVar37 + 0x40);
          puVar26 = puVar26 + uVar31 + uVar30 + 0x21;
          uVar14 = uVar14 + (uVar37 + 0x45);
          uVar33 = uVar33 + 1;
          ptr = ptr + 5;
        } while (uVar15 != uVar33);
      }
      _aesni_multi_cbc_encrypt();
      _OPENSSL_cleanse(ptr,sVar36);
      _OPENSSL_cleanse(ptr,sVar36);
    }
    break;
  case 0x1c:
    uVar14 = (ulonglong)((param_2 + 0x30 & 0xfffffff0) + 0x15);
  }
switchD_01028457_caseD_18:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar14;
}


