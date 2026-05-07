// Function: FUN_0100bea0
// Address: 0100bea0
// Size: 752 bytes
// Class: Unknown


longlong FUN_0100bea0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  unkint9 Var3;
  unkint9 Var4;
  ulonglong uVar5;
  ulonglong uVar6;
  unkint9 Var7;
  unkint9 Var8;
  unkint9 Var9;
  unkint9 Var10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
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
  ulonglong *unaff_RSI;
  ulonglong *unaff_RDI;
  ulonglong uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  
  uVar69 = *unaff_RSI;
  uVar63 = unaff_RSI[1];
  uVar66 = unaff_RSI[2];
  uVar68 = unaff_RSI[3];
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
    uVar1 = (ulonglong)CARRY8(uVar64,uVar1);
    uVar64 = uVar67 + uVar6;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar63;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar66;
    Var3 = (unkuint9)(uVar64 + uVar1) + (unkuint9)SUB168(auVar14 * auVar40,0) + (unkuint9)0;
    uVar5 = (ulonglong)Var3;
    Var7 = (unkuint9)
           (SUB168(auVar13 * auVar39,8) + (ulonglong)(CARRY8(uVar67,uVar6) || CARRY8(uVar64,uVar1)))
           + (unkuint9)SUB168(auVar14 * auVar40,8) + (unkuint9)0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar63;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar68;
    Var3 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar15 * auVar41,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar1 = (ulonglong)Var3;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar66;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar68;
    Var4 = (unkuint9)uVar2 + (unkuint9)uVar2 + (unkuint9)0;
    Var7 = (unkuint9)
           (SUB168(auVar15 * auVar41,8) + (ulonglong)((char)((unkuint9)Var7 >> 0x40) != '\0') +
           (ulonglong)((char)((unkuint9)Var3 >> 0x40) != '\0')) +
           (unkuint9)SUB168(auVar16 * auVar42,0) + (unkuint9)0;
    uVar64 = (ulonglong)Var7;
    Var3 = (unkuint9)uVar65 + (unkuint9)uVar65 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)SUB168(auVar16 * auVar42,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar2 = (ulonglong)Var8;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar69;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar69;
    uVar69 = SUB168(auVar17 * auVar43,0);
    Var7 = (unkuint9)uVar5 + (unkuint9)uVar5 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var9 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar17 * auVar43,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)uVar1 + (unkuint9)uVar1 + (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar63;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar63;
    Var8 = (unkuint9)uVar64 + (unkuint9)uVar64 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var10 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar18 * auVar44,0) +
            (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var3 = (unkuint9)uVar2 + (unkuint9)uVar2 + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar66;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar66;
    Var7 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar18 * auVar44,8) +
           (unkuint9)((char)((unkuint9)Var10 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar19 * auVar45,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar63 = (ulonglong)Var4;
    Var4 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar19 * auVar45,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar1 = (ulonglong)Var4;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar68;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar68;
    Var4 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar20 * auVar46,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar64 = (ulonglong)Var4;
    uVar5 = (ulonglong)((char)((unkuint9)Var3 >> 0x40) != '\0') + SUB168(auVar20 * auVar46,8) +
            (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar66 = uVar69 * DAT_0100b0e0;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar66;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = DAT_0100b0c0;
    Var3 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar21 * auVar47,0) + (unkuint9)0;
    Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar21 * auVar47,8) + (unkuint9)0;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar66;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = DAT_0100b0c8;
    Var4 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar22 * auVar48,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar69 = (ulonglong)Var4;
    Var8 = (unkuint9)(ulonglong)Var10 + (unkuint9)SUB168(auVar22 * auVar48,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar66;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = DAT_0100b0d0;
    Var4 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar23 * auVar49,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar23 * auVar49,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar66;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = DAT_0100b0d8;
    Var7 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar24 * auVar50,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar24 * auVar50,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var8 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar66 = uVar69 * DAT_0100b0e0;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar66;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = DAT_0100b0c0;
    Var8 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar25 * auVar51,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar25 * auVar51,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar66;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = DAT_0100b0c8;
    Var9 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar26 * auVar52,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar69 = (ulonglong)Var9;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar26 * auVar52,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar66;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = DAT_0100b0d0;
    Var7 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar27 * auVar53,0) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar27 * auVar53,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar66;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = DAT_0100b0d8;
    Var9 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar28 * auVar54,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar28 * auVar54,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var3 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar66 = uVar69 * DAT_0100b0e0;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar66;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = DAT_0100b0c0;
    Var3 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar29 * auVar55,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var7 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar29 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar66;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = DAT_0100b0c8;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar30 * auVar56,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar69 = (ulonglong)Var4;
    Var7 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar30 * auVar56,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar66;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = DAT_0100b0d0;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar31 * auVar57,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar31 * auVar57,8) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar66;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = DAT_0100b0d8;
    Var7 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar32 * auVar58,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var8 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar32 * auVar58,8) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulonglong)Var8 + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar68 = uVar69 * DAT_0100b0e0;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar68;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = DAT_0100b0c0;
    Var8 = (unkuint9)uVar69 + (unkuint9)SUB168(auVar33 * auVar59,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar33 * auVar59,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar68;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = DAT_0100b0c8;
    Var9 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar34 * auVar60,0) +
           (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
    uVar66 = (ulonglong)Var9;
    Var4 = (unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar34 * auVar60,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar68;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = DAT_0100b0d0;
    Var7 = (unkuint9)(ulonglong)Var4 + (unkuint9)SUB168(auVar35 * auVar61,0) +
           (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
    uVar2 = (ulonglong)Var7;
    Var3 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar35 * auVar61,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar68;
    auVar62._8_8_ = 0;
    auVar62._0_8_ = DAT_0100b0d8;
    Var4 = (unkuint9)(ulonglong)Var3 + (unkuint9)SUB168(auVar36 * auVar62,0) +
           (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
    uVar6 = (ulonglong)Var4;
    uVar65 = (longlong)Var8 + SUB168(auVar36 * auVar62,8) +
             (ulonglong)((char)((unkuint9)Var3 >> 0x40) != '\0') +
             (ulonglong)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar69 = uVar63 + uVar66;
    uVar66 = (ulonglong)CARRY8(uVar63,uVar66);
    uVar68 = uVar2 + uVar1;
    uVar63 = uVar68 + uVar66;
    uVar68 = (ulonglong)(CARRY8(uVar2,uVar1) || CARRY8(uVar68,uVar66));
    uVar1 = uVar6 + uVar64;
    uVar66 = uVar1 + uVar68;
    uVar1 = (ulonglong)(CARRY8(uVar6,uVar64) || CARRY8(uVar1,uVar68));
    uVar64 = uVar65 + uVar5;
    uVar68 = uVar64 + uVar1;
    uVar1 = (ulonglong)(CARRY8(uVar65,uVar5) || CARRY8(uVar64,uVar1));
    uVar64 = (ulonglong)
             (uVar63 < DAT_0100b0c8 || uVar63 - DAT_0100b0c8 < (ulonglong)(uVar69 < DAT_0100b0c0));
    uVar5 = (ulonglong)(uVar66 < DAT_0100b0d0 || uVar66 - DAT_0100b0d0 < uVar64);
    uVar2 = (ulonglong)(uVar68 < DAT_0100b0d8 || uVar68 - DAT_0100b0d8 < uVar5);
    if (uVar2 <= uVar1) {
      uVar68 = (uVar68 - DAT_0100b0d8) - uVar5;
      uVar66 = (uVar66 - DAT_0100b0d0) - uVar64;
      uVar63 = (uVar63 - DAT_0100b0c8) - (ulonglong)(uVar69 < DAT_0100b0c0);
      uVar69 = uVar69 - DAT_0100b0c0;
    }
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  *unaff_RDI = uVar69;
  unaff_RDI[1] = uVar63;
  unaff_RDI[2] = uVar66;
  unaff_RDI[3] = uVar68;
  return uVar1 - uVar2;
}


