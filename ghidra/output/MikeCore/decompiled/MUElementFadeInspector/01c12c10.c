// Function: FUN_01c12c10
// Address: 01c12c10
// Size: 3736 bytes
// Class: MUElementFadeInspector


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


