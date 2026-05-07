// Function: FUN_017f7200
// Address: 017f7200
// Size: 8250 bytes
// Class: GNData
// String references:
//   "GNData"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017f7200(undefined8 *param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong *plVar20;
  char cVar21;
  undefined1 uVar22;
  char cVar23;
  char cVar24;
  int iVar25;
  longlong lVar26;
  undefined4 *puVar27;
  int *piVar28;
  undefined1 *puVar29;
  char *pcVar30;
  float *pfVar31;
  int extraout_var;
  undefined8 *puVar32;
  undefined8 *puVar33;
  longlong *plVar34;
  longlong **pplVar35;
  ulonglong uVar36;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar37;
  ulonglong uVar38;
  uint uVar39;
  code *pcVar40;
  uint uVar41;
  int iVar42;
  bool bVar43;
  undefined4 uVar44;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar45;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  longlong *local_298;
  undefined1 local_290;
  longlong *local_288;
  undefined1 local_280;
  longlong *local_278;
  char local_270;
  code *local_268;
  longlong *local_260;
  longlong *local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  undefined4 local_d4;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  undefined8 local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  
  FUN_00d4efa0();
  plVar34 = local_b0;
  if ((((local_a8 == '\0') && (local_b0 != (longlong *)0x0)) && (FUN_00d50b00(), local_a8 != '\0'))
     && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_260 = plVar34;
  FUN_00c84c80();
  plVar34 = local_b0;
  if (local_a8 == '\0') {
    if (local_b0 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_017f72d7;
    }
  }
  else if (local_b0 != (longlong *)0x0) {
LAB_017f72d7:
    local_a8 = '\0';
    local_b0 = (longlong *)0x0;
    local_258 = plVar34;
    local_a0 = plVar34;
    local_98 = 0xffffffff;
    local_90 = 0;
    local_268 = DAT_02572370;
    while( true ) {
      if (local_98._4_4_ != 0) {
        if (local_98._4_4_ < 1) {
          iVar25 = -local_98._4_4_;
        }
        else {
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 - local_98._4_4_);
          FUN_00d23690();
          local_90 = local_90 + local_98._4_4_;
          iVar25 = 0;
        }
        local_98 = CONCAT44(iVar25,(int)local_98);
      }
      lVar26 = (longlong)(int)local_98;
      iVar25 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,iVar25);
      if (*(int *)((longlong)local_a0 + 0xc) <= iVar25) break;
      local_b0 = *(longlong **)(local_a0[2] + 8 + lVar26 * 8);
      FUN_00d74120();
      plVar34 = local_60;
      lVar26 = DAT_027d4cb0;
      if (DAT_027d4cb0 != 0) {
        FUN_00d50b00();
      }
      local_250 = lVar26;
      local_248 = '\x01';
      cVar24 = (**(code **)(*plVar34 + 0x50))();
      cVar21 = '\x01';
      if (cVar24 == '\0') {
        FUN_00d74120();
        plVar34 = local_70;
        lVar26 = DAT_027d4cb8;
        if (DAT_027d4cb8 != 0) {
          FUN_00d50b00();
        }
        local_240 = lVar26;
        local_238 = '\x01';
        cVar24 = (**(code **)(*plVar34 + 0x50))();
        cVar21 = '\x01';
        if (cVar24 == '\0') {
          FUN_00d74120();
          plVar34 = local_278;
          lVar26 = DAT_027d4cc8;
          if (DAT_027d4cc8 != 0) {
            FUN_00d50b00();
          }
          local_230 = lVar26;
          local_228 = '\x01';
          cVar21 = (**(code **)(*plVar34 + 0x50))();
          if ((local_228 != '\0') && (local_230 != 0)) {
            FUN_00d50b20();
          }
          if ((local_270 != '\0') && (local_278 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_238 != '\0') && (local_240 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_248 != '\0') && (local_250 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar34 = local_b0;
      if (cVar21 == '\0') {
        FUN_000274b0();
        pplVar35 = (longlong **)&DAT_02802688;
        if (plVar34 != (longlong *)0x0) {
          (**(code **)(*plVar34 + 0x360))();
          cVar24 = FUN_00e85ea0();
          pplVar35 = &local_b0;
          if (cVar24 == '\0') {
            pplVar35 = (longlong **)&DAT_02802688;
          }
        }
        if (*pplVar35 != (longlong *)0x0) {
          FUN_00c77cd0();
          uVar22 = FUN_00c7b220();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          switch(uVar22) {
          case 0x40:
            (**(code **)(*(longlong *)*param_2 + 0x210))();
            plVar34 = local_60;
            if ((DAT_026d0220 == '\0') && (iVar25 = ___cxa_guard_acquire(), iVar25 != 0)) {
              _DAT_02789148 = FUN_00d4fe50();
              DAT_02789130 = "GNData";
              _DAT_02789138 = 0x28;
              _DAT_02789140 = FUN_000378a0;
              _DAT_02789150 = 0;
              uRam0000000002789158 = 0;
              _DAT_02789160 = 0;
              uRam0000000002789168 = 0;
              _DAT_02789170 = 0;
              uRam0000000002789178 = 0;
              _DAT_02789180 = 0;
              uRam0000000002789188 = 0;
              _DAT_02789190 = 0;
              uRam0000000002789198 = 0;
              _DAT_027891a0 = 0;
              uRam00000000027891a8 = 0;
              _DAT_027891b0 = 0;
              uRam00000000027891b8 = 0;
              _DAT_027891c0 = 0;
              uRam00000000027891c8 = 0;
              _DAT_027891d0 = 0;
              uRam00000000027891d8 = 0;
              _DAT_027891e0 = 0;
              uRam00000000027891e8 = 0;
              _DAT_027891f0 = 0;
              ___cxa_guard_release();
            }
            pplVar35 = (longlong **)&DAT_02802688;
            if (plVar34 != (longlong *)0x0) {
              (**(code **)(*plVar34 + 0x360))();
              cVar24 = FUN_00e85ea0();
              pplVar35 = &local_60;
              if (cVar24 == '\0') {
                pplVar35 = (longlong **)&DAT_02802688;
              }
            }
            plVar34 = *pplVar35;
            if (*(char *)(pplVar35 + 1) == '\0') {
              if (plVar34 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar35 + 1) = 0;
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar34 != (longlong *)0x0) {
              local_78 = plVar34;
              (**(code **)(*(longlong *)*param_1 + 0x210))();
              plVar34 = local_60;
              if ((DAT_026d0220 == '\0') && (iVar25 = ___cxa_guard_acquire(), iVar25 != 0)) {
                _DAT_02789148 = FUN_00d4fe50();
                DAT_02789130 = "GNData";
                _DAT_02789138 = 0x28;
                _DAT_02789140 = FUN_000378a0;
                _DAT_02789150 = 0;
                uRam0000000002789158 = 0;
                _DAT_02789160 = 0;
                uRam0000000002789168 = 0;
                _DAT_02789170 = 0;
                uRam0000000002789178 = 0;
                _DAT_02789180 = 0;
                uRam0000000002789188 = 0;
                _DAT_02789190 = 0;
                uRam0000000002789198 = 0;
                _DAT_027891a0 = 0;
                uRam00000000027891a8 = 0;
                _DAT_027891b0 = 0;
                uRam00000000027891b8 = 0;
                _DAT_027891c0 = 0;
                uRam00000000027891c8 = 0;
                _DAT_027891d0 = 0;
                uRam00000000027891d8 = 0;
                _DAT_027891e0 = 0;
                uRam00000000027891e8 = 0;
                _DAT_027891f0 = 0;
                ___cxa_guard_release();
              }
              pplVar35 = (longlong **)&DAT_02802688;
              if (plVar34 != (longlong *)0x0) {
                (**(code **)(*plVar34 + 0x360))();
                cVar24 = FUN_00e85ea0();
                pplVar35 = &local_60;
                if (cVar24 == '\0') {
                  pplVar35 = (longlong **)&DAT_02802688;
                }
              }
              plVar34 = local_78;
              local_80 = *pplVar35;
              if (*(char *)(pplVar35 + 1) == '\0') {
                if (local_80 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar35 + 1) = 0;
              }
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar34 == local_80) {
LAB_017f8505:
                if (local_80 != (longlong *)0x0) goto LAB_017f850a;
              }
              else {
                if (local_80 == (longlong *)0x0) {
LAB_017f81ac:
                  if (*unaff_RDI != 0) {
                    local_58 = '\0';
                    local_60 = (longlong *)0x0;
                    local_48 = 0xffffffff;
                    local_40 = 0;
                    local_48._4_4_ = 0;
                    local_50 = *unaff_RDI;
                    while( true ) {
                      if (local_48._4_4_ != 0) {
                        if (local_48._4_4_ < 1) {
                          iVar25 = -local_48._4_4_;
                        }
                        else {
                          iVar25 = (int)local_48 - local_48._4_4_;
                          local_48 = CONCAT44(local_48._4_4_,iVar25);
                          FUN_00d23690();
                          local_40 = local_40 + local_48._4_4_;
                          iVar25 = 0;
                        }
                        local_48 = CONCAT44(iVar25,(int)local_48);
                      }
                      lVar26 = (longlong)(int)local_48;
                      iVar25 = (int)local_48 + 1;
                      local_48 = CONCAT44(local_48._4_4_,iVar25);
                      if (*(int *)(local_50 + 0xc) <= iVar25) break;
                      local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar26 * 8);
                      iVar25 = (int)plVar34[3];
                      iVar42 = iVar25 + 3;
                      if (-1 < iVar25) {
                        iVar42 = iVar25;
                      }
                      FUN_00c8e690();
                      plVar3 = local_70;
                      if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) &&
                          (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      FUN_00c92170();
                      FUN_00c92160();
                      (**(code **)(**(longlong **)
                                     (*(longlong *)(*unaff_RSI + 0x10) +
                                     ((longlong)local_40 + (longlong)(int)local_48) * 8) + 0x210))
                                ((longlong)local_40 + (longlong)(int)local_48,local_b0);
                      plVar4 = local_70;
                      if (((local_68 == '\0') && (local_70 != (longlong *)0x0)) &&
                         ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (longlong *)0x0)))) {
                        FUN_00d50b20();
                      }
                      fVar19 = _UNK_0241663c;
                      fVar18 = _UNK_02416638;
                      fVar17 = _UNK_02416634;
                      fVar16 = _DAT_02416630;
                      fVar15 = _UNK_0241662c;
                      fVar14 = _UNK_02416628;
                      fVar13 = _UNK_02416624;
                      fVar45 = _DAT_02416620;
                      if (3 < iVar25) {
                        uVar39 = iVar42 >> 2;
                        uVar6 = plVar4[2];
                        uVar7 = local_80[2];
                        uVar8 = plVar34[2];
                        uVar9 = plVar3[2];
                        uVar38 = (ulonglong)uVar39;
                        fVar49 = DAT_02416644;
                        fVar50 = DAT_0240d16c;
                        if (uVar39 < 4) {
                          uVar37 = 0;
                        }
                        else {
                          uVar36 = uVar9 + uVar38 * 4;
                          plVar34 = local_78;
                          if ((uVar9 < uVar6 + uVar38 * 4 && uVar6 < uVar36) ||
                             (uVar9 < uVar7 + uVar38 * 4 && uVar7 < uVar36)) {
                            uVar37 = 0;
                          }
                          else {
                            uVar37 = 0;
                            if (uVar8 + uVar38 * 4 <= uVar9 || uVar36 <= uVar8) {
                              uVar37 = (ulonglong)(uVar39 & 0xfffffffc);
                              uVar36 = 0;
                              do {
                                pfVar31 = (float *)(uVar6 + uVar36);
                                fVar49 = pfVar31[1];
                                fVar50 = pfVar31[2];
                                fVar51 = pfVar31[3];
                                pfVar1 = (float *)(uVar7 + uVar36);
                                pfVar2 = (float *)(uVar8 + uVar36);
                                auVar46._0_4_ = *pfVar2 + fVar45;
                                auVar46._4_4_ = pfVar2[1] + fVar13;
                                auVar46._8_4_ = pfVar2[2] + fVar14;
                                auVar46._12_4_ = pfVar2[3] + fVar15;
                                auVar48._4_4_ = pfVar1[1] + fVar13;
                                auVar48._0_4_ = *pfVar1 + fVar45;
                                auVar48._8_4_ = pfVar1[2] + fVar14;
                                auVar48._12_4_ = pfVar1[3] + fVar15;
                                auVar48 = divps(auVar46,auVar48);
                                pfVar1 = (float *)(uVar9 + uVar36);
                                *pfVar1 = auVar48._0_4_ * (*pfVar31 + fVar45) + fVar16;
                                pfVar1[1] = auVar48._4_4_ * (fVar49 + fVar13) + fVar17;
                                pfVar1[2] = auVar48._8_4_ * (fVar50 + fVar14) + fVar18;
                                pfVar1[3] = auVar48._12_4_ * (fVar51 + fVar15) + fVar19;
                                uVar36 = uVar36 + 0x10;
                              } while ((uVar38 * 4 & 0xfffffffffffffff0) != uVar36);
                              fVar49 = DAT_02416644;
                              fVar50 = DAT_0240d16c;
                              if (uVar37 == uVar38) goto LAB_017f8385;
                            }
                          }
                        }
                        do {
                          *(float *)(uVar9 + uVar37 * 4) =
                               ((*(float *)(uVar8 + uVar37 * 4) + fVar49) /
                               (*(float *)(uVar7 + uVar37 * 4) + fVar49)) *
                               (*(float *)(uVar6 + uVar37 * 4) + fVar49) + fVar50;
                          uVar37 = uVar37 + 1;
                        } while (uVar38 != uVar37);
                      }
LAB_017f8385:
                      local_170 = plVar3;
                      local_168 = '\0';
                      (**(code **)(*local_60 + 0x200))(0,local_b0,1);
                      if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar4 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      if (plVar3 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                    }
                    FUN_00083b20();
                  }
                  goto LAB_017f8505;
                }
                local_180 = local_80;
                local_178 = '\0';
                cVar24 = (**(code **)(*plVar34 + 0x50))();
                if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                plVar34 = local_78;
                if (cVar24 == '\0') goto LAB_017f81ac;
LAB_017f850a:
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            break;
          case 0x62:
            puVar29 = (undefined1 *)(**(code **)(*(longlong *)*param_2 + 0x218))();
            local_70 = (longlong *)CONCAT71(local_70._1_7_,*puVar29);
            if (*unaff_RDI != 0) {
              local_58 = '\0';
              local_60 = (longlong *)0x0;
              local_48 = 0xffffffff;
              local_40 = 0;
              local_48._4_4_ = 0;
              local_50 = *unaff_RDI;
              while( true ) {
                if (local_48._4_4_ != 0) {
                  if (local_48._4_4_ < 1) {
                    iVar25 = -local_48._4_4_;
                  }
                  else {
                    iVar25 = (int)local_48 - local_48._4_4_;
                    local_48 = CONCAT44(local_48._4_4_,iVar25);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar25 = 0;
                  }
                  local_48 = CONCAT44(iVar25,(int)local_48);
                }
                lVar26 = (longlong)(int)local_48;
                iVar25 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar25);
                if (*(int *)(local_50 + 0xc) <= iVar25) break;
                local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar26 * 8);
                pcVar30 = (char *)(**(code **)(*local_60 + 0x218))();
                if ((char)local_70 != *pcVar30) {
                  (**(code **)(*local_60 + 0x208))(1,local_b0);
                }
              }
LAB_017f8071:
              FUN_00083b20();
            }
            break;
          case 0x65:
          case 0x69:
            puVar27 = (undefined4 *)(**(code **)(*(longlong *)*param_2 + 0x218))();
            local_70 = (longlong *)CONCAT44(local_70._4_4_,*puVar27);
            piVar28 = (int *)(**(code **)(*(longlong *)*param_1 + 0x218))();
            if (((int)local_70 != *piVar28) && (*unaff_RDI != 0)) {
              local_58 = '\0';
              local_60 = (longlong *)0x0;
              local_48 = 0xffffffff;
              local_40 = 0;
              local_50 = *unaff_RDI;
              while( true ) {
                lVar26 = (longlong)(int)local_48;
                iVar25 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar25);
                if (*(int *)(local_50 + 0xc) <= iVar25) break;
                local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar26 * 8);
                (**(code **)(*local_60 + 0x208))(1,local_b0);
                if (local_48._4_4_ != 0) {
                  if (local_48._4_4_ < 1) {
                    iVar25 = -local_48._4_4_;
                  }
                  else {
                    local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar25 = 0;
                  }
                  local_48 = CONCAT44(iVar25,(int)local_48);
                }
              }
              goto LAB_017f8071;
            }
            break;
          case 0x66:
            FUN_00d74120();
            plVar34 = local_60;
            lVar26 = DAT_02726c50;
            if (DAT_02726c50 != 0) {
              FUN_00d50b00();
            }
            local_220 = lVar26;
            local_218 = '\x01';
            cVar24 = (**(code **)(*plVar34 + 0x50))();
            if ((local_218 != '\0') && (local_220 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            bVar43 = cVar24 == '\0';
            uVar44 = DAT_023941e8;
            if (bVar43) {
              uVar44 = DAT_02390124;
            }
            local_78 = (longlong *)CONCAT44(local_78._4_4_,uVar44);
            uVar44 = DAT_02416648;
            if (bVar43) {
              uVar44 = 0;
            }
            local_80 = (longlong *)CONCAT44(local_80._4_4_,uVar44);
            pcVar40 = FUN_017f70c0;
            if (!bVar43) {
              pcVar40 = FUN_017f70d0;
            }
            FUN_00d74120();
            plVar34 = local_60;
            lVar26 = DAT_027d4cd0;
            if (DAT_027d4cd0 != 0) {
              FUN_00d50b00();
            }
            local_210 = lVar26;
            local_208 = '\x01';
            cVar24 = (**(code **)(*plVar34 + 0x50))();
            if ((local_208 != '\0') && (local_210 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar34 = local_78;
            uVar44 = DAT_02390d34;
            if (cVar24 == '\0') {
              uVar44 = local_78._0_4_;
            }
            local_88 = CONCAT44(local_88._4_4_,uVar44);
            local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
            if (cVar24 == '\0') {
              local_78._4_4_ = SUB84(plVar34,4);
              local_78 = (longlong *)CONCAT44(local_78._4_4_,local_80._0_4_);
            }
            FUN_00d74120();
            plVar34 = local_60;
            lVar26 = DAT_027d4cd8;
            if (DAT_027d4cd8 != 0) {
              FUN_00d50b00();
            }
            local_200 = lVar26;
            local_1f8 = '\x01';
            cVar21 = (**(code **)(*plVar34 + 0x50))();
            if ((local_1f8 != '\0') && (local_200 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar44 = DAT_02390124;
            if (cVar21 == '\0') {
              uVar44 = (undefined4)local_88;
            }
            uVar12 = DAT_02390d00;
            if (cVar21 == '\0') {
              uVar12 = local_78._0_4_;
            }
            local_88 = CONCAT44(local_88._4_4_,uVar12);
            local_78 = (longlong *)CONCAT71(local_78._1_7_,cVar21);
            FUN_00d74120();
            plVar34 = local_60;
            lVar26 = DAT_027d4ce0;
            if (DAT_027d4ce0 != 0) {
              FUN_00d50b00();
            }
            local_1f0 = lVar26;
            local_1e8 = '\x01';
            uVar22 = (**(code **)(*plVar34 + 0x50))();
            local_80 = (longlong *)CONCAT71(local_80._1_7_,uVar22);
            if ((local_1e8 != '\0') && (local_1f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d74120();
            plVar34 = local_60;
            lVar26 = DAT_027d4ce8;
            if (DAT_027d4ce8 != 0) {
              FUN_00d50b00();
            }
            local_1e0 = lVar26;
            local_1d8 = '\x01';
            cVar21 = (**(code **)(*plVar34 + 0x50))();
            if ((local_1d8 != '\0') && (local_1e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar12 = DAT_02390d34;
            if (cVar21 == '\0' && (char)local_80 == '\0') {
              uVar12 = uVar44;
            }
            local_d4 = 0;
            if (cVar21 == '\0' && (char)local_80 == '\0') {
              local_d4 = (undefined4)local_88;
            }
            local_88 = CONCAT71(local_88._1_7_,cVar24);
            FUN_00d74120();
            plVar34 = local_60;
            lVar26 = DAT_027d4cf0;
            if (DAT_027d4cf0 != 0) {
              FUN_00d50b00();
            }
            local_1d0 = lVar26;
            local_1c8 = '\x01';
            cVar24 = (**(code **)(*plVar34 + 0x50))();
            if ((local_1c8 != '\0') && (local_1d0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d74120();
            plVar34 = local_60;
            lVar26 = DAT_027d4cf8;
            if (DAT_027d4cf8 != 0) {
              FUN_00d50b00();
            }
            local_1c0 = lVar26;
            local_1b8 = '\x01';
            cVar23 = (**(code **)(*plVar34 + 0x50))();
            if ((local_1b8 != '\0') && (local_1c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((char)local_88 != '\0') {
              pcVar40 = FUN_017f70f0;
            }
            if ((char)local_78 != '\0') {
              pcVar40 = FUN_017f70f0;
            }
            if ((char)local_80 != '\0') {
              pcVar40 = FUN_017f70f0;
            }
            if (cVar21 != '\0') {
              pcVar40 = FUN_017f70f0;
            }
            uVar44 = DAT_02390124;
            if (cVar23 == '\0' && cVar24 == '\0') {
              uVar44 = uVar12;
            }
            local_80 = (longlong *)CONCAT44(local_80._4_4_,uVar44);
            if (cVar23 != '\0' || cVar24 != '\0') {
              pcVar40 = FUN_017f70f0;
              local_d4 = DAT_02390d00;
            }
            FUN_00d74120();
            plVar34 = local_60;
            lVar26 = DAT_027d4d00;
            if (DAT_027d4d00 != 0) {
              FUN_00d50b00();
            }
            local_1b0 = lVar26;
            local_1a8 = '\x01';
            cVar24 = (**(code **)(*plVar34 + 0x50))();
            if ((local_1a8 != '\0') && (local_1b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar44 = DAT_02390d28;
            if (cVar24 == '\0') {
              uVar44 = local_80._0_4_;
            }
            local_78 = (longlong *)CONCAT44(local_78._4_4_,uVar44);
            if (cVar24 != '\0') {
              pcVar40 = FUN_017f70d0;
              local_d4 = DAT_02390d34;
            }
            local_88 = CONCAT44(local_88._4_4_,local_d4);
            FUN_00d74120();
            plVar34 = local_60;
            lVar26 = DAT_027d4d08;
            if (DAT_027d4d08 != 0) {
              FUN_00d50b00();
            }
            local_1a0 = lVar26;
            local_198 = '\x01';
            cVar24 = (**(code **)(*plVar34 + 0x50))();
            cVar21 = '\x01';
            if (cVar24 == '\0') {
              FUN_00d74120();
              plVar34 = local_70;
              lVar26 = DAT_027d4d10;
              if (DAT_027d4d10 != 0) {
                FUN_00d50b00();
              }
              local_190 = lVar26;
              local_188 = '\x01';
              cVar21 = (**(code **)(*plVar34 + 0x50))();
              if ((local_188 != '\0') && (local_190 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_198 != '\0') && (local_1a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar21 != '\0') {
              pcVar40 = FUN_017f70f0;
            }
            puVar27 = (undefined4 *)(**(code **)(*(longlong *)*param_2 + 0x218))();
            local_80 = (longlong *)CONCAT44(local_80._4_4_,*puVar27);
            pfVar31 = (float *)(**(code **)(*(longlong *)*param_1 + 0x218))();
            fVar45 = *pfVar31;
            if (((local_80._0_4_ != fVar45) || (NAN(local_80._0_4_) || NAN(fVar45))) &&
               (*unaff_RDI != 0)) {
              local_58 = '\0';
              local_60 = (longlong *)0x0;
              local_48 = 0xffffffff;
              local_40 = 0;
              local_50 = *unaff_RDI;
              while( true ) {
                lVar26 = (longlong)(int)local_48;
                iVar25 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar25);
                if (*(int *)(local_50 + 0xc) <= iVar25) break;
                local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar26 * 8);
                puVar27 = (undefined4 *)
                          (**(code **)(**(longlong **)
                                         (*(longlong *)(*unaff_RSI + 0x10) +
                                         ((longlong)iVar25 + (longlong)local_40) * 8) + 0x218))();
                uVar44 = (*pcVar40)(*puVar27,fVar45);
                local_70 = (longlong *)CONCAT44(local_70._4_4_,uVar44);
                (**(code **)(*local_60 + 0x208))(1,local_b0);
                if (local_48._4_4_ != 0) {
                  if (local_48._4_4_ < 1) {
                    iVar25 = -local_48._4_4_;
                  }
                  else {
                    local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar25 = 0;
                  }
                  local_48 = CONCAT44(iVar25,(int)local_48);
                }
              }
              goto LAB_017f8071;
            }
            break;
          case 0x6c:
            puVar32 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x218))();
            local_70 = (longlong *)*puVar32;
            puVar32 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x218))();
            if ((local_70 != (longlong *)*puVar32) && (*unaff_RDI != 0)) {
              local_58 = '\0';
              local_60 = (longlong *)0x0;
              local_48 = 0xffffffff;
              local_40 = 0;
              local_50 = *unaff_RDI;
              while( true ) {
                lVar26 = (longlong)(int)local_48;
                iVar25 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar25);
                if (*(int *)(local_50 + 0xc) <= iVar25) break;
                local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar26 * 8);
                (**(code **)(*local_60 + 0x208))(1,local_b0);
                if (local_48._4_4_ != 0) {
                  if (local_48._4_4_ < 1) {
                    iVar25 = -local_48._4_4_;
                  }
                  else {
                    local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar25 = 0;
                  }
                  local_48 = CONCAT44(iVar25,(int)local_48);
                }
              }
              goto LAB_017f8071;
            }
          }
        }
        cVar24 = (**(code **)(*local_b0 + 0x370))();
        if (((cVar24 != '\0') && (FUN_00d77bd0(), extraout_var == 1)) &&
           (cVar24 = FUN_00d77e10(), cVar24 != '\0')) {
          puVar32 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar32 = &DAT_02572358;
          (*local_268)();
          if (*unaff_RDI != 0) {
            local_58 = '\0';
            local_60 = (longlong *)0x0;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            local_50 = *unaff_RDI;
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar25 = -local_48._4_4_;
                }
                else {
                  iVar25 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar25);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar25 = 0;
                }
                local_48 = CONCAT44(iVar25,(int)local_48);
              }
              lVar26 = (longlong)(int)local_48;
              iVar25 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar25);
              if (*(int *)(local_50 + 0xc) <= iVar25) break;
              local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar26 * 8);
              (**(code **)(*local_60 + 0x210))(*(longlong *)(local_50 + 0x10),local_b0);
              plVar34 = local_70;
              local_f8 = 0;
              if (local_68 == '\0') {
                if (local_70 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_f8 = '\x01';
              local_100 = plVar34;
              FUN_00d21140();
              if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00083b20();
          }
          puVar33 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar33 = &DAT_02572358;
          uVar44 = (*local_268)();
          if (*unaff_RSI != 0) {
            local_58 = '\0';
            local_60 = (longlong *)0x0;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            local_50 = *unaff_RSI;
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar25 = -local_48._4_4_;
                }
                else {
                  iVar25 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar25);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar25 = 0;
                }
                local_48 = CONCAT44(iVar25,(int)local_48);
              }
              lVar26 = (longlong)(int)local_48;
              iVar25 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar25);
              if (*(int *)(local_50 + 0xc) <= iVar25) break;
              local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar26 * 8);
              (**(code **)(*local_60 + 0x210))(*(longlong *)(local_50 + 0x10),local_b0);
              plVar34 = local_70;
              local_e8 = 0;
              if (local_68 == '\0') {
                if (local_70 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_e8 = '\x01';
              local_f0 = plVar34;
              FUN_00d21140();
              if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            uVar44 = FUN_00083b20();
          }
          uVar44 = (**(code **)(*(longlong *)*param_2 + 0x210))(uVar44,local_b0);
          plVar34 = local_60;
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              uVar44 = FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_290 = 1;
          local_298 = plVar34;
          (**(code **)(*(longlong *)*param_1 + 0x210))(uVar44,local_b0);
          plVar3 = local_70;
          if (local_68 == '\0') {
            if (local_70 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_280 = 1;
          local_288 = plVar3;
          FUN_017f7200(&local_288,&local_298);
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar34 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar33 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (puVar32 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_00d74c70();
    FUN_00d50b20();
  }
  plVar34 = (longlong *)*param_2;
  uVar44 = FUN_011b2c10();
  if (plVar34 == (longlong *)0x0) {
LAB_017f8b43:
    plVar34 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar34 + 0x360))();
    cVar24 = FUN_00e85ea0();
    plVar34 = param_2;
    uVar44 = extraout_XMM0_Da;
    if (cVar24 == '\0') goto LAB_017f8b43;
  }
  lVar26 = DAT_027d4cc0;
  if (*plVar34 == 0) goto LAB_017f9165;
  if (DAT_027d4cc0 != 0) {
    uVar44 = FUN_00d50b00();
  }
  local_88 = lVar26;
  local_160 = lVar26;
  local_158 = '\0';
  pplVar35 = &local_b0;
  uVar44 = (**(code **)(*(longlong *)*param_2 + 0x88))(uVar44,&local_160);
  plVar34 = local_b0;
  if ((DAT_026d0220 == '\0') &&
     (iVar25 = ___cxa_guard_acquire(), uVar44 = extraout_XMM0_Da_01, iVar25 != 0)) {
    _DAT_02789148 = FUN_00d4fe50();
    DAT_02789130 = "GNData";
    _DAT_02789138 = 0x28;
    _DAT_02789140 = FUN_000378a0;
    _DAT_02789150 = 0;
    uRam0000000002789158 = 0;
    _DAT_02789160 = 0;
    uRam0000000002789168 = 0;
    _DAT_02789170 = 0;
    uRam0000000002789178 = 0;
    _DAT_02789180 = 0;
    uRam0000000002789188 = 0;
    _DAT_02789190 = 0;
    uRam0000000002789198 = 0;
    _DAT_027891a0 = 0;
    uRam00000000027891a8 = 0;
    _DAT_027891b0 = 0;
    uRam00000000027891b8 = 0;
    _DAT_027891c0 = 0;
    uRam00000000027891c8 = 0;
    _DAT_027891d0 = 0;
    uRam00000000027891d8 = 0;
    _DAT_027891e0 = 0;
    uRam00000000027891e8 = 0;
    _DAT_027891f0 = 0;
    uVar44 = ___cxa_guard_release();
  }
  if (plVar34 == (longlong *)0x0) {
LAB_017f8bd7:
    pplVar35 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar34 + 0x360))();
    cVar24 = FUN_00e85ea0();
    uVar44 = extraout_XMM0_Da_00;
    if (cVar24 == '\0') goto LAB_017f8bd7;
  }
  lVar26 = local_88;
  plVar34 = *pplVar35;
  if (*(char *)(pplVar35 + 1) == '\0') {
    if (plVar34 != (longlong *)0x0) {
      uVar44 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar35 + 1) = 0;
    lVar26 = local_88;
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    uVar44 = FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    uVar44 = FUN_00d50b20();
  }
  local_148 = '\0';
  pplVar35 = &local_b0;
  local_150 = lVar26;
  (**(code **)(*(longlong *)*param_1 + 0x88))(uVar44,&local_150);
  plVar3 = local_b0;
  if ((DAT_026d0220 == '\0') && (iVar25 = ___cxa_guard_acquire(), iVar25 != 0)) {
    _DAT_02789148 = FUN_00d4fe50();
    DAT_02789130 = "GNData";
    _DAT_02789138 = 0x28;
    _DAT_02789140 = FUN_000378a0;
    _DAT_02789150 = 0;
    uRam0000000002789158 = 0;
    _DAT_02789160 = 0;
    uRam0000000002789168 = 0;
    _DAT_02789170 = 0;
    uRam0000000002789178 = 0;
    _DAT_02789180 = 0;
    uRam0000000002789188 = 0;
    _DAT_02789190 = 0;
    uRam0000000002789198 = 0;
    _DAT_027891a0 = 0;
    uRam00000000027891a8 = 0;
    _DAT_027891b0 = 0;
    uRam00000000027891b8 = 0;
    _DAT_027891c0 = 0;
    uRam00000000027891c8 = 0;
    _DAT_027891d0 = 0;
    uRam00000000027891d8 = 0;
    _DAT_027891e0 = 0;
    uRam00000000027891e8 = 0;
    _DAT_027891f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (longlong *)0x0) {
LAB_017f8ca8:
    pplVar35 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar24 = FUN_00e85ea0();
    if (cVar24 == '\0') goto LAB_017f8ca8;
  }
  lVar26 = local_88;
  plVar3 = *pplVar35;
  if (*(char *)(pplVar35 + 1) == '\0') {
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar35 + 1) = 0;
    lVar26 = local_88;
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (plVar34 == plVar3) {
LAB_017f913e:
    if (plVar3 != (longlong *)0x0) goto LAB_017f9143;
  }
  else {
    if ((plVar34 == (longlong *)0x0) || (plVar3 == (longlong *)0x0)) {
LAB_017f8d61:
      plVar4 = (longlong *)*unaff_RDI;
      if (plVar4 != (longlong *)0x0) {
        local_a8 = '\0';
        local_b0 = (longlong *)0x0;
        local_90 = 0;
        local_98 = 0;
        local_a0 = plVar4;
        if (0 < *(int *)((longlong)plVar4 + 0xc)) {
          uVar39 = 0;
          do {
            plVar5 = *(longlong **)(plVar4[2] + (ulonglong)uVar39 * 8);
            iVar25 = (int)plVar34[3];
            iVar42 = iVar25 + 3;
            if (-1 < iVar25) {
              iVar42 = iVar25;
            }
            local_b0 = plVar5;
            FUN_00c8e690();
            local_80 = local_60;
            if ((((local_58 == '\0') && (local_60 != (longlong *)0x0)) &&
                (FUN_00d50b00(), local_58 != '\0')) && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00c92170();
            uVar44 = FUN_00c92160();
            local_130 = local_88;
            local_128 = '\0';
            fVar45 = (float)(**(code **)(**(longlong **)
                                           (*(longlong *)(*unaff_RSI + 0x10) + (ulonglong)uVar39 * 8
                                           ) + 0x88))(uVar44,&local_130);
            local_78 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (longlong *)0x0) &&
                  (fVar45 = (float)FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                fVar45 = (float)FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              fVar45 = (float)FUN_00d50b20();
            }
            plVar20 = local_80;
            fVar49 = _UNK_0241663c;
            fVar19 = _UNK_02416638;
            fVar18 = _UNK_02416634;
            fVar17 = _DAT_02416630;
            fVar16 = _UNK_0241662c;
            fVar15 = _UNK_02416628;
            fVar14 = _UNK_02416624;
            fVar13 = _DAT_02416620;
            if (3 < iVar25) {
              uVar41 = iVar42 >> 2;
              uVar6 = local_78[2];
              uVar7 = plVar3[2];
              uVar8 = plVar34[2];
              uVar9 = local_80[2];
              uVar38 = (ulonglong)uVar41;
              fVar50 = DAT_02416644;
              fVar51 = DAT_0240d16c;
              if (uVar41 < 4) {
LAB_017f8efa:
                uVar37 = 0;
              }
              else {
                uVar36 = uVar9 + uVar38 * 4;
                if ((uVar9 < uVar6 + uVar38 * 4 && uVar6 < uVar36) ||
                   (uVar9 < uVar7 + uVar38 * 4 && uVar7 < uVar36)) goto LAB_017f8efa;
                uVar37 = 0;
                if (uVar8 + uVar38 * 4 <= uVar9 || uVar36 <= uVar8) {
                  uVar37 = (ulonglong)(uVar41 & 0xfffffffc);
                  uVar36 = 0;
                  do {
                    pfVar31 = (float *)(uVar6 + uVar36);
                    fVar50 = pfVar31[1];
                    fVar51 = pfVar31[2];
                    fVar11 = pfVar31[3];
                    pfVar1 = (float *)(uVar7 + uVar36);
                    pfVar2 = (float *)(uVar8 + uVar36);
                    fVar45 = *pfVar31 + fVar13;
                    auVar47._0_4_ = *pfVar2 + fVar13;
                    auVar47._4_4_ = pfVar2[1] + fVar14;
                    auVar47._8_4_ = pfVar2[2] + fVar15;
                    auVar47._12_4_ = pfVar2[3] + fVar16;
                    auVar10._4_4_ = pfVar1[1] + fVar14;
                    auVar10._0_4_ = *pfVar1 + fVar13;
                    auVar10._8_4_ = pfVar1[2] + fVar15;
                    auVar10._12_4_ = pfVar1[3] + fVar16;
                    auVar48 = divps(auVar47,auVar10);
                    pfVar31 = (float *)(uVar9 + uVar36);
                    *pfVar31 = auVar48._0_4_ * fVar45 + fVar17;
                    pfVar31[1] = auVar48._4_4_ * (fVar50 + fVar14) + fVar18;
                    pfVar31[2] = auVar48._8_4_ * (fVar51 + fVar15) + fVar19;
                    pfVar31[3] = auVar48._12_4_ * (fVar11 + fVar16) + fVar49;
                    uVar36 = uVar36 + 0x10;
                  } while ((uVar38 * 4 & 0xfffffffffffffff0) != uVar36);
                  fVar50 = DAT_02416644;
                  fVar51 = DAT_0240d16c;
                  if (uVar37 == uVar38) goto LAB_017f8f45;
                }
              }
              do {
                fVar45 = *(float *)(uVar6 + uVar37 * 4) + fVar50;
                *(float *)(uVar9 + uVar37 * 4) =
                     ((*(float *)(uVar8 + uVar37 * 4) + fVar50) /
                     (*(float *)(uVar7 + uVar37 * 4) + fVar50)) * fVar45 + fVar51;
                uVar37 = uVar37 + 1;
              } while (uVar38 != uVar37);
            }
LAB_017f8f45:
            local_120 = local_80;
            local_118 = '\0';
            local_110 = local_88;
            local_108 = '\0';
            (**(code **)(*plVar5 + 0x80))(fVar45,&local_110);
            plVar5 = local_78;
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar5 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (plVar20 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            uVar39 = uVar39 + 1;
            local_98 = CONCAT44(local_98._4_4_,uVar39);
          } while ((int)uVar39 < *(int *)((longlong)plVar4 + 0xc));
        }
        FUN_00083b20();
        lVar26 = local_88;
      }
      goto LAB_017f913e;
    }
    local_138 = '\0';
    local_140 = plVar3;
    cVar24 = (**(code **)(*plVar34 + 0x50))();
    if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar26 = local_88;
    if (cVar24 == '\0') goto LAB_017f8d61;
LAB_017f9143:
    FUN_00d50b20();
  }
  if (plVar34 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar26 != 0) {
    FUN_00d50b20();
  }
LAB_017f9165:
  if (local_260 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


