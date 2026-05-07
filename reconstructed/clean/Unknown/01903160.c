// Function: FUN_01903160
// Address: 01903160
// Size: 1508 bytes
// Class: Unknown

void FUN_01903160(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  void* pVar7;
  int iVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  uint64_t uVar13;
  int64_t local_58;
  char local_50 [8];
  double local_48;
  char local_38 [8];
  
  lVar1 = *arg1;
  if (lVar1 == 0) {
    return;
  }
  FUN_00d23310();
  local_38[0] = local_50[0];
  pcVar6 = local_50;
  if (local_50[0] == '\0') {
    pcVar6 = local_38;
  }
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == lVar1) {
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *param_2;
    iVar11 = 0;
  }
  else {
    iVar9 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    iVar11 = 0;
    if (iVar9 != 0) {
      FUN_00d23340();
      local_38[0] = local_50[0];
      pcVar6 = local_38;
      pcVar4 = local_50;
      if (local_50[0] == '\0') {
        pcVar4 = pcVar6;
      }
      *pcVar4 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = (void*)pcVar6;
      if ((local_38[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 == lVar1) {
        lVar1 = *param_2;
        iVar11 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc) + -1;
        goto joined_r0x01903357;
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = (double)FUN_01907950();
      iVar9 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
      dVar12 = (double)FUN_01907950();
      iVar11 = 0;
      if (dVar12 <= local_48) {
        iVar9 = iVar9 + -2;
        dVar12 = (double)FUN_01907950();
        iVar11 = iVar9;
        if (local_48 < dVar12) {
          iVar10 = 1;
          do {
            if (iVar9 - iVar10 == 1) {
              lVar1 = *param_2;
              iVar11 = iVar10;
              goto joined_r0x01903357;
            }
            iVar11 = (iVar9 - iVar10) / 2 + iVar10;
            dVar12 = (double)FUN_01907950();
            iVar2 = iVar11;
            if (local_48 <= dVar12) {
              iVar2 = iVar10;
              iVar9 = iVar11;
            }
            iVar10 = iVar2;
          } while ((dVar12 != local_48) || (NAN(dVar12) || NAN(local_48)));
        }
      }
    }
    lVar1 = *param_2;
  }
joined_r0x01903357:
  if (lVar1 == 0) {
    iVar9 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
    goto LAB_019035ec;
  }
  FUN_00d23310();
  local_38[0] = local_50[0];
  pcVar6 = local_50;
  if (local_50[0] == '\0') {
    pcVar6 = local_38;
  }
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == lVar1) {
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    iVar9 = 0;
    goto LAB_019035ec;
  }
  iVar10 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  iVar9 = 0;
  if (iVar10 == 0) goto LAB_019035ec;
  FUN_00d23340();
  pcVar6 = local_50;
  if (local_50[0] == '\0') {
    pcVar6 = local_38;
  }
  local_38[0] = local_50[0];
  *pcVar6 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pVar7 = (void*)pcVar6;
  if ((local_38[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == lVar1) {
    iVar9 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc) + -1;
    goto LAB_019035ec;
  }
  pvVar5 = _pthread_getspecific(pVar7);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = (double)FUN_01907950();
  iVar10 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
  dVar12 = (double)FUN_01907950();
  if (local_48 < dVar12) goto LAB_019035ec;
  iVar9 = iVar10 + -2;
  dVar12 = (double)FUN_01907950();
  if (dVar12 <= local_48) goto LAB_019035ec;
  if (iVar11 == -1) {
LAB_01903642:
    iVar3 = 1;
    iVar2 = iVar9;
  }
  else {
    iVar2 = iVar11;
    if (iVar9 < iVar11) {
      iVar2 = iVar9;
    }
    if (iVar11 < 1) {
      iVar2 = 1;
    }
    dVar12 = (double)FUN_01907950();
    if (dVar12 <= local_48) {
      iVar3 = iVar2;
      if (iVar2 < iVar10 + -1) {
        iVar8 = iVar2 + 1;
        dVar12 = (double)FUN_01907950();
        if (dVar12 <= local_48) goto LAB_01903679;
      }
      else {
LAB_01903679:
        iVar8 = iVar2 + 2;
        if (((iVar10 <= iVar8) || (dVar12 = (double)FUN_01907950(), dVar12 <= local_48)) &&
           ((iVar8 = iVar2 + 3, iVar2 = iVar9, iVar10 <= iVar8 ||
            (dVar12 = (double)FUN_01907950(), dVar12 <= local_48)))) goto LAB_019036ef;
      }
      iVar2 = iVar8;
    }
    else {
      iVar3 = 1;
      if (0 < iVar2) {
        dVar12 = (double)FUN_01907950();
        iVar3 = iVar2 + -1;
        if (local_48 < dVar12) {
          iVar9 = 1;
          if (iVar2 < 2) goto LAB_01903642;
          dVar12 = (double)FUN_01907950();
          iVar3 = iVar2 + -2;
          if (local_48 < dVar12) {
            if (iVar2 < 3) {
              iVar3 = 1;
              iVar2 = 2;
            }
            else {
              dVar12 = (double)FUN_01907950();
              iVar3 = iVar2 + -3;
              if (local_48 < dVar12) {
                iVar3 = 1;
              }
            }
          }
        }
      }
    }
  }
LAB_019036ef:
  do {
    iVar9 = iVar3;
    if (iVar2 - iVar9 == 1) break;
    iVar10 = (iVar2 - iVar9) / 2 + iVar9;
    dVar12 = (double)FUN_01907950();
    iVar3 = iVar10;
    if (local_48 <= dVar12) {
      iVar3 = iVar9;
      iVar2 = iVar10;
    }
  } while ((dVar12 != local_48) || (iVar9 = iVar10, NAN(dVar12) || NAN(local_48)));
LAB_019035ec:
  if (iVar9 - iVar11 != 0 && iVar11 <= iVar9) {
    uVar13 = FUN_00d64850();
    FUN_00d23690(uVar13,iVar9 - iVar11);
    FUN_00d64910();
  }
  return;
}

