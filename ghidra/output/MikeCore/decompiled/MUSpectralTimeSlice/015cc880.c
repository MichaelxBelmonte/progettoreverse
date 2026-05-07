// Function: FUN_015cc880
// Address: 015cc880
// Size: 1395 bytes
// Class: MUSpectralTimeSlice


/* WARNING: Removing unreachable block (ram,0x015ccdec) */
/* WARNING: Removing unreachable block (ram,0x015ccba6) */
/* WARNING: Removing unreachable block (ram,0x015ccbaf) */
/* WARNING: Removing unreachable block (ram,0x015ccdcc) */
/* WARNING: Removing unreachable block (ram,0x015ccdd5) */
/* WARNING: Removing unreachable block (ram,0x015ccbf0) */
/* WARNING: Removing unreachable block (ram,0x015ccbf9) */
/* WARNING: Removing unreachable block (ram,0x015cccd4) */
/* WARNING: Removing unreachable block (ram,0x015cccdd) */
/* WARNING: Removing unreachable block (ram,0x015ccd09) */
/* WARNING: Removing unreachable block (ram,0x015ccd12) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cc880(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  pthread_key_t pVar15;
  longlong *unaff_RSI;
  longlong *plVar16;
  longlong lVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  pcVar6 = DAT_02572370;
  (*DAT_02572370)();
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  (*pcVar6)();
  lVar11 = *unaff_RSI;
  if (0 < *(int *)(lVar11 + 0xc)) {
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar11 + 0x10) + lVar17 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar10 == (void *)0x0) || (lVar11 = FUN_00e8b990(), lVar11 == 0)) {
        lVar11 = plVar2[0x28];
      }
      else {
        lVar11 = *(longlong *)(plVar2[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4] + 0x140);
      }
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_014bb640();
      pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar18 = (float)FUN_014ecc50();
      if (fVar18 <= _DAT_02411268) {
        if (lVar11 != 0) {
          puVar13 = (undefined8 *)0x0;
          goto LAB_015ccbc1;
        }
      }
      else {
        pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_014bb710();
        pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
        plVar16 = plVar2;
        if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          plVar16 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
        uVar19 = (**(code **)(*plVar16 + 0x3e0))();
        pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar20 = FUN_014ecb20();
        puVar13 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &DAT_025f30f8;
        puVar13[2] = 0;
        puVar13[3] = 0;
        *(undefined8 *)((longlong)puVar13 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar13 + 0x24) = 0;
        FUN_00d500e0();
        puVar13[2] = dVar3;
        *(undefined4 *)(puVar13 + 4) = uVar20;
        *(undefined4 *)(puVar13 + 5) = uVar20;
        *(undefined4 *)((longlong)puVar13 + 0x24) = uVar19;
        puVar13[3] = dVar4 - dVar3;
        FUN_00d21140();
        if (lVar11 == 0) {
          uVar1 = puVar13[2];
          uVar19 = *(undefined4 *)(puVar13 + 4);
          puVar14 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar14 = &DAT_025f30f8;
          puVar14[2] = 0;
          puVar14[3] = 0;
          *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
          FUN_00d500e0();
          puVar14[2] = uVar1;
          *(undefined4 *)(puVar14 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ccd24:
          if (puVar13 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
LAB_015ccbc1:
          bVar5 = fVar18 <= _DAT_02411268;
          pVar15 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar5);
          cVar7 = FUN_00d23d70();
          if (cVar7 == '\0') {
            pvVar10 = _pthread_getspecific(pVar15);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar19 = FUN_014bae60();
            puVar14 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar14 = &DAT_025f30f8;
            puVar14[2] = 0;
            puVar14[3] = 0;
            *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
            *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
            FUN_00d500e0();
            puVar14[2] = dVar3;
            *(undefined4 *)(puVar14 + 4) = uVar19;
            FUN_00d21140();
            FUN_00d50b20();
            FUN_00d21140();
          }
          if (!bVar5) goto LAB_015ccd24;
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar17 = lVar17 + 1;
      lVar11 = *unaff_RSI;
      param_1 = (longlong)*(int *)(lVar11 + 0xc);
    } while (lVar17 < param_1);
  }
  FUN_015cabc0();
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


