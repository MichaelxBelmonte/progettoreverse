// Function: FUN_0100bae0
// Address: 0100bae0
// Size: 934 bytes
// Class: Unknown

uint64_t FUN_0100bae0(uint64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  unkint9 Var6;
  uint64_t uVar7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  unkint9 Var11;
  unkint9 Var12;
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
  uint8_t auVar73 [16];
  uint8_t auVar74 [16];
  uint8_t auVar75 [16];
  uint8_t auVar76 [16];
  uint8_t auVar77 [16];
  uint8_t auVar78 [16];
  uint64_t uVar79;
  uint64_t uVar80;
  uint64_t *arg1;
  uint64_t *this_ptr;
  uint64_t uVar81;
  uint64_t uVar82;
  uint64_t uVar83;
  uint64_t uVar84;
  
  uVar1 = *param_2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = *arg1;
  uVar7 = SUB168(auVar13 * auVar46,0);
  uVar81 = SUB168(auVar13 * auVar46,8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar1;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = arg1[1];
  uVar4 = SUB168(auVar14 * auVar47,0);
  uVar83 = SUB168(auVar14 * auVar47,8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar1;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = arg1[2];
  uVar2 = SUB168(auVar15 * auVar48,0);
  uVar84 = SUB168(auVar15 * auVar48,8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = arg1[3];
  uVar5 = SUB168(auVar16 * auVar49,0);
  uVar79 = uVar7 * g_0100b0e0;
  uVar1 = (uint64_t)CARRY8(uVar81,uVar4);
  uVar3 = uVar83 + uVar2;
  uVar2 = (uint64_t)(CARRY8(uVar83,uVar2) || CARRY8(uVar3,uVar1));
  uVar83 = uVar84 + uVar5;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar79;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = g_0100b0c0;
  Var6 = (unkuint9)uVar7 + (unkuint9)SUB168(auVar17 * auVar50,0) + (unkuint9)0;
  uVar7 = (uint64_t)Var6;
  Var8 = (unkuint9)(uVar81 + uVar4) + (unkuint9)SUB168(auVar17 * auVar50,8) + (unkuint9)0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar79;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = g_0100b0c8;
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar18 * auVar51,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(uVar3 + uVar1) + (unkuint9)SUB168(auVar18 * auVar51,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar79;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = g_0100b0d0;
  Var8 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar19 * auVar52,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(uVar83 + uVar2) + (unkuint9)SUB168(auVar19 * auVar52,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar79;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = g_0100b0d8;
  uVar1 = param_2[1];
  Var9 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar20 * auVar53,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)
          (SUB168(auVar16 * auVar49,8) + (uint64_t)(CARRY8(uVar84,uVar5) || CARRY8(uVar83,uVar2)))
          + (unkuint9)SUB168(auVar20 * auVar53,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(uint64_t)Var11 + (unkuint9)uVar7 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar83 = uVar7 + ((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (uint64_t)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar1;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = *arg1;
  Var6 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar21 * auVar54,0) +
         (unkuint9)CARRY8(uVar83,uVar2);
  uVar3 = (uint64_t)Var6;
  Var8 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar21 * auVar54,8) +
         (unkuint9)SCARRY8(uVar83,uVar2);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar1;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = arg1[1];
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar22 * auVar55,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar22 * auVar55,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar1;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = arg1[2];
  Var8 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar23 * auVar56,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar23 * auVar56,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar1;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = arg1[3];
  uVar1 = uVar3 * g_0100b0e0;
  Var9 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar24 * auVar57,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(uVar83 + uVar2) + (unkuint9)SUB168(auVar24 * auVar57,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(uint64_t)Var11 + (unkuint9)uVar7 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar83 = uVar7 * 2 + (uint64_t)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (uint64_t)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar1;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = g_0100b0c0;
  Var11 = (unkuint9)uVar3 + (unkuint9)SUB168(auVar25 * auVar58,0) + (unkuint9)CARRY8(uVar83,uVar2);
  uVar3 = (uint64_t)Var11;
  Var12 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar25 * auVar58,8) +
          (unkuint9)SCARRY8(uVar83,uVar2);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar1;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = g_0100b0c8;
  Var6 = (unkuint9)(uint64_t)Var12 + (unkuint9)SUB168(auVar26 * auVar59,0) +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var11 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar26 * auVar59,8) +
          (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar1;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = g_0100b0d0;
  Var8 = (unkuint9)(uint64_t)Var11 + (unkuint9)SUB168(auVar27 * auVar60,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var11 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar27 * auVar60,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar1;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = g_0100b0d8;
  uVar1 = param_2[2];
  Var9 = (unkuint9)(uint64_t)Var11 + (unkuint9)SUB168(auVar28 * auVar61,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar28 * auVar61,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var10 = (unkuint9)(uint64_t)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar7 = uVar83 + uVar2 + uVar3 + (uint64_t)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (uint64_t)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar1;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = *arg1;
  Var6 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar29 * auVar62,0) +
         (unkuint9)CARRY8(uVar7,uVar2);
  uVar83 = (uint64_t)Var6;
  Var8 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar29 * auVar62,8) +
         (unkuint9)SCARRY8(uVar7,uVar2);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar1;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = arg1[1];
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar30 * auVar63,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar30 * auVar63,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar1;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = arg1[2];
  Var8 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar31 * auVar64,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar31 * auVar64,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar1;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = arg1[3];
  uVar1 = uVar83 * g_0100b0e0;
  Var9 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar32 * auVar65,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(uVar7 + uVar2) + (unkuint9)SUB168(auVar32 * auVar65,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(uint64_t)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar7 = uVar3 * 2 + (uint64_t)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (uint64_t)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar1;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = g_0100b0c0;
  Var11 = (unkuint9)uVar83 + (unkuint9)SUB168(auVar33 * auVar66,0) + (unkuint9)CARRY8(uVar7,uVar2);
  uVar3 = (uint64_t)Var11;
  Var12 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar33 * auVar66,8) +
          (unkuint9)SCARRY8(uVar7,uVar2);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar1;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = g_0100b0c8;
  Var6 = (unkuint9)(uint64_t)Var12 + (unkuint9)SUB168(auVar34 * auVar67,0) +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var11 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar34 * auVar67,8) +
          (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar1;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = g_0100b0d0;
  Var8 = (unkuint9)(uint64_t)Var11 + (unkuint9)SUB168(auVar35 * auVar68,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var11 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar35 * auVar68,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar1;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = g_0100b0d8;
  uVar1 = param_2[3];
  Var9 = (unkuint9)(uint64_t)Var11 + (unkuint9)SUB168(auVar36 * auVar69,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar36 * auVar69,8) +
          (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  Var10 = (unkuint9)(uint64_t)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar7 = uVar7 + uVar2 + uVar3 + (uint64_t)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar2 = (uint64_t)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar1;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = *arg1;
  Var6 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar37 * auVar70,0) +
         (unkuint9)CARRY8(uVar7,uVar2);
  uVar83 = (uint64_t)Var6;
  Var8 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar37 * auVar70,8) +
         (unkuint9)SCARRY8(uVar7,uVar2);
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar1;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = arg1[1];
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar38 * auVar71,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var9 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar38 * auVar71,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar1;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = arg1[2];
  Var8 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar39 * auVar72,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var10 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar39 * auVar72,8) +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar1;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = arg1[3];
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar83;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = g_0100b0e0;
  uVar5 = SUB168(auVar41 * auVar74,0);
  Var9 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar40 * auVar73,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var11 = (unkuint9)(uVar7 + uVar2) + (unkuint9)SUB168(auVar40 * auVar73,8) +
          (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
  Var10 = (unkuint9)(uint64_t)Var11 + (unkuint9)uVar3 +
          (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  uVar81 = uVar3 * 2 + (uint64_t)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar1 = (uint64_t)((char)((unkuint9)Var10 >> 0x40) != '\0');
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar5;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = g_0100b0c0;
  Var11 = (unkuint9)uVar83 + (unkuint9)SUB168(auVar42 * auVar75,0) + (unkuint9)CARRY8(uVar81,uVar1);
  uVar83 = (uint64_t)Var11;
  Var12 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar42 * auVar75,8) +
          (unkuint9)SCARRY8(uVar81,uVar1);
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar5;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = g_0100b0c8;
  Var6 = (unkuint9)(uint64_t)Var12 + (unkuint9)SUB168(auVar43 * auVar76,0) +
         (unkuint9)((char)((unkuint9)Var11 >> 0x40) != '\0');
  uVar7 = (uint64_t)Var6;
  Var8 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar43 * auVar76,8) +
         (unkuint9)((char)((unkuint9)Var12 >> 0x40) != '\0');
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar5;
  auVar77._8_8_ = 0;
  auVar77._0_8_ = g_0100b0d0;
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar44 * auVar77,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar4 = (uint64_t)Var6;
  Var8 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar44 * auVar77,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar5;
  auVar78._8_8_ = 0;
  auVar78._0_8_ = g_0100b0d8;
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar45 * auVar78,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar5 = (uint64_t)Var6;
  Var8 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar45 * auVar78,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)uVar83 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar79 = (uint64_t)Var6;
  uVar2 = (uint64_t)
          (uVar4 < g_0100b0c8 || uVar4 - g_0100b0c8 < (uint64_t)(uVar7 < g_0100b0c0));
  uVar3 = (uint64_t)(uVar5 < g_0100b0d0 || uVar5 - g_0100b0d0 < uVar2);
  uVar82 = (uVar79 - g_0100b0d8) - uVar3;
  uVar2 = (uVar5 - g_0100b0d0) - uVar2;
  uVar84 = (uVar4 - g_0100b0c8) - (uint64_t)(uVar7 < g_0100b0c0);
  uVar80 = uVar7 - g_0100b0c0;
  if (uVar81 + uVar1 + uVar83 + (uint64_t)((char)((unkuint9)Var8 >> 0x40) != '\0') +
      (uint64_t)((char)((unkuint9)Var6 >> 0x40) != '\0') <
      (uint64_t)(uVar79 < g_0100b0d8 || uVar79 - g_0100b0d8 < uVar3)) {
    uVar82 = uVar79;
    uVar2 = uVar5;
    uVar84 = uVar4;
    uVar80 = uVar7;
  }
  *this_ptr = uVar80;
  this_ptr[1] = uVar84;
  this_ptr[2] = uVar2;
  this_ptr[3] = uVar82;
  return SUB168(auVar41 * auVar74,8);
}

