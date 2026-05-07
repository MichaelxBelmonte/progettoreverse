// Function: FUN_00a0b73b
// Address: 00a0b73b
// Size: 3104 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00a0b73b(void)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  byte bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong *puVar37;
  
  uVar4 = DAT_028a0704;
  uVar19 = DAT_028a0700;
  uVar13 = DAT_028a0634;
  uVar3 = DAT_028a061c;
  uVar2 = DAT_028a059c;
  uVar6 = DAT_028a0514;
  puVar1 = DAT_028a04d0;
  uVar14 = (ulonglong)DAT_028a0514;
  uVar12 = DAT_028a0514 >> 0x18 | (DAT_028a0514 & 0xff0000) >> 8 | (DAT_028a0514 & 0xff00) << 8 |
           DAT_028a0514 << 0x18;
  uVar32 = DAT_028a0704 ^ DAT_028a061c;
  uVar23 = DAT_028a0634 | DAT_028a0700;
  uVar27 = CONCAT44(DAT_028a0758,DAT_028a0758) ^ DAT_028a04d0[-6] |
           CONCAT44(DAT_028a0558,DAT_028a0558) ^ DAT_028a04d0[-0x1e];
  uVar22 = ~DAT_028a059c & 0xff;
  _DAT_028a0814 = ~DAT_028a059c << 0x18 | uVar22 | uVar22 << 0x10 | uVar22 << 8;
  uVar25 = CONCAT44(_DAT_028a0814,_DAT_028a0814);
  DAT_028a0520 = uVar12;
  DAT_028a04d0[-5] = uVar27 ^ uVar25;
  uVar36 = CONCAT44(DAT_028a070c,DAT_028a070c);
  uVar26 = CONCAT44(uVar2,uVar2);
  *(ulonglong *)((longlong)puVar1 - (uVar14 ^ 0x2245ad9c)) =
       puVar1[-0x13] ^ uVar26 ^ uVar36 ^ uVar27;
  uVar16 = CONCAT44(uVar13,uVar13);
  uVar17 = CONCAT44(uVar4,uVar4);
  uVar28 = (CONCAT44(DAT_028a06dc,DAT_028a06dc) ^ puVar1[-0x15]) + (puVar1[-0xc] ^ uVar26) ^ uVar16;
  puVar1[-0x18] = uVar28;
  puVar1[-0x19] =
       (CONCAT44(DAT_028a07e4,DAT_028a07e4) ^ puVar1[-0x14]) +
       (CONCAT44(uVar6,uVar12) ^ 0x82d60318f7fb3487);
  uVar30 = CONCAT44(uVar19,uVar19);
  bVar15 = (byte)(uVar6 >> 0x18) ^ 2;
  puVar1[-1] = (puVar1[-0xc] ^ uVar26) << (bVar15 & 0x3f) ^ uVar30;
  uVar27 = (ulonglong)uVar23 & 0xff;
  uVar27 = uVar23 << 0x18 | uVar27 | uVar27 << 0x10 | uVar27 << 8;
  _DAT_028a0800 = (undefined4)uVar27;
  uVar20 = (*(ulonglong *)((longlong)puVar1 - (uVar14 ^ 0x2245ad9c)) ^ uVar26) >> (bVar15 & 0x3f);
  uVar27 = uVar27 << 0x20 | uVar27;
  puVar1[-0xe] = uVar20 ^ uVar27;
  uVar23 = uVar32 & 0xff;
  DAT_028a05f4 = uVar32 << 0x18 | uVar23 | uVar23 << 0x10 | uVar23 << 8;
  uVar20 = *(ulonglong *)((longlong)puVar1 - (uVar14 ^ 0x2245adf4)) ^ uVar30 | uVar20;
  uVar24 = CONCAT44(DAT_028a05f4,DAT_028a05f4);
  puVar1[-0x10] = uVar20 ^ uVar24;
  puVar1[-0x12] = uVar16 ^ uVar17 ^ uVar28 ^ uVar20;
  uVar20 = puVar1[-0x17] ^ uVar36;
  uVar21 = CONCAT44(uVar3,uVar3);
  puVar1[-2] = (uVar36 ^ *(ulonglong *)((longlong)puVar1 - (ulonglong)(uVar12 ^ 0xfcad45ba))) +
               uVar20 ^ uVar21;
  puVar1[-0x11] = uVar20 << (bVar15 & 0x3f) ^ uVar17;
  *(ulonglong *)((longlong)puVar1 - (ulonglong)(uVar12 ^ 0xfcad455a)) =
       uVar20 >> (((byte)uVar6 ^ 0xdc) & 0x3f) ^ uVar26;
  uVar3 = DAT_028a04fc;
  uVar36 = (ulonglong)DAT_028a04fc;
  uVar23 = DAT_028a04fc << 0x10 | DAT_028a04fc >> 0x10;
  DAT_028a052c = uVar23;
  puVar1[-6] = -0x5a720064b96ca12c <<
               (((byte)*(undefined4 *)((longlong)puVar1 - ((ulonglong)uVar23 ^ 0xffffff87)) ^
                (byte)uVar2) & 0x3f);
  puVar1[-0x1e] =
       (*(ulonglong *)((longlong)puVar1 - (uVar36 ^ 0xffffff87)) ^ uVar26 | puVar1[-0x11] ^ uVar17)
       ^ uVar27;
  *(ulonglong *)((longlong)puVar1 - (uVar36 ^ 0xffffffd7)) =
       uVar27 ^ uVar21 ^ uVar25 ^ *(ulonglong *)((longlong)puVar1 - (uVar36 ^ 0xffffff0f)) ^
       puVar1[-2];
  puVar1[-0x15] = puVar1[-0x19] << (((byte)uVar3 ^ 0xc9) & 0x3f);
  uVar20 = (CONCAT44(DAT_028a0624,DAT_028a0624) ^ puVar1[-0x1a]) +
           (*(ulonglong *)((longlong)puVar1 - (ulonglong)(uVar23 ^ 0xffffff3f)) ^ uVar16);
  puVar1[-0x14] = uVar20 ^ uVar24;
  uVar33 = CONCAT44(DAT_028a05a0,DAT_028a05a0);
  puVar37 = (ulonglong *)(puVar1[-0xb] ^ uVar33);
  *puVar37 = uVar20 ^ uVar27;
  uVar20 = (puVar1[-5] ^ uVar25) + (CONCAT44(DAT_028a04f0,DAT_028a04f0) ^ puVar1[-0x1d]);
  puVar1[-0xc] = uVar20 ^ uVar16;
  lVar34 = (ulonglong)uVar23 << 0x23;
  uVar28 = lVar34 + uVar36 * 8 ^ 0xfffffffffffffff0;
  puVar1[-7] = (longlong)puVar37 + uVar28 ^ uVar21;
  *(ulonglong *)((longlong)puVar37 + uVar28) = uVar20 ^ uVar27;
  *(ulonglong *)((longlong)puVar1 - (uVar36 ^ 0xfffffff7)) =
       (CONCAT44(uVar3,uVar23) ^ 0xcc3fc765304d27df) + 0x706a9f4f3ca3d138;
  puVar1[-1] = CONCAT44(uVar3,uVar23) ^ 0xc44d5eca08df324;
  puVar1[-0xe] = (*(ulonglong *)((longlong)puVar1 - (ulonglong)(uVar23 ^ 0xffffffef)) ^ uVar21) +
                 (CONCAT44(DAT_028a078c,DAT_028a078c) ^
                 *(ulonglong *)((longlong)puVar1 - (ulonglong)(uVar23 ^ 0xffffff97))) ^ uVar30;
  puVar1[-0xd] = 0x7cdb6888cfd70fdb;
  puVar1[-2] = CONCAT44(uVar3,uVar6) ^ 0x469e76f56373bcb8;
  *(ulonglong *)((longlong)puVar1 - (ulonglong)(uVar23 ^ 0xffffff7f)) =
       (CONCAT44(uVar12,uVar3) ^ 0x478e099ea4b6745a) >> (((byte)(uVar3 >> 0x10) ^ 0xd6) & 0x3f);
  puVar1[-0x10] = CONCAT44(uVar23,uVar23) ^ 0x9a86459e83951d6a;
  lVar18 = (ulonglong)uVar12 << 0x23;
  uVar20 = lVar18 + uVar14 * 8 ^ 0xe56a2911122d6ff0;
  puVar1[-8] = (longlong)puVar37 + uVar20 ^ uVar26;
  *(ulonglong *)((longlong)puVar37 + uVar20) = uVar27 ^ uVar30 ^ puVar1[-0xe];
  puVar1[-0x13] =
       (CONCAT44(uVar12,uVar23) ^ 0xfcad4522ffffffed) +
       (CONCAT44(DAT_028a0548,DAT_028a0548) ^
       *(ulonglong *)((longlong)puVar1 - (uVar36 ^ 0xffffff1f))) ^ uVar16;
  uVar13 = DAT_028a06e4 ^ *(uint *)((longlong)puVar1 - (uVar36 ^ 0xffffff67));
  puVar1[-0x1c] = CONCAT44(uVar6,uVar3) ^ 0xa98c23f136235ddf;
  *(undefined8 *)((longlong)puVar1 - (uVar14 ^ 0x2245ad74)) = 0x4d039cc044c09410;
  puVar1[-0x17] = 0x336aba498b93b3f2;
  uVar2 = DAT_028a04f8;
  uVar19 = uVar13 & 0xff;
  DAT_028a06e4 = uVar13 << 0x18 | uVar19 | uVar19 << 0x10 | uVar19 << 8;
  uVar29 = CONCAT44(DAT_028a06e4,DAT_028a06e4);
  uVar20 = (ulonglong)DAT_028a04f8;
  *(ulonglong *)((longlong)puVar1 - (uVar20 ^ 0x27e5adcd)) =
       (uVar17 ^ *(ulonglong *)((longlong)puVar1 - (uVar36 ^ 0xffffff6f))) +
       (uVar16 ^ *(ulonglong *)((longlong)puVar1 - (uVar14 ^ 0x2245ad64))) ^ uVar29;
  puVar1[-0x12] = 0x801a31d542bddbcf;
  uVar8 = DAT_028a0534;
  puVar37 = (ulonglong *)(uVar33 ^ puVar1[-0xb]);
  uVar14 = (ulonglong)DAT_028a0534;
  uVar16 = lVar34 + uVar14 * 8 ^ 0xfffffff8c00bd018;
  puVar1[-9] = (longlong)puVar37 + uVar16 ^ uVar29;
  *(ulonglong *)((longlong)puVar37 + uVar16) = puVar1[-6] ^ uVar29 ^ uVar27;
  uVar7 = DAT_028a0530;
  puVar1[-0xf] = CONCAT44(uVar3,DAT_028a0530) ^ 0x858030f5e87f661b;
  uVar32 = DAT_028a0528;
  uVar16 = (ulonglong)DAT_028a0528;
  puVar1[-0x16] = (lVar34 + uVar16 * 8 ^ 0xfffffff93f2d6fe0) + puVar1[-3] ^ uVar29;
  puVar1[-0x1e] = uVar29 ^ uVar27 ^ *puVar37;
  puVar1[-0x14] = 0x4a7c19d99cfd624d;
  uVar5 = _DAT_028a0540;
  uVar9 = DAT_028a0538;
  *puVar37 = CONCAT44(DAT_028a0538,_DAT_028a0540) ^ 0x1f1db5678b2bbc9d;
  *(ulonglong *)((longlong)puVar1 - (ulonglong)(uVar23 ^ 0xffffff07)) = puVar1[3] + 8 ^ uVar30;
  uVar12 = DAT_028a0518;
  uVar28 = (ulonglong)DAT_028a0518;
  *(ulonglong *)puVar1[3] = *(ulonglong *)((longlong)puVar1 - (uVar28 ^ 0xffffff0f)) ^ uVar29;
  puVar1[-0x1e] = 0xc8eb718cf717c19e;
  uVar4 = DAT_028a0508;
  uVar17 = (ulonglong)DAT_028a051c;
  uVar33 = (ulonglong)DAT_028a0508;
  *(ulonglong *)((longlong)puVar1 - (uVar33 ^ 0x88623520)) =
       (lVar18 + uVar17 * 8 ^ 0xe56a29157d3e72f0) + puVar1[-3] ^ uVar24;
  puVar1[-0x15] = CONCAT44(uVar23,uVar6) ^ 0x12c8f44553bc3fea;
  puVar1[-0x19] = *(undefined8 *)(puVar1[-0x16] ^ uVar29);
  puVar1[-0xc] = 0x75c1039840476ddb;
  *(ulonglong *)(puVar1[-7] ^ uVar21) = CONCAT44(uVar6,uVar6) ^ 0xc9584b9ee70a80bb;
  uVar11 = DAT_028a0544;
  uVar19 = DAT_028a0504;
  uVar31 = (ulonglong)DAT_028a0504;
  uVar36 = (uVar31 << 0x23) + (ulonglong)DAT_028a0544 * 8 ^ 0xcb3a04fffffffe8;
  lVar34 = *(longlong *)((longlong)puVar1 + (uVar20 ^ 0x27e5ade5));
  puVar1[-7] = lVar34 + uVar36 ^ uVar25;
  puVar1[-0x13] = CONCAT44(uVar23,uVar23) ^ 0x6bdae1bf98393ce7;
  uVar10 = DAT_028a053c;
  uVar13 = DAT_028a0500;
  uVar25 = (ulonglong)DAT_028a0500;
  puVar1[-0x1a] = CONCAT44(DAT_028a0500,DAT_028a053c) ^ 0x26069ecc88c1a156;
  uVar22 = DAT_028a0524;
  *(ulonglong *)(uVar30 ^ puVar1[-0x1f]) =
       *(ulonglong *)((longlong)puVar1 - ((ulonglong)DAT_028a0524 ^ 0x339a2a96)) ^ uVar27;
  puVar1[-0x19] = 0x3867fb0c0e92de6c;
  lVar35 = ((uVar33 << 5 | uVar16 << 0x25) ^ 0xfcb5bfb10c46af00) + puVar1[-3];
  uVar16 = lVar18 + uVar25 * 8 ^ 0xe56a2917ffffffe0;
  puVar1[-0x16] = lVar35 + uVar16 ^ uVar29;
  puVar1[-3] = CONCAT44(uVar13,uVar5) ^ 0x5a68a3bea182df49;
  puVar1[-0x18] = uVar27 ^ uVar21 ^ *(ulonglong *)(puVar1[-0xb] ^ uVar24);
  puVar1[-0xe] = 0xe4a880f9f37a355d;
  *(undefined8 *)(uVar26 ^ *(ulonglong *)((longlong)puVar1 - (uVar20 ^ 0x27e5adbd))) =
       0xaee3a9123ade78ae;
  uVar5 = DAT_028a050c;
  puVar1[-0xb] = CONCAT44(DAT_028a050c,uVar3) ^ 0xd9c427cc3eebafbb;
  puVar1[-0x1d] = CONCAT44(uVar7,DAT_028a0510) ^ 0xdff889305205f28;
  puVar1[-8] = ((uVar31 << 0x23) + uVar14 * 8 ^ 0xcb3a048c00bd018) +
               *(longlong *)((longlong)puVar1 + (uVar20 ^ 0x27e5ade5));
  *(ulonglong *)(lVar34 + uVar36) =
       uVar21 ^ *(ulonglong *)((longlong)puVar1 - (uVar28 ^ 0xffffff3f));
  puVar1[-0x18] = CONCAT44(uVar19,uVar2) ^ 0x5fd5672d0e981612;
  puVar1[-5] = uVar27 ^ uVar24 ^ *(ulonglong *)(uVar16 + lVar35);
  puVar1[-6] = CONCAT44(uVar5,uVar8) ^ 0xb66ee79179abe4ce;
  *(ulonglong *)(uVar29 ^ puVar1[-9]) = CONCAT44(uVar22,uVar11) ^ 0xe601f6af6ee04f60;
  puVar1[-9] = CONCAT44(uVar3,uVar9) ^ 0xcfe91c23461acc7c;
  *(ulonglong *)((longlong)puVar1 - (uVar17 ^ 0xafa7ceec)) =
       CONCAT44(uVar23,uVar12) ^ 0x53973a1f0f612379;
  *(ulonglong *)puVar1[-8] = uVar24 ^ puVar1[-5];
  puVar1[-5] = CONCAT44(uVar9,uVar6) ^ 0xfbc198e11d29e7c2;
  puVar1[-0x1f] = CONCAT44(uVar10,uVar2) ^ 0xeb44949f1e0cd4ef;
  puVar1[-7] = CONCAT44(uVar32,uVar4) ^ 0x98ec738c5fe8b2d4;
  puVar1[-8] = 0x302d8a302e61bfab;
  if ((undefined4 *)puVar1[4] != (undefined4 *)0x0) {
    *(undefined4 *)puVar1[4] = 0;
  }
  puVar1 = DAT_028a04d0;
  DAT_028a04d0 = (undefined8 *)*DAT_028a04d0;
  DAT_028a04c8 = puVar1 + 1;
  return 0;
}


