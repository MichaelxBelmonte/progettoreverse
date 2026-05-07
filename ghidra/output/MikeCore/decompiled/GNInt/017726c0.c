// Function: FUN_017726c0
// Address: 017726c0
// Size: 1604 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x01772aa7) */
/* WARNING: Removing unreachable block (ram,0x01772ab4) */
/* WARNING: Removing unreachable block (ram,0x01772c8f) */
/* WARNING: Removing unreachable block (ram,0x01772c98) */
/* WARNING: Removing unreachable block (ram,0x01772ad9) */
/* WARNING: Removing unreachable block (ram,0x01772ae6) */

float FUN_017726c0(pthread_key_t param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  undefined *puVar11;
  longlong unaff_RDI;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_54;
  longlong local_48;
  char local_40;
  
  fVar13 = (float)FUN_017708f0();
  FUN_01770aa0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01779f30();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01779f30();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar14 = (float)FUN_01779ec0();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  lVar2 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01772f00();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d23740();
  pcVar4 = DAT_025ffd78;
  iVar1 = *(int *)(local_48 + 0xc);
  puVar11 = &DAT_025ffd50;
  pVar10 = 0x25ffd50;
  iVar12 = 0;
  if (iVar1 < 1) {
    bVar3 = false;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    local_54 = 0.0;
    bVar3 = false;
    puVar9 = (undefined8 *)0x0;
    do {
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar15 = (float)FUN_01779ec0();
      fVar15 = fVar15 - fVar14;
      if (iVar12 != 0) {
        for (; fVar15 < local_54; fVar15 = fVar15 + fVar13) {
        }
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f30();
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_025ffd60;
      puVar8[7] = 0;
      puVar8[8] = 0;
      (*pcVar4)();
      if (puVar8 == puVar9) {
        puVar8 = puVar9;
        if (bVar3) {
          FUN_00d50b20();
          bVar5 = bVar3;
        }
        else {
          bVar5 = true;
        }
      }
      else {
        bVar5 = true;
        if ((bVar3) && (puVar9 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar3 = bVar5;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0(fVar15);
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f40();
      FUN_00d21140();
      pVar10 = (pthread_key_t)puVar11;
      iVar12 = iVar12 + 1;
      puVar9 = puVar8;
      local_54 = fVar15;
    } while (iVar12 != iVar1);
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025ffd60;
  puVar9[7] = 0;
  puVar9[8] = 0;
  (*pcVar4)();
  if (puVar9 == puVar8) {
    puVar9 = puVar8;
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  else if ((bVar3) && (puVar8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar15 = (float)FUN_01779ec0();
  FUN_01779ed0(fVar13 + fVar15);
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01779f30();
  FUN_01779f40();
  FUN_00d21140();
  FUN_017712c0();
  if (*(int *)(unaff_RDI + 0x48) != 0) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0x48) = 0;
    FUN_00d64910();
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return fVar14;
}


