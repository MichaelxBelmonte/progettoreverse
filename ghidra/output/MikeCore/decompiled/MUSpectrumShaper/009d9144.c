// Function: FUN_009d9144
// Address: 009d9144
// Size: 726 bytes
// Class: MUSpectrumShaper


/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_009d9144(void)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined *puVar15;
  byte *pbVar16;
  undefined8 **ppuVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  ulonglong uVar20;
  undefined7 uVar21;
  longlong *unaff_RDI;
  longlong *plVar22;
  byte *pbVar23;
  uint uVar24;
  byte bVar25;
  byte *pbStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  ushort uStack_c0;
  ulonglong uStack_bc;
  undefined1 uStack_b4;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  pbVar19 = (byte *)(unaff_RDI[0x11] + 1);
  unaff_RDI[0x11] = (longlong)pbVar19;
  if (pbVar19 == (byte *)unaff_RDI[0x10]) {
LAB_009d936f:
    FUN_009d86be();
    return 0;
  }
  uVar8 = *(uint *)(*unaff_RDI + 0x28);
  if (((uVar8 & 0x203) == 0) || ((uVar8 & 0x1003) == 0x1001)) {
    cVar6 = *(char *)(*(longlong *)unaff_RDI[1] + 0x20 + (ulonglong)*pbVar19);
    if (cVar6 == '\x06') {
      uVar10 = FUN_009dc470();
      return uVar10;
    }
    if (cVar6 == '\b') {
      uVar10 = FUN_009dada4();
      return uVar10;
    }
  }
  uVar10 = 0;
  if ((uVar8 >> 0x16 & 1) == 0) {
    uVar24 = (int)unaff_RDI[0x12] + 1;
    uVar10 = (ulonglong)uVar24;
    *(uint *)(unaff_RDI + 0x12) = uVar24;
    if ((uVar8 >> 0x17 & 1) != 0) {
      FUN_009dc95a();
    }
  }
  lVar11 = FUN_009d8a9c();
  iVar9 = (int)uVar10;
  *(int *)(lVar11 + 0x10) = iVar9;
  lVar13 = *unaff_RDI;
  uVar8 = *(uint *)(lVar13 + 0x28);
  bVar25 = (byte)(uVar8 >> 0x14) & 1;
  *(byte *)(lVar11 + 0x14) = bVar25;
  lVar14 = *(longlong *)(lVar13 + 0x160);
  lVar3 = unaff_RDI[0x15];
  uVar20 = (*(longlong *)(lVar13 + 0x168) - lVar14) + 7U & 0xfffffffffffffff8;
  *(ulonglong *)(lVar13 + 0x168) = lVar14 + uVar20;
  unaff_RDI[0x15] = uVar20;
  lVar13 = unaff_RDI[0x16];
  *(undefined1 *)(unaff_RDI + 0x16) = 0;
  uVar2 = *(undefined4 *)((longlong)unaff_RDI + 0x94);
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0xffffffff;
  FUN_009d8d70();
  cVar6 = FUN_009d8e36();
  if (cVar6 == '\0') {
    return 0;
  }
  if ((char)unaff_RDI[0x16] != '\0') {
    lVar12 = FUN_009d8a9c();
    *(byte *)(lVar12 + 0x10) = bVar25;
  }
  lVar12 = *unaff_RDI;
  *(uint *)(lVar12 + 0x28) = uVar8;
  uVar24 = uVar8 >> 0x14 & 1;
  if (uVar24 != *(byte *)(unaff_RDI + 3)) {
    *(char *)(unaff_RDI + 3) = (char)uVar24;
  }
  *(char *)(unaff_RDI + 0x16) = (char)lVar13;
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = uVar2;
  pbVar19 = (byte *)unaff_RDI[0x11];
  if (pbVar19 == (byte *)unaff_RDI[0x10]) goto LAB_009d936f;
  uVar20 = (ulonglong)*pbVar19;
  if (*(char *)(*(longlong *)unaff_RDI[1] + 0x20 + uVar20) != '\x02') {
    return 0;
  }
  if ((iVar9 == 0) || ((uVar8 & 0x800000) == 0)) {
LAB_009d93af:
    unaff_RDI[0x11] = (longlong)(pbVar19 + 1);
    lVar13 = FUN_009d8a9c(uVar20,0x18);
    *(int *)(lVar13 + 0x10) = iVar9;
    *(byte *)(lVar13 + 0x14) = (byte)(*(uint *)(*unaff_RDI + 0x28) >> 0x14) & 1;
    unaff_RDI[0x14] = lVar11 - lVar14;
    unaff_RDI[0x15] = lVar3;
    if (iVar9 - 1U < 0x1f) {
      *(uint *)((longlong)unaff_RDI + 0x24) =
           *(uint *)((longlong)unaff_RDI + 0x24) | 1 << ((byte)(iVar9 - 1U) & 0x1f);
    }
    return CONCAT71((int7)(uVar10 >> 8),1);
  }
  if ((ulonglong)(iVar9 - 1) <
      (ulonglong)(*(longlong *)(lVar12 + 0x180) - *(longlong *)(lVar12 + 0x178) >> 4)) {
    uVar20 = (longlong)pbVar19 - unaff_RDI[0xf];
    *(ulonglong *)(*(longlong *)(lVar12 + 0x178) + 8 + (ulonglong)(iVar9 - 1) * 0x10) = uVar20;
    goto LAB_009d93af;
  }
  plVar22 = (longlong *)(lVar12 + 0x178);
  std::__vector_base_common<true>::__throw_out_of_range();
  pbVar16 = *(byte **)(lVar12 + 0x1f8);
  lVar13 = *(longlong *)(lVar12 + 0x200);
  pbVar19 = (byte *)(lVar13 + 1);
  *(byte **)(lVar12 + 0x200) = pbVar19;
  if (pbVar19 == pbVar16) {
    lVar13 = *(longlong *)(lVar12 + 0x1f0);
    ppuVar17 = &puStack_f0;
    FUN_009d5ed0();
    FUN_009d8cfc(ppuVar17,(longlong)pbVar19 - lVar13);
    goto LAB_009d94bd;
  }
  lVar14 = **(longlong **)(lVar12 + 0x180);
  cVar6 = *(char *)(lVar14 + 0x20 + (ulonglong)*pbVar19);
  bVar25 = cVar6 - 0x11;
  if (0x2a < bVar25) goto switchD_009d947b_caseD_1a;
  bVar1 = 0;
  uVar8 = (&switchD_009d947b::switchdataD_009d9d8c)[bVar25];
  uVar21 = (undefined7)((ulonglong)pbVar19 >> 8);
  switch(cVar6) {
  case '\x11':
    uVar10 = FUN_009dd9d0();
    return uVar10;
  case '\x12':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x13':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x14':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x15':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x16':
    goto switchD_009d947b_caseD_16;
  case '\x17':
    bVar1 = 1;
    goto switchD_009d947b_caseD_16;
  case '\x18':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '\x19':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  default:
    goto switchD_009d947b_caseD_1a;
  case '!':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) == 0) goto LAB_009d977c;
    goto switchD_009d947b_caseD_1a;
  case '0':
    uVar10 = FUN_009ddabc();
    return uVar10;
  case '1':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '2':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    pbVar19 = (byte *)(ulonglong)(byte)(2 - ((*(uint *)(*plVar22 + 0x28) >> 0xc & 1) == 0));
    if ((*(uint *)(*plVar22 + 0x28) >> 0xd & 1) != 0) {
      pbVar19 = (byte *)0x0;
    }
    lVar13 = FUN_009d8a9c(0,0x18);
    *(char *)(lVar13 + 0x10) = (char)pbVar19;
    goto LAB_009d981a;
  case '3':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '4':
    *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
    break;
  case '6':
    goto switchD_009d947b_caseD_36;
  case '7':
    bVar1 = 1;
