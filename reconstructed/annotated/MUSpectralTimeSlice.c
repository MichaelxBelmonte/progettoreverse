// ===== MUSpectralTimeSlice — Annotated small functions =====
// 11 readable functions

// ==================================================
// @015c9ee0 (2350 bytes) — math_loop

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
  longlong *arg1;
  ulonglong uVar17;
  longlong this;
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
  lVar11 = *arg1;
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
          lVar13 = *(longlong *)(this + 0x60);
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
            *(undefined1 *)(this + 0x94) = 1;
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
      lVar11 = *arg1;
      puVar16 = (undefined *)(longlong)*(int *)(lVar11 + 0xc);
    } while (lVar18 < (longlong)puVar16);
  }
  FUN_015cabc0();
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @011aa9e0 (2213 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_025f1488;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab2c0();
    FUN_00e87980();
  }
  this[2] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab430();
    FUN_00e87980();
  }
  this[3] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab5a0();
    FUN_00e87980();
  }
  this[4] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab710();
    FUN_00e87980();
  }
  this[5] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab880();
    FUN_00e87980();
  }
  this[6] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab9f0();
    FUN_00e87980();
  }
  this[7] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011abb60();
    FUN_00e87980();
  }
  this[8] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011abcd0();
    FUN_00e87980();
  }
  this[9] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011abe40();
    FUN_00e87980();
  }
  this[10] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011abfb0();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @015cbd00 (2110 bytes) — math_loop

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
  longlong *arg1;
  longlong this;
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
  lVar9 = *arg1;
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
            *(undefined1 *)(this + 0x94) = 1;
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
      lVar9 = *arg1;
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




// ==================================================
// @015cc880 (1395 bytes) — math_loop

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
  longlong *arg1;
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
  lVar11 = *arg1;
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
      lVar11 = *arg1;
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




// ==================================================
// @015c6700 (1118 bytes) — calculation

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *arg1;
  longlong this;
  
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) != *(int *)(this + 0xc))) {
    FUN_00e828a0();
  }
  if ((param_2 & 1) != 0) {
    if (*(longlong *)(*arg1 + 0x10) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(this + 0x10);
    }
    else {
      lVar1 = *(longlong *)(this + 0x10);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(this + 0x10) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(this + 0xc) << 3),param_3);
  }
  if ((param_2 & 2) != 0) {
    if (*(longlong *)(*arg1 + 0x18) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(this + 0x18);
    }
    else {
      lVar1 = *(longlong *)(this + 0x18);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(this + 0x18) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(this + 0xc) << 2),param_3);
  }
  if ((param_2 & 4) != 0) {
    if (*(longlong *)(*arg1 + 0x20) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(this + 0x20);
    }
    else {
      lVar1 = *(longlong *)(this + 0x20);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(this + 0x20) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(this + 0xc) << 2),param_3);
  }
  if ((param_2 & 8) != 0) {
    if (*(longlong *)(*arg1 + 0x28) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(this + 0x28);
    }
    else {
      lVar1 = *(longlong *)(this + 0x28);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(this + 0x28) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(this + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x10) != 0) {
    if (*(longlong *)(*arg1 + 0x30) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(this + 0x30);
    }
    else {
      lVar1 = *(longlong *)(this + 0x30);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(this + 0x30) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(this + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x20) != 0) {
    if (*(longlong *)(*arg1 + 0x38) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(this + 0x38);
    }
    else {
      lVar1 = *(longlong *)(this + 0x38);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(this + 0x38) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(this + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x40) != 0) {
    if (*(longlong *)(*arg1 + 0x40) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(this + 0x40);
    }
    else {
      lVar1 = *(longlong *)(this + 0x40);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(this + 0x40) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(this + 0xc) << 2),param_3);
  }
  if ((char)param_2 < '\0') {
    if (*(longlong *)(*arg1 + 0x48) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(this + 0x48);
    }
    else {
      lVar1 = *(longlong *)(this + 0x48);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(this + 0x48) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(this + 0xc) << 3),param_3);
    return;
  }
  return;
}




