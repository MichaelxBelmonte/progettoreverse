// Function: FUN_01062340
// Address: 01062340
// Size: 5374 bytes
// Class: GNList


bool FUN_01062340(ulonglong param_1,ulonglong param_2,ulonglong param_3,uchar *param_4)

{
  EVP_CIPHER_CTX *ctx;
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  ulonglong *puVar6;
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
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  EVP_CIPHER_CTX *pEVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint enc;
  uint uVar29;
  uint inl;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong unaff_RSI;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong unaff_RDI;
  int *piVar38;
  ulonglong uVar39;
  uchar *puVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  bool bVar44;
  bool bVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_res8;
  uint local_f4;
  uchar *local_f0;
  longlong local_e8;
  uint local_d8;
  int local_d4;
  undefined8 local_c8 [6];
  EVP_CIPHER *local_98;
  ENGINE *pEStack_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
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
  local_98 = *(EVP_CIPHER **)(unaff_RDI + 0xf8);
  pEStack_90 = *(ENGINE **)(unaff_RDI + 0x100);
  uVar41 = *(byte *)(unaff_RDI + 0x107) + 1;
  *(char *)(unaff_RDI + 0x107) = (char)uVar41;
  uVar47 = (uint)*(byte *)(unaff_RDI + 0x106) + (uVar41 >> 8);
  *(char *)(unaff_RDI + 0x106) = (char)uVar47;
  uVar43 = (uint)*(byte *)(unaff_RDI + 0x105) + (uVar47 >> 8);
  *(char *)(unaff_RDI + 0x105) = (char)uVar43;
  uVar42 = (uint)*(byte *)(unaff_RDI + 0x104) + (uVar43 >> 8);
  *(char *)(unaff_RDI + 0x104) = (char)uVar42;
  uVar46 = (uint)*(byte *)(unaff_RDI + 0x103) + (uVar42 >> 8);
  *(char *)(unaff_RDI + 0x103) = (char)uVar46;
  uVar48 = (uint)*(byte *)(unaff_RDI + 0x102) + (uVar46 >> 8);
  *(char *)(unaff_RDI + 0x102) = (char)uVar48;
  uVar26 = (uint)*(byte *)(unaff_RDI + 0x101) + (uVar48 >> 8);
  *(char *)(unaff_RDI + 0x101) = (char)uVar26;
  uVar27 = (uint)*(byte *)(unaff_RDI + 0x100) + (uVar26 >> 8);
  *(char *)(unaff_RDI + 0x100) = (char)uVar27;
  uVar28 = (uint)*(byte *)(unaff_RDI + 0xff) + (uVar27 >> 8);
  *(char *)(unaff_RDI + 0xff) = (char)uVar28;
  enc = (uint)*(byte *)(unaff_RDI + 0xfe) + (uVar28 >> 8);
  *(char *)(unaff_RDI + 0xfe) = (char)enc;
  uVar29 = (uint)*(byte *)(unaff_RDI + 0xfd) + (enc >> 8);
  *(char *)(unaff_RDI + 0xfd) = (char)uVar29;
  inl = (uint)*(byte *)(unaff_RDI + 0xfc) + (uVar29 >> 8);
  *(char *)(unaff_RDI + 0xfc) = (char)inl;
  uVar30 = (uint)*(byte *)(unaff_RDI + 0xfb) + (inl >> 8);
  *(char *)(unaff_RDI + 0xfb) = (char)uVar30;
  uVar31 = (uint)*(byte *)(unaff_RDI + 0xfa) + (uVar30 >> 8);
  *(char *)(unaff_RDI + 0xfa) = (char)uVar31;
  uVar32 = (uint)*(byte *)(unaff_RDI + 0xf9) + (uVar31 >> 8);
  *(char *)(unaff_RDI + 0xf9) = (char)uVar32;
  cVar19 = (char)(uVar32 >> 8) + *(char *)(unaff_RDI + 0xf8);
  *(char *)(unaff_RDI + 0xf8) = cVar19;
  local_88 = *(undefined1 *)(unaff_RDI + 0xf8);
  local_87 = *(undefined1 *)(unaff_RDI + 0xf9);
  local_86 = *(undefined1 *)(unaff_RDI + 0xfa);
  local_85 = *(undefined1 *)(unaff_RDI + 0xfb);
  local_84 = *(undefined8 *)(unaff_RDI + 0xfc);
  local_7c = *(undefined4 *)(unaff_RDI + 0x104);
  local_e8 = unaff_RDI + 0xa8;
  local_f0 = (uchar *)(unaff_RDI + 0xf8);
  uVar22 = 0x20;
  if (*(longlong *)(unaff_RDI + 0xd0) != 0x10) {
    uVar22 = (uVar41 & 0xff) + 1;
    *(char *)(unaff_RDI + 0x107) = (char)uVar22;
    uVar22 = (uVar47 & 0xff) + (uVar22 >> 8);
    *(char *)(unaff_RDI + 0x106) = (char)uVar22;
    uVar22 = (uVar43 & 0xff) + (uVar22 >> 8);
    *(char *)(unaff_RDI + 0x105) = (char)uVar22;
    uVar22 = (uVar42 & 0xff) + (uVar22 >> 8);
    *(char *)(unaff_RDI + 0x104) = (char)uVar22;
    uVar22 = (uVar46 & 0xff) + (uVar22 >> 8);
    *(char *)(unaff_RDI + 0x103) = (char)uVar22;
    uVar22 = (uVar48 & 0xff) + (uVar22 >> 8);
    *(char *)(unaff_RDI + 0x102) = (char)uVar22;
    uVar26 = (uVar26 & 0xff) + (uVar22 >> 8);
    *(char *)(unaff_RDI + 0x101) = (char)uVar26;
    uVar26 = (uVar27 & 0xff) + (uVar26 >> 8);
    *(char *)(unaff_RDI + 0x100) = (char)uVar26;
    uVar26 = (uVar28 & 0xff) + (uVar26 >> 8);
    *(char *)(unaff_RDI + 0xff) = (char)uVar26;
    uVar26 = (enc & 0xff) + (uVar26 >> 8);
    *(char *)(unaff_RDI + 0xfe) = (char)uVar26;
    uVar26 = (uVar29 & 0xff) + (uVar26 >> 8);
    *(char *)(unaff_RDI + 0xfd) = (char)uVar26;
    uVar26 = (inl & 0xff) + (uVar26 >> 8);
    *(char *)(unaff_RDI + 0xfc) = (char)uVar26;
    uVar26 = (uVar30 & 0xff) + (uVar26 >> 8);
    *(char *)(unaff_RDI + 0xfb) = (char)uVar26;
    uVar26 = (uVar31 & 0xff) + (uVar26 >> 8);
    *(char *)(unaff_RDI + 0xfa) = (char)uVar26;
    iVar23 = (uVar32 & 0xff) + (uVar26 >> 8);
    *(char *)(unaff_RDI + 0xf9) = (char)iVar23;
    *(char *)(unaff_RDI + 0xf8) = cVar19 + (char)((uint)iVar23 >> 8);
    local_78 = *(undefined8 *)local_f0;
    uStack_70 = *(undefined8 *)(unaff_RDI + 0x100);
    uVar22 = 0x30;
  }
  pEVar24 = (EVP_CIPHER_CTX *)&stack0xffffffffffffff68;
  piVar38 = (int *)(ulonglong)uVar22;
  puVar40 = param_4;
  iVar23 = _EVP_CipherUpdate(pEVar24,(uchar *)&local_f4,piVar38,param_4,inl);
  bVar45 = false;
  bVar44 = false;
  if ((iVar23 == 0) || (local_f4 != uVar22)) goto LAB_010636c2;
  ctx = (EVP_CIPHER_CTX *)(unaff_RDI + 0xd8);
  pvVar7 = *(void **)(unaff_RDI + 0xd0);
  _memcpy(pEVar24,pvVar7,(size_t)piVar38);
  uVar17 = *(undefined8 *)((longlong)(local_c8 + 1) + (longlong)pvVar7);
  *(undefined8 *)local_f0 = *(undefined8 *)((longlong)local_c8 + (longlong)pvVar7);
  *(undefined8 *)(local_f0 + 8) = uVar17;
  if ((*(byte *)(unaff_RDI + 0x1c) & 1) == 0) {
    if (((unaff_RSI != 0) || (param_4 != (uchar *)0x0)) || (param_1 != 0)) {
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
      pEVar24 = (EVP_CIPHER_CTX *)(unaff_RDI + 0x120);
      *(undefined8 *)(unaff_RDI + 0x140) = 0;
      *(undefined8 *)(unaff_RDI + 0x148) = 0;
      *(undefined8 *)(unaff_RDI + 0x130) = 0;
      *(undefined8 *)(unaff_RDI + 0x138) = 0;
      *(undefined8 *)(unaff_RDI + 0x120) = 0;
      *(undefined8 *)(unaff_RDI + 0x128) = 0;
      uStack_55 = '\x01';
      uStack_45 = '\x02';
      uVar26 = (uint)(*(longlong *)(unaff_RDI + 0xd0) != 0x10) << 4 | 0x20;
      piVar38 = (int *)(ulonglong)uVar26;
      local_d8 = 0x10;
      *(undefined4 *)(unaff_RDI + 0x121) = *(undefined4 *)(unaff_RDI + 0x121);
      *(undefined4 *)(unaff_RDI + 0x125) = *(undefined4 *)(unaff_RDI + 0x125);
      *(undefined4 *)(unaff_RDI + 0x129) = *(undefined4 *)(unaff_RDI + 0x129);
      *(undefined4 *)(unaff_RDI + 0x12d) = *(undefined4 *)(unaff_RDI + 0x12d);
      if ((dword *)(piVar38 + -4) != &MACH_HEADER.ncmds) {
        *(uint *)(unaff_RDI + 0x131) = *(uint *)(unaff_RDI + 0x131) ^ 0x10000;
        *(undefined4 *)(unaff_RDI + 0x135) = *(undefined4 *)(unaff_RDI + 0x135);
        *(undefined4 *)(unaff_RDI + 0x139) = *(undefined4 *)(unaff_RDI + 0x139);
        *(undefined4 *)(unaff_RDI + 0x13d) = *(undefined4 *)(unaff_RDI + 0x13d);
      }
      uVar20 = (ulonglong)(piVar38 + -4) | 1;
      puVar6 = (ulonglong *)(unaff_RDI + 0x120 + uVar20);
      *puVar6 = *puVar6 ^ *(ulonglong *)((longlong)&stack0xffffffffffffff98 + uVar20);
      pbVar5 = (byte *)(unaff_RDI + 0x119 + (longlong)piVar38);
      *pbVar5 = *pbVar5 ^ ((undefined1 *)((longlong)register0x00000020 + -0x6f))[(longlong)piVar38];
      pbVar5 = (byte *)(unaff_RDI + 0x11a + (longlong)piVar38);
      *pbVar5 = *pbVar5 ^ ((undefined1 *)((longlong)register0x00000020 + -0x6e))[(longlong)piVar38];
      pbVar5 = (byte *)(unaff_RDI + 0x11b + (longlong)piVar38);
      *pbVar5 = *pbVar5 ^ ((undefined1 *)((longlong)register0x00000020 + -0x6d))[(longlong)piVar38];
      pbVar5 = (byte *)(unaff_RDI + 0x11c + (longlong)piVar38);
      *pbVar5 = *pbVar5 ^ ((undefined1 *)((longlong)register0x00000020 + -0x6c))[(longlong)piVar38];
      pbVar5 = (byte *)(unaff_RDI + 0x11d + (longlong)piVar38);
      *pbVar5 = *pbVar5 ^ ((undefined1 *)((longlong)register0x00000020 + -0x6b))[(longlong)piVar38];
      pbVar5 = (byte *)(unaff_RDI + 0x11e + (longlong)piVar38);
      *pbVar5 = *pbVar5 ^ ((undefined1 *)((longlong)register0x00000020 + -0x6a))[(longlong)piVar38];
      pbVar5 = (byte *)(unaff_RDI + 0x11f + (longlong)piVar38);
      *pbVar5 = *pbVar5 ^ ((undefined1 *)((longlong)register0x00000020 + -0x69))[(longlong)piVar38];
      iVar23 = _EVP_CipherUpdate(pEVar24,(uchar *)&local_d8,piVar38,puVar40,inl);
      if ((iVar23 == 0) || (local_d8 != uVar26)) goto LAB_010636c2;
      uVar20 = param_2;
      if (unaff_RSI == 0) {
        uVar20 = 0;
      }
      if (param_4 == (uchar *)0x0) {
        local_res8 = 0;
      }
      if (param_1 == 0) {
        param_3 = 0;
      }
      lVar34 = param_3 + uVar20 + local_res8;
      *(char *)(unaff_RDI + 0x108) = (char)((ulonglong)lVar34 >> 0x18);
      *(char *)(unaff_RDI + 0x109) = (char)((ulonglong)lVar34 >> 0x10);
      *(char *)(unaff_RDI + 0x10a) = (char)((ulonglong)lVar34 >> 8);
      *(char *)(unaff_RDI + 0x10b) = (char)lVar34;
      *(undefined2 *)(unaff_RDI + 0x10c) = 0;
      *(undefined1 *)(unaff_RDI + 0x10e) = 0;
      *(char *)(unaff_RDI + 0x10f) = *(char *)(unaff_RDI + 0xd0) + '\x10';
      *(undefined8 *)(unaff_RDI + 0x118) = 8;
      iVar23 = FUN_01063840();
      bVar45 = bVar44;
      if (((iVar23 == 0) || (iVar23 = FUN_01063840(extraout_XMM0_Da,local_res8), iVar23 == 0)) ||
         ((iVar23 = FUN_01063840(extraout_XMM0_Da_00,param_3), iVar23 == 0 ||
          (iVar23 = FUN_01063840(), iVar23 == 0)))) goto LAB_010636c2;
      if (*(longlong *)(unaff_RDI + 0x118) != 0) {
        puVar1 = (undefined8 *)(unaff_RDI + 0x108);
        ___bzero();
        local_68 = (uint)*puVar1;
        uStack_64 = (uint)((ulonglong)*puVar1 >> 0x20);
        uStack_60 = (uint)*(undefined8 *)(unaff_RDI + 0x110);
        uStack_5c = (uint)((ulonglong)*(undefined8 *)(unaff_RDI + 0x110) >> 0x20);
        uVar17 = *puVar1;
        local_58 = (uchar)uVar17;
        _uStack_57 = (undefined2)((ulonglong)uVar17 >> 8);
        uStack_55 = (uchar)((ulonglong)uVar17 >> 0x18);
        uStack_54 = (uint)((ulonglong)uVar17 >> 0x20);
        uStack_50 = (uint)*(undefined8 *)(unaff_RDI + 0x110);
        uStack_4c = (uint)((ulonglong)*(undefined8 *)(unaff_RDI + 0x110) >> 0x20);
        uVar26 = 0x20;
        if (*(longlong *)(unaff_RDI + 0xd0) != 0x10) {
          uVar18 = *puVar1;
          _uStack_40 = *(undefined8 *)(unaff_RDI + 0x110);
          local_48 = (uchar)uVar18;
          _uStack_47 = (undefined2)((ulonglong)uVar18 >> 8);
          uStack_45 = (uchar)((ulonglong)uVar18 >> 0x18);
          uStack_44 = (uint)((ulonglong)uVar18 >> 0x20);
          uVar26 = 0x30;
        }
        local_d8 = 0x10;
        *(uint *)(unaff_RDI + 0x120) = *(uint *)(unaff_RDI + 0x120) ^ local_68;
        *(uint *)(unaff_RDI + 0x124) = *(uint *)(unaff_RDI + 0x124) ^ uStack_64;
        *(uint *)(unaff_RDI + 0x128) = *(uint *)(unaff_RDI + 0x128) ^ uStack_60;
        *(uint *)(unaff_RDI + 300) = *(uint *)(unaff_RDI + 300) ^ uStack_5c;
        *(uint *)(unaff_RDI + 0x130) = *(uint *)(unaff_RDI + 0x130) ^ (uint)uVar17;
        *(uint *)(unaff_RDI + 0x134) = *(uint *)(unaff_RDI + 0x134) ^ uStack_54;
        *(uint *)(unaff_RDI + 0x138) = *(uint *)(unaff_RDI + 0x138) ^ uStack_50;
        *(uint *)(unaff_RDI + 0x13c) = *(uint *)(unaff_RDI + 0x13c) ^ uStack_4c;
        if (*(longlong *)(unaff_RDI + 0xd0) != 0x10) {
          *(uint *)(unaff_RDI + 0x140) =
               *(uint *)(unaff_RDI + 0x140) ^ CONCAT13(uStack_45,CONCAT21(_uStack_47,local_48));
          *(uint *)(unaff_RDI + 0x144) = *(uint *)(unaff_RDI + 0x144) ^ uStack_44;
          *(uint *)(unaff_RDI + 0x148) = *(uint *)(unaff_RDI + 0x148) ^ uStack_40;
          *(uint *)(unaff_RDI + 0x14c) = *(uint *)(unaff_RDI + 0x14c) ^ uStack_3c;
        }
        iVar23 = _EVP_CipherUpdate(pEVar24,(uchar *)&local_d8,(int *)(ulonglong)uVar26,puVar40,inl);
        if ((iVar23 == 0) || (local_d8 != uVar26)) goto LAB_010636c2;
      }
      puVar40 = (uchar *)0xffffffff;
      iVar23 = _EVP_CipherInit_ex(pEVar24,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0xffffffff,
                                  (uchar *)CONCAT44(uVar29,inl),enc);
      if ((iVar23 == 0) ||
         ((iVar23 = _EVP_CipherUpdate((EVP_CIPHER_CTX *)
                                      (unaff_RDI + *(longlong *)(unaff_RDI + 0xd0) + 0x120),
                                      (uchar *)&local_d4,(int *)&MACH_HEADER.ncmds,puVar40,inl),
          iVar23 == 0 || (local_d4 != 0x10)))) goto LAB_010636c2;
      iVar23 = _EVP_CipherUpdate(pEVar24,(uchar *)&local_d4,(int *)&MACH_HEADER.ncmds,puVar40,inl);
      if (((iVar23 == 0) || (local_d4 != 0x10)) ||
         ((*(longlong *)(unaff_RDI + 0xd0) != 0x10 &&
          ((iVar23 = _EVP_CipherUpdate((EVP_CIPHER_CTX *)(unaff_RDI + 0x130),(uchar *)&local_d4,
                                       (int *)&MACH_HEADER.ncmds,puVar40,inl), iVar23 == 0 ||
           (local_d4 != 0x10)))))) goto LAB_010636c2;
    }
    if ((param_2 != 0) && (uVar20 = *(ulonglong *)(unaff_RDI + 0x90), uVar20 != 0)) {
      uVar35 = *(ulonglong *)(unaff_RDI + 0xd0);
      uVar25 = uVar35;
      if (uVar20 < uVar35) {
        uVar25 = uVar20;
      }
      if (uVar25 != 0) {
        if (uVar25 < 8) {
          uVar21 = 0;
LAB_01063587:
          do {
            pbVar5 = (byte *)(unaff_RDI + 0xd8 + uVar21);
            *pbVar5 = *pbVar5 ^ *(byte *)(unaff_RDI + 0x120 + uVar21);
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
              puVar6 = (ulonglong *)(unaff_RDI + 0xd8 + uVar35);
              *puVar6 = *puVar6 ^ *(ulonglong *)(unaff_RDI + 0x120 + uVar35);
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
              puVar2 = (uint *)(unaff_RDI + 0x120 + lVar34);
              uVar26 = puVar2[1];
              uVar27 = puVar2[2];
              uVar28 = puVar2[3];
              puVar3 = (uint *)(unaff_RDI + 0x130 + lVar34);
              uVar30 = *puVar3;
              uVar31 = puVar3[1];
              uVar32 = puVar3[2];
              uVar22 = puVar3[3];
              puVar3 = (uint *)(unaff_RDI + 0xd8 + lVar34);
              uVar41 = puVar3[1];
              uVar42 = puVar3[2];
              uVar43 = puVar3[3];
              puVar4 = (uint *)(unaff_RDI + 0xe8 + lVar34);
              uVar46 = *puVar4;
              uVar47 = puVar4[1];
              uVar48 = puVar4[2];
              uVar8 = puVar4[3];
              puVar4 = (uint *)(unaff_RDI + 0xf8 + lVar34);
              uVar9 = *puVar4;
              uVar10 = puVar4[1];
              uVar11 = puVar4[2];
              uVar12 = puVar4[3];
              puVar4 = (uint *)(unaff_RDI + 0x108 + lVar34);
              uVar13 = *puVar4;
              uVar14 = puVar4[1];
              uVar15 = puVar4[2];
              uVar16 = puVar4[3];
              puVar4 = (uint *)(unaff_RDI + 0xd8 + lVar34);
              *puVar4 = *puVar3 ^ *puVar2;
              puVar4[1] = uVar41 ^ uVar26;
              puVar4[2] = uVar42 ^ uVar27;
              puVar4[3] = uVar43 ^ uVar28;
              puVar2 = (uint *)(unaff_RDI + 0xe8 + lVar34);
              *puVar2 = uVar46 ^ uVar30;
              puVar2[1] = uVar47 ^ uVar31;
              puVar2[2] = uVar48 ^ uVar32;
              puVar2[3] = uVar8 ^ uVar22;
              puVar2 = (uint *)(unaff_RDI + 0x140 + lVar34);
              uVar26 = puVar2[1];
              uVar27 = puVar2[2];
              uVar28 = puVar2[3];
              puVar3 = (uint *)(unaff_RDI + 0x150 + lVar34);
              uVar30 = *puVar3;
              uVar31 = puVar3[1];
              uVar32 = puVar3[2];
              uVar22 = puVar3[3];
              puVar3 = (uint *)(unaff_RDI + 0xf8 + lVar34);
              *puVar3 = *puVar2 ^ uVar9;
              puVar3[1] = uVar26 ^ uVar10;
              puVar3[2] = uVar27 ^ uVar11;
              puVar3[3] = uVar28 ^ uVar12;
              puVar2 = (uint *)(unaff_RDI + 0x108 + lVar34);
              *puVar2 = uVar30 ^ uVar13;
              puVar2[1] = uVar31 ^ uVar14;
              puVar2[2] = uVar32 ^ uVar15;
              puVar2[3] = uVar22 ^ uVar16;
              lVar34 = lVar34 + 0x40;
              lVar33 = lVar33 + 2;
            } while (lVar33 != 0);
          }
          if ((uVar35 & 1) != 0) {
            puVar2 = (uint *)(unaff_RDI + 0xd8 + lVar34);
            uVar26 = puVar2[1];
            uVar27 = puVar2[2];
            uVar28 = puVar2[3];
            puVar3 = (uint *)(unaff_RDI + 0xe8 + lVar34);
            uVar30 = *puVar3;
            uVar31 = puVar3[1];
            uVar32 = puVar3[2];
            uVar22 = puVar3[3];
            puVar3 = (uint *)(unaff_RDI + 0x120 + lVar34);
            uVar41 = puVar3[1];
            uVar42 = puVar3[2];
            uVar43 = puVar3[3];
            puVar4 = (uint *)(unaff_RDI + 0x130 + lVar34);
            uVar46 = *puVar4;
            uVar47 = puVar4[1];
            uVar48 = puVar4[2];
            uVar8 = puVar4[3];
            puVar4 = (uint *)(unaff_RDI + 0xd8 + lVar34);
            *puVar4 = *puVar3 ^ *puVar2;
            puVar4[1] = uVar41 ^ uVar26;
            puVar4[2] = uVar42 ^ uVar27;
            puVar4[3] = uVar43 ^ uVar28;
            puVar2 = (uint *)(unaff_RDI + 0xe8 + lVar34);
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
        uVar35 = *(ulonglong *)(unaff_RDI + 0xd0);
      }
      uVar25 = uVar20 - uVar35;
      if (uVar35 <= uVar20 && uVar25 != 0) {
        uVar20 = 0x10;
        if (uVar25 < 0x10) {
          uVar20 = uVar25;
        }
        if (uVar20 != 0) {
          if ((uVar20 < 8) ||
             ((uVar21 = uVar35 + unaff_RDI + 0x120,
              local_f0 < (uchar *)(uVar35 + uVar20 + unaff_RDI + 0x120) &&
              (uVar21 < uVar20 + unaff_RDI + 0xf8)))) {
            uVar25 = 0;
          }
          else {
            if (uVar25 < 0x10) {
              uVar37 = 0;
            }
            else {
              uVar25 = (ulonglong)((uint)uVar20 & 0x10);
              uVar37 = (uVar25 - 0x10 >> 4) + 1;
              uVar39 = (ulonglong)((uint)uVar37 & 3);
              if (uVar25 - 0x10 < 0x30) {
                lVar33 = 0;
              }
              else {
                lVar34 = uVar35 + unaff_RDI;
                lVar36 = -(uVar37 & 0xfffffffffffffffc);
                lVar33 = 0;
                do {
                  puVar2 = (uint *)(lVar34 + 0x120 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(unaff_RDI + 0xf8 + lVar33);
                  uVar30 = puVar3[1];
                  uVar31 = puVar3[2];
                  uVar32 = puVar3[3];
                  puVar4 = (uint *)(unaff_RDI + 0x108 + lVar33);
                  uVar22 = *puVar4;
                  uVar41 = puVar4[1];
                  uVar42 = puVar4[2];
                  uVar43 = puVar4[3];
                  puVar4 = (uint *)(unaff_RDI + 0x118 + lVar33);
                  uVar46 = *puVar4;
                  uVar47 = puVar4[1];
                  uVar48 = puVar4[2];
                  uVar8 = puVar4[3];
                  puVar4 = (uint *)(unaff_RDI + 0x128 + lVar33);
                  uVar9 = *puVar4;
                  uVar10 = puVar4[1];
                  uVar11 = puVar4[2];
                  uVar12 = puVar4[3];
                  puVar4 = (uint *)(unaff_RDI + 0xf8 + lVar33);
                  *puVar4 = *puVar3 ^ *puVar2;
                  puVar4[1] = uVar30 ^ uVar26;
                  puVar4[2] = uVar31 ^ uVar27;
                  puVar4[3] = uVar32 ^ uVar28;
                  puVar2 = (uint *)(lVar34 + 0x130 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(unaff_RDI + 0x108 + lVar33);
                  *puVar3 = *puVar2 ^ uVar22;
                  puVar3[1] = uVar26 ^ uVar41;
                  puVar3[2] = uVar27 ^ uVar42;
                  puVar3[3] = uVar28 ^ uVar43;
                  puVar2 = (uint *)(lVar34 + 0x140 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(unaff_RDI + 0x118 + lVar33);
                  *puVar3 = *puVar2 ^ uVar46;
                  puVar3[1] = uVar26 ^ uVar47;
                  puVar3[2] = uVar27 ^ uVar48;
                  puVar3[3] = uVar28 ^ uVar8;
                  puVar2 = (uint *)(lVar34 + 0x150 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(unaff_RDI + 0x128 + lVar33);
                  *puVar3 = *puVar2 ^ uVar9;
                  puVar3[1] = uVar26 ^ uVar10;
                  puVar3[2] = uVar27 ^ uVar11;
                  puVar3[3] = uVar28 ^ uVar12;
                  lVar33 = lVar33 + 0x40;
                  lVar36 = lVar36 + 4;
                } while (lVar36 != 0);
              }
              if (uVar39 != 0) {
                lVar36 = lVar33 + unaff_RDI + 0xf8;
                lVar34 = 0;
                do {
                  puVar2 = (uint *)(unaff_RDI + lVar33 + uVar35 + 0x120 + lVar34);
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
            uVar25 = (ulonglong)((uint)uVar20 & 0x18);
            do {
              puVar6 = (ulonglong *)(unaff_RDI + 0xf8 + uVar37);
              *puVar6 = *puVar6 ^ *(ulonglong *)(uVar21 + uVar37);
              uVar37 = uVar37 + 8;
            } while (uVar25 != uVar37);
            if (uVar20 == uVar25) goto LAB_01063670;
          }
LAB_01063606:
          uVar21 = uVar25;
          if ((uVar20 & 1) != 0) {
            pbVar5 = (byte *)(unaff_RDI + 0xf8 + uVar25);
            *pbVar5 = *pbVar5 ^ *(byte *)(unaff_RDI + 0x120 + uVar25 + uVar35);
            uVar21 = uVar25 | 1;
          }
          if (uVar20 != (uVar25 | 1)) {
            do {
              pbVar5 = (byte *)(unaff_RDI + 0xf8 + uVar21);
              *pbVar5 = *pbVar5 ^ *(byte *)(uVar35 + unaff_RDI + 0x120 + uVar21);
              pbVar5 = (byte *)(unaff_RDI + 0xf9 + uVar21);
              *pbVar5 = *pbVar5 ^ *(byte *)(uVar35 + unaff_RDI + 0x121 + uVar21);
              uVar21 = uVar21 + 2;
            } while (uVar20 != uVar21);
          }
        }
      }
    }
  }
  else {
    if ((unaff_RSI != 0) && (param_2 != 0)) {
      uVar20 = *(ulonglong *)(unaff_RDI + 0xd0);
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
            pbVar5 = (byte *)(unaff_RDI + 0xd8 + uVar20);
            *pbVar5 = *pbVar5 ^ *(byte *)(unaff_RSI + uVar20);
            uVar20 = uVar20 + 1;
          }
          if (2 < uVar21 + uVar35) {
            do {
              pbVar5 = (byte *)(unaff_RDI + 0xd8 + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(unaff_RSI + uVar20);
              pbVar5 = (byte *)(unaff_RDI + 0xd9 + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(unaff_RSI + 1 + uVar20);
              pbVar5 = (byte *)(unaff_RDI + 0xda + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(unaff_RSI + 2 + uVar20);
              pbVar5 = (byte *)(unaff_RDI + 0xdb + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(unaff_RSI + 3 + uVar20);
              uVar20 = uVar20 + 4;
            } while (uVar35 != uVar20);
          }
        }
        else {
          if ((ctx < (EVP_CIPHER_CTX *)(unaff_RSI + uVar35)) &&
             (unaff_RSI < uVar35 + unaff_RDI + 0xd8)) {
            uVar20 = 0;
            goto LAB_01062e4a;
          }
          if (uVar35 < 0x20) {
            uVar25 = 0;
LAB_01062e1c:
            uVar20 = uVar35 & 0xfffffffffffffff8;
            do {
              puVar6 = (ulonglong *)(unaff_RDI + 0xd8 + uVar25);
              *puVar6 = *puVar6 ^ *(ulonglong *)(unaff_RSI + uVar25);
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
                puVar2 = (uint *)(unaff_RSI + lVar34);
                uVar26 = puVar2[1];
                uVar27 = puVar2[2];
                uVar28 = puVar2[3];
                puVar3 = (uint *)(unaff_RSI + 0x10 + lVar34);
                uVar30 = *puVar3;
                uVar31 = puVar3[1];
                uVar32 = puVar3[2];
                uVar22 = puVar3[3];
                puVar3 = (uint *)(unaff_RDI + 0xd8 + lVar34);
                uVar41 = puVar3[1];
                uVar42 = puVar3[2];
                uVar43 = puVar3[3];
                puVar4 = (uint *)(unaff_RDI + 0xe8 + lVar34);
                uVar46 = *puVar4;
                uVar47 = puVar4[1];
                uVar48 = puVar4[2];
                uVar8 = puVar4[3];
                puVar4 = (uint *)(unaff_RDI + 0xf8 + lVar34);
                uVar9 = *puVar4;
                uVar10 = puVar4[1];
                uVar11 = puVar4[2];
                uVar12 = puVar4[3];
                puVar4 = (uint *)(unaff_RDI + 0x108 + lVar34);
                uVar13 = *puVar4;
                uVar14 = puVar4[1];
                uVar15 = puVar4[2];
                uVar16 = puVar4[3];
                puVar4 = (uint *)(unaff_RDI + 0xd8 + lVar34);
                *puVar4 = *puVar3 ^ *puVar2;
                puVar4[1] = uVar41 ^ uVar26;
                puVar4[2] = uVar42 ^ uVar27;
                puVar4[3] = uVar43 ^ uVar28;
                puVar2 = (uint *)(unaff_RDI + 0xe8 + lVar34);
                *puVar2 = uVar46 ^ uVar30;
                puVar2[1] = uVar47 ^ uVar31;
                puVar2[2] = uVar48 ^ uVar32;
                puVar2[3] = uVar8 ^ uVar22;
                puVar2 = (uint *)(unaff_RSI + 0x20 + lVar34);
                uVar26 = puVar2[1];
                uVar27 = puVar2[2];
                uVar28 = puVar2[3];
                puVar3 = (uint *)(unaff_RSI + 0x30 + lVar34);
                uVar30 = *puVar3;
                uVar31 = puVar3[1];
                uVar32 = puVar3[2];
                uVar22 = puVar3[3];
                puVar3 = (uint *)(unaff_RDI + 0xf8 + lVar34);
                *puVar3 = *puVar2 ^ uVar9;
                puVar3[1] = uVar26 ^ uVar10;
                puVar3[2] = uVar27 ^ uVar11;
                puVar3[3] = uVar28 ^ uVar12;
                puVar2 = (uint *)(unaff_RDI + 0x108 + lVar34);
                *puVar2 = uVar30 ^ uVar13;
                puVar2[1] = uVar31 ^ uVar14;
                puVar2[2] = uVar32 ^ uVar15;
                puVar2[3] = uVar22 ^ uVar16;
                lVar34 = lVar34 + 0x40;
                lVar33 = lVar33 + 2;
              } while (lVar33 != 0);
            }
            if ((uVar25 & 1) != 0) {
              puVar2 = (uint *)(unaff_RSI + lVar34);
              uVar26 = puVar2[1];
              uVar27 = puVar2[2];
              uVar28 = puVar2[3];
              puVar3 = (uint *)(unaff_RSI + 0x10 + lVar34);
              uVar30 = *puVar3;
              uVar31 = puVar3[1];
              uVar32 = puVar3[2];
              uVar22 = puVar3[3];
              puVar3 = (uint *)(unaff_RDI + 0xd8 + lVar34);
              uVar41 = puVar3[1];
              uVar42 = puVar3[2];
              uVar43 = puVar3[3];
              puVar4 = (uint *)(unaff_RDI + 0xe8 + lVar34);
              uVar46 = *puVar4;
              uVar47 = puVar4[1];
              uVar48 = puVar4[2];
              uVar8 = puVar4[3];
              puVar4 = (uint *)(unaff_RDI + 0xd8 + lVar34);
              *puVar4 = *puVar3 ^ *puVar2;
              puVar4[1] = uVar41 ^ uVar26;
              puVar4[2] = uVar42 ^ uVar27;
              puVar4[3] = uVar43 ^ uVar28;
              puVar2 = (uint *)(unaff_RDI + 0xe8 + lVar34);
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
        uVar20 = *(ulonglong *)(unaff_RDI + 0xd0);
      }
      if (uVar20 < param_2) {
        param_2 = param_2 - uVar20;
        uVar35 = 0x10;
        if (param_2 < 0x10) {
          uVar35 = param_2;
        }
        if (uVar35 != 0) {
          if ((uVar35 < 8) ||
             ((local_f0 < (uchar *)(uVar20 + uVar35 + unaff_RSI) &&
              (unaff_RSI + uVar20 < uVar35 + unaff_RDI + 0xf8)))) {
            uVar25 = 0;
          }
          else {
            if (param_2 < 0x10) {
              uVar21 = 0;
            }
            else {
              uVar25 = (ulonglong)((uint)uVar35 & 0x10);
              uVar21 = (uVar25 - 0x10 >> 4) + 1;
              uVar37 = (ulonglong)((uint)uVar21 & 3);
              if (uVar25 - 0x10 < 0x30) {
                lVar33 = 0;
              }
              else {
                lVar34 = uVar20 + unaff_RSI;
                lVar36 = -(uVar21 & 0xfffffffffffffffc);
                lVar33 = 0;
                do {
                  puVar2 = (uint *)(lVar34 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(unaff_RDI + 0xf8 + lVar33);
                  uVar30 = puVar3[1];
                  uVar31 = puVar3[2];
                  uVar32 = puVar3[3];
                  puVar4 = (uint *)(unaff_RDI + 0x108 + lVar33);
                  uVar22 = *puVar4;
                  uVar41 = puVar4[1];
                  uVar42 = puVar4[2];
                  uVar43 = puVar4[3];
                  puVar4 = (uint *)(unaff_RDI + 0x118 + lVar33);
                  uVar46 = *puVar4;
                  uVar47 = puVar4[1];
                  uVar48 = puVar4[2];
                  uVar8 = puVar4[3];
                  puVar4 = (uint *)(unaff_RDI + 0x128 + lVar33);
                  uVar9 = *puVar4;
                  uVar10 = puVar4[1];
                  uVar11 = puVar4[2];
                  uVar12 = puVar4[3];
                  puVar4 = (uint *)(unaff_RDI + 0xf8 + lVar33);
                  *puVar4 = *puVar3 ^ *puVar2;
                  puVar4[1] = uVar30 ^ uVar26;
                  puVar4[2] = uVar31 ^ uVar27;
                  puVar4[3] = uVar32 ^ uVar28;
                  puVar2 = (uint *)(lVar34 + 0x10 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(unaff_RDI + 0x108 + lVar33);
                  *puVar3 = *puVar2 ^ uVar22;
                  puVar3[1] = uVar26 ^ uVar41;
                  puVar3[2] = uVar27 ^ uVar42;
                  puVar3[3] = uVar28 ^ uVar43;
                  puVar2 = (uint *)(lVar34 + 0x20 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(unaff_RDI + 0x118 + lVar33);
                  *puVar3 = *puVar2 ^ uVar46;
                  puVar3[1] = uVar26 ^ uVar47;
                  puVar3[2] = uVar27 ^ uVar48;
                  puVar3[3] = uVar28 ^ uVar8;
                  puVar2 = (uint *)(lVar34 + 0x30 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(unaff_RDI + 0x128 + lVar33);
                  *puVar3 = *puVar2 ^ uVar9;
                  puVar3[1] = uVar26 ^ uVar10;
                  puVar3[2] = uVar27 ^ uVar11;
                  puVar3[3] = uVar28 ^ uVar12;
                  lVar33 = lVar33 + 0x40;
                  lVar36 = lVar36 + 4;
                } while (lVar36 != 0);
              }
              if (uVar37 != 0) {
                lVar34 = lVar33 + unaff_RDI + 0xf8;
                lVar36 = 0;
                do {
                  puVar2 = (uint *)(lVar33 + uVar20 + unaff_RSI + lVar36);
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
            uVar25 = (ulonglong)((uint)uVar35 & 0x18);
            do {
              puVar6 = (ulonglong *)(unaff_RDI + 0xf8 + uVar21);
              *puVar6 = *puVar6 ^ *(ulonglong *)(unaff_RSI + uVar20 + uVar21);
              uVar21 = uVar21 + 8;
            } while (uVar25 != uVar21);
            if (uVar35 == uVar25) goto LAB_01062f80;
          }
LAB_01062f1d:
          uVar21 = uVar25;
          if ((uVar35 & 1) != 0) {
            pbVar5 = (byte *)(unaff_RDI + 0xf8 + uVar25);
            *pbVar5 = *pbVar5 ^ *(byte *)(unaff_RSI + uVar25 + uVar20);
            uVar21 = uVar25 | 1;
          }
          if (uVar35 != (uVar25 | 1)) {
            do {
              pbVar5 = (byte *)(unaff_RDI + 0xf8 + uVar21);
              *pbVar5 = *pbVar5 ^ *(byte *)(unaff_RSI + uVar20 + uVar21);
              pbVar5 = (byte *)(unaff_RDI + 0xf9 + uVar21);
              *pbVar5 = *pbVar5 ^ *(byte *)(unaff_RSI + uVar20 + 1 + uVar21);
              uVar21 = uVar21 + 2;
            } while (uVar35 != uVar21);
          }
        }
      }
    }
LAB_01062f80:
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar20 = *(ulonglong *)(unaff_RDI + 0xd0);
      uVar35 = uVar20;
      if (param_3 < uVar20) {
        uVar35 = param_3;
      }
      if (uVar35 != 0) {
        if ((uVar35 < 8) ||
           ((ctx < (EVP_CIPHER_CTX *)(param_1 + uVar35) && (param_1 < uVar35 + unaff_RDI + 0xd8))))
        {
          uVar20 = 0;
LAB_01062fd4:
          uVar21 = ~uVar20;
          for (uVar25 = uVar35 & 3; uVar25 != 0; uVar25 = uVar25 - 1) {
            pbVar5 = (byte *)(unaff_RDI + 0xd8 + uVar20);
            *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + uVar20);
            uVar20 = uVar20 + 1;
          }
          if (2 < uVar21 + uVar35) {
            do {
              pbVar5 = (byte *)(unaff_RDI + 0xd8 + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + uVar20);
              pbVar5 = (byte *)(unaff_RDI + 0xd9 + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 1 + uVar20);
              pbVar5 = (byte *)(unaff_RDI + 0xda + uVar20);
              *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + 2 + uVar20);
              pbVar5 = (byte *)(unaff_RDI + 0xdb + uVar20);
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
            puVar6 = (ulonglong *)(unaff_RDI + 0xd8 + uVar25);
            *puVar6 = *puVar6 ^ *(ulonglong *)(param_1 + uVar25);
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
              puVar3 = (uint *)(unaff_RDI + 0xd8 + lVar34);
              uVar41 = puVar3[1];
              uVar42 = puVar3[2];
              uVar43 = puVar3[3];
              puVar4 = (uint *)(unaff_RDI + 0xe8 + lVar34);
              uVar46 = *puVar4;
              uVar47 = puVar4[1];
              uVar48 = puVar4[2];
              uVar8 = puVar4[3];
              puVar4 = (uint *)(unaff_RDI + 0xf8 + lVar34);
              uVar9 = *puVar4;
              uVar10 = puVar4[1];
              uVar11 = puVar4[2];
              uVar12 = puVar4[3];
              puVar4 = (uint *)(unaff_RDI + 0x108 + lVar34);
              uVar13 = *puVar4;
              uVar14 = puVar4[1];
              uVar15 = puVar4[2];
              uVar16 = puVar4[3];
              puVar4 = (uint *)(unaff_RDI + 0xd8 + lVar34);
              *puVar4 = *puVar3 ^ *puVar2;
              puVar4[1] = uVar41 ^ uVar26;
              puVar4[2] = uVar42 ^ uVar27;
              puVar4[3] = uVar43 ^ uVar28;
              puVar2 = (uint *)(unaff_RDI + 0xe8 + lVar34);
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
              puVar3 = (uint *)(unaff_RDI + 0xf8 + lVar34);
              *puVar3 = *puVar2 ^ uVar9;
              puVar3[1] = uVar26 ^ uVar10;
              puVar3[2] = uVar27 ^ uVar11;
              puVar3[3] = uVar28 ^ uVar12;
              puVar2 = (uint *)(unaff_RDI + 0x108 + lVar34);
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
            puVar3 = (uint *)(unaff_RDI + 0xd8 + lVar34);
            uVar41 = puVar3[1];
            uVar42 = puVar3[2];
            uVar43 = puVar3[3];
            puVar4 = (uint *)(unaff_RDI + 0xe8 + lVar34);
            uVar46 = *puVar4;
            uVar47 = puVar4[1];
            uVar48 = puVar4[2];
            uVar8 = puVar4[3];
            puVar4 = (uint *)(unaff_RDI + 0xd8 + lVar34);
            *puVar4 = *puVar3 ^ *puVar2;
            puVar4[1] = uVar41 ^ uVar26;
            puVar4[2] = uVar42 ^ uVar27;
            puVar4[3] = uVar43 ^ uVar28;
            puVar2 = (uint *)(unaff_RDI + 0xe8 + lVar34);
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
        uVar20 = *(ulonglong *)(unaff_RDI + 0xd0);
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
              (param_1 + uVar20 < uVar35 + unaff_RDI + 0xf8)))) {
            uVar25 = 0;
          }
          else {
            if (param_3 < 0x10) {
              uVar21 = 0;
            }
            else {
              uVar25 = (ulonglong)((uint)uVar35 & 0x10);
              uVar21 = (uVar25 - 0x10 >> 4) + 1;
              uVar37 = (ulonglong)((uint)uVar21 & 3);
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
                  puVar3 = (uint *)(unaff_RDI + 0xf8 + lVar33);
                  uVar30 = puVar3[1];
                  uVar31 = puVar3[2];
                  uVar32 = puVar3[3];
                  puVar4 = (uint *)(unaff_RDI + 0x108 + lVar33);
                  uVar22 = *puVar4;
                  uVar41 = puVar4[1];
                  uVar42 = puVar4[2];
                  uVar43 = puVar4[3];
                  puVar4 = (uint *)(unaff_RDI + 0x118 + lVar33);
                  uVar46 = *puVar4;
                  uVar47 = puVar4[1];
                  uVar48 = puVar4[2];
                  uVar8 = puVar4[3];
                  puVar4 = (uint *)(unaff_RDI + 0x128 + lVar33);
                  uVar9 = *puVar4;
                  uVar10 = puVar4[1];
                  uVar11 = puVar4[2];
                  uVar12 = puVar4[3];
                  puVar4 = (uint *)(unaff_RDI + 0xf8 + lVar33);
                  *puVar4 = *puVar3 ^ *puVar2;
                  puVar4[1] = uVar30 ^ uVar26;
                  puVar4[2] = uVar31 ^ uVar27;
                  puVar4[3] = uVar32 ^ uVar28;
                  puVar2 = (uint *)(lVar34 + 0x10 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(unaff_RDI + 0x108 + lVar33);
                  *puVar3 = *puVar2 ^ uVar22;
                  puVar3[1] = uVar26 ^ uVar41;
                  puVar3[2] = uVar27 ^ uVar42;
                  puVar3[3] = uVar28 ^ uVar43;
                  puVar2 = (uint *)(lVar34 + 0x20 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(unaff_RDI + 0x118 + lVar33);
                  *puVar3 = *puVar2 ^ uVar46;
                  puVar3[1] = uVar26 ^ uVar47;
                  puVar3[2] = uVar27 ^ uVar48;
                  puVar3[3] = uVar28 ^ uVar8;
                  puVar2 = (uint *)(lVar34 + 0x30 + lVar33);
                  uVar26 = puVar2[1];
                  uVar27 = puVar2[2];
                  uVar28 = puVar2[3];
                  puVar3 = (uint *)(unaff_RDI + 0x128 + lVar33);
                  *puVar3 = *puVar2 ^ uVar9;
                  puVar3[1] = uVar26 ^ uVar10;
                  puVar3[2] = uVar27 ^ uVar11;
                  puVar3[3] = uVar28 ^ uVar12;
                  lVar33 = lVar33 + 0x40;
                  lVar36 = lVar36 + 4;
                } while (lVar36 != 0);
              }
              if (uVar37 != 0) {
                lVar34 = lVar33 + unaff_RDI + 0xf8;
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
            uVar25 = (ulonglong)((uint)uVar35 & 0x18);
            do {
              puVar6 = (ulonglong *)(unaff_RDI + 0xf8 + uVar21);
              *puVar6 = *puVar6 ^ *(ulonglong *)(param_1 + uVar20 + uVar21);
              uVar21 = uVar21 + 8;
            } while (uVar25 != uVar21);
            if (uVar35 == uVar25) goto LAB_01063670;
          }
LAB_010630aa:
          uVar21 = uVar25;
          if ((uVar35 & 1) != 0) {
            pbVar5 = (byte *)(unaff_RDI + 0xf8 + uVar25);
            *pbVar5 = *pbVar5 ^ *(byte *)(param_1 + uVar25 + uVar20);
            uVar21 = uVar25 | 1;
          }
          if (uVar35 != (uVar25 | 1)) {
            do {
              pbVar5 = (byte *)(unaff_RDI + 0xf8 + uVar21);
              *pbVar5 = *pbVar5 ^ *(byte *)(uVar20 + param_1 + uVar21);
              pbVar5 = (byte *)(unaff_RDI + 0xf9 + uVar21);
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
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


