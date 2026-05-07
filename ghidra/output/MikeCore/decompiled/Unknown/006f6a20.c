// Function: FUN_006f6a20
// Address: 006f6a20
// Size: 4339 bytes
// Class: Unknown


void FUN_006f6a20(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  uint uVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  int extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  int extraout_XMM0_Dd_01;
  float fVar21;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  undefined8 local_f8;
  int iStack_f0;
  int iStack_ec;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  char local_50;
  char local_48 [8];
  longlong *local_40;
  
  fVar21 = (float)((ulonglong)param_2 >> 0x20);
  fVar15 = (float)param_2;
  FUN_00d3ecc0();
  plVar9 = local_80;
  pVar7 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_78[0]);
  pcVar8 = local_48;
  if (local_78[0] != '\0') {
    pcVar8 = local_78;
  }
  local_48[0] = local_78[0];
  *pcVar8 = '\0';
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar11 = DAT_02727ab0;
  if (DAT_02727ab0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar9 + 0x50))();
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  lVar11 = DAT_026f6d40;
  if (cVar4 == '\0') {
    if (DAT_026f6d40 != 0) {
      FUN_00d50b00();
    }
    local_188 = lVar11;
    local_180 = '\x01';
    cVar4 = (**(code **)(*plVar9 + 0x50))();
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    lVar11 = DAT_026fe4b0;
    if (cVar4 == '\0') {
      if (DAT_026fe4b0 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar11;
      local_170 = '\x01';
      cVar4 = (**(code **)(*plVar9 + 0x50))();
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      lVar11 = DAT_026d88c8;
      if (cVar4 == '\0') {
        if (DAT_026d88c8 != 0) {
          FUN_00d50b00();
        }
        local_168 = lVar11;
        local_160 = '\x01';
        cVar4 = (**(code **)(*plVar9 + 0x50))();
        if ((local_160 != '\0') && (local_168 != 0)) {
          FUN_00d50b20();
        }
        lVar11 = DAT_026f6d60;
        if (cVar4 == '\0') {
          if (DAT_026f6d60 != 0) {
            FUN_00d50b00();
          }
          local_158 = lVar11;
          local_150 = '\x01';
          cVar4 = (**(code **)(*plVar9 + 0x50))();
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          lVar11 = DAT_027e2660;
          if (cVar4 == '\0') {
            if (DAT_027e2660 != 0) {
              FUN_00d50b00();
            }
            local_148 = lVar11;
            local_140 = '\x01';
            cVar4 = (**(code **)(*plVar9 + 0x50))();
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
            plVar1 = DAT_02727ac0;
            lVar11 = DAT_027060b0;
            if (cVar4 == '\0') {
              if (DAT_027060b0 != 0) {
                FUN_00d50b00();
              }
              local_128 = lVar11;
              local_120 = '\x01';
              cVar4 = (**(code **)(*plVar9 + 0x50))();
              if ((local_120 != '\0') && (local_128 != 0)) {
                FUN_00d50b20();
              }
              lVar11 = DAT_027e7c80;
              if (cVar4 != '\0') goto LAB_006f7782;
              if (DAT_027e7c80 != 0) {
                FUN_00d50b00();
              }
              local_118 = lVar11;
              local_110 = '\x01';
              cVar4 = (**(code **)(*plVar9 + 0x50))();
              if ((local_110 != '\0') && (local_118 != 0)) {
                FUN_00d50b20();
              }
              if (cVar4 != '\0') goto LAB_006f7782;
            }
            else {
              if (DAT_02727ac0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              uVar18 = FUN_00d3ed20();
              local_138 = DAT_02704000;
              if (DAT_02704000 != 0) {
                uVar18 = FUN_00d50b00();
              }
              local_130 = '\x01';
              FUN_000175c0(uVar18,&local_138);
              local_c0 = local_80;
              local_b8 = 0;
              if (local_78[0] == '\0') {
                if (local_80 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78[0] = '\0';
              }
              local_b8 = '\x01';
              (**(code **)(*plVar1 + 0x50))();
              if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_130 != '\0') && (local_138 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
        }
        else if (unaff_RDI[2] != 0) {
          FUN_00d50b00();
          FUN_00d3ecf0();
          plVar1 = (longlong *)unaff_RDI[0x11];
          plVar3 = local_80;
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
            plVar3 = local_80;
            FUN_00d50b20();
          }
          if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar3 == plVar1) {
            plVar1 = (longlong *)unaff_RDI[2];
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            plVar3 = (longlong *)unaff_RDI[0x11];
            if (plVar3 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar3 + 0x398))();
            (**(code **)(*plVar1 + 0xa08))();
            FUN_00d50b20();
            FUN_00d50b20();
          }
        }
      }
      else if (unaff_RDI[2] != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        uVar19 = (**(code **)(*(longlong *)unaff_RDI[2] + 0x528))();
        (**(code **)(*(longlong *)unaff_RDI[2] + 0x4d8))();
        if ((((float)uVar19 != fVar15) || (NAN((float)uVar19) || NAN(fVar15))) ||
           ((float)((ulonglong)uVar19 >> 0x20) != fVar21)) {
          uVar19 = (**(code **)(*(longlong *)unaff_RDI[2] + 0x528))();
          fVar15 = (float)uVar19;
          uVar20 = (**(code **)(*(longlong *)unaff_RDI[2] + 0x530))();
          fVar21 = (float)uVar20;
          if ((fVar15 == fVar21) && (!NAN(fVar15) && !NAN(fVar21))) {
            iVar5 = -(uint)(fVar15 == fVar21);
            uVar14 = -(uint)((float)((ulonglong)uVar19 >> 0x20) ==
                            (float)((ulonglong)uVar20 >> 0x20));
            iVar16 = -(uint)(extraout_XMM0_Dc == extraout_XMM0_Dc_00);
            iVar17 = -(uint)(extraout_XMM0_Dd == extraout_XMM0_Dd_00);
            if ((uVar14 & 1) != 0) {
              pplVar10 = &local_80;
              FUN_01e40eb0();
              plVar1 = local_80;
              FUN_000b6330();
              if (plVar1 == (longlong *)0x0) {
LAB_006f6e20:
                pplVar10 = (longlong **)&DAT_02802688;
              }
              else {
                (**(code **)(*plVar1 + 0x360))();
                cVar4 = FUN_00e85ea0();
                if (cVar4 == '\0') goto LAB_006f6e20;
              }
              plVar1 = *pplVar10;
              if (*(char *)(pplVar10 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar10 + 1) = 0;
              }
              if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar1 != (longlong *)0x0) {
                pplVar10 = &local_80;
                FUN_01e40eb0();
                plVar1 = local_80;
                FUN_000a94a0();
                if (plVar1 == (longlong *)0x0) {
LAB_006f75e3:
                  pplVar10 = (longlong **)&DAT_02802688;
                }
                else {
                  (**(code **)(*plVar1 + 0x360))();
                  cVar4 = FUN_00e85ea0();
                  if (cVar4 == '\0') goto LAB_006f75e3;
                }
                plVar1 = *pplVar10;
                if (*(char *)(pplVar10 + 1) == '\0') {
                  if (plVar1 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  *(undefined1 *)(pplVar10 + 1) = 0;
                }
                if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar1 != (longlong *)0x0) {
                  FUN_006c5510();
                  (**(code **)(*plVar1 + 0x4d8))();
                  local_f8 = (longlong *)CONCAT44(uVar14,iVar5);
                  iStack_f0 = iVar16;
                  iStack_ec = iVar17;
                  (**(code **)(*(longlong *)unaff_RDI[2] + 0x528))();
                  fVar15 = (float)-(uint)(local_f8._4_4_ < extraout_XMM0_Db);
                  if (((uint)fVar15 & 1) != 0) {
                    pplVar10 = &local_80;
                    FUN_01e40eb0();
                    plVar3 = local_80;
                    FUN_000a94a0();
                    if (plVar3 == (longlong *)0x0) {
LAB_006f7860:
                      pplVar10 = (longlong **)&DAT_02802688;
                    }
                    else {
                      (**(code **)(*plVar3 + 0x360))();
                      cVar4 = FUN_00e85ea0();
                      if (cVar4 == '\0') goto LAB_006f7860;
                    }
                    plVar3 = *pplVar10;
                    if (*(char *)(pplVar10 + 1) == '\0') {
                      if (plVar3 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      *(undefined1 *)(pplVar10 + 1) = 0;
                    }
                    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (plVar3 != (longlong *)0x0) {
                      local_40 = plVar9;
                      (**(code **)(*plVar3 + 0x4a0))();
                      plVar9 = local_80;
                      if (local_78[0] == '\0') {
                        if (local_80 != (longlong *)0x0) {
                          FUN_00d50b00();
                          if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          goto LAB_006f78fc;
                        }
                      }
                      else if (local_80 != (longlong *)0x0) {
LAB_006f78fc:
                        local_78[0] = '\0';
                        local_80 = (longlong *)0x0;
                        local_f8 = plVar9;
                        local_70 = plVar9;
                        local_68 = 0xffffffff;
                        local_60 = 0;
                        local_68._4_4_ = 0;
                        plVar9 = (longlong *)0x0;
                        bVar13 = false;
                        local_d8 = plVar3;
                        while( true ) {
                          if (local_68._4_4_ != 0) {
                            if (local_68._4_4_ < 1) {
                              iVar5 = -local_68._4_4_;
                            }
                            else {
                              iVar5 = (int)local_68 - local_68._4_4_;
                              local_68 = CONCAT44(local_68._4_4_,iVar5);
                              FUN_00d23690();
                              local_60 = local_60 + local_68._4_4_;
                              iVar5 = 0;
                            }
                            local_68 = CONCAT44(iVar5,(int)local_68);
                          }
                          lVar11 = (longlong)(int)local_68;
                          iVar5 = (int)local_68 + 1;
                          local_68 = CONCAT44(local_68._4_4_,iVar5);
                          if (*(int *)((longlong)local_70 + 0xc) <= iVar5) break;
                          plVar3 = *(longlong **)(local_70[2] + 8 + lVar11 * 8);
                          local_80 = plVar3;
                          local_58 = plVar3;
                          FUN_003b6560();
                          pplVar10 = (longlong **)&DAT_02802688;
                          if (plVar3 != (longlong *)0x0) {
                            (**(code **)(*plVar3 + 0x360))();
                            cVar4 = FUN_00e85ea0();
                            pplVar10 = &local_58;
                            if (cVar4 == '\0') {
                              pplVar10 = (longlong **)&DAT_02802688;
                            }
                          }
                          if (*pplVar10 != (longlong *)0x0) {
                            FUN_00543980();
                            plVar3 = local_58;
                            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            plVar12 = local_80;
                            if (plVar3 == plVar1) {
                              if (local_80 == plVar9) {
                                if ((!bVar13) && (local_80 != (longlong *)0x0)) {
                                  plVar12 = plVar9;
                                  if (local_78[0] != '\0') goto LAB_006f7a42;
                                  bVar13 = true;
                                  FUN_00d50b00();
                                }
                              }
                              else {
                                if (local_78[0] == '\0') {
                                  if (local_80 != (longlong *)0x0) {
                                    FUN_00d50b00();
                                  }
                                  if ((bVar13) && (plVar9 != (longlong *)0x0)) {
                                    FUN_00d50b20();
                                    plVar9 = plVar12;
                                    bVar13 = true;
                                    goto LAB_006f793d;
                                  }
                                }
                                else {
                                  if ((bVar13) && (plVar9 != (longlong *)0x0)) {
                                    FUN_00d50b20();
                                  }
LAB_006f7a42:
                                  local_78[0] = '\0';
                                }
                                plVar9 = plVar12;
                                bVar13 = true;
                              }
                            }
                          }
LAB_006f793d:
                        }
                        FUN_00713a90();
                        FUN_00d50b20();
                        if (plVar9 != (longlong *)0x0) {
                          local_f8 = (longlong *)(**(code **)(*(longlong *)unaff_RDI[2] + 0x528))();
                          iStack_f0 = extraout_XMM0_Dc_01;
                          iStack_ec = extraout_XMM0_Dd_01;
                          (**(code **)(*plVar1 + 0x4d8))();
                          FUN_00542220(local_f8._4_4_ - fVar15);
                          if (bVar13) {
                            FUN_00d50b20();
                          }
                        }
                      }
                      FUN_00d50b20();
                      plVar9 = local_40;
                    }
                  }
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    else if (unaff_RDI[2] != 0) {
      FUN_00d50b00();
      lVar11 = unaff_RDI[2];
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      FUN_01be8230();
      FUN_00d3ecf0();
      if (local_80 == local_58) {
        lVar2 = unaff_RDI[2];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        iVar5 = FUN_01bead40();
        bVar13 = iVar5 == 1;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        bVar13 = false;
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if ((bVar13) && (unaff_RDI[2] != 0)) {
        FUN_00d50b00();
        lVar11 = unaff_RDI[2];
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        cVar4 = FUN_01e420b0();
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (cVar4 == '\0') {
          lVar11 = unaff_RDI[2];
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
          FUN_01e42250();
          if (lVar11 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  else {
    FUN_00d3ecf0();
    FUN_006f3f00();
    plVar3 = local_58;
    plVar1 = local_80;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == plVar3) {
      FUN_006f3f00();
      lVar11 = local_e8;
      FUN_00757c60();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      if (*(int *)((longlong)local_80 + 0xc) < 2) {
        cVar4 = '\0';
      }
      else {
        FUN_01f27fe0();
        cVar4 = (**(code **)(*local_1c8 + 0x450))();
        if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (lVar11 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_006f3f00();
        FUN_00757c60();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        plVar1 = local_80;
        if (local_78[0] == '\0') {
          if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78[0] != '\0')) &&
             (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_78[0] = '\0';
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          local_40 = plVar9;
          local_78[0] = '\0';
          local_80 = (longlong *)0x0;
          local_70 = plVar1;
          local_60 = 0;
          local_68 = 0;
          if (0 < *(int *)((longlong)plVar1 + 0xc)) {
            lVar11 = 0;
            do {
              plVar9 = *(longlong **)(plVar1[2] + lVar11 * 8);
              local_80 = plVar9;
              uVar18 = (**(code **)(*unaff_RDI + 0x5d8))();
              local_1a0 = '\0';
              local_1a8 = plVar9;
              FUN_006500a0(uVar18,&local_1a8);
              plVar3 = local_58;
              if (local_50 == '\0') {
                if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                   (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_50 = '\0';
              }
              if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (longlong *)0x0) {
                cVar4 = FUN_003b7710();
                if (cVar4 != '\0') {
                  lVar11 = unaff_RDI[2];
                  if (lVar11 != 0) {
                    FUN_00d50b00();
                  }
                  local_190 = '\0';
                  local_198 = plVar9;
                  FUN_000ba510();
                  local_d0 = local_58;
                  local_c8 = 0;
                  if (local_50 == '\0') {
                    if (local_58 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_50 = '\0';
                  }
                  local_c8 = '\x01';
                  FUN_002ea230();
                  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (lVar11 != 0) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  break;
                }
                FUN_00d50b20();
              }
              lVar11 = lVar11 + 1;
              local_68 = CONCAT44(local_68._4_4_,(int)lVar11);
            } while ((int)lVar11 < *(int *)((longlong)plVar1 + 0xc));
          }
          FUN_000be170();
          FUN_00d50b20();
          plVar9 = local_40;
        }
      }
    }
  }
  local_108 = *unaff_RSI;
  local_100 = '\0';
  FUN_00d530a0();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
LAB_006f7782:
  if ((local_48[0] != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


