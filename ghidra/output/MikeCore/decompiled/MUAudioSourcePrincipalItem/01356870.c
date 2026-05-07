// Function: FUN_01356870
// Address: 01356870
// Size: 8589 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"


/* WARNING: Removing unreachable block (ram,0x0135883f) */
/* WARNING: Removing unreachable block (ram,0x0135884f) */
/* WARNING: Removing unreachable block (ram,0x013589de) */
/* WARNING: Removing unreachable block (ram,0x013589ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01356870(double param_1,undefined4 param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  void *pvVar15;
  longlong lVar16;
  float *pfVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined7 uVar21;
  longlong *plVar20;
  int iVar22;
  pthread_key_t pVar23;
  uint uVar24;
  uint uVar25;
  code *pcVar26;
  code *pcVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  code **ppcVar31;
  ulonglong uVar32;
  longlong unaff_RSI;
  ulonglong uVar33;
  undefined8 *unaff_RDI;
  ulonglong uVar34;
  int iVar35;
  bool bVar36;
  longlong lVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 local_128 [16];
  float local_110;
  ulonglong local_e8;
  uint local_dc;
  uint local_b0;
  int local_ac;
  ulonglong local_a8;
  undefined4 local_94;
  code *local_90;
  char local_88;
  code *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  code *local_60;
  double local_58;
  undefined8 local_50;
  uint local_44;
  code *local_40;
  code *local_38;
  
  local_40 = (code *)CONCAT44(local_40._4_4_,param_2);
  local_58 = param_1;
  iVar10 = FUN_014832c0();
  lVar5 = *(longlong *)(unaff_RSI + 0x1a0);
  if (lVar5 == 0) {
    FUN_0132d640();
    lVar5 = *(longlong *)(unaff_RSI + 0x1a0);
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_50 = (code *)CONCAT44(local_50._4_4_,(float)*(double *)(lVar5 + 0x38));
  if (*(longlong *)(unaff_RSI + 400) == 0) {
    local_ac = (int)(DAT_02394298 / (float)*(double *)(lVar5 + 0x38));
  }
  else {
    local_ac = *(int *)(unaff_RSI + 0x180);
  }
  local_70 = *(longlong **)(lVar5 + 0x50);
  uVar4 = *(undefined4 *)(lVar5 + 0x20);
  uVar2 = *(undefined4 *)(lVar5 + 0x2c);
  iVar11 = FUN_01483610(local_40._0_4_);
  if (iVar11 < 0x32) {
    uVar32 = (ulonglong)(iVar11 + 0x32U);
    iVar29 = (iVar11 - ((int)(iVar11 + 0x32U) >> 0x1f)) + 0x32 >> 1;
    uVar24 = 0;
  }
  else {
    uVar24 = iVar11 - 0x32;
    iVar29 = 0x32;
    uVar32 = 100;
  }
  iVar22 = (int)(local_58 / (double)(float)local_50);
  local_40 = (code *)CONCAT44(local_40._4_4_,iVar22);
  if (iVar10 <= (int)(uVar24 + (int)uVar32)) {
    uVar32 = (ulonglong)(~uVar24 + iVar10);
    iVar29 = (int)(~uVar24 + iVar10) / 2;
  }
  if ((((iVar22 < 0) || (*(int *)(unaff_RSI + 0x88) <= iVar22)) || (iVar11 < 1)) ||
     ((iVar10 + -2 < iVar11 || (iVar10 = (int)uVar32, iVar10 < 10)))) {
    if (*(longlong *)(unaff_RSI + 400) != 0) {
      FUN_00e83070();
      *(undefined8 *)(unaff_RSI + 400) = 0;
    }
    *(undefined8 *)(unaff_RSI + 400) = 0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    local_58 = 0.0;
    pcVar26 = (code *)0x0;
    local_68 = 0;
    pcVar27 = (code *)0x0;
  }
  else {
    lVar13 = FUN_00e83010();
    iVar22 = local_ac / 2;
    iVar11 = (int)local_40._0_4_ - iVar22;
    local_e8 = 0;
    FUN_013593a0(iVar11,0,local_ac,uVar24);
    fVar39 = (float)(double)local_70;
    uVar34 = (longlong)iVar29 - 0xf;
    lVar37 = lVar13 + (longlong)(iVar10 * iVar22) * 4;
    uVar33 = (longlong)iVar29 - 0xe;
    fVar40 = 0.0;
    do {
      if (((-1 < (longlong)uVar34) && ((longlong)uVar34 < (longlong)uVar32)) &&
         (fVar42 = *(float *)(lVar37 + -4 + uVar33 * 4), fVar40 < fVar42)) {
        local_e8 = uVar34 & 0xffffffff;
        fVar40 = fVar42;
      }
      if (((-2 < (longlong)uVar34) && ((longlong)(uVar34 + 1) < (longlong)uVar32)) &&
         (fVar42 = *(float *)(lVar37 + uVar33 * 4), fVar40 < fVar42)) {
        local_e8 = uVar33 & 0xffffffff;
        fVar40 = fVar42;
      }
      uVar33 = uVar33 + 2;
      uVar34 = uVar34 + 2;
    } while (uVar34 != (longlong)(iVar29 + 0xf));
    lVar37 = *(longlong *)(unaff_RSI + 200);
    if (lVar37 != 0) {
      FUN_00d50b00();
    }
    uVar41 = FUN_00352bd0();
    pcVar8 = local_90;
    if (local_88 == '\0') {
      if (((local_90 != (code *)0x0) && (uVar41 = FUN_00d50b00(), local_88 != '\0')) &&
         (local_90 != (code *)0x0)) {
        uVar41 = FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
    }
    if (lVar37 != 0) {
      uVar41 = FUN_00d50b20();
    }
    pcVar27 = *(code **)(unaff_RSI + 0xe8);
    if (pcVar27 != (code *)0x0) {
      uVar41 = FUN_00d50b00();
    }
    local_88 = '\0';
    local_90 = pcVar27;
    FUN_00d214d0(uVar41,*(undefined4 *)(pcVar8 + 0xc));
    if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (pcVar27 != (code *)0x0) {
      FUN_00d50b20();
    }
    uVar41 = FUN_014b2ea0(uVar24);
    local_50 = (code *)CONCAT44(local_50._4_4_,uVar41);
    if (*(int *)(pcVar8 + 0xc) < 1) {
      iVar29 = 0;
      bVar38 = true;
      bVar7 = true;
      local_38 = (code *)0x0;
      local_78 = 0;
      local_60 = (code *)0x0;
      local_a8._0_1_ = '\0';
      local_80 = (code *)0x0;
      local_94._0_1_ = '\0';
    }
    else {
      local_58 = (double)CONCAT44(local_58._4_4_,1000000);
      lVar37 = 0;
      local_38 = (code *)0x0;
      local_78 = 0;
      local_80 = (code *)0x0;
      local_94 = 0;
      do {
        uVar32 = local_78 & 0xffffffff;
        pcVar27 = *(code **)(*(longlong *)(pcVar8 + 0x10) + lVar37 * 8);
        local_90 = pcVar27;
        local_88 = '\0';
        uVar14 = 0;
        pcVar26 = pcVar8;
        if ((DAT_027c0170 == '\0') && (uVar14 = ___cxa_guard_acquire(), (int)uVar14 != 0)) {
          _DAT_02790158 = FUN_007ef2d0();
          _DAT_02790140 = "MUAudioSourcePrincipalItem";
          _DAT_02790148 = 0x138;
          pcVar26 = FUN_010fe5c0;
          _DAT_02790150 = FUN_010fe5c0;
          _DAT_02790160 = 0;
          uRam0000000002790168 = 0;
          _DAT_02790170 = 0;
          uRam0000000002790178 = 0;
          _DAT_02790180 = 0;
          uRam0000000002790188 = 0;
          _DAT_02790190 = 0;
          uRam0000000002790198 = 0;
          _DAT_027901a0 = 0;
          uRam00000000027901a8 = 0;
          _DAT_027901b0 = 0;
          uRam00000000027901b8 = 0;
          _DAT_027901c0 = 0;
          uRam00000000027901c8 = 0;
          _DAT_027901d0 = 0;
          uRam00000000027901d8 = 0;
          _DAT_027901e0 = 0;
          uRam00000000027901e8 = 0;
          _DAT_027901f0 = 0;
          uRam00000000027901f8 = 0;
          _DAT_02790200 = 0;
          uVar14 = ___cxa_guard_release();
        }
        ppcVar31 = (code **)&DAT_02802688;
        if (pcVar27 != (code *)0x0) {
          (**(code **)(*(longlong *)pcVar27 + 0x360))();
          uVar14 = FUN_00e85ea0();
          ppcVar31 = &local_90;
          if ((char)uVar14 == '\0') {
            ppcVar31 = (code **)&DAT_02802688;
          }
        }
        pcVar27 = *ppcVar31;
        cVar9 = (char)uVar32;
        if (pcVar27 == local_38) {
          if ((cVar9 == '\0') && (pcVar27 != (code *)0x0)) {
            pcVar27 = local_38;
            if (*(char *)(ppcVar31 + 1) != '\0') goto LAB_01356db4;
            local_78 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
            FUN_00d50b00();
          }
          else {
            local_78 = uVar32;
          }
        }
        else {
          if (*(char *)(ppcVar31 + 1) == '\0') {
            if (pcVar27 != (code *)0x0) {
              uVar14 = FUN_00d50b00();
            }
            local_78 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
            if ((cVar9 != '\0') && (local_38 != (code *)0x0)) {
              FUN_00d50b20();
              local_38 = pcVar27;
              goto LAB_01356e20;
            }
          }
          else {
            if ((cVar9 != '\0') && (local_38 != (code *)0x0)) {
              uVar14 = FUN_00d50b20();
            }
LAB_01356db4:
            *(undefined1 *)(ppcVar31 + 1) = 0;
            local_78 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
          }
          local_38 = pcVar27;
        }
LAB_01356e20:
        if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38 != (code *)0x0) {
          pvVar15 = _pthread_getspecific((pthread_key_t)pcVar26);
          pVar23 = (pthread_key_t)pcVar26;
          pcVar27 = local_38;
          if (pvVar15 != (void *)0x0) {
            lVar16 = FUN_00e8b990();
            pcVar27 = local_38;
            if (lVar16 != 0) {
              pcVar26 = local_38;
              pcVar27 = *(code **)(local_38 + ((ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4) * 8);
            }
            pVar23 = (pthread_key_t)pcVar26;
          }
          cVar9 = (**(code **)(*(longlong *)pcVar27 + 1000))();
          if (cVar9 != '\0') {
            pvVar15 = _pthread_getspecific(pVar23);
            if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              pVar23 = (pthread_key_t)local_38;
            }
            cVar9 = FUN_014bc070();
            if (cVar9 == '\0') {
              pvVar15 = _pthread_getspecific(pVar23);
              if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pVar23 = (pthread_key_t)local_38;
              }
              iVar29 = FUN_014c2f80();
              if (iVar29 < (int)local_40._0_4_) {
                pvVar15 = _pthread_getspecific(pVar23);
                if (pvVar15 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar29 = FUN_014c2f80();
                uVar24 = (int)local_40._0_4_ - iVar29;
                pcVar27 = (code *)(ulonglong)uVar24;
                if ((int)uVar24 < (int)local_58._0_4_) {
                  pvVar15 = _pthread_getspecific(uVar24);
                  pVar23 = (pthread_key_t)pcVar27;
                  pcVar26 = local_38;
                  if (pvVar15 != (void *)0x0) {
                    lVar16 = FUN_00e8b990();
                    pcVar26 = local_38;
                    if (lVar16 != 0) {
                      pcVar27 = local_38;
                      pcVar26 = *(code **)(local_38 +
                                          ((ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4) * 8);
                    }
                    pVar23 = (pthread_key_t)pcVar27;
                  }
                  fVar40 = (float)(**(code **)(*(longlong *)pcVar26 + 0x3e0))();
                  pcVar27 = local_80;
                  if ((float)((uint)(fVar40 - (float)local_50) & _DAT_02390140) < DAT_02394240) {
                    if (local_80 == local_38) {
                      if (((char)local_78 != '\0') && ((char)local_94 == '\0')) {
                        local_94 = 1;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if ((char)local_78 != '\0') {
                        FUN_00d50b00();
                      }
                      pcVar27 = local_38;
                      bVar38 = (char)local_94 != '\0';
                      local_94 = (int)local_78;
                      if ((bVar38) && (local_80 != (code *)0x0)) {
                        FUN_00d50b20();
                        local_94 = (undefined4)local_78;
                      }
                    }
                    pvVar15 = _pthread_getspecific(pVar23);
                    if (pvVar15 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    iVar29 = FUN_014c2f80();
                    local_58 = (double)CONCAT44(local_58._4_4_,(int)local_40._0_4_ - iVar29);
                    local_80 = pcVar27;
                  }
                }
              }
            }
          }
        }
        lVar37 = lVar37 + 1;
      } while (lVar37 < *(int *)(pcVar8 + 0xc));
      iVar29 = 0;
      if (*(int *)(pcVar8 + 0xc) < 1) {
        local_60 = (code *)0x0;
        pcVar27 = (code *)0x0;
        cVar9 = '\0';
      }
      else {
        local_58 = (double)CONCAT44(local_58._4_4_,1000000);
        lVar37 = 0;
        local_60 = (code *)0x0;
        local_a8 = 0;
        do {
          uVar32 = local_78 & 0xffffffff;
          pcVar27 = *(code **)(*(longlong *)(pcVar8 + 0x10) + lVar37 * 8);
          local_90 = pcVar27;
          local_88 = '\0';
          uVar14 = 0;
          pcVar26 = pcVar8;
          if ((DAT_027c0170 == '\0') && (uVar14 = ___cxa_guard_acquire(), (int)uVar14 != 0)) {
            _DAT_02790158 = FUN_007ef2d0();
            _DAT_02790140 = "MUAudioSourcePrincipalItem";
            _DAT_02790148 = 0x138;
            pcVar26 = FUN_010fe5c0;
            _DAT_02790150 = FUN_010fe5c0;
            _DAT_02790160 = 0;
            uRam0000000002790168 = 0;
            _DAT_02790170 = 0;
            uRam0000000002790178 = 0;
            _DAT_02790180 = 0;
            uRam0000000002790188 = 0;
            _DAT_02790190 = 0;
            uRam0000000002790198 = 0;
            _DAT_027901a0 = 0;
            uRam00000000027901a8 = 0;
            _DAT_027901b0 = 0;
            uRam00000000027901b8 = 0;
            _DAT_027901c0 = 0;
            uRam00000000027901c8 = 0;
            _DAT_027901d0 = 0;
            uRam00000000027901d8 = 0;
            _DAT_027901e0 = 0;
            uRam00000000027901e8 = 0;
            _DAT_027901f0 = 0;
            uRam00000000027901f8 = 0;
            _DAT_02790200 = 0;
            uVar14 = ___cxa_guard_release();
          }
          ppcVar31 = (code **)&DAT_02802688;
          if (pcVar27 != (code *)0x0) {
            (**(code **)(*(longlong *)pcVar27 + 0x360))();
            uVar14 = FUN_00e85ea0();
            ppcVar31 = &local_90;
            if ((char)uVar14 == '\0') {
              ppcVar31 = (code **)&DAT_02802688;
            }
          }
          pcVar27 = *ppcVar31;
          cVar9 = (char)uVar32;
          if (pcVar27 == local_38) {
            if ((cVar9 == '\0') && (pcVar27 != (code *)0x0)) {
              pcVar27 = local_38;
              if (*(char *)(ppcVar31 + 1) != '\0') goto LAB_01357314;
              local_78 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
              FUN_00d50b00();
            }
            else {
              local_78 = uVar32;
            }
          }
          else {
            if (*(char *)(ppcVar31 + 1) == '\0') {
              if (pcVar27 != (code *)0x0) {
                uVar14 = FUN_00d50b00();
              }
              local_78 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
              if ((cVar9 != '\0') && (local_38 != (code *)0x0)) {
                FUN_00d50b20();
                local_38 = pcVar27;
                goto LAB_01357380;
              }
            }
            else {
              if ((cVar9 != '\0') && (local_38 != (code *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
LAB_01357314:
              *(undefined1 *)(ppcVar31 + 1) = 0;
              local_78 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
            }
            local_38 = pcVar27;
          }
LAB_01357380:
          if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if (local_38 != (code *)0x0) {
            pvVar15 = _pthread_getspecific((pthread_key_t)pcVar26);
            pcVar27 = local_38;
            if ((pvVar15 != (void *)0x0) &&
               (lVar16 = FUN_00e8b990(), pcVar27 = local_38, lVar16 != 0)) {
              pcVar26 = local_38;
              pcVar27 = *(code **)(local_38 + ((ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4) * 8);
            }
            cVar9 = (**(code **)(*(longlong *)pcVar27 + 1000))();
            if (cVar9 != '\0') {
              pvVar15 = _pthread_getspecific((pthread_key_t)pcVar26);
              if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pcVar26 = local_38;
              }
              cVar9 = FUN_014bc070();
              if (cVar9 == '\0') {
                pvVar15 = _pthread_getspecific((pthread_key_t)pcVar26);
                if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  pcVar26 = local_38;
                }
                iVar12 = FUN_014c2f20();
                if ((int)local_40._0_4_ < iVar12) {
                  pvVar15 = _pthread_getspecific((pthread_key_t)pcVar26);
                  if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                    pcVar26 = local_38;
                  }
                  iVar12 = FUN_014c2f20();
                  if (iVar12 - (int)local_40._0_4_ < (int)local_58._0_4_) {
                    pvVar15 = _pthread_getspecific((pthread_key_t)pcVar26);
                    pVar23 = (pthread_key_t)pcVar26;
                    pcVar27 = local_38;
                    if (pvVar15 != (void *)0x0) {
                      lVar16 = FUN_00e8b990();
                      pcVar27 = local_38;
                      if (lVar16 != 0) {
                        pcVar26 = local_38;
                        pcVar27 = *(code **)(local_38 +
                                            ((ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4) * 8);
                      }
                      pVar23 = (pthread_key_t)pcVar26;
                    }
                    fVar40 = (float)(**(code **)(*(longlong *)pcVar27 + 0x3e0))();
                    pcVar27 = local_60;
                    if ((float)((uint)(fVar40 - (float)local_50) & _DAT_02390140) < DAT_02394240) {
                      if (local_60 == local_38) {
                        uVar32 = local_a8;
                        if (((char)local_78 != '\0') && ((char)local_a8 == '\0')) {
                          uVar32 = 1;
                          FUN_00d50b00();
                        }
                      }
                      else {
                        if ((char)local_78 != '\0') {
                          FUN_00d50b00();
                        }
                        pcVar27 = local_38;
                        uVar32 = local_78;
                        if (((char)local_a8 != '\0') && (local_60 != (code *)0x0)) {
                          FUN_00d50b20();
                          uVar32 = local_78;
                        }
                      }
                      pvVar15 = _pthread_getspecific(pVar23);
                      if (pvVar15 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      iVar12 = FUN_014c2f20();
                      local_58 = (double)CONCAT44(local_58._4_4_,iVar12 - (int)local_40._0_4_);
                      local_a8 = uVar32;
                      local_60 = pcVar27;
                    }
                  }
                }
              }
            }
          }
          cVar9 = (char)local_a8;
          lVar37 = lVar37 + 1;
          local_a8 = local_a8 & 0xffffffff;
          pcVar27 = pcVar8;
        } while (lVar37 < *(int *)(pcVar8 + 0xc));
      }
      local_a8._0_1_ = cVar9;
      pVar23 = (pthread_key_t)pcVar27;
      bVar38 = true;
      bVar7 = true;
      if (local_80 != (code *)0x0) {
        pvVar15 = _pthread_getspecific(pVar23);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar12 = FUN_014c2f80();
        bVar7 = false;
        pcVar27 = (code *)0x0;
        pVar23 = 0;
        iVar29 = 0;
        if (iVar11 <= iVar12) {
          pvVar15 = _pthread_getspecific(0);
          if ((pvVar15 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
            pcVar27 = local_80;
          }
          pVar23 = (pthread_key_t)pcVar27;
          iVar29 = FUN_014c2f80();
          iVar29 = (iVar29 - iVar11) + 1;
          bVar7 = false;
        }
      }
      if (local_60 == (code *)0x0) {
        local_60 = (code *)0x0;
      }
      else {
        pvVar15 = _pthread_getspecific(pVar23);
        if ((pvVar15 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
          pVar23 = (pthread_key_t)local_60;
        }
        iVar12 = FUN_014c2f20();
        if (iVar12 - iVar11 < local_ac) {
          pvVar15 = _pthread_getspecific(pVar23);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_ac = FUN_014c2f20();
          local_ac = local_ac - iVar11;
        }
        bVar38 = false;
      }
    }
    pfVar17 = (float *)FUN_00e83da0();
    *pfVar17 = *pfVar17 * *pfVar17;
    pfVar17[1] = pfVar17[1] * pfVar17[1];
    pfVar17[2] = pfVar17[2] * pfVar17[2];
    pfVar17[3] = pfVar17[3] * pfVar17[3];
    pfVar17[4] = pfVar17[4] * pfVar17[4];
    pfVar17[5] = pfVar17[5] * pfVar17[5];
    pfVar17[6] = pfVar17[6] * pfVar17[6];
    pfVar17[7] = pfVar17[7] * pfVar17[7];
    pfVar17[8] = pfVar17[8] * pfVar17[8];
    pfVar17[9] = pfVar17[9] * pfVar17[9];
    pfVar17[10] = pfVar17[10] * pfVar17[10];
    pfVar17[0xb] = pfVar17[0xb] * pfVar17[0xb];
    puVar18 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar18 = &DAT_02572358;
    local_40 = DAT_02572370;
    (*DAT_02572370)();
    puVar19 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar19 = &DAT_02572358;
    (*local_40)();
    local_58 = 0.0;
    local_40 = (code *)0x0;
    local_68 = 0;
    local_70 = (longlong *)0x0;
    uVar41 = FUN_00d216c0();
    uVar14 = FUN_014ee9e0(uVar41,local_e8);
    pcVar27 = local_90;
    if (local_90 == (code *)0x0) {
      pcVar27 = (code *)0x0;
      local_68 = 0;
    }
    else {
      local_68 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
      if (((local_88 == '\0') && (FUN_00d50b00(), local_88 != '\0')) && (local_90 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_88 = '\0';
    local_90 = pcVar27;
    FUN_00d21140();
    if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
      FUN_00d50b20();
    }
    fVar40 = *(float *)(lVar13 + (longlong)(iVar10 * iVar22 + (int)local_e8) * 4);
    local_58 = 0.0;
    local_40 = (code *)0x0;
    local_70 = (longlong *)0x0;
    FUN_00d216c0();
    fVar42 = DAT_02390d2c * fVar40;
    local_128 = ZEXT416((uint)(DAT_023b81d4 * fVar40));
    bVar36 = iVar29 < iVar22;
    iVar12 = iVar10 + -2;
    uVar24 = iVar22 + 1;
    iVar28 = -1;
    local_44 = (uint)local_68;
    bVar6 = false;
    local_b0 = iVar22 - 1;
    do {
      iVar22 = iVar10 * local_b0;
      local_dc = 0;
      local_58 = (double)CONCAT44(local_58._4_4_,fVar40);
      uVar32 = local_e8;
      fVar43 = fVar42;
      local_110 = fVar40;
      do {
        pcVar26 = local_40;
        uVar30 = (uint)uVar32;
        uVar34 = 7;
        if ((int)uVar30 < 8) {
          uVar30 = 7;
        }
        uVar33 = (ulonglong)local_40 >> 0x20;
        local_40 = (code *)(uVar33 << 0x20);
        if (bVar36) {
          uVar25 = uVar30 - 6;
          uVar34 = (ulonglong)uVar25;
          uVar32 = 0;
          if ((int)uVar25 < iVar12) {
            lVar37 = lVar13 + (longlong)iVar22 * 4;
            fVar3 = *(float *)(lVar37 + uVar34 * 4);
            uVar32 = 0;
            local_40 = (code *)(uVar33 << 0x20);
            pfVar1 = (float *)(lVar37 + (ulonglong)(uVar30 - 7) * 4);
            if ((fVar3 < *pfVar1 || fVar3 == *pfVar1) ||
               (fVar3 < *(float *)(lVar37 + 4 + uVar34 * 4))) {
              fVar44 = 0.0;
            }
            else {
              local_40 = (code *)(uVar33 << 0x20);
              fVar44 = 0.0;
              if (0.0 < *pfVar17 * fVar3) {
                local_40._4_4_ = SUB84(pcVar26,4);
                local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                uVar32 = (ulonglong)uVar25;
                fVar44 = *pfVar17 * fVar3;
              }
            }
            if ((int)(uVar30 - 5) < iVar12) {
              fVar3 = *(float *)(lVar37 + 4 + uVar34 * 4);
              pfVar1 = (float *)(lVar37 + uVar34 * 4);
              if (((*pfVar1 <= fVar3 && fVar3 != *pfVar1) &&
                  (*(float *)(lVar37 + 8 + uVar34 * 4) <= fVar3)) && (fVar44 < pfVar17[1] * fVar3))
              {
                local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                uVar32 = (ulonglong)(uVar30 - 5);
                fVar44 = pfVar17[1] * fVar3;
              }
              if ((int)(uVar30 - 4) < iVar12) {
                fVar3 = *(float *)(lVar37 + 8 + uVar34 * 4);
                pfVar1 = (float *)(lVar37 + (ulonglong)(uVar30 - 5) * 4);
                if (((*pfVar1 <= fVar3 && fVar3 != *pfVar1) &&
                    (*(float *)(lVar37 + 0xc + uVar34 * 4) <= fVar3)) &&
                   (fVar44 < pfVar17[2] * fVar3)) {
                  local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                  uVar32 = (ulonglong)(uVar30 - 4);
                  fVar44 = pfVar17[2] * fVar3;
                }
                if ((int)(uVar30 - 3) < iVar12) {
                  fVar3 = *(float *)(lVar37 + 0xc + uVar34 * 4);
                  pfVar1 = (float *)(lVar37 + (ulonglong)(uVar30 - 4) * 4);
                  if (((*pfVar1 <= fVar3 && fVar3 != *pfVar1) &&
                      (*(float *)(lVar37 + 0x10 + uVar34 * 4) <= fVar3)) &&
                     (fVar44 < pfVar17[3] * fVar3)) {
                    local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                    uVar32 = (ulonglong)(uVar30 - 3);
                    fVar44 = pfVar17[3] * fVar3;
                  }
                  if ((int)(uVar30 - 2) < iVar12) {
                    fVar3 = *(float *)(lVar37 + 0x10 + uVar34 * 4);
                    pfVar1 = (float *)(lVar37 + (ulonglong)(uVar30 - 3) * 4);
                    if (((*pfVar1 <= fVar3 && fVar3 != *pfVar1) &&
                        (*(float *)(lVar37 + 0x14 + uVar34 * 4) <= fVar3)) &&
                       (fVar44 < pfVar17[4] * fVar3)) {
                      local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                      uVar32 = (ulonglong)(uVar30 - 2);
                      fVar44 = pfVar17[4] * fVar3;
                    }
                    if ((int)(uVar30 - 1) < iVar12) {
                      fVar3 = *(float *)(lVar37 + 0x14 + uVar34 * 4);
                      pfVar1 = (float *)(lVar37 + (ulonglong)(uVar30 - 2) * 4);
                      if (((*pfVar1 <= fVar3 && fVar3 != *pfVar1) &&
                          (*(float *)(lVar37 + 0x18 + uVar34 * 4) <= fVar3)) &&
                         (fVar44 < pfVar17[5] * fVar3)) {
                        local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                        uVar32 = (ulonglong)(uVar30 - 1);
                        fVar44 = pfVar17[5] * fVar3;
                      }
                      if ((int)uVar30 < iVar12) {
                        fVar3 = *(float *)(lVar37 + 0x18 + uVar34 * 4);
                        pfVar1 = (float *)(lVar37 + (ulonglong)(uVar30 - 1) * 4);
                        if (((*pfVar1 <= fVar3 && fVar3 != *pfVar1) &&
                            (*(float *)(lVar37 + 0x1c + uVar34 * 4) <= fVar3)) &&
                           (fVar44 < pfVar17[6] * fVar3)) {
                          local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                          uVar32 = (ulonglong)uVar30;
                          fVar44 = pfVar17[6] * fVar3;
                        }
                        uVar25 = uVar30 + 1;
                        if (0 < (int)uVar25) {
                          if (iVar12 <= (int)uVar25) goto LAB_01358012;
                          fVar3 = *(float *)(lVar37 + 0x1c + uVar34 * 4);
                          pfVar1 = (float *)(lVar37 + (ulonglong)uVar30 * 4);
                          if (((*pfVar1 <= fVar3 && fVar3 != *pfVar1) &&
                              (*(float *)(lVar37 + 0x20 + uVar34 * 4) <= fVar3)) &&
                             (fVar44 < pfVar17[7] * fVar3)) {
                            local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                            uVar32 = (ulonglong)uVar25;
                            fVar44 = pfVar17[7] * fVar3;
                          }
                        }
                        uVar25 = uVar30 + 2;
                        if (0 < (int)uVar25) {
                          if (iVar12 <= (int)uVar25) goto LAB_01358012;
                          fVar3 = *(float *)(lVar37 + 0x20 + uVar34 * 4);
                          pfVar1 = (float *)(lVar37 + 4 + (ulonglong)uVar30 * 4);
                          if (((*pfVar1 <= fVar3 && fVar3 != *pfVar1) &&
                              (*(float *)(lVar37 + 0x24 + uVar34 * 4) <= fVar3)) &&
                             (fVar44 < pfVar17[8] * fVar3)) {
                            local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                            uVar32 = (ulonglong)uVar25;
                            fVar44 = pfVar17[8] * fVar3;
                          }
                        }
                        uVar25 = uVar30 + 3;
                        if (0 < (int)uVar25) {
                          if (iVar12 <= (int)uVar25) goto LAB_01358012;
                          fVar3 = *(float *)(lVar37 + 0x24 + uVar34 * 4);
                          pfVar1 = (float *)(lVar37 + 8 + (ulonglong)uVar30 * 4);
                          if (((*pfVar1 <= fVar3 && fVar3 != *pfVar1) &&
                              (*(float *)(lVar37 + 0x28 + uVar34 * 4) <= fVar3)) &&
                             (fVar44 < pfVar17[9] * fVar3)) {
                            local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                            uVar32 = (ulonglong)uVar25;
                            fVar44 = pfVar17[9] * fVar3;
                          }
                        }
                        uVar25 = uVar30 + 4;
                        if (0 < (int)uVar25) {
                          if (iVar12 <= (int)uVar25) goto LAB_01358012;
                          fVar3 = *(float *)(lVar37 + 0x28 + uVar34 * 4);
                          pfVar1 = (float *)(lVar37 + 0xc + (ulonglong)uVar30 * 4);
                          if (((*pfVar1 <= fVar3 && fVar3 != *pfVar1) &&
                              (*(float *)(lVar37 + 0x2c + uVar34 * 4) <= fVar3)) &&
                             (fVar44 < pfVar17[10] * fVar3)) {
                            local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                            uVar32 = (ulonglong)uVar25;
                            fVar44 = pfVar17[10] * fVar3;
                          }
                        }
                        uVar25 = uVar30 + 5;
                        if (((0 < (int)uVar25) && ((int)uVar25 < iVar12)) &&
                           ((fVar3 = *(float *)(lVar37 + 0x2c + uVar34 * 4),
                            pfVar1 = (float *)(lVar37 + 0x10 + (ulonglong)uVar30 * 4),
                            *pfVar1 <= fVar3 && fVar3 != *pfVar1 &&
                            ((*(float *)(lVar37 + 0x30 + uVar34 * 4) <= fVar3 &&
                             (fVar44 < pfVar17[0xb] * fVar3)))))) {
                          local_40 = (code *)CONCAT44(local_40._4_4_,fVar3);
                          uVar32 = (ulonglong)uVar25;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar32 = 0;
        }
LAB_01358012:
        fVar44 = local_40._0_4_ * DAT_02390d2c;
        fVar3 = fVar44;
        if (local_40._0_4_ <= local_58._0_4_) {
          fVar3 = fVar43;
        }
        local_70 = (longlong *)CONCAT44(local_70._4_4_,fVar3);
        auVar45._0_4_ = ~-(uint)(local_58._0_4_ < local_40._0_4_) & local_128._0_4_;
        auVar45._4_4_ = 0;
        auVar45._8_4_ = local_128._8_4_;
        auVar45._12_4_ = local_128._12_4_;
        local_128 = auVar45 | ZEXT416((uint)(local_40._0_4_ * DAT_023b81d4) &
                                      -(uint)(local_58._0_4_ < local_40._0_4_));
        if ((bVar36) && ((int)uVar32 != 0)) {
          iVar35 = *(int *)((longlong)puVar19 + 0xc) + *(int *)((longlong)puVar18 + 0xc);
          if ((((float)local_128._0_4_ < local_40._0_4_) && (local_40._0_4_ < fVar3)) ||
             ((bool)(iVar35 < 10 & bVar6))) {
            local_50 = pcVar27;
            uVar14 = FUN_014ee9e0(uVar34,uVar32);
            pcVar27 = local_90;
            uVar21 = (undefined7)((ulonglong)uVar14 >> 8);
            if (local_90 == local_50) {
              if (((char)local_44 == '\0') && (local_90 != (code *)0x0)) {
                local_68 = CONCAT71(uVar21,1);
                pcVar27 = local_50;
                if (local_88 != '\0') goto LAB_01358204;
                local_68 = CONCAT71(uVar21,1);
                FUN_00d50b00();
                pcVar27 = local_50;
              }
              else {
                local_68 = (ulonglong)local_44;
                pcVar27 = local_50;
              }
joined_r0x013581cf:
              local_50 = pcVar27;
              pcVar27 = local_50;
              if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
                FUN_00d50b20();
                pcVar27 = local_50;
              }
            }
            else {
              if (local_88 == '\0') {
                if (local_90 != (code *)0x0) {
                  uVar14 = FUN_00d50b00();
                }
                local_68 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
                if (((char)local_44 != '\0') && (local_50 != (code *)0x0)) {
                  FUN_00d50b20();
                }
                goto joined_r0x013581cf;
              }
              local_68 = CONCAT71(uVar21,1);
              if (((char)local_44 != '\0') && (local_50 != (code *)0x0)) {
                FUN_00d50b20();
              }
            }
LAB_01358204:
            local_88 = '\0';
            local_90 = pcVar27;
            FUN_00d21140();
            if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
              FUN_00d50b20();
            }
            if (local_40._0_4_ < local_110) {
              local_dc = *(uint *)((longlong)puVar18 + 0xc);
              local_110 = local_40._0_4_;
              local_70 = (longlong *)CONCAT44(local_70._4_4_,fVar44);
            }
            if ((bool)(iVar35 < 10 & bVar6)) {
              local_dc = *(uint *)((longlong)puVar18 + 0xc);
            }
            local_44 = (uint)local_68;
          }
          else {
            bVar36 = false;
          }
        }
        else {
          bVar36 = false;
        }
        fVar43 = local_40._0_4_;
        if (local_40._0_4_ <= local_58._0_4_) {
          fVar43 = local_58._0_4_;
        }
        local_b0 = local_b0 + iVar28;
        uVar34 = (ulonglong)local_b0;
        if ((int)local_b0 < iVar29) {
          bVar36 = false;
        }
        if (local_ac <= (int)local_b0) {
          bVar36 = false;
        }
        iVar22 = iVar22 + iVar10 * iVar28;
        local_58 = (double)CONCAT44(local_58._4_4_,fVar43);
        fVar43 = local_70._0_4_;
      } while (bVar36);
      uVar30 = local_b0;
      if (0 < (int)local_dc) {
        if (bVar6) {
          uVar32 = 0;
          do {
            lVar37 = puVar18[2];
            pcVar26 = *(code **)(lVar37 + uVar32 * 8);
            local_50 = pcVar27;
            if (pcVar27 == pcVar26) {
              if (((char)local_44 == '\0') && (pcVar27 != (code *)0x0)) {
                local_44 = (uint)CONCAT71((int7)((ulonglong)lVar37 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (pcVar26 != (code *)0x0) {
                lVar37 = FUN_00d50b00();
              }
              if (((char)local_44 == '\0') || (local_50 == (code *)0x0)) {
                local_44 = (uint)CONCAT71((int7)((ulonglong)lVar37 >> 8),1);
                local_50 = pcVar26;
              }
              else {
                local_50 = pcVar26;
                uVar14 = FUN_00d50b20();
                local_44 = (uint)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
              }
            }
            pcVar27 = local_50;
            local_90 = local_50;
            local_88 = '\0';
            FUN_00d21140();
            if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
              FUN_00d50b20();
            }
            uVar30 = (uint)uVar34;
            uVar32 = uVar32 + 1;
          } while (local_dc != uVar32);
        }
        else {
          uVar32 = 0;
          do {
            lVar37 = puVar18[2];
            pcVar26 = *(code **)(lVar37 + uVar32 * 8);
            local_50 = pcVar27;
            if (pcVar27 == pcVar26) {
              if (((char)local_44 == '\0') && (pcVar27 != (code *)0x0)) {
                local_44 = (uint)CONCAT71((int7)((ulonglong)lVar37 >> 8),1);
                fVar43 = (float)FUN_00d50b00();
              }
            }
            else {
              if (pcVar26 != (code *)0x0) {
                lVar37 = FUN_00d50b00();
                fVar43 = extraout_XMM0_Da;
              }
              if (((char)local_44 == '\0') || (local_50 == (code *)0x0)) {
                local_44 = (uint)CONCAT71((int7)((ulonglong)lVar37 >> 8),1);
                local_50 = pcVar26;
              }
              else {
                local_50 = pcVar26;
                uVar14 = FUN_00d50b20();
                local_44 = (uint)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
                fVar43 = extraout_XMM0_Da_00;
              }
            }
            pcVar27 = local_50;
            local_90 = local_50;
            local_88 = '\0';
            fVar43 = (float)FUN_00d23370(fVar43,0);
            if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
              fVar43 = (float)FUN_00d50b20();
            }
            uVar30 = (uint)uVar34;
            uVar32 = uVar32 + 1;
          } while (local_dc != uVar32);
        }
      }
      if (bVar6) break;
      FUN_00d216c0();
      iVar28 = 1;
      bVar36 = true;
      bVar6 = true;
      uVar30 = uVar24;
      local_b0 = uVar24;
    } while ((int)uVar24 < local_ac);
    iVar10 = *(int *)((longlong)puVar19 + 0xc);
    if (iVar10 < 4) {
      local_58 = 0.0;
      local_40 = (code *)0x0;
      local_68 = (ulonglong)local_44;
      local_70 = (longlong *)0x0;
    }
    else {
      plVar20 = (longlong *)FUN_00e8fc40();
      FUN_010fe5f0();
      (**(code **)(*plVar20 + 0x18))();
      local_58 = 0.0;
      local_40 = (code *)0x0;
      local_68 = (ulonglong)local_44;
      local_70 = plVar20;
      pvVar15 = _pthread_getspecific(uVar30);
      if (pvVar15 != (void *)0x0) {
        local_58 = 0.0;
        local_40 = (code *)0x0;
        local_68 = (ulonglong)local_44;
        FUN_00e8b990();
      }
      local_58 = 0.0;
      local_40 = (code *)0x0;
      local_68 = (ulonglong)local_44;
      FUN_014bc170(DAT_02394244);
      if (*(int *)((longlong)puVar19 + 0xc) < 1) {
        local_58 = 0.0;
        local_40 = (code *)0x0;
        local_68 = (ulonglong)local_44;
      }
      else {
        lVar37 = 0;
        local_68 = (ulonglong)local_44;
        local_40 = (code *)0x0;
        local_58 = 0.0;
        do {
          lVar13 = puVar19[2];
          pcVar26 = *(code **)(lVar13 + lVar37 * 8);
          if (pcVar27 == pcVar26) {
            if (((char)local_68 == '\0') && (pcVar27 != (code *)0x0)) {
              local_68 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (pcVar26 != (code *)0x0) {
              lVar13 = FUN_00d50b00();
            }
            if (((char)local_68 == '\0') || (pcVar27 == (code *)0x0)) {
              local_68 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
              pcVar27 = pcVar26;
            }
            else {
              uVar14 = FUN_00d50b20();
              local_68 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
              pcVar27 = pcVar26;
            }
          }
          *(int *)(pcVar27 + 0xc) = *(int *)(pcVar27 + 0xc) + iVar11;
          local_50 = pcVar27;
          uVar41 = FUN_014b2ea0();
          *(undefined4 *)(pcVar27 + 0x14) = uVar41;
          lVar13 = *(longlong *)(*(longlong *)(unaff_RSI + 0x198) + 0x10);
          lVar16 = *(longlong *)
                    (lVar13 + (longlong)
                              ((int)(*(int *)(unaff_RSI + 0x188) + local_b0) %
                              *(int *)(unaff_RSI + 0x180)) * 8);
          if (local_40 == (code *)lVar16) {
            if ((local_58._0_1_ == '\0') && (local_40 != (code *)0x0)) {
              local_58 = (double)CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (lVar16 != 0) {
              lVar13 = FUN_00d50b00();
            }
            if ((local_58._0_1_ == '\0') || (local_40 == (code *)0x0)) {
              local_58 = (double)CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
              local_40 = (code *)lVar16;
            }
            else {
              local_40 = (code *)lVar16;
              uVar14 = FUN_00d50b20();
              local_58 = (double)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
            }
          }
          uVar14 = FUN_015c6b60();
          FUN_015c66c0();
          FUN_015c6ba0();
          FUN_014eecb0(DAT_0240ded4,uVar14,uVar2);
          FUN_014eed60(fVar39,uVar4);
          *(ulonglong *)(local_50 + 0x18) =
               *(ulonglong *)(local_50 + 0x10) << 0x20 | *(ulonglong *)(local_50 + 0x10) >> 0x20;
          *(undefined4 *)(local_50 + 0x28) = 0x3dcccccd;
          pvVar15 = _pthread_getspecific((pthread_key_t)local_50);
          if (pvVar15 != (void *)0x0) {
            FUN_00e8b990();
          }
          pcVar27 = local_50;
          FUN_014c2e20();
          lVar37 = lVar37 + 1;
        } while (lVar37 < *(int *)((longlong)puVar19 + 0xc));
      }
      pvVar15 = _pthread_getspecific((pthread_key_t)puVar19);
      if (pvVar15 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (unaff_RSI != 0) {
        FUN_00d50b00();
      }
      FUN_014d1e00();
      if (unaff_RSI != 0) {
        FUN_00d50b20();
      }
      FUN_013293f0();
      FUN_0135b370();
      pcVar26 = local_90;
      if (local_88 == '\0') {
        if (local_90 != (code *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      FUN_0135abc0();
      if (pcVar26 != (code *)0x0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00e83070();
    FUN_00e83070();
    plVar20 = local_70;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((iVar10 < 4) && (local_70 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar20;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    pcVar26 = local_40;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (pcVar8 != (code *)0x0) {
      FUN_00d50b20();
    }
    if ((char)local_a8 != '\0' && !bVar38) {
      FUN_00d50b20();
    }
    if ((char)local_94 != '\0' && !bVar7) {
      FUN_00d50b20();
    }
    if (((char)local_78 != '\0') && (local_38 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_58._0_1_ != '\0') && (pcVar26 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (pcVar27 != (code *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


