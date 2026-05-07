// Function: FUN_00d24b60
// Address: 00d24b60
// Size: 1507 bytes
// Class: GNSerialNumber

void FUN_00d24b60(int64_t *param_1,code *param_2,size_t param_3)

{
  char cVar1;
  int64_t lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint uVar9;
  int64_t *arg1;
  int64_t this_ptr;
  size_t sVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  int64_t lVar14;
  int local_7c;
  
  plVar6 = param_1;
  if ((param_3 != 0) &&
     (((*arg1 != 0 || (*(char *)(this_ptr + 0x1d) != '\0')) &&
      (plVar6 = (int64_t *)(uint64_t)*(uint *)(this_ptr + 0xc),
      0 < (int)*(uint *)(this_ptr + 0xc))))) {
    plVar8 = (int64_t *)0x0;
    do {
      if (*arg1 == *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + (int64_t)plVar8 * 8)) {
        if ((int)plVar8 != -1) {
          return;
        }
        break;
      }
      plVar8 = (int64_t *)((int64_t)plVar8 + 1);
    } while (plVar6 != plVar8);
  }
  iVar5 = *(int *)(this_ptr + 0xc);
  if (iVar5 == 0) {
    *(void*)(this_ptr + 0xc) = 1;
    FUN_00d23090();
    if (*(char *)(this_ptr + 0x1c) == '\0') {
      if ((char)arg1[1] == '\0') {
        if (*arg1 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(arg1 + 1) = 0;
      }
    }
    **(int64_t **)(this_ptr + 0x10) = *arg1;
    return;
  }
  sVar10 = param_3;
  if (iVar5 < 1) {
LAB_00d24c34:
    lVar14 = 0;
  }
  else {
    plVar6 = *(int64_t **)(this_ptr + 0x10);
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
      iVar5 = *(int *)(this_ptr + 0xc);
      *(int *)(this_ptr + 0xc) = iVar5 + 1;
      FUN_00d23090();
      plVar8 = *(int64_t **)(this_ptr + 0x10);
      if ((int64_t)iVar5 != 0) {
        _memmove(plVar6,(void *)((int64_t)iVar5 << 3),sVar10);
      }
      if (*(char *)(this_ptr + 0x1c) != '\0') goto LAB_00d24ec3;
      cVar1 = (char)arg1[1];
    }
    else {
      if (iVar4 != 1) goto LAB_00d24da8;
      if ((*(int *)(this_ptr + 0xc) < 1) ||
         (lVar14 = **(int64_t **)(this_ptr + 0x10), lVar14 == 0)) {
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
        if (*(int *)(this_ptr + 0xc) < 1) {
          lVar14 = 0;
        }
        else {
          lVar14 = **(int64_t **)(this_ptr + 0x10);
        }
        plVar6 = arg1;
        if (*arg1 == lVar14) {
          return;
        }
LAB_00d24eee:
        uVar11 = *(uint *)(this_ptr + 0xc);
        uVar9 = (int)uVar11 / 2;
        if (1 < (int)uVar11) {
          plVar6 = (int64_t *)0x0;
          do {
            lVar14 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + -8 + (int64_t)(int)uVar9 * 8);
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            iVar5 = (*param_2)();
            lVar7 = *arg1;
            if (((iVar5 != 0) || (bVar12 == 0)) || (bVar13 = 1, lVar7 != lVar14)) {
              lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + (int64_t)(int)uVar9 * 8);
              if (lVar2 != 0) {
                FUN_00d50b00();
                lVar7 = *arg1;
              }
              local_7c = (*param_2)(lVar7,param_1);
              bVar13 = *arg1 == lVar2 & local_7c == 0 & bVar12;
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
                   (plVar6 = (int64_t *)(uint64_t)uVar9, uVar3 = uVar11, local_7c != -1)) &&
                  (uVar11 = uVar3, iVar5 = uVar11 + (int)plVar6, uVar9 = iVar5 / 2, 1 < iVar5));
          uVar11 = *(uint *)(this_ptr + 0xc);
        }
        *(uint *)(this_ptr + 0xc) = uVar11 + 1;
        FUN_00d23090();
        lVar14 = *(int64_t *)(this_ptr + 0x10);
        if (uVar11 - uVar9 != 0) {
          _memmove(plVar6,(void *)(int64_t)(int)((uVar11 - uVar9) * 8),sVar10);
        }
        if (*(char *)(this_ptr + 0x1c) == '\0') {
          if ((char)arg1[1] == '\0') {
            if (*arg1 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(arg1 + 1) = 0;
          }
        }
        *(int64_t *)((int64_t)(int)uVar9 * 8 + lVar14) = *arg1;
        return;
      }
      if (iVar5 != 1) goto LAB_00d24eee;
      iVar5 = *(int *)(this_ptr + 0xc);
      *(int *)(this_ptr + 0xc) = iVar5 + 1;
      FUN_00d23090();
      plVar8 = *(int64_t **)(this_ptr + 0x10);
      if ((int64_t)iVar5 != 0) {
        _memmove(plVar6,(void *)((int64_t)iVar5 << 3),sVar10);
      }
      if (*(char *)(this_ptr + 0x1c) != '\0') goto LAB_00d24ec3;
      cVar1 = (char)arg1[1];
    }
    if (cVar1 == '\0') {
      if (*arg1 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(arg1 + 1) = 0;
    }
LAB_00d24ec3:
    *plVar8 = *arg1;
    return;
  }
  if (*(int *)(this_ptr + 0xc) < 1) {
    if (*arg1 == 0) {
      return;
    }
  }
  else if (*(int64_t *)
            (*(int64_t *)(this_ptr + 0x10) + (uint64_t)(*(int *)(this_ptr + 0xc) - 1) * 8) ==
           *arg1) {
    return;
  }
  if (iVar5 == 1) {
LAB_00d24d74:
    lVar14 = (int64_t)*(int *)(this_ptr + 0xc);
    *(int *)(this_ptr + 0xc) = *(int *)(this_ptr + 0xc) + 1;
    FUN_00d23090();
    if (*(char *)(this_ptr + 0x1c) != '\0') goto LAB_00d24dd1;
    cVar1 = (char)arg1[1];
  }
  else {
LAB_00d24da8:
    lVar14 = (int64_t)*(int *)(this_ptr + 0xc);
    *(int *)(this_ptr + 0xc) = *(int *)(this_ptr + 0xc) + 1;
    FUN_00d23090();
    if (*(char *)(this_ptr + 0x1c) != '\0') goto LAB_00d24dd1;
    cVar1 = (char)arg1[1];
  }
  if (cVar1 == '\0') {
    if (*arg1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(arg1 + 1) = 0;
  }
LAB_00d24dd1:
  *(int64_t *)(*(int64_t *)(this_ptr + 0x10) + lVar14 * 8) = *arg1;
  return;
}

