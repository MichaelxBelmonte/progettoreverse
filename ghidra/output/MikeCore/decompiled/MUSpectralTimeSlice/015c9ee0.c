// Function: FUN_015c9ee0
// Address: 015c9ee0
// Size: 2350 bytes
// Class: MUSpectralTimeSlice


/* WARNING: Removing unreachable block (ram,0x015ca5e6) */
/* WARNING: Removing unreachable block (ram,0x015ca5ef) */
/* WARNING: Removing unreachable block (ram,0x015ca720) */
/* WARNING: Removing unreachable block (ram,0x015ca729) */
/* WARNING: Removing unreachable block (ram,0x015ca004) */
/* WARNING: Removing unreachable block (ram,0x015ca00d) */
/* WARNING: Removing unreachable block (ram,0x015ca1db) */
/* WARNING: Removing unreachable block (ram,0x015ca1e4) */
/* WARNING: Removing unreachable block (ram,0x015ca2c7) */
/* WARNING: Removing unreachable block (ram,0x015ca2d0) */
/* WARNING: Removing unreachable block (ram,0x015ca7bf) */
/* WARNING: Removing unreachable block (ram,0x015ca7c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015c9ee0(void)

{
  uint *puVar1;
  undefined8 uVar2;
  pthread_key_t pVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined8 *puVar10;
  longlong lVar11;
  void *pvVar12;
  longlong lVar13;
  undefined8 *puVar14;
  pthread_key_t pVar15;
  undefined *puVar16;
  longlong *unaff_RSI;
  ulonglong uVar17;
  longlong unaff_RDI;
  longlong lVar18;
  undefined4 uVar19;
  longlong local_88;
  char local_80;
  undefined4 local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_48;
  char local_40;
  
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar16 = &DAT_02572358;
  *puVar10 = &DAT_02572358;
  (*DAT_02572370)();
  lVar11 = *unaff_RSI;
  if (0 < *(int *)(lVar11 + 0xc)) {
    lVar18 = 0;
    do {
      pVar15 = (pthread_key_t)puVar16;
      lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + lVar18 * 8);
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_40 == '\0') {
        if (local_48 != (undefined8 *)0x0) {
          FUN_00d50b00();
          goto LAB_015ca020;
        }
LAB_015ca0b0:
        bVar8 = true;
        bVar6 = false;
        local_60 = (undefined8 *)0x0;
        bVar7 = false;
        local_58 = (undefined8 *)0x0;
LAB_015ca40f:
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_01259650();
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_012646c0();
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar19 = FUN_0125a2c0();
        local_64 = DAT_02390124;
        if (local_60 != (undefined8 *)0x0) {
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_64 = FUN_014ecb20();
        }
        puVar14 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar14 = &DAT_025f30f8;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
        FUN_00d500e0();
        puVar14[2] = dVar4;
        *(undefined4 *)(puVar14 + 4) = local_64;
        *(undefined4 *)(puVar14 + 5) = local_64;
        *(undefined4 *)((longlong)puVar14 + 0x24) = uVar19;
        puVar14[3] = dVar5 - dVar4;
        FUN_00d21140();
        if (local_58 == (undefined8 *)0x0) {
          uVar2 = puVar14[2];
          uVar19 = *(undefined4 *)(puVar14 + 4);
          local_48 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_48 = &DAT_025f30f8;
          local_48[2] = 0;
          local_48[3] = 0;
          *(undefined8 *)((longlong)local_48 + 0x1c) = 0;
          *(undefined8 *)((longlong)local_48 + 0x24) = 0;
          FUN_00d500e0();
          local_48[2] = uVar2;
          *(undefined4 *)(local_48 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ca7da:
          FUN_00d50b20();
        }
        else {
          lVar13 = *(longlong *)(unaff_RDI + 0x60);
          puVar1 = (uint *)(lVar13 + 0xc);
          if (0 < (int)*puVar1) {
            lVar13 = *(longlong *)(lVar13 + 0x10);
            uVar17 = 0;
            do {
              local_48 = puVar14;
              if ((double)((ulonglong)
                           (*(double *)(*(longlong *)(lVar13 + uVar17 * 8) + 0x10) - dVar4) &
                          _DAT_023908f0) < DAT_02391030) goto LAB_015ca7d5;
              uVar17 = uVar17 + 1;
            } while (*puVar1 != uVar17);
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)lVar13);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar19 = FUN_014bae60();
          local_48 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_48 = &DAT_025f30f8;
          local_48[2] = 0;
          local_48[3] = 0;
          *(undefined8 *)((longlong)local_48 + 0x1c) = 0;
          *(undefined8 *)((longlong)local_48 + 0x24) = 0;
          FUN_00d500e0();
          local_48[2] = dVar4;
          *(undefined4 *)(local_48 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ca7d5:
          if (puVar14 != (undefined8 *)0x0) goto LAB_015ca7da;
        }
        local_40 = '\0';
        if ((bVar6) && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar7) && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar8) goto LAB_015ca817;
      }
      else {
        if (local_48 == (undefined8 *)0x0) goto LAB_015ca0b0;
LAB_015ca020:
        pvVar12 = _pthread_getspecific(pVar15);
        pVar3 = (pthread_key_t)local_48;
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = pVar3;
        }
        FUN_013dfcb0();
        if (local_48 == (undefined8 *)0x0) {
          cVar9 = '\0';
        }
        else {
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = pVar3;
          }
          FUN_013de560();
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar9 = FUN_014bc070();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar9 == '\0') {
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          local_60 = local_48;
          puVar14 = local_48;
          if (local_48 == (undefined8 *)0x0) {
            local_60 = (undefined8 *)0x0;
            bVar6 = false;
          }
          else {
            bVar6 = true;
            if (local_40 == '\0') {
              FUN_00d50b00();
            }
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)puVar14);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            puVar14 = local_48;
          }
          FUN_013dfdd0();
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 == (undefined8 *)0x0) {
            bVar7 = false;
            local_58 = (undefined8 *)0x0;
          }
          else {
            pvVar12 = _pthread_getspecific((pthread_key_t)puVar14);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5500();
            local_58 = local_48;
            if (local_48 == (undefined8 *)0x0) {
              local_58 = (undefined8 *)0x0;
              bVar7 = false;
              puVar14 = local_48;
            }
            else {
              bVar7 = true;
              puVar14 = local_48;
              if (local_40 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          pVar15 = (pthread_key_t)puVar14;
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = pVar3;
          }
          FUN_013df480();
          if (local_48 == (undefined8 *)0x0) {
            cVar9 = '\0';
          }
          else {
            pvVar12 = _pthread_getspecific(pVar15);
            if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              pVar15 = pVar3;
            }
            FUN_013df480();
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar9 = FUN_013c8ce0();
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar9 != '\0') {
            *(undefined1 *)(unaff_RDI + 0x94) = 1;
          }
          bVar8 = false;
          goto LAB_015ca40f;
        }
LAB_015ca817:
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      lVar18 = lVar18 + 1;
      lVar11 = *unaff_RSI;
      puVar16 = (undefined *)(longlong)*(int *)(lVar11 + 0xc);
    } while (lVar18 < (longlong)puVar16);
  }
  FUN_015cabc0();
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