// ==================================================
// @015c6350 (864 bytes) — math_loop

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *arg1;
  int iVar14;
  longlong this;
  ulonglong uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (*(longlong *)(this + 0x28) == 0) {
    FUN_00e828a0();
    lVar7 = *(longlong *)(this + 0x30);
  }
  else {
    lVar7 = *(longlong *)(this + 0x30);
  }
  if (lVar7 != 0) {
    FUN_00e83070();
    *(undefined8 *)(this + 0x30) = 0;
  }
  uVar6 = FUN_00e83010();
  *(undefined8 *)(this + 0x30) = uVar6;
  if (param_2 == '\0') {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_015c7920();
  }
  fVar19 = DAT_02394250;
  uVar5 = _DAT_02390140;
  iVar3 = *(int *)(*arg1 + 0x58);
  uVar4 = *(uint *)(this + 0xc);
  lVar17 = (longlong)(int)uVar4;
  if (lVar17 < 6) {
    puVar16 = *(undefined4 **)(this + 0x30);
  }
  else {
    fVar21 = (float)*(double *)(*arg1 + 0x50);
    fVar20 = DAT_02390124 / fVar21;
    lVar9 = *(longlong *)(this + 0x28);
    puVar16 = *(undefined4 **)(this + 0x30);
    lVar11 = 1;
    uVar10 = 3;
    do {
      uVar13 = (int)uVar10 + 3;
      if ((int)uVar4 <= (int)uVar13) {
        uVar13 = uVar4 - 1;
      }
      if ((longlong)(uVar10 - 2) < (longlong)(int)uVar13) {
        fVar1 = *(float *)(lVar9 + uVar10 * 4);
        uVar15 = (ulonglong)uVar13;
        fVar22 = (float)((uint)(fVar1 - *(float *)(lVar9 + lVar11 * 4)) & uVar5);
        fVar22 = (float)(-(uint)(fVar22 < fVar21) & (uint)((fVar21 - fVar22) * fVar20 + 0.0));
        if (((lVar11 + 1U != uVar15) &&
            (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 4 + lVar11 * 4)) & uVar5),
            uVar18 = -(uint)(fVar23 < fVar21),
            fVar22 = (float)(~uVar18 & (uint)fVar22 |
                            (uint)(fVar22 + (fVar21 - fVar23) * fVar20) & uVar18),
            lVar11 + 2U != uVar15)) && (uVar12 = lVar11 + 3, uVar12 != uVar15)) {
          if (((uVar13 - (int)lVar11) + 1 & 1) != 0) {
            if ((uVar12 != uVar10) &&
               (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 0xc + lVar11 * 4)) & uVar5),
               fVar23 < fVar21)) {
              fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
            }
            uVar12 = lVar11 + 4;
          }
          if (uVar15 - 4 != lVar11) {
            do {
              if ((uVar10 != uVar12) &&
                 (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + uVar12 * 4)) & uVar5),
                 fVar23 < fVar21)) {
                fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
              }
              if ((uVar12 + 1 != uVar10) &&
                 (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 4 + uVar12 * 4)) & uVar5),
                 fVar23 < fVar21)) {
                fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
              }
              uVar12 = uVar12 + 2;
            } while (uVar12 != uVar15);
          }
        }
      }
      else {
        fVar22 = 0.0;
      }
      lVar11 = lVar11 + 1;
      puVar16[uVar10] = fVar22 * fVar19;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar4 - 2);
  }
  uVar2 = puVar16[3];
  *puVar16 = uVar2;
  puVar16[1] = uVar2;
  puVar16[2] = uVar2;
  lVar9 = (longlong)(int)(uVar4 - 2);
  puVar16[lVar9] = puVar16[lVar17 + -3];
  if (lVar9 + 1 < lVar17) {
    puVar16[lVar9 + 1] = puVar16[lVar17 + -3];
  }
  if ((param_2 != '\0') && (0 < (int)uVar4)) {
    fVar19 = (float)iVar3;
    iVar8 = iVar3 + -1;
    if (uVar4 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        iVar14 = (int)((float)puVar16[uVar10] * fVar19);
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        if (iVar3 <= iVar14) {
          iVar14 = iVar8;
        }
        puVar16[uVar10] = *(undefined4 *)(lVar7 + (longlong)iVar14 * 4);
        iVar14 = (int)((float)puVar16[uVar10 + 1] * fVar19);
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        if (iVar3 <= iVar14) {
          iVar14 = iVar8;
        }
        puVar16[uVar10 + 1] = *(undefined4 *)(lVar7 + (longlong)iVar14 * 4);
        uVar10 = uVar10 + 2;
      } while ((uVar4 & 0xfffffffe) != uVar10);
    }
    if ((uVar4 & 1) != 0) {
      iVar14 = 0;
      if (-1 < (int)(fVar19 * (float)puVar16[uVar10])) {
        iVar14 = (int)(fVar19 * (float)puVar16[uVar10]);
      }
      if (iVar14 < iVar3) {
        iVar8 = iVar14;
      }
      puVar16[uVar10] = *(undefined4 *)(lVar7 + (longlong)iVar8 * 4);
    }
  }
  return;
}




