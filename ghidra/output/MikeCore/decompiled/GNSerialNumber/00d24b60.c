// Function: FUN_00d24b60
// Address: 00d24b60
// Size: 1507 bytes
// Class: GNSerialNumber


/* WARNING: Removing unreachable block (ram,0x00d2503c) */
/* WARNING: Removing unreachable block (ram,0x00d25048) */
/* WARNING: Removing unreachable block (ram,0x00d24e3d) */
/* WARNING: Removing unreachable block (ram,0x00d24e49) */
/* WARNING: Removing unreachable block (ram,0x00d24c6c) */
/* WARNING: Removing unreachable block (ram,0x00d24c78) */
/* WARNING: Removing unreachable block (ram,0x00d24f9f) */
/* WARNING: Removing unreachable block (ram,0x00d24fab) */
/* WARNING: Removing unreachable block (ram,0x00d24fb9) */
/* WARNING: Removing unreachable block (ram,0x00d24fc5) */
/* WARNING: Removing unreachable block (ram,0x00d25056) */
/* WARNING: Removing unreachable block (ram,0x00d25062) */

void FUN_00d24b60(longlong *param_1,code *param_2,size_t param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  size_t sVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  longlong lVar14;
  int local_7c;
  
  plVar6 = param_1;
  if ((param_3 != 0) &&
     (((*unaff_RSI != 0 || (*(char *)(unaff_RDI + 0x1d) != '\0')) &&
      (plVar6 = (longlong *)(ulonglong)*(uint *)(unaff_RDI + 0xc),
      0 < (int)*(uint *)(unaff_RDI + 0xc))))) {
    plVar8 = (longlong *)0x0;
    do {
      if (*unaff_RSI == *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)plVar8 * 8)) {
        if ((int)plVar8 != -1) {
          return;
        }
        break;
      }
      plVar8 = (longlong *)((longlong)plVar8 + 1);
    } while (plVar6 != plVar8);
  }
  iVar5 = *(int *)(unaff_RDI + 0xc);
  if (iVar5 == 0) {
    *(undefined4 *)(unaff_RDI + 0xc) = 1;
    FUN_00d23090();
    if (*(char *)(unaff_RDI + 0x1c) == '\0') {
      if ((char)unaff_RSI[1] == '\0') {
        if (*unaff_RSI != 0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(unaff_RSI + 1) = 0;
      }
    }
    **(longlong **)(unaff_RDI + 0x10) = *unaff_RSI;
    return;
  }
  sVar10 = param_3;
  if (iVar5 < 1) {
LAB_00d24c34:
    lVar14 = 0;
  }
  else {
    plVar6 = *(longlong **)(unaff_RDI + 0x10);
    lVar14 = plVar6[iVar5 - 1];
    if (lVar14 == 0) goto LAB_00d24c34;
    FUN_00d50b00();
  }
  iVar4 = (*param_2)();
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  bVar12 = (byte)param_3;
  if ((iVar4 != 0) || ((bVar12 ^ 1) != 0)) {
    if (iVar5 == 1) {
      if (iVar4 != 1) goto LAB_00d24d74;
      iVar5 = *(int *)(unaff_RDI + 0xc);
      *(int *)(unaff_RDI + 0xc) = iVar5 + 1;
      FUN_00d23090();
      plVar8 = *(longlong **)(unaff_RDI + 0x10);
      if ((longlong)iVar5 != 0) {
        _memmove(plVar6,(void *)((longlong)iVar5 << 3),sVar10);
      }
      if (*(char *)(unaff_RDI + 0x1c) != '\0') goto LAB_00d24ec3;
      cVar1 = (char)unaff_RSI[1];
    }
    else {
      if (iVar4 != 1) goto LAB_00d24da8;
      if ((*(int *)(unaff_RDI + 0xc) < 1) ||
         (lVar14 = **(longlong **)(unaff_RDI + 0x10), lVar14 == 0)) {
        lVar14 = 0;
      }
      else {
        FUN_00d50b00();
      }
      iVar5 = (*param_2)();
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      if (iVar5 == 0 && (bVar12 ^ 1) == 0) {
        if (*(int *)(unaff_RDI + 0xc) < 1) {
          lVar14 = 0;
        }
        else {
          lVar14 = **(longlong **)(unaff_RDI + 0x10);
        }
        plVar6 = unaff_RSI;
        if (*unaff_RSI == lVar14) {
          return;
        }
LAB_00d24eee:
        uVar11 = *(uint *)(unaff_RDI + 0xc);
        uVar9 = (int)uVar11 / 2;
        if (1 < (int)uVar11) {
          plVar6 = (longlong *)0x0;
          do {
            lVar14 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + -8 + (longlong)(int)uVar9 * 8);
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            iVar5 = (*param_2)();
            lVar7 = *unaff_RSI;
            if (((iVar5 != 0) || (bVar12 == 0)) || (bVar13 = 1, lVar7 != lVar14)) {
              lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)(int)uVar9 * 8);
              if (lVar2 != 0) {
                FUN_00d50b00();
                lVar7 = *unaff_RSI;
              }
              local_7c = (*param_2)(lVar7,param_1);
              bVar13 = *unaff_RSI == lVar2 & local_7c == 0 & bVar12;
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
            }
            if (lVar14 != 0) {
              FUN_00d50b20();
            }
            if (bVar13 != 0) {
              return;
            }
            uVar3 = uVar9;
          } while (((iVar5 == 1) ||
                   (plVar6 = (longlong *)(ulonglong)uVar9, uVar3 = uVar11, local_7c != -1)) &&
                  (uVar11 = uVar3, iVar5 = uVar11 + (int)plVar6, uVar9 = iVar5 / 2, 1 < iVar5));
          uVar11 = *(uint *)(unaff_RDI + 0xc);
        }
        *(uint *)(unaff_RDI + 0xc) = uVar11 + 1;
        FUN_00d23090();
        lVar14 = *(longlong *)(unaff_RDI + 0x10);
        if (uVar11 - uVar9 != 0) {
          _memmove(plVar6,(void *)(longlong)(int)((uVar11 - uVar9) * 8),sVar10);
        }
        if (*(char *)(unaff_RDI + 0x1c) == '\0') {
          if ((char)unaff_RSI[1] == '\0') {
            if (*unaff_RSI != 0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(unaff_RSI + 1) = 0;
          }
        }
        *(longlong *)((longlong)(int)uVar9 * 8 + lVar14) = *unaff_RSI;
        return;
      }
      if (iVar5 != 1) goto LAB_00d24eee;
      iVar5 = *(int *)(unaff_RDI + 0xc);
      *(int *)(unaff_RDI + 0xc) = iVar5 + 1;
      FUN_00d23090();
      plVar8 = *(longlong **)(unaff_RDI + 0x10);
      if ((longlong)iVar5 != 0) {
        _memmove(plVar6,(void *)((longlong)iVar5 << 3),sVar10);
      }
      if (*(char *)(unaff_RDI + 0x1c) != '\0') goto LAB_00d24ec3;
      cVar1 = (char)unaff_RSI[1];
    }
    if (cVar1 == '\0') {
      if (*unaff_RSI != 0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(unaff_RSI + 1) = 0;
    }
LAB_00d24ec3:
    *plVar8 = *unaff_RSI;
    return;
  }
  if (*(int *)(unaff_RDI + 0xc) < 1) {
    if (*unaff_RSI == 0) {
      return;
    }
  }
  else if (*(longlong *)
            (*(longlong *)(unaff_RDI + 0x10) + (ulonglong)(*(int *)(unaff_RDI + 0xc) - 1) * 8) ==
           *unaff_RSI) {
    return;
  }
  if (iVar5 == 1) {
LAB_00d24d74:
    lVar14 = (longlong)*(int *)(unaff_RDI + 0xc);
    *(int *)(unaff_RDI + 0xc) = *(int *)(unaff_RDI + 0xc) + 1;
    FUN_00d23090();
    if (*(char *)(unaff_RDI + 0x1c) != '\0') goto LAB_00d24dd1;
    cVar1 = (char)unaff_RSI[1];
  }
  else {
LAB_00d24da8:
    lVar14 = (longlong)*(int *)(unaff_RDI + 0xc);
    *(int *)(unaff_RDI + 0xc) = *(int *)(unaff_RDI + 0xc) + 1;
    FUN_00d23090();
    if (*(char *)(unaff_RDI + 0x1c) != '\0') goto LAB_00d24dd1;
    cVar1 = (char)unaff_RSI[1];
  }
  if (cVar1 == '\0') {
    if (*unaff_RSI != 0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(unaff_RSI + 1) = 0;
  }
LAB_00d24dd1:
  *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + lVar14 * 8) = *unaff_RSI;
  return;
}


