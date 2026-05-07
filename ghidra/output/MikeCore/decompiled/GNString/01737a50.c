// Function: FUN_01737a50
// Address: 01737a50
// Size: 892 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01737c6a) */
/* WARNING: Removing unreachable block (ram,0x01737c73) */

void FUN_01737a50(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  undefined *puVar9;
  longlong lVar10;
  int iVar11;
  int unaff_ESI;
  longlong unaff_RDI;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong local_58;
  char local_50;
  
  iVar13 = *(int *)(unaff_RDI + 0x50);
  iVar12 = unaff_ESI - *(int *)(unaff_RDI + 0x6c);
  lVar3 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  iVar1 = *(int *)(lVar3 + 0xc);
  FUN_00d50b20();
  iVar11 = iVar12 + iVar13;
  if (*(char *)(unaff_RDI + 0x40) == '\0') {
    iVar12 = iVar12 + *(int *)(unaff_RDI + 0x6c);
    if (*(int *)(unaff_RDI + 0x50) != iVar11) {
      FUN_00d64850();
      *(int *)(unaff_RDI + 0x50) = iVar11;
      FUN_00d64910();
    }
  }
  else {
    if (iVar11 < 0) {
      iVar11 = iVar11 + (1 - iVar11 / iVar1) * iVar1;
    }
    iVar12 = *(int *)(unaff_RDI + 0x6c);
    lVar3 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    uVar2 = *(uint *)(lVar3 + 0xc);
    iVar13 = (iVar11 % iVar1 - iVar13) + iVar12;
    do {
      iVar12 = iVar13 - uVar2;
      bVar4 = (int)uVar2 / 2 < iVar13;
      iVar13 = iVar12;
    } while (bVar4);
    do {
      iVar12 = iVar12 + uVar2;
    } while (iVar12 < -((int)uVar2 / 2));
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9 = &DAT_02572358;
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    if (0 < (int)uVar2) {
      uVar14 = 0;
      do {
        pvVar7 = _pthread_getspecific((pthread_key_t)puVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_01739620();
        if (cVar5 != '\0') {
          pvVar7 = _pthread_getspecific((pthread_key_t)puVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_01739960();
          if (cVar5 == '\0') {
            pvVar7 = _pthread_getspecific((pthread_key_t)puVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017394e0();
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            FUN_00d21140();
            if (local_58 != 0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar2 != uVar14);
    }
    FUN_01737330();
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(unaff_RDI + 0x6c) != iVar12) {
    FUN_00d64850();
    *(int *)(unaff_RDI + 0x6c) = iVar12;
    FUN_00d64910();
  }
  pVar8 = *(pthread_key_t *)(unaff_RDI + 0x50);
  lVar10 = (longlong)(int)pVar8;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10) + lVar10 * 8);
  if (lVar3 != 0) {
    FUN_00d50b00();
    pVar8 = (pthread_key_t)lVar10;
  }
  pvVar7 = _pthread_getspecific(pVar8);
  lVar10 = DAT_027cd560;
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
    lVar10 = DAT_027cd560;
  }
  DAT_027cd560 = lVar10;
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  FUN_017395b0();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


