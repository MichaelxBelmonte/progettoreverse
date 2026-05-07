// Function: FUN_01ba6160
// Address: 01ba6160
// Size: 3678 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"


/* WARNING: Removing unreachable block (ram,0x01ba66f8) */
/* WARNING: Removing unreachable block (ram,0x01ba6704) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01ba6160(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  pthread_key_t pVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *unaff_RSI;
  longlong *plVar17;
  longlong **pplVar18;
  bool bVar19;
  bool bVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  float fVar22;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  int local_c8;
  pthread_key_t local_c4;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char local_98;
  undefined8 local_90;
  ulonglong local_88;
  float local_6c;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  longlong *local_38;
  
  plVar11 = param_1;
  FUN_01a58dc0();
  pVar12 = (pthread_key_t)plVar11;
  if (local_50 == (longlong *)0x0) {
    bVar4 = 0;
  }
  else {
    FUN_01a58dc0();
    bVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_a0))();
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar4 = bVar4 ^ 1;
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4 != 0) {
    uVar16 = 0;
    goto LAB_01ba6768;
  }
  local_d8 = 0;
  if (*param_2 != 0) {
    FUN_01a58dc0();
    if ((local_50 == (longlong *)0x0) || (iVar6 = FUN_01d3a5a0(), iVar6 != 1)) {
      bVar19 = false;
    }
    else {
      iVar6 = FUN_01d3b630();
      bVar19 = iVar6 == 1;
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar19) {
      pvVar8 = _pthread_getspecific(pVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      local_58 = local_50;
      if (local_50 == (longlong *)0x0) {
        pVar12 = 1;
        local_58 = (longlong *)0x0;
      }
      else {
        if (local_48 == '\0') {
          FUN_00d50b00();
          pVar12 = 0;
          if ((local_48 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_01ba637f;
          FUN_00d50b20();
        }
        pVar12 = 0;
      }
LAB_01ba637f:
      local_c4 = pVar12;
      pvVar8 = _pthread_getspecific(pVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_0125e7c0();
      plVar11 = local_50;
      local_6c = (float)CONCAT71((int7)((ulonglong)uVar9 >> 8),local_50 == (longlong *)0x0);
      if (local_50 == (longlong *)0x0) {
        local_b0 = (longlong *)0x0;
        local_88 = 0;
        uVar21 = extraout_XMM0_Da;
LAB_01ba652b:
        bVar19 = local_58 == (longlong *)0x0;
        bVar20 = true;
        local_90 = 0;
        local_40 = (longlong *)0x0;
        local_38._0_1_ = '\0';
        local_38._1_7_ = 0;
        local_a8 = (longlong *)0x0;
        bVar1 = true;
      }
      else {
        local_38 = param_1;
        if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
           (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_b0 = plVar11;
        pvVar8 = _pthread_getspecific(pVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013dfcb0();
        plVar11 = local_50;
        if (local_50 == (longlong *)0x0) {
          local_88 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          uVar21 = extraout_XMM0_Da_00;
          goto LAB_01ba652b;
        }
        if (((local_48 == '\0') && (FUN_00d50b00(), local_48 != '\0')) &&
           (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_a8 = plVar11;
        pvVar8 = _pthread_getspecific(pVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pplVar18 = &local_50;
        uVar21 = FUN_013dd6a0();
        plVar11 = local_50;
        if ((DAT_027c0170 == '\0') &&
           (iVar6 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_10, iVar6 != 0)) {
          _DAT_02790158 = FUN_007ef2d0();
          _DAT_02790140 = "MUAudioSourcePrincipalItem";
          _DAT_02790148 = 0x138;
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
          uVar21 = ___cxa_guard_release();
        }
        if (plVar11 == (longlong *)0x0) {
LAB_01ba6504:
          pplVar18 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar5 = FUN_00e85ea0();
          uVar21 = extraout_XMM0_Da_01;
          if (cVar5 == '\0') goto LAB_01ba6504;
        }
        plVar11 = *pplVar18;
        local_40 = plVar11;
        if (plVar11 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
          local_90 = 0;
        }
        else {
          plVar13 = plVar11;
          if (*(char *)(pplVar18 + 1) == '\0') {
            plVar11 = (longlong *)FUN_00d50b00();
            uVar21 = extraout_XMM0_Da_02;
          }
          else {
            *(undefined1 *)(pplVar18 + 1) = 0;
          }
          local_90 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
          plVar11 = plVar13;
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        plVar13 = local_38;
        bVar19 = local_58 == (longlong *)0x0;
        plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),bVar19);
        bVar20 = local_40 == (longlong *)0x0;
        if ((bVar20) || (local_58 == (longlong *)0x0)) {
          local_38._1_7_ = (undefined7)((ulonglong)local_58 >> 8);
        }
        else {
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
          if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar11 = local_58;
          }
          uVar9 = FUN_01334f30();
          if ((char)uVar9 != '\0') {
            FUN_01a58dc0();
            FUN_01d3abf0();
            local_88 = FUN_01e466c0();
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
            plVar14 = local_40;
            if ((pvVar8 != (void *)0x0) &&
               (lVar10 = FUN_00e8b990(), plVar14 = local_40, lVar10 != 0)) {
              plVar11 = local_40;
              plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            cVar5 = (**(code **)(*plVar14 + 0x3c8))();
            plVar14 = (longlong *)0x0;
            if (cVar5 != '\0') {
              pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
              plVar14 = local_40;
              if ((pvVar8 != (void *)0x0) &&
                 (lVar10 = FUN_00e8b990(), plVar14 = local_40, lVar10 != 0)) {
                plVar11 = local_40;
                plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
              uVar9 = (**(code **)(*plVar14 + 0x3b0))();
              fVar22 = (float)FUN_01ba7520(extraout_XMM0_Da_04,uVar9);
              plVar14 = (longlong *)(ulonglong)((float)local_88 < fVar22 + DAT_02390d2c);
            }
            pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
            plVar17 = local_40;
            if ((pvVar8 != (void *)0x0) &&
               (lVar10 = FUN_00e8b990(), plVar17 = local_40, lVar10 != 0)) {
              plVar11 = local_40;
              plVar17 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
            }
            cVar5 = (**(code **)(*plVar17 + 0x3d0))();
            if (cVar5 != '\0') {
              pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
              plVar17 = local_40;
              if ((pvVar8 != (void *)0x0) &&
                 (lVar10 = FUN_00e8b990(), plVar17 = local_40, lVar10 != 0)) {
                plVar11 = local_40;
                plVar17 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
              uVar9 = (**(code **)(*plVar17 + 0x3b8))();
              fVar22 = (float)FUN_01ba7520(extraout_XMM0_Da_05,uVar9);
              if (fVar22 + DAT_023b1614 < (float)local_88) {
                plVar14 = (longlong *)((longlong)&MACH_HEADER.magic + 2);
              }
            }
            uVar9 = FUN_01d3b620();
            pVar12 = (pthread_key_t)plVar11;
            iVar6 = (int)plVar14;
            if ((int)uVar9 != 2) {
              if (iVar6 == 1) {
                pvVar8 = _pthread_getspecific(pVar12);
                plVar17 = local_40;
                if ((pvVar8 != (void *)0x0) &&
                   (lVar10 = FUN_00e8b990(), plVar17 = local_40, lVar10 != 0)) {
                  plVar11 = local_40;
                  plVar17 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
                }
                uVar9 = (**(code **)(*plVar17 + 0x3b0))();
                uVar9 = FUN_01ba7520(extraout_XMM0_Da_08,uVar9);
                local_6c = extraout_XMM0_Da_09;
LAB_01ba6b21:
                local_6c = (float)local_88 - local_6c;
              }
              else {
                local_6c = 0.0;
                if (iVar6 == 2) {
                  pvVar8 = _pthread_getspecific(pVar12);
                  plVar17 = local_40;
                  if ((pvVar8 != (void *)0x0) &&
                     (lVar10 = FUN_00e8b990(), plVar17 = local_40, lVar10 != 0)) {
                    plVar11 = local_40;
                    plVar17 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
                  }
                  uVar9 = (**(code **)(*plVar17 + 0x3b8))();
                  uVar9 = FUN_01ba7520(extraout_XMM0_Da_06,uVar9);
                  local_6c = extraout_XMM0_Da_07;
                  goto LAB_01ba6b21;
                }
              }
              if (iVar6 != 0) {
                local_88 = CONCAT44(local_88._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
                local_c8 = iVar6;
LAB_01ba6b50:
                lVar15 = *plVar13;
                cVar5 = (char)plVar13[1];
                lVar10 = *unaff_RSI;
                if (lVar10 == lVar15) {
                  if (cVar5 != '\0') {
                    if (((char)unaff_RSI[1] == '\0') && (lVar15 != 0)) {
                      cVar5 = '\x01';
                      FUN_00d50b00();
                      goto LAB_01ba6bb0;
                    }
                    goto LAB_01ba6bb8;
                  }
                }
                else {
                  lVar2 = unaff_RSI[1];
                  if ((cVar5 != '\0') && (lVar15 != 0)) {
                    FUN_00d50b00();
                  }
                  *unaff_RSI = lVar15;
                  if (((char)lVar2 != '\0') && (lVar10 != 0)) {
                    FUN_00d50b20();
                  }
LAB_01ba6bb0:
                  *(char *)(unaff_RSI + 1) = cVar5;
                  plVar13 = local_38;
LAB_01ba6bb8:
                  lVar15 = *unaff_RSI;
                }
                if (lVar15 == 0) {
                  FUN_01a58dc0();
                  uVar9 = (**(code **)(*local_a0 + 0x658))();
                  plVar17 = local_50;
                  plVar14 = (longlong *)*unaff_RSI;
                  if (plVar14 == local_50) {
                    if (((char)unaff_RSI[1] != '\0') || (local_50 == (longlong *)0x0))
                    goto LAB_01ba6c34;
                    if (local_48 != '\0') goto LAB_01ba6c2b;
                    uVar9 = FUN_00d50b00();
LAB_01ba6c7b:
                    *(undefined1 *)(unaff_RSI + 1) = 1;
                    if (*unaff_RSI != 0) goto LAB_01ba6c3c;
LAB_01ba6c88:
                    plVar14 = (longlong *)0x0;
                  }
                  else {
                    lVar10 = unaff_RSI[1];
                    if (local_48 == '\0') {
                      if (local_50 != (longlong *)0x0) {
                        uVar9 = FUN_00d50b00();
                      }
                      *unaff_RSI = (longlong)plVar17;
                      if (((char)lVar10 != '\0') && (plVar14 != (longlong *)0x0)) {
                        uVar9 = FUN_00d50b20();
                      }
                      goto LAB_01ba6c7b;
                    }
                    *unaff_RSI = (longlong)local_50;
                    if (((char)lVar10 != '\0') && (plVar14 != (longlong *)0x0)) {
                      uVar9 = FUN_00d50b20();
                    }
LAB_01ba6c2b:
                    *(undefined1 *)(unaff_RSI + 1) = 1;
                    local_48 = '\0';
LAB_01ba6c34:
                    if (*unaff_RSI == 0) goto LAB_01ba6c88;
LAB_01ba6c3c:
                    uVar9 = FUN_01d3a5a0();
                    plVar14 = (longlong *)CONCAT71((int7)((ulonglong)plVar17 >> 8),(int)uVar9 != 6);
                  }
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    uVar9 = FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                    uVar9 = FUN_00d50b20();
                  }
                  if ((char)plVar14 == '\0') goto LAB_01ba6e81;
                }
                iVar6 = FUN_01d3a5a0();
                plVar13 = local_38;
                if (iVar6 == 5) {
                  pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  plVar11 = (longlong *)FUN_00e8b990();
                  lVar10 = *plVar11;
                  cVar5 = (**(code **)(lVar10 + 0x3c0))();
                  pVar12 = (pthread_key_t)lVar10;
                  if (cVar5 != '\0') {
                    pvVar8 = _pthread_getspecific(pVar12);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    plVar11 = (longlong *)FUN_00e8b990();
                    lVar10 = *plVar11;
                    (**(code **)(lVar10 + 0x3b8))();
                    pVar12 = (pthread_key_t)lVar10;
                  }
                  FUN_01a58dc0();
                  FUN_01d3abf0();
                  local_88 = FUN_01e466c0();
                  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  plVar11 = (longlong *)FUN_01ba7720((float)local_88 - local_6c);
                  pvVar8 = _pthread_getspecific(pVar12);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_f8 = *param_2;
                  local_f0 = '\0';
                  FUN_01389510(plVar11,local_c8);
                  uVar16 = local_88 >> 0x20;
                  local_88 = uVar16 << 0x20;
                  if ((local_f0 != '\0') && (local_f8 != 0)) {
                    local_88 = uVar16 << 0x20;
                    FUN_00d50b20();
                  }
                }
                goto LAB_01ba6b50;
              }
              goto LAB_01ba6ec6;
            }
            uVar9 = FUN_01ba7720((float)local_88);
            pvVar8 = _pthread_getspecific(pVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01a58dc0();
            (**(code **)(*local_a0 + 0xe20))();
            plVar11 = local_50;
            local_b8 = 0;
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_b8 = '\x01';
            local_c0 = plVar11;
            uVar9 = FUN_01389e90(uVar9,plVar14);
            if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
              uVar9 = FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              uVar9 = FUN_00d50b20();
            }
            plVar14 = plVar11;
            if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
              uVar9 = FUN_00d50b20();
            }
            goto LAB_01ba6ee6;
          }
          bVar19 = false;
          bVar20 = false;
          local_38._1_7_ = (undefined7)((ulonglong)uVar9 >> 8);
          uVar21 = extraout_XMM0_Da_03;
        }
        local_38._0_1_ = '\x01';
        bVar1 = false;
        local_88 = CONCAT71(local_38._1_7_,1);
      }
      local_108 = *param_2;
      local_100 = '\0';
      uVar7 = FUN_01a58d30(uVar21,&local_108);
      fVar22 = local_6c;
      uVar16 = (ulonglong)uVar7;
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      bVar3 = bVar20;
      if ((char)local_c4 == '\0' && !bVar19) goto LAB_01ba6714;
      goto LAB_01ba671d;
    }
    local_d8 = *param_2;
  }
  local_e8 = *unaff_RSI;
  local_e0 = '\0';
  local_d0 = '\0';
  uVar7 = FUN_01a58d30(local_e8,&local_d8);
  uVar16 = (ulonglong)uVar7;
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
LAB_01ba6768:
  return uVar16 & 0xffffffff;
LAB_01ba6e81:
  if ((local_88 & 1) == 0) {
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_01389a30();
  }
LAB_01ba6ec6:
  if (*plVar13 != 0) {
    *plVar13 = 0;
    if ((char)plVar13[1] != '\0') {
      uVar9 = FUN_00d50b20();
    }
    *(undefined1 *)(plVar13 + 1) = 0;
  }
LAB_01ba6ee6:
  local_38._1_7_ = (undefined7)((ulonglong)uVar9 >> 8);
  local_88 = CONCAT71(local_38._1_7_,1);
  bVar20 = false;
  fVar22 = 0.0;
  local_38._0_1_ = '\x01';
  bVar1 = false;
  uVar16 = CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
  bVar3 = false;
  if ((char)local_c4 == '\0') {
LAB_01ba6714:
    bVar20 = bVar3;
    FUN_00d50b20();
  }
LAB_01ba671d:
  if ((char)local_90 != '\0' && !bVar20) {
    FUN_00d50b20();
  }
  if ((char)local_88 != '\0' && SUB41(fVar22,0) == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_38 != '\0' && !bVar1) {
    FUN_00d50b20();
  }
  goto LAB_01ba6768;
}


