// Function: FUN_0100c700
// Address: 0100c700
// Size: 579 bytes
// Class: Unknown


undefined8 FUN_0100c700(undefined8 param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  longlong lVar49;
  longlong unaff_RBX;
  ulonglong uVar50;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong in_R10;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong in_R11;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong unaff_R12;
  ulonglong uVar58;
  longlong lVar59;
  
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
  uVar53 = (ulonglong)CARRY8(uVar51,uVar53);
  uVar51 = uVar54 + uVar1;
  uVar55 = uVar51 + uVar53;
  uVar53 = (ulonglong)(CARRY8(uVar54,uVar1) || CARRY8(uVar51,uVar53));
  uVar51 = uVar56 + uVar2;
  uVar57 = uVar51 + uVar53;
  uVar58 = SUB168(auVar12 * auVar32,8) + (ulonglong)(CARRY8(uVar56,uVar2) || CARRY8(uVar51,uVar53));
  uVar51 = (ulonglong)CARRY8(uVar3,uVar52 << 0x20);
  uVar54 = uVar55 + (uVar52 >> 0x20);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar52;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = DAT_0100b018;
  uVar2 = SUB168(auVar13 * auVar33,0);
  uVar50 = SUB168(auVar13 * auVar33,8);
  uVar53 = *(ulonglong *)(unaff_RBX + 8);
  uVar1 = (ulonglong)(CARRY8(uVar55,uVar52 >> 0x20) || CARRY8(uVar54,uVar51));
  uVar55 = uVar57 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uVar57,uVar2) || CARRY8(uVar55,uVar1));
  uVar56 = uVar58 + uVar50;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar53;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = *(ulonglong *)(unaff_RSI + 0x80);
  Var5 = (unkuint9)(uVar3 + (uVar52 << 0x20)) + (unkuint9)SUB168(auVar14 * auVar34,0) + (unkuint9)0;
  uVar52 = (ulonglong)Var5;
  Var6 = (unkuint9)(uVar54 + uVar51) + (unkuint9)SUB168(auVar14 * auVar34,8) + (unkuint9)0;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar53;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = *(ulonglong *)(unaff_RSI + 0x88);
  Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar15 * auVar35,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar57 = (ulonglong)Var5;
  Var6 = (unkuint9)(uVar55 + uVar1) + (unkuint9)SUB168(auVar15 * auVar35,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar53;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *(ulonglong *)(unaff_RSI + 0x90);
  Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar16 * auVar36,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar1 = (ulonglong)Var5;
  Var6 = (unkuint9)(uVar56 + uVar2) + (unkuint9)SUB168(auVar16 * auVar36,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar53;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *(ulonglong *)(unaff_RSI + 0x98);
  Var5 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar17 * auVar37,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar55 = (ulonglong)Var5;
  Var7 = (unkuint9)(CARRY8(uVar58,uVar50) || CARRY8(uVar56,uVar2)) +
         (unkuint9)SUB168(auVar17 * auVar37,8) + (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulonglong)Var7 + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar56 = (ulonglong)Var5;
  uVar51 = (ulonglong)CARRY8(uVar57,uVar52 << 0x20);
  uVar3 = uVar1 + (uVar52 >> 0x20);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar52;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = DAT_0100b018;
  uVar2 = SUB168(auVar18 * auVar38,0);
  uVar58 = SUB168(auVar18 * auVar38,8);
  uVar53 = *(ulonglong *)(unaff_RBX + 0x10);
  uVar1 = (ulonglong)(CARRY8(uVar1,uVar52 >> 0x20) || CARRY8(uVar3,uVar51));
  uVar54 = uVar55 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uVar55,uVar2) || CARRY8(uVar54,uVar1));
  uVar55 = uVar56 + uVar58;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar53;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = *(ulonglong *)(unaff_RSI + 0x80);
  Var6 = (unkuint9)(uVar57 + (uVar52 << 0x20)) + (unkuint9)SUB168(auVar19 * auVar39,0) + (unkuint9)0
  ;
  uVar52 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar3 + uVar51) + (unkuint9)SUB168(auVar19 * auVar39,8) + (unkuint9)0;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar53;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = *(ulonglong *)(unaff_RSI + 0x88);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar20 * auVar40,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar57 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar54 + uVar1) + (unkuint9)SUB168(auVar20 * auVar40,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar53;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = *(ulonglong *)(unaff_RSI + 0x90);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar21 * auVar41,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar1 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar55 + uVar2) + (unkuint9)SUB168(auVar21 * auVar41,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar53;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = *(ulonglong *)(unaff_RSI + 0x98);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar22 * auVar42,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar50 = (ulonglong)Var6;
  Var7 = (unkuint9)
         ((ulonglong)((char)((unkuint9)Var7 >> 0x40) != '\0') +
          (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0') +
         (ulonglong)(CARRY8(uVar56,uVar58) || CARRY8(uVar55,uVar2))) +
         (unkuint9)SUB168(auVar22 * auVar42,8) + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulonglong)Var7 + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar56 = (ulonglong)Var5;
  uVar51 = (ulonglong)CARRY8(uVar57,uVar52 << 0x20);
  uVar3 = uVar1 + (uVar52 >> 0x20);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar52;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = DAT_0100b018;
  uVar2 = SUB168(auVar23 * auVar43,0);
  uVar58 = SUB168(auVar23 * auVar43,8);
  uVar53 = *(ulonglong *)(unaff_RBX + 0x18);
  uVar1 = (ulonglong)(CARRY8(uVar1,uVar52 >> 0x20) || CARRY8(uVar3,uVar51));
  uVar54 = uVar50 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uVar50,uVar2) || CARRY8(uVar54,uVar1));
  uVar55 = uVar56 + uVar58;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar53;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = *(ulonglong *)(unaff_RSI + 0x80);
  Var6 = (unkuint9)(uVar57 + (uVar52 << 0x20)) + (unkuint9)SUB168(auVar24 * auVar44,0) + (unkuint9)0
  ;
  uVar52 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar3 + uVar51) + (unkuint9)SUB168(auVar24 * auVar44,8) + (unkuint9)0;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar53;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = *(ulonglong *)(unaff_RSI + 0x88);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar25 * auVar45,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar51 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar54 + uVar1) + (unkuint9)SUB168(auVar25 * auVar45,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar53;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = *(ulonglong *)(unaff_RSI + 0x90);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar26 * auVar46,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar1 = (ulonglong)Var6;
  Var8 = (unkuint9)(uVar55 + uVar2) + (unkuint9)SUB168(auVar26 * auVar46,8) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar53;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = *(ulonglong *)(unaff_RSI + 0x98);
  Var6 = (unkuint9)(ulonglong)Var8 + (unkuint9)SUB168(auVar27 * auVar47,0) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar3 = (ulonglong)Var6;
  Var7 = (unkuint9)
         ((ulonglong)((char)((unkuint9)Var7 >> 0x40) != '\0') +
          (ulonglong)((char)((unkuint9)Var5 >> 0x40) != '\0') +
         (ulonglong)(CARRY8(uVar56,uVar58) || CARRY8(uVar55,uVar2))) +
         (unkuint9)SUB168(auVar27 * auVar47,8) + (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulonglong)Var7 + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  uVar54 = (ulonglong)Var5;
  lVar59 = uVar51 + (uVar52 << 0x20);
  uVar53 = (ulonglong)CARRY8(uVar51,uVar52 << 0x20);
  uVar51 = uVar1 + (uVar52 >> 0x20);
  uVar57 = uVar51 + uVar53;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar52;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = DAT_0100b018;
  uVar2 = SUB168(auVar28 * auVar48,0);
  uVar55 = SUB168(auVar28 * auVar48,8);
  uVar53 = (ulonglong)(CARRY8(uVar1,uVar52 >> 0x20) || CARRY8(uVar51,uVar53));
  uVar51 = uVar3 + uVar2;
  uVar56 = uVar51 + uVar53;
  uVar53 = (ulonglong)(CARRY8(uVar3,uVar2) || CARRY8(uVar51,uVar53));
  uVar51 = uVar54 + uVar55;
  uVar52 = uVar51 + uVar53;
  uVar1 = (ulonglong)(uVar57 < DAT_0100b008 || uVar57 - DAT_0100b008 < (ulonglong)(lVar59 != -1));
  uVar2 = (ulonglong)(uVar56 < uVar1);
  uVar3 = uVar52 - DAT_0100b018;
  bVar4 = (byte)(((char)((unkuint9)Var7 >> 0x40) != '\0') + ((char)((unkuint9)Var5 >> 0x40) != '\0')
                + (CARRY8(uVar54,uVar55) || CARRY8(uVar51,uVar53))) <
          (uVar52 < DAT_0100b018 || uVar3 < uVar2);
  uVar53 = (uVar57 - DAT_0100b008) - (ulonglong)(lVar59 != -1);
  lVar49 = lVar59 + 1;
  if (bVar4) {
    uVar53 = uVar57;
    lVar49 = lVar59;
  }
  *unaff_RDI = lVar49;
  uVar51 = uVar56 - uVar1;
  if (bVar4) {
    uVar51 = uVar56;
  }
  unaff_RDI[1] = uVar53;
  uVar53 = uVar3 - uVar2;
  if (bVar4) {
    uVar53 = uVar52;
  }
  unaff_RDI[2] = uVar51;
  unaff_RDI[3] = uVar53;
  return 0;
}


