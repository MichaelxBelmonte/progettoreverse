// Function: FUN_01daa9c0
// Address: 01daa9c0
// Size: 5552 bytes
// Class: GNString


void FUN_01daa9c0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  bool bVar6;
  longlong local_2e0;
  char local_2d8;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
  longlong local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
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
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  int local_68;
  int iStack_64;
  int local_60;
  longlong *local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  if (*unaff_RSI == 0) {
    return;
  }
  FUN_00d6f370();
  local_2b0 = DAT_027f1fa0;
  if (DAT_027f1fa0 != 0) {
    FUN_00d50b00();
  }
  local_2a8 = '\x01';
  local_2a0 = 0;
  local_298 = '\0';
  FUN_00d710b0(&local_2a0,&local_2b0);
  if (local_80 == (longlong *)0x0) {
    FUN_00d6f370();
    local_290 = DAT_027f1fb0;
    if (DAT_027f1fb0 != 0) {
      FUN_00d50b00();
    }
    local_288 = '\x01';
    local_280 = 0;
    local_278 = '\0';
    FUN_00d710b0(&local_280,&local_290);
    if (local_58 == (longlong *)0x0) {
      FUN_00d6f370();
      local_270 = DAT_027f1fb8;
      if (DAT_027f1fb8 != 0) {
        FUN_00d50b00();
      }
      local_268 = '\x01';
      local_260 = 0;
      local_258 = '\0';
      FUN_00d710b0(&local_260,&local_270);
      bVar6 = local_2e0 == 0;
      if ((local_2d8 != '\0') && (local_2e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_258 != '\0') && (local_260 != 0)) {
        FUN_00d50b20();
      }
      if ((local_268 != '\0') && (local_270 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2b8 != '\0') && (local_2c0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar6 = false;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_278 != '\0') && (local_280 != 0)) {
      FUN_00d50b20();
    }
    if ((local_288 != '\0') && (local_290 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar6 = false;
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar6) {
    return;
  }
  FUN_00d99300();
  plVar2 = local_80;
  lVar5 = *unaff_RSI;
  if ((longlong *)lVar5 == local_80) {
    if (((char)unaff_RSI[1] != '\0') || (local_80 == (longlong *)0x0)) goto LAB_01daad27;
    if (local_78 == '\0') {
      FUN_00d50b00();
      goto LAB_01daad1f;
    }
LAB_01daac03:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  else {
    lVar1 = unaff_RSI[1];
    if (local_78 != '\0') {
      *unaff_RSI = (longlong)local_80;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01daac03;
    }
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RSI = (longlong)plVar2;
    if (((char)lVar1 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
LAB_01daad1f:
    *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01daad27:
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_027f1fe0;
  if (DAT_027f1fe0 != 0) {
    FUN_00d50b00();
  }
  local_250 = lVar5;
  local_248 = '\x01';
  cVar3 = FUN_00d90eb0();
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027f1ff0;
  lVar5 = DAT_027f1fe8;
  if (cVar3 == '\0') {
    if (DAT_027f1ff0 != 0) {
      FUN_00d50b00();
    }
    local_240 = lVar1;
    local_238 = '\x01';
    cVar3 = FUN_00d90eb0();
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027f2000;
    lVar5 = DAT_027f1ff8;
    if (cVar3 == '\0') {
      if (DAT_027f2000 != 0) {
        FUN_00d50b00();
      }
      local_230 = lVar1;
      local_228 = '\x01';
      cVar3 = FUN_00d90eb0();
      if ((local_228 != '\0') && (local_230 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027f2010;
      lVar5 = DAT_027f2008;
      if (cVar3 == '\0') {
        if (DAT_027f2010 != 0) {
          FUN_00d50b00();
        }
        local_220 = lVar1;
        local_218 = '\x01';
        cVar3 = FUN_00d90eb0();
        lVar5 = DAT_027f2018;
        cVar4 = '\x01';
        if (cVar3 == '\0') {
          if (DAT_027f2018 != 0) {
            FUN_00d50b00();
          }
          local_210 = lVar5;
          local_208 = '\x01';
          cVar4 = FUN_00d90eb0();
          if ((local_208 != '\0') && (local_210 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_218 != '\0') && (local_220 != 0)) {
          FUN_00d50b20();
        }
        lVar1 = DAT_027f2028;
        lVar5 = DAT_027f2020;
        if (cVar4 == '\0') {
          if (DAT_027f2028 != 0) {
            FUN_00d50b00();
          }
          local_200 = lVar1;
          local_1f8 = '\x01';
          cVar3 = FUN_00d90eb0();
          lVar5 = DAT_027f2030;
          cVar4 = '\x01';
          if (cVar3 == '\0') {
            if (DAT_027f2030 != 0) {
              FUN_00d50b00();
            }
            local_1f0 = lVar5;
            local_1e8 = '\x01';
            cVar4 = FUN_00d90eb0();
            if ((local_1e8 != '\0') && (local_1f0 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_1f8 != '\0') && (local_200 != 0)) {
            FUN_00d50b20();
          }
          lVar1 = DAT_027f2040;
          lVar5 = DAT_027f2038;
          if (cVar4 == '\0') {
            if (DAT_027f2040 != 0) {
              FUN_00d50b00();
            }
            local_1e0 = lVar1;
            local_1d8 = '\x01';
            cVar3 = FUN_00d90eb0();
            lVar5 = DAT_027f2048;
            cVar4 = '\x01';
            if (cVar3 == '\0') {
              if (DAT_027f2048 != 0) {
                FUN_00d50b00();
              }
              local_1d0 = lVar5;
              local_1c8 = '\x01';
              cVar4 = FUN_00d90eb0();
              if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_1d8 != '\0') && (local_1e0 != 0)) {
              FUN_00d50b20();
            }
            lVar1 = DAT_027f2058;
            lVar5 = DAT_027f2050;
            if (cVar4 == '\0') {
              if (DAT_027f2058 != 0) {
                FUN_00d50b00();
              }
              local_1c0 = lVar1;
              local_1b8 = '\x01';
              cVar3 = FUN_00d90eb0();
              lVar5 = DAT_027f2060;
              cVar4 = '\x01';
              if (cVar3 == '\0') {
                if (DAT_027f2060 != 0) {
                  FUN_00d50b00();
                }
                local_1b0 = lVar5;
                local_1a8 = '\x01';
                cVar4 = FUN_00d90eb0();
                if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                FUN_00d50b20();
              }
              lVar1 = DAT_027f2070;
              lVar5 = DAT_027f2068;
              if (cVar4 == '\0') {
                if (DAT_027f2070 != 0) {
                  FUN_00d50b00();
                }
                local_1a0 = lVar1;
                local_198 = '\x01';
                cVar3 = FUN_00d90eb0();
                lVar5 = DAT_027f2078;
                cVar4 = '\x01';
                if (cVar3 == '\0') {
                  if (DAT_027f2078 != 0) {
                    FUN_00d50b00();
                  }
                  local_190 = lVar5;
                  local_188 = '\x01';
                  cVar4 = FUN_00d90eb0();
                  if ((local_188 != '\0') && (local_190 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_198 != '\0') && (local_1a0 != 0)) {
                  FUN_00d50b20();
                }
                lVar1 = DAT_027f2088;
                lVar5 = DAT_027f2080;
                if (cVar4 == '\0') {
                  if (DAT_027f2088 != 0) {
                    FUN_00d50b00();
                  }
                  local_180 = lVar1;
                  local_178 = '\x01';
                  cVar3 = FUN_00d90eb0();
                  if ((local_178 != '\0') && (local_180 != 0)) {
                    FUN_00d50b20();
                  }
                  lVar1 = DAT_027f2098;
                  lVar5 = DAT_027f2090;
                  if (cVar3 == '\0') {
                    if (DAT_027f2098 != 0) {
                      FUN_00d50b00();
                    }
                    local_170 = lVar1;
                    local_168 = '\x01';
                    cVar3 = FUN_00d90eb0();
                    if ((local_168 != '\0') && (local_170 != 0)) {
                      FUN_00d50b20();
                    }
                    lVar1 = DAT_027f20a8;
                    lVar5 = DAT_027f20a0;
                    if (cVar3 == '\0') {
                      if (DAT_027f20a8 != 0) {
                        FUN_00d50b00();
                      }
                      local_160 = lVar1;
                      local_158 = '\x01';
                      cVar3 = FUN_00d90eb0();
                      lVar5 = DAT_027f20b0;
                      cVar4 = '\x01';
                      if (cVar3 == '\0') {
                        if (DAT_027f20b0 != 0) {
                          FUN_00d50b00();
                        }
                        local_150 = lVar5;
                        local_148 = '\x01';
                        cVar4 = FUN_00d90eb0();
                        if ((local_148 != '\0') && (local_150 != 0)) {
                          FUN_00d50b20();
                        }
                      }
                      if ((local_158 != '\0') && (local_160 != 0)) {
                        FUN_00d50b20();
                      }
                      lVar1 = DAT_027f20c0;
                      lVar5 = DAT_027f20b8;
                      if (cVar4 == '\0') {
                        if (DAT_027f20c0 != 0) {
                          FUN_00d50b00();
                        }
                        local_140 = lVar1;
                        local_138 = '\x01';
                        cVar3 = FUN_00d90eb0();
                        if ((local_138 != '\0') && (local_140 != 0)) {
                          FUN_00d50b20();
                        }
                        lVar1 = DAT_027f20d0;
                        lVar5 = DAT_027f20c8;
                        if (cVar3 == '\0') {
                          if (DAT_027f20d0 != 0) {
                            FUN_00d50b00();
                          }
                          local_130 = lVar1;
                          local_128 = '\x01';
                          cVar3 = FUN_00d90eb0();
                          if ((local_128 != '\0') && (local_130 != 0)) {
                            FUN_00d50b20();
                          }
                          lVar1 = DAT_027f20e0;
                          lVar5 = DAT_027f20d8;
                          if (cVar3 == '\0') {
                            if (DAT_027f20e0 != 0) {
                              FUN_00d50b00();
                            }
                            local_120 = lVar1;
                            local_118 = '\x01';
                            cVar3 = FUN_00d90eb0();
                            if ((local_118 != '\0') && (local_120 != 0)) {
                              FUN_00d50b20();
                            }
                            lVar1 = DAT_027f20f0;
                            lVar5 = DAT_027f20e8;
                            if (cVar3 == '\0') {
                              if (DAT_027f20f0 != 0) {
                                FUN_00d50b00();
                              }
                              local_110 = lVar1;
                              local_108 = '\x01';
                              cVar3 = FUN_00d90eb0();
                              lVar5 = DAT_027f20f8;
                              cVar4 = '\x01';
                              if (cVar3 == '\0') {
                                if (DAT_027f20f8 != 0) {
                                  FUN_00d50b00();
                                }
                                local_100 = lVar5;
                                local_f8 = '\x01';
                                cVar3 = FUN_00d90eb0();
                                lVar5 = DAT_027dbf08;
                                cVar4 = '\x01';
                                if (cVar3 == '\0') {
                                  if (DAT_027dbf08 != 0) {
                                    FUN_00d50b00();
                                  }
                                  local_f0 = lVar5;
                                  local_e8 = '\x01';
                                  cVar4 = FUN_00d90eb0();
                                  if ((local_e8 != '\0') && (local_f0 != 0)) {
                                    FUN_00d50b20();
                                  }
                                }
                                if ((local_f8 != '\0') && (local_100 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                              if ((local_108 != '\0') && (local_110 != 0)) {
                                FUN_00d50b20();
                              }
                              lVar5 = DAT_027f2100;
                              if (cVar4 == '\0') goto LAB_01dabae8;
                              if (DAT_027f2100 != 0) {
                                FUN_00d50b00();
                              }
                              lVar1 = *unaff_RSI;
                              if (lVar1 == lVar5) {
                                if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
                                  if (lVar5 != 0) {
                                    FUN_00d50b20();
                                  }
                                  goto LAB_01dabae8;
                                }
                              }
                              else {
                                *unaff_RSI = lVar5;
                                if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                            }
                            else {
                              if (DAT_027f20e8 != 0) {
                                FUN_00d50b00();
                              }
                              lVar1 = *unaff_RSI;
                              if (lVar1 == lVar5) {
                                if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
                                  if (lVar5 != 0) {
                                    FUN_00d50b20();
                                  }
                                  goto LAB_01dabae8;
                                }
                              }
                              else {
                                *unaff_RSI = lVar5;
                                if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                            }
                          }
                          else {
                            if (DAT_027f20d8 != 0) {
                              FUN_00d50b00();
                            }
                            lVar1 = *unaff_RSI;
                            if (lVar1 == lVar5) {
                              if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
                                if (lVar5 != 0) {
                                  FUN_00d50b20();
                                }
                                goto LAB_01dabae8;
                              }
                            }
                            else {
                              *unaff_RSI = lVar5;
                              if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                          }
                        }
                        else {
                          if (DAT_027f20c8 != 0) {
                            FUN_00d50b00();
                          }
                          lVar1 = *unaff_RSI;
                          if (lVar1 == lVar5) {
                            if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
                              if (lVar5 != 0) {
                                FUN_00d50b20();
                              }
                              goto LAB_01dabae8;
                            }
                          }
                          else {
                            *unaff_RSI = lVar5;
                            if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
                              FUN_00d50b20();
                            }
                          }
                        }
                      }
                      else {
                        if (DAT_027f20b8 != 0) {
                          FUN_00d50b00();
                        }
                        lVar1 = *unaff_RSI;
                        if (lVar1 == lVar5) {
                          if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
                            if (lVar5 != 0) {
                              FUN_00d50b20();
                            }
                            goto LAB_01dabae8;
                          }
                        }
                        else {
                          *unaff_RSI = lVar5;
                          if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
                            FUN_00d50b20();
                          }
                        }
                      }
                    }
                    else {
                      if (DAT_027f20a0 != 0) {
                        FUN_00d50b00();
                      }
                      lVar1 = *unaff_RSI;
                      if (lVar1 == lVar5) {
                        if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
                          if (lVar5 != 0) {
                            FUN_00d50b20();
                          }
                          goto LAB_01dabae8;
                        }
                      }
                      else {
                        *unaff_RSI = lVar5;
                        if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                  }
                  else {
                    if (DAT_027f2090 != 0) {
                      FUN_00d50b00();
                    }
                    lVar1 = *unaff_RSI;
                    if (lVar1 == lVar5) {
                      if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
                        if (lVar5 != 0) {
                          FUN_00d50b20();
                        }
                        goto LAB_01dabae8;
                      }
                    }
                    else {
                      *unaff_RSI = lVar5;
                      if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
                else {
                  if (DAT_027f2080 != 0) {
                    FUN_00d50b00();
                  }
                  lVar1 = *unaff_RSI;
                  if (lVar1 == lVar5) {
                    if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
                      if (lVar5 != 0) {
                        FUN_00d50b20();
                      }
                      goto LAB_01dabae8;
                    }
                  }
                  else {
                    *unaff_RSI = lVar5;
                    if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
              else {
                if (DAT_027f2068 != 0) {
                  FUN_00d50b00();
                }
                lVar1 = *unaff_RSI;
                if (lVar1 == lVar5) {
                  if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
                    if (lVar5 != 0) {
                      FUN_00d50b20();
                    }
                    goto LAB_01dabae8;
                  }
                }
                else {
                  *unaff_RSI = lVar5;
                  if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
            else {
              if (DAT_027f2050 != 0) {
                FUN_00d50b00();
              }
              lVar1 = *unaff_RSI;
              if (lVar1 == lVar5) {
                if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
                  if (lVar5 != 0) {
                    FUN_00d50b20();
                  }
                  goto LAB_01dabae8;
                }
              }
              else {
                *unaff_RSI = lVar5;
                if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
          else {
            if (DAT_027f2038 != 0) {
              FUN_00d50b00();
            }
            lVar1 = *unaff_RSI;
            if (lVar1 == lVar5) {
              if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
                if (lVar5 != 0) {
                  FUN_00d50b20();
                }
                goto LAB_01dabae8;
              }
            }
            else {
              *unaff_RSI = lVar5;
              if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        else {
          if (DAT_027f2020 != 0) {
            FUN_00d50b00();
          }
          lVar1 = *unaff_RSI;
          if (lVar1 == lVar5) {
            if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
              if (lVar5 != 0) {
                FUN_00d50b20();
              }
              goto LAB_01dabae8;
            }
          }
          else {
            *unaff_RSI = lVar5;
            if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        if (DAT_027f2008 != 0) {
          FUN_00d50b00();
        }
        lVar1 = *unaff_RSI;
        if (lVar1 == lVar5) {
          if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            goto LAB_01dabae8;
          }
        }
        else {
          *unaff_RSI = lVar5;
          if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      if (DAT_027f1ff8 != 0) {
        FUN_00d50b00();
      }
      lVar1 = *unaff_RSI;
      if (lVar1 == lVar5) {
        if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          goto LAB_01dabae8;
        }
      }
      else {
        *unaff_RSI = lVar5;
        if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (DAT_027f1fe8 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    if (lVar1 == lVar5) {
      if (((char)unaff_RSI[1] != '\0') || (lVar5 == 0)) {
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        goto LAB_01dabae8;
      }
    }
    else {
      *unaff_RSI = lVar5;
      if (((char)unaff_RSI[1] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01dabae8:
  FUN_01f27fe0();
  (**(code **)(*local_a8 + 0x610))();
  plVar2 = local_58;
  local_e0 = DAT_02800ff0;
  if (DAT_02800ff0 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  (**(code **)(*plVar2 + 0x400))();
  (**(code **)(*local_40 + 1000))();
  plVar2 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_78 = '\0';
    local_80 = (longlong *)0x0;
    local_b0 = (longlong)plVar2;
    local_70 = (longlong)plVar2;
    local_68 = -1;
    iStack_64 = 0;
    local_60 = 0;
    local_88 = (longlong *)0x0;
    do {
      do {
        do {
          if (iStack_64 != 0) {
            if (iStack_64 < 1) {
              iStack_64 = -iStack_64;
            }
            else {
              local_68 = local_68 - iStack_64;
              FUN_00d23690();
              local_60 = local_60 + iStack_64;
              iStack_64 = 0;
            }
          }
          lVar5 = (longlong)local_68;
          local_68 = local_68 + 1;
          bVar6 = true;
          if (*(int *)(local_70 + 0xc) <= local_68) goto LAB_01dabe0b;
          local_80 = *(longlong **)(*(longlong *)(local_70 + 0x10) + 8 + lVar5 * 8);
          cVar3 = (**(code **)(*local_80 + 0x398))();
        } while (cVar3 == '\0');
        (**(code **)(*local_80 + 0x370))();
        FUN_01f83a60();
        local_98 = local_58;
        local_90 = 0;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_90 = '\x01';
        cVar3 = (**(code **)(*local_40 + 0x50))();
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      } while (cVar3 == '\0');
      (**(code **)(*local_80 + 0x368))();
      local_d0 = *unaff_RSI;
      local_c8 = '\0';
      cVar3 = FUN_00d90eb0();
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    } while (cVar3 == '\0');
    local_88 = local_80;
    if (local_80 == (longlong *)0x0) {
      local_88 = (longlong *)0x0;
    }
    else {
      if (local_78 == '\0') {
        FUN_00d50b00();
      }
      else {
        local_78 = '\0';
      }
      bVar6 = false;
    }
LAB_01dabe0b:
    FUN_00115910();
    FUN_00d50b20();
    if (local_88 != (longlong *)0x0) {
      FUN_01da4890();
      local_c0 = local_88;
      local_b8 = '\0';
      (**(code **)(*local_80 + 0x450))();
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != '\0') {
        FUN_00d50b20();
      }
      FUN_01da4890();
      plVar2 = local_80;
      FUN_01f27fe0();
      FUN_01f28c30();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01da8a40();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar6) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


