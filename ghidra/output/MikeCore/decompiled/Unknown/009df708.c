// Function: FUN_009df708
// Address: 009df708
// Size: 1215 bytes
// Class: Unknown


ulonglong FUN_009df708(void)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  byte *pbVar13;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte local_48;
  undefined1 local_47 [7];
  undefined1 *local_40;
  undefined1 *local_38;
  
  pbVar3 = (byte *)unaff_RDI[0x10];
  lVar4 = unaff_RDI[0x11];
  pbVar8 = (byte *)(lVar4 + 1);
  unaff_RDI[0x11] = (longlong)pbVar8;
  if (pbVar3 == pbVar8) {
    lVar4 = unaff_RDI[0xf];
    pbVar8 = &local_48;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar8,(longlong)pbVar3 - lVar4);
LAB_009df796:
    if ((local_48 & 1) != 0) {
      operator_delete(pbVar8);
    }
  }
  else {
    lVar5 = *(longlong *)unaff_RDI[1];
    cVar1 = *(char *)(lVar5 + 0x20 + (ulonglong)*pbVar8);
    puVar10 = (undefined1 *)0x0;
    if (cVar1 != '%') {
      if ((cVar1 != '$') ||
         (uVar6 = *(uint *)(*unaff_RDI + 0x28) & 0x103, puVar10 = (undefined1 *)(ulonglong)uVar6,
         uVar6 == 0x101)) {
        unaff_RDI[0x11] = lVar4;
        FUN_009df5d8();
LAB_009df768:
        uVar7 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
        goto LAB_009df7a7;
      }
      pbVar8 = (byte *)(lVar4 + 2);
      unaff_RDI[0x11] = (longlong)pbVar8;
      if (pbVar3 == pbVar8) {
        lVar4 = unaff_RDI[0xf];
        pbVar8 = &local_48;
        FUN_009d5ed0();
        FUN_009d8cfc(pbVar8,(longlong)pbVar3 - lVar4);
      }
      else {
        pbVar16 = (byte *)(lVar4 + 3);
        unaff_RDI[0x11] = (longlong)pbVar16;
        pbVar9 = pbVar16;
        pbVar15 = pbVar8;
        if (pbVar3 == pbVar16) {
          lVar4 = unaff_RDI[0xf];
          pbVar8 = &local_48;
          FUN_009d5ed0();
          FUN_009d8cfc(pbVar8,(longlong)pbVar3 - lVar4);
        }
        else {
          do {
            if (pbVar3 == pbVar9) {
              lVar4 = unaff_RDI[0xf];
              pbVar8 = &local_48;
              FUN_009d5ed0();
              FUN_009d8cfc(pbVar8,(longlong)pbVar3 - lVar4);
              goto LAB_009df796;
            }
            pbVar13 = pbVar9 + 1;
            pbVar14 = pbVar15 + 1;
            cVar1 = *(char *)(lVar5 + 0x20 + (ulonglong)*pbVar9);
            unaff_RDI[0x11] = (longlong)(pbVar15 + 2);
            pbVar9 = pbVar13;
            pbVar15 = pbVar14;
          } while (cVar1 != '$');
          if ((pbVar3 != pbVar13) && (*(char *)(lVar5 + 0x20 + (ulonglong)*pbVar13) == '\n')) {
            puVar10 = (undefined1 *)(ulonglong)*pbVar8;
            cVar1 = puVar10[lVar5 + 0x20];
            if (cVar1 != '\x04') {
              pbVar16 = pbVar8;
            }
            uVar6 = FUN_009d826e(puVar10,pbVar14);
            if (uVar6 != 0) {
              if (cVar1 == '\x04') {
                *(uint *)(unaff_RSI + 0x38) = *(uint *)(unaff_RSI + 0x38) | uVar6;
              }
              else {
                *(uint *)(unaff_RSI + 0x34) = *(uint *)(unaff_RSI + 0x34) | uVar6;
              }
              *(undefined1 *)(unaff_RSI + 0x3c) = 0;
              unaff_RDI[0x11] = unaff_RDI[0x11] + 1;
              goto LAB_009df768;
            }
            if ((*(char *)(unaff_RSI + 0x3c) != '\0') &&
               ((longlong)pbVar14 - (longlong)pbVar16 == 1)) {
              lVar4 = unaff_RDI[0x11];
              pbVar8 = (byte *)(lVar4 + 1);
              unaff_RDI[0x11] = (longlong)pbVar8;
              if ((pbVar8 != (byte *)unaff_RDI[0x10]) &&
                 (lVar5 = *(longlong *)unaff_RDI[1],
                 *(char *)(lVar5 + 0x20 + (ulonglong)*pbVar8) == '\n')) {
                cVar1 = *(char *)(lVar5 + 0x20 + (ulonglong)*pbVar16);
                if (cVar1 == '\x15') {
                  unaff_RDI[0x11] = lVar4 + 2;
                }
                else {
                  if (cVar1 != '\x14') goto LAB_009dfb75;
                  unaff_RDI[0x11] = lVar4 + 2;
                }
                FUN_009d8a9c(CONCAT71((int7)((ulonglong)lVar5 >> 8),cVar1),0x10);
                goto LAB_009df7a5;
              }
            }
LAB_009dfb75:
            FUN_009d86be();
            goto LAB_009df7a5;
          }
          lVar4 = unaff_RDI[0xf];
          pbVar8 = &local_48;
          FUN_009d5ed0();
          FUN_009d8cfc(pbVar8,(longlong)pbVar13 - lVar4);
        }
      }
      goto LAB_009df796;
    }
    pbVar8 = (byte *)(lVar4 + 2);
    unaff_RDI[0x11] = (longlong)pbVar8;
    if (pbVar3 == pbVar8) {
      lVar4 = unaff_RDI[0xf];
      pbVar8 = &local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar8,(longlong)pbVar3 - lVar4);
      goto LAB_009df796;
    }
    pbVar15 = (byte *)(lVar4 + 3);
    unaff_RDI[0x11] = (longlong)pbVar15;
    pbVar9 = pbVar8;
    if (pbVar3 == pbVar15) {
      lVar4 = unaff_RDI[0xf];
      pbVar8 = &local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar8,(longlong)pbVar3 - lVar4);
      goto LAB_009df796;
    }
    do {
      if (pbVar3 == pbVar15) {
        lVar4 = unaff_RDI[0xf];
        pbVar8 = &local_48;
        FUN_009d5ed0();
        FUN_009d8cfc(pbVar8,(longlong)pbVar3 - lVar4);
        goto LAB_009df796;
      }
      bVar2 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      pbVar16 = pbVar9 + 1;
      cVar1 = *(char *)(lVar5 + 0x20 + (ulonglong)bVar2);
      unaff_RDI[0x11] = (longlong)(pbVar9 + 2);
      pbVar9 = pbVar16;
    } while (cVar1 != '%');
    if ((pbVar3 == pbVar15) || (*(char *)(lVar5 + 0x20 + (ulonglong)*pbVar15) != '\n')) {
      lVar4 = unaff_RDI[0xf];
      pbVar8 = &local_48;
      FUN_009d5ed0();
      FUN_009d8cfc(pbVar8,(longlong)pbVar15 - lVar4);
      goto LAB_009df796;
    }
    FUN_009df20a(pbVar16,pbVar8);
    puVar10 = local_40;
    if ((local_48 & 1) == 0) {
      puVar10 = (undefined1 *)(ulonglong)(local_48 >> 1);
    }
    if (puVar10 + -1 < (undefined1 *)0x2) {
      if (puVar10 < (undefined1 *)((longlong)&MACH_HEADER.magic + 2)) {
        puVar10 = (undefined1 *)0x0;
      }
      else {
        puVar11 = local_47;
        if ((local_48 & 1) != 0) {
          puVar11 = local_38;
        }
        puVar10 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar10 >> 8),puVar11[1]);
      }
      FUN_009e01ca();
      unaff_RDI[0x11] = unaff_RDI[0x11] + 1;
      iVar12 = 2;
    }
    else {
      iVar12 = 1;
      FUN_009d86be(puVar10,(longlong)pbVar8 - unaff_RDI[0xf]);
    }
    if ((local_48 & 1) != 0) {
      operator_delete(puVar10);
    }
    if (iVar12 != 1) goto LAB_009df768;
  }
LAB_009df7a5:
  uVar7 = 0;
LAB_009df7a7:
  return uVar7 & 0xffffffff;
}


