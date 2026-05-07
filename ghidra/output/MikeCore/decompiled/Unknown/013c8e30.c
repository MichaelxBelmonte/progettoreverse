// Function: FUN_013c8e30
// Address: 013c8e30
// Size: 1230 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013c92f3) */
/* WARNING: Removing unreachable block (ram,0x013c92fc) */
/* WARNING: Removing unreachable block (ram,0x013c9109) */
/* WARNING: Removing unreachable block (ram,0x013c9115) */
/* WARNING: Removing unreachable block (ram,0x013c92ca) */
/* WARNING: Removing unreachable block (ram,0x013c92d3) */
/* WARNING: Removing unreachable block (ram,0x013c9259) */
/* WARNING: Removing unreachable block (ram,0x013c9265) */
/* WARNING: Removing unreachable block (ram,0x013c9150) */
/* WARNING: Removing unreachable block (ram,0x013c9129) */

undefined8 * FUN_013c8e30(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  void *pvVar9;
  pthread_key_t pVar10;
  undefined *puVar11;
  undefined *puVar12;
  longlong *plVar13;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  uint uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double local_68;
  int local_48;
  
  dVar16 = DAT_023934c8;
  if (param_1 == 0) {
    dVar16 = DAT_0238fee8;
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar11 = &DAT_02572358;
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  pcVar4 = DAT_025c9ed8;
  puVar12 = (undefined *)*param_2;
  if (puVar12 != (undefined *)0x0) {
    local_48 = -1;
    while (local_48 = local_48 + 1, local_48 < *(int *)(puVar12 + 0xc)) {
      pVar10 = (pthread_key_t)*(undefined8 *)(puVar12 + 0x10);
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_025c9ec0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      (*pcVar4)();
      pvVar9 = _pthread_getspecific(pVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_011f2ec0();
      pvVar9 = _pthread_getspecific(pVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = (double)FUN_011f2ed0();
      plVar13 = *(longlong **)(unaff_RSI + 0x38);
      pvVar9 = _pthread_getspecific(pVar10);
      if (pvVar9 != (void *)0x0) {
        plVar13 = *(longlong **)(unaff_RSI + 0x38);
        lVar8 = FUN_00e8b990();
        if (lVar8 != 0) {
          plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
      }
      dVar18 = (double)(**(code **)(*plVar13 + 0x398))();
      local_68 = local_68 + dVar16;
      if (dVar18 < local_68) {
        plVar13 = *(longlong **)(unaff_RSI + 0x38);
        pvVar9 = _pthread_getspecific(pVar10);
        if (pvVar9 != (void *)0x0) {
          plVar13 = *(longlong **)(unaff_RSI + 0x38);
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
        }
        local_68 = (double)(**(code **)(*plVar13 + 0x398))();
      }
      pvVar9 = _pthread_getspecific(pVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar18 = 0.0;
      if (0.0 <= dVar17 - dVar16) {
        dVar18 = dVar17 - dVar16;
      }
      FUN_011f2ef0();
      pvVar9 = _pthread_getspecific(pVar10);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011f2f60(local_68 - dVar18);
      FUN_00d21140();
      FUN_00d50b20();
    }
    FUN_014813e0();
    puVar11 = puVar12;
  }
  uVar3 = *(uint *)((longlong)puVar6 + 0xc);
  while (1 < (int)uVar3) {
    uVar14 = uVar3 - 1;
    lVar8 = *(longlong *)(puVar6[2] + (ulonglong)uVar14 * 8);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    uVar15 = (ulonglong)(uVar3 - 2);
    do {
      lVar1 = *(longlong *)(puVar6[2] + uVar15 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_011f2fc0();
      if (cVar5 != '\0') {
        pvVar9 = _pthread_getspecific((pthread_key_t)puVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011f3100();
        FUN_00d23f50();
        uVar14 = *(uint *)((longlong)puVar6 + 0xc);
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    } while ((cVar5 == '\0') && (bVar2 = 0 < (longlong)uVar15, uVar15 = uVar15 - 1, bVar2));
    uVar3 = uVar14;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


