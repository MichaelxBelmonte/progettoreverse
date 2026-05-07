// Function: FUN_010cce30
// Address: 010cce30
// Size: 1374 bytes
// Class: MUAmplitudeAnalyzer
// String references:
//   "xn--"


undefined8 FUN_010cce30(byte *param_1,char *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  longlong lVar7;
  byte *pbVar8;
  byte bVar9;
  char cVar10;
  byte *unaff_RSI;
  byte *pbVar11;
  byte bVar12;
  byte *unaff_RDI;
  byte *pbVar13;
  byte *pbVar14;
  longlong lVar15;
  bool bVar16;
  char *pcVar6;
  
  if (((param_1 < (byte *)((longlong)&MACH_HEADER.magic + 2)) || (*param_2 != '.')) &&
     (unaff_RSI != (byte *)0x0)) {
    bVar9 = 1;
    if ((param_3 & 4) == 0) {
      pbVar4 = (byte *)0x0;
      iVar3 = 0;
      pbVar8 = unaff_RSI;
      pbVar14 = unaff_RDI;
      do {
        bVar1 = *pbVar14;
        if (bVar1 == 0x2a) {
          bVar16 = true;
          if (pbVar8 != (byte *)((longlong)&MACH_HEADER.magic + 1)) {
            bVar16 = pbVar14[1] == 0x2e;
          }
          if (((pbVar4 != (byte *)0x0) || ((bVar9 & 8) != 0 || iVar3 != 0)) ||
             ((bVar9 & 1 | bVar16) != 1)) goto LAB_010cd0ff;
          bVar9 = bVar9 & 0xfe;
          iVar3 = 0;
          pbVar4 = pbVar14;
        }
        else {
          bVar5 = (bVar1 & 0xdf) + 0xbf;
          pcVar6 = (char *)(ulonglong)bVar5;
          if ((bVar5 < 0x1a) ||
             (pcVar6 = (char *)(ulonglong)(bVar1 - 0x30), (byte)(bVar1 - 0x30) < 10)) {
            if (((bVar9 & 1) != 0) &&
               (((byte *)((longlong)&MACH_HEADER.magic + 3) < pbVar8 &&
                (iVar2 = _strncasecmp(pcVar6,(char *)&MACH_HEADER.cputype,param_3), iVar2 == 0)))) {
              bVar9 = 8;
            }
            bVar9 = bVar9 & 0xfa;
          }
          else if (bVar1 == 0x2e) {
            if ((bVar9 & 5) != 0) goto LAB_010cd0ff;
            iVar3 = iVar3 + 1;
            bVar9 = 1;
          }
          else {
            if ((bVar1 != 0x2d) || ((bVar9 & 1) != 0)) goto LAB_010cd0ff;
            bVar9 = bVar9 | 4;
          }
        }
        pbVar14 = pbVar14 + 1;
        pbVar8 = pbVar8 + -1;
      } while (pbVar8 != (byte *)0x0);
    }
    else {
      pbVar4 = (byte *)0x0;
      iVar3 = 0;
      pbVar8 = unaff_RDI;
      pbVar14 = unaff_RSI;
      do {
        bVar1 = *pbVar8;
        if (bVar1 == 0x2a) {
          bVar16 = true;
          if (pbVar14 != (byte *)((longlong)&MACH_HEADER.magic + 1)) {
            bVar16 = pbVar8[1] == 0x2e;
          }
          if (((pbVar4 != (byte *)0x0) || ((bVar9 & 8) != 0 || iVar3 != 0)) ||
             ((bVar16 & bVar9) != 1)) goto LAB_010cd0ff;
          bVar9 = bVar9 & 0xfe;
          iVar3 = 0;
          pbVar4 = pbVar8;
        }
        else {
          bVar5 = (bVar1 & 0xdf) + 0xbf;
          pcVar6 = (char *)(ulonglong)bVar5;
          if ((bVar5 < 0x1a) ||
             (pcVar6 = (char *)(ulonglong)(bVar1 - 0x30), (byte)(bVar1 - 0x30) < 10)) {
            if (((bVar9 & 1) != 0) &&
               (((byte *)((longlong)&MACH_HEADER.magic + 3) < pbVar14 &&
                (iVar2 = _strncasecmp(pcVar6,(char *)&MACH_HEADER.cputype,param_3), iVar2 == 0)))) {
              bVar9 = 8;
            }
            bVar9 = bVar9 & 0xfa;
          }
          else if (bVar1 == 0x2d) {
            if ((bVar9 & 1) != 0) goto LAB_010cd0ff;
            bVar9 = bVar9 | 4;
          }
          else {
            if ((bVar1 != 0x2e) || ((bVar9 & 5) != 0)) goto LAB_010cd0ff;
            iVar3 = iVar3 + 1;
            bVar9 = 1;
          }
        }
        pbVar8 = pbVar8 + 1;
        pbVar14 = pbVar14 + -1;
      } while (pbVar14 != (byte *)0x0);
    }
    if ((((bVar9 & 5) == 0) && (1 < iVar3)) && (pbVar4 != (byte *)0x0)) {
      lVar15 = (longlong)pbVar4 - (longlong)unaff_RDI;
      pbVar8 = unaff_RDI + (longlong)unaff_RSI;
      pbVar13 = pbVar8 + ~(ulonglong)pbVar4;
      pbVar14 = pbVar13 + lVar15;
      if (param_1 < pbVar14) {
        return 0;
      }
      if (lVar15 != 0) {
        lVar7 = 0;
        do {
          bVar9 = unaff_RDI[lVar7];
          if (bVar9 == 0) {
            return 0;
          }
          bVar1 = param_2[lVar7];
          if (bVar9 != bVar1) {
            bVar5 = bVar9 + 0x20;
            if (0x19 < (byte)(bVar9 + 0xbf)) {
              bVar5 = bVar9;
            }
            pbVar14 = (byte *)(ulonglong)bVar1;
            bVar9 = bVar1 + 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar9 = bVar1;
            }
            if (bVar5 != bVar9) {
              return 0;
            }
          }
          lVar7 = lVar7 + 1;
        } while (lVar15 != lVar7);
      }
      if (pbVar13 != (byte *)0x0) {
        pbVar8 = pbVar8 + -(longlong)pbVar4;
        pbVar11 = (byte *)((longlong)&MACH_HEADER.magic + 1);
        do {
          bVar9 = (param_2 +
                  (longlong)
                  (param_1 + (longlong)pbVar4 + (-(longlong)unaff_RDI - (longlong)unaff_RSI)))
                  [(longlong)pbVar11];
          if (bVar9 == 0) {
            return 0;
          }
          bVar1 = pbVar4[(longlong)pbVar11];
          if (bVar9 != bVar1) {
            bVar5 = bVar9 + 0x20;
            if (0x19 < (byte)(bVar9 + 0xbf)) {
              bVar5 = bVar9;
            }
            bVar12 = bVar1 + 0x20;
            if (0x19 < (byte)(bVar1 + 0xbf)) {
              bVar12 = bVar1;
            }
            bVar9 = bVar1;
            if (bVar5 != bVar12) {
              return 0;
            }
          }
          pbVar14 = (byte *)(ulonglong)bVar9;
          pbVar11 = pbVar11 + 1;
        } while (pbVar8 != pbVar11);
      }
      lVar7 = (longlong)param_1 - (longlong)pbVar13;
      if ((lVar15 == 0) && (pbVar4[1] == 0x2e)) {
        if (lVar7 == 0) {
          return 0;
        }
        cVar10 = (char)((param_3 & 8) >> 3);
      }
      else {
        cVar10 = '\0';
        if ((byte *)((longlong)&MACH_HEADER.magic + 3) < param_1) {
          iVar3 = _strncasecmp((char *)pbVar14,(char *)&MACH_HEADER.cputype,(size_t)pbVar8);
          cVar10 = '\0';
          if (iVar3 == 0) {
            return 0;
          }
        }
      }
      pcVar6 = param_2 + lVar15;
      if ((param_2 + lVar7 == pcVar6 + 1) && (*pcVar6 == '*')) {
        return 1;
      }
      if (lVar7 == lVar15) {
        return 1;
      }
      pbVar8 = (byte *)0x0;
      if (cVar10 == '\0') {
        while (((cVar10 = pcVar6[(longlong)pbVar8], (byte)(cVar10 - 0x30U) < 10 ||
                ((byte)(cVar10 + 0xbfU) < 0x1a)) ||
               ((cVar10 == '-' || ((byte)(cVar10 + 0x9fU) < 0x1a))))) {
          pbVar8 = pbVar8 + 1;
          if (param_1 + (1 - (longlong)unaff_RSI) == pbVar8) {
            return 1;
          }
        }
      }
      else {
        while ((((cVar10 = pcVar6[(longlong)pbVar8], (byte)(cVar10 - 0x30U) < 10 ||
                 ((byte)(cVar10 + 0xbfU) < 0x1a)) || ((byte)(cVar10 + 0x9fU) < 0x1a)) ||
               ((byte)(cVar10 - 0x2dU) < 2))) {
          pbVar8 = pbVar8 + 1;
          if (param_1 + (1 - (longlong)unaff_RSI) == pbVar8) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
LAB_010cd0ff:
  if ((short)param_3 < 0) {
    pbVar8 = unaff_RSI;
    pbVar14 = unaff_RDI;
    if (param_1 <= unaff_RSI && (longlong)unaff_RSI - (longlong)param_1 != 0) {
      pbVar4 = unaff_RDI + ((longlong)unaff_RSI - (longlong)param_1);
      if ((param_3 & 0x10) == 0) {
        do {
          if (*pbVar14 == 0) goto LAB_010cd1d5;
          pbVar8 = pbVar8 + -1;
          pbVar14 = pbVar14 + 1;
        } while (param_1 < pbVar8);
      }
      else {
        do {
          if ((*pbVar14 == 0) || (*pbVar14 == 0x2e)) goto LAB_010cd1d5;
          pbVar14 = pbVar14 + 1;
          pbVar8 = pbVar8 + -1;
        } while (param_1 < pbVar8);
      }
      goto LAB_010cd1e1;
    }
LAB_010cd1d5:
    pbVar4 = pbVar14;
    if (pbVar8 == param_1) goto LAB_010cd1e1;
  }
  pbVar4 = unaff_RDI;
  if (unaff_RSI != param_1) {
    return 0;
  }
LAB_010cd1e1:
  if (param_1 != (byte *)0x0) {
    pbVar8 = (byte *)0x0;
    do {
      bVar9 = pbVar4[(longlong)pbVar8];
      if (bVar9 == 0) {
        return 0;
      }
      bVar1 = param_2[(longlong)pbVar8];
      if (bVar9 != bVar1) {
        bVar5 = bVar9 + 0x20;
        if (0x19 < (byte)(bVar9 + 0xbf)) {
          bVar5 = bVar9;
        }
        bVar9 = bVar1 + 0x20;
        if (0x19 < (byte)(bVar1 + 0xbf)) {
          bVar9 = bVar1;
        }
        if (bVar5 != bVar9) {
          return 0;
        }
      }
      pbVar8 = pbVar8 + 1;
    } while (param_1 != pbVar8);
  }
  return 1;
}


