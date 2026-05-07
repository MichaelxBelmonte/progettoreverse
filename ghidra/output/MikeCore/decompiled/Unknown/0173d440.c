// Function: FUN_0173d440
// Address: 0173d440
// Size: 2986 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0173db22) */
/* WARNING: Removing unreachable block (ram,0x0173db2e) */
/* WARNING: Removing unreachable block (ram,0x0173d8f7) */
/* WARNING: Removing unreachable block (ram,0x0173d903) */
/* WARNING: Removing unreachable block (ram,0x0173d63b) */
/* WARNING: Removing unreachable block (ram,0x0173d647) */
/* WARNING: Removing unreachable block (ram,0x0173d76c) */
/* WARNING: Removing unreachable block (ram,0x0173d778) */
/* WARNING: Removing unreachable block (ram,0x0173da89) */
/* WARNING: Removing unreachable block (ram,0x0173da95) */
/* WARNING: Removing unreachable block (ram,0x0173dd6f) */
/* WARNING: Removing unreachable block (ram,0x0173dd7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0173d440(float param_1,float param_2)

{
  code *pcVar1;
  code *pcVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  void *pvVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  longlong lVar11;
  pthread_key_t in_ECX;
  pthread_key_t pVar12;
  code *pcVar13;
  uint in_EDX;
  uint unaff_ESI;
  undefined8 *unaff_RDI;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  bool bVar17;
  float fVar18;
  
  pcVar4 = (code *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(longlong *)(pcVar4 + 0x50) = 0;
  *(longlong *)(pcVar4 + 0x38) = 0;
  *(longlong *)(pcVar4 + 0x40) = 0;
  *(undefined4 *)(pcVar4 + 0x48) = 0;
  *(undefined **)pcVar4 = &DAT_025fee18;
  *(undefined8 *)(pcVar4 + 0x6c) = 0;
  *(longlong *)(pcVar4 + 0x58) = 0;
  *(longlong *)(pcVar4 + 0x60) = 0;
  *(undefined2 *)(pcVar4 + 0x68) = 0;
  FUN_00d500e0();
  pcVar5 = (code *)FUN_00e8fc40();
  FUN_01a016a0();
  (**(code **)(*(longlong *)pcVar5 + 0x18))();
  pcVar6 = (code *)FUN_00e8fc40();
  FUN_0013e060();
  (**(code **)(*(longlong *)pcVar6 + 0x18))();
  pvVar7 = _pthread_getspecific(in_ECX);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    in_ECX = (pthread_key_t)pcVar5;
  }
  FUN_01770880();
  pvVar7 = _pthread_getspecific(in_ECX);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    in_ECX = (pthread_key_t)pcVar6;
  }
  FUN_01736d20();
  pvVar7 = _pthread_getspecific(in_ECX);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    in_ECX = (pthread_key_t)pcVar6;
  }
  FUN_01736c00();
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0176fd70();
  pcVar9 = (code *)FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar13 = (code *)&DAT_025ffd60;
  *(undefined **)pcVar9 = &DAT_025ffd60;
  *(longlong *)(pcVar9 + 0x38) = 0;
  *(longlong *)(pcVar9 + 0x40) = 0;
  pcVar1 = DAT_025ffd78;
  (*DAT_025ffd78)();
  pvVar7 = _pthread_getspecific((pthread_key_t)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar9;
  }
  FUN_01779ed0(0);
  pvVar7 = _pthread_getspecific((pthread_key_t)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar9;
  }
  FUN_01779f40();
  pvVar7 = _pthread_getspecific((pthread_key_t)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar5;
  }
  FUN_0176fde0();
  if (0 < (int)unaff_ESI) {
    uVar14 = 1;
    do {
      pVar12 = (pthread_key_t)pcVar13;
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &DAT_025ffd60;
      puVar10[7] = 0;
      puVar10[8] = 0;
      (*pcVar1)();
      FUN_00e7d780(((float)(int)uVar14 * param_2) / DAT_023908e0);
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0((float)(int)uVar14 * param_2);
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f40();
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0176fde0();
      FUN_00d50b20();
      pcVar13 = (code *)(ulonglong)(uVar14 + 1);
      bVar17 = uVar14 != unaff_ESI;
      uVar14 = uVar14 + 1;
    } while (bVar17);
  }
  if (0 < (int)in_EDX) {
    uVar14 = 1;
    do {
      pVar12 = (pthread_key_t)pcVar13;
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &DAT_025ffd60;
      puVar10[7] = 0;
      puVar10[8] = 0;
      (*pcVar1)();
      fVar18 = (float)((uint)(float)(int)uVar14 ^ _DAT_023945e0) * param_2;
      FUN_00e7d780(fVar18 / DAT_023908e0);
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0(fVar18);
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f40();
      pvVar7 = _pthread_getspecific(pVar12);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770f30();
      FUN_00d50b20();
      pcVar13 = (code *)(ulonglong)(uVar14 + 1);
      bVar17 = uVar14 != in_EDX;
      uVar14 = uVar14 + 1;
    } while (bVar17);
  }
  pvVar7 = _pthread_getspecific((pthread_key_t)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar6;
  }
  FUN_01735c40();
  pvVar7 = _pthread_getspecific((pthread_key_t)pcVar13);
  lVar8 = DAT_027e3c20;
  if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar8 = DAT_027e3c20, lVar11 != 0)) {
    pcVar13 = pcVar6;
  }
  DAT_027e3c20 = lVar8;
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  FUN_01735120();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  pcVar1 = DAT_025fe688;
  if ((int)(in_EDX + unaff_ESI) < 0) {
    bVar17 = false;
    puVar10 = (undefined8 *)0x0;
  }
  else {
    iVar15 = in_EDX + unaff_ESI + 1;
    bVar17 = false;
    pcVar13 = DAT_025fe688;
    puVar16 = (undefined8 *)0x0;
    do {
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &DAT_025fe670;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      (*pcVar1)();
      if (puVar10 == puVar16) {
        puVar10 = puVar16;
        if (bVar17) {
          FUN_00d50b20();
          bVar3 = bVar17;
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = true;
        if ((bVar17) && (puVar16 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar17 = bVar3;
      pvVar7 = _pthread_getspecific((pthread_key_t)pcVar13);
      lVar8 = DAT_027cd560;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
        lVar8 = DAT_027cd560;
      }
      DAT_027cd560 = lVar8;
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      FUN_017395b0();
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)pcVar13);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pcVar13 = pcVar6;
      }
      FUN_01735cb0();
      iVar15 = iVar15 + -1;
      puVar16 = puVar10;
    } while (iVar15 != 0);
  }
  pvVar7 = _pthread_getspecific((pthread_key_t)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar5;
  }
  FUN_01770eb0();
  pvVar7 = _pthread_getspecific((pthread_key_t)pcVar13);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pcVar13 = pcVar6;
  }
  FUN_01736de0();
  pvVar7 = _pthread_getspecific((pthread_key_t)pcVar13);
  if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    pcVar2 = *(code **)(pcVar4 + 0x60);
    pcVar1 = pcVar4;
  }
  else {
    pcVar1 = *(code **)(pcVar4 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
    pcVar2 = *(code **)(pcVar1 + 0x60);
    pcVar13 = pcVar4;
  }
  if (pcVar2 != pcVar5) {
    FUN_00d64850();
    pcVar2 = *(code **)(pcVar1 + 0x60);
    if (pcVar2 != pcVar5) {
      if (pcVar5 != (code *)0x0) {
        FUN_00d50b00();
      }
      *(code **)(pcVar1 + 0x60) = pcVar5;
      if (pcVar2 != (code *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  pvVar7 = _pthread_getspecific((pthread_key_t)pcVar13);
  if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    pcVar2 = *(code **)(pcVar4 + 0x58);
    pcVar1 = pcVar4;
  }
  else {
    pcVar1 = *(code **)(pcVar4 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8 + 0x20);
    pcVar2 = *(code **)(pcVar1 + 0x58);
    pcVar13 = pcVar4;
  }
  pVar12 = (pthread_key_t)pcVar13;
  if (pcVar2 != pcVar6) {
    FUN_00d64850();
    pcVar13 = *(code **)(pcVar1 + 0x58);
    if (pcVar13 != pcVar6) {
      if (pcVar6 != (code *)0x0) {
        FUN_00d50b00();
      }
      *(code **)(pcVar1 + 0x58) = pcVar6;
      if (pcVar13 != (code *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00e7d780(param_1 / DAT_023908e0);
  pvVar7 = _pthread_getspecific(pVar12);
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar12 = (pthread_key_t)pcVar5;
  }
  FUN_01770300();
  pvVar7 = _pthread_getspecific(pVar12);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770230(param_1);
  *unaff_RDI = pcVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (pcVar9 != (code *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar17) && (puVar10 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (pcVar6 != (code *)0x0) {
    FUN_00d50b20();
  }
  if (pcVar5 != (code *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


