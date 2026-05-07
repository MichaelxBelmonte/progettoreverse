// Reconstructed implementation of MUElementFadeInspector
// From MikeCore binary — reverse-engineered pseudocode

#include "MUElementFadeInspector.h"

// ============================================================
// @01c12c10 — 3736 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c13560) */
/* WARNING: Removing unreachable block (ram,0x01c13569) */
/* WARNING: Removing unreachable block (ram,0x01c12eca) */
/* WARNING: Removing unreachable block (ram,0x01c12ed3) */
/* WARNING: Removing unreachable block (ram,0x01c12e94) */
/* WARNING: Removing unreachable block (ram,0x01c12e9d) */
/* WARNING: Removing unreachable block (ram,0x01c134d7) */
/* WARNING: Removing unreachable block (ram,0x01c134df) */
/* WARNING: Removing unreachable block (ram,0x01c134e4) */
/* WARNING: Removing unreachable block (ram,0x01c13500) */
/* WARNING: Removing unreachable block (ram,0x01c1388c) */
/* WARNING: Removing unreachable block (ram,0x01c13895) */
/* WARNING: Removing unreachable block (ram,0x01c12cc4) */
/* WARNING: Removing unreachable block (ram,0x01c12ccd) */
/* WARNING: Removing unreachable block (ram,0x01c12c63) */
/* WARNING: Removing unreachable block (ram,0x01c12c6c) */
/* WARNING: Removing unreachable block (ram,0x01c133c1) */
/* WARNING: Removing unreachable block (ram,0x01c133ce) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c12c10(undefined8 param_1,ulonglong *param_2)

{
  uint *puVar1;
  bool bVar2;
  double dVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong *puVar13;
  byte bVar14;
  pthread_key_t pVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 unaff_RBX;
  undefined7 uVar18;
  ulonglong *unaff_RSI;
  longlong *plVar19;
  bool bVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  ulonglong local_200;
  undefined1 local_1f8;
  undefined1 local_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8;
  undefined1 local_1c8;
  ulonglong local_1c0;
  undefined1 local_1b8;
  undefined1 local_1a8;
  ulonglong local_1a0;
  undefined1 local_198;
  undefined1 local_188;
  ulonglong local_180;
  undefined1 local_178;
  undefined1 local_168;
  ulonglong local_160;
  undefined1 local_158;
  undefined1 local_148;
  ulonglong local_140;
  undefined1 local_138;
  longlong *local_130;
  char local_128;
  double local_120;
  ulonglong local_118;
  char local_110;
  ulonglong local_108;
  char local_100;
  ulonglong local_f8;
  char local_f0;
  ulonglong local_e8;
  char local_e0;
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  char local_c8;
  undefined4 local_c0;
  uint local_bc;
  longlong local_b8;
  char local_b0;
  double local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  uint *local_58;
  longlong *local_50;
  char local_48;
  
  plVar5 = local_50;
  if (*param_2 == 0) {
    uVar17 = 0;
    goto LAB_01c13a94;
  }
  FUN_01a58dc0();
  if (local_50 == (longlong *)0x0) {
    local_c0 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    plVar19 = (longlong *)0x0;
  }
  else {
    plVar19 = local_50;
    if (local_48 == '\0') {
      FUN_00d50b00();
      local_c0 = 0;
    }
    else {
      local_c0 = 0;
    }
  }
  (**(code **)(*plVar19 + 0x7b0))();
  local_a0 = local_50;
  if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *plVar19)
          )();
  if (cVar6 == '\0') {
    uVar17 = 0;
  }
  else {
    iVar9 = FUN_01d3a5a0();
    uVar21 = extraout_XMM0_Da;
    if ((iVar9 == 1) && (iVar9 = FUN_01d3b630(), uVar21 = extraout_XMM0_Da_00, iVar9 == 1)) {
      FUN_01a58dc0();
      (**(code **)(*local_130 + 0xe10))();
      local_b8 = local_d0;
      local_b0 = 0;
      if (local_c8 == '\0') {
        if (local_d0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_c8 = '\0';
      }
      local_b0 = '\x01';
      FUN_00243390();
      if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_50 = (longlong *)*param_2;
      cVar6 = FUN_00d23d70();
      if (cVar6 == '\0') {
        local_50 = (longlong *)*param_2;
        FUN_00d23370(extraout_XMM0_Da_01,0);
      }
      FUN_01d3abf0();
      local_98 = (double)FUN_01e466c0();
      pvVar11 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_120 = (double)FUN_0125a280();
      pvVar11 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a8 = (double)FUN_01264170();
      local_88 = (double)(**(code **)(*plVar19 + 0x930))((float)local_98);
      dVar24 = (double)(**(code **)(*plVar19 + 0x930))((float)local_98);
      pvVar11 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      bVar7 = FUN_012686a0();
      uVar17 = *param_2;
      pvVar11 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar11 != (void *)0x0) {
        uVar17 = *param_2;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          uVar17 = *(ulonglong *)(uVar17 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
        }
      }
      bVar8 = FUN_012686d0();
      iVar9 = FUN_01d3b620();
      pVar15 = (pthread_key_t)param_1;
      if (iVar9 == 2) {
        dVar24 = dVar24 - local_120;
        uVar18 = (undefined7)(uVar17 >> 8);
        if (bVar7 == 0 && bVar8 == 0) {
          if (dVar24 <= local_a8 * DAT_023942d0) {
            local_1e8 = 0;
            local_1e0 = *param_2;
            local_1d8 = 0;
            uVar17 = CONCAT71(uVar18,1);
            FUN_01c13e80(SUB84(local_88,0),&local_1e0);
          }
          else {
            local_200 = *param_2;
            local_1f8 = 0;
            uVar17 = CONCAT71(uVar18,1);
            FUN_01c13e80(SUB84(local_88,0),&local_200);
          }
        }
        else {
          fVar22 = (float)(**(code **)(*plVar19 + 0x938))();
          local_98 = (double)(**(code **)(*plVar19 + 0x930))(fVar22 + DAT_02390d30);
          local_98 = local_98 - dVar24;
          if (bVar7 == 0) {
            uVar17 = CONCAT71(uVar18,1);
            if (bVar8 != 0) {
LAB_01c1390d:
              uVar17 = *param_2;
              pvVar11 = _pthread_getspecific(pVar15);
              if (pvVar11 != (void *)0x0) {
                uVar17 = *param_2;
                lVar12 = FUN_00e8b990();
                if (lVar12 != 0) {
                  uVar17 = *(ulonglong *)
                            (uVar17 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
                }
              }
              dVar3 = (double)FUN_01268260();
              uVar18 = (undefined7)(uVar17 >> 8);
              if ((local_a8 - dVar3) - local_98 <= dVar24) {
                local_188 = 0;
                local_180 = *param_2;
                local_178 = 0;
                uVar17 = CONCAT71(uVar18,1);
                FUN_01c13e80(SUB84(local_88,0),&local_180);
              }
              else {
                uVar17 = CONCAT71(uVar18,1);
                if (bVar7 == 0) {
                  local_168 = 0;
                  local_160 = *param_2;
                  local_158 = 0;
                  FUN_01c13e80(SUB84(local_88,0),&local_160);
                }
              }
            }
          }
          else {
            uVar17 = *param_2;
            pvVar11 = _pthread_getspecific(pVar15);
            if (pvVar11 != (void *)0x0) {
              uVar17 = *param_2;
              lVar12 = FUN_00e8b990();
              if (lVar12 != 0) {
                uVar17 = *(ulonglong *)
                          (uVar17 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8);
              }
            }
            dVar3 = (double)FUN_01268240();
            uVar18 = (undefined7)(uVar17 >> 8);
            if (dVar24 <= dVar3 + local_98) {
              local_1c8 = 0;
              local_1c0 = *param_2;
              local_1b8 = 0;
              uVar17 = CONCAT71(uVar18,1);
              FUN_01c13e80(SUB84(local_88,0),&local_1c0);
            }
            else {
              if (bVar8 != 0) goto LAB_01c1390d;
              local_1a8 = 0;
              local_1a0 = *param_2;
              local_198 = 0;
              uVar17 = CONCAT71(uVar18,1);
              FUN_01c13e80(SUB84(local_88,0),&local_1a0);
            }
          }
        }
      }
      else {
        local_bc = 0;
        fVar22 = extraout_XMM0_Da_02;
        if (bVar8 != 0) {
          pvVar11 = _pthread_getspecific(pVar15);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar24 = (double)FUN_01259520();
          pvVar11 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar3 = (double)FUN_01268260();
          fVar22 = (float)(**(code **)(*plVar19 + 0x938))(SUB84(dVar24 - dVar3,0));
          fVar22 = fVar22 + DAT_023b8b2c;
          local_bc = (uint)(fVar22 <= (float)local_98);
        }
        bVar14 = bVar7 ^ 1 | local_bc != 0;
        pVar15 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar14);
        if (bVar14 == 0) {
          pvVar11 = _pthread_getspecific(pVar15);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar24 = (double)FUN_0125a280();
          pvVar11 = _pthread_getspecific(pVar15);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar3 = (double)FUN_01268240();
          fVar22 = (float)(**(code **)(*plVar19 + 0x938))(SUB84(dVar24 + dVar3,0));
          fVar22 = fVar22 + DAT_02390d30;
          local_bc = (fVar22 < (float)local_98) - 1;
        }
        if ((local_bc == 0 & bVar8 & bVar7) == 1) {
          local_118 = *unaff_RSI;
          local_110 = '\0';
          local_108 = *param_2;
          local_100 = '\0';
          uVar10 = FUN_01a58d30(fVar22,&local_108);
          uVar17 = (ulonglong)uVar10;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01cf74c0();
          bVar20 = local_bc != 0;
          local_a8 = local_a8 * DAT_023942d0;
          local_d8 = ((int)local_bc >> 0x1f) + 6;
          puVar16 = (uint *)0x1;
          if (bVar7 != 0) {
            puVar16 = (uint *)(ulonglong)((uint)(bVar8 ^ 1) * 2);
          }
          local_d4 = (uint)puVar16;
          local_58 = (uint *)0x0;
switchD_01c1365e_caseD_3:
          (**(code **)(*plVar19 + 0x658))();
          uVar17 = *unaff_RSI;
          if ((longlong *)uVar17 == local_50) {
            if (((char)unaff_RSI[1] == '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b00();
              goto LAB_01c13542;
            }
            uVar4 = *unaff_RSI;
          }
          else {
            uVar4 = unaff_RSI[1];
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *unaff_RSI = (ulonglong)local_50;
            if (((char)uVar4 != '\0') && (uVar17 != 0)) {
              FUN_00d50b20();
            }
LAB_01c13542:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            uVar4 = *unaff_RSI;
          }
          if (uVar4 != 0) {
            uVar10 = FUN_01d3a5a0();
            uVar17 = (ulonglong)uVar10;
            if (uVar10 == 6) goto LAB_01c1389a;
            iVar9 = FUN_01d3a5a0();
            pVar15 = (pthread_key_t)puVar16;
            if (iVar9 == 5) {
              FUN_01d3abf0();
              local_88 = (double)FUN_01e466c0();
              pvVar11 = _pthread_getspecific(pVar15);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              puVar13 = (ulonglong *)FUN_00e8b990();
              puVar16 = (uint *)*puVar13;
              cVar6 = (**(code **)(puVar16 + 0xf0))();
              if (cVar6 != '\0') {
                pvVar11 = _pthread_getspecific((pthread_key_t)puVar16);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                puVar13 = (ulonglong *)FUN_00e8b990();
                puVar16 = (uint *)*puVar13;
                (**(code **)(puVar16 + 0xee))();
              }
              bVar2 = (uint)local_58 < 9;
              if (bVar2) {
                puVar16 = &switchD_01c1365e::switchdataD_01c13e54;
                puVar1 = &switchD_01c1365e::switchdataD_01c13e54 + (longlong)local_58;
                switch(local_58) {
                case (uint *)0x0:
                  fVar22 = (float)((uint)((float)local_88 - (float)local_98) & _DAT_02390140);
                  fVar25 = (float)((uint)(local_88._4_4_ - local_98._4_4_) & (uint)UNK_02390144);
                  local_58 = (uint *)0x0;
                  if (fVar25 < fVar22) {
                    fVar23 = (float)((uint)(fVar22 - fVar25) & _DAT_02390140);
                    if (DAT_02390124 < fVar23) {
                      local_98 = local_88;
                    }
                    uVar10 = local_d8;
                    if (fVar23 <= DAT_02390124) {
                      uVar10 = 0;
                    }
                    uVar17 = CONCAT71((int7)((ulonglong)
                                             ((longlong)&switchD_01c1365e::switchdataD_01c13e54 +
                                             (longlong)(int)*puVar1) >> 8),
                                      fVar23 <= DAT_02390124 || bVar20) & 0xffffffff;
                    bVar14 = (byte)uVar17 | bVar7 | bVar8;
                    puVar16 = (uint *)CONCAT71((int7)(uVar17 >> 8),bVar14);
                    if (fVar23 > DAT_02390124 && !bVar20) {
                      uVar10 = local_d4;
                    }
                    local_58 = (uint *)(ulonglong)uVar10;
                    if (bVar14 == 0) {
                      dVar24 = (double)(**(code **)(*plVar19 + 0x930))((float)local_88);
                      local_58 = (uint *)(ulonglong)((local_a8 < dVar24 - local_120) + 1);
                      local_98 = local_88;
                    }
                  }
                  if ((fVar22 < fVar25) &&
                     (DAT_02390124 < (float)((uint)(fVar22 - fVar25) & _DAT_02390140))) {
                    if (local_bc != 0) {
                      local_58._0_4_ = 8;
                    }
                    puVar16 = (uint *)(ulonglong)(uint)local_58;
                    if ((int)local_bc < 0) {
                      puVar16 = (uint *)0x7;
                    }
                    local_98 = local_88;
                    local_58 = puVar16;
                  }
                  goto switchD_01c1365e_caseD_3;
                default:
                  dVar24 = (double)(**(code **)(*plVar19 + 0x930))((float)local_88);
                  break;
                case (uint *)0x3:
                case (uint *)0x4:
                  goto switchD_01c1365e_caseD_3;
                case (uint *)0x5:
                  dVar24 = (double)(**(code **)(*plVar19 + 0x930))((float)local_98);
                  uVar21 = (float)local_88;
                  local_88 = dVar24;
                  dVar24 = (double)(**(code **)(*plVar19 + 0x930))(uVar21);
                  goto LAB_01c13709;
                case (uint *)0x6:
                  local_88 = (double)(**(code **)(*plVar19 + 0x930))((float)local_88);
                  dVar24 = (double)(**(code **)(*plVar19 + 0x930))((float)local_98);
LAB_01c13709:
                  dVar24 = local_88 - dVar24;
                  break;
                case (uint *)0x7:
                case (uint *)0x8:
                  fVar22 = (float)(**(code **)(*plVar19 + 3000))();
                  dVar24 = (double)((local_98._4_4_ - local_88._4_4_) * fVar22) * DAT_023934c8;
                }
                if ((dVar24 != DAT_02390448) || (NAN(dVar24) || NAN(DAT_02390448))) {
                  local_148 = 0;
                  local_140 = *param_2;
                  local_138 = 0;
                  puVar16 = local_58;
                  FUN_01c13e80(SUB84(dVar24,0),&local_140);
                }
              }
            }
            goto switchD_01c1365e_caseD_3;
          }
LAB_01c1389a:
          uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
          FUN_01cf74c0();
        }
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_f8 = *unaff_RSI;
      local_f0 = '\0';
      local_e8 = *param_2;
      local_e0 = '\0';
      uVar10 = FUN_01a58d30(uVar21,&local_e8);
      uVar17 = (ulonglong)uVar10;
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_c0 == '\0') {
    FUN_00d50b20();
  }
LAB_01c13a94:
  return uVar17 & 0xffffffff;
}




// ============================================================
// @01c13e80 — 3595 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c141ab) */
/* WARNING: Removing unreachable block (ram,0x01c140d2) */
/* WARNING: Removing unreachable block (ram,0x01c140db) */
/* WARNING: Removing unreachable block (ram,0x01c14103) */
/* WARNING: Removing unreachable block (ram,0x01c1410c) */
/* WARNING: Removing unreachable block (ram,0x01c14162) */
/* WARNING: Removing unreachable block (ram,0x01c14170) */
/* WARNING: Removing unreachable block (ram,0x01c14179) */
/* WARNING: Removing unreachable block (ram,0x01c13f41) */
/* WARNING: Removing unreachable block (ram,0x01c13f4d) */
/* WARNING: Removing unreachable block (ram,0x01c14089) */
/* WARNING: Removing unreachable block (ram,0x01c14092) */
/* WARNING: Removing unreachable block (ram,0x01c141f8) */
/* WARNING: Removing unreachable block (ram,0x01c14201) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c13e80(double param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 in_ECX;
  undefined *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *unaff_RSI;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint *local_b0;
  char local_a8;
  longlong local_68;
  char local_60;
  double local_40;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10 = &DAT_02572358;
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  pvVar7 = _pthread_getspecific((pthread_key_t)puVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_01274b60();
  if (local_a8 == '\0') {
    if (local_b0 == (uint *)0x0) goto LAB_01c13f54;
    FUN_00d50b00();
  }
  else if (local_b0 == (uint *)0x0) {
LAB_01c13f54:
    puVar1 = (uint *)*param_2;
    if (puVar1 != (uint *)0x0) {
      puVar11 = (uint *)(CONCAT71((int7)((ulonglong)uVar8 >> 8),(char)param_2[1]) & 0xffffffff);
      if ((char)param_2[1] != '\0') {
        FUN_00d50b00();
      }
      lVar2 = *unaff_RSI;
      goto joined_r0x01c13f9b;
    }
  }
  puVar11 = (uint *)CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  lVar2 = *unaff_RSI;
  puVar1 = local_b0;
joined_r0x01c13f9b:
  if (lVar2 == 0) {
    bVar3 = false;
    lVar15 = 0;
  }
  else {
    if (*(int *)(lVar2 + 0xc) < 1) {
      bVar3 = false;
      lVar15 = 0;
    }
    else {
      lVar16 = 0;
      lVar15 = 0;
      bVar3 = false;
      puVar12 = puVar11;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar16 * 8);
        pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if ((local_60 == '\0') && (local_68 != 0)) {
          FUN_00d50b00();
        }
        else if ((local_68 == 0) && (lVar9 != 0)) {
          FUN_00d50b00();
          local_68 = lVar9;
        }
        cVar5 = FUN_00d23d70();
        if (cVar5 == '\0') {
          FUN_00d21140();
          dVar17 = param_1;
          if (lVar9 != local_68) {
            pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if (local_68 == lVar15) {
              lVar14 = lVar15;
              bVar4 = bVar3;
              if ((!bVar3) && (local_68 != 0)) {
                FUN_00d50b00();
                bVar4 = true;
              }
            }
            else {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
              bVar4 = true;
              lVar14 = local_68;
              if ((bVar3) && (lVar15 != 0)) {
                FUN_00d50b20();
              }
            }
            bVar3 = bVar4;
            if (lVar14 == 0) {
              lVar15 = 0;
              goto switchD_01c14275_default;
            }
            pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar17 = (double)FUN_012f8e60(param_1);
            lVar15 = lVar14;
          }
          local_40 = param_1;
          if (puVar1 == (uint *)0x0) {
            puVar13 = &switchD_01c142ea::switchdataD_01c14ef4;
            dVar18 = DAT_023908c8;
            switch(in_ECX) {
            case 1:
              goto switchD_01c142ea_caseD_1;
            case 2:
              goto switchD_01c142ea_caseD_2;
            case 3:
              goto switchD_01c14275_caseD_3;
            case 4:
              goto switchD_01c14275_caseD_4;
            case 5:
              goto switchD_01c14275_caseD_5;
            case 6:
              goto switchD_01c14275_caseD_6;
            case 7:
              goto switchD_01c14275_caseD_7;
            case 8:
              goto switchD_01c14275_caseD_8;
            }
          }
          else {
            puVar13 = &switchD_01c14275::switchdataD_01c14ed4;
            switch(in_ECX) {
            case 1:
              pvVar7 = _pthread_getspecific(0x1c14ed4);
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                puVar13 = puVar1;
              }
              dVar19 = (double)FUN_0125a280();
              dVar18 = DAT_023908c8;
              if (dVar19 < dVar17) {
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar13);
                if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  puVar13 = puVar1;
                }
                dVar18 = (double)FUN_0125a280();
                dVar18 = dVar17 - dVar18;
              }
switchD_01c142ea_caseD_1:
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar13);
              puVar12 = puVar13;
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
                puVar12 = puVar13;
              }
              FUN_01267350(dVar18);
              break;
            case 2:
              pvVar7 = _pthread_getspecific(0x1c14ed4);
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                puVar13 = puVar1;
              }
              dVar19 = (double)FUN_01259520();
              dVar18 = DAT_023908c8;
              if (dVar17 < dVar19) {
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar13);
                if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  puVar13 = puVar1;
                }
                dVar18 = (double)FUN_01259520();
                dVar18 = dVar18 - dVar17;
              }
switchD_01c142ea_caseD_2:
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar13);
              puVar12 = puVar13;
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
                puVar12 = puVar13;
              }
              FUN_01267b80(dVar18);
              break;
            case 3:
switchD_01c14275_caseD_3:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01267400(DAT_023908c8);
              break;
            case 4:
switchD_01c14275_caseD_4:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01267c40(DAT_023908c8);
              break;
            case 5:
switchD_01c14275_caseD_5:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686a0();
              if (cVar5 != '\0') {
                if (lVar9 != local_68) {
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar17 = (double)FUN_0125a280();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar18 = (double)FUN_01268240();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar19 = (double)FUN_012f8e60();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_40 = (double)FUN_012f8e60(dVar17 + dVar18 + param_1);
                  local_40 = local_40 - dVar19;
                }
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar17 = (double)FUN_01268240();
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar18 = (double)FUN_0125a280();
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01267400((dVar17 + dVar18) - local_40);
              }
              break;
            case 6:
switchD_01c14275_caseD_6:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686d0();
              if (cVar5 != '\0') {
                if (lVar9 != local_68) {
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar17 = (double)FUN_01259520();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar18 = (double)FUN_01268260();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar19 = (double)FUN_012f8e60();
                  pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_40 = (double)FUN_012f8e60((dVar17 - dVar18) + param_1);
                  local_40 = local_40 - dVar19;
                }
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar17 = (double)FUN_01268260();
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar18 = (double)FUN_01259520();
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01267c40(local_40 + (dVar18 - dVar17));
              }
              break;
            case 7:
switchD_01c14275_caseD_7:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686a0();
              if (cVar5 != '\0') {
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266180();
                dVar17 = (double)_log();
                dVar18 = dVar17 / _DAT_0241e5a8 - param_1;
                dVar17 = DAT_023b3bc0;
                if (dVar18 <= DAT_023b3bc0) {
                  dVar17 = dVar18;
                }
                dVar18 = DAT_0241e5b0;
                if (DAT_0241e5b0 <= dVar17) {
                  dVar18 = dVar17;
                }
                uVar8 = _exp2(dVar18);
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266120(uVar8);
              }
              break;
            case 8:
switchD_01c14275_caseD_8:
              puVar12 = puVar13;
              pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar5 = FUN_012686d0();
              if (cVar5 != '\0') {
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012661f0();
                dVar17 = (double)_log();
                dVar18 = dVar17 / _DAT_0241e5a8 - param_1;
                dVar17 = DAT_023b3bc0;
                if (dVar18 <= DAT_023b3bc0) {
                  dVar17 = dVar18;
                }
                dVar18 = DAT_0241e5b0;
                if (DAT_0241e5b0 <= dVar17) {
                  dVar18 = dVar17;
                }
                uVar8 = _exp2(dVar18);
                pvVar7 = _pthread_getspecific((pthread_key_t)puVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01266190(uVar8);
              }
            }
          }
        }
switchD_01c14275_default:
        local_60 = '\0';
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        lVar16 = lVar16 + 1;
      } while ((int)lVar16 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  if (((char)puVar11 != '\0') && (puVar1 != (uint *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (lVar15 != 0)) {
    FUN_00d50b20();
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c12550 — 583 bytes
// str: ""MUElementFadeInspector""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c126a2) */
/* WARNING: Removing unreachable block (ram,0x01c12694) */
/* WARNING: Removing unreachable block (ram,0x01c126b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c12550(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  
  if ((DAT_027e8ea8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e8df8 = FUN_00335590();
    _DAT_027e8de0 = "MUElementFadeInspector";
    _DAT_027e8de8 = 0xf0;
    _DAT_027e8df0 = FUN_01c15170;
    _DAT_027e8e00 = 0;
    uRam00000000027e8e08 = 0;
    _DAT_027e8e10 = 0;
    _DAT_027e8e88 = 0;
    uRam00000000027e8e90 = 0;
    _DAT_027e8e98 = 0;
    DAT_027e8e9a = 1;
    _DAT_027e8e18 = 0;
    uRam00000000027e8e20 = 0;
    _DAT_027e8e28 = 0;
    uRam00000000027e8e30 = 0;
    _DAT_027e8e38 = 0;
    uRam00000000027e8e40 = 0;
    _DAT_027e8e48 = 0;
    uRam00000000027e8e50 = 0;
    _DAT_027e8e58 = 0;
    uRam00000000027e8e60 = 0;
    _DAT_027e8e68 = 0;
    uRam00000000027e8e70 = 0;
    _DAT_027e8e78 = 0;
    uRam00000000027e8e80 = 0;
    DAT_027e8ea3 = 0;
    _DAT_027e8e9b = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e8e9b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_01c151f0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01928ae0();
    FUN_00e87920(uVar2,0);
    if (local_120 != 0) {
      FUN_00d50b20();
    }
    if (local_128 != 0) {
      FUN_00d50b20();
    }
    if (local_130 != 0) {
      FUN_00d50b20();
    }
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}




// ============================================================
// @01c128c0 — 505 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c128c0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b6300 == 0) || (DAT_028b6309 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e8dd8;
    if (DAT_028b6300 == 0) {
      if (DAT_027e8dd8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b6300;
      if (DAT_028b6300 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b6300 != 0;
        DAT_028b6300 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6308 == '\0')) {
        DAT_028b6308 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b6309 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b6309 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b6300 == 0) {
      lVar3 = 0;
      goto LAB_01c12a79;
    }
  }
  lVar3 = DAT_028b6300;
  FUN_00d50b00();
LAB_01c12a79:
  (**(code **)(*unaff_RDI + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