switchD_009d947b_caseD_36:
    pbVar19 = (byte *)(lVar13 + 2);
    *(byte **)(lVar12 + 0x200) = pbVar19;
    if (pbVar19 == pbVar16) {
      lVar13 = *(longlong *)(lVar12 + 0x1f0);
      ppuVar17 = &puStack_f0;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar17,(longlong)pbVar16 - lVar13);
LAB_009d94bd:
      if (((ulonglong)puStack_f0 & 1) != 0) {
        operator_delete(ppuVar17);
      }
LAB_009d94cc:
      uVar10 = 0;
      goto LAB_009d981c;
    }
    if (*(char *)(lVar14 + 0x20 + (ulonglong)*pbVar19) == '\x0f') {
      pbVar19 = (byte *)(lVar13 + 3);
      do {
        *(byte **)(lVar12 + 0x200) = pbVar19;
        if (pbVar16 == pbVar19) {
          lVar13 = *(longlong *)(lVar12 + 0x1f0);
          ppuVar17 = &puStack_f0;
          FUN_009d5ed0();
          FUN_009d8cfc(ppuVar17,(longlong)pbVar16 - lVar13);
          goto LAB_009d94bd;
        }
        bVar25 = *pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (*(char *)(lVar14 + 0x20 + (ulonglong)bVar25) != '\x10');
      *(byte **)(lVar12 + 0x200) = pbVar19;
      uVar8 = FUN_009d826e();
    }
    else {
      uVar8 = FUN_009d826e();
      *(longlong *)(lVar12 + 0x200) = *(longlong *)(lVar12 + 0x200) + 1;
    }
    puVar18 = (undefined8 *)(ulonglong)uVar8;
    if (uVar8 == 0) {
      lVar13 = *(longlong *)(lVar12 + 0x200);
      lVar14 = *(longlong *)(lVar12 + 0x1f0);
      ppuVar17 = &puStack_f0;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar17,lVar13 - lVar14);
      goto LAB_009d94bd;
    }
    puStack_f0 = &uStack_e8;
    uStack_e0 = 0;
    uStack_e8 = 0;
    lStack_d8 = 0;
    lStack_d0 = 0;
    uStack_c8 = 0;
    puStack_b0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_c0 = (ushort)bVar1;
    uStack_bc = (ulonglong)uVar8;
    uStack_b4 = 0;
    lVar13 = FUN_009de670(puVar18,0);
    uVar10 = CONCAT71(uVar21,1);
    if (lVar13 == 0) {
      FUN_009d86be();
      goto LAB_009d983e;
    }
    goto LAB_009d98f4;
  case '9':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) != 0) goto LAB_009d977c;
    pbStack_f8 = (byte *)(lVar13 + 2);
    *(byte **)(lVar12 + 0x200) = pbStack_f8;
    if (pbStack_f8 == pbVar16) {
      lVar13 = *(longlong *)(lVar12 + 0x1f0);
      ppuVar17 = &puStack_f0;
      FUN_009d5ed0();
      FUN_009d8cfc(ppuVar17,(longlong)pbVar16 - lVar13);
      goto LAB_009d94bd;
    }
    bVar25 = *pbStack_f8;
    bVar1 = *(byte *)(lVar14 + 0x20 + (ulonglong)bVar25);
    lVar14 = 2;
    bVar5 = false;
    if ((ulonglong)bVar1 < 0x1a) {
      uVar10 = 0;
      if ((0x2108000UL >> ((ulonglong)bVar1 & 0x3f) & 1) != 0) {
        pbStack_f8 = (byte *)(lVar13 + 3);
        *(byte **)(lVar12 + 0x200) = pbStack_f8;
        if (pbStack_f8 == pbVar16) {
          lVar13 = *(longlong *)(lVar12 + 0x1f0);
          ppuVar17 = &puStack_f0;
          FUN_009d5ed0();
          FUN_009d8cfc(ppuVar17,(longlong)pbVar16 - lVar13);
          goto LAB_009d94bd;
        }
        uVar10 = 0x10;
        if (bVar1 != 0xf) {
          uVar10 = (ulonglong)(byte)((bVar1 != 0x14) * '\x04' + 0x15);
        }
        bVar25 = *pbStack_f8;
        bVar5 = true;
        lVar14 = 3;
      }
    }
    else {
      uVar10 = 0;
    }
    if (bVar25 == 0x2d) {
      pbStack_f8 = (byte *)(lVar13 + 1 + lVar14);
      *(byte **)(lVar12 + 0x200) = pbStack_f8;
      if (pbStack_f8 == pbVar16) {
        lVar13 = *(longlong *)(lVar12 + 0x1f0);
        ppuVar17 = &puStack_f0;
        FUN_009d5ed0();
        FUN_009d8cfc(ppuVar17,(longlong)pbVar16 - lVar13);
        goto LAB_009d94bd;
      }
    }
    puVar15 = (undefined *)FUN_009dcab0(10,pbVar16);
    cVar6 = (char)uVar10;
    if ((cVar6 != '\0') && ((longlong)puVar15 < 0)) {
      pbVar19 = *(byte **)(lVar12 + 0x1f8);
      pbVar16 = *(byte **)(lVar12 + 0x200);
      puVar15 = &DAT_00002710;
      pbStack_f8 = pbVar16;
      if (pbVar16 != pbVar19) {
        lVar13 = **(longlong **)(lVar12 + 0x180);
        cVar7 = *(char *)(lVar13 + 0x20 + (ulonglong)*pbVar16);
        while (pbVar23 = pbStack_f8, cVar7 != cVar6) {
          pbStack_f8 = pbStack_f8 + 1;
          *(byte **)(lVar12 + 0x200) = pbStack_f8;
          pbVar23 = pbVar19;
          if (pbVar19 == pbStack_f8) break;
          cVar7 = *(char *)(lVar13 + 0x20 + (ulonglong)*pbStack_f8);
        }
        uVar10 = 0;
        if (pbVar16 != pbVar23) {
          uVar20 = 0;
          do {
            uVar10 = uVar20 * 0x40;
            uVar20 = (uVar20 >> 2) + uVar10 + (longlong)(char)*pbVar16 + 0x9e3779b9 ^ uVar20;
            pbVar16 = pbVar16 + 1;
          } while (pbVar23 != pbVar16);
          puVar15 = &DAT_00002710 + uVar20 % 0x7fffd8ee;
        }
      }
    }
    if (bVar25 == 0x2d) {
      puVar15 = (undefined *)((ulonglong)(*(int *)(lVar12 + 0x208) + 1) - (longlong)puVar15);
    }
    if (((longlong)puVar15 < 0x21) && (puVar15 + -1 < (undefined *)0x1f)) {
      uVar8 = *(uint *)(lVar12 + 0x19c) >> ((byte)((char)puVar15 - 1) & 0x1f);
joined_r0x009d9cd9:
      if ((uVar8 & 1) != 0) {
        *(byte **)(lVar12 + 0x200) = pbStack_f8;
        lVar13 = FUN_009d8a9c();
        *(int *)(lVar13 + 0x10) = (int)puVar15;
        *(byte *)(lVar13 + 0x14) = (byte)(*(uint *)(*plVar22 + 0x28) >> 0x14) & 1;
        *(byte **)(lVar12 + 0x200) = pbStack_f8;
        uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
        if (!bVar5) goto LAB_009d981c;
        if ((pbStack_f8 != *(byte **)(lVar12 + 0x1f8)) &&
           (*(char *)(**(longlong **)(lVar12 + 0x180) + 0x20 + (ulonglong)*pbStack_f8) == cVar6)) {
          *(byte **)(lVar12 + 0x200) = pbStack_f8 + 1;
          goto LAB_009d981c;
        }
        lVar13 = *(longlong *)(lVar12 + 0x1f0);
        ppuVar17 = &puStack_f0;
        FUN_009d5ed0();
        FUN_009d8cfc(ppuVar17,(longlong)pbStack_f8 - lVar13);
        goto LAB_009d94bd;
      }
    }
    else if ((10000 < (longlong)puVar15) &&
            ((iVar9 = FUN_009ddbc4(), 0 < iVar9 && (iVar9 = FUN_009ddbc4(), iVar9 < 0x21)))) {
      uVar8 = *(uint *)(lVar12 + 0x19c);
      uVar10 = (ulonglong)uVar8;
      cVar7 = FUN_009ddbc4();
      uVar8 = uVar8 >> ((byte)(cVar7 - 1) & 0x1f);
      goto joined_r0x009d9cd9;
    }
    FUN_009d86be();
    goto LAB_009d94cc;
  case ':':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) != 0) goto LAB_009d977c;
    lVar14 = FUN_009d8a9c((longlong)&switchD_009d947b::switchdataD_009d9d8c + (longlong)(int)uVar8,
                          0x18);
    *(undefined4 *)(lVar14 + 0x10) = 0xfffffffb;
    lVar13 = *plVar22;
    *(byte *)(lVar14 + 0x14) = (byte)(*(uint *)(lVar13 + 0x28) >> 0x14) & 1;
    *(ulonglong *)(lVar13 + 0x168) =
         ((*(longlong *)(lVar13 + 0x168) - *(longlong *)(lVar13 + 0x160)) + 7U & 0xfffffffffffffff8)
         + *(longlong *)(lVar13 + 0x160);
    *(longlong *)(lVar12 + 0x200) = *(longlong *)(lVar12 + 0x200) + 1;
    goto LAB_009d981a;
  case ';':
    if ((*(ushort *)(*plVar22 + 0x28) & 0x203) == 0) {
      uVar4 = *(undefined8 *)(lVar12 + 0x1f0);
      *(undefined **)(lVar12 + 0x200) = &DAT_023cf0c0;
      *(undefined **)(lVar12 + 0x1f0) = &DAT_023cf0c0;
      *(undefined **)(lVar12 + 0x1f8) = &DAT_023cf0d4;
      uVar10 = FUN_009d8d70();
      *(longlong *)(lVar12 + 0x200) = lVar13 + 2;
      *(byte **)(lVar12 + 0x1f8) = pbVar16;
      *(undefined8 *)(lVar12 + 0x1f0) = uVar4;
      return uVar10;
    }
