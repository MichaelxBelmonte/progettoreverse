// Function: FUN_010c6ad0
// Address: 010c6ad0
// Size: 1225 bytes
// Class: Unknown

uint64_t FUN_010c6ad0(uint64_t param_1,uchar **param_2,size_t param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  char *pcVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  char cVar12;
  uint *a;
  char *pcVar13;
  char cVar14;
  uint64_t uVar15;
  void*arg1;
  int iVar16;
  int64_t this_ptr;
  uint64_t uVar17;
  
  uVar15 = 0x33;
  a = &switchD_010c6b02::switchdataD_010c6fa0;
  switch(*arg1) {
  case 1:
    piVar3 = *(int **)(this_ptr + 8);
    piVar2 = *(int **)(arg1 + 2);
    pcVar13 = *(char **)(piVar2 + 2);
    lVar10 = *(int64_t *)(piVar3 + 2);
    pcVar7 = _strchr((char *)&switchD_010c6b02::switchdataD_010c6fa0,(int)param_2);
    pcVar8 = _strchr((char *)a,(int)param_2);
    if (pcVar8 == (char *)0x0) {
      uVar15 = 0x35;
    }
    else {
      if (pcVar7 == (char *)0x0) {
        if (*pcVar13 == '.') {
          iVar5 = *piVar3;
          iVar16 = iVar5 - *piVar2;
          if (iVar16 == 0 || iVar5 < *piVar2) {
            return 0x2f;
          }
          pcVar7 = (char *)(lVar10 + iVar16);
          cVar12 = '.';
          lVar10 = 2;
          cVar14 = *pcVar7;
          cVar4 = '.';
          if (cVar14 == '.') goto LAB_010c6e95;
          do {
            cVar12 = cVar4 + ' ';
            if (0x19 < (byte)(cVar4 + 0xbfU)) {
              cVar12 = cVar4;
            }
            cVar4 = cVar14 + ' ';
            if (0x19 < (byte)(cVar14 + 0xbfU)) {
              cVar4 = cVar14;
            }
            lVar11 = lVar10;
            if (cVar12 != cVar4) {
              return 0x2f;
            }
            while( true ) {
              if (lVar11 == 0) goto LAB_010c6f04;
              cVar12 = pcVar13[lVar11 + -1];
              lVar10 = lVar11 + 1;
              cVar14 = pcVar7[lVar11 + -1];
              cVar4 = cVar12;
              if (cVar12 != cVar14) break;
LAB_010c6e95:
              lVar11 = lVar10;
              if (cVar12 == '\0') goto LAB_010c6f04;
            }
          } while( true );
        }
      }
      else {
        pcVar13 = pcVar7 + -(int64_t)pcVar13;
        if (pcVar13 != (char *)0x0) {
          if (pcVar13 != pcVar8 + -lVar10) {
            return 0x2f;
          }
          iVar5 = _strncmp((char *)a,pcVar13,param_3);
          if (iVar5 != 0) {
            return 0x2f;
          }
        }
        pcVar13 = pcVar7 + 1;
      }
      lVar10 = 1;
      uVar15 = 0;
      do {
        cVar14 = pcVar13[lVar10 + -1];
        cVar12 = pcVar8[lVar10];
        if (cVar14 == cVar12) {
          if (cVar14 == '\0') goto LAB_010c6f04;
        }
        else {
          cVar4 = cVar14 + ' ';
          if (0x19 < (byte)(cVar14 + 0xbfU)) {
            cVar4 = cVar14;
          }
          cVar14 = cVar12 + ' ';
          if (0x19 < (byte)(cVar12 + 0xbfU)) {
            cVar14 = cVar12;
          }
          if (cVar4 != cVar14) goto LAB_010c6f08;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0);
    }
    break;
  case 2:
    piVar3 = *(int **)(arg1 + 2);
    cVar14 = **(char **)(piVar3 + 2);
    if (cVar14 != '\0') {
      pcVar13 = *(char **)(*(int **)(this_ptr + 8) + 2);
      iVar5 = **(int **)(this_ptr + 8);
      iVar16 = iVar5 - *piVar3;
      if (((iVar16 != 0 && *piVar3 <= iVar5) && (pcVar13 = pcVar13 + iVar16, cVar14 != '.')) &&
         (pcVar13[-1] != '.')) {
        return 0x2f;
      }
      lVar10 = 2;
      cVar12 = *pcVar13;
      if (cVar14 == cVar12) goto LAB_010c6c10;
      while( true ) {
        cVar4 = cVar14 + ' ';
        if (0x19 < (byte)(cVar14 + 0xbfU)) {
          cVar4 = cVar14;
        }
        cVar14 = cVar12 + ' ';
        if (0x19 < (byte)(cVar12 + 0xbfU)) {
          cVar14 = cVar12;
        }
        lVar11 = lVar10;
        if (cVar4 != cVar14) break;
        while( true ) {
          if (lVar11 == 0) goto LAB_010c6f04;
          cVar14 = (*(char **)(piVar3 + 2))[lVar11 + -1];
          lVar10 = lVar11 + 1;
          cVar12 = pcVar13[lVar11 + -1];
          if (cVar14 != cVar12) break;
LAB_010c6c10:
          lVar11 = lVar10;
          if (cVar14 == '\0') goto LAB_010c6f04;
        }
      }
      goto LAB_010c6f08;
    }
    goto LAB_010c6f04;
  case 4:
    lVar10 = *(int64_t *)(this_ptr + 8);
    lVar11 = *(int64_t *)(arg1 + 2);
    if (((*(int *)(lVar10 + 8) == 0) ||
        (iVar5 = _i2d_X509_NAME((X509_NAME *)&switchD_010c6b02::switchdataD_010c6fa0,param_2),
        -1 < iVar5)) &&
       ((*(int *)(lVar11 + 8) == 0 || (iVar5 = _i2d_X509_NAME((X509_NAME *)a,param_2), -1 < iVar5)))
       ) {
      iVar5 = *(int *)(lVar11 + 0x20);
      uVar15 = 0x2f;
      if (iVar5 <= *(int *)(lVar10 + 0x20)) {
        iVar5 = _memcmp(a,(void *)(int64_t)iVar5,param_3);
        uVar15 = 0x2f;
        if (iVar5 == 0) {
          uVar15 = 0;
        }
      }
    }
    else {
      uVar15 = 0x11;
    }
    break;
  case 6:
    piVar3 = *(int **)(arg1 + 2);
    pcVar13 = *(char **)(piVar3 + 2);
    pcVar7 = _strchr((char *)&switchD_010c6b02::switchdataD_010c6fa0,(int)param_2);
    iVar5 = (int)param_2;
    if (pcVar7 == (char *)0x0) {
      return 0x35;
    }
    if (pcVar7[1] != '/') {
      return 0x35;
    }
    if (pcVar7[2] != '/') {
      return 0x35;
    }
    pcVar7 = pcVar7 + 3;
    pcVar8 = _strchr((char *)a,iVar5);
    if ((pcVar8 == (char *)0x0) && (pcVar8 = _strchr((char *)a,iVar5), pcVar8 == (char *)0x0)) {
      sVar6 = _strlen((char *)a);
      uVar9 = (uint64_t)sVar6;
    }
    else {
      uVar9 = (int64_t)pcVar8 - (int64_t)pcVar7;
      sVar6 = (size_t)uVar9;
    }
    if (sVar6 == 0) {
      return 0x35;
    }
    cVar14 = *pcVar13;
    iVar5 = *piVar3;
    iVar16 = (int)uVar9;
    if (cVar14 == '.') {
      if (iVar16 <= iVar5) {
        return 0x2f;
      }
      if (iVar5 != 0) {
        cVar12 = '.';
        lVar10 = 0;
        cVar14 = pcVar7[(int64_t)iVar16 - (int64_t)iVar5];
        cVar4 = '.';
        if (cVar14 == '.') goto LAB_010c6d89;
        do {
          cVar12 = cVar14 + ' ';
          if (0x19 < (byte)(cVar14 + 0xbfU)) {
            cVar12 = cVar14;
          }
          cVar14 = cVar4 + ' ';
          if (0x19 < (byte)(cVar4 + 0xbfU)) {
            cVar14 = cVar4;
          }
          if (cVar12 != cVar14) {
            return 0x2f;
          }
          while( true ) {
            if ((int64_t)iVar5 + -1 == lVar10) goto LAB_010c6f04;
            cVar12 = pcVar13[lVar10 + 1];
            lVar10 = lVar10 + 1;
            cVar14 = (pcVar7 + ((int64_t)iVar16 - (int64_t)iVar5))[lVar10];
            cVar4 = cVar12;
            if (cVar14 != cVar12) break;
LAB_010c6d89:
            if (cVar12 == '\0') goto LAB_010c6f04;
          }
        } while( true );
      }
    }
    else {
      if (iVar5 != iVar16) {
        return 0x2f;
      }
      if ((uVar9 & 0xffffffff) != 0) {
        lVar10 = 0;
        cVar12 = *pcVar7;
        if (cVar12 == cVar14) goto LAB_010c6f6d;
        do {
          cVar4 = cVar12 + ' ';
          if (0x19 < (byte)(cVar12 + 0xbfU)) {
            cVar4 = cVar12;
          }
          cVar12 = cVar14 + ' ';
          if (0x19 < (byte)(cVar14 + 0xbfU)) {
            cVar12 = cVar14;
          }
          if (cVar4 != cVar12) {
            return 0x2f;
          }
          while( true ) {
            if ((int64_t)iVar16 + -1 == lVar10) goto LAB_010c6f04;
            cVar14 = pcVar13[lVar10 + 1];
            lVar10 = lVar10 + 1;
            cVar12 = pcVar7[lVar10];
            if (cVar12 != cVar14) break;
LAB_010c6f6d:
            if (cVar14 == '\0') goto LAB_010c6f04;
          }
        } while( true );
      }
    }
LAB_010c6f04:
    uVar15 = 0;
    break;
  case 7:
    uVar1 = **(uint **)(this_ptr + 8);
    uVar9 = (uint64_t)uVar1;
    iVar5 = **(int **)(arg1 + 2);
    lVar10 = *(int64_t *)(*(int **)(arg1 + 2) + 2);
    if ((uVar9 != 0x10) && (uVar1 != 4)) {
      return 0x35;
    }
    if ((iVar5 != 0x20) && (iVar5 != 8)) {
      return 0x35;
    }
    if (uVar1 * 2 == iVar5) {
      uVar17 = 0;
      while ((*(byte *)(lVar10 + uVar9 + uVar17) &
             (*(byte *)(lVar10 + uVar17) ^
             *(byte *)(*(int64_t *)(*(uint **)(this_ptr + 8) + 2) + uVar17))) == 0) {
        uVar17 = uVar17 + 1;
        if (uVar9 == uVar17) {
          return 0;
        }
      }
    }
LAB_010c6f08:
    uVar15 = 0x2f;
  }
  return uVar15;
}

