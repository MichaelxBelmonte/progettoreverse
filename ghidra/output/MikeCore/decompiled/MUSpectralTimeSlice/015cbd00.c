// Function: FUN_015cbd00
// Address: 015cbd00
// Size: 2110 bytes
// Class: MUSpectralTimeSlice


/* WARNING: Removing unreachable block (ram,0x015cc2d9) */
/* WARNING: Removing unreachable block (ram,0x015cc2e2) */
/* WARNING: Removing unreachable block (ram,0x015cc470) */
/* WARNING: Removing unreachable block (ram,0x015cc479) */
/* WARNING: Removing unreachable block (ram,0x015cc042) */
/* WARNING: Removing unreachable block (ram,0x015cc04b) */
/* WARNING: Removing unreachable block (ram,0x015cc111) */
/* WARNING: Removing unreachable block (ram,0x015cc11a) */
/* WARNING: Removing unreachable block (ram,0x015cc3db) */
/* WARNING: Removing unreachable block (ram,0x015cc3e4) */
/* WARNING: Removing unreachable block (ram,0x015cc30d) */
/* WARNING: Removing unreachable block (ram,0x015cc316) */
/* WARNING: Removing unreachable block (ram,0x015cc4a5) */
/* WARNING: Removing unreachable block (ram,0x015cc4ae) */

void FUN_015cbd00(longlong *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *pvVar10;
  longlong lVar11;
  undefined8 *puVar12;
  pthread_key_t pVar13;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong local_98;
  char local_90;
  longlong *local_50;
  longlong *local_40;
  char local_38;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  (*DAT_02572370)();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*pcVar4)();
  lVar9 = *unaff_RSI;
  if (0 < *(int *)(lVar9 + 0xc)) {
    lVar15 = 0;
    do {
      plVar5 = local_40;
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar15 * 8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_014bc070();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 == '\0') {
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          if (local_40 == (longlong *)0x0) {
            cVar6 = '\0';
          }
          else {
            pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013df480();
            pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar6 = FUN_013c8ce0();
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar6 != '\0') {
            *(undefined1 *)(unaff_RDI + 0x94) = 1;
          }
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfdd0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 == (longlong *)0x0) {
            bVar3 = false;
            local_50 = (longlong *)0x0;
          }
          else {
            pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5500();
            local_50 = local_40;
            if (local_40 == (longlong *)0x0) {
              local_50 = (longlong *)0x0;
              bVar3 = false;
              param_1 = local_40;
            }
            else {
              bVar3 = true;
              param_1 = local_40;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
          }
          dVar1 = (double)FUN_014bb640();
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
          }
          dVar2 = (double)FUN_014bb710();
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          plVar14 = local_40;
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
            plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
          }
          pVar13 = (pthread_key_t)param_1;
          uVar16 = (**(code **)(*plVar14 + 0x3e0))();
          pvVar10 = _pthread_getspecific(pVar13);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar13 = (pthread_key_t)local_40;
          }
          uVar17 = FUN_014ecb20();
          puVar12 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar12 = &DAT_025f30f8;
          puVar12[2] = 0;
          puVar12[3] = 0;
          *(undefined8 *)((longlong)puVar12 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x24) = 0;
          FUN_00d500e0();
          puVar12[2] = dVar1;
          *(undefined4 *)(puVar12 + 4) = uVar17;
          *(undefined4 *)(puVar12 + 5) = uVar17;
          *(undefined4 *)((longlong)puVar12 + 0x24) = uVar16;
          puVar12[3] = dVar2 - dVar1;
          FUN_00d21140();
          if (local_50 == (longlong *)0x0) {
            lVar11 = puVar12[2];
            uVar16 = *(undefined4 *)(puVar12 + 4);
            local_40 = (longlong *)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_40 = (longlong)&DAT_025f30f8;
            local_40[2] = 0;
            local_40[3] = 0;
            *(undefined8 *)((longlong)local_40 + 0x1c) = 0;
            *(undefined8 *)((longlong)local_40 + 0x24) = 0;
            FUN_00d500e0();
            local_40[2] = lVar11;
            *(undefined4 *)(local_40 + 4) = uVar16;
            FUN_00d21140();
            FUN_00d50b20();
          }
          else {
            local_40 = local_50;
            cVar6 = FUN_00d23d70();
            if (cVar6 == '\0') {
              pvVar10 = _pthread_getspecific(pVar13);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar16 = FUN_014bae60();
              puVar12 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar12 = &DAT_025f30f8;
              puVar12[2] = 0;
              puVar12[3] = 0;
              *(undefined8 *)((longlong)puVar12 + 0x1c) = 0;
              *(undefined8 *)((longlong)puVar12 + 0x24) = 0;
              FUN_00d500e0();
              puVar12[2] = dVar1;
              *(undefined4 *)(puVar12 + 4) = uVar16;
              FUN_00d21140();
              FUN_00d50b20();
              FUN_00d21140();
            }
          }
          local_38 = '\0';
          FUN_00d50b20();
          if ((bVar3) && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar5 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      lVar15 = lVar15 + 1;
      lVar9 = *unaff_RSI;
      param_1 = (longlong *)(longlong)*(int *)(lVar9 + 0xc);
    } while (lVar15 < (longlong)param_1);
  }
  FUN_015cabc0();
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