LAB_009d977c:
    bVar1 = 0;
switchD_009d947b_caseD_16:
    uVar8 = FUN_009d826e();
    if (uVar8 != 0) {
      puStack_f0 = &uStack_e8;
      uStack_e0 = 0;
      uStack_e8 = 0;
      lStack_d8 = 0;
      lStack_d0 = 0;
      uStack_c8 = 0;
      puVar18 = &uStack_a8;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_c0 = (ushort)bVar1;
      uStack_bc = (ulonglong)uVar8;
      uStack_b4 = 0;
      puStack_b0 = puVar18;
      lVar13 = FUN_009de670(puVar18,0);
      if (lVar13 == 0) {
        FUN_009d86be();
LAB_009d983e:
        uVar10 = 0;
      }
      else {
        *(longlong *)(lVar12 + 0x200) = *(longlong *)(lVar12 + 0x200) + 1;
        uVar10 = CONCAT71(uVar21,1);
      }
LAB_009d98f4:
      FUN_009df1d6();
      if (lStack_d8 != 0) {
        lStack_d0 = lStack_d8;
        operator_delete(puVar18);
      }
      FUN_009df1d6();
      goto LAB_009d981c;
    }
switchD_009d947b_caseD_1a:
    FUN_009dd3a8();
    FUN_009dd2e4();
    goto LAB_009d981a;
  }
  FUN_009d8a9c((longlong)&switchD_009d947b::switchdataD_009d9d8c + (longlong)(int)uVar8,0x10);
LAB_009d981a:
  uVar10 = CONCAT71((int7)((ulonglong)pbVar19 >> 8),1);
LAB_009d981c:
  return uVar10 & 0xffffffff;
}


