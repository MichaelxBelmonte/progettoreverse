// Function: FUN_018721a0
// Address: 018721a0
// Size: 1354 bytes
// Class: Unknown

void FUN_018721a0(void)

{
  uint uVar1;
  int64_t lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  void *pvVar11;
  uint64_t uVar12;
  byte bVar13;
  void* pVar14;
  int64_t *arg1;
  int64_t this_ptr;
  bool bVar16;
  int iVar17;
  bool bVar18;
  int64_t local_70;
  char local_68 [8];
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  uint64_t uVar15;
  
  lVar9 = *arg1;
  while( true ) {
    if (*(int *)(lVar9 + 0xc) == 0) {
      return;
    }
    lVar9 = *(int64_t *)(**(int64_t **)(lVar9 + 0x10) + 0x20);
    if ((*(int *)(lVar9 + 0xc) != 0) && (*(int64_t *)(**(int64_t **)(lVar9 + 0x10) + 0x10) != 0))
    break;
    FUN_00d23620();
    lVar9 = *arg1;
  }
  while( true ) {
    FUN_00d23340();
    local_38[0] = local_68[0];
    pcVar7 = local_68;
    if (local_68[0] == '\0') {
      pcVar7 = local_38;
    }
    *pcVar7 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(*(int64_t *)(local_70 + 0x20) + 0xc) == 0) {
      bVar18 = true;
    }
    else {
      FUN_00d23340();
      local_40[0] = local_68[0];
      pcVar7 = local_68;
      if (local_68[0] == '\0') {
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      bVar18 = *(int64_t *)(**(int64_t **)(*(int64_t *)(local_70 + 0x20) + 0x10) + 0x10) == 0;
      if ((local_40[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar9 = *arg1;
    if (!bVar18) break;
    FUN_00d23740();
    if (*(int *)(*arg1 + 0xc) == 0) {
      return;
    }
  }
  if (*(int *)(lVar9 + 0xc) < 2) {
    return;
  }
  iVar17 = 0;
  bVar18 = false;
  do {
    lVar9 = *(int64_t *)(lVar9 + 0x10);
    lVar2 = *(int64_t *)(lVar9 + (int64_t)iVar17 * 8);
    if (lVar2 != 0) {
      FUN_00d50b00();
      lVar9 = *(int64_t *)(*arg1 + 0x10);
    }
    lVar9 = *(int64_t *)(lVar9 + 8 + (int64_t)iVar17 * 8);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    bVar16 = true;
    if ((*(int *)(*(int64_t *)(lVar2 + 0x20) + 0xc) == 0) ||
       (lVar10 = *(int64_t *)(**(int64_t **)(*(int64_t *)(lVar2 + 0x20) + 0x10) + 0x10),
       lVar10 == 0)) {
      bVar4 = true;
      lVar10 = 0;
      lVar8 = *(int64_t *)(lVar9 + 0x20);
      if (*(int *)(lVar8 + 0xc) != 0) goto LAB_018723a4;
LAB_018723d0:
      lVar8 = 0;
    }
    else {
      FUN_00d50b00();
      bVar4 = false;
      lVar8 = *(int64_t *)(lVar9 + 0x20);
      if (*(int *)(lVar8 + 0xc) == 0) goto LAB_018723d0;
LAB_018723a4:
      lVar8 = *(int64_t *)(**(int64_t **)(lVar8 + 0x10) + 0x10);
      if (lVar8 == 0) goto LAB_018723d0;
      FUN_00d50b00();
      bVar16 = false;
    }
    if (lVar8 == 0) {
      bVar18 = true;
    }
    if (lVar10 == 0 && lVar8 == 0) {
      *(void*)(lVar2 + 0x14) = *(void*)(lVar9 + 0x14);
      FUN_00d23620();
      iVar17 = iVar17 + -1;
    }
    if (!bVar16 && lVar8 != 0) {
      FUN_00d50b20();
    }
    if (!bVar4 && lVar10 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    iVar17 = iVar17 + 1;
    lVar9 = *arg1;
    uVar1 = *(int *)(lVar9 + 0xc) - 1;
    uVar15 = (uint64_t)uVar1;
  } while (iVar17 < (int)uVar1);
  if ((bVar18) && (1 < *(int *)(lVar9 + 0xc))) {
    iVar17 = 0;
    do {
      pVar14 = (void*)uVar15;
      lVar9 = *(int64_t *)(lVar9 + 0x10);
      lVar2 = *(int64_t *)(lVar9 + (int64_t)iVar17 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
        lVar9 = *(int64_t *)(*arg1 + 0x10);
      }
      lVar9 = *(int64_t *)(lVar9 + 8 + (int64_t)iVar17 * 8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      if ((*(int *)(*(int64_t *)(lVar2 + 0x20) + 0xc) == 0) ||
         (local_48 = *(int64_t *)(**(int64_t **)(*(int64_t *)(lVar2 + 0x20) + 0x10) + 0x10),
         local_48 == 0)) {
        local_48 = 0;
        bVar13 = 1;
        lVar10 = *(int64_t *)(lVar9 + 0x20);
        if (*(int *)(lVar10 + 0xc) != 0) goto LAB_01872528;
LAB_01872550:
        bVar3 = 1;
        lVar10 = 0;
      }
      else {
        FUN_00d50b00();
        bVar13 = 0;
        lVar10 = *(int64_t *)(lVar9 + 0x20);
        if (*(int *)(lVar10 + 0xc) == 0) goto LAB_01872550;
LAB_01872528:
        lVar10 = *(int64_t *)(**(int64_t **)(lVar10 + 0x10) + 0x10);
        if (lVar10 == 0) goto LAB_01872550;
        FUN_00d50b00();
        bVar3 = 0;
      }
      if ((local_48 != 0) && (lVar10 == 0)) {
        if (*(int64_t *)(this_ptr + 0x20) == 0) {
          iVar5 = 4;
        }
        else {
          lVar8 = *(int64_t *)(lVar9 + 0xc);
          FUN_00e7b820();
          pvVar11 = _pthread_getspecific(pVar14);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          pVar14 = 0;
          uVar12 = FUN_016c4630(0,1);
          pvVar11 = _pthread_getspecific(pVar14);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c47d0(0,uVar12);
          iVar5 = FUN_0123ffa0();
          if ((local_68[0] != '\0') && (lVar8 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00e7b970();
        iVar6 = FUN_00e7cea0();
        if (iVar6 <= iVar5) {
          *(void*)(lVar2 + 0x14) = *(void*)(lVar9 + 0x14);
          FUN_00d23620();
          iVar17 = iVar17 + -1;
        }
      }
      if (!(bool)(bVar3 | lVar10 == 0)) {
        FUN_00d50b20();
      }
      bVar13 = bVar13 | local_48 == 0;
      uVar15 = (uint64_t)bVar13;
      if (bVar13 == 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      iVar17 = iVar17 + 1;
      lVar9 = *arg1;
    } while (iVar17 < *(int *)(lVar9 + 0xc) + -1);
  }
  return;
}

