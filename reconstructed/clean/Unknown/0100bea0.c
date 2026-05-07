// Function: FUN_0100bea0
// Address: 0100bea0
// Size: 752 bytes
// Class: Unknown

int64_t FUN_0100bea0(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  unkint9 Var3;
  unkint9 Var4;
  uint64_t uVar5;
  uint64_t uVar6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
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
  uint64_t *arg1;
  uint64_t *this_ptr;
  uint64_t uVar63;
  uint64_t uVar64;
  uint64_t uVar65;
  uint64_t uVar66;
  uint64_t uVar67;
  uint64_t uVar68;
  uint64_t uVar69;
  
  uVar69 = *arg1;
  uVar63 = arg1[1];
  uVar66 = arg1[2];
  uVar68 = arg1[3];
  do {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar69;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar63;
    uVar2 = SUB168(auVar11 * auVar37,0);
    uVar64 = SUB168(auVar11 * auVar37,8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar69;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar66;
    uVar1 = SUB168(auVar12 * auVar38,0);
    uVar67 = SUB168(auVar12 * auVar38,8);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar69;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar68;
    uVar6 = SUB168(auVar13 * auVar39,0);
    uVar65 = uVar64 + uVar1;
    uVar1 = (uint64_t)CARRY8(uVar64,uVar1);
    uVar64 = uVar67 + uVar6;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar63;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar66;
    Var3 = (unkuint9)(uVar64 + uVar1) + (unkuint9)SUB168(auVar14 * auVar40,0) + (unkuint9)0;
    uVar5 = (uint64_t)Var3;
    Var7 = (unkuint9)
           (SUB168(auVar13 * auVar39,8) + (uint64_t)(CARRY8(uVar67,uVar6) || CARRY8(uVar64,uVar1)))
           + (unkuint9)SUB168(auVar14 * auVar40,8) + (unkuint9)0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar63;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar68;
    Var3 = (unkuint9)(uint64_t)Var7 + (unkuint9)SUB168(auVar15 * auVar41,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar1 = (uint64_t)Var3;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar66;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar68;
    Var4 = (unkuint9)uVar2 + (unkuint9)uVar2 + (unkuint9)0;
    Var7 = (unkuint9)
           (SUB168(auVar15 * auVar41,8) + (uint64_t)((char)((unkuint9)Var7 >> 0x40) != '\0') +
           (uint64_t)((char)((unkuint9)Var3 >> 0x40) != '\0')) +
           (unkuint9)SUB168(auVar16 * auVar42,0) + (unkuint9)0;
    uVar64 = (uint64_t)Var7;
    Var3 = (unkuint9)uVar65 + (unkuint9)uVar65 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)SUB168(auVar16 * auVar42,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar2 = (uint64_t)Var8;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar69;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar69;
    uVar69 = SUB168(auVar17 * auVar43,0);
    Var7 = (unkuint9)uVar5 + (unkuint9)uVar5 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var9 = (unkuint9)(uint64_t)Var4 + (unkuint9)SUB168(auVar17 * auVar43,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)uVar1 + (unkuint9)uVar1 + (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar63;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar63;
    Var8 = (unkuint9)uVar64 + (unkuint9)uVar64 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var10 = (unkuint9)(uint64_t)Var3 + (unkuint9)SUB168(auVar18 * auVar44,0) +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var3 = (unkuint9)uVar2 + (unkuint9)uVar2 + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar66;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar66;
    Var7 = (unkuint9)(uint64_t)Var7 + (unkuint9)SUB168(auVar18 * auVar44,8) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var4 = (unkuint9)(uint64_t)Var4 + (unkuint9)SUB168(auVar19 * auVar45,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar63 = (uint64_t)Var4;
    Var4 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar19 * auVar45,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar1 = (uint64_t)Var4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar68;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar68;
    Var4 = (unkuint9)(uint64_t)Var3 + (unkuint9)SUB168(auVar20 * auVar46,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar64 = (uint64_t)Var4;
    uVar5 = (uint64_t)((char)((unkuint9)Var3 >> 0x40) != '\0') + SUB168(auVar20 * auVar46,8) +
            (uint64_t)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar66 = uVar69 * g_0100b0e0;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar66;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = g_0100b0c0;
    Var3 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar21 * auVar47,0) + (unkuint9)0;
    Var8 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar21 * auVar47,8) + (unkuint9)0;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar66;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = g_0100b0c8;
    Var4 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar22 * auVar48,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar69 = (uint64_t)Var4;
    Var8 = (unkuint9)(uint64_t)Var10 + (unkuint9)SUB168(auVar22 * auVar48,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar66;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = g_0100b0d0;
    Var4 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar23 * auVar49,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(uint64_t)Var7 + (unkuint9)SUB168(auVar23 * auVar49,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar66;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = g_0100b0d8;
    Var7 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar24 * auVar50,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(uint64_t)Var3 + (unkuint9)SUB168(auVar24 * auVar50,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var3 = (unkuint9)(uint64_t)Var8 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar66 = uVar69 * g_0100b0e0;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar66;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = g_0100b0c0;
    Var8 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar25 * auVar51,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)(uint64_t)Var4 + (unkuint9)SUB168(auVar25 * auVar51,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar66;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = g_0100b0c8;
    Var9 = (unkuint9)(uint64_t)Var4 + (unkuint9)SUB168(auVar26 * auVar52,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar69 = (uint64_t)Var9;
    Var4 = (unkuint9)(uint64_t)Var7 + (unkuint9)SUB168(auVar26 * auVar52,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar66;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = g_0100b0d0;
    Var7 = (unkuint9)(uint64_t)Var4 + (unkuint9)SUB168(auVar27 * auVar53,0) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var3 = (unkuint9)(uint64_t)Var3 + (unkuint9)SUB168(auVar27 * auVar53,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar66;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = g_0100b0d8;
    Var9 = (unkuint9)(uint64_t)Var3 + (unkuint9)SUB168(auVar28 * auVar54,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var3 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar28 * auVar54,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var8 = (unkuint9)(uint64_t)Var3 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar66 = uVar69 * g_0100b0e0;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar66;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = g_0100b0c0;
    Var3 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar29 * auVar55,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var7 = (unkuint9)(uint64_t)Var7 + (unkuint9)SUB168(auVar29 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar66;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = g_0100b0c8;
    Var4 = (unkuint9)(uint64_t)Var7 + (unkuint9)SUB168(auVar30 * auVar56,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar69 = (uint64_t)Var4;
    Var7 = (unkuint9)(uint64_t)Var9 + (unkuint9)SUB168(auVar30 * auVar56,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar66;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = g_0100b0d0;
    Var4 = (unkuint9)(uint64_t)Var7 + (unkuint9)SUB168(auVar31 * auVar57,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar31 * auVar57,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar66;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = g_0100b0d8;
    Var7 = (unkuint9)(uint64_t)Var8 + (unkuint9)SUB168(auVar32 * auVar58,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(uint64_t)Var3 + (unkuint9)SUB168(auVar32 * auVar58,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var3 = (unkuint9)(uint64_t)Var8 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar68 = uVar69 * g_0100b0e0;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar68;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = g_0100b0c0;
    Var8 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar33 * auVar59,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)(uint64_t)Var4 + (unkuint9)SUB168(auVar33 * auVar59,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar68;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = g_0100b0c8;
    Var9 = (unkuint9)(uint64_t)Var4 + (unkuint9)SUB168(auVar34 * auVar60,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar66 = (uint64_t)Var9;
    Var4 = (unkuint9)(uint64_t)Var7 + (unkuint9)SUB168(auVar34 * auVar60,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar68;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = g_0100b0d0;
    Var7 = (unkuint9)(uint64_t)Var4 + (unkuint9)SUB168(auVar35 * auVar61,0) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar2 = (uint64_t)Var7;
    Var3 = (unkuint9)(uint64_t)Var3 + (unkuint9)SUB168(auVar35 * auVar61,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar68;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = g_0100b0d8;
    Var4 = (unkuint9)(uint64_t)Var3 + (unkuint9)SUB168(auVar36 * auVar62,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar6 = (uint64_t)Var4;
    uVar65 = (int64_t)Var8 + SUB168(auVar36 * auVar62,8) +
             (uint64_t)((char)((unkuint9)Var3 >> 0x40) != '\0') +
             (uint64_t)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar69 = uVar63 + uVar66;
    uVar66 = (uint64_t)CARRY8(uVar63,uVar66);
    uVar68 = uVar2 + uVar1;
    uVar63 = uVar68 + uVar66;
    uVar68 = (uint64_t)(CARRY8(uVar2,uVar1) || CARRY8(uVar68,uVar66));
    uVar1 = uVar6 + uVar64;
    uVar66 = uVar1 + uVar68;
    uVar1 = (uint64_t)(CARRY8(uVar6,uVar64) || CARRY8(uVar1,uVar68));
    uVar64 = uVar65 + uVar5;
    uVar68 = uVar64 + uVar1;
    uVar1 = (uint64_t)(CARRY8(uVar65,uVar5) || CARRY8(uVar64,uVar1));
    uVar64 = (uint64_t)
             (uVar63 < g_0100b0c8 || uVar63 - g_0100b0c8 < (uint64_t)(uVar69 < g_0100b0c0));
    uVar5 = (uint64_t)(uVar66 < g_0100b0d0 || uVar66 - g_0100b0d0 < uVar64);
    uVar2 = (uint64_t)(uVar68 < g_0100b0d8 || uVar68 - g_0100b0d8 < uVar5);
    if (uVar2 <= uVar1) {
      uVar68 = (uVar68 - g_0100b0d8) - uVar5;
      uVar66 = (uVar66 - g_0100b0d0) - uVar64;
      uVar63 = (uVar63 - g_0100b0c8) - (uint64_t)(uVar69 < g_0100b0c0);
      uVar69 = uVar69 - g_0100b0c0;
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  *this_ptr = uVar69;
  this_ptr[1] = uVar63;
  this_ptr[2] = uVar66;
  this_ptr[3] = uVar68;
  return uVar1 - uVar2;
}

