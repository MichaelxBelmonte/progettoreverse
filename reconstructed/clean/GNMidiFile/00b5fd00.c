// Function: FUN_00b5fd00
// Address: 00b5fd00
// Size: 2158 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


uint64_t FUN_00b5fd00(uint64_t param_1,int64_t *param_2)

{
  double dVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  void*puVar8;
  int64_t lVar9;
  void*puVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  int iVar14;
  double dVar15;
  uint64_t uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double local_90;
  int64_t local_78;
  char local_70;
  int local_50;
  
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*g_02572370)();
  FUN_00b63820();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_00d21140();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  lVar3 = *(int64_t *)(*param_2 + 0x58);
  if (lVar3 != 0) {
    FUN_00d50b00();
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar3 + 0xc)) {
      FUN_00b64180();
      if ((local_70 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
      }
      if (0 < *(int *)(local_78 + 0xc)) {
        local_70 = '\0';
        FUN_00d21140();
      }
      FUN_00d50b20();
    }
    FUN_00b67020();
    if (puVar8 == (void*)0x0) {
      dVar15 = 0.0;
      bVar5 = true;
      lVar9 = *param_2;
      iVar14 = *(int *)(lVar9 + 0xc);
      lVar4 = g_027630d0;
      goto joined_r0x00b60055;
    }
  }
  if (*(int *)((int64_t)puVar8 + 0xc) < 1) {
    dVar15 = 0.0;
  }
  else {
    dVar15 = 0.0;
    uVar12 = 0;
    do {
      lVar9 = *(int64_t *)(puVar8[2] + (uint64_t)uVar12 * 8);
      uVar2 = *(uint *)(lVar9 + 0xc);
      if (0 < (int)uVar2) {
        lVar9 = *(int64_t *)(lVar9 + 0x10);
        if ((uint64_t)uVar2 - 1 < 3) {
          dVar17 = 0.0;
          uVar13 = 0;
        }
        else {
          dVar17 = 0.0;
          uVar13 = 0;
          do {
            dVar18 = *(double *)(*(int64_t *)(lVar9 + uVar13 * 8) + 0x10);
            dVar19 = *(double *)(*(int64_t *)(lVar9 + 8 + uVar13 * 8) + 0x10);
            dVar1 = *(double *)(*(int64_t *)(lVar9 + 0x10 + uVar13 * 8) + 0x10);
            dVar20 = dVar1 - dVar19;
            dVar19 = dVar19 - dVar18;
            dVar18 = dVar18 - dVar17;
            if (dVar18 <= dVar15) {
              dVar18 = dVar15;
            }
            if (dVar19 <= dVar18) {
              dVar19 = dVar18;
            }
            if (dVar20 <= dVar19) {
              dVar20 = dVar19;
            }
            dVar17 = *(double *)(*(int64_t *)(lVar9 + 0x18 + uVar13 * 8) + 0x10);
            dVar15 = dVar17 - dVar1;
            if (dVar15 <= dVar20) {
              dVar15 = dVar20;
            }
            uVar13 = uVar13 + 4;
          } while ((uVar2 & 0xfffffffc) != uVar13);
        }
        if ((uint64_t)(uVar2 & 3) != 0) {
          uVar11 = 0;
          do {
            dVar18 = *(double *)(*(int64_t *)(lVar9 + uVar13 * 8 + uVar11 * 8) + 0x10);
            dVar17 = dVar18 - dVar17;
            if (dVar17 <= dVar15) {
              dVar17 = dVar15;
            }
            dVar15 = dVar17;
            uVar11 = uVar11 + 1;
            dVar17 = dVar18;
          } while ((uVar2 & 3) != uVar11);
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)((int64_t)puVar8 + 0xc));
  }
  FUN_00b670c0();
  bVar5 = false;
  lVar9 = *param_2;
  iVar14 = *(int *)(lVar9 + 0xc);
  lVar4 = g_027630d0;
joined_r0x00b60055:
  g_027630d0 = lVar4;
  if (iVar14 == 0) {
    iVar14 = *(int *)(lVar9 + 0x10);
    if (iVar14 == 0) {
      iVar14 = 0x30;
      if ((dVar15 != 0.0) || (NAN(dVar15))) {
        lVar9 = (int64_t)(g_023d7d60 / dVar15);
        if (lVar9 < 1) {
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (lVar4 != 0) {
            FUN_00d50b20();
            iVar14 = 0x30;
          }
        }
        else if ((((((lVar9 != 1) && (iVar14 = 1, 0x18 < lVar9)) && (iVar14 = 0x18, 0x30 < lVar9))
                  && (((iVar14 = 0x30, 0x60 < lVar9 && (iVar14 = 0x60, 0x78 < lVar9)) &&
                      ((iVar14 = 0x78, 0xc0 < lVar9 &&
                       ((iVar14 = 0xc0, 0xf0 < lVar9 && (iVar14 = 0xf0, 0x1e0 < lVar9)))))))) &&
                 (iVar14 = 0x1e0, 0x3c0 < lVar9)) && (iVar14 = 0x3c0, 0x780 < lVar9)) {
          iVar14 = 0x780;
        }
      }
    }
    local_90 = (double)iVar14;
  }
  else if (iVar14 == 1) {
    iVar14 = 4;
    if ((dVar15 != 0.0) || (NAN(dVar15))) {
      iVar7 = (int)(g_023d7d58 / dVar15);
      if (iVar7 < 1) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar4 != 0) {
          FUN_00d50b20();
          iVar14 = 4;
        }
      }
      else if (((((iVar7 != 1) && (iVar14 = 1, 4 < iVar7)) && (iVar14 = 4, 8 < iVar7)) &&
               ((iVar14 = 8, 10 < iVar7 && (iVar14 = 10, 0x28 < iVar7)))) &&
              (iVar14 = 0x28, 0x50 < iVar7)) {
        iVar14 = 0x50;
        if (100 < iVar7) {
          iVar14 = 100;
        }
      }
    }
    local_90 = (double)(iVar14 * 0x19);
  }
  else {
    local_90 = 0.0;
  }
  FUN_00c92190(local_90,10);
  FUN_00b64740();
  FUN_00b64740();
  pcVar6 = g_025683d8;
  if (!bVar5) {
    iVar14 = -1;
    while (iVar14 = iVar14 + 1, iVar14 < *(int *)((int64_t)puVar8 + 0xc)) {
      lVar9 = *(int64_t *)(puVar8[2] + (int64_t)iVar14 * 8);
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &g_025683c0;
      (*pcVar6)();
      uVar16 = FUN_00c92170();
      uVar12 = *(uint *)(lVar9 + 0xc);
      if (0 < (int)uVar12) {
        uVar13 = 0;
        do {
          lVar4 = *(int64_t *)(*(int64_t *)(lVar9 + 0x10) + uVar13 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          FUN_00b647f0(*(double *)(lVar4 + 0x10) * local_90 + g_023942d0);
          lVar4 = *(int64_t *)(lVar4 + 0x18);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          FUN_00c8e5b0();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          uVar16 = FUN_00d50b20();
          uVar13 = uVar13 + 1;
        } while (uVar12 != uVar13);
      }
      FUN_00c92190(uVar16,4);
      FUN_00b648c0();
      uVar16 = FUN_00c8e5b0();
      FUN_00c92190(uVar16,4);
      FUN_00d50b20();
    }
    FUN_00b67160();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return 1;
}

