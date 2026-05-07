// Function: FUN_00d92950
// Address: 00d92950
// Size: 1123 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00d92a1c) */
/* WARNING: Removing unreachable block (ram,0x00d92a25) */

uint FUN_00d92950(ulonglong param_1,longlong *param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong unaff_RSI;
  char cVar11;
  ushort uVar12;
  longlong unaff_RDI;
  longlong lVar13;
  char *pcVar14;
  ushort *puVar15;
  longlong lVar16;
  char *pcVar17;
  undefined8 uVar18;
  int iVar19;
  bool bVar21;
  longlong lVar20;
  
  lVar16 = *param_2;
  if (lVar16 == 0) {
    return 1;
  }
  iVar19 = (int)unaff_RSI;
  lVar20 = (longlong)unaff_RSI >> 0x20;
  if ((param_1 & 8) != 0) {
    uVar18 = 0x371;
    if ((param_1 & 1) == 0) {
      uVar18 = 0x170;
    }
    if (unaff_RDI != 0) {
      FUN_00d50b00();
    }
    FUN_00e1cf50();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    FUN_00e1cf50();
    uVar6 = _CFLocaleGetSystem();
    uVar5 = _CFStringCompareWithOptionsAndLocale(lVar20,(longlong)iVar19,uVar18,uVar6);
    _CFRelease();
    _CFRelease();
    return uVar5;
  }
  iVar1 = *(int *)(unaff_RDI + 0x20);
  if (iVar1 != -1) {
    if (*(int *)(lVar16 + 0x20) != -1) {
      puVar15 = *(ushort **)(lVar16 + 0x18);
      if (unaff_RSI >> 0x20 == 0) {
        uVar5 = 0;
      }
      else {
        lVar16 = (longlong)iVar19 * 2 + *(longlong *)(unaff_RDI + 0x18);
        if ((param_1 & 1) == 0) {
          uVar12 = *puVar15;
          if (uVar12 == 0) {
            uVar5 = 1;
          }
          else {
            lVar13 = 0;
            do {
              lVar10 = lVar13;
              uVar8 = *(ushort *)(lVar16 + lVar10);
              uVar5 = (uint)(uVar12 < uVar8);
              if (uVar8 < uVar12) {
                uVar5 = 0xffffffff;
              }
              if (uVar5 != 0) {
                return uVar5;
              }
              if (lVar20 * 2 + -2 == lVar10) {
                uVar5 = 0;
                goto LAB_00d92d8a;
              }
              uVar12 = *(ushort *)((longlong)puVar15 + lVar10 + 2);
              lVar13 = lVar10 + 2;
            } while (uVar12 != 0);
            uVar5 = 1;
LAB_00d92d8a:
            puVar15 = (ushort *)((longlong)puVar15 + lVar10 + 2);
          }
        }
        else {
          lVar13 = 0;
          do {
            uVar12 = *(ushort *)((longlong)puVar15 + lVar13);
            if (uVar12 == 0) break;
            uVar8 = *(ushort *)(lVar16 + lVar13);
            uVar7 = uVar8 - 0x20;
            if (0x19 < (ushort)(uVar8 - 0x61)) {
              uVar7 = uVar8;
            }
            uVar8 = uVar12 - 0x20;
            if (0x19 < (ushort)(uVar12 - 0x61)) {
              uVar8 = uVar12;
            }
            uVar5 = (uint)(uVar8 < uVar7);
            if (uVar7 < uVar8) {
              uVar5 = 0xffffffff;
            }
            if (uVar5 != 0) {
              return uVar5;
            }
            lVar13 = lVar13 + 2;
          } while (lVar20 * 2 != lVar13);
          puVar15 = (ushort *)((longlong)puVar15 + lVar13);
          uVar5 = (uint)(uVar12 == 0);
        }
      }
      bVar21 = *puVar15 == 0;
      goto LAB_00d92d96;
    }
    if (*(longlong *)(unaff_RDI + 0x10) == 0) {
      if (iVar1 < 0x18) {
        lVar16 = unaff_RDI + 0x28;
      }
      else {
        lVar16 = FUN_00e83010(iVar1 + 1);
        iVar1 = *(int *)(unaff_RDI + 0x20);
      }
      FUN_00da41a0(iVar1,0);
      *(undefined1 *)(lVar16 + *(int *)(unaff_RDI + 0x20)) = 0;
      cVar3 = FUN_00e31450(3);
      if ((cVar3 == '\0') && (lVar16 != unaff_RDI + 0x28)) {
        FUN_00e83070();
      }
    }
  }
  pcVar14 = *(char **)(unaff_RDI + 0x10);
  if (pcVar14 == (char *)0x0) {
    pcVar14 = "";
  }
  lVar16 = *param_2;
  if ((*(longlong *)(lVar16 + 0x10) == 0) && (iVar1 = *(int *)(lVar16 + 0x20), iVar1 != -1)) {
    if (iVar1 < 0x18) {
      lVar13 = lVar16 + 0x28;
    }
    else {
      lVar13 = FUN_00e83010(iVar1 + 1);
      iVar1 = *(int *)(lVar16 + 0x20);
    }
    FUN_00da41a0(iVar1,0);
    *(undefined1 *)(lVar13 + *(int *)(lVar16 + 0x20)) = 0;
    cVar3 = FUN_00e31450(3);
    if ((cVar3 == '\0') && (lVar13 != lVar16 + 0x28)) {
      FUN_00e83070();
    }
  }
  pcVar17 = "";
  if (*(char **)(lVar16 + 0x10) != (char *)0x0) {
    pcVar17 = *(char **)(lVar16 + 0x10);
  }
  pcVar2 = pcVar17;
  if (unaff_RSI >> 0x20 == 0) {
LAB_00d92c0c:
    pcVar17 = pcVar2;
    uVar5 = 0;
  }
  else if ((param_1 & 1) == 0) {
    cVar3 = *pcVar17;
    uVar5 = 1;
    if (cVar3 != '\0') {
      lVar16 = 0;
      do {
        uVar9 = (uint)(cVar3 < pcVar14[lVar16 + iVar19]);
        if (pcVar14[lVar16 + iVar19] < cVar3) {
          uVar9 = 0xffffffff;
        }
        if (uVar9 != 0) {
          return uVar9;
        }
        pcVar2 = pcVar17 + lVar20;
        if (lVar20 + -1 == lVar16) goto LAB_00d92c0c;
        cVar3 = pcVar17[lVar16 + 1];
        lVar16 = lVar16 + 1;
      } while (cVar3 != '\0');
      pcVar17 = pcVar17 + lVar16;
    }
  }
  else {
    lVar16 = 0;
    do {
      cVar3 = pcVar17[lVar16];
      lVar13 = lVar16;
      if (cVar3 == '\0') break;
      cVar4 = pcVar14[lVar16 + iVar19];
      cVar11 = cVar4 + -0x20;
      if (0x19 < (byte)(cVar4 + 0x9fU)) {
        cVar11 = cVar4;
      }
      cVar4 = cVar3 + -0x20;
      if (0x19 < (byte)(cVar3 + 0x9fU)) {
        cVar4 = cVar3;
      }
      uVar5 = (uint)(cVar4 < cVar11);
      if (cVar11 < cVar4) {
        uVar5 = 0xffffffff;
      }
      if (uVar5 != 0) {
        return uVar5;
      }
      lVar16 = lVar16 + 1;
      lVar13 = lVar20;
    } while (lVar20 != lVar16);
    pcVar17 = pcVar17 + lVar13;
    uVar5 = (uint)(cVar3 == '\0');
  }
  bVar21 = *pcVar17 == '\0';
LAB_00d92d96:
  return ~-(uint)bVar21 | uVar5;
}


