// Function: FUN_0100c700
// Address: 0100c700
// Size: 579 bytes
// Class: Unknown

uint64_t FUN_0100c700(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  bool bVar4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
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
  int64_t lVar49;
  int64_t unaff_RBX;
  uint64_t uVar50;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar51;
  uint64_t uVar52;
  uint64_t uVar53;
  uint64_t in_R10;
  uint64_t uVar54;
  uint64_t uVar55;
  uint64_t in_R11;
  uint64_t uVar56;
  uint64_t uVar57;
  uint64_t unaff_R12;
  uint64_t uVar58;
  int64_t lVar59;
  
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_4;
  uVar52 = SUB168(auVar9 * auVar29,0);
  uVar51 = SUB168(auVar9 * auVar29,8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = in_R10;
  uVar53 = SUB168(auVar10 * auVar30,0);
  uVar54 = SUB168(auVar10 * auVar30,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = in_R11;
  uVar1 = SUB168(auVar11 * auVar31,0);
  uVar56 = SUB168(auVar11 * auVar31,8);
  uVar3 = uVar51 + uVar53;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = unaff_R12;
  uVar2 = SUB168(auVar12 * auVar32,0);
  uVar53 = (uint64_t)CARRY8(uVar51,uVar53);
  uVar51 = uVar54 + uVar1;
  uVar55 = uVar51 + uVar53;
  uVar53 = (uint64_t)(CARRY8(uVar54,uVar1) || CARRY8(uVar51,uVar53));
  uVar51 = uVar56 + uVar2;
  uVar57 = uVar51 + uVar53;
  uVar58 = SUB168(auVar12 * auVar32,8) + (uint64_t)(CARRY8(uVar56,uVar2) || CARRY8(uVar51,uVar53));
  uVar51 = (uint64_t)CARRY8(uVar3,uVar52 << 0x20);
  uVar54 = uVar55 + (uVar52 >> 0x20);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar52;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = g_0100b018;
  uVar2 = SUB168(auVar13 * auVar33,0);
  uVar50 = SUB168(auVar13 * auVar33,8);
  uVar53 = *(uint64_t *)(unaff_RBX + 8);
  uVar1 = (uint64_t)(CARRY8(uVar55,uVar52 >> 0x20) || CARRY8(uVar54,uVar51));
  uVar55 = uVar57 + uVar2;
  uVar2 = (uint64_t)(CARRY8(uVar57,uVar2) || CARRY8(uVar55,uVar1));
  uVar56 = uVar58 + uVar50;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar53;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = *(uint64_t *)(arg1 + 0x80);
  Var5 = (unkuint9)(uVar3 + (uVar52 << 0x20)) + (unkuint9)SUB168(auVar14 * auVar34,0) + (unkuint9)0;
  uVar52 = (uint64_t)Var5;
  Var6 = (unkuint9)(uVar54 + uVar51) + (unkuint9)SUB168(auVar14 * auVar34,8) + (unkuint9)0;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar53;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = *(uint64_t *)(arg1 + 0x88);
  Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar15 * auVar35,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar57 = (uint64_t)Var5;
  Var6 = (unkuint9)(uVar55 + uVar1) + (unkuint9)SUB168(auVar15 * auVar35,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar53;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *(uint64_t *)(arg1 + 0x90);
  Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar16 * auVar36,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar1 = (uint64_t)Var5;
  Var6 = (unkuint9)(uVar56 + uVar2) + (unkuint9)SUB168(auVar16 * auVar36,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar53;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *(uint64_t *)(arg1 + 0x98);
  Var5 = (unkuint9)(uint64_t)Var6 + (unkuint9)SUB168(auVar17 * auVar37,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar55 = (uint64_t)Var5;
  Var7 = (unkuint9)(CARRY8(uVar58,uVar50) || CARRY8(uVar56,uVar2)) +
         (unkuint9)SUB168(auVar17 * auVar37,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var5 = (unkuint9)(uint64_t)Var7 + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar56 = (uint64_t)Var5;
  uVar51 = (uint64_t)CARRY8(uVar57,uVar52 << 0x20);
  uVar3 = uVar1 + (uVar52 >> 0x20);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar52;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = g_0100b018;
  uVar2 = SUB168(auVar18 * auVar38,0);
  uVar58 = SUB168(auVar18 * auVar38,8);
  uVar53 = *(uint64_t *)(unaff_RBX + 0x10);
  uVar1 = (uint64_t)(CARRY8(uVar1,uVar52 >> 0x20) || CARRY8(uVar3,uVar51));
  uVar54 = uVar55 + uVar2;
  uVar2 = (uint64_t)(CARRY8(uVar55,uVar2) || CARRY8(uVar54,uVar1));
  uVar55 = uVar56 + uVar58;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar53;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = *(uint64_t *)(arg1 + 0x80);
  Var6 = (unkuint9)(uVar57 + (uVar52 << 0x20)) + (unkuint9)SUB168(auVar19 * auVar39,0) + (unkuint9)0
  ;
  uVar52 = (uint64_t)Var6;
  Var8 = (unkuint9)(uVar3 + uVar51) + (unkuint9)SUB168(auVar19 * auVar39,8) + (unkuint9)0;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar53;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = *(uint64_t *)(arg1 + 0x88);
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar20 * auVar40,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar57 = (uint64_t)Var6;
  Var8 = (unkuint9)(uVar54 + uVar1) + (unkuint9)SUB168(auVar20 * auVar40,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar53;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = *(uint64_t *)(arg1 + 0x90);
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar21 * auVar41,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar1 = (uint64_t)Var6;
  Var8 = (unkuint9)(uVar55 + uVar2) + (unkuint9)SUB168(auVar21 * auVar41,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar53;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = *(uint64_t *)(arg1 + 0x98);
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar22 * auVar42,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar50 = (uint64_t)Var6;
  Var7 = (unkuint9)
         ((uint64_t)((char)((unkuint9)Var7 >> 0x40) != '\0') +
          (uint64_t)((char)((unkuint9)Var5 >> 0x40) != '\0') +
         (uint64_t)(CARRY8(uVar56,uVar58) || CARRY8(uVar55,uVar2))) +
         (unkuint9)SUB168(auVar22 * auVar42,8) + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var5 = (unkuint9)(uint64_t)Var7 + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar56 = (uint64_t)Var5;
  uVar51 = (uint64_t)CARRY8(uVar57,uVar52 << 0x20);
  uVar3 = uVar1 + (uVar52 >> 0x20);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar52;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = g_0100b018;
  uVar2 = SUB168(auVar23 * auVar43,0);
  uVar58 = SUB168(auVar23 * auVar43,8);
  uVar53 = *(uint64_t *)(unaff_RBX + 0x18);
  uVar1 = (uint64_t)(CARRY8(uVar1,uVar52 >> 0x20) || CARRY8(uVar3,uVar51));
  uVar54 = uVar50 + uVar2;
  uVar2 = (uint64_t)(CARRY8(uVar50,uVar2) || CARRY8(uVar54,uVar1));
  uVar55 = uVar56 + uVar58;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar53;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = *(uint64_t *)(arg1 + 0x80);
  Var6 = (unkuint9)(uVar57 + (uVar52 << 0x20)) + (unkuint9)SUB168(auVar24 * auVar44,0) + (unkuint9)0
  ;
  uVar52 = (uint64_t)Var6;
  Var8 = (unkuint9)(uVar3 + uVar51) + (unkuint9)SUB168(auVar24 * auVar44,8) + (unkuint9)0;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar53;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = *(uint64_t *)(arg1 + 0x88);
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar25 * auVar45,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar51 = (uint64_t)Var6;
  Var8 = (unkuint9)(uVar54 + uVar1) + (unkuint9)SUB168(auVar25 * auVar45,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar53;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = *(uint64_t *)(arg1 + 0x90);
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar26 * auVar46,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar1 = (uint64_t)Var6;
  Var8 = (unkuint9)(uVar55 + uVar2) + (unkuint9)SUB168(auVar26 * auVar46,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar53;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = *(uint64_t *)(arg1 + 0x98);
  Var6 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar27 * auVar47,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar3 = (uint64_t)Var6;
  Var7 = (unkuint9)
         ((uint64_t)((char)((unkuint9)Var7 >> 0x40) != '\0') +
          (uint64_t)((char)((unkuint9)Var5 >> 0x40) != '\0') +
         (uint64_t)(CARRY8(uVar56,uVar58) || CARRY8(uVar55,uVar2))) +
         (unkuint9)SUB168(auVar27 * auVar47,8) + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var5 = (unkuint9)(uint64_t)Var7 + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar54 = (uint64_t)Var5;
  lVar59 = uVar51 + (uVar52 << 0x20);
  uVar53 = (uint64_t)CARRY8(uVar51,uVar52 << 0x20);
  uVar51 = uVar1 + (uVar52 >> 0x20);
  uVar57 = uVar51 + uVar53;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar52;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = g_0100b018;
  uVar2 = SUB168(auVar28 * auVar48,0);
  uVar55 = SUB168(auVar28 * auVar48,8);
  uVar53 = (uint64_t)(CARRY8(uVar1,uVar52 >> 0x20) || CARRY8(uVar51,uVar53));
  uVar51 = uVar3 + uVar2;
  uVar56 = uVar51 + uVar53;
  uVar53 = (uint64_t)(CARRY8(uVar3,uVar2) || CARRY8(uVar51,uVar53));
  uVar51 = uVar54 + uVar55;
  uVar52 = uVar51 + uVar53;
  uVar1 = (uint64_t)(uVar57 < g_0100b008 || uVar57 - g_0100b008 < (uint64_t)(lVar59 != -1));
  uVar2 = (uint64_t)(uVar56 < uVar1);
  uVar3 = uVar52 - g_0100b018;
  bVar4 = (byte)(((char)((unkuint9)Var7 >> 0x40) != '\0') + ((char)((unkuint9)Var5 >> 0x40) != '\0')
                + (CARRY8(uVar54,uVar55) || CARRY8(uVar51,uVar53))) <
          (uVar52 < g_0100b018 || uVar3 < uVar2);
  uVar53 = (uVar57 - g_0100b008) - (uint64_t)(lVar59 != -1);
  lVar49 = lVar59 + 1;
  if (bVar4) {
    uVar53 = uVar57;
    lVar49 = lVar59;
  }
  *this_ptr = lVar49;
  uVar51 = uVar56 - uVar1;
  if (bVar4) {
    uVar51 = uVar56;
  }
  this_ptr[1] = uVar53;
  uVar53 = uVar3 - uVar2;
  if (bVar4) {
    uVar53 = uVar52;
  }
  this_ptr[2] = uVar51;
  this_ptr[3] = uVar53;
  return 0;
}

