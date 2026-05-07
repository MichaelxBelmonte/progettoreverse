// Function: FUN_00e21390
// Address: 00e21390
// Size: 1512 bytes
// Class: GNFileType
// String references:
//   "unexpected character '%c' while parsing unicode escape sequence, expected hex digit"
//   "unexpected string escape char '%c'"


void FUN_00e21390(void)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  short *psVar8;
  longlong lVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar10;
  short unaff_R12W;
  int iVar11;
  int iVar12;
  longlong local_50;
  char local_48;
  
  cVar4 = FUN_00e20b20();
  lVar3 = DAT_027859f0;
  if (cVar4 == '\0') {
    if (DAT_027859f0 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(short *)(*(longlong *)(unaff_RSI + 0x20) + (longlong)*(int *)(unaff_RSI + 0x30) * 2) ==
           0x22) {
    iVar5 = *(int *)(unaff_RSI + 0x30) + 1;
    *(int *)(unaff_RSI + 0x30) = iVar5;
    lVar3 = DAT_027859f8;
    if (iVar5 != *(int *)(unaff_RSI + 0x34)) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025795a8;
      (*DAT_025795c0)();
      iVar5 = *(int *)(unaff_RSI + 0x30);
      do {
        lVar3 = DAT_027859f8;
        iVar10 = *(int *)(unaff_RSI + 0x34);
        iVar12 = iVar5;
        if (iVar5 < iVar10) {
          psVar8 = (short *)((longlong)iVar5 * 2 + *(longlong *)(unaff_RSI + 0x20));
          iVar11 = iVar5;
          do {
            unaff_R12W = *psVar8;
            iVar12 = iVar11;
            if ((unaff_R12W == 0x22) || (unaff_R12W == 0x5c)) break;
            iVar11 = iVar11 + 1;
            psVar8 = psVar8 + 1;
            iVar12 = iVar10;
          } while (iVar10 != iVar11);
        }
        if ((iVar12 == iVar10) && (unaff_R12W != 0x22)) {
          if (DAT_027859f8 != 0) {
            FUN_00d50b00();
          }
          FUN_00e20940();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e218bf;
        }
        if (0 < iVar12 - iVar5) {
          FUN_00d8ea20();
        }
        iVar5 = iVar12 + 1;
        *(int *)(unaff_RSI + 0x30) = iVar5;
        lVar3 = DAT_027859f8;
        if (unaff_R12W == 0x5c) {
          lVar2 = *(longlong *)(unaff_RSI + 0x20);
          lVar9 = (longlong)iVar5;
          sVar1 = *(short *)(lVar2 + lVar9 * 2);
          if (*(int *)(unaff_RSI + 0x34) < (int)(iVar12 + (uint)(sVar1 == 0x75) * 4 + 3)) {
            if (DAT_027859f8 != 0) {
              FUN_00d50b00();
            }
            FUN_00e20940();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            goto LAB_00e218bf;
          }
          switch(sVar1) {
          case 0x22:
          case 0x2f:
          case 0x5c:
            break;
          default:
            FUN_00d8cb40();
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00e20940();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00e218bf;
          case 0x62:
            break;
          case 0x66:
            break;
          case 0x6e:
            break;
          case 0x72:
            break;
          case 0x74:
            break;
          case 0x75:
            uVar7 = (ulonglong)*(ushort *)(lVar2 + 2 + lVar9 * 2);
            iVar10 = 1;
            if ((uVar7 < 0x100) && ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0))
            {
              uVar7 = (ulonglong)*(ushort *)(lVar2 + 4 + lVar9 * 2);
              iVar10 = 2;
              if ((uVar7 < 0x100) && ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0)
                 ) {
                uVar7 = (ulonglong)*(ushort *)(lVar2 + 6 + lVar9 * 2);
                iVar10 = 3;
                if ((uVar7 < 0x100) &&
                   ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0)) {
                  uVar7 = (ulonglong)*(ushort *)(lVar2 + 8 + lVar9 * 2);
                  iVar10 = 4;
                  if ((uVar7 < 0x100) &&
                     ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0)) break;
                }
              }
            }
            *(int *)(unaff_RSI + 0x30) = iVar5 + iVar10;
            FUN_00d8cb40();
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00e20940();
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
LAB_00e218bf:
            *(undefined1 *)(unaff_RDI + 1) = 0;
            *unaff_RDI = 0;
            if (puVar6 == (undefined8 *)0x0) {
              return;
            }
            FUN_00d50b20();
            return;
          }
          FUN_00d8ea20();
          iVar5 = (uint)(sVar1 == 0x75) * 4 + 1 + *(int *)(unaff_RSI + 0x30);
          *(int *)(unaff_RSI + 0x30) = iVar5;
        }
        if (unaff_R12W == 0x22) {
          FUN_00d8c7d0();
          *unaff_RDI = puVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          return;
        }
      } while( true );
    }
    if (DAT_027859f8 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (DAT_027859f0 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


