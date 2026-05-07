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
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  uint64_t uVar7;
  short *psVar8;
  int64_t lVar9;
  int64_t arg1;
  void*this_ptr;
  int iVar10;
  short unaff_R12W;
  int iVar11;
  int iVar12;
  int64_t local_50;
  char local_48;
  
  cVar4 = FUN_00e20b20();
  lVar3 = g_027859f0;
  if (cVar4 == '\0') {
    if (g_027859f0 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else if (*(short *)(*(int64_t *)(arg1 + 0x20) + (int64_t)*(int *)(arg1 + 0x30) * 2) ==
           0x22) {
    iVar5 = *(int *)(arg1 + 0x30) + 1;
    *(int *)(arg1 + 0x30) = iVar5;
    lVar3 = g_027859f8;
    if (iVar5 != *(int *)(arg1 + 0x34)) {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_025795a8;
      (*g_025795c0)();
      iVar5 = *(int *)(arg1 + 0x30);
      do {
        lVar3 = g_027859f8;
        iVar10 = *(int *)(arg1 + 0x34);
        iVar12 = iVar5;
        if (iVar5 < iVar10) {
          psVar8 = (short *)((int64_t)iVar5 * 2 + *(int64_t *)(arg1 + 0x20));
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
          if (g_027859f8 != 0) {
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
        *(int *)(arg1 + 0x30) = iVar5;
        lVar3 = g_027859f8;
        if (unaff_R12W == 0x5c) {
          lVar2 = *(int64_t *)(arg1 + 0x20);
          lVar9 = (int64_t)iVar5;
          sVar1 = *(short *)(lVar2 + lVar9 * 2);
          if (*(int *)(arg1 + 0x34) < (int)(iVar12 + (uint)(sVar1 == 0x75) * 4 + 3)) {
            if (g_027859f8 != 0) {
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
            uVar7 = (uint64_t)*(ushort *)(lVar2 + 2 + lVar9 * 2);
            iVar10 = 1;
            if ((uVar7 < 0x100) && ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0))
            {
              uVar7 = (uint64_t)*(ushort *)(lVar2 + 4 + lVar9 * 2);
              iVar10 = 2;
              if ((uVar7 < 0x100) && ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0)
                 ) {
                uVar7 = (uint64_t)*(ushort *)(lVar2 + 6 + lVar9 * 2);
                iVar10 = 3;
                if ((uVar7 < 0x100) &&
                   ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0)) {
                  uVar7 = (uint64_t)*(ushort *)(lVar2 + 8 + lVar9 * 2);
                  iVar10 = 4;
                  if ((uVar7 < 0x100) &&
                     ((PTR___DefaultRuneLocale_0249c238[uVar7 * 4 + 0x3e] & 1) != 0)) break;
                }
              }
            }
            *(int *)(arg1 + 0x30) = iVar5 + iVar10;
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
            *(void*)(this_ptr + 1) = 0;
            *this_ptr = 0;
            if (puVar6 == (void*)0x0) {
              return;
            }
            FUN_00d50b20();
            return;
          }
          FUN_00d8ea20();
          iVar5 = (uint)(sVar1 == 0x75) * 4 + 1 + *(int *)(arg1 + 0x30);
          *(int *)(arg1 + 0x30) = iVar5;
        }
        if (unaff_R12W == 0x22) {
          FUN_00d8c7d0();
          *this_ptr = puVar6;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
      } while( true );
    }
    if (g_027859f8 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027859f0 != 0) {
      FUN_00d50b00();
    }
    FUN_00e20940();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