// ==================================================
// @015c73a0 (683 bytes) — math_loop

{
  float *pfVar1;
  undefined8 *puVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong arg1;
  longlong lVar20;
  longlong *this;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  longlong local_30;
  char local_28;
  
  lVar22 = *(longlong *)(arg1 + 0x70);
  if (lVar22 != 0) goto LAB_015c760e;
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar22 = *(longlong *)(arg1 + 0x70);
  if (lVar22 == local_30) {
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(arg1 + 0x70) = local_30;
    if (lVar22 != 0) {
      FUN_00d50b20();
    }
  }
  iVar17 = _UNK_023de2dc;
  iVar16 = _UNK_023de2d8;
  iVar15 = _UNK_023de2d4;
  iVar14 = _DAT_023de2d0;
  iVar13 = _UNK_023de2cc;
  iVar12 = _UNK_023de2c8;
  iVar11 = _UNK_023de2c4;
  iVar10 = _DAT_023de2c0;
  iVar9 = _UNK_023de2bc;
  iVar8 = _UNK_023de2b8;
  iVar7 = _UNK_023de2b4;
  iVar6 = _DAT_023de2b0;
  iVar26 = _UNK_0239418c;
  iVar25 = _UNK_02394188;
  iVar24 = _UNK_02394184;
  iVar23 = _DAT_02394180;
  uVar4 = *(uint *)(arg1 + 0x24);
  if ((int)uVar4 < 1) {
    lVar22 = *(longlong *)(arg1 + 0x70);
    goto LAB_015c760e;
  }
  dVar3 = *(double *)(arg1 + 0x50);
  lVar22 = *(longlong *)(arg1 + 0x70);
  lVar5 = *(longlong *)(lVar22 + 0x10);
  if (uVar4 < 8) {
    uVar18 = 0;
  }
  else {
    uVar18 = (ulonglong)(uVar4 & 0xfffffff8);
    uVar19 = (uVar18 - 8 >> 3) + 1;
    iVar27 = _DAT_0238fcc0;
    iVar28 = _UNK_0238fcc4;
    iVar29 = _UNK_0238fcc8;
    iVar30 = _UNK_0238fccc;
    if (uVar18 - 8 == 0) {
      lVar20 = 0;
LAB_015c758e:
      iVar23 = _DAT_02394180 + iVar27;
      iVar24 = _UNK_02394184 + iVar28;
      iVar25 = _UNK_02394188 + iVar29;
      iVar26 = _UNK_0239418c + iVar30;
      pfVar1 = (float *)(lVar5 + lVar20 * 4);
      *pfVar1 = (float)((double)iVar27 * dVar3);
      pfVar1[1] = (float)((double)iVar28 * dVar3);
      pfVar1[2] = (float)((double)iVar29 * dVar3);
      pfVar1[3] = (float)((double)iVar30 * dVar3);
      pfVar1 = (float *)(lVar5 + 0x10 + lVar20 * 4);
      *pfVar1 = (float)((double)iVar23 * dVar3);
      pfVar1[1] = (float)((double)iVar24 * dVar3);
      pfVar1[2] = (float)((double)iVar25 * dVar3);
      pfVar1[3] = (float)((double)iVar26 * dVar3);
    }
    else {
      lVar21 = -(uVar19 & 0xfffffffffffffffe);
      lVar20 = 0;
      do {
        pfVar1 = (float *)(lVar5 + lVar20 * 4);
        *pfVar1 = (float)((double)iVar27 * dVar3);
        pfVar1[1] = (float)((double)iVar28 * dVar3);
        pfVar1[2] = (float)((double)iVar29 * dVar3);
        pfVar1[3] = (float)((double)iVar30 * dVar3);
        pfVar1 = (float *)(lVar5 + 0x10 + lVar20 * 4);
        *pfVar1 = (float)((double)(iVar27 + iVar23) * dVar3);
        pfVar1[1] = (float)((double)(iVar28 + iVar24) * dVar3);
        pfVar1[2] = (float)((double)(iVar29 + iVar25) * dVar3);
        pfVar1[3] = (float)((double)(iVar30 + iVar26) * dVar3);
        pfVar1 = (float *)(lVar5 + 0x20 + lVar20 * 4);
        *pfVar1 = (float)((double)(iVar27 + iVar6) * dVar3);
        pfVar1[1] = (float)((double)(iVar28 + iVar7) * dVar3);
        pfVar1[2] = (float)((double)(iVar29 + iVar8) * dVar3);
        pfVar1[3] = (float)((double)(iVar30 + iVar9) * dVar3);
        puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar20 * 4);
        *puVar2 = CONCAT44((float)((double)(iVar28 + iVar11) * dVar3),
                           (float)((double)(iVar27 + iVar10) * dVar3));
        puVar2[1] = CONCAT44((float)((double)(iVar30 + iVar13) * dVar3),
                             (float)((double)(iVar29 + iVar12) * dVar3));
        lVar20 = lVar20 + 0x10;
        iVar27 = iVar27 + iVar14;
        iVar28 = iVar28 + iVar15;
        iVar29 = iVar29 + iVar16;
        iVar30 = iVar30 + iVar17;
        lVar21 = lVar21 + 2;
      } while (lVar21 != 0);
      if ((uVar19 & 1) != 0) goto LAB_015c758e;
    }
    if (uVar18 == uVar4) goto LAB_015c760e;
  }
  do {
    *(float *)(lVar5 + uVar18 * 4) = (float)((double)(int)uVar18 * dVar3);
    uVar18 = uVar18 + 1;
  } while (uVar4 != uVar18);
