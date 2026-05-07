// Function: FUN_009e89dc
// Address: 009e89dc
// Size: 789 bytes
// Class: Unknown

void FUN_009e89dc(void)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  void *pvVar6;
  uint64_t uVar7;
  int64_t lVar8;
  char *pcVar9;
  int64_t this_ptr;
  char *pcVar10;
  int64_t local_50;
  uint64_t local_48;
  
  lVar8 = *(int64_t *)(this_ptr + 0x18);
  pcVar1 = *(char **)(this_ptr + 0x20);
  pcVar9 = (char *)(lVar8 + 1);
  *(char **)(this_ptr + 0x18) = pcVar9;
  if (pcVar9 == pcVar1) goto LAB_009e8b11;
  iVar4 = (int)*pcVar9;
  bVar2 = false;
  switch(iVar4) {
  case 0x24:
    *(int64_t *)(this_ptr + 0x18) = lVar8 + 2;
    FUN_009e818c();
    return;
  case 0x25:
  case 0x28:
  case 0x29:
  case 0x2a:
    goto switchD_009e8a24_caseD_25;
  case 0x26:
    *(int64_t *)(this_ptr + 0x18) = lVar8 + 2;
    plVar5 = (int64_t *)FUN_009e2686();
    lVar8 = *plVar5;
    if (plVar5[1] != lVar8) {
      do {
        FUN_009e818c();
        lVar8 = lVar8 + 1;
      } while (lVar8 != plVar5[1]);
    }
    break;
  case 0x27:
    *(int64_t *)(this_ptr + 0x18) = lVar8 + 2;
    plVar5 = (int64_t *)FUN_009e6f6c();
    lVar8 = *plVar5;
    if (plVar5[1] != lVar8) {
      do {
        FUN_009e818c();
        lVar8 = lVar8 + 1;
      } while (lVar8 != plVar5[1]);
    }
    break;
  case 0x2b:
    pcVar9 = (char *)(lVar8 + 2);
    *(char **)(this_ptr + 0x18) = pcVar9;
    if ((pcVar9 != pcVar1) && (*pcVar9 == '{')) {
      pcVar10 = (char *)(lVar8 + 3);
      *(char **)(this_ptr + 0x18) = pcVar10;
      while (pcVar10 != pcVar1) {
        if (*pcVar10 == '}') {
          plVar5 = (int64_t *)FUN_009e9238(pcVar9,pcVar10);
          lVar8 = *plVar5;
          if (plVar5[1] != lVar8) {
            do {
              FUN_009e818c();
              lVar8 = lVar8 + 1;
            } while (lVar8 != plVar5[1]);
          }
          goto LAB_009e8b22;
        }
        pcVar10 = pcVar10 + 1;
        *(char **)(this_ptr + 0x18) = pcVar10;
      }
      *(char **)(this_ptr + 0x18) = pcVar9;
    }
    uVar7 = ((*(int64_t **)(this_ptr + 8))[1] - **(int64_t **)(this_ptr + 8) >> 3) *
            -0x5555555555555555;
    iVar4 = 0;
    if (1 < uVar7) {
      iVar4 = (int)uVar7 + -2;
    }
    plVar5 = (int64_t *)FUN_009e2686(iVar4 + -1);
    lVar8 = *plVar5;
    if (plVar5[1] != lVar8) {
      do {
        FUN_009e818c();
        lVar8 = lVar8 + 1;
      } while (lVar8 != plVar5[1]);
    }
    break;
  default:
    if (iVar4 == 0x60) {
      *(int64_t *)(this_ptr + 0x18) = lVar8 + 2;
      plVar5 = (int64_t *)FUN_009e2600();
      lVar8 = *plVar5;
      if (plVar5[1] == lVar8) {
        return;
      }
      do {
        FUN_009e818c();
        lVar8 = lVar8 + 1;
      } while (lVar8 != plVar5[1]);
      return;
    }
    bVar2 = false;
    if (iVar4 == 0x7b) {
      pcVar9 = (char *)(lVar8 + 2);
      *(char **)(this_ptr + 0x18) = pcVar9;
      bVar2 = true;
    }
switchD_009e8a24_caseD_25:
    if (pcVar9 == pcVar1) {
LAB_009e8b02:
      cVar3 = FUN_009e8ed4();
      if (cVar3 != '\0') {
        return;
      }
LAB_009e8b11:
      *(int64_t *)(this_ptr + 0x18) = lVar8;
      FUN_009e818c();
    }
    else {
      FUN_009e8d30();
      pvVar6 = (void *)((int64_t)&MACH_HEADER.cpusubtype + 2);
      iVar4 = FUN_009dcab0(10,local_48);
      *(void*)(this_ptr + 0x18) = *(void*)(this_ptr + 0x18);
      if (local_50 != 0) {
        operator_delete(pvVar6);
      }
      if (iVar4 < 0) goto LAB_009e8b02;
      if (!bVar2) {
        plVar5 = (int64_t *)FUN_009e2686();
        lVar8 = *plVar5;
        if (plVar5[1] == lVar8) {
          return;
        }
        do {
          FUN_009e818c();
          lVar8 = lVar8 + 1;
        } while (lVar8 != plVar5[1]);
        return;
      }
      if ((*(char **)(this_ptr + 0x18) == *(char **)(this_ptr + 0x20)) ||
         (**(char **)(this_ptr + 0x18) != '}')) goto LAB_009e8b02;
      plVar5 = (int64_t *)FUN_009e2686();
      lVar8 = *plVar5;
      if (plVar5[1] != lVar8) {
        do {
          FUN_009e818c();
          lVar8 = lVar8 + 1;
        } while (lVar8 != plVar5[1]);
      }
    }
LAB_009e8b22:
    *(int64_t *)(this_ptr + 0x18) = *(int64_t *)(this_ptr + 0x18) + 1;
  }
  return;
}

