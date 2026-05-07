// Function: FUN_0098ddf5
// Address: 0098ddf5
// Size: 1008 bytes
// Class: Unknown

void FUN_0098ddf5(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t *arg1;
  uint64_t *this_ptr;
  uint64_t *puVar14;
  
LAB_0098de0c:
  puVar1 = arg1 + -2;
  puVar13 = this_ptr;
LAB_0098de26:
  this_ptr = puVar13;
  lVar8 = (int64_t)arg1 - (int64_t)this_ptr;
  uVar6 = lVar8 >> 4;
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_0098e115_caseD_0;
  case 2:
    if (*this_ptr <= *puVar1) {
      return;
    }
    uVar6 = *this_ptr;
    uVar9 = this_ptr[1];
    uVar2 = *puVar1;
    this_ptr[1] = arg1[-1];
    *this_ptr = uVar2;
    arg1[-1] = uVar9;
    *puVar1 = uVar6;
    return;
  case 3:
    FUN_0098e200(param_2,puVar1);
    return;
  case 4:
    FUN_0098e330(puVar1,this_ptr + 4,param_2);
    return;
  case 5:
    FUN_0098e411(this_ptr + 6,this_ptr + 4,puVar1,param_2);
    return;
  default:
    if (lVar8 < 0x1f0) {
      FUN_0098e53e(lVar8,param_2);
      return;
    }
    puVar13 = this_ptr + (uVar6 - (lVar8 >> 0x3f) & 0xfffffffffffffffe);
    if (lVar8 < 0x3e71) {
      iVar5 = FUN_0098e200(param_2,puVar1);
    }
    else {
      uVar9 = uVar6 + 3;
      if (-1 < (int64_t)uVar6) {
        uVar9 = uVar6;
      }
      iVar5 = FUN_0098e411((uVar9 & 0x3ffffffffffffffc) * 4 + (int64_t)puVar13,puVar13,puVar1,
                           param_2);
    }
    uVar6 = *this_ptr;
    puVar7 = puVar1;
    puVar10 = arg1 + -4;
    if (*puVar13 <= uVar6) break;
    goto LAB_0098dfc4;
  }
  while (puVar7 = puVar10, this_ptr != puVar7) {
    puVar10 = puVar7 + -2;
    if (*puVar7 < *puVar13) goto LAB_0098df8e;
  }
  puVar7 = this_ptr + 2;
  if (*puVar1 <= uVar6) {
    if (puVar7 == puVar1) {
      return;
    }
    puVar7 = this_ptr + 4;
    while (puVar7[-2] <= uVar6) {
      puVar7 = puVar7 + 2;
      if (arg1 == puVar7) {
        return;
      }
    }
    uVar6 = puVar7[-2];
    uVar9 = puVar7[-1];
    uVar2 = *puVar1;
    puVar7[-1] = arg1[-1];
    puVar7[-2] = uVar2;
    arg1[-1] = uVar9;
    *puVar1 = uVar6;
  }
  puVar10 = puVar1;
  if (puVar7 == puVar1) {
    return;
  }
  while( true ) {
    puVar13 = puVar7 + -2;
    do {
      puVar14 = puVar13;
      puVar13 = puVar14 + 2;
    } while (puVar14[2] <= *this_ptr);
    puVar7 = puVar14 + 4;
    do {
      puVar11 = puVar10;
      puVar10 = puVar11 + -2;
    } while (*this_ptr < puVar11[-2]);
    if (puVar10 <= puVar13) break;
    uVar6 = *puVar13;
    uVar9 = puVar14[3];
    uVar2 = *puVar10;
    puVar14[3] = puVar11[-1];
    *puVar13 = uVar2;
    puVar11[-1] = uVar9;
    *puVar10 = uVar6;
  }
  goto LAB_0098de26;
LAB_0098df8e:
  uVar6 = *this_ptr;
  uVar9 = this_ptr[1];
  uVar2 = *puVar7;
  this_ptr[1] = puVar7[1];
  *this_ptr = uVar2;
  puVar7[1] = uVar9;
  *puVar7 = uVar6;
  iVar5 = iVar5 + 1;
LAB_0098dfc4:
  puVar10 = this_ptr + 2;
  puVar14 = puVar10;
  if (puVar10 < puVar7) {
    while( true ) {
      puVar10 = puVar14 + -2;
      do {
        puVar11 = puVar10;
        puVar10 = puVar11 + 2;
      } while (puVar11[2] < *puVar13);
      puVar14 = puVar11 + 4;
      do {
        puVar12 = puVar7;
        puVar7 = puVar12 + -2;
      } while (*puVar13 <= puVar12[-2]);
      if (puVar7 < puVar10) break;
      uVar6 = *puVar10;
      uVar9 = puVar11[3];
      uVar2 = *puVar7;
      puVar11[3] = puVar12[-1];
      *puVar10 = uVar2;
      puVar12[-1] = uVar9;
      *puVar7 = uVar6;
      iVar5 = iVar5 + 1;
      if (puVar13 == puVar10) {
        puVar13 = puVar7;
      }
    }
  }
  if ((puVar10 != puVar13) && (puVar7 = (uint64_t *)*puVar13, puVar7 < (uint64_t *)*puVar10)) {
    puVar7 = (uint64_t *)*puVar10;
    uVar6 = puVar10[1];
    uVar9 = *puVar13;
    puVar10[1] = puVar13[1];
    *puVar10 = uVar9;
    puVar13[1] = uVar6;
    *puVar13 = (uint64_t)puVar7;
    iVar5 = iVar5 + 1;
  }
  if (iVar5 == 0) {
    cVar3 = FUN_009b2010(puVar7,param_2);
    cVar4 = FUN_009b2010();
    if (cVar4 != '\0') goto LAB_0098e0f9;
    puVar13 = puVar10 + 2;
    if (cVar3 != '\0') goto LAB_0098de26;
  }
  lVar8 = (int64_t)arg1 - (int64_t)puVar10;
  if (lVar8 <= (int64_t)puVar10 - (int64_t)this_ptr) {
    FUN_0098ddf5(lVar8,param_2);
    arg1 = puVar10;
    goto LAB_0098de0c;
  }
  FUN_0098ddf5(lVar8,param_2);
  puVar13 = puVar10 + 2;
  goto LAB_0098de26;
LAB_0098e0f9:
  arg1 = puVar10;
  if (cVar3 != '\0') {
switchD_0098e115_caseD_0:
    return;
  }
  goto LAB_0098de0c;
}

