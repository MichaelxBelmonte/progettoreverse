// Function: FUN_00b22cb0
// Address: 00b22cb0
// Size: 3878 bytes
// Class: Unknown
// String references:
//   "%@ + %@"
//   "nartbolg"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b22cb0(void)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  undefined7 uVar15;
  ulonglong local_270;
  char local_268 [8];
  undefined4 local_260;
  ulonglong local_258;
  ulonglong local_250;
  ulonglong local_248;
  ulonglong local_240;
  undefined8 *local_238;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  ulonglong local_208;
  longlong local_200;
  char local_1f8;
  longlong *local_1f0;
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  int local_14c;
  ulonglong local_148;
  char local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  undefined4 local_104;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  int local_cc;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined4 local_6c;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  uint local_44;
  ulonglong local_40;
  longlong *local_38;
  
  FUN_00d403d0();
  local_200 = DAT_027fff38;
  if (DAT_027fff38 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = '\x01';
  FUN_01f27fe0();
  local_100 = local_c8;
  local_f8 = 0;
  uVar10 = DAT_0275e108;
  if (local_c0 == '\0') {
    if (local_c8 != 0) {
      FUN_00d50b00();
      uVar10 = DAT_0275e108;
    }
  }
  else {
    local_c0 = '\0';
  }
  DAT_0275e108 = uVar10;
  if (uVar10 == 0) {
    local_f8 = '\x01';
    local_b0 = '\0';
    local_b8 = 0;
    local_e8 = 0;
  }
  else {
    local_f8 = '\x01';
    FUN_00d50b00();
    uVar8 = DAT_0275e108;
    if (DAT_0275e108 != 0) {
      FUN_00d50b00();
    }
    plVar12 = DAT_027092c0;
    local_50 = uVar8;
    if (DAT_027092c0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_148 = uVar8;
    local_d8 = plVar12;
    local_60 = plVar12;
    FUN_00083ea0(2,&local_d8);
    FUN_000b4da0();
    local_e8 = local_b8;
    local_e0 = 0;
    if (local_b0 == '\0') {
      if (local_b8 == 0) {
        local_e8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_b0 = '\0';
    }
  }
  uVar8 = local_50;
  plVar12 = local_60;
  local_e0 = '\x01';
  FUN_00d40470(&local_e8,&local_100,3,3);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (uVar10 != 0) {
    local_238 = (undefined8 *)&DAT_0253d630;
    if ((local_210 != '\0') && (local_218 != 0)) {
      FUN_00d50b20();
    }
    local_238 = &DAT_024c5048;
    if ((local_220 != '\0') && (local_228 != 0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (uVar8 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_d0 = DAT_023d5884;
  local_d8 = DAT_023d587c;
  local_44 = 0;
  iVar5 = _AudioObjectGetPropertyDataSize(0,0,&local_44);
  uVar2 = local_44;
  if (iVar5 == 0) {
    uVar10 = (ulonglong)local_44;
    lVar7 = FUN_00e83010();
    iVar5 = _AudioObjectGetPropertyData(0,0,&local_44,lVar7);
    if (iVar5 == 0) {
      local_44 = 4;
      local_6c = 0xffffffff;
      local_d8 = (longlong *)CONCAT44(local_d8._4_4_,0x644f7574);
      iVar5 = _AudioObjectGetPropertyData(0,0,&local_44,&local_6c);
      if (iVar5 != 0) {
        local_6c = 0xffffffff;
      }
      if (3 < uVar2) {
        uVar2 = uVar2 >> 2;
        local_250 = (ulonglong)uVar2;
        local_208 = 1;
        if (1 < uVar2) {
          local_208 = (ulonglong)uVar2;
        }
        uVar8 = 0;
        local_240 = uVar10;
        local_138 = lVar7;
        do {
          local_50 = uVar8;
          FUN_00b21830();
          plVar12 = local_a0;
          if ((local_98 == '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          local_d8 = (longlong *)CONCAT44(local_d8._4_4_,0x7472616e);
          local_44 = 4;
          iVar5 = _AudioObjectGetPropertyData(0,0,&local_44,&local_cc);
          if (iVar5 == 0) {
            if (local_cc != 0x61697270) goto LAB_00b23140;
          }
          else {
            local_cc = 0;
LAB_00b23140:
            iVar5 = FUN_00b21a00();
            if (0 < iVar5) {
              iVar5 = FUN_00b21a00();
              if (((iVar5 == 0) && (plVar12 != (longlong *)0x0)) && (3 < (uint)uVar10)) {
                uVar10 = 0;
                do {
                  if (local_50 != uVar10) {
                    FUN_00b21830();
                    plVar11 = local_a0;
                    if (local_98 == '\0') {
                      if (local_a0 != (longlong *)0x0) {
                        FUN_00d50b00();
                        goto LAB_00b2327e;
                      }
                    }
                    else if (local_a0 != (longlong *)0x0) {
LAB_00b2327e:
                      local_1f0 = plVar11;
                      local_1e8 = '\0';
                      cVar4 = (**(code **)(*plVar12 + 0x50))();
                      if (cVar4 == '\0') {
                        bVar3 = false;
                      }
                      else {
                        iVar5 = FUN_00b21a00();
                        bVar3 = 0 < iVar5;
                      }
                      if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      lVar7 = local_138;
                      if (bVar3) {
                        uVar9 = FUN_00b244d0();
                        plVar11 = local_a0;
                        if (local_a0 == (longlong *)0x0) {
                          plVar11 = (longlong *)0x0;
                          local_40 = 0;
                        }
                        else {
                          local_40 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                          if (local_98 == '\0') {
                            FUN_00d50b00();
                          }
                        }
                        if (plVar11 != (longlong *)0x0) {
                          local_1d8 = '\0';
                          local_1e0 = plVar11;
                          FUN_00b15e60();
                          if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        FUN_00d50b20();
                        goto LAB_00b233b6;
                      }
                      FUN_00d50b20();
                      lVar7 = local_138;
                    }
                  }
                  uVar10 = uVar10 + 1;
                } while (local_208 != uVar10);
                local_40 = 0;
                plVar11 = (longlong *)0x0;
LAB_00b233b6:
                if ((plVar11 == (longlong *)0x0) && (local_cc == 0x626c746e)) {
                  uVar10 = 0;
                  plVar11 = (longlong *)0x0;
                  local_58 = plVar12;
                  do {
                    if (uVar10 != local_50) {
                      uVar1 = *(undefined4 *)(lVar7 + uVar10 * 4);
                      local_38 = plVar11;
                      iVar5 = FUN_00b21a00();
                      iVar6 = FUN_00b21a00();
                      plVar11 = local_38;
                      if ((0 < iVar5) && (iVar6 == 0)) {
                        local_260 = ram0x023d5890;
                        local_268[0] = s_nartbolg_023d5888[0];
                        local_268[1] = s_nartbolg_023d5888[1];
                        local_268[2] = s_nartbolg_023d5888[2];
                        local_268[3] = s_nartbolg_023d5888[3];
                        local_268[4] = s_nartbolg_023d5888[4];
                        local_268[5] = s_nartbolg_023d5888[5];
                        local_268[6] = s_nartbolg_023d5888[6];
                        local_268[7] = s_nartbolg_023d5888[7];
                        local_44 = 4;
                        iVar5 = _AudioObjectGetPropertyData(0,0,&local_44,&local_14c);
                        lVar13 = DAT_027259e0;
                        local_248 = uVar10;
                        if ((iVar5 == 0) && (local_14c == 0x626c746e)) {
                          local_104 = uVar1;
                          if (DAT_027259e0 != 0) {
                            FUN_00d50b00();
                          }
                          local_1d0 = lVar13;
                          local_1c8 = '\0';
                          local_a8 = lVar13;
                          FUN_00d91000(1,&local_1d0);
                          plVar12 = local_a0;
                          if (local_98 == '\0') {
                            if (((local_a0 != (longlong *)0x0) && (FUN_00d50b00(), local_98 != '\0')
                                ) && (local_a0 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                          }
                          else {
                            local_98 = '\0';
                          }
                          if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                            FUN_00d50b20();
                          }
                          uVar2 = *(uint *)((longlong)plVar12 + 0xc);
                          local_f0 = plVar12;
                          FUN_00b21830();
                          plVar11 = local_a0;
                          if ((local_98 == '\0') && (local_a0 != (longlong *)0x0)) {
                            FUN_00d50b00();
                          }
                          local_1c0 = lVar13;
                          local_1b8 = '\0';
                          local_130 = plVar11;
                          FUN_00d91000(1,&local_1c0);
                          local_60 = local_a0;
                          if (local_98 == '\0') {
                            if (((local_a0 != (longlong *)0x0) && (FUN_00d50b00(), local_98 != '\0')
                                ) && (local_a0 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                          }
                          else {
                            local_98 = '\0';
                          }
                          if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                            FUN_00d50b20();
                          }
                          uVar10 = (ulonglong)*(uint *)((longlong)local_60 + 0xc);
                          uVar8 = 0;
                          local_68 = uVar10;
                          if ((0 < (int)uVar2) && (0 < (int)*(uint *)((longlong)local_60 + 0xc))) {
                            uVar8 = 0;
                            do {
                              plVar12 = *(longlong **)(plVar12[2] + uVar8 * 8);
                              lVar7 = *(longlong *)(local_60[2] + uVar8 * 8);
                              local_120 = 0;
                              if (lVar7 != 0) {
                                FUN_00d50b00();
                              }
                              local_120 = '\x01';
                              local_128 = lVar7;
                              cVar4 = (**(code **)(*plVar12 + 0x50))();
                              plVar12 = local_f0;
                              if ((local_120 != '\0') && (local_128 != 0)) {
                                FUN_00d50b20();
                              }
                              lVar13 = local_a8;
                            } while (((cVar4 != '\0') && (uVar8 = uVar8 + 1, uVar8 < uVar2)) &&
                                    (uVar8 < uVar10));
                          }
                          plVar11 = local_60;
                          uVar14 = (uint)uVar8;
                          FUN_00d23690();
                          if ((uVar2 - uVar14 != 0 && (int)uVar14 <= (int)uVar2) &&
                             (iVar5 = (int)local_68, 0 < iVar5)) {
                            local_258 = (ulonglong)(uVar2 - uVar14);
                            uVar8 = (ulonglong)(~uVar14 + uVar2);
                            uVar10 = 0;
                            do {
                              iVar5 = iVar5 + -1;
                              plVar12 = *(longlong **)(plVar11[2] + (longlong)iVar5 * 8);
                              lVar7 = *(longlong *)(local_f0[2] + (longlong)(int)uVar8 * 8);
                              local_110 = 0;
                              if (lVar7 != 0) {
                                FUN_00d50b00();
                              }
                              local_110 = '\x01';
                              local_118 = lVar7;
                              cVar4 = (**(code **)(*plVar12 + 0x50))();
                              if ((local_110 != '\0') && (local_118 != 0)) {
                                FUN_00d50b20();
                              }
                              plVar11 = local_60;
                              lVar13 = local_a8;
                            } while (((cVar4 != '\0') && (uVar10 = uVar10 + 1, uVar10 < local_258))
                                    && (uVar8 = (ulonglong)((int)uVar8 - 1), uVar10 < local_68));
                          }
                          FUN_00d23690();
                          plVar12 = local_58;
                          local_1a8 = '\0';
                          local_198 = '\0';
                          local_1b0 = plVar11;
                          local_1a0 = lVar13;
                          FUN_00d95130();
                          lVar7 = local_138;
                          local_190 = local_f0;
                          local_188 = '\0';
                          local_178 = '\0';
                          local_180 = lVar13;
                          FUN_00d95130();
                          local_270 = local_148;
                          FUN_00083ea0(2,&local_270);
                          FUN_00d8cb40();
                          local_68 = local_c8;
                          if (local_c0 == '\0') {
                            if (((local_c8 != 0) && (FUN_00d50b00(), local_c0 != '\0')) &&
                               (local_c8 != 0)) {
                              FUN_00d50b20();
                            }
                          }
                          else {
                            local_c0 = '\0';
                          }
                          local_a0 = (longlong *)&DAT_0253d630;
                          if ((local_78 != '\0') && (local_80 != 0)) {
                            FUN_00d50b20();
                          }
                          local_a0 = &DAT_024c5048;
                          if ((local_88 != '\0') && (local_90 != 0)) {
                            FUN_00d50b20();
                          }
                          if ((local_140 != '\0') && (local_148 != 0)) {
                            FUN_00d50b20();
                          }
                          if ((local_178 != '\0') && (local_180 != 0)) {
                            FUN_00d50b20();
                          }
                          if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((local_b0 != '\0') && (local_b8 != 0)) {
                            FUN_00d50b20();
                          }
                          if ((local_198 != '\0') && (local_1a0 != 0)) {
                            FUN_00d50b20();
                          }
                          if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          FUN_00b244d0();
                          plVar11 = local_a0;
                          uVar15 = (undefined7)(uVar8 >> 8);
                          if (local_a0 == local_38) {
                            plVar11 = local_38;
                            if (((char)local_40 == '\0') && (local_a0 != (longlong *)0x0)) {
                              if (local_98 == '\0') {
                                FUN_00d50b00();
                                plVar11 = local_38;
                              }
                              goto joined_r0x00b23a99;
                            }
                            if ((local_98 == '\0') || (local_a0 == (longlong *)0x0)) {
                              uVar10 = local_40 & 0xffffffff;
                            }
                            else {
                              FUN_00d50b20();
                              uVar10 = local_40 & 0xffffffff;
                              plVar11 = local_38;
                            }
                          }
                          else if (local_98 == '\0') {
                            if (local_a0 != (longlong *)0x0) {
                              FUN_00d50b00();
                            }
                            uVar10 = CONCAT71(uVar15,1);
                            if (((char)local_40 == '\0') || (local_38 == (longlong *)0x0))
                            goto joined_r0x00b23a99;
                            FUN_00d50b20();
                          }
                          else {
                            uVar10 = CONCAT71(uVar15,1);
                            if (((char)local_40 == '\0') || (local_38 == (longlong *)0x0)) {
joined_r0x00b23a99:
                              uVar10 = CONCAT71(uVar15,1);
                            }
                            else {
                              FUN_00d50b20();
                            }
                          }
                          if (plVar11 != (longlong *)0x0) {
                            local_168 = '\0';
                            local_170 = plVar11;
                            FUN_00b15e60();
                            if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                          }
                          if (local_68 != 0) {
                            FUN_00d50b20();
                          }
                          FUN_00d50b20();
                          if (local_130 != (longlong *)0x0) {
                            FUN_00d50b20();
                          }
                          FUN_00d50b20();
                          if (local_a8 != 0) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          uVar10 = local_40 & 0xffffffff;
                        }
                        local_40 = uVar10 & 0xffffffff;
                        uVar10 = local_248;
                      }
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < local_250);
                }
                uVar10 = local_240;
                if (plVar11 == (longlong *)0x0) goto LAB_00b23171;
                if ((char)local_40 == '\0') goto LAB_00b23bd8;
              }
              else {
LAB_00b23171:
                FUN_00b244d0();
                plVar11 = local_a0;
                if (local_a0 == (longlong *)0x0) goto LAB_00b23bd8;
                if (local_98 == '\0') {
                  FUN_00d50b00();
                }
                local_160 = plVar11;
                local_158 = '\0';
                FUN_00b15e60();
                if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
          }
LAB_00b23bd8:
          if (plVar12 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          uVar8 = local_50 + 1;
        } while (uVar8 != local_208);
      }
    }
    FUN_00e83070();
  }
  return;
}


