// Function: FUN_00f9c380
// Address: 00f9c380
// Size: 1242 bytes
// Class: Unknown


undefined8 FUN_00f9c380(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,int param_4)

{
  undefined1 (*pauVar1) [16];
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
  unkint9 Var12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  ulonglong uVar92;
  ulonglong uVar93;
  ulonglong *puVar94;
  ulonglong *puVar95;
  undefined1 (*pauVar96) [16];
  ulonglong *puVar97;
  ulonglong *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar98;
  ulonglong *puVar99;
  ulonglong uVar100;
  longlong *plVar101;
  uint *puVar102;
  ulonglong uVar103;
  ulonglong uVar104;
  ulonglong uVar105;
  ulonglong uVar106;
  bool bVar107;
  bool bVar108;
  uint uVar109;
  undefined1 auStack_78 [72];
  
  uVar98 = (ulonglong)(uint)(param_4 << 3);
  uVar100 = *param_3;
  puVar97 = (ulonglong *)((ulonglong)(auStack_78 + -uVar98) & 0xffffffffffffff80);
  for (puVar2 = (ulonglong *)
                ((longlong)puVar97 +
                ((ulonglong)(&stack0xffffffffffffffd0 + -(longlong)puVar97) & 0xfffffffffffff000));
      puVar97 < puVar2; puVar2 = puVar2 + -0x200) {
  }
  *puVar2 = uVar98;
  puVar2[2] = (longlong)param_2 + uVar98;
  puVar2[3] = uVar100;
  puVar2[4] = unaff_RDI;
  puVar2[5] = (ulonglong)register0x00000020;
  puVar2[6] = (ulonglong)((uint)(param_4 << 3) >> 5) - 1;
  uVar100 = *param_2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar100;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = *unaff_RSI;
  uVar104 = SUB168(auVar13 * auVar45,0);
  uVar92 = SUB168(auVar13 * auVar45,8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar100;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = unaff_RSI[1];
  uVar3 = SUB168(auVar14 * auVar46,0);
  uVar105 = SUB168(auVar14 * auVar46,8);
  puVar2[1] = (ulonglong)(param_2 + 1);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar100;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = unaff_RSI[2];
  uVar106 = SUB168(auVar15 * auVar47,0);
  uVar98 = (ulonglong)CARRY8(uVar3,uVar92);
  uVar93 = uVar106 + uVar105;
  uVar103 = uVar104 * puVar2[3];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar100;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = unaff_RSI[3];
  puVar97 = unaff_RSI + 4;
  Var6 = (unkuint9)
         (SUB168(auVar15 * auVar47,8) +
         (ulonglong)(CARRY8(uVar106,uVar105) || CARRY8(uVar93,uVar98))) +
         (unkuint9)SUB168(auVar16 * auVar48,0) + (unkuint9)0;
  Var7 = (unkuint9)SUB168(auVar16 * auVar48,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar106 = (ulonglong)Var7;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar103;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = *param_1;
  Var11 = (unkuint9)SUB168(auVar17 * auVar49,8) + (unkuint9)(uVar3 + uVar92) + (unkuint9)0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar103;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_1[1];
  Var7 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar18 * auVar50,0) +
         (unkuint9)
         ((char)((unkuint9)uVar104 + (unkuint9)SUB168(auVar17 * auVar49,0) +
                 (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0') >> 0x40) != '\0');
  Var11 = (unkuint9)SUB168(auVar18 * auVar50,8) + (unkuint9)(uVar93 + uVar98) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar103;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_1[2];
  uVar98 = puVar2[6];
  puVar2[8] = (ulonglong)Var7;
  Var7 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar19 * auVar51,0) +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  Var11 = (unkuint9)SUB168(auVar19 * auVar51,8) + (unkuint9)(ulonglong)Var6 +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar103;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_1[3];
  puVar2[9] = (ulonglong)Var7;
  Var6 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar20 * auVar52,0) +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
  Var7 = (unkuint9)SUB168(auVar20 * auVar52,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  bVar108 = (char)((unkuint9)Var7 >> 0x40) != '\0';
  uVar93 = (ulonglong)Var7;
  param_1 = param_1 + 4;
  puVar2[10] = (ulonglong)Var6;
  puVar94 = puVar2 + 0xc;
  do {
    puVar95 = puVar94;
    Var6 = (unkuint9)uVar93 + (unkuint9)0 + (unkuint9)bVar107;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar100;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = *puVar97;
    Var7 = (unkuint9)SUB168(auVar21 * auVar53,0) + (unkuint9)uVar106 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar100;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = puVar97[1];
    Var11 = (unkuint9)SUB168(auVar22 * auVar54,0) + (unkuint9)SUB168(auVar21 * auVar53,8) +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar100;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = puVar97[2];
    Var8 = (unkuint9)SUB168(auVar23 * auVar55,0) + (unkuint9)SUB168(auVar22 * auVar54,8) +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar100;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = puVar97[3];
    Var9 = (unkuint9)SUB168(auVar24 * auVar56,0) + (unkuint9)SUB168(auVar23 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var10 = (unkuint9)SUB168(auVar24 * auVar56,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar106 = (ulonglong)Var10;
    puVar97 = puVar97 + 4;
    puVar94 = puVar95 + 4;
    Var7 = (unkuint9)(ulonglong)Var7 + (unkuint9)(ulonglong)Var6 + (unkuint9)bVar108;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar103;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = *param_1;
    Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar25 * auVar57,0) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar25 * auVar57,8) +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar103;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = param_1[1];
    Var7 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar26 * auVar58,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar26 * auVar58,8) +
            (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar103;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = param_1[2];
    puVar95[-1] = (ulonglong)Var6;
    Var6 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar27 * auVar59,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    *puVar95 = (ulonglong)Var7;
    Var7 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar27 * auVar59,8) +
           (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar103;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = param_1[3];
    puVar95[1] = (ulonglong)Var6;
    Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar28 * auVar60,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
    uVar93 = SUB168(auVar28 * auVar60,8) + (ulonglong)((char)((unkuint9)Var7 >> 0x40) != '\0');
    param_1 = param_1 + 4;
    puVar95[2] = (ulonglong)Var6;
    bVar108 = SBORROW8(uVar98,1);
    uVar98 = uVar98 - 1;
  } while (uVar98 != 0);
  uVar100 = *puVar2;
  puVar99 = (ulonglong *)puVar2[1];
  uVar98 = (ulonglong)CARRY8(uVar106,uVar93 + bVar107);
  puVar95[3] = uVar106 + uVar93 + bVar107;
  do {
    uVar93 = *puVar99;
    puVar97 = (ulonglong *)((longlong)puVar97 - uVar100);
    *puVar94 = -uVar98;
    param_1 = (ulonglong *)((longlong)param_1 - uVar100);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar93;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = *puVar97;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar93;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = puVar97[1];
    Var7 = (unkuint9)SUB168(auVar29 * auVar61,0) + (unkuint9)puVar2[8] + (unkuint9)0;
    uVar100 = (ulonglong)Var7;
    Var6 = (unkuint9)SUB168(auVar29 * auVar61,8) + (unkuint9)SUB168(auVar30 * auVar62,0) +
           (unkuint9)0;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar93;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = puVar97[2];
    Var7 = (unkuint9)(ulonglong)Var6 + (unkuint9)puVar2[9] +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var6 = (unkuint9)SUB168(auVar30 * auVar62,8) + (unkuint9)SUB168(auVar31 * auVar63,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var11 = (unkuint9)(ulonglong)Var6 + (unkuint9)puVar2[10] +
            (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    puVar2[1] = (ulonglong)(puVar99 + 1);
    uVar104 = uVar100 * puVar2[3];
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar93;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = puVar97[3];
    Var6 = (unkuint9)
           (SUB168(auVar31 * auVar63,8) + (ulonglong)((char)((unkuint9)Var6 >> 0x40) != '\0') +
           (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0')) +
           (unkuint9)SUB168(auVar32 * auVar64,0) + (unkuint9)0;
    Var8 = (unkuint9)(ulonglong)Var6 + (unkuint9)puVar2[0xb] + (unkuint9)0;
    Var6 = (unkuint9)SUB168(auVar32 * auVar64,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    puVar97 = puVar97 + 4;
    Var9 = (unkuint9)(ulonglong)Var6 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar98 = (ulonglong)Var9;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar104;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = *param_1;
    Var7 = (unkuint9)SUB168(auVar33 * auVar65,8) + (unkuint9)(ulonglong)Var7 +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar104;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = param_1[1];
    Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar34 * auVar66,0) +
           (unkuint9)
           ((char)((unkuint9)uVar100 + (unkuint9)SUB168(auVar33 * auVar65,0) +
                   (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0') >> 0x40) != '\0');
    Var7 = (unkuint9)SUB168(auVar34 * auVar66,8) + (unkuint9)(ulonglong)Var11 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar104;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = param_1[2];
    puVar2[8] = (ulonglong)Var6;
    Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar35 * auVar67,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var7 = (unkuint9)SUB168(auVar35 * auVar67,8) + (unkuint9)(ulonglong)Var8 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar104;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = param_1[3];
    puVar2[9] = (ulonglong)Var6;
    param_1 = param_1 + 4;
    Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar36 * auVar68,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
    Var7 = (unkuint9)SUB168(auVar36 * auVar68,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    bVar108 = (char)((unkuint9)Var7 >> 0x40) != '\0';
    uVar106 = (ulonglong)Var7;
    uVar100 = puVar2[6];
    puVar2[10] = (ulonglong)Var6;
    puVar94 = puVar2 + 0xc;
    do {
      puVar95 = puVar94;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar93;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = *puVar97;
      Var6 = (unkuint9)uVar106 + (unkuint9)0 + (unkuint9)bVar107;
      Var11 = (unkuint9)SUB168(auVar37 * auVar69,0) + (unkuint9)uVar98 + (unkuint9)bVar108;
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar93;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = puVar97[1];
      Var7 = (unkuint9)(ulonglong)Var11 + (unkuint9)*puVar95 +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var8 = (unkuint9)SUB168(auVar38 * auVar70,0) + (unkuint9)SUB168(auVar37 * auVar69,8) +
             (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar93;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = puVar97[2];
      Var11 = (unkuint9)(ulonglong)Var8 + (unkuint9)puVar95[1] +
              (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var9 = (unkuint9)SUB168(auVar39 * auVar71,0) + (unkuint9)SUB168(auVar38 * auVar70,8) +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar93;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = puVar97[3];
      Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)puVar95[2] +
             (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      Var10 = (unkuint9)SUB168(auVar40 * auVar72,0) + (unkuint9)SUB168(auVar39 * auVar71,8) +
              (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      Var9 = (unkuint9)(ulonglong)Var10 + (unkuint9)puVar95[3] +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var12 = (unkuint9)SUB168(auVar40 * auVar72,8) + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      puVar97 = puVar97 + 4;
      puVar94 = puVar95 + 4;
      Var10 = (unkuint9)(ulonglong)Var12 + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      uVar98 = (ulonglong)Var10;
      Var7 = (unkuint9)(ulonglong)Var7 + (unkuint9)(ulonglong)Var6 +
             (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar104;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = *param_1;
      Var6 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar41 * auVar73,0) +
             (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar41 * auVar73,8) +
              (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar104;
      auVar74._8_8_ = 0;
      auVar74._0_8_ = param_1[1];
      Var7 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar42 * auVar74,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar42 * auVar74,8) +
              (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar104;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = param_1[2];
      puVar95[-1] = (ulonglong)Var6;
      Var6 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar43 * auVar75,0) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var11 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar43 * auVar75,8) +
              (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar44._8_8_ = 0;
      auVar44._0_8_ = uVar104;
      auVar76._8_8_ = 0;
      auVar76._0_8_ = param_1[3];
      *puVar95 = (ulonglong)Var7;
      puVar95[1] = (ulonglong)Var6;
      Var6 = (unkuint9)(ulonglong)Var11 + (unkuint9)SUB168(auVar44 * auVar76,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      bVar107 = (char)((unkuint9)Var6 >> 0x40) != '\0';
      uVar106 = SUB168(auVar44 * auVar76,8) + (ulonglong)((char)((unkuint9)Var11 >> 0x40) != '\0');
      param_1 = param_1 + 4;
      puVar95[2] = (ulonglong)Var6;
      bVar108 = SBORROW8(uVar100,1);
      uVar100 = uVar100 - 1;
    } while (uVar100 != 0);
    uVar100 = *puVar2;
    puVar99 = (ulonglong *)puVar2[1];
    uVar93 = uVar98 + uVar106 + bVar107;
    uVar98 = (ulonglong)
             (CARRY8(uVar98,uVar106 + bVar107) || CARRY8(uVar93,(ulonglong)(*puVar94 != 0)));
    puVar95[3] = uVar93 + (*puVar94 != 0);
  } while (puVar99 != (ulonglong *)puVar2[2]);
  puVar97 = puVar2 + 8;
  param_1 = (ulonglong *)((longlong)param_1 - uVar100);
  uVar93 = uVar100 >> 5;
  bVar107 = (uVar100 >> 4 & 1) != 0;
  plVar101 = (longlong *)puVar2[4];
  do {
    uVar106 = *puVar97;
    puVar94 = puVar97 + 1;
    puVar95 = puVar97 + 2;
    puVar99 = puVar97 + 3;
    puVar97 = puVar97 + 4;
    uVar104 = (ulonglong)bVar107;
    uVar103 = uVar106 - *param_1;
    uVar106 = (ulonglong)(uVar106 < *param_1 || uVar103 < uVar104);
    uVar105 = *puVar94 - param_1[1];
    uVar3 = (ulonglong)(*puVar94 < param_1[1] || uVar105 < uVar106);
    uVar4 = *puVar95 - param_1[2];
    uVar92 = (ulonglong)(*puVar95 < param_1[2] || uVar4 < uVar3);
    uVar5 = *puVar99 - param_1[3];
    bVar107 = *puVar99 < param_1[3] || uVar5 < uVar92;
    param_1 = param_1 + 4;
    *plVar101 = uVar103 - uVar104;
    plVar101[1] = uVar105 - uVar106;
    plVar101[2] = uVar4 - uVar3;
    plVar101[3] = uVar5 - uVar92;
    plVar101 = plVar101 + 4;
    uVar93 = uVar93 - 1;
  } while (uVar93 != 0);
  uVar109 = (uint)(uVar98 - bVar107);
  pauVar96 = (undefined1 (*) [16])(puVar2 + 8);
  puVar102 = (uint *)((longlong)plVar101 - uVar100);
  do {
    uVar77 = *(uint *)(*pauVar96 + 4);
    uVar78 = *(uint *)(*pauVar96 + 8);
    uVar79 = *(uint *)(*pauVar96 + 0xc);
    uVar80 = *(uint *)pauVar96[1];
    uVar81 = *(uint *)(pauVar96[1] + 4);
    uVar82 = *(uint *)(pauVar96[1] + 8);
    uVar83 = *(uint *)(pauVar96[1] + 0xc);
    pauVar1 = pauVar96 + 2;
    uVar88 = *puVar102;
    uVar89 = puVar102[1];
    uVar90 = puVar102[2];
    uVar91 = puVar102[3];
    uVar84 = puVar102[4];
    uVar85 = puVar102[5];
    uVar86 = puVar102[6];
    uVar87 = puVar102[7];
    *pauVar96 = (undefined1  [16])0x0;
    pauVar96[1] = (undefined1  [16])0x0;
    *puVar102 = uVar88 & -(uint)(uVar109 == 0) | *(uint *)*pauVar96 & uVar109;
    puVar102[1] = uVar89 & -(uint)(uVar109 == 0) | uVar77 & uVar109;
    puVar102[2] = uVar90 & -(uint)(uVar109 == 0) | uVar78 & uVar109;
    puVar102[3] = uVar91 & -(uint)(uVar109 == 0) | uVar79 & uVar109;
    puVar102[4] = uVar84 & -(uint)(uVar109 == 0) | uVar80 & uVar109;
    puVar102[5] = uVar85 & -(uint)(uVar109 == 0) | uVar81 & uVar109;
    puVar102[6] = uVar86 & -(uint)(uVar109 == 0) | uVar82 & uVar109;
    puVar102[7] = uVar87 & -(uint)(uVar109 == 0) | uVar83 & uVar109;
    uVar100 = uVar100 - 0x20;
    pauVar96 = pauVar1;
    puVar102 = puVar102 + 8;
  } while (uVar100 != 0);
  *(undefined8 *)*pauVar1 = 0;
  return 1;
}


