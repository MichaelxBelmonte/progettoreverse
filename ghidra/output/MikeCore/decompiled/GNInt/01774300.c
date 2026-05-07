// Function: FUN_01774300
// Address: 01774300
// Size: 928 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x01774442) */
/* WARNING: Removing unreachable block (ram,0x017744da) */
/* WARNING: Removing unreachable block (ram,0x0177463b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01774300(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  uint unaff_ESI;
  uint uVar11;
  uint uVar12;
  longlong unaff_RDI;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  char local_38 [8];
  
  uVar15 = (ulonglong)unaff_ESI;
  lVar16 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar16 != 0) {
    FUN_00d50b00();
  }
  if (*(char *)(unaff_RDI + 0x38) == '\0') {
    FUN_01774750();
    pVar6 = (pthread_key_t)param_1;
    if (local_50 == 0) {
      iVar3 = unaff_ESI + *(int *)(unaff_RDI + 0x48);
      if (*(char *)(unaff_RDI + 0x38) != '\0') {
        uVar5 = *(uint *)(*(longlong *)(unaff_RDI + 0x50) + 0xc);
        param_1 = (ulonglong)uVar5;
        do {
          iVar3 = iVar3 + (uVar5 - 1);
        } while ((int)((1 - uVar5) + iVar3) < 0);
        do {
          iVar3 = iVar3 + (1 - uVar5);
        } while ((int)(uVar5 - 1) <= iVar3);
      }
      if (iVar3 < 0) {
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar10 = FUN_01779f30();
        iVar3 = iVar10 + iVar3 + *(int *)(unaff_RDI + 100);
      }
      else {
        iVar10 = *(int *)(lVar16 + 0xc);
        FUN_00d23340();
        pcVar9 = local_38;
        if (local_48[0] != '\0') {
          pcVar9 = local_48;
        }
        local_38[0] = local_48[0];
        *pcVar9 = '\0';
        pvVar4 = _pthread_getspecific((pthread_key_t)CONCAT71((int7)(param_1 >> 8),local_48[0]));
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar1 = FUN_01779f30();
        iVar3 = (iVar3 - iVar10) + iVar1 + 1 + *(int *)(unaff_RDI + 100);
      }
      goto LAB_01774607;
    }
    if (local_48[0] == '\0') {
      FUN_00d50b00();
    }
    iVar10 = *(int *)(unaff_RDI + 100);
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    iVar3 = iVar3 + iVar10;
  }
  else {
    iVar3 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc);
    local_40 = lVar16;
    iVar1 = FUN_01770aa0();
    uVar5 = iVar3 - 1;
    iVar10 = 0;
    if ((int)uVar5 <= (int)unaff_ESI) {
      iVar10 = 0;
      do {
        uVar13 = (int)uVar15 - uVar5;
        uVar15 = (ulonglong)uVar13;
        iVar10 = iVar10 + 1;
      } while ((int)uVar5 <= (int)uVar13);
    }
    iVar14 = (int)uVar15;
    if (iVar14 < 0) {
      iVar2 = iVar14 + -1 + iVar3;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      iVar3 = ((iVar2 - iVar14) - iVar3) + 1;
      uVar13 = (uint)(iVar3 != 0);
      uVar13 = (iVar3 - uVar13) / uVar5 + uVar13 + 1;
      if (7 < uVar13) {
        uVar8 = uVar13 & 0xfffffff8;
        iVar3 = 0;
        iVar2 = 0;
        iVar17 = 0;
        uVar12 = (uVar8 - 8 >> 3) + 1;
        uVar11 = uVar12 & 7;
        if (uVar8 - 8 < 0x38) {
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
        }
        else {
          uVar12 = uVar12 & 0xfffffff8;
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
          do {
            iVar10 = iVar10 + _DAT_02411fc0;
            iVar3 = iVar3 + _UNK_02411fc4;
            iVar2 = iVar2 + _UNK_02411fc8;
            iVar17 = iVar17 + _UNK_02411fcc;
            iVar18 = iVar18 + _DAT_02411fc0;
            iVar19 = iVar19 + _UNK_02411fc4;
            iVar20 = iVar20 + _UNK_02411fc8;
            iVar21 = iVar21 + _UNK_02411fcc;
            uVar12 = uVar12 - 8;
          } while (uVar12 != 0);
        }
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          iVar10 = iVar10 + -1;
          iVar3 = iVar3 + -1;
          iVar2 = iVar2 + -1;
          iVar17 = iVar17 + -1;
          iVar18 = iVar18 + -1;
          iVar19 = iVar19 + -1;
          iVar20 = iVar20 + -1;
          iVar21 = iVar21 + -1;
        }
        uVar15 = (ulonglong)(iVar14 + uVar8 * uVar5);
        iVar10 = iVar17 + iVar21 + iVar3 + iVar19 + iVar2 + iVar20 + iVar10 + iVar18;
        if (uVar13 == uVar8) goto LAB_01774588;
      }
      do {
        iVar10 = iVar10 + -1;
        uVar13 = (int)uVar15 + uVar5;
        uVar15 = (ulonglong)uVar13;
      } while ((int)uVar13 < 0);
    }
LAB_01774588:
    lVar7 = *(longlong *)(lVar16 + 0x10);
    local_50 = *(longlong *)(lVar7 + uVar15 * 8);
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    lVar16 = local_40;
    iVar14 = *(int *)(unaff_RDI + 100);
    pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    iVar3 = iVar10 * iVar1 + iVar14 + iVar3;
    if (local_50 == 0) goto LAB_01774607;
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
LAB_01774607:
  if (lVar16 != 0) {
    FUN_00d50b20();
  }
  return iVar3;
}


