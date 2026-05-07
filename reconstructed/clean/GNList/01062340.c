// Function: FUN_01062340
// Address: 01062340
// Size: 5374 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


bool FUN_01062340(uint64_t param_1,uint64_t param_2,uint64_t param_3,uchar *param_4)

{
  EVP_CIPHER_CTX *ctx;
  void*puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  uint64_t *puVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  char cVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint uVar22;
  int iVar23;
  EVP_CIPHER_CTX *pEVar24;
  uint64_t uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint enc;
  uint uVar29;
  uint inl;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int64_t lVar33;
  int64_t lVar34;
  uint64_t arg1;
  uint64_t uVar35;
  int64_t lVar36;
  uint64_t uVar37;
  int64_t this_ptr;
  int *piVar38;
  uint64_t uVar39;
  uchar *puVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  bool bVar44;
  bool bVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_res8;
  uint local_f4;
  uchar *local_f0;
  int64_t local_e8;
  uint local_d8;
  int local_d4;
  uint64_t local_c8 [6];
  EVP_CIPHER *local_98;
  ENGINE *pEStack_90;
  uint8_t local_88;
  uint8_t local_87;
  uint8_t local_86;
  uint8_t local_85;
  uint64_t local_84;
  uint32_t local_7c;
  uint64_t local_78;
  uint64_t uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uchar local_58;
  uchar uStack_57;
  uchar uStack_56;
  uchar uStack_55;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uchar local_48;
  uchar uStack_47;
  uchar uStack_46;
  uchar uStack_45;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  void *local_38;
  
  local_38 = *(void **)PTR____stack_chk_guard_024a9898;
  local_f4 = 0x10;
  local_98 = *(EVP_CIPHER **)(this_ptr + 0xf8);
  pEStack_90 = *(ENGINE **)(this_ptr + 0x100);
  uVar41 = *(byte *)(this_ptr + 0x107) + 1;
  *(char *)(this_ptr + 0x107) = (char)uVar41;
  uVar47 = (uint)*(byte *)(this_ptr + 0x106) + (uVar41 >> 8);
  *(char *)(this_ptr + 0x106) = (char)uVar47;
  uVar43 = (uint)*(byte *)(this_ptr + 0x105) + (uVar47 >> 8);
  *(char *)(this_ptr + 0x105) = (char)uVar43;
  uVar42 = (uint)*(byte *)(this_ptr + 0x104) + (uVar43 >> 8);
  *(char *)(this_ptr + 0x104) = (char)uVar42;
  uVar46 = (uint)*(byte *)(this_ptr + 0x103) + (uVar42 >> 8);
  *(char *)(this_ptr + 0x103) = (char)uVar46;
  uVar48 = (uint)*(byte *)(this_ptr + 0x102) + (uVar46 >> 8);
  *(char *)(this_ptr + 0x102) = (char)uVar48;
  uVar26 = (uint)*(byte *)(this_ptr + 0x101) + (uVar48 >> 8);
  *(char *)(this_ptr + 0x101) = (char)uVar26;
  uVar27 = (uint)*(byte *)(this_ptr + 0x100) + (uVar26 >> 8);
  *(char *)(this_ptr + 0x100) = (char)uVar27;
  uVar28 = (uint)*(byte *)(this_ptr + 0xff) + (uVar27 >> 8);
  *(char *)(this_ptr + 0xff) = (char)uVar28;
  enc = (uint)*(byte *)(this_ptr + 0xfe) + (uVar28 >> 8);
  *(char *)(this_ptr + 0xfe) = (char)enc;
  uVar29 = (uint)*(byte *)(this_ptr + 0xfd) + (enc >> 8);
  *(char *)(this_ptr + 0xfd) = (char)uVar29;
  inl = (uint)*(byte *)(this_ptr + 0xfc) + (uVar29 >> 8);
  *(char *)(this_ptr + 0xfc) = (char)inl;
  uVar30 = (uint)*(byte *)(this_ptr + 0xfb) + (inl >> 8);
  *(char *)(this_ptr + 0xfb) = (char)uVar30;
  uVar31 = (uint)*(byte *)(this_ptr + 0xfa) + (uVar30 >> 8);
  *(char *)(this_ptr + 0xfa) = (char)uVar31;
  uVar32 = (uint)*(byte *)(this_ptr + 0xf9) + (uVar31 >> 8);
  *(char *)(this_ptr + 0xf9) = (char)uVar32;
  cVar19 = (char)(uVar32 >> 8) + *(char *)(this_ptr + 0xf8);
  *(char *)(this_ptr + 0xf8) = cVar19;
  local_88 = *(void*)(this_ptr + 0xf8);
  local_87 = *(void*)(this_ptr + 0xf9);
  local_86 = *(void*)(this_ptr + 0xfa);
  local_85 = *(void*)(this_ptr + 0xfb);
  local_84 = *(void*)(this_ptr + 0xfc);
  local_7c = *(void*)(this_ptr + 0x104);
  local_e8 = this_ptr + 0xa8;
  local_f0 = (uchar *)(this_ptr + 0xf8);
  uVar22 = 0x20;
  if (*(int64_t *)(this_ptr + 0xd0) != 0x10) {
    uVar22 = (uVar41 & 0xff) + 1;
    *(char *)(this_ptr + 0x107) = (char)uVar22;
    uVar22 = (uVar47 & 0xff) + (uVar22 >> 8);
    *(char *)(this_ptr + 0x106) = (char)uVar22;
    uVar22 = (uVar43 & 0xff) + (uVar22 >> 8);
    *(char *)(this_ptr + 0x105) = (char)uVar22;
    uVar22 = (uVar42 & 0xff) + (uVar22 >> 8);
    *(char *)(this_ptr + 0x104) = (char)uVar22;
    uVar22 = (uVar46 & 0xff) + (uVar22 >> 8);
    *(char *)(this_ptr + 0x103) = (char)uVar22;
    uVar22 = (uVar48 & 0xff) + (uVar22 >> 8);
    *(char *)(this_ptr + 0x102) = (char)uVar22;
    uVar26 = (uVar26 & 0xff) + (uVar22 >> 8);
    *(char *)(this_ptr + 0x101) = (char)uVar26;
    uVar26 = (uVar27 & 0xff) + (uVar26 >> 8);
    *(char *)(this_ptr + 0x100) = (char)uVar26;
    uVar26 = (uVar28 & 0xff) + (uVar26 >> 8);
    *(char *)(this_ptr + 0xff) = (char)uVar26;
    uVar26 = (enc & 0xff) + (uVar26 >> 8);
    *(char *)(this_ptr + 0xfe) = (char)uVar26;
    uVar26 = (uVar29 & 0xff) + (uVar26 >> 8);
    *(char *)(this_ptr + 0xfd) = (char)uVar26;
    uVar26 = (inl & 0xff) + (uVar26 >> 8);
    *(char *)(this_ptr + 0xfc) = (char)uVar26;
    uVar26 = (uVar30 & 0xff) + (uVar26 >> 8);
    *(char *)(this_ptr + 0xfb) = (char)uVar26;
    uVar26 = (uVar31 & 0xff) + (uVar26 >> 8);
    *(char *)(this_ptr + 0xfa) = (char)uVar26;
    iVar23 = (uVar32 & 0xff) + (uVar26 >> 8);
    *(char *)(this_ptr + 0xf9) = (char)iVar23;
    *(char *)(this_ptr + 0xf8) = cVar19 + (char)((uint)iVar23 >> 8);
    local_78 = *(void*)local_f0;
    uStack_70 = *(void*)(this_ptr + 0x100);
    uVar22 = 0x30;
  }
  pEVar24 = (EVP_CIPHER_CTX *)&stack0xffffffffffffff68;
  piVar38 = (int *)(uint64_t)uVar22;
  puVar40 = param_4;
  iVar23 = _EVP_CipherUpdate(pEVar24,(uchar *)&local_f4,piVar38,param_4,inl);
  bVar45 = false;
  bVar44 = false;
  if ((iVar23 == 0) || (local_f4 != uVar22)) goto LAB_010636c2;
  ctx = (EVP_CIPHER_CTX *)(this_ptr + 0xd8);
  pvVar7 = *(void **)(this_ptr + 0xd0);
  _memcpy(pEVar24,pvVar7,(size_t)piVar38);
  uVar17 = *(void*)((int64_t)(local_c8 + 1) + (int64_t)pvVar7);
  *(void*)local_f0 = *(void*)((int64_t)local_c8 + (int64_t)pvVar7);
  *(void*)(local_f0 + 8) = uVar17;
  if ((*(byte *)(this_ptr + 0x1c) & 1) == 0) {
    if (((arg1 != 0) || (param_4 != (uchar *)0x0)) || (param_1 != 0)) {
      local_d4 = 0x10;
      local_48 = '\0';
      uStack_47 = '\0';
      uStack_46 = '\0';
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      local_58 = '\0';
      uStack_57 = '\0';
      uStack_56 = '\0';
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      local_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      pEVar24 = (EVP_CIPHER_CTX *)(this_ptr + 0x120);
      *(void*)(this_ptr + 0x140) = 0;
      *(void*)(this_ptr + 0x148) = 0;
      *(void*)(this_ptr + 0x130) = 0;
      *(void*)(this_ptr + 0x138) = 0;
      *(void*)(this_ptr + 0x120) = 0;
      *(void*)(this_ptr + 0x128) = 0;
      uStack_55 = '\x01';
      uStack_45 = '\x02';
      uVar26 = (uint)(*(int64_t *)(this_ptr + 0xd0) != 0x10) << 4 | 0x20;
      piVar38 = (int *)(uint64_t)uVar26;
      local_d8 = 0x10;
      *(void*)(this_ptr + 0x121) = *(void*)(this_ptr + 0x121);
      *(void*)(this_ptr + 0x125) = *(void*)(this_ptr + 0x125);
      *(void*)(this_ptr + 0x129) = *(void*)(this_ptr + 0x129);
      *(void*)(this_ptr + 0x12d) = *(void*)(this_ptr + 0x12d);
      if ((dword *)(piVar38 + -4) != &MACH_HEADER.ncmds) {
        *(uint *)(this_ptr + 0x131) = *(uint *)(this_ptr + 0x131) ^ 0x10000;
        *(void*)(this_ptr + 0x135) = *(void*)(this_ptr + 0x135);
        *(void*)(this_ptr + 0x139) = *(void*)(this_ptr + 0x139);
        *(void*)(this_ptr + 0x13d) = *(void*)(this_ptr + 0x13d);
      }
      uVar20 = (uint64_t)(piVar38 + -4) | 1;
      puVar6 = (uint64_t *)(this_ptr + 0x120 + uVar20);
      *puVar6 = *puVar6 ^ *(uint64_t *)((int64_t)&stack0xffffffffffffff98 + uVar20);
      pbVar5 = (byte *)(this_ptr + 0x119 + (int64_t)piVar38);
      *pbVar5 = *pbVar5 ^ ((void*)((int64_t)register0x00000020 + -0x6f))[(int64_t)piVar38];
      pbVar5 = (byte *)(this_ptr + 0x11a + (int64_t)piVar38);
      *pbVar5 = *pbVar5 ^ ((void*)((int64_t)register0x00000020 + -0x6e))[(int64_t)piVar38];
      pbVar5 = (byte *)(this_ptr + 0x11b + (int64_t)piVar38);
      *pbVar5 = *pbVar5 ^ ((void*)((int64_t)register0x00000020 + -0x6d))[(int64_t)piVar38];
      pbVar5 = (byte *)(this_ptr + 0x11c + (int64_t)piVar38);
      *pbVar5 = *pbVar5 ^ ((void*)((int64_t)register0x00000020 + -0x6c))[(int64_t)piVar38];
      pbVar5 = (byte *)(this_ptr + 0x11d + (int64_t)piVar38);
      *pbVar5 = *pbVar5 ^ ((void*)((int64_t)register0x00000020 + -0x6b))[(int64_t)piVar38];
      pbVar5 = (byte *)(this_ptr + 0x11e + (int64_t)piVar38);
      *pbVar5 = *pbVar5 ^ ((void*)((int64_t)register0x00000020 + -0x6a))[(int64_t)piVar38];
      pbVar5 = (byte *)(this_ptr + 0x11f + (int64_t)piVar38);
      *pbVar5 = *pbVar5 ^ ((void*)((int64_t)register0x00000020 + -0x69))[(int64_t)piVar38];
      iVar23 = _EVP_CipherUpdate(pEVar24,(uchar *)&local_d8,piVar38,puVar40,inl);
      if ((iVar23 == 0) || (local_d8 != uVar26)) goto LAB_010636c2;
      uVar20 = param_2;
      if (arg1 == 0) {
        uVar20 = 0;
      }
      if (param_4 == (uchar *)0x0) {
        local_res8 = 0;
      }
      if (param_1 == 0) {
        param_3 = 0;
      }
      lVar34 = param_3 + uVar20 + local_res8;
      *(char *)(this_ptr + 0x108) = (char)((uint64_t)lVar34 >> 0x18);
      *(char *)(this_ptr + 0x109) = (char)((uint64_t)lVar34 >> 0x10);
      *(char *)(this_ptr + 0x10a) = (char)((uint64_t)lVar34 >> 8);
      *(char *)(this_ptr + 0x10b) = (char)lVar34;
      *(void*)(this_ptr + 0x10c) = 0;
      *(void*)(this_ptr + 0x10e) = 0;
      *(char *)(this_ptr + 0x10f) = *(char *)(this_ptr + 0xd0) + '\x10';
      *(void*)(this_ptr + 0x118) = 8;
      iVar23 = FUN_01063840();
      bVar45 = bVar44;
      if (((iVar23 == 0) || (iVar23 = FUN_01063840(extraout_XMM0_Da,local_res8), iVar23 == 0)) ||
         ((iVar23 = FUN_01063840(extraout_XMM0_Da_00,param_3), iVar23 == 0 ||
          (iVar23 = FUN_01063840(), iVar23 == 0)))) goto LAB_010636c2;
      if (*(int64_t *)(this_ptr + 0x118) != 0) {
        puVar1 = (void*)(this_ptr + 0x108);
        ___bzero();
        local_68 = (uint)*puVar1;
        uStack_64 = (uint)((uint64_t)*puVar1 >> 0x20);
        uStack_60 = (uint)*(void*)(this_ptr + 0x110);
        uStack_5c = (uint)((uint64_t)*(void*)(this_ptr + 0x110) >> 0x20);
        uVar17 = *puVar1;
        local_58 = (uchar)uVar17;
        _uStack_57 = (uint16_t)((uint64_t)uVar17 >> 8);
        uStack_55 = (uchar)((uint64_t)uVar17 >> 0x18);
        uStack_54 = (uint)((uint64_t)uVar17 >> 0x20);
        uStack_50 = (uint)*(void*)(this_ptr + 0x110);
        uStack_4c = (uint)((uint64_t)*(void*)(this_ptr + 0x110) >> 0x20);
        uVar26 = 0x20;
        if (*(int64_t *)(this_ptr + 0xd0) != 0x10) {
          uVar18 = *puVar1;
          _uStack_40 = *(void*)(this_ptr + 0x110);
          local_48 = (uchar)uVar18;
          _uStack_47 = (uint16_t)((uint64_t)uVar18 >> 8);
          uStack_45 = (uchar)((uint64_t)uVar18 >> 0x18);
          uStack_44 = (uint)((uint64_t)uVar18 >> 0x20);
          uVar26 = 0x30;
        }
        local_d8 = 0x10;
        *(uint *)(this_ptr + 0x120) = *(uint *)(this_ptr + 0x120) ^ local_68;
        *(uint *)(this_ptr + 0x124) = *(uint *)(this_ptr + 0x124) ^ uStack_64;
        *(uint *)(this_ptr + 0x128) = *(uint *)(this_ptr + 0x128) ^ uStack_60;
        *(uint *)(this_ptr + 300) = *(uint *)(this_ptr + 300) ^ uStack_5c;
        *(uint *)(this_ptr + 0x130) = *(uint *)(this_ptr + 0x130) ^ (uint)uVar17;
        *(uint *)(this_ptr + 0x134) = *(uint *)(this_ptr + 0x134) ^ uStack_54;
        *(uint *)(this_ptr + 0x138) = *(uint *)(this_ptr + 0x138) ^ uStack_50;
        *(uint *)(this_ptr + 0x13c) = *(uint *)(this_ptr + 0x13c) ^ uStack_4c;
        if (*(int64_t *)(this_ptr + 0xd0) != 0x10) {
          *(uint *)(this_ptr + 0x140) =
               *(uint *)(this_ptr + 0x140) ^ CONCAT13(uStack_45,CONCAT21(_uStack_47,local_48));
          *(uint *)(this_ptr + 0x144) = *(uint *)(this_ptr + 0x144) ^ uStack_44;
          *(uint *)(this_ptr + 0x148) = *(uint *)(this_ptr + 0x148) ^ uStack_40;
          *(uint *)(this_ptr + 0x14c) = *(uint *)(this_ptr + 0x14c) ^ uStack_3c;
        }
        iVar23 = _EVP_CipherUpdate(pEVar24,(uchar *)&local_d8,(int *)(uint64_t)uVar26,puVar40,inl);
        if ((iVar23 == 0) || (local_d8 != uVar26)) goto LAB_010636c2;
      }
      puVar40 = (uchar *)0xffffffff;
      iVar23 = _EVP_CipherInit_ex(pEVar24,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0xffffffff,
                                  (uchar *)CONCAT44(uVar29,inl),enc);
      if ((iVar23 == 0) ||
         ((iVar23 = _EVP_CipherUpdate((EVP_CIPHER_CTX *)
                                      (this_ptr + *(int64_t *)(this_ptr + 0xd0) + 0x120),
                                      (uchar *)&local_d4,(int *)&MACH_HEADER.ncmds,puVar40,inl),
          iVar23 == 0 || (local_d4 != 0x10)))) goto LAB_010636c2;
      iVar23 = _EVP_CipherUpdate(pEVar24,(uchar *)&local_d4,(int *)&MACH_HEADER.ncmds,puVar40,inl);
      if (((iVar23 == 0) || (local_d4 != 0x10)) ||
         ((*(int64_t *)(this_ptr + 0xd0) != 0x10 &&
          ((iVar23 = _EVP_CipherUpdate((EVP_CIPHER_CTX *)(this_ptr + 0x130),(uchar *)&local_d4,
                                       (int *)&MACH_HEADER.ncmds,puVar40,inl), iVar23 == 0 ||
           (local_d4 != 0x10)))))) goto LAB_010636c2;
    }
    if ((param_2 != 0) && (uVar20 = *(uint64_t *)(this_ptr + 0x90), uVar20 != 0)) {
      uVar35 = *(uint64_t *)(this_ptr + 0xd0);
      uVar25 = uVar35;
      if (uVar20 < uVar35) {
        uVar25 = uVar20;
      }
      if (uVar25 != 0) {
        if (uVar25 < 8) {
          uVar21 = 0;
LAB_01063587:
          do {
            pbVar5 = (byte *)(this_ptr + 0xd8 + uVar21);
            *pbVar5 = *pbVar5 ^ *(byte *)(this_ptr + 0x120 + uVar21);
            uVar21 = uVar21 + 1;
LAB_01063599:
          } while (uVar25 != uVar21);
        }
        else {
          if (uVar25 < 0x20) {
            uVar35 = 0;
LAB_0106331a:
            uVar21 = uVar25 & 0xfffffffffffffff8;
            do {
              puVar6 = (uint64_t *)(this_ptr + 0xd8 + uVar35);
              *puVar6 = *puVar6 ^ *(uint64_t *)(this_ptr + 0x120 + uVar35);
              uVar35 = uVar35 + 8;
              if (uVar21 == uVar35) goto LAB_01063599;
            } while( true );
          }
          uVar21 = uVar25 & 0xffffffffffffffe0;
          uVar35 = (uVar21 - 0x20 >> 5) + 1;
          if (uVar21 - 0x20 == 0) {
            lVar34 = 0;
          }
          else {
            lVar33 = -(uVar35 & 0xfffffffffffffffe);
            lVar34 = 0;
            do {
              puVar2 = (uint *)(this_ptr + 0x120 + lVar34);
              uVar26 = puVar2[1];
              uVar27 = puVar2[2];
              uVar28 = puVar2[3];
              puVar3 = (uint *)(this_ptr + 0x130 + lVar34);
              uVar30 = *puVar3;
              uVar31 = puVar3[1];
              uVar32 = puVar3[2];
              uVar22 = puVar3[3];
              puVar3 = (uint *)(this_ptr + 0xd8 + lVar34);
              uVar41 = puVar3[1];
              uVar42 = puVar3[2];
              uVar43 = puVar3[3];
              puVar4 = (uint *)(this_ptr + 0xe8 + lVar34);
              uVar46 = *puVar4;
              uVar47 = puVar4[1];
              uVar48 = puVar4[2];
              uVar8 = puVar4[3];
              puVar4 = (uint *)(this_ptr + 0xf8 + lVar34);
              uVar9 = *puVar4;
              uVar10 = puVar4[1];
              uVar11 = puVar4[2];
              uVar12 = puVar4[3];
              puVar4 = (uint *)(this_ptr + 0x108 + lVar34);
              uVar13 = *puVar4;
              uVar14 = puVar4[1];
              uVar15 = puVar4[2];
              uVar16 = puVar4[3];
              puVar4 = (uint *)(this_ptr + 0xd8 + lVar34);
              *puVar4 = *puVar3 ^ *puVar2;
              puVar4[1] = uVar41 ^ uVar26;
              puVar4[2] = uVar42 ^ uVar27;
              puVar4[3] = uVar43 ^ uVar28;
              puVar2 = (uint *)(this_ptr + 0xe8 + lVar34);
              *puVar2 = uVar46 ^ uVar30;
              puVar2[1] = uVar47 ^ uVar31;
              puVar2[2] = uVar48 ^ uVar32;
              puVar2[3] = uVar8 ^ uVar22;
              puVar2 = (uint *)(this_ptr + 0x140 + lVar34);
              uVar26 = puVar2[1];
              uVar27 = puVar2[2];
              uVar28 = puVar2[3];
              puVar3 = (uint *)(this_ptr + 0x150 + lVar34);
              uVar30 = *puVar3;
              uVar31 = puVar3[1];
              uVar32 = puVar3[2];
              uVar22 = puVar3[3];
              puVar3 = (uint *)(this_ptr + 0xf8 + lVar34);
              *puVar3 = *puVar2 ^ uVar9;
              puVar3[1] = uVar26 ^ uVar10;
              puVar3[2] = uVar27 ^ uVar11;
              puVar3[3] = uVar28 ^ uVar12;
              puVar2 = (uint *)(this_ptr + 0x108 + lVar34);
              *puVar2 = uVar30 ^ uVar13;
              puVar2[1] = uVar31 ^ uVar14;
              puVar2[2] = uVar32 ^ uVar15;
              puVar2[3] = uVar22 ^ uVar16;
              lVar34 = lVar34 + 0x40;
              lVar33 = lVar33 + 2;
            } while (lVar33 != 0);
          }
          if ((uVar35 & 1) != 0) {
            puVar2 = (uint *)(this_ptr + 0xd8 + lVar34);
            uVar26 = puVar2[1];
            uVar27 = puVar2[2];
            uVar28 = puVar2[3];
            puVar3 = (uint *)(this_ptr + 0xe8 + lVar34);
            uVar30 = *puVar3;
            uVar31 = puVar3[1];
            uVar32 = puVar3[2];
            uVar22 = puVar3[3];
            puVar3 = (uint *)(this_ptr + 0x120 + lVar34);
            uVar41 = puVar3[1];
            uVar42 = puVar3[2];
            uVar43 = puVar3[3];
            puVar4 = (uint *)(this_ptr + 0x130 + lVar34);
            uVar46 = *puVar4;
            uVar47 = puVar4[1];
            uVar48 = puVar4[2];
            uVar8 = puVar4[3];
            puVar4 = (uint *)(this_ptr + 0xd8 + lVar34);
            *puVar4 = *puVar3 ^ *puVar2;
            puVar4[1] = uVar41 ^ uVar26;
            puVar4[2] = uVar42 ^ uVar27;
            puVar4[3] = uVar43 ^ uVar28;
            puVar2 = (uint *)(this_ptr + 0xe8 + lVar34);
            *puVar2 = uVar46 ^ uVar30;
            puVar2[1] = uVar47 ^ uVar31;
            puVar2[2] = uVar48 ^ uVar32;
            puVar2[3] = uVar8 ^ uVar22;
          }
          if (uVar25 != uVar21) {
            uVar35 = uVar21;
            if ((uVar25 & 0x18) != 0) goto LAB_0106331a;
            goto LAB_01063587;
          }
        }
        uVar35 = *(uint64_t *)(this_ptr + 0xd0);
      }
      uVar25 = uVar20 - uVar35;
      if (uVar35 <= uVar20 && uVar25 != 0) {
        uVar20 = 0x10;
        if (uVar25 < 0x10) {
          uVar20 = uVar25;
        }
        if (uVar20 != 0) {
          if ((uVar20 < 8) ||
             ((uVar21 = uVar35 + this_ptr + 0x120,
              local_f0 < (uchar *)(uVar35 + uVar20 + this_ptr + 0x120) &&
              (uVar21 < uVar20 + this_ptr + 0xf8)))) {
            uVar25 = 0;
          }
          else {
            if (uVar25 < 0x10) {
              uVar37 = 0;
            }
            else {
              uVar25 = (uint64_t)((uint)uVar20 & 0x10);
              uVar37 = (uVar25 - 0x10 >> 4) + 1;
              uVar39 = (uint64_t)((uint)uVar37 & 3);
              if (uVar25 - 0x10 < 0x30) {
                lVar33 = 0;
              }
              else {
                lVar34 = uVar35 + this_ptr;
                lVar36 = -(uVar37 & 0xfffffffffffffffc);
                lVar33 = 0;
                do {
                  puVar2 = (uint *)(lVar34 + 0x120 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0xf8 + lVar33);
                  uVar30 = puVar3[1];
                  uVar31 = puVar3[2];
                  uVar32 = puVar3[3];
                  puVar4 = (uint *)(this_ptr + 0x108 + lVar33);
                  uVar22 = *puVar4;
                  uVar41 = puVar4[1];
                  uVar42 = puVar4[2];
                  uVar43 = puVar4[3];
                  puVar4 = (uint *)(this_ptr + 0x118 + lVar33);
                  uVar46 = *puVar4;
                  uVar47 = puVar4[1];
                  uVar48 = puVar4[2];
                  uVar8 = puVar4[3];
                  puVar4 = (uint *)(this_ptr + 0x128 + lVar33);
                  uVar9 = *puVar4;
                  uVar10 = puVar4[1];
                  uVar11 = puVar4[2];
                  uVar12 = puVar4[3];
                  puVar4 = (uint *)(this_ptr + 0xf8 + lVar33);
                  *puVar4 = *puVar3 ^ *puVar2;
                  puVar4[1] = uVar30 ^ uVar26;
                  puVar4[2] = uVar31 ^ uVar27;
                  puVar4[3] = uVar32 ^ uVar28;
                  puVar2 = (uint *)(lVar34 + 0x130 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0x108 + lVar33);
                  *puVar3 = *puVar2 ^ uVar22;
                  puVar3[1] = uVar26 ^ uVar41;
                  puVar3[2] = uVar27 ^ uVar42;
                  puVar3[3] = uVar28 ^ uVar43;
                  puVar2 = (uint *)(lVar34 + 0x140 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0x118 + lVar33);
                  *puVar3 = *puVar2 ^ uVar46;
                  puVar3[1] = uVar26 ^ uVar47;
                  puVar3[2] = uVar27 ^ uVar48;
                  puVar3[3] = uVar28 ^ uVar8;
                  puVar2 = (uint *)(lVar34 + 0x150 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0x128 + lVar33);
                  *puVar3 = *puVar2 ^ uVar9;
                  puVar3[1] = uVar26 ^ uVar10;
                  puVar3[2] = uVar27 ^ uVar11;
                  puVar3[3] = uVar28 ^ uVar12;
                  lVar33 = lVar33 + 0x40;
                  lVar36 = lVar36 + 4;
                } while (lVar36 != 0);
              }
              if (uVar39 != 0) {
                lVar36 = lVar33 + this_ptr + 0xf8;
                lVar34 = 0;
                do {
                  puVar2 = (uint *)(this_ptr + lVar33 + uVar35 + 0x120 + lVar34);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(lVar36 + lVar34);
                  uVar30 = puVar3[1];
                  uVar31 = puVar3[2];
                  uVar32 = puVar3[3];
                  puVar4 = (uint *)(lVar36 + lVar34);
                  *puVar4 = *puVar3 ^ *puVar2;
                  puVar4[1] = uVar30 ^ uVar26;
                  puVar4[2] = uVar31 ^ uVar27;
                  puVar4[3] = uVar32 ^ uVar28;
                  lVar34 = lVar34 + 0x10;
                } while (uVar39 << 4 != lVar34);
              }
              if (uVar20 == uVar25) goto LAB_01063670;
              uVar37 = uVar25;
              if ((uVar20 & 8) == 0) goto LAB_01063606;
            }
            uVar25 = (uint64_t)((uint)uVar20 & 0x18);
            do {
              puVar6 = (uint64_t *)(this_ptr + 0xf8 + uVar37);
              *puVar6 = *puVar6 ^ *(uint64_t *)(uVar21 + uVar37);
              uVar37 = uVar37 + 8;
            } while (uVar25 != uVar37);
            if (uVar20 == uVar25) goto LAB_01063670;
          }
LAB_01063606:
          uVar21 = uVar25;
          if ((uVar20 & 1) != 0) {
            pbVar5 = (byte *)(this_ptr + 0xf8 + uVar25);
            *pbVar5 = *pbVar5 ^ *(byte *)(this_ptr + 0x120 + uVar25 + uVar35);
            uVar21 = uVar25 | 1;
          }
          if (uVar20 != (uVar25 | 1)) {
            do {
              pbVar5 = (byte *)(this_ptr + 0xf8 + uVar21);
              *pbVar5 = *pbVar5 ^ *(byte *)(uVar35 + this_ptr + 0x120 + uVar21);
              pbVar5 = (byte *)(this_ptr + 0xf9 + uVar21);
              *pbVar5 = *pbVar5 ^ *(byte *)(uVar35 + this_ptr + 0x121 + uVar21);
              uVar21 = uVar21 + 2;
            } while (uVar20 != uVar21);
          }
        }
      }
    }
  }
  else {
    if ((arg1 != 0) && (param_2 != 0)) {
      uVar20 = *(uint64_t *)(this_ptr + 0xd0);
      uVar35 = uVar20;
      if (param_2 < uVar20) {
        uVar35 = param_2;
      }
      if (uVar35 != 0) {
        if (uVar35 < 8) {
          uVar20 = 0;
LAB_01062e4a:
          uVar21 = ~uVar20;
          for (uVar25 = uVar35 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            pbVar5 = (byte *)(this_ptr + 0xd8 + uVar20);
            *pbVar5 = *pbVar5 ^ *(byte *)(arg1 + uVar20);
            uVar20 = uVar20 + 1;
          }
          if (2 < uVar21 + uVar35) {
            do {
              pbVar5 = (byte *)(this_ptr + 0xd8 + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(arg1 + uVar20);
              pbVar5 = (byte *)(this_ptr + 0xd9 + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(arg1 + 1 + uVar20);
              pbVar5 = (byte *)(this_ptr + 0xda + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(arg1 + 2 + uVar20);
              pbVar5 = (byte *)(this_ptr + 0xdb + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(arg1 + 3 + uVar20);
              uVar20 = uVar20 + 4;
            } while (uVar35 != uVar20);
          }
        }
        else {
          if ((ctx < (EVP_CIPHER_CTX *)(arg1 + uVar35)) &&
             (arg1 < uVar35 + this_ptr + 0xd8)) {
            uVar20 = 0;
            goto LAB_01062e4a;
          }
          if (uVar35 < 0x20) {
            uVar25 = 0;
LAB_01062e1c:
            uVar20 = uVar35 & 0xfffffffffffffff8;
            do {
              puVar6 = (uint64_t *)(this_ptr + 0xd8 + uVar25);
              *puVar6 = *puVar6 ^ *(uint64_t *)(arg1 + uVar25);
              uVar25 = uVar25 + 8;
            } while (uVar20 != uVar25);
            if (uVar35 != uVar20) goto LAB_01062e4a;
          }
          else {
            uVar20 = uVar35 & 0xffffffffffffffe0;
            uVar25 = (uVar20 - 0x20 >> 5) + 1;
            if (uVar20 - 0x20 == 0) {
              lVar34 = 0;
            }
            else {
              lVar33 = -(uVar25 & 0xfffffffffffffffe);
              lVar34 = 0;
              do {
                puVar2 = (uint *)(arg1 + lVar34);
                uVar26 = puVar2[1];
                uVar27 = puVar2[2];
                uVar28 = puVar2[3];
                puVar3 = (uint *)(arg1 + 0x10 + lVar34);
                uVar30 = *puVar3;
                uVar31 = puVar3[1];
                uVar32 = puVar3[2];
                uVar22 = puVar3[3];
                puVar3 = (uint *)(this_ptr + 0xd8 + lVar34);
                uVar41 = puVar3[1];
                uVar42 = puVar3[2];
                uVar43 = puVar3[3];
                puVar4 = (uint *)(this_ptr + 0xe8 + lVar34);
                uVar46 = *puVar4;
                uVar47 = puVar4[1];
                uVar48 = puVar4[2];
                uVar8 = puVar4[3];
                puVar4 = (uint *)(this_ptr + 0xf8 + lVar34);
                uVar9 = *puVar4;
                uVar10 = puVar4[1];
                uVar11 = puVar4[2];
                uVar12 = puVar4[3];
                puVar4 = (uint *)(this_ptr + 0x108 + lVar34);
                uVar13 = *puVar4;
                uVar14 = puVar4[1];
                uVar15 = puVar4[2];
                uVar16 = puVar4[3];
                puVar4 = (uint *)(this_ptr + 0xd8 + lVar34);
                *puVar4 = *puVar3 ^ *puVar2;
                puVar4[1] = uVar41 ^ uVar26;
                puVar4[2] = uVar42 ^ uVar27;
                puVar4[3] = uVar43 ^ uVar28;
                puVar2 = (uint *)(this_ptr + 0xe8 + lVar34);
                *puVar2 = uVar46 ^ uVar30;
                puVar2[1] = uVar47 ^ uVar31;
                puVar2[2] = uVar48 ^ uVar32;
                puVar2[3] = uVar8 ^ uVar22;
                puVar2 = (uint *)(arg1 + 0x20 + lVar34);
                uVar26 = puVar2[1];
                uVar27 = puVar2[2];
                uVar28 = puVar2[3];
                puVar3 = (uint *)(arg1 + 0x30 + lVar34);
                uVar30 = *puVar3;
                uVar31 = puVar3[1];
                uVar32 = puVar3[2];
                uVar22 = puVar3[3];
                puVar3 = (uint *)(this_ptr + 0xf8 + lVar34);
                *puVar3 = *puVar2 ^ uVar9;
                puVar3[1] = uVar26 ^ uVar10;
                puVar3[2] = uVar27 ^ uVar11;
                puVar3[3] = uVar28 ^ uVar12;
                puVar2 = (uint *)(this_ptr + 0x108 + lVar34);
                *puVar2 = uVar30 ^ uVar13;
                puVar2[1] = uVar31 ^ uVar14;
                puVar2[2] = uVar32 ^ uVar15;
                puVar2[3] = uVar22 ^ uVar16;
                lVar34 = lVar34 + 0x40;
                lVar33 = lVar33 + 2;
              } while (lVar33 != 0);
            }
            if ((uVar25 & 1) != 0) {
              puVar2 = (uint *)(arg1 + lVar34);
              uVar26 = puVar2[1];
              uVar27 = puVar2[2];
              uVar28 = puVar2[3];
              puVar3 = (uint *)(arg1 + 0x10 + lVar34);
              uVar30 = *puVar3;
              uVar31 = puVar3[1];
              uVar32 = puVar3[2];
              uVar22 = puVar3[3];
              puVar3 = (uint *)(this_ptr + 0xd8 + lVar34);
              uVar41 = puVar3[1];
              uVar42 = puVar3[2];
              uVar43 = puVar3[3];
              puVar4 = (uint *)(this_ptr + 0xe8 + lVar34);
              uVar46 = *puVar4;
              uVar47 = puVar4[1];
              uVar48 = puVar4[2];
              uVar8 = puVar4[3];
              puVar4 = (uint *)(this_ptr + 0xd8 + lVar34);
              *puVar4 = *puVar3 ^ *puVar2;
              puVar4[1] = uVar41 ^ uVar26;
              puVar4[2] = uVar42 ^ uVar27;
              puVar4[3] = uVar43 ^ uVar28;
              puVar2 = (uint *)(this_ptr + 0xe8 + lVar34);
              *puVar2 = uVar46 ^ uVar30;
              puVar2[1] = uVar47 ^ uVar31;
              puVar2[2] = uVar48 ^ uVar32;
              puVar2[3] = uVar8 ^ uVar22;
            }
            if (uVar35 != uVar20) {
              uVar25 = uVar20;
              if ((uVar35 & 0x18) == 0) goto LAB_01062e4a;
              goto LAB_01062e1c;
            }
          }
        }
        uVar20 = *(uint64_t *)(this_ptr + 0xd0);
      }
      if (uVar20 < param_2) {
        param_2 = param_2 - uVar20;
        uVar35 = 0x10;
        if (param_2 < 0x10) {
          uVar35 = param_2;
        }
        if (uVar35 != 0) {
          if ((uVar35 < 8) ||
             ((local_f0 < (uchar *)(uVar20 + uVar35 + arg1) &&
              (arg1 + uVar20 < uVar35 + this_ptr + 0xf8)))) {
            uVar25 = 0;
          }
          else {
            if (param_2 < 0x10) {
              uVar21 = 0;
            }
            else {
              uVar25 = (uint64_t)((uint)uVar35 & 0x10);
              uVar21 = (uVar25 - 0x10 >> 4) + 1;
              uVar37 = (uint64_t)((uint)uVar21 & 3);
              if (uVar25 - 0x10 < 0x30) {
                lVar33 = 0;
              }
              else {
                lVar34 = uVar20 + arg1;
                lVar36 = -(uVar21 & 0xfffffffffffffffc);
                lVar33 = 0;
                do {
                  puVar2 = (uint *)(lVar34 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0xf8 + lVar33);
                  uVar30 = puVar3[1];
                  uVar31 = puVar3[2];
                  uVar32 = puVar3[3];
                  puVar4 = (uint *)(this_ptr + 0x108 + lVar33);
                  uVar22 = *puVar4;
                  uVar41 = puVar4[1];
                  uVar42 = puVar4[2];
                  uVar43 = puVar4[3];
                  puVar4 = (uint *)(this_ptr + 0x118 + lVar33);
                  uVar46 = *puVar4;
                  uVar47 = puVar4[1];
                  uVar48 = puVar4[2];
                  uVar8 = puVar4[3];
                  puVar4 = (uint *)(this_ptr + 0x128 + lVar33);
                  uVar9 = *puVar4;
                  uVar10 = puVar4[1];
                  uVar11 = puVar4[2];
                  uVar12 = puVar4[3];
                  puVar4 = (uint *)(this_ptr + 0xf8 + lVar33);
                  *puVar4 = *puVar3 ^ *puVar2;
                  puVar4[1] = uVar30 ^ uVar26;
                  puVar4[2] = uVar31 ^ uVar27;
                  puVar4[3] = uVar32 ^ uVar28;
                  puVar2 = (uint *)(lVar34 + 0x10 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0x108 + lVar33);
                  *puVar3 = *puVar2 ^ uVar22;
                  puVar3[1] = uVar26 ^ uVar41;
                  puVar3[2] = uVar27 ^ uVar42;
                  puVar3[3] = uVar28 ^ uVar43;
                  puVar2 = (uint *)(lVar34 + 0x20 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0x118 + lVar33);
                  *puVar3 = *puVar2 ^ uVar46;
                  puVar3[1] = uVar26 ^ uVar47;
                  puVar3[2] = uVar27 ^ uVar48;
                  puVar3[3] = uVar28 ^ uVar8;
                  puVar2 = (uint *)(lVar34 + 0x30 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0x128 + lVar33);
                  *puVar3 = *puVar2 ^ uVar9;
                  puVar3[1] = uVar26 ^ uVar10;
                  puVar3[2] = uVar27 ^ uVar11;
                  puVar3[3] = uVar28 ^ uVar12;
                  lVar33 = lVar33 + 0x40;
                  lVar36 = lVar36 + 4;
                } while (lVar36 != 0);
              }
              if (uVar37 != 0) {
                lVar34 = lVar33 + this_ptr + 0xf8;
                lVar36 = 0;
                do {
                  puVar2 = (uint *)(lVar33 + uVar20 + arg1 + lVar36);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(lVar34 + lVar36);
                  uVar30 = puVar3[1];
                  uVar31 = puVar3[2];
                  uVar32 = puVar3[3];
                  puVar4 = (uint *)(lVar34 + lVar36);
                  *puVar4 = *puVar3 ^ *puVar2;
                  puVar4[1] = uVar30 ^ uVar26;
                  puVar4[2] = uVar31 ^ uVar27;
                  puVar4[3] = uVar32 ^ uVar28;
                  lVar36 = lVar36 + 0x10;
                } while (uVar37 << 4 != lVar36);
              }
              if (uVar35 == uVar25) goto LAB_01062f80;
              uVar21 = uVar25;
              if ((uVar35 & 8) == 0) goto LAB_01062f1d;
            }
            uVar25 = (uint64_t)((uint)uVar35 & 0x18);
            do {
              puVar6 = (uint64_t *)(this_ptr + 0xf8 + uVar21);
              *puVar6 = *puVar6 ^ *(uint64_t *)(arg1 + uVar20 + uVar21);
              uVar21 = uVar21 + 8;
            } while (uVar25 != uVar21);
            if (uVar35 == uVar25) goto LAB_01062f80;
          }
LAB_01062f1d:
          uVar21 = uVar25;
          if ((uVar35 & 1) != 0) {
            pbVar5 = (byte *)(this_ptr + 0xf8 + uVar25);
            *pbVar5 = *pbVar5 ^ *(byte *)(arg1 + uVar25 + uVar20);
            uVar21 = uVar25 | 1;
          }
          if (uVar35 != (uVar25 | 1)) {
            do {
              pbVar5 = (byte *)(this_ptr + 0xf8 + uVar21);
              *pbVar5 = *pbVar5 ^ *(byte *)(arg1 + uVar20 + uVar21);
              pbVar5 = (byte *)(this_ptr + 0xf9 + uVar21);
              *pbVar5 = *pbVar5 ^ *(byte *)(arg1 + uVar20 + 1 + uVar21);
              uVar21 = uVar21 + 2;
            } while (uVar35 != uVar21);
          }
        }
      }
    }
LAB_01062f80:
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar20 = *(uint64_t *)(this_ptr + 0xd0);
      uVar35 = uVar20;
      if (param_3 < uVar20) {
        uVar35 = param_3;
      }
      if (uVar35 != 0) {
        if ((uVar35 < 8) ||
           ((ctx < (EVP_CIPHER_CTX *)(param_1 + uVar35) && (param_1 < uVar35 + this_ptr + 0xd8))))
        {
          uVar20 = 0;
LAB_01062fd4:
          uVar21 = ~uVar20;
          for (uVar25 = uVar35 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            pbVar5 = (byte *)(this_ptr + 0xd8 + uVar20);
            *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + uVar20);
            uVar20 = uVar20 + 1;
          }
          if (2 < uVar21 + uVar35) {
            do {
              pbVar5 = (byte *)(this_ptr + 0xd8 + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + uVar20);
              pbVar5 = (byte *)(this_ptr + 0xd9 + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 1 + uVar20);
              pbVar5 = (byte *)(this_ptr + 0xda + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 2 + uVar20);
              pbVar5 = (byte *)(this_ptr + 0xdb + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 3 + uVar20);
              uVar20 = uVar20 + 4;
            } while (uVar35 != uVar20);
          }
        }
        else if (uVar35 < 0x20) {
          uVar25 = 0;
LAB_01063291:
          uVar20 = uVar35 & 0xfffffffffffffff8;
          do {
            puVar6 = (uint64_t *)(this_ptr + 0xd8 + uVar25);
            *puVar6 = *puVar6 ^ *(uint64_t *)(param_1 + uVar25);
            uVar25 = uVar25 + 8;
          } while (uVar20 != uVar25);
          if (uVar35 != uVar20) goto LAB_01062fd4;
        }
        else {
          uVar20 = uVar35 & 0xffffffffffffffe0;
          uVar25 = (uVar20 - 0x20 >> 5) + 1;
          if (uVar20 - 0x20 == 0) {
            lVar34 = 0;
          }
          else {
            lVar33 = -(uVar25 & 0xfffffffffffffffe);
            lVar34 = 0;
            do {
              puVar2 = (uint *)(param_1 + lVar34);
              uVar26 = puVar2[1];
              uVar27 = puVar2[2];
              uVar28 = puVar2[3];
              puVar3 = (uint *)(param_1 + 0x10 + lVar34);
              uVar30 = *puVar3;
              uVar31 = puVar3[1];
              uVar32 = puVar3[2];
              uVar22 = puVar3[3];
              puVar3 = (uint *)(this_ptr + 0xd8 + lVar34);
              uVar41 = puVar3[1];
              uVar42 = puVar3[2];
              uVar43 = puVar3[3];
              puVar4 = (uint *)(this_ptr + 0xe8 + lVar34);
              uVar46 = *puVar4;
              uVar47 = puVar4[1];
              uVar48 = puVar4[2];
              uVar8 = puVar4[3];
              puVar4 = (uint *)(this_ptr + 0xf8 + lVar34);
              uVar9 = *puVar4;
              uVar10 = puVar4[1];
              uVar11 = puVar4[2];
              uVar12 = puVar4[3];
              puVar4 = (uint *)(this_ptr + 0x108 + lVar34);
              uVar13 = *puVar4;
              uVar14 = puVar4[1];
              uVar15 = puVar4[2];
              uVar16 = puVar4[3];
              puVar4 = (uint *)(this_ptr + 0xd8 + lVar34);
              *puVar4 = *puVar3 ^ *puVar2;
              puVar4[1] = uVar41 ^ uVar26;
              puVar4[2] = uVar42 ^ uVar27;
              puVar4[3] = uVar43 ^ uVar28;
              puVar2 = (uint *)(this_ptr + 0xe8 + lVar34);
              *puVar2 = uVar46 ^ uVar30;
              puVar2[1] = uVar47 ^ uVar31;
              puVar2[2] = uVar48 ^ uVar32;
              puVar2[3] = uVar8 ^ uVar22;
              puVar2 = (uint *)(param_1 + 0x20 + lVar34);
              uVar26 = puVar2[1];
              uVar27 = puVar2[2];
              uVar28 = puVar2[3];
              puVar3 = (uint *)(param_1 + 0x30 + lVar34);
              uVar30 = *puVar3;
              uVar31 = puVar3[1];
              uVar32 = puVar3[2];
              uVar22 = puVar3[3];
              puVar3 = (uint *)(this_ptr + 0xf8 + lVar34);
              *puVar3 = *puVar2 ^ uVar9;
              puVar3[1] = uVar26 ^ uVar10;
              puVar3[2] = uVar27 ^ uVar11;
              puVar3[3] = uVar28 ^ uVar12;
              puVar2 = (uint *)(this_ptr + 0x108 + lVar34);
              *puVar2 = uVar30 ^ uVar13;
              puVar2[1] = uVar31 ^ uVar14;
              puVar2[2] = uVar32 ^ uVar15;
              puVar2[3] = uVar22 ^ uVar16;
              lVar34 = lVar34 + 0x40;
              lVar33 = lVar33 + 2;
            } while (lVar33 != 0);
          }
          if ((uVar25 & 1) != 0) {
            puVar2 = (uint *)(param_1 + lVar34);
            uVar26 = puVar2[1];
            uVar27 = puVar2[2];
            uVar28 = puVar2[3];
            puVar3 = (uint *)(param_1 + 0x10 + lVar34);
            uVar30 = *puVar3;
            uVar31 = puVar3[1];
            uVar32 = puVar3[2];
            uVar22 = puVar3[3];
            puVar3 = (uint *)(this_ptr + 0xd8 + lVar34);
            uVar41 = puVar3[1];
            uVar42 = puVar3[2];
            uVar43 = puVar3[3];
            puVar4 = (uint *)(this_ptr + 0xe8 + lVar34);
            uVar46 = *puVar4;
            uVar47 = puVar4[1];
            uVar48 = puVar4[2];
            uVar8 = puVar4[3];
            puVar4 = (uint *)(this_ptr + 0xd8 + lVar34);
            *puVar4 = *puVar3 ^ *puVar2;
            puVar4[1] = uVar41 ^ uVar26;
            puVar4[2] = uVar42 ^ uVar27;
            puVar4[3] = uVar43 ^ uVar28;
            puVar2 = (uint *)(this_ptr + 0xe8 + lVar34);
            *puVar2 = uVar46 ^ uVar30;
            puVar2[1] = uVar47 ^ uVar31;
            puVar2[2] = uVar48 ^ uVar32;
            puVar2[3] = uVar8 ^ uVar22;
          }
          if (uVar35 != uVar20) {
            uVar25 = uVar20;
            if ((uVar35 & 0x18) == 0) goto LAB_01062fd4;
            goto LAB_01063291;
          }
        }
        uVar20 = *(uint64_t *)(this_ptr + 0xd0);
      }
      if (uVar20 < param_3) {
        param_3 = param_3 - uVar20;
        uVar35 = 0x10;
        if (param_3 < 0x10) {
          uVar35 = param_3;
        }
        if (uVar35 != 0) {
          if ((uVar35 < 8) ||
             ((local_f0 < (uchar *)(uVar20 + uVar35 + param_1) &&
              (param_1 + uVar20 < uVar35 + this_ptr + 0xf8)))) {
            uVar25 = 0;
          }
          else {
            if (param_3 < 0x10) {
              uVar21 = 0;
            }
            else {
              uVar25 = (uint64_t)((uint)uVar35 & 0x10);
              uVar21 = (uVar25 - 0x10 >> 4) + 1;
              uVar37 = (uint64_t)((uint)uVar21 & 3);
              if (uVar25 - 0x10 < 0x30) {
                lVar33 = 0;
              }
              else {
                lVar34 = uVar20 + param_1;
                lVar36 = -(uVar21 & 0xfffffffffffffffc);
                lVar33 = 0;
                do {
                  puVar2 = (uint *)(lVar34 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0xf8 + lVar33);
                  uVar30 = puVar3[1];
                  uVar31 = puVar3[2];
                  uVar32 = puVar3[3];
                  puVar4 = (uint *)(this_ptr + 0x108 + lVar33);
                  uVar22 = *puVar4;
                  uVar41 = puVar4[1];
                  uVar42 = puVar4[2];
                  uVar43 = puVar4[3];
                  puVar4 = (uint *)(this_ptr + 0x118 + lVar33);
                  uVar46 = *puVar4;
                  uVar47 = puVar4[1];
                  uVar48 = puVar4[2];
                  uVar8 = puVar4[3];
                  puVar4 = (uint *)(this_ptr + 0x128 + lVar33);
                  uVar9 = *puVar4;
                  uVar10 = puVar4[1];
                  uVar11 = puVar4[2];
                  uVar12 = puVar4[3];
                  puVar4 = (uint *)(this_ptr + 0xf8 + lVar33);
                  *puVar4 = *puVar3 ^ *puVar2;
                  puVar4[1] = uVar30 ^ uVar26;
                  puVar4[2] = uVar31 ^ uVar27;
                  puVar4[3] = uVar32 ^ uVar28;
                  puVar2 = (uint *)(lVar34 + 0x10 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0x108 + lVar33);
                  *puVar3 = *puVar2 ^ uVar22;
                  puVar3[1] = uVar26 ^ uVar41;
                  puVar3[2] = uVar27 ^ uVar42;
                  puVar3[3] = uVar28 ^ uVar43;
                  puVar2 = (uint *)(lVar34 + 0x20 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0x118 + lVar33);
                  *puVar3 = *puVar2 ^ uVar46;
                  puVar3[1] = uVar26 ^ uVar47;
                  puVar3[2] = uVar27 ^ uVar48;
                  puVar3[3] = uVar28 ^ uVar8;
                  puVar2 = (uint *)(lVar34 + 0x30 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(this_ptr + 0x128 + lVar33);
                  *puVar3 = *puVar2 ^ uVar9;
                  puVar3[1] = uVar26 ^ uVar10;
                  puVar3[2] = uVar27 ^ uVar11;
                  puVar3[3] = uVar28 ^ uVar12;
                  lVar33 = lVar33 + 0x40;
                  lVar36 = lVar36 + 4;
                } while (lVar36 != 0);
              }
              if (uVar37 != 0) {
                lVar34 = lVar33 + this_ptr + 0xf8;
                lVar36 = 0;
                do {
                  puVar2 = (uint *)(lVar33 + uVar20 + param_1 + lVar36);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(lVar34 + lVar36);
                  uVar30 = puVar3[1];
                  uVar31 = puVar3[2];
                  uVar32 = puVar3[3];
                  puVar4 = (uint *)(lVar34 + lVar36);
                  *puVar4 = *puVar3 ^ *puVar2;
                  puVar4[1] = uVar30 ^ uVar26;
                  puVar4[2] = uVar31 ^ uVar27;
                  puVar4[3] = uVar32 ^ uVar28;
                  lVar36 = lVar36 + 0x10;
                } while (uVar37 << 4 != lVar36);
              }
              if (uVar35 == uVar25) goto LAB_01063670;
              uVar21 = uVar25;
              if ((uVar35 & 8) == 0) goto LAB_010630aa;
            }
            uVar25 = (uint64_t)((uint)uVar35 & 0x18);
            do {
              puVar6 = (uint64_t *)(this_ptr + 0xf8 + uVar21);
              *puVar6 = *puVar6 ^ *(uint64_t *)(param_1 + uVar20 + uVar21);
              uVar21 = uVar21 + 8;
            } while (uVar25 != uVar21);
            if (uVar35 == uVar25) goto LAB_01063670;
          }
LAB_010630aa:
          uVar21 = uVar25;
          if ((uVar35 & 1) != 0) {
            pbVar5 = (byte *)(this_ptr + 0xf8 + uVar25);
            *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + uVar25 + uVar20);
            uVar21 = uVar25 | 1;
          }
          if (uVar35 != (uVar25 | 1)) {
            do {
              pbVar5 = (byte *)(this_ptr + 0xf8 + uVar21);
              *pbVar5 = *pbVar5 ^ *(byte *)(uVar20 + param_1 + uVar21);
              pbVar5 = (byte *)(this_ptr + 0xf9 + uVar21);
              *pbVar5 = *pbVar5 ^ *(byte *)(uVar20 + param_1 + 1 + uVar21);
              uVar21 = uVar21 + 2;
            } while (uVar35 != uVar21);
          }
        }
      }
    }
  }
LAB_01063670:
  iVar23 = _EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0xffffffff,
                              (uchar *)CONCAT44(uVar29,inl),enc);
  bVar45 = false;
  if (iVar23 != 0) {
    iVar23 = _EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0xffffffff,
                                (uchar *)CONCAT44(uVar29,inl),enc);
    bVar45 = iVar23 != 0;
  }
LAB_010636c2:
  if (*(void **)PTR____stack_chk_guard_024a9898 == local_38) {
    return bVar45;
  }
                      ___stack_chk_fail();
}

