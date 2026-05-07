// Function: FUN_009e8ed4
// Address: 009e8ed4
// Size: 867 bytes
// Class: Unknown
// String references:
//   "MATCHPREMATCHPOSTMATCH"
//   "LAST_PAREN_MATCHLAST_SUBMATCH_RESULTNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE"

uint64_t FUN_009e8ed4(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  char unaff_SIL;
  int64_t this_ptr;
  uint64_t unaff_R14;
  undefined7 uVar9;
  
  pcVar4 = *(char **)(this_ptr + 0x18);
  pcVar2 = *(char **)(this_ptr + 0x20);
  if (pcVar4 != pcVar2) {
    if ((unaff_SIL != '\0') && (*pcVar4 == '^')) {
      pcVar4 = pcVar4 + 1;
      *(char **)(this_ptr + 0x18) = pcVar4;
    }
    lVar7 = (int64_t)pcVar2 - (int64_t)pcVar4;
    uVar9 = (undefined7)((uint64_t)unaff_R14 >> 8);
    if (4 < lVar7) {
      pcVar1 = pcVar4 + 5;
      lVar8 = 0;
      do {
        if (pcVar4[lVar8] != "MATCHPREMATCHPOSTMATCH"[lVar8]) {
          if (lVar7 < 8) goto LAB_009e91c5;
          pcVar1 = pcVar4 + 8;
          lVar8 = 0;
          goto LAB_009e8fa5;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 5);
      *(char **)(this_ptr + 0x18) = pcVar1;
      if (unaff_SIL != '\0') {
        if ((pcVar1 == pcVar2) || (*pcVar1 != '}')) goto LAB_009e9224;
        *(char **)(this_ptr + 0x18) = pcVar4 + 6;
      }
      plVar5 = (int64_t *)FUN_009e2686();
      lVar7 = *plVar5;
      uVar6 = CONCAT71(uVar9,1);
      if (plVar5[1] != lVar7) {
        do {
          FUN_009e818c();
          lVar7 = lVar7 + 1;
        } while (lVar7 != plVar5[1]);
      }
      goto LAB_009e922b;
    }
LAB_009e91c5:
    if (((1 < lVar7) && (*pcVar4 == '^')) && (pcVar4[1] == 'N')) {
      pcVar1 = pcVar4 + 2;
      *(char **)(this_ptr + 0x18) = pcVar1;
      if (unaff_SIL != '\0') {
        if ((pcVar1 == pcVar2) || (*pcVar1 != '}')) goto LAB_009e9224;
        *(char **)(this_ptr + 0x18) = pcVar4 + 3;
      }
      plVar5 = (int64_t *)FUN_009e92b0();
      lVar7 = *plVar5;
      uVar6 = CONCAT71(uVar9,1);
      if (plVar5[1] != lVar7) {
        do {
          FUN_009e818c();
          lVar7 = lVar7 + 1;
        } while (lVar7 != plVar5[1]);
      }
      goto LAB_009e922b;
    }
  }
LAB_009e9228:
  uVar6 = 0;
  goto LAB_009e922b;
  while (lVar8 = lVar8 + 1, lVar8 != 9) {
LAB_009e9027:
    if (pcVar4[lVar8] != "MATCHPREMATCHPOSTMATCH"[lVar8 + 0xd]) {
      if (lVar7 < 0x10) goto LAB_009e91c5;
      pcVar1 = pcVar4 + 0x10;
      lVar8 = 0;
      goto LAB_009e90a9;
    }
  }
  *(char **)(this_ptr + 0x18) = pcVar1;
  if (unaff_SIL != '\0') {
    if ((pcVar1 == pcVar2) || (*pcVar1 != '}')) goto LAB_009e9224;
    *(char **)(this_ptr + 0x18) = pcVar4 + 10;
  }
  plVar5 = (int64_t *)FUN_009e6f6c();
  lVar7 = *plVar5;
  uVar6 = CONCAT71(uVar9,1);
  if (plVar5[1] != lVar7) {
    do {
      FUN_009e818c();
      lVar7 = lVar7 + 1;
    } while (lVar7 != plVar5[1]);
  }
  goto LAB_009e922b;
  while (lVar8 = lVar8 + 1, lVar8 != 0x10) {
LAB_009e90a9:
    if (pcVar4[lVar8] !=
        "LAST_PAREN_MATCHLAST_SUBMATCH_RESULTNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE"
        [lVar8]) {
      if (lVar7 < 0x14) goto LAB_009e91c5;
      pcVar1 = pcVar4 + 0x14;
      lVar8 = 0;
      goto LAB_009e915d;
    }
  }
  *(char **)(this_ptr + 0x18) = pcVar1;
  if (unaff_SIL != '\0') {
    if ((pcVar1 == pcVar2) || (*pcVar1 != '}')) goto LAB_009e9224;
    *(char **)(this_ptr + 0x18) = pcVar4 + 0x11;
  }
  uVar6 = ((*(int64_t **)(this_ptr + 8))[1] - **(int64_t **)(this_ptr + 8) >> 3) *
          -0x5555555555555555;
  iVar3 = 0;
  if (1 < uVar6) {
    iVar3 = (int)uVar6 + -2;
  }
  plVar5 = (int64_t *)FUN_009e2686(iVar3 + -1);
  lVar7 = *plVar5;
  uVar6 = CONCAT71(uVar9,1);
  if (plVar5[1] != lVar7) {
    do {
      FUN_009e818c();
      lVar7 = lVar7 + 1;
    } while (lVar7 != plVar5[1]);
  }
  goto LAB_009e922b;
  while (lVar8 = lVar8 + 1, lVar8 != 0x14) {
LAB_009e915d:
    if (pcVar4[lVar8] !=
        "LAST_PAREN_MATCHLAST_SUBMATCH_RESULTNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE"
        [lVar8 + 0x10]) goto LAB_009e91c5;
  }
  *(char **)(this_ptr + 0x18) = pcVar1;
  if (unaff_SIL != '\0') {
    if ((pcVar1 == pcVar2) || (*pcVar1 != '}')) goto LAB_009e9224;
    *(char **)(this_ptr + 0x18) = pcVar4 + 0x15;
  }
  plVar5 = (int64_t *)FUN_009e92b0();
  lVar7 = *plVar5;
  uVar6 = CONCAT71(uVar9,1);
  if (plVar5[1] != lVar7) {
    do {
      FUN_009e818c();
      lVar7 = lVar7 + 1;
    } while (lVar7 != plVar5[1]);
  }
  goto LAB_009e922b;
  while (lVar8 = lVar8 + 1, lVar8 != 8) {
LAB_009e8fa5:
    if (pcVar4[lVar8] != "MATCHPREMATCHPOSTMATCH"[lVar8 + 5]) {
      if (lVar7 < 9) goto LAB_009e91c5;
      pcVar1 = pcVar4 + 9;
      lVar8 = 0;
      goto LAB_009e9027;
    }
  }
  *(char **)(this_ptr + 0x18) = pcVar1;
  if (unaff_SIL != '\0') {
    if ((pcVar1 == pcVar2) || (*pcVar1 != '}')) {
LAB_009e9224:
      *(char **)(this_ptr + 0x18) = pcVar4;
      goto LAB_009e9228;
    }
    *(char **)(this_ptr + 0x18) = pcVar4 + 9;
  }
  plVar5 = (int64_t *)FUN_009e2600();
  lVar7 = *plVar5;
  uVar6 = CONCAT71(uVar9,1);
  if (plVar5[1] != lVar7) {
    do {
      FUN_009e818c();
      lVar7 = lVar7 + 1;
    } while (lVar7 != plVar5[1]);
  }
LAB_009e922b:
  return uVar6 & 0xffffffff;
}

