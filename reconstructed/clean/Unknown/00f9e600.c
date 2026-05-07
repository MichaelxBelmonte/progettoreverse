// Function: FUN_00f9e600
// Address: 00f9e600
// Size: 1940 bytes
// Class: Unknown

void FUN_00f9e600(uint64_t *param_1,uint8_t (*param_2) [16],uint64_t param_3,int64_t param_4,
                 int64_t param_5)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  int iVar3;
  uint64_t uVar4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  uint8_t auVar57 [16];
  uint8_t auVar58 [16];
  uint8_t auVar59 [16];
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint8_t auVar62 [16];
  uint8_t auVar63 [16];
  uint8_t auVar64 [16];
  uint8_t auVar65 [16];
  uint8_t auVar66 [16];
  uint8_t auVar67 [16];
  uint8_t auVar68 [16];
  uint8_t auVar69 [16];
  uint8_t auVar70 [16];
  uint8_t auVar71 [16];
  uint8_t auVar72 [16];
  uint64_t uVar73;
  int64_t in_RAX;
  uint64_t uVar74;
  uint64_t *puVar75;
  uint64_t uVar76;
  uint64_t uVar77;
  uint64_t *puVar78;
  uint64_t *puVar79;
  uint64_t *arg1;
  uint64_t *puVar80;
  int64_t *this_ptr;
  uint8_t (*pauVar81) [16];
  uint64_t uVar82;
  uint64_t uVar83;
  int64_t lVar84;
  int64_t lVar85;
  uint64_t uVar86;
  uint64_t uVar87;
  uint64_t uVar88;
  bool bVar89;
  bool bVar90;
  int iVar91;
  int iVar94;
  int iVar95;
  int iVar96;
  uint8_t auVar92 [16];
  uint8_t auVar93 [16];
  uint8_t auVar97 [16];
  int iVar98;
  int iVar100;
  int iVar101;
  int iVar102;
  uint8_t auVar99 [16];
  int iVar103;
  int iVar104;
  int iVar106;
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  uint8_t auVar105 [16];
  uint64_t uStack0000000000000048;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  
  lVar85 = -param_4;
  iVar3 = *(int *)(in_RAX + 8);
  lVar84 = ((uint64_t)(param_4 * -0x20) >> 10) - 1;
  iVar98 = g_00f9fc50 + g_00f9fc50 + g_00f9fc40;
  iVar100 = _UNK_00f9fc54 + _UNK_00f9fc54 + _UNK_00f9fc44;
  iVar101 = _UNK_00f9fc58 + _UNK_00f9fc58 + _UNK_00f9fc48;
  iVar102 = _UNK_00f9fc5c + _UNK_00f9fc5c + _UNK_00f9fc4c;
  *(uint *)((int64_t)&stack0x00000058 + lVar85) = -(uint)(g_00f9fc40 == iVar3);
  *(uint *)((void*)((int64_t)register0x00000020 + 0x5c) + lVar85) =
       -(uint)(_UNK_00f9fc44 == iVar3);
  *(uint *)(&stack0x00000060 + lVar85) = -(uint)(_UNK_00f9fc48 == iVar3);
  *(uint *)(&stack0x00000064 + lVar85) = -(uint)(_UNK_00f9fc4c == iVar3);
  iVar103 = g_00f9fc50 + iVar98;
  iVar106 = _UNK_00f9fc54 + iVar100;
  iVar108 = _UNK_00f9fc58 + iVar101;
  iVar110 = _UNK_00f9fc5c + iVar102;
  *(uint *)(&stack0x00000068 + lVar85) = -(uint)(g_00f9fc50 + g_00f9fc40 == iVar3);
  *(uint *)(&stack0x0000006c + lVar85) = -(uint)(_UNK_00f9fc54 + _UNK_00f9fc44 == iVar3);
  *(uint *)(&stack0x00000070 + lVar85) = -(uint)(_UNK_00f9fc58 + _UNK_00f9fc48 == iVar3);
  *(uint *)(&stack0x00000074 + lVar85) = -(uint)(_UNK_00f9fc5c + _UNK_00f9fc4c == iVar3);
  iVar91 = g_00f9fc50 + iVar103;
  iVar94 = _UNK_00f9fc54 + iVar106;
  iVar95 = _UNK_00f9fc58 + iVar108;
  iVar96 = _UNK_00f9fc5c + iVar110;
  *(uint *)(&stack0x00000078 + lVar85) = -(uint)(iVar98 == iVar3);
  *(uint *)(&stack0x0000007c + lVar85) = -(uint)(iVar100 == iVar3);
  *(uint *)(&stack0x00000080 + lVar85) = -(uint)(iVar101 == iVar3);
  *(uint *)(&stack0x00000084 + lVar85) = -(uint)(iVar102 == iVar3);
  iVar98 = g_00f9fc50 + iVar91;
  iVar100 = _UNK_00f9fc54 + iVar94;
  iVar101 = _UNK_00f9fc58 + iVar95;
  iVar102 = _UNK_00f9fc5c + iVar96;
  *(uint *)(&stack0x00000088 + lVar85) = -(uint)(iVar103 == iVar3);
  *(uint *)(&stack0x0000008c + lVar85) = -(uint)(iVar106 == iVar3);
  *(uint *)(&stack0x00000090 + lVar85) = -(uint)(iVar108 == iVar3);
  *(uint *)(&stack0x00000094 + lVar85) = -(uint)(iVar110 == iVar3);
  iVar103 = g_00f9fc50 + iVar98;
  iVar106 = _UNK_00f9fc54 + iVar100;
  iVar108 = _UNK_00f9fc58 + iVar101;
  iVar110 = _UNK_00f9fc5c + iVar102;
  *(uint *)(&stack0x00000098 + lVar85) = -(uint)(iVar91 == iVar3);
  *(uint *)(&stack0x0000009c + lVar85) = -(uint)(iVar94 == iVar3);
  *(uint *)(&stack0x000000a0 + lVar85) = -(uint)(iVar95 == iVar3);
  *(uint *)(&stack0x000000a4 + lVar85) = -(uint)(iVar96 == iVar3);
  iVar104 = g_00f9fc50 + iVar103;
  iVar107 = _UNK_00f9fc54 + iVar106;
  iVar109 = _UNK_00f9fc58 + iVar108;
  iVar111 = _UNK_00f9fc5c + iVar110;
  *(uint *)(&stack0x000000a8 + lVar85) = -(uint)(iVar98 == iVar3);
  *(uint *)(&stack0x000000ac + lVar85) = -(uint)(iVar100 == iVar3);
  *(uint *)(&stack0x000000b0 + lVar85) = -(uint)(iVar101 == iVar3);
  *(uint *)(&stack0x000000b4 + lVar85) = -(uint)(iVar102 == iVar3);
  iVar91 = g_00f9fc50 + iVar104;
  iVar94 = _UNK_00f9fc54 + iVar107;
  iVar95 = _UNK_00f9fc58 + iVar109;
  iVar96 = _UNK_00f9fc5c + iVar111;
  *(uint *)(&stack0x000000b8 + lVar85) = -(uint)(iVar103 == iVar3);
  *(uint *)(&stack0x000000bc + lVar85) = -(uint)(iVar106 == iVar3);
  *(uint *)(&stack0x000000c0 + lVar85) = -(uint)(iVar108 == iVar3);
  *(uint *)(&stack0x000000c4 + lVar85) = -(uint)(iVar110 == iVar3);
  iVar98 = g_00f9fc50 + iVar91;
  iVar100 = _UNK_00f9fc54 + iVar94;
  iVar101 = _UNK_00f9fc58 + iVar95;
  iVar102 = _UNK_00f9fc5c + iVar96;
  *(uint *)(&stack0x000000c8 + lVar85) = -(uint)(iVar104 == iVar3);
  *(uint *)(&stack0x000000cc + lVar85) = -(uint)(iVar107 == iVar3);
  *(uint *)(&stack0x000000d0 + lVar85) = -(uint)(iVar109 == iVar3);
  *(uint *)(&stack0x000000d4 + lVar85) = -(uint)(iVar111 == iVar3);
  iVar103 = g_00f9fc50 + iVar98;
  iVar106 = _UNK_00f9fc54 + iVar100;
  iVar108 = _UNK_00f9fc58 + iVar101;
  iVar110 = _UNK_00f9fc5c + iVar102;
  *(uint *)(&stack0x000000d8 + lVar85) = -(uint)(iVar91 == iVar3);
  *(uint *)(&stack0x000000dc + lVar85) = -(uint)(iVar94 == iVar3);
  *(uint *)(&stack0x000000e0 + lVar85) = -(uint)(iVar95 == iVar3);
  *(uint *)(&stack0x000000e4 + lVar85) = -(uint)(iVar96 == iVar3);
  iVar104 = g_00f9fc50 + iVar103;
  iVar107 = _UNK_00f9fc54 + iVar106;
  iVar109 = _UNK_00f9fc58 + iVar108;
  iVar111 = _UNK_00f9fc5c + iVar110;
  *(uint *)(&stack0x000000e8 + lVar85) = -(uint)(iVar98 == iVar3);
  *(uint *)(&stack0x000000ec + lVar85) = -(uint)(iVar100 == iVar3);
  *(uint *)(&stack0x000000f0 + lVar85) = -(uint)(iVar101 == iVar3);
  *(uint *)(&stack0x000000f4 + lVar85) = -(uint)(iVar102 == iVar3);
  iVar91 = g_00f9fc50 + iVar104;
  iVar94 = _UNK_00f9fc54 + iVar107;
  iVar95 = _UNK_00f9fc58 + iVar109;
  iVar96 = _UNK_00f9fc5c + iVar111;
  *(uint *)(&stack0x000000f8 + lVar85) = -(uint)(iVar103 == iVar3);
  *(uint *)(&stack0x000000fc + lVar85) = -(uint)(iVar106 == iVar3);
  *(uint *)(&stack0x00000100 + lVar85) = -(uint)(iVar108 == iVar3);
  *(uint *)(&stack0x00000104 + lVar85) = -(uint)(iVar110 == iVar3);
  iVar98 = g_00f9fc50 + iVar91;
  iVar100 = _UNK_00f9fc54 + iVar94;
  iVar101 = _UNK_00f9fc58 + iVar95;
  iVar102 = _UNK_00f9fc5c + iVar96;
  auVar92._0_4_ = -(uint)(iVar91 == iVar3);
  auVar92._4_4_ = -(uint)(iVar94 == iVar3);
  auVar92._8_4_ = -(uint)(iVar95 == iVar3);
  auVar92._12_4_ = -(uint)(iVar96 == iVar3);
  *(uint *)(&stack0x00000108 + lVar85) = -(uint)(iVar104 == iVar3);
  *(uint *)(&stack0x0000010c + lVar85) = -(uint)(iVar107 == iVar3);
  *(uint *)(&stack0x00000110 + lVar85) = -(uint)(iVar109 == iVar3);
  *(uint *)(&stack0x00000114 + lVar85) = -(uint)(iVar111 == iVar3);
  iVar91 = g_00f9fc50 + iVar98;
  iVar94 = _UNK_00f9fc54 + iVar100;
  iVar95 = _UNK_00f9fc58 + iVar101;
  iVar96 = _UNK_00f9fc5c + iVar102;
  auVar97._0_4_ = -(uint)(iVar98 == iVar3);
  auVar97._4_4_ = -(uint)(iVar100 == iVar3);
  auVar97._8_4_ = -(uint)(iVar101 == iVar3);
  auVar97._12_4_ = -(uint)(iVar102 == iVar3);
  *(uint8_t (*) [16])(&stack0x00000118 + lVar85) = auVar92;
  auVar99._0_4_ = -(uint)(iVar91 == iVar3);
  auVar99._4_4_ = -(uint)(iVar94 == iVar3);
  auVar99._8_4_ = -(uint)(iVar95 == iVar3);
  auVar99._12_4_ = -(uint)(iVar96 == iVar3);
  *(uint8_t (*) [16])(&stack0x00000128 + lVar85) = auVar97;
  auVar105._0_4_ = -(uint)(g_00f9fc50 + iVar91 == iVar3);
  auVar105._4_4_ = -(uint)(_UNK_00f9fc54 + iVar94 == iVar3);
  auVar105._8_4_ = -(uint)(_UNK_00f9fc58 + iVar95 == iVar3);
  auVar105._12_4_ = -(uint)(_UNK_00f9fc5c + iVar96 == iVar3);
  *(uint8_t (*) [16])(&stack0x00000138 + lVar85) = auVar99;
  auVar93 = param_2[0xc];
  auVar1 = param_2[0xd];
  auVar2 = param_2[0xe];
  *(uint8_t (*) [16])(&stack0x00000148 + lVar85) = auVar105;
  auVar93 = (auVar92 & auVar93 | auVar99 & auVar2 |
             *param_2 & *(uint8_t (*) [16])((int64_t)&stack0x00000058 + lVar85) |
             param_2[2] & *(uint8_t (*) [16])(&stack0x00000078 + lVar85) |
             param_2[4] & *(uint8_t (*) [16])(&stack0x00000098 + lVar85) |
             param_2[6] & *(uint8_t (*) [16])(&stack0x000000b8 + lVar85) |
             param_2[8] & *(uint8_t (*) [16])(&stack0x000000d8 + lVar85) |
            param_2[10] & *(uint8_t (*) [16])(&stack0x000000f8 + lVar85)) ^
            (auVar97 & auVar1 | auVar105 & param_2[0xf] |
             param_2[1] & *(uint8_t (*) [16])(&stack0x00000068 + lVar85) |
             param_2[3] & *(uint8_t (*) [16])(&stack0x00000088 + lVar85) |
             param_2[5] & *(uint8_t (*) [16])(&stack0x000000a8 + lVar85) |
             param_2[7] & *(uint8_t (*) [16])(&stack0x000000c8 + lVar85) |
             param_2[9] & *(uint8_t (*) [16])(&stack0x000000e8 + lVar85) |
            param_2[0xb] & *(uint8_t (*) [16])(&stack0x00000108 + lVar85));
  uVar76 = auVar93._0_8_ | auVar93._8_8_;
  pauVar81 = param_2 + 0x18;
  auVar93._8_8_ = 0;
  auVar93._0_8_ = uVar76;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = *arg1;
  uVar83 = SUB168(auVar93 * auVar41,0);
  uVar74 = SUB168(auVar93 * auVar41,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar76;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = arg1[1];
  uVar73 = SUB168(auVar1 * auVar42,0);
  uVar86 = SUB168(auVar1 * auVar42,8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar76;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = arg1[2];
  uVar77 = SUB168(auVar2 * auVar43,0);
  uVar87 = (uint64_t)CARRY8(uVar73,uVar74);
  uVar88 = uVar86 + uVar77;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar76;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = arg1[3];
  uVar82 = uVar83 * param_5;
  puVar80 = arg1 + 4;
  Var5 = (unkuint9)
         (SUB168(auVar2 * auVar43,8) + (uint64_t)(CARRY8(uVar86,uVar77) || CARRY8(uVar88,uVar87)))
         + (unkuint9)SUB168(auVar12 * auVar44,0) + (unkuint9)0;
  Var6 = (unkuint9)SUB168(auVar12 * auVar44,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (uint64_t)Var6;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar82;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = *param_1;
  Var10 = (unkuint9)SUB168(auVar13 * auVar45,8) + (unkuint9)(uVar73 + uVar74) + (unkuint9)0;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar82;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_1[1];
  Var6 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar14 * auVar46,0) +
         (unkuint9)
         ((char)((unkuint9)uVar83 + (unkuint9)SUB168(auVar13 * auVar45,0) +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0') >> 0x40) != '\0');
  Var10 = (unkuint9)SUB168(auVar14 * auVar46,8) + (unkuint9)(uVar88 + uVar87) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar82;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_1[2];
  uStack0000000000000048 = (int64_t)Var6;
  Var6 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar15 * auVar47,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)SUB168(auVar15 * auVar47,8) + (unkuint9)(uint64_t)Var5 +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar82;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_1[3];
  uStack0000000000000050 = (int64_t)Var6;
  Var5 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar16 * auVar48,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  bVar89 = (char)((unkuint9)Var5 >> 0x40) != '\0';
  Var6 = (unkuint9)SUB168(auVar16 * auVar48,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  bVar90 = (char)((unkuint9)Var6 >> 0x40) != '\0';
  uVar87 = (uint64_t)Var6;
  param_1 = param_1 + 4;
  uStack0000000000000058 = (int64_t)Var5;
  puVar78 = (uint64_t *)&stack0x00000068;
  lVar85 = lVar84;
  do {
    puVar75 = puVar78;
    Var5 = (unkuint9)uVar87 + (unkuint9)0 + (unkuint9)bVar89;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar76;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = *puVar80;
    Var6 = (unkuint9)SUB168(auVar17 * auVar49,0) + (unkuint9)uVar77 +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar76;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = puVar80[1];
    Var10 = (unkuint9)SUB168(auVar18 * auVar50,0) + (unkuint9)SUB168(auVar17 * auVar49,8) +
            (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar76;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = puVar80[2];
    Var7 = (unkuint9)SUB168(auVar19 * auVar51,0) + (unkuint9)SUB168(auVar18 * auVar50,8) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar76;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = puVar80[3];
    Var8 = (unkuint9)SUB168(auVar20 * auVar52,0) + (unkuint9)SUB168(auVar19 * auVar51,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var9 = (unkuint9)SUB168(auVar20 * auVar52,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar77 = (uint64_t)Var9;
    puVar80 = puVar80 + 4;
    puVar78 = puVar75 + 4;
    Var6 = (unkuint9)(uint64_t)Var6 + (unkuint9)(uint64_t)Var5 + (unkuint9)bVar90;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar82;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = *param_1;
    Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar21 * auVar53,0) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var10 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar21 * auVar53,8) +
            (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar82;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = param_1[1];
    Var6 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar22 * auVar54,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var10 = (unkuint9)(uint64_t)Var7 + (unkuint9)SUB168(auVar22 * auVar54,8) +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar82;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = param_1[2];
    puVar75[-1] = (uint64_t)Var5;
    Var5 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar23 * auVar55,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    *puVar75 = (uint64_t)Var6;
    Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar23 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar82;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = param_1[3];
    puVar75[1] = (uint64_t)Var5;
    Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar24 * auVar56,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    bVar89 = (char)((unkuint9)Var5 >> 0x40) != '\0';
    uVar87 = SUB168(auVar24 * auVar56,8) + (uint64_t)((char)((unkuint9)Var6 >> 0x40) != '\0');
    param_1 = param_1 + 4;
    puVar75[2] = (uint64_t)Var5;
    bVar90 = SBORROW8(lVar85,1);
    lVar85 = lVar85 + -1;
  } while (lVar85 != 0);
  bVar90 = CARRY8(uVar77,uVar87 + bVar89);
  puVar75[3] = uVar77 + uVar87 + bVar89;
  do {
    puVar80 = (uint64_t *)((int64_t)puVar80 + param_4);
    uVar77 = *(uint64_t *)(pauVar81[-8] + 8) & puVar78[3] |
             *(uint64_t *)(pauVar81[-6] + 8) & puVar78[7] |
             *(uint64_t *)(pauVar81[-4] + 8) & puVar78[0xb] |
             *(uint64_t *)(pauVar81[-2] + 8) & puVar78[0xf] |
             *(uint64_t *)(*pauVar81 + 8) & puVar78[0x13] |
             *(uint64_t *)(pauVar81[2] + 8) & puVar78[0x17] |
             *(uint64_t *)(pauVar81[4] + 8) & puVar78[0x1b] |
             *(uint64_t *)(pauVar81[6] + 8) & puVar78[0x1f] |
             *(uint64_t *)(pauVar81[-7] + 8) & puVar78[5] |
             *(uint64_t *)(pauVar81[-5] + 8) & puVar78[9] |
             *(uint64_t *)(pauVar81[-3] + 8) & puVar78[0xd] |
             *(uint64_t *)(pauVar81[-1] + 8) & puVar78[0x11] |
             *(uint64_t *)(pauVar81[1] + 8) & puVar78[0x15] |
             *(uint64_t *)(pauVar81[3] + 8) & puVar78[0x19] |
             *(uint64_t *)(pauVar81[5] + 8) & puVar78[0x1d] |
             *(uint64_t *)(pauVar81[7] + 8) & puVar78[0x21] |
             *(uint64_t *)pauVar81[-8] & puVar78[2] | *(uint64_t *)pauVar81[-6] & puVar78[6] |
             *(uint64_t *)pauVar81[-4] & puVar78[10] | *(uint64_t *)pauVar81[-2] & puVar78[0xe] |
             *(uint64_t *)*pauVar81 & puVar78[0x12] | *(uint64_t *)pauVar81[2] & puVar78[0x16] |
             *(uint64_t *)pauVar81[4] & puVar78[0x1a] | *(uint64_t *)pauVar81[6] & puVar78[0x1e] |
             *(uint64_t *)pauVar81[-7] & puVar78[4] | *(uint64_t *)pauVar81[-5] & puVar78[8] |
             *(uint64_t *)pauVar81[-3] & puVar78[0xc] | *(uint64_t *)pauVar81[-1] & puVar78[0x10]
             | *(uint64_t *)pauVar81[1] & puVar78[0x14] | *(uint64_t *)pauVar81[3] & puVar78[0x18]
             | *(uint64_t *)pauVar81[5] & puVar78[0x1c] | *(uint64_t *)pauVar81[7] & puVar78[0x20]
    ;
    pauVar81 = pauVar81 + 0x10;
    *puVar78 = (uint64_t)bVar90;
    puVar78 = (uint64_t *)((int64_t)puVar78 + param_4 + 0x20);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar77;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = *puVar80;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar77;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = puVar80[1];
    Var6 = (unkuint9)SUB168(auVar25 * auVar57,0) + (unkuint9)puVar78[-4] + (unkuint9)0;
    uVar88 = (uint64_t)Var6;
    Var5 = (unkuint9)SUB168(auVar25 * auVar57,8) + (unkuint9)SUB168(auVar26 * auVar58,0) +
           (unkuint9)0;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar77;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = puVar80[2];
    Var6 = (unkuint9)(uint64_t)Var5 + (unkuint9)puVar78[-3] +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var5 = (unkuint9)SUB168(auVar26 * auVar58,8) + (unkuint9)SUB168(auVar27 * auVar59,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar77;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = puVar80[3];
    Var10 = (unkuint9)(uint64_t)Var5 + (unkuint9)puVar78[-2] +
            (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var5 = (unkuint9)SUB168(auVar27 * auVar59,8) + (unkuint9)SUB168(auVar28 * auVar60,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    param_1 = (uint64_t *)((int64_t)param_1 + param_4);
    puVar80 = puVar80 + 4;
    Var7 = (unkuint9)(uint64_t)Var5 + (unkuint9)puVar78[-1] +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    uVar87 = SUB168(auVar28 * auVar60,8) + (uint64_t)((char)((unkuint9)Var5 >> 0x40) != '\0') +
             (uint64_t)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar83 = uVar88 * param_5;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar83;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = *param_1;
    Var6 = (unkuint9)SUB168(auVar29 * auVar61,8) + (unkuint9)(uint64_t)Var6 + (unkuint9)0;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar83;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = param_1[1];
    Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar30 * auVar62,0) +
           (unkuint9)
           ((char)((unkuint9)uVar88 + (unkuint9)SUB168(auVar29 * auVar61,0) + (unkuint9)0 >> 0x40)
           != '\0');
    Var10 = (unkuint9)SUB168(auVar30 * auVar62,8) + (unkuint9)(uint64_t)Var10 +
            (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar83;
    auVar63._8_8_ = 0;
    auVar63._0_8_ = param_1[2];
    Var6 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar31 * auVar63,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var10 = (unkuint9)SUB168(auVar31 * auVar63,8) + (unkuint9)(uint64_t)Var7 +
            (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar83;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = param_1[3];
    puVar78[-4] = (uint64_t)Var5;
    Var5 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar32 * auVar64,0) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    bVar89 = (char)((unkuint9)Var5 >> 0x40) != '\0';
    puVar78[-3] = (uint64_t)Var6;
    Var6 = (unkuint9)SUB168(auVar32 * auVar64,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    bVar90 = (char)((unkuint9)Var6 >> 0x40) != '\0';
    uVar88 = (uint64_t)Var6;
    puVar78[-2] = (uint64_t)Var5;
    param_1 = param_1 + 4;
    lVar85 = lVar84;
    do {
      puVar79 = puVar78;
      puVar75 = param_1;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar77;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = *puVar80;
      Var5 = (unkuint9)uVar88 + (unkuint9)0 + (unkuint9)bVar89;
      Var10 = (unkuint9)SUB168(auVar33 * auVar65,0) + (unkuint9)uVar87 + (unkuint9)bVar90;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar77;
      auVar66._8_8_ = 0;
      auVar66._0_8_ = puVar80[1];
      Var6 = (unkuint9)(uint64_t)Var10 + (unkuint9)*puVar79 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      Var7 = (unkuint9)SUB168(auVar34 * auVar66,0) + (unkuint9)SUB168(auVar33 * auVar65,8) +
             (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar77;
      auVar67._8_8_ = 0;
      auVar67._0_8_ = puVar80[2];
      Var10 = (unkuint9)(uint64_t)Var7 + (unkuint9)puVar79[1] +
              (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var8 = (unkuint9)SUB168(auVar35 * auVar67,0) + (unkuint9)SUB168(auVar34 * auVar66,8) +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar77;
      auVar68._8_8_ = 0;
      auVar68._0_8_ = puVar80[3];
      Var7 = (unkuint9)(uint64_t)Var8 + (unkuint9)puVar79[2] +
             (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      Var9 = (unkuint9)SUB168(auVar36 * auVar68,0) + (unkuint9)SUB168(auVar35 * auVar67,8) +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      Var8 = (unkuint9)(uint64_t)Var9 + (unkuint9)puVar79[3] +
             (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
      Var11 = (unkuint9)SUB168(auVar36 * auVar68,8) + (unkuint9)0 +
              (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      puVar80 = puVar80 + 4;
      puVar78 = puVar79 + 4;
      Var9 = (unkuint9)(uint64_t)Var11 + (unkuint9)0 +
             (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
      uVar87 = (uint64_t)Var9;
      Var6 = (unkuint9)(uint64_t)Var6 + (unkuint9)(uint64_t)Var5 +
             (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar83;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = *puVar75;
      Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar37 * auVar69,0) +
             (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
      Var10 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar37 * auVar69,8) +
              (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar83;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = puVar75[1];
      Var6 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar38 * auVar70,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      Var10 = (unkuint9)(uint64_t)Var7 + (unkuint9)SUB168(auVar38 * auVar70,8) +
              (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      auVar39._8_8_ = 0;
      auVar39._0_8_ = uVar83;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = puVar75[2];
      puVar79[-1] = (uint64_t)Var5;
      Var5 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar39 * auVar71,0) +
             (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
      Var10 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar39 * auVar71,8) +
              (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
      *puVar79 = (uint64_t)Var6;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar83;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = puVar75[3];
      param_1 = puVar75 + 4;
      puVar79[1] = (uint64_t)Var5;
      Var5 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar40 * auVar72,0) +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      bVar89 = (char)((unkuint9)Var5 >> 0x40) != '\0';
      uVar88 = SUB168(auVar40 * auVar72,8) + (uint64_t)((char)((unkuint9)Var10 >> 0x40) != '\0');
      puVar79[2] = (uint64_t)Var5;
      bVar90 = SBORROW8(lVar85,1);
      lVar85 = lVar85 + -1;
    } while (lVar85 != 0);
    uVar77 = uVar87 + uVar88 + bVar89;
    bVar90 = CARRY8(uVar87,uVar88 + bVar89) || CARRY8(uVar77,(uint64_t)(*puVar78 != 0));
    uVar77 = uVar77 + (*puVar78 != 0);
    puVar79[3] = uVar77;
  } while (pauVar81 < param_2 + param_4 * -2 + 8);
  puVar80 = (uint64_t *)((int64_t)param_1 + param_4);
  puVar78 = (uint64_t *)((int64_t)puVar78 + param_4);
  lVar84 = param_4 >> 5;
  uVar73 = -(uint64_t)(bVar90 || puVar75[3] < uVar77);
  uVar83 = *(int64_t *)((int64_t)param_1 + param_4) - 1;
  uVar87 = puVar80[1];
  lVar85 = 0;
  uVar88 = puVar80[2];
  uVar77 = puVar80[3];
  while( true ) {
    uVar76 = (~uVar83 & uVar73) + *puVar78;
    uVar83 = (uint64_t)
             (CARRY8(~uVar83 & uVar73,*puVar78) || CARRY8(uVar76,(uint64_t)(lVar85 != 0)));
    uVar82 = (~uVar87 & uVar73) + puVar78[1];
    uVar74 = (uint64_t)(CARRY8(~uVar87 & uVar73,puVar78[1]) || CARRY8(uVar82,uVar83));
    uVar86 = (~uVar88 & uVar73) + puVar78[2];
    uVar88 = (uint64_t)(CARRY8(~uVar88 & uVar73,puVar78[2]) || CARRY8(uVar86,uVar74));
    uVar87 = puVar78[3];
    uVar4 = (~uVar77 & uVar73) + puVar78[3];
    *this_ptr = uVar76 + (lVar85 != 0);
    puVar78 = puVar78 + 4;
    this_ptr[1] = uVar82 + uVar83;
    lVar85 = -(uint64_t)(CARRY8(~uVar77 & uVar73,uVar87) || CARRY8(uVar4,uVar88));
    this_ptr[2] = uVar86 + uVar74;
    this_ptr[3] = uVar4 + uVar88;
    this_ptr = this_ptr + 4;
    lVar84 = lVar84 + 1;
    if (lVar84 == 0) break;
    uVar83 = puVar80[4];
    uVar87 = puVar80[5];
    uVar88 = puVar80[6];
    uVar77 = puVar80[7];
    puVar80 = puVar80 + 4;
  }
  return;
}