LAB_015c760e:
  *(undefined1 *)(this + 1) = 0;
  if (lVar22 != 0) {
    FUN_00d50b00();
  }
  *this = lVar22;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @015c91d0 (680 bytes) — math_loop

{
  bool bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong arg1;
  undefined8 *this;
  longlong lVar4;
  bool bVar5;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (arg1 == 0) {
    bVar5 = false;
    lVar4 = 0;
    lVar3 = segment_command_00000020._0_8_;
    if (segment_command_00000020._0_8_ == 0) goto LAB_015c9367;
LAB_015c9290:
    do {
      FUN_00d50b00();
      FUN_00d23370();
      if (lVar3 == lVar4) {
        bVar1 = bVar5;
        if (!bVar5) {
          FUN_00d50b00();
          bVar1 = true;
        }
      }
      else {
        FUN_00d50b00();
        lVar4 = lVar3;
        bVar1 = true;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      bVar5 = bVar1;
      FUN_00d50b20();
      lVar3 = *(longlong *)(lVar4 + 0x20);
    } while (*(longlong *)(lVar4 + 0x20) != 0);
    if (lVar4 != arg1) goto LAB_015c9331;
LAB_015c9373:
    bVar1 = bVar5;
    if (bVar5) {
      lVar3 = *(longlong *)(arg1 + 0x18);
      goto joined_r0x015c9466;
    }
    if (arg1 != 0) {
      bVar1 = true;
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b20();
    FUN_00d50b00();
    bVar5 = true;
    lVar3 = *(longlong *)(arg1 + 0x20);
    lVar4 = arg1;
    if (*(longlong *)(arg1 + 0x20) != 0) goto LAB_015c9290;
LAB_015c9367:
    if (lVar4 == arg1) goto LAB_015c9373;
LAB_015c9331:
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    bVar1 = true;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  lVar3 = *(longlong *)(arg1 + 0x18);
joined_r0x015c9466:
  for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
    FUN_00d50b00();
    FUN_00d21140();
    if (lVar3 == arg1) {
      lVar3 = arg1;
      bVar5 = bVar1;
      if (!bVar1) {
        FUN_00d50b00();
        bVar5 = true;
      }
    }
    else {
      FUN_00d50b00();
      bVar5 = true;
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    arg1 = lVar3;
    bVar1 = bVar5;
  }
  *this = puVar2;
  *(undefined1 *)(this + 1) = 1;
  if (bVar1) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @015c7920 (672 bytes) — math_loop

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong this;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  void *pvVar18;
  uint uVar19;
  
  if (*(longlong *)(this + 0x80) != 0) {
    return *(longlong *)(this + 0x80);
  }
  uVar7 = FUN_00e83010();
  *(undefined8 *)(this + 0x80) = uVar7;
  iVar6 = (int)((float)*(int *)(this + 0x58) * DAT_02391094);
  iVar16 = 1;
  if (0 < iVar6) {
    iVar16 = iVar6;
  }
  uVar10 = 0;
  uVar8 = FUN_00e83da0();
  iVar6 = *(int *)(this + 0x58);
  uVar19 = (uint)((float)iVar6 * DAT_0239011c);
  if (0 < (int)uVar19) {
    ___bzero();
    uVar10 = (ulonglong)uVar19;
  }
  uVar17 = (iVar16 + uVar19) - (int)uVar10;
  pvVar18 = (void *)(ulonglong)uVar17;
  if (uVar17 != 0 && (int)uVar10 <= (int)(iVar16 + uVar19)) {
    lVar3 = *(longlong *)(this + 0x80);
    if ((uVar17 < 8) ||
       ((lVar3 + uVar10 * 4 < uVar8 + (longlong)pvVar18 * 4 &&
        (uVar8 < lVar3 + (uVar10 + (longlong)pvVar18) * 4)))) {
      param_1 = (void *)0x0;
    }
    else {
      param_1 = (void *)(ulonglong)(uVar17 & 0xfffffff8);
      uVar9 = ((longlong)param_1 - 8U >> 3) + 1;
      uVar11 = (ulonglong)((uint)uVar9 & 3);
      if ((longlong)param_1 - 8U < 0x18) {
        lVar13 = 0;
      }
      else {
        lVar15 = lVar3 + uVar10 * 4;
        lVar12 = -(uVar9 & 0xfffffffffffffffc);
        lVar13 = 0;
        do {
          puVar1 = (undefined8 *)(uVar8 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(uVar8 + 0x10 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(lVar15 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(uVar8 + 0x20 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(uVar8 + 0x30 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(lVar15 + 0x30 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(uVar8 + 0x40 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(uVar8 + 0x50 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(lVar15 + 0x40 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(lVar15 + 0x50 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(uVar8 + 0x60 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(uVar8 + 0x70 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(lVar15 + 0x60 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(lVar15 + 0x70 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar13 = lVar13 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      lVar15 = 0;
      if (uVar11 != 0) {
        lVar12 = uVar8 + lVar13 * 4;
        lVar13 = lVar3 + (lVar13 + uVar10) * 4;
        lVar15 = uVar11 << 5;
        lVar14 = 0;
        do {
          puVar2 = (undefined8 *)(lVar12 + lVar14);
          uVar7 = puVar2[1];
          puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar14);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + lVar14);
          *puVar1 = *puVar2;
          puVar1[1] = uVar7;
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar14);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar14 = lVar14 + 0x20;
        } while (lVar15 != lVar14);
      }
      param_3 = (size_t)lVar15;
      uVar10 = uVar10 + (longlong)param_1;
      if (param_1 == pvVar18) goto LAB_015c7b77;
    }
    uVar9 = ~(ulonglong)param_1;
    uVar11 = (ulonglong)pvVar18 & 3;
    if ((uVar17 & 3) != 0) {
      do {
        lVar15 = (longlong)param_1 * 4;
        param_1 = (void *)((longlong)param_1 + 1);
        *(undefined4 *)(lVar3 + uVar10 * 4) = *(undefined4 *)(uVar8 + lVar15);
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (2 < uVar9 + (longlong)pvVar18) {
      lVar3 = lVar3 + uVar10 * 4;
      pvVar18 = (void *)((longlong)pvVar18 - (longlong)param_1);
      lVar15 = uVar8 + (longlong)param_1 * 4;
      param_1 = (void *)0x0;
      do {
        *(undefined4 *)(lVar3 + (longlong)param_1 * 4) =
             *(undefined4 *)(lVar15 + (longlong)param_1 * 4);
        *(undefined4 *)(lVar3 + 4 + (longlong)param_1 * 4) =
             *(undefined4 *)(lVar15 + 4 + (longlong)param_1 * 4);
        *(undefined4 *)(lVar3 + 8 + (longlong)param_1 * 4) =
             *(undefined4 *)(lVar15 + 8 + (longlong)param_1 * 4);
        *(undefined4 *)(lVar3 + 0xc + (longlong)param_1 * 4) =
             *(undefined4 *)(lVar15 + 0xc + (longlong)param_1 * 4);
        param_1 = (void *)((longlong)param_1 + 4);
      } while (pvVar18 != param_1);
      uVar10 = uVar10 + (longlong)param_1;
    }
  }
LAB_015c7b77:
  if ((int)(uint)uVar10 < iVar6) {
    _memset_pattern16(param_1,(void *)((ulonglong)(iVar6 + ~(uint)uVar10) * 4 + 4),param_3);
  }
  FUN_00e83070();
  return *(longlong *)(this + 0x80);
}




// ==================================================
// @015c9600 (626 bytes) — math_loop

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong this;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  
  lVar10 = *(longlong *)(this + 0x38);
  if ((((lVar10 == 0) || (lVar2 = *(longlong *)(this + 0x18), lVar2 == 0)) ||
      (*(longlong *)(lVar2 + 0x38) == 0)) ||
     (((*(longlong *)(this + 0x30) == 0 || (*(longlong *)(lVar2 + 0x28) == 0)) ||
      (*(longlong *)(lVar2 + 0x30) == 0)))) {
    uVar11 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
      lVar10 = *(longlong *)(this + 0x38);
    }
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    lVar3 = *(longlong *)(*(longlong *)(this + 0x18) + 0x38);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_00d237a0();
    iVar6 = FUN_00d237a0();
    iVar7 = FUN_00d237a0();
    iVar8 = FUN_00d237a0();
    uVar12 = extraout_XMM0_Da;
    while (iVar9 = *(int *)(lVar10 + 0xc), iVar7 + 1 < iVar9) {
      uVar12 = FUN_00d23740();
    }
    if (0 < iVar8) {
      do {
        uVar12 = FUN_00d23620();
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar9 = *(int *)(lVar10 + 0xc);
    }
    FUN_00d214d0(uVar12,iVar9);
    *(undefined8 *)(this + 0x30) =
         *(undefined8 *)(*(longlong *)(lVar10 + 0x10) + (longlong)((iVar7 + 1 + iVar5) - iVar6) * 8)
    ;
    lVar4 = *(longlong *)(this + 0x18);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(lVar4 + 0x48);
    fVar1 = *(float *)(lVar4 + 0x54);
    if (*(float *)(this + 0x54) <= fVar1 && fVar1 != *(float *)(this + 0x54)) {
      *(float *)(this + 0x54) = fVar1;
    }
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(*(longlong *)(this + 0x18) + 0x20) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    if (lVar2 != 0) {
      *(longlong *)(this + 0x18) = lVar2;
      *(longlong *)(lVar2 + 0x20) = this;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar11 & 0xffffffff;
}




// ==================================================
// @015c7140 (515 bytes) — math_loop

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong arg1;
  longlong lVar18;
  longlong *this;
  longlong lVar19;
  ulonglong uVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  longlong local_30;
  char local_28;
  
  lVar17 = *(longlong *)(arg1 + 0x68);
  if (lVar17 != 0) goto LAB_015c7309;
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar17 = *(longlong *)(arg1 + 0x68);
  if (lVar17 == local_30) {
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(arg1 + 0x68) = local_30;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
  iVar15 = _UNK_023de2dc;
  iVar14 = _UNK_023de2d8;
  iVar13 = _UNK_023de2d4;
  iVar12 = _DAT_023de2d0;
  iVar11 = _UNK_023de2cc;
  iVar10 = _UNK_023de2c8;
  iVar9 = _UNK_023de2c4;
  iVar8 = _DAT_023de2c0;
  iVar7 = _UNK_023de2bc;
  iVar6 = _UNK_023de2b8;
  iVar5 = _UNK_023de2b4;
  iVar4 = _DAT_023de2b0;
  iVar29 = _UNK_0239418c;
  iVar27 = _UNK_02394188;
  iVar25 = _UNK_02394184;
  iVar23 = _DAT_02394180;
  uVar2 = *(uint *)(arg1 + 0x24);
  if ((int)uVar2 < 1) {
    lVar17 = *(longlong *)(arg1 + 0x68);
    goto LAB_015c7309;
  }
  fVar21 = DAT_02394278 / *(float *)(arg1 + 0x2c);
  lVar17 = *(longlong *)(arg1 + 0x68);
  lVar3 = *(longlong *)(lVar17 + 0x10);
  if (uVar2 < 8) {
    uVar16 = 0;
  }
  else {
    uVar16 = (ulonglong)(uVar2 & 0xfffffff8);
    uVar20 = (uVar16 - 8 >> 3) + 1;
    iVar22 = _DAT_0238fcc0;
    iVar24 = _UNK_0238fcc4;
    iVar26 = _UNK_0238fcc8;
    iVar28 = _UNK_0238fccc;
    if (uVar16 - 8 == 0) {
      lVar19 = 0;
LAB_015c72c8:
      iVar23 = iVar22 + _DAT_02394180;
      iVar25 = iVar24 + _UNK_02394184;
      iVar27 = iVar26 + _UNK_02394188;
      iVar29 = iVar28 + _UNK_0239418c;
      pfVar1 = (float *)(lVar3 + lVar19 * 4);
      *pfVar1 = (float)iVar22 * fVar21;
      pfVar1[1] = (float)iVar24 * fVar21;
      pfVar1[2] = (float)iVar26 * fVar21;
      pfVar1[3] = (float)iVar28 * fVar21;
      pfVar1 = (float *)(lVar3 + 0x10 + lVar19 * 4);
      *pfVar1 = (float)iVar23 * fVar21;
      pfVar1[1] = (float)iVar25 * fVar21;
      pfVar1[2] = (float)iVar27 * fVar21;
      pfVar1[3] = (float)iVar29 * fVar21;
    }
    else {
      lVar18 = -(uVar20 & 0xfffffffffffffffe);
      lVar19 = 0;
      do {
        pfVar1 = (float *)(lVar3 + lVar19 * 4);
        *pfVar1 = (float)iVar22 * fVar21;
        pfVar1[1] = (float)iVar24 * fVar21;
        pfVar1[2] = (float)iVar26 * fVar21;
        pfVar1[3] = (float)iVar28 * fVar21;
        pfVar1 = (float *)(lVar3 + 0x10 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar23) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar25) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar27) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar29) * fVar21;
        pfVar1 = (float *)(lVar3 + 0x20 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar4) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar5) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar6) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar7) * fVar21;
        pfVar1 = (float *)(lVar3 + 0x30 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar8) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar9) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar10) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar11) * fVar21;
        lVar19 = lVar19 + 0x10;
        iVar22 = iVar22 + iVar12;
        iVar24 = iVar24 + iVar13;
        iVar26 = iVar26 + iVar14;
        iVar28 = iVar28 + iVar15;
        lVar18 = lVar18 + 2;
      } while (lVar18 != 0);
      if ((uVar20 & 1) != 0) goto LAB_015c72c8;
    }
    if (uVar16 == uVar2) goto LAB_015c7309;
  }
  do {
    *(float *)(lVar3 + uVar16 * 4) = (float)(int)uVar16 * fVar21;
    uVar16 = uVar16 + 1;
  } while (uVar2 != uVar16);
LAB_015c7309:
  *(undefined1 *)(this + 1) = 0;
  if (lVar17 != 0) {
    FUN_00d50b00();
  }
  *this = lVar17;
  *(undefined1 *)(this + 1) = 1;
  return;
}



