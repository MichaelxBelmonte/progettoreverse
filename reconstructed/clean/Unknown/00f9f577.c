// Function: FUN_00f9f577
// Address: 00f9f577
// Size: 779 bytes
// Class: Unknown

void FUN_00f9f577(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int64_t param_4,
                 int64_t param_5,uint64_t param_6,uint64_t param_7)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  unkint9 Var4;
  unkint9 Var5;
  unkint9 Var6;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
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
  uint64_t uVar39;
  int64_t lVar40;
  int64_t lVar41;
  uint64_t uVar42;
  uint64_t *unaff_RBP;
  uint64_t *puVar43;
  uint64_t *this_ptr;
  void*puVar44;
  uint64_t *puVar45;
  uint64_t uVar46;
  uint64_t uVar47;
  int64_t in_R9;
  uint64_t uVar48;
  uint64_t uVar49;
  uint64_t uVar50;
  uint64_t uVar51;
  uint64_t uVar52;
  uint64_t uVar53;
  uint64_t uVar54;
  uint64_t uVar55;
  uint64_t uVar56;
  uint64_t uVar57;
  uint64_t uVar58;
  uint64_t uVar59;
  uint64_t uVar60;
  bool bVar61;
  bool bVar62;
  int64_t local_res18;
  
  uVar39 = 0;
  puVar1 = (uint64_t *)((int64_t)unaff_RBP + in_R9 + -0x40);
  puVar44 = &param_7;
  uVar47 = param_7;
  do {
    uVar48 = puVar44[1];
    uVar50 = puVar44[2];
    uVar52 = puVar44[3];
    uVar54 = puVar44[4];
    uVar56 = puVar44[5];
    uVar58 = puVar44[6];
    uVar60 = puVar44[7];
    puVar45 = puVar44 + 8;
    bVar61 = false;
    bVar62 = false;
    lVar40 = -8;
    do {
      uVar42 = uVar47 * param_5;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = *unaff_RBP;
      Var5 = (unkuint9)SUB168(auVar7 * auVar23,8) + (unkuint9)uVar48 + (unkuint9)bVar62;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar42;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = unaff_RBP[1];
      Var4 = (unkuint9)(uint64_t)Var5 + (unkuint9)SUB168(auVar8 * auVar24,0) +
             (unkuint9)
             ((char)((unkuint9)SUB168(auVar7 * auVar23,0) + (unkuint9)uVar47 + (unkuint9)bVar61 >>
                    0x40) != '\0');
      uVar47 = (uint64_t)Var4;
      Var5 = (unkuint9)SUB168(auVar8 * auVar24,8) + (unkuint9)uVar50 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar42;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = unaff_RBP[2];
      Var4 = (unkuint9)(uint64_t)Var5 + (unkuint9)SUB168(auVar9 * auVar25,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar48 = (uint64_t)Var4;
      Var5 = (unkuint9)SUB168(auVar9 * auVar25,8) + (unkuint9)uVar52 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar42;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = unaff_RBP[3];
      Var4 = (unkuint9)(uint64_t)Var5 + (unkuint9)SUB168(auVar10 * auVar26,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar50 = (uint64_t)Var4;
      Var5 = (unkuint9)SUB168(auVar10 * auVar26,8) + (unkuint9)uVar54 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar42;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = unaff_RBP[4];
      Var4 = (unkuint9)(uint64_t)Var5 + (unkuint9)SUB168(auVar11 * auVar27,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar52 = (uint64_t)Var4;
      Var5 = (unkuint9)SUB168(auVar11 * auVar27,8) + (unkuint9)uVar56 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      *(uint64_t *)(&stack0x00000078 + lVar40 * 8) = uVar42;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar42;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = unaff_RBP[5];
      Var4 = (unkuint9)(uint64_t)Var5 + (unkuint9)SUB168(auVar12 * auVar28,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar54 = (uint64_t)Var4;
      Var5 = (unkuint9)SUB168(auVar12 * auVar28,8) + (unkuint9)uVar58 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar42;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = unaff_RBP[6];
      Var4 = (unkuint9)(uint64_t)Var5 + (unkuint9)SUB168(auVar13 * auVar29,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar56 = (uint64_t)Var4;
      Var5 = (unkuint9)SUB168(auVar13 * auVar29,8) + (unkuint9)uVar60 +
             (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar42;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = unaff_RBP[7];
      Var4 = (unkuint9)(uint64_t)Var5 + (unkuint9)SUB168(auVar14 * auVar30,0) +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar58 = (uint64_t)Var4;
      Var4 = (unkuint9)
             (SUB168(auVar14 * auVar30,8) + (uint64_t)((char)((unkuint9)Var5 >> 0x40) != '\0')) +
             (unkuint9)0 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      bVar61 = (char)((unkuint9)Var4 >> 0x40) != '\0';
      uVar60 = (uint64_t)Var4;
      bVar62 = SCARRY8(lVar40,1);
      lVar40 = lVar40 + 1;
    } while (lVar40 != 0);
    uVar42 = 0;
    bVar61 = false;
    if (unaff_RBP < puVar1) {
      uVar46 = uVar47 + *puVar45;
      puVar43 = unaff_RBP + 8;
      Var4 = (unkuint9)uVar48 + (unkuint9)(uint64_t)puVar44[9] + (unkuint9)CARRY8(uVar47,*puVar45);
      uVar42 = (uint64_t)Var4;
      Var4 = (unkuint9)uVar50 + (unkuint9)(uint64_t)puVar44[10] +
             (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar49 = (uint64_t)Var4;
      uVar47 = (uint64_t)((char)((unkuint9)Var4 >> 0x40) != '\0');
      uVar48 = uVar52 + puVar44[0xb];
      uVar51 = uVar48 + uVar47;
      uVar47 = (uint64_t)(CARRY8(uVar52,puVar44[0xb]) || CARRY8(uVar48,uVar47));
      uVar48 = uVar54 + puVar44[0xc];
      uVar53 = uVar48 + uVar47;
      uVar47 = (uint64_t)(CARRY8(uVar54,puVar44[0xc]) || CARRY8(uVar48,uVar47));
      uVar48 = uVar56 + puVar44[0xd];
      uVar55 = uVar48 + uVar47;
      uVar47 = (uint64_t)(CARRY8(uVar56,puVar44[0xd]) || CARRY8(uVar48,uVar47));
      uVar48 = uVar58 + puVar44[0xe];
      uVar57 = uVar48 + uVar47;
      uVar47 = (uint64_t)(CARRY8(uVar58,puVar44[0xe]) || CARRY8(uVar48,uVar47));
      uVar48 = uVar60 + puVar44[0xf];
      uVar59 = uVar48 + uVar47;
      puVar45 = puVar44 + 0x10;
      local_res18 = -(uint64_t)(CARRY8(uVar60,puVar44[0xf]) || CARRY8(uVar48,uVar47));
      bVar61 = false;
      bVar62 = false;
      lVar40 = -8;
      uVar47 = param_7;
      while( true ) {
        do {
          lVar41 = lVar40;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar47;
          auVar31._8_8_ = 0;
          auVar31._0_8_ = *puVar43;
          Var4 = (unkuint9)uVar46 + (unkuint9)SUB168(auVar15 * auVar31,0) + (unkuint9)bVar61;
          Var6 = (unkuint9)SUB168(auVar15 * auVar31,8) + (unkuint9)uVar42 + (unkuint9)bVar62;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar47;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = puVar43[1];
          Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar16 * auVar32,0) +
                 (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
          uVar46 = (uint64_t)Var5;
          Var6 = (unkuint9)SUB168(auVar16 * auVar32,8) + (unkuint9)uVar49 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar47;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = puVar43[2];
          Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar17 * auVar33,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar42 = (uint64_t)Var5;
          Var6 = (unkuint9)SUB168(auVar17 * auVar33,8) + (unkuint9)uVar51 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar47;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = puVar43[3];
          Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar18 * auVar34,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar49 = (uint64_t)Var5;
          Var6 = (unkuint9)SUB168(auVar18 * auVar34,8) + (unkuint9)uVar53 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar47;
          auVar35._8_8_ = 0;
          auVar35._0_8_ = puVar43[4];
          Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar19 * auVar35,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar51 = (uint64_t)Var5;
          Var6 = (unkuint9)SUB168(auVar19 * auVar35,8) + (unkuint9)uVar55 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar47;
          auVar36._8_8_ = 0;
          auVar36._0_8_ = puVar43[5];
          Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar20 * auVar36,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar53 = (uint64_t)Var5;
          Var6 = (unkuint9)SUB168(auVar20 * auVar36,8) + (unkuint9)uVar57 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar47;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = puVar43[6];
          Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar21 * auVar37,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar55 = (uint64_t)Var5;
          Var6 = (unkuint9)SUB168(auVar21 * auVar37,8) + (unkuint9)uVar59 +
                 (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar47;
          auVar38._8_8_ = 0;
          auVar38._0_8_ = puVar43[7];
          uVar47 = *(uint64_t *)(&stack0x00000080 + lVar41 * 8);
          Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar22 * auVar38,0) +
                 (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          uVar57 = (uint64_t)Var5;
          puVar45[lVar41] = (uint64_t)Var4;
          Var4 = (unkuint9)
                 (SUB168(auVar22 * auVar38,8) + (uint64_t)((char)((unkuint9)Var6 >> 0x40) != '\0'))
                 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
          bVar61 = (char)((unkuint9)Var4 >> 0x40) != '\0';
          uVar59 = (uint64_t)Var4;
          bVar62 = SCARRY8(lVar41,1);
          lVar40 = lVar41 + 1;
        } while (lVar41 + 1 != 0);
        if (puVar1 <= puVar43) break;
        puVar43 = puVar43 + 8;
        bVar61 = CARRY8(uVar46,*puVar45);
        uVar47 = uVar46 + *puVar45;
        uVar46 = uVar47 + (local_res18 != 0);
        uVar47 = (uint64_t)(bVar61 || CARRY8(uVar47,(uint64_t)(local_res18 != 0)));
        bVar61 = CARRY8(uVar42,puVar45[1]);
        uVar48 = uVar42 + puVar45[1];
        uVar42 = uVar48 + uVar47;
        uVar47 = (uint64_t)(bVar61 || CARRY8(uVar48,uVar47));
        bVar61 = CARRY8(uVar49,puVar45[2]);
        uVar48 = uVar49 + puVar45[2];
        uVar49 = uVar48 + uVar47;
        uVar47 = (uint64_t)(bVar61 || CARRY8(uVar48,uVar47));
        bVar61 = CARRY8(uVar51,puVar45[3]);
        uVar48 = uVar51 + puVar45[3];
        uVar51 = uVar48 + uVar47;
        uVar47 = (uint64_t)(bVar61 || CARRY8(uVar48,uVar47));
        bVar61 = CARRY8(uVar53,puVar45[4]);
        uVar48 = uVar53 + puVar45[4];
        uVar53 = uVar48 + uVar47;
        uVar47 = (uint64_t)(bVar61 || CARRY8(uVar48,uVar47));
        bVar61 = CARRY8(uVar55,puVar45[5]);
        uVar48 = uVar55 + puVar45[5];
        uVar55 = uVar48 + uVar47;
        uVar47 = (uint64_t)(bVar61 || CARRY8(uVar48,uVar47));
        bVar61 = CARRY8(uVar57,puVar45[6]);
        uVar48 = uVar57 + puVar45[6];
        uVar57 = uVar48 + uVar47;
        uVar47 = (uint64_t)(bVar61 || CARRY8(uVar48,uVar47));
        bVar61 = CARRY8(uVar59,puVar45[7]);
        uVar48 = uVar59 + puVar45[7];
        uVar59 = uVar48 + uVar47;
        puVar45 = puVar45 + 8;
        local_res18 = -(uint64_t)(bVar61 || CARRY8(uVar48,uVar47));
        bVar61 = false;
        bVar62 = false;
        lVar40 = lVar41 + -7;
        uVar47 = param_7;
      }
      uVar47 = uVar46 + uVar39;
      uVar48 = uVar42 + CARRY8(uVar46,uVar39);
      uVar39 = (uint64_t)CARRY8(uVar42,(uint64_t)CARRY8(uVar46,uVar39));
      uVar50 = uVar49 + uVar39;
      uVar39 = (uint64_t)CARRY8(uVar49,uVar39);
      uVar52 = uVar51 + uVar39;
      uVar39 = (uint64_t)CARRY8(uVar51,uVar39);
      uVar54 = uVar53 + uVar39;
      uVar39 = (uint64_t)CARRY8(uVar53,uVar39);
      uVar56 = uVar55 + uVar39;
      uVar39 = (uint64_t)CARRY8(uVar55,uVar39);
      uVar58 = uVar57 + uVar39;
      uVar39 = (uint64_t)CARRY8(uVar57,uVar39);
      uVar60 = uVar59 + uVar39;
      uVar42 = (uint64_t)CARRY8(uVar59,uVar39);
      bVar61 = local_res18 != 0;
    }
    uVar46 = uVar47 + *puVar45;
    uVar49 = (uint64_t)(CARRY8(uVar47,*puVar45) || CARRY8(uVar46,(uint64_t)bVar61));
    uVar51 = uVar48 + puVar45[1];
    uVar48 = (uint64_t)(CARRY8(uVar48,puVar45[1]) || CARRY8(uVar51,uVar49));
    uVar53 = uVar50 + puVar45[2];
    uVar50 = (uint64_t)(CARRY8(uVar50,puVar45[2]) || CARRY8(uVar53,uVar48));
    uVar55 = uVar52 + puVar45[3];
    uVar52 = (uint64_t)(CARRY8(uVar52,puVar45[3]) || CARRY8(uVar55,uVar50));
    uVar57 = uVar54 + puVar45[4];
    uVar54 = (uint64_t)(CARRY8(uVar54,puVar45[4]) || CARRY8(uVar57,uVar52));
    uVar59 = uVar56 + puVar45[5];
    uVar56 = (uint64_t)(CARRY8(uVar56,puVar45[5]) || CARRY8(uVar59,uVar54));
    uVar2 = uVar58 + puVar45[6];
    uVar58 = (uint64_t)(CARRY8(uVar58,puVar45[6]) || CARRY8(uVar2,uVar56));
    uVar3 = uVar60 + puVar45[7];
    uVar39 = uVar42 + (CARRY8(uVar60,puVar45[7]) || CARRY8(uVar3,uVar58));
    uVar47 = *(uint64_t *)((int64_t)puVar45 + param_4 + 0x40);
    *puVar45 = uVar46 + bVar61;
    puVar45[1] = uVar51 + uVar49;
    puVar45[2] = uVar53 + uVar48;
    puVar45[3] = uVar55 + uVar50;
    puVar45[4] = uVar57 + uVar52;
    puVar45[5] = uVar59 + uVar54;
    puVar45[6] = uVar2 + uVar56;
    puVar45[7] = uVar3 + uVar58;
    puVar44 = (void*)((int64_t)puVar45 + param_4 + 0x40);
    unaff_RBP = param_3;
  } while (puVar45 + 8 < this_ptr);
  return;
}

