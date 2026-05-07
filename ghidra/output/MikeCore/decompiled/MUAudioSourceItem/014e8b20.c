// Function: FUN_014e8b20
// Address: 014e8b20
// Size: 4006 bytes
// Class: MUAudioSourceItem


/* WARNING: Removing unreachable block (ram,0x014e9844) */
/* WARNING: Removing unreachable block (ram,0x014e9851) */
/* WARNING: Removing unreachable block (ram,0x014e9a6f) */
/* WARNING: Removing unreachable block (ram,0x014e9a7b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_014e8b20(undefined8 param_1,longlong *param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  void *pvVar11;
  pthread_key_t pVar12;
  code *pcVar13;
  code *pcVar14;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  int local_c0;
  float local_bc;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  undefined8 *local_90;
  float local_74;
  float local_64;
  longlong local_58;
  char local_50;
  
  (**(code **)(*unaff_RSI + 0x378))();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == 0) goto LAB_014e8c44;
  (**(code **)(*unaff_RSI + 0x378))();
  lVar15 = *param_2;
  if (lVar15 == local_58) {
    if (((char)param_2[1] != '\0') || (local_58 == 0)) goto LAB_014e8c30;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_014e8c21;
    }
  }
  else {
    lVar17 = param_2[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_58;
      if (((char)lVar17 != '\0') && (lVar15 != 0)) {
        FUN_00d50b20();
      }
LAB_014e8c21:
      *(undefined1 *)(param_2 + 1) = 1;
LAB_014e8c30:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014e8c44;
    }
    *param_2 = local_58;
    if (((char)lVar17 != '\0') && (lVar15 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(param_2 + 1) = 1;
LAB_014e8c44:
  cVar5 = FUN_014bc070();
  if ((cVar5 == '\0') && (cVar5 = (**(code **)(*unaff_RSI + 1000))(), cVar5 != '\0')) {
    local_98 = FUN_00e83020();
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_025f0d98;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    local_90 = puVar8;
    (*DAT_025f0db0)();
    lVar15 = unaff_RSI[0x21];
    if (*(int *)(lVar15 + 0xc) < 1) {
      bVar4 = false;
      lVar17 = 0;
      bVar3 = false;
      puVar8 = (undefined8 *)0x0;
    }
    else {
      lVar18 = 0;
      puVar8 = (undefined8 *)0x0;
      bVar3 = false;
      lVar17 = 0;
      bVar4 = false;
      do {
        puVar10 = *(undefined8 **)(*(longlong *)(lVar15 + 0x10) + lVar18 * 8);
        if (puVar8 == puVar10) {
          if ((!bVar3) && (puVar8 != (undefined8 *)0x0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (puVar10 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (puVar8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
            bVar3 = true;
            puVar8 = puVar10;
          }
          else {
            bVar3 = true;
            puVar8 = puVar10;
          }
        }
        FUN_014eec80();
        if (local_58 == lVar17) {
          lVar15 = lVar17;
          bVar2 = bVar4;
          if ((!bVar4) && (local_58 != 0)) {
            if (local_50 != '\0') goto LAB_014e8de0;
            FUN_00d50b00();
            bVar2 = true;
          }
joined_r0x014e9060:
          if (lVar15 == 0) goto LAB_014e8dec;
LAB_014e8e45:
          fVar23 = *(float *)(lVar15 + 0xc);
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((((!NAN(fVar23)) &&
               (fVar23 = *(float *)(lVar15 + 0xc) - *(float *)((longlong)puVar8 + 0x14),
               DAT_02390d38 < (float)((uint)fVar23 & _DAT_02390140))) &&
              (uVar6 = (uint)(fVar23 * DAT_02391090 + _DAT_0241e850 + DAT_0239011c), uVar6 < 0x438))
             && (!NAN(*(float *)(puVar8 + 2)))) {
            *(float *)(local_98 + (ulonglong)uVar6 * 4) =
                 *(float *)(puVar8 + 2) * *(float *)(lVar15 + 0x14) +
                 *(float *)(local_98 + (ulonglong)uVar6 * 4);
          }
        }
        else {
          lVar15 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            if ((bVar4) && (lVar17 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x014e9060;
          }
          if ((bVar4) && (lVar17 != 0)) {
            FUN_00d50b20();
          }
LAB_014e8de0:
          local_50 = '\0';
          bVar2 = true;
          if (lVar15 != 0) goto LAB_014e8e45;
LAB_014e8dec:
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_014eec80();
        if (local_58 == lVar15) {
          lVar17 = lVar15;
          bVar4 = bVar2;
          if ((!bVar2) && (local_58 != 0)) {
            if (local_50 != '\0') goto LAB_014e8f2f;
            FUN_00d50b00();
            bVar4 = true;
          }
joined_r0x014e907f:
          if (lVar17 == 0) goto LAB_014e8f3e;
LAB_014e8f95:
          fVar23 = *(float *)(lVar17 + 0x10);
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((((!NAN(fVar23)) &&
               (fVar23 = *(float *)(lVar17 + 0x10) - *(float *)((longlong)puVar8 + 0x14),
               DAT_02390d38 < (float)((uint)fVar23 & _DAT_02390140))) &&
              (uVar6 = (uint)((double)fVar23 * DAT_023934c8 + _DAT_0240e4d0 + DAT_023942d0),
              uVar6 < 0x438)) && (!NAN(*(float *)(puVar8 + 2)))) {
            *(float *)(local_98 + (ulonglong)uVar6 * 4) =
                 *(float *)(puVar8 + 2) * *(float *)(lVar17 + 0x18) +
                 *(float *)(local_98 + (ulonglong)uVar6 * 4);
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            bVar4 = true;
            lVar17 = local_58;
            if ((bVar2) && (lVar15 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x014e907f;
          }
          lVar17 = local_58;
          if ((bVar2) && (lVar15 != 0)) {
            FUN_00d50b20();
          }
LAB_014e8f2f:
          local_50 = '\0';
          bVar4 = true;
          if (lVar17 != 0) goto LAB_014e8f95;
LAB_014e8f3e:
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar18 = lVar18 + 1;
        lVar15 = unaff_RSI[0x21];
      } while (lVar18 < *(int *)(lVar15 + 0xc));
    }
    FUN_015c1480(DAT_023908e0,0x438);
    FUN_015b32a0(DAT_02391074,&local_c0);
    lVar15 = unaff_RSI[0x21];
    if (*(int *)(lVar15 + 0xc) < 1) {
      bVar2 = false;
      pcVar9 = (code *)0x0;
    }
    else {
      fVar19 = (float)(local_c0 + -0x168) * DAT_023908ec;
      lVar18 = 0;
      fVar21 = 0.0;
      fVar23 = 0.0;
      local_64 = 0.0;
      local_74 = 0.0;
      do {
        puVar10 = *(undefined8 **)(*(longlong *)(lVar15 + 0x10) + lVar18 * 8);
        if (puVar8 == puVar10) {
          if ((!bVar3) && (puVar8 != (undefined8 *)0x0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (puVar10 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (puVar8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
            bVar3 = true;
            puVar8 = puVar10;
          }
          else {
            bVar3 = true;
            puVar8 = puVar10;
          }
        }
        fVar20 = *(float *)(puVar8 + 2) + DAT_02390118;
        if ((!NAN(*(float *)(puVar8 + 2))) && (DAT_0239424c < fVar20)) {
          fVar1 = *(float *)((longlong)puVar8 + 0x14);
          local_b8 = fVar20;
          FUN_014eec80();
          if (local_58 == lVar17) {
            lVar15 = lVar17;
            bVar2 = bVar4;
            if ((!bVar4) && (local_58 != 0)) {
              if (local_50 != '\0') goto LAB_014e9294;
              FUN_00d50b00();
              bVar2 = true;
            }
          }
          else {
            lVar15 = local_58;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              bVar2 = true;
              if ((bVar4) && (lVar17 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((bVar4) && (lVar17 != 0)) {
                FUN_00d50b20();
              }
LAB_014e9294:
              local_50 = '\0';
              bVar2 = true;
            }
          }
          if (lVar15 == 0) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            fVar20 = *(float *)(lVar15 + 0xc);
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (!NAN(fVar20)) {
              fVar20 = (float)((uint)(*(float *)(lVar15 + 0xc) - fVar1) & _DAT_02390140);
              if (fVar20 < DAT_023908e0) {
                local_74 = local_74 +
                           (DAT_023908e0 - fVar20) * DAT_02394254 * *(float *)(lVar15 + 0x14) *
                           local_b8;
                fVar23 = fVar23 + local_b8;
              }
              fVar20 = (float)((uint)(*(float *)(lVar15 + 0xc) - (fVar19 + fVar1)) & _DAT_02390140);
              if (fVar20 < DAT_023908e0) {
                local_64 = local_64 +
                           (DAT_023908e0 - fVar20) * DAT_02394254 * *(float *)(lVar15 + 0x14) *
                           local_b8;
                fVar21 = fVar21 + local_b8;
              }
            }
          }
          FUN_014eec80();
          if (local_58 == lVar15) {
            lVar17 = lVar15;
            bVar4 = bVar2;
            if ((!bVar2) && (local_58 != 0)) {
              if (local_50 != '\0') goto LAB_014e943c;
              FUN_00d50b00();
              bVar4 = true;
            }
          }
          else {
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              lVar17 = local_58;
              if ((bVar2) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              lVar17 = local_58;
              if ((bVar2) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
LAB_014e943c:
              local_50 = '\0';
            }
            bVar4 = true;
          }
          if (lVar17 == 0) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            lVar17 = 0;
          }
          else {
            local_bc = *(float *)(lVar17 + 0x10);
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (!NAN(local_bc)) {
              fVar20 = (float)((uint)(*(float *)(lVar17 + 0x10) - fVar1) & _DAT_02390140);
              if (fVar20 < DAT_023908e0) {
                local_74 = local_74 +
                           (DAT_023908e0 - fVar20) * DAT_02394254 * *(float *)(lVar17 + 0x18) *
                           local_b8;
                fVar23 = fVar23 + local_b8;
              }
              fVar20 = (float)((uint)(*(float *)(lVar17 + 0x10) - (fVar19 + fVar1)) & _DAT_02390140)
              ;
              if (fVar20 < DAT_023908e0) {
                local_64 = local_64 +
                           (DAT_023908e0 - fVar20) * DAT_02394254 * *(float *)(lVar17 + 0x18) *
                           local_b8;
                fVar21 = fVar21 + local_b8;
              }
            }
          }
        }
        lVar18 = lVar18 + 1;
        lVar15 = unaff_RSI[0x21];
      } while (lVar18 < *(int *)(lVar15 + 0xc));
      pcVar9 = (code *)0x0;
      bVar2 = false;
      if ((0.0 < fVar23) && (0.0 < fVar21)) {
        uVar22 = _powf((local_64 / fVar21) / (local_74 / fVar23),DAT_023908d8);
        pcVar9 = (code *)FUN_00e8fc40();
        FUN_010fe5f0();
        (**(code **)(*(longlong *)pcVar9 + 0x18))();
        puVar10 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar10 = &DAT_02572358;
        (*DAT_02572370)();
        pcVar14 = DAT_025e74b8;
        iVar7 = (int)((float)(_DAT_02390140 & (uint)fVar19) + DAT_02394240);
        pcVar13 = (code *)((ulonglong)(longlong)iVar7 >> 0x3f);
        fVar23 = (float)((iVar7 / 100) * 100);
        local_b8 = (float)(~-(uint)(0.0 <= fVar19) & (_DAT_023945e0 ^ (uint)fVar23) |
                          (uint)fVar23 & -(uint)(0.0 <= fVar19));
        uStack_b4 = _UNK_023945e4;
        uStack_b0 = _UNK_023945e8;
        uStack_ac = _UNK_023945ec;
        if (0 < *(int *)(unaff_RSI[0x21] + 0xc)) {
          lVar15 = 0;
          pcVar13 = DAT_025e74b8;
          puVar16 = puVar8;
          do {
            puVar8 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar8 = &DAT_025e74a0;
            *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x14) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x24) = 0;
            *(undefined1 *)((longlong)puVar8 + 0x2c) = 0;
            puVar8[6] = 0;
            puVar8[7] = 0;
            puVar8[8] = 0;
            puVar8[9] = 0;
            puVar8[10] = 0;
            puVar8[0xb] = 0;
            *(undefined4 *)(puVar8 + 0xc) = 0;
            (*pcVar14)();
            if (puVar8 == puVar16) {
              puVar8 = puVar16;
              if (bVar3) {
                FUN_00d50b20();
                bVar2 = bVar3;
              }
              else {
                bVar2 = true;
              }
            }
            else {
              bVar2 = true;
              if (bVar3) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar2;
            lVar18 = *(longlong *)(*(longlong *)(unaff_RSI[0x21] + 0x10) + lVar15 * 8);
            local_a0 = 0;
            if (lVar18 != 0) {
              FUN_00d50b00();
            }
            local_a0 = '\x01';
            local_a8 = lVar18;
            FUN_014ee580();
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            *(float *)((longlong)puVar8 + 0x14) = *(float *)((longlong)puVar8 + 0x14) + local_b8;
            *(float *)(puVar8 + 3) = *(float *)(puVar8 + 3) + local_b8;
            FUN_00d21140();
            lVar15 = lVar15 + 1;
            puVar16 = puVar8;
          } while (lVar15 < *(int *)(unaff_RSI[0x21] + 0xc));
        }
        pvVar11 = _pthread_getspecific((pthread_key_t)pcVar13);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
        }
        FUN_014c2990();
        pvVar11 = _pthread_getspecific((pthread_key_t)pcVar13);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
        }
        (**(code **)(*unaff_RSI + 0x380))();
        FUN_014bb250();
        pvVar11 = _pthread_getspecific((pthread_key_t)pcVar13);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
        }
        (**(code **)(*unaff_RSI + 0x388))();
        FUN_014bb2b0();
        pvVar11 = _pthread_getspecific((pthread_key_t)pcVar13);
        pcVar14 = pcVar9;
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pcVar13 = pcVar9;
          pcVar14 = *(code **)(pcVar9 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8 + 0x20);
        }
        pVar12 = (pthread_key_t)pcVar13;
        fVar23 = (float)(**(code **)(*unaff_RSI + 0x3e0))();
        FUN_00d64850();
        *(float *)(pcVar14 + 0x80) = local_b8 + fVar23;
        FUN_00d64910();
        pvVar11 = _pthread_getspecific(pVar12);
        if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar12 = (pthread_key_t)pcVar9;
        }
        FUN_014bc170(uVar22);
        pvVar11 = _pthread_getspecific(pVar12);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014cfcc0();
        if (puVar10 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        bVar2 = true;
      }
    }
    FUN_00e83070();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar2 && pcVar9 != (code *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = pcVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_90 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((bVar4) && (lVar17 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar3) && (puVar8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return unaff_RDI;
}


