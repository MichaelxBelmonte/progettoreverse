// Function: FUN_0138f140
// Address: 0138f140
// Size: 2930 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x0138fb52) */
/* WARNING: Removing unreachable block (ram,0x0138fb71) */
/* WARNING: Removing unreachable block (ram,0x0138fb76) */
/* WARNING: Removing unreachable block (ram,0x0138fb7e) */
/* WARNING: Removing unreachable block (ram,0x0138fb5b) */
/* WARNING: Removing unreachable block (ram,0x0138f406) */
/* WARNING: Removing unreachable block (ram,0x0138f412) */
/* WARNING: Removing unreachable block (ram,0x0138f591) */
/* WARNING: Removing unreachable block (ram,0x0138f59d) */

void FUN_0138f140(longlong param_1)

{
  double dVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  longlong lVar13;
  undefined8 *puVar14;
  pthread_key_t pVar15;
  ulonglong uVar16;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  undefined8 *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined4 local_b0;
  float local_ac;
  longlong local_98;
  char local_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_70;
  byte local_61;
  undefined8 *local_58;
  int local_44;
  pthread_key_t local_38;
  
  lVar13 = *unaff_RSI;
  if (*(int *)(lVar13 + 0xc) < 1) {
    iVar18 = -1;
    iVar17 = 0x7fffffff;
  }
  else {
    iVar17 = 0x7fffffff;
    iVar18 = -1;
    lVar20 = 0;
    do {
      pVar15 = (pthread_key_t)param_1;
      lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar20 * 8);
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar10 = FUN_014c2f20();
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar11 = FUN_014c2f80();
      if (iVar10 < iVar17) {
        iVar17 = iVar10;
      }
      if (iVar18 < iVar11) {
        iVar18 = iVar11;
      }
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
      lVar20 = lVar20 + 1;
      lVar13 = *unaff_RSI;
      param_1 = (longlong)*(int *)(lVar13 + 0xc);
    } while (lVar20 < param_1);
  }
  pcVar7 = DAT_025f14a0;
  if (iVar17 <= iVar18) {
    local_38 = -1000;
    local_d0 = 0;
    local_c0 = 0;
    local_44 = -1000;
    local_c8 = 0;
    local_b8 = 0;
    local_88 = 0;
    bVar6 = false;
    local_80 = 0;
    bVar5 = false;
    local_70 = (undefined8 *)0x0;
    bVar4 = 0;
    local_58 = (undefined8 *)0x0;
    bVar2 = 0;
    local_dc = iVar18;
    do {
      if (0 < *(int *)(lVar13 + 0xc)) {
        uVar16 = (ulonglong)((uint)(1 < iVar17) * 2 - 1);
        lVar20 = 0;
        local_d8 = iVar17 + -1;
        do {
          pVar15 = (pthread_key_t)uVar16;
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar20 * 8);
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c34a0();
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
              goto LAB_0138f420;
            }
LAB_0138f436:
            if (local_98 != 0) goto LAB_0138f43e;
          }
          else {
            if (local_98 == 0) goto LAB_0138f436;
LAB_0138f420:
            if ((!NAN(*(float *)(local_98 + 0x20))) && (!NAN(*(float *)(local_98 + 0x10))))
            goto LAB_0138f436;
            puVar14 = local_58;
            pVar9 = local_38;
            if (iVar17 != local_44) {
              if (local_88 == 0) {
                lVar19 = *(longlong *)(unaff_RDI + 0x1a0);
                if (lVar19 == 0) {
                  FUN_0132d640();
                  lVar19 = *(longlong *)(unaff_RDI + 0x1a0);
                }
                if (lVar19 != 0) {
                  FUN_00d50b00();
                }
                if (lVar19 == local_80) {
                  bVar21 = bVar5;
                  if (lVar19 != 0) {
                    bVar21 = true;
                  }
                  lVar8 = local_80;
                  if ((bVar5) && (bVar21 = bVar5, lVar19 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  bVar21 = true;
                  lVar8 = lVar19;
                  if ((bVar5) && (local_80 != 0)) {
                    FUN_00d50b20();
                  }
                }
                bVar5 = bVar21;
                local_80 = lVar8;
                local_b0 = *(undefined4 *)(local_80 + 0x30);
                local_b8 = (ulonglong)*(uint *)(local_80 + 0x20);
                dVar1 = *(double *)(local_80 + 0x50);
                local_d4 = *(undefined4 *)(local_80 + 0x2c);
                local_61 = *(byte *)(local_80 + 0x5c);
                FUN_00e83120();
                local_88 = local_98;
                if (local_98 == 0) {
                  local_88 = 0;
                }
                else {
                  bVar6 = true;
                  if (local_90 == '\0') {
                    FUN_00d50b00();
                  }
                }
                local_d0 = FUN_00e83da0();
                local_c0 = FUN_00e83010();
                local_c8 = FUN_00e83010();
                local_ac = (float)dVar1;
              }
              if (local_38 != local_d8) {
                puVar14 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar14 = &DAT_025f1488;
                *(undefined8 *)((longlong)puVar14 + 0xc) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x14) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x2c) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x34) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x3c) = 0;
                *(undefined8 *)((longlong)puVar14 + 0x44) = 0;
                puVar14[9] = 0;
                puVar14[10] = 0;
                (*pcVar7)();
                if (puVar14 == local_58) {
                  puVar14 = local_58;
                  if (bVar2 == 0) {
                    bVar2 = 1;
                  }
                  else {
                    FUN_00d50b20();
                  }
                }
                else {
                  bVar3 = 1;
                  bVar21 = bVar2 != 0;
                  bVar2 = bVar3;
                  if ((bVar21) && (local_58 != (undefined8 *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                local_58 = puVar14;
                local_190 = *(longlong *)(unaff_RDI + 0x38);
                local_188 = '\0';
                local_180 = local_80;
                local_178 = '\0';
                local_170 = 0;
                local_168 = '\0';
                local_160 = local_88;
                local_158 = '\0';
                local_150 = 0;
                local_148 = '\0';
                FUN_015c4d90(0,local_c8,&local_190,&local_180,&local_160,local_d0,local_61 & 1,6,
                             &local_150);
                if ((local_148 != '\0') && (local_150 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_158 != '\0') && (local_160 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_168 != '\0') && (local_170 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_188 != '\0') && (local_190 != 0)) {
                  FUN_00d50b20();
                }
              }
              puVar14 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar14 = &DAT_025f1488;
              *(undefined8 *)((longlong)puVar14 + 0xc) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x14) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x2c) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x34) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x3c) = 0;
              *(undefined8 *)((longlong)puVar14 + 0x44) = 0;
              puVar14[9] = 0;
              puVar14[10] = 0;
              (*pcVar7)();
              if (puVar14 == local_70) {
                puVar14 = local_70;
                if (bVar4 == 0) {
                  local_38 = 1;
                }
                else {
                  FUN_00d50b20();
                  local_38 = (pthread_key_t)bVar4;
                }
              }
              else {
                local_38 = 1;
                if ((bVar4 != 0) && (local_70 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_140 = *(longlong *)(unaff_RDI + 0x38);
              local_138 = '\0';
              local_130 = local_80;
              local_128 = '\0';
              local_120 = local_58;
              local_118 = '\0';
              local_110 = local_88;
              local_108 = '\0';
              local_100 = 0;
              local_f8 = '\0';
              pVar15 = 0;
              FUN_015c4d90(0,local_c8,&local_140,&local_130,&local_110,local_d0,local_61 & 1,0x1e,
                           &local_100);
              if ((local_f8 != '\0') && (local_100 != 0)) {
                FUN_00d50b20();
              }
              if ((local_108 != '\0') && (local_110 != 0)) {
                FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if ((local_138 != '\0') && (local_140 != 0)) {
                FUN_00d50b20();
              }
              FUN_015c6b60();
              FUN_015c66c0();
              FUN_015c6ba0();
              pVar9 = iVar17;
              bVar4 = (byte)local_38;
              if (local_58 == puVar14) {
                local_70 = local_58;
                puVar14 = local_58;
                if ((bVar2 == 0) && (local_70 = local_58, local_58 != (undefined8 *)0x0)) {
                  FUN_00d50b00();
                  local_70 = local_58;
                  bVar2 = 1;
                }
              }
              else {
                if (puVar14 != (undefined8 *)0x0) {
                  FUN_00d50b00();
                }
                bVar21 = bVar2 != 0;
                pVar15 = local_38;
                local_70 = puVar14;
                bVar2 = (byte)local_38;
                if ((bVar21) && (local_58 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            local_38 = pVar9;
            local_58 = puVar14;
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_f0 = local_98;
            local_e8 = '\0';
            FUN_014c3020();
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if (NAN(*(float *)(local_98 + 0x20))) {
              FUN_014eecb0(DAT_0240ded4,local_ac,local_d4);
            }
            local_44 = iVar17;
            if (NAN(*(float *)(local_98 + 0x10))) {
              FUN_014eed60(local_ac,local_b8);
            }
LAB_0138f43e:
            FUN_00d50b20();
          }
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          lVar20 = lVar20 + 1;
          lVar13 = *unaff_RSI;
          uVar16 = (ulonglong)*(int *)(lVar13 + 0xc);
          iVar18 = local_dc;
        } while (lVar20 < (longlong)uVar16);
      }
      lVar19 = local_c8;
      lVar20 = local_d0;
      bVar21 = iVar17 != iVar18;
      iVar17 = iVar17 + 1;
    } while (bVar21);
    if (local_c0 != 0) {
      FUN_00e83070();
    }
    if (lVar19 != 0) {
      FUN_00e83070();
    }
    if (lVar20 != 0) {
      FUN_00e83070();
    }
    if ((bVar2 != 0) && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4 != 0) && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar5) && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


