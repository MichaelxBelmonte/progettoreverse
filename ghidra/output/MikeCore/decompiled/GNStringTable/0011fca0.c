// Function: FUN_0011fca0
// Address: 0011fca0
// Size: 5556 bytes
// Class: GNStringTable
// String references:
//   "track%I"
//   "%@.%I"


/* WARNING: Removing unreachable block (ram,0x001203f2) */
/* WARNING: Removing unreachable block (ram,0x001203fe) */

ulonglong FUN_0011fca0(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulonglong in_RAX;
  longlong *plVar6;
  undefined8 uVar7;
  longlong **pplVar8;
  undefined8 *puVar9;
  longlong lVar10;
  void *pvVar11;
  pthread_key_t pVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong unaff_RDI;
  longlong *plVar15;
  bool bVar16;
  longlong *local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  undefined8 *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  int local_168;
  int local_164;
  longlong local_160;
  char local_158;
  longlong local_150;
  undefined8 *local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  int local_80;
  longlong *local_78;
  uint local_70;
  longlong *local_68;
  char local_60;
  int local_58;
  longlong *local_50;
  uint local_48;
  int local_44;
  undefined8 local_40;
  
  if (param_2 != 0) {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    iVar5 = FUN_01d70da0();
    lVar10 = *(longlong *)
              (*(longlong *)(*(longlong *)(unaff_RDI + 0x150) + 0x10) + (longlong)iVar5 * 8);
    if (lVar10 == 0) {
      iVar5 = 1;
      local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
LAB_0012077e:
      FUN_00d50b20();
    }
    else {
      local_b8 = lVar10;
      FUN_00d50b00();
      local_b0 = plVar6;
      if (((*(char *)(unaff_RDI + 0xb0) == '\0') && (iVar5 = FUN_003b9000(), iVar5 != 2)) &&
         (iVar5 = FUN_003b9000(), iVar5 != 3)) {
        do {
          plVar6 = DAT_02804040;
          local_138 = 0;
          if (DAT_02804040 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          lVar10 = DAT_026e1898;
          local_140 = plVar6;
          local_138 = '\x01';
          local_1b8 = 0;
          local_1b0 = '\0';
          if (DAT_026e1898 != 0) {
            FUN_00d50b00();
          }
          local_1a8 = lVar10;
          local_1a0 = '\x01';
          FUN_00e427c0();
          plVar6 = local_78;
          local_f8 = 0;
          if ((char)local_70 == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = local_70 & 0xffffff00;
          }
          local_f8 = '\x01';
          local_100 = plVar6;
          uVar7 = FUN_01f4f940(1,&local_1b8,0,&local_100);
          plVar6 = local_a0;
          if (local_98[0] == '\0') {
            if (((local_a0 != (longlong *)0x0) && (uVar7 = FUN_00d50b00(), local_98[0] != '\0')) &&
               (local_a0 != (longlong *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
          }
          else {
            local_98[0] = '\0';
          }
          if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
            uVar7 = FUN_00d50b20();
          }
          if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            uVar7 = FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
            uVar7 = FUN_00d50b20();
          }
          if ((local_1b0 != '\0') && (local_1b8 != 0)) {
            uVar7 = FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
            uVar7 = FUN_00d50b20();
          }
          local_40 = (longlong *)
                     CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1));
          iVar5 = 1;
          if (plVar6 == (longlong *)0x0) goto LAB_00120766;
          iVar5 = 1;
          if (*(int *)((longlong)plVar6 + 0xc) == 1) {
            FUN_00d23310();
            plVar6 = local_a0;
            local_78 = (longlong *)CONCAT71(local_78._1_7_,local_98[0]);
            pplVar8 = (longlong **)local_98;
            if (local_98[0] == '\0') {
              pplVar8 = &local_78;
            }
            *(char *)pplVar8 = '\0';
            if ((local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar14 = DAT_02804040;
            if (DAT_02804040 != plVar6) {
              if (plVar6 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              DAT_02804040 = plVar6;
              if (plVar14 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            if ((plVar6 != (longlong *)0x0) && (DAT_02804048 == '\0')) {
              DAT_02804048 = '\x01';
              FUN_00e8cb90();
            }
            if (((char)local_78 != '\0') && (plVar6 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            bVar3 = (**(code **)(*DAT_02804040 + 0x3a0))();
            iVar5 = (uint)bVar3 << 2;
          }
          FUN_00d50b20();
        } while (iVar5 == 0);
        if (iVar5 == 4) {
          puVar9 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = &DAT_02572358;
          (*DAT_02572370)();
          local_148 = puVar9;
          uVar7 = FUN_01d2b630();
          plVar6 = local_a0;
          if (local_98[0] == '\0') {
            if (local_a0 == (longlong *)0x0) goto LAB_00121121;
            FUN_00d50b00();
            if ((local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00120839:
            local_98[0] = '\0';
            local_a0 = (longlong *)0x0;
            local_90 = plVar6;
            local_88 = 0xffffffff;
            local_80 = 0;
            local_40 = (longlong *)CONCAT44(local_40._4_4_,0xffffff01);
            while( true ) {
              lVar10 = (longlong)(int)local_88;
              local_168 = (int)local_88 + 1;
              local_88 = CONCAT44(local_88._4_4_,local_168);
              local_164 = *(int *)((longlong)local_90 + 0xc);
              if (local_164 <= local_168) break;
              lVar13 = local_90[2];
              plVar6 = *(longlong **)(lVar13 + 8 + lVar10 * 8);
              local_a0 = plVar6;
              if (local_98[0] == '\0') {
                if (plVar6 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_98[0] = '\0';
              }
              pVar12 = (pthread_key_t)lVar13;
              local_c0 = plVar6;
              cVar4 = FUN_003b2350();
              if (cVar4 == '\0') {
LAB_001210e3:
                bVar1 = true;
                bVar16 = true;
              }
              else {
                FUN_003b2360();
                pvVar11 = _pthread_getspecific(pVar12);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e6000();
                plVar6 = local_78;
                if ((char)local_70 == '\0') {
                  if (local_78 != (longlong *)0x0) {
                    FUN_00d50b00();
                    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  local_70 = local_70 & 0xffffff00;
                }
                if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((plVar6 == (longlong *)0x0) ||
                   (iVar5 = FUN_00d8c7a0(), plVar14 = plVar6, iVar5 == 0)) {
                  local_44 = local_80 + (int)local_88;
                  local_48 = 1;
                  local_50 = &DAT_024cc6f0;
                  FUN_00d8cb40(&DAT_024cc6f0,&local_50);
                  plVar14 = local_78;
                  plVar15 = plVar6;
                  if (plVar6 != local_78) {
                    if ((char)local_70 != '\0') {
                      if (plVar6 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      goto LAB_00120a46;
                    }
                    if (local_78 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    plVar15 = plVar14;
                    if (plVar6 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  plVar14 = plVar15;
                  if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
LAB_00120a46:
                FUN_001166a0();
                plVar6 = local_78;
                plVar15 = plVar14;
                if (local_78 == plVar14) {
LAB_00120aac:
                  plVar6 = plVar15;
                  if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if ((char)local_70 == '\0') {
                    if (local_78 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    plVar15 = plVar6;
                    if (plVar14 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                    goto LAB_00120aac;
                  }
                  if (plVar14 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                }
                plVar14 = plVar6;
                if (plVar6 == (longlong *)0x0) {
                  iVar5 = 2;
                  while( true ) {
                    local_70 = local_70 & 0xffffff00;
                    local_78 = plVar14;
                    cVar4 = FUN_00d23d70();
                    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (cVar4 == '\0') break;
                    local_70 = 2;
                    local_60 = '\x01';
                    local_78 = (longlong *)&DAT_025df2a0;
                    local_68 = plVar6;
                    local_58 = iVar5;
                    FUN_00d8cb40();
                    plVar15 = local_50;
                    if (plVar14 == local_50) {
LAB_00120d12:
                      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if ((char)local_48 == '\0') {
                        if (local_50 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        bVar16 = plVar14 != (longlong *)0x0;
                        plVar14 = plVar15;
                        if (bVar16) {
                          FUN_00d50b20();
                        }
                        goto LAB_00120d12;
                      }
                      if (plVar14 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      local_48 = local_48 & 0xffffff00;
                      plVar14 = plVar15;
                    }
                    if ((local_60 != '\0') &&
                       (local_78 = &DAT_024c5048, local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    iVar5 = iVar5 + 1;
                  }
                }
                else {
                  FUN_00d50b00();
                  iVar5 = 2;
                  while( true ) {
                    local_70 = local_70 & 0xffffff00;
                    local_78 = plVar14;
                    cVar4 = FUN_00d23d70();
                    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (cVar4 == '\0') break;
                    local_70 = 2;
                    local_78 = &DAT_024c5048;
                    local_60 = 0;
                    FUN_00d50b00();
                    local_60 = '\x01';
                    local_78 = (longlong *)&DAT_025df2a0;
                    local_68 = plVar6;
                    local_58 = iVar5;
                    FUN_00d8cb40();
                    plVar15 = local_50;
                    if (plVar14 == local_50) {
LAB_00120bbd:
                      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if ((char)local_48 == '\0') {
                        if (local_50 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        bVar16 = plVar14 != (longlong *)0x0;
                        plVar14 = plVar15;
                        if (bVar16) {
                          FUN_00d50b20();
                        }
                        goto LAB_00120bbd;
                      }
                      if (plVar14 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      local_48 = local_48 & 0xffffff00;
                      plVar14 = plVar15;
                    }
                    if ((local_60 != '\0') &&
                       (local_78 = &DAT_024c5048, local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    iVar5 = iVar5 + 1;
                  }
                }
                local_70 = local_70 & 0xffffff00;
                local_78 = plVar14;
                FUN_00d21140();
                if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                plVar15 = DAT_02804040;
                local_190 = '\0';
                local_198 = plVar14;
                iVar5 = FUN_01d70da0();
                lVar10 = *(longlong *)
                          (*(longlong *)(*(longlong *)(unaff_RDI + 0x150) + 0x10) +
                          (longlong)iVar5 * 8);
                if (lVar10 != 0) {
                  FUN_00d50b00();
                }
                local_150 = lVar10;
                FUN_003b9010();
                plVar2 = local_50;
                local_e8 = 0;
                if ((char)local_48 == '\0') {
                  if (local_50 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_48 = local_48 & 0xffffff00;
                }
                local_e8 = '\x01';
                local_f0 = plVar2;
                (**(code **)(*plVar15 + 0x4f8))(&local_f0,&local_198);
                puVar9 = local_148;
                local_a8 = local_78;
                if ((char)local_70 == '\0') {
                  if (local_78 != (longlong *)0x0) {
                    FUN_00d50b00();
                    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  local_70 = local_70 & 0xffffff00;
                }
                if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_150 != 0) {
                  FUN_00d50b20();
                }
                if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                cVar4 = FUN_001221b0();
                if (cVar4 == '\0') {
                  local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
                }
                else {
                  FUN_003b2360();
                  plVar15 = local_50;
                  local_c8 = 0;
                  if ((char)local_48 == '\0') {
                    if (local_50 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_48 = local_48 & 0xffffff00;
                  }
                  local_c8 = '\x01';
                  local_d0 = plVar15;
                  FUN_000ba510();
                  plVar15 = local_78;
                  local_d8 = 0;
                  if ((char)local_70 == '\0') {
                    if (local_78 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_70 = local_70 & 0xffffff00;
                  }
                  local_d8 = '\x01';
                  local_e0 = plVar15;
                  local_188 = local_a8;
                  local_180 = '\0';
                  FUN_00122700();
                  if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if (local_a8 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if (plVar14 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if (plVar6 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') goto LAB_001210e3;
                bVar1 = false;
                bVar16 = false;
              }
              if (local_c0 != (longlong *)0x0) {
                FUN_00d50b20();
                bVar16 = bVar1;
              }
              if (!bVar16) {
                FUN_00083b20();
                goto LAB_00121149;
              }
              if (local_88._4_4_ != 0) {
                if (local_88._4_4_ < 1) {
                  iVar5 = -local_88._4_4_;
                }
                else {
                  local_88 = CONCAT44(local_88._4_4_,(int)local_88 - local_88._4_4_);
                  FUN_00d23690();
                  local_80 = local_80 + local_88._4_4_;
                  iVar5 = 0;
                }
                local_88 = CONCAT44(iVar5,(int)local_88);
              }
            }
            FUN_00083b20();
LAB_00121149:
            FUN_00d50b20();
            if (local_164 <= local_168) goto LAB_00121170;
            bVar1 = false;
            bVar16 = false;
          }
          else {
            if (local_a0 != (longlong *)0x0) goto LAB_00120839;
LAB_00121121:
            local_40 = (longlong *)
                       CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1));
LAB_00121170:
            FUN_00c9fe20();
            plVar6 = local_a0;
            pplVar8 = (longlong **)local_98;
            if (local_98[0] == '\0') {
              pplVar8 = &local_78;
            }
            local_78 = (longlong *)CONCAT71(local_78._1_7_,local_98[0]);
            *(char *)pplVar8 = '\0';
            if ((local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((char)local_78 == '\0') {
              if (plVar6 == (longlong *)0x0) goto LAB_00121280;
              FUN_00d50b00();
            }
            else if (plVar6 == (longlong *)0x0) {
LAB_00121280:
              bVar1 = true;
              bVar16 = true;
              goto joined_r0x00121165;
            }
            local_98[0] = '\0';
            local_a0 = (longlong *)0x0;
            local_90 = plVar6;
            local_80 = 0;
            local_88 = 0;
            if (0 < *(int *)((longlong)plVar6 + 0xc)) {
              lVar10 = 0;
              do {
                local_178 = *(longlong **)(plVar6[2] + lVar10 * 8);
                local_170 = '\0';
                local_a0 = local_178;
                FUN_00721410();
                if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                lVar10 = lVar10 + 1;
                local_88 = CONCAT44(local_88._4_4_,(int)lVar10);
              } while ((int)lVar10 < *(int *)((longlong)plVar6 + 0xc));
            }
            FUN_00115910();
            bVar1 = true;
            bVar16 = true;
            FUN_00d50b20();
          }
joined_r0x00121165:
          if (puVar9 != (undefined8 *)0x0) {
            FUN_00d50b20();
            bVar16 = bVar1;
          }
          iVar5 = 1;
          if (bVar16) {
LAB_0012073f:
            iVar5 = 0;
            FUN_001227e0();
          }
        }
      }
      else {
        lVar10 = DAT_026e1890;
        if (DAT_026e1890 != 0) {
          FUN_00d50b00();
        }
        FUN_01e57260();
        plVar6 = local_a0;
        if (local_98[0] == '\0') {
          if (((local_a0 != (longlong *)0x0) && (FUN_00d50b00(), local_98[0] != '\0')) &&
             (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_98[0] = '\0';
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        if (*(longlong **)(unaff_RDI + 0xc0) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x468))();
          plVar14 = local_a0;
          if ((local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x468))();
            (**(code **)(*local_78 + 0x390))();
            plVar14 = local_a0;
            if (plVar6 == local_a0) {
LAB_001201b6:
              if ((local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_98[0] == '\0') {
                if (local_a0 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                bVar16 = plVar6 != (longlong *)0x0;
                plVar6 = plVar14;
                if (bVar16) {
                  FUN_00d50b20();
                }
                goto LAB_001201b6;
              }
              if (plVar6 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              local_98[0] = '\0';
              plVar6 = plVar14;
            }
            if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_003b9010();
        local_120 = local_50;
        local_118 = 0;
        if ((char)local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
        }
        local_118 = '\x01';
        FUN_001220c0();
        local_130 = local_78;
        local_128 = 0;
        if ((char)local_70 == '\0') {
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = local_70 & 0xffffff00;
        }
        local_128 = '\x01';
        FUN_003b9010();
        local_110 = local_160;
        local_108 = 0;
        if (local_158 == '\0') {
          if (local_160 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_158 = '\0';
        }
        local_108 = '\x01';
        local_1f0 = '\0';
        local_1f8 = plVar6;
        FUN_01f53880(&local_110,&local_130,&local_1f8);
        plVar14 = local_a0;
        if (local_98[0] == '\0') {
          if (((local_a0 != (longlong *)0x0) && (FUN_00d50b00(), local_98[0] != '\0')) &&
             (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_98[0] = '\0';
        }
        if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar14 != (longlong *)0x0) {
          cVar4 = FUN_001221b0();
          if (cVar4 != '\0') {
            local_1e8 = plVar14;
            local_1e0 = '\0';
            FUN_00721410();
            if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            puVar9 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = &DAT_02572358;
            (*DAT_02572370)();
            FUN_01d2b630();
            plVar15 = local_a0;
            if (local_98[0] == '\0') {
              if (local_a0 != (longlong *)0x0) {
                FUN_00d50b00();
                if ((local_98[0] != '\0') && (local_a0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0012054e;
              }
            }
            else if (local_a0 != (longlong *)0x0) {
LAB_0012054e:
              local_a8 = plVar14;
              local_98[0] = '\0';
              local_a0 = (longlong *)0x0;
              local_c0 = plVar15;
              local_90 = plVar15;
              local_88 = 0xffffffff;
              local_80 = 0;
              local_88._4_4_ = 0;
              local_40 = plVar6;
              while( true ) {
                if (local_88._4_4_ != 0) {
                  if (local_88._4_4_ < 1) {
                    iVar5 = -local_88._4_4_;
                  }
                  else {
                    iVar5 = (int)local_88 - local_88._4_4_;
                    local_88 = CONCAT44(local_88._4_4_,iVar5);
                    FUN_00d23690();
                    local_80 = local_80 + local_88._4_4_;
                    iVar5 = 0;
                  }
                  local_88 = CONCAT44(iVar5,(int)local_88);
                }
                lVar10 = (longlong)(int)local_88;
                iVar5 = (int)local_88 + 1;
                local_88 = CONCAT44(local_88._4_4_,iVar5);
                if (*(int *)((longlong)local_90 + 0xc) <= iVar5) break;
                local_a0 = *(longlong **)(local_90[2] + 8 + lVar10 * 8);
                cVar4 = FUN_003b2350();
                if (cVar4 != '\0') {
                  FUN_003b2360();
                  plVar6 = local_50;
                  if ((char)local_48 == '\0') {
                    if (local_50 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_48 = local_48 & 0xffffff00;
                  }
                  local_78 = plVar6;
                  local_70 = local_70 & 0xffffff00;
                  FUN_00d21140();
                  if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar6 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_00083b20();
              FUN_00d50b20();
              plVar14 = local_a8;
              plVar6 = local_40;
            }
            local_1d0 = '\0';
            local_1c0 = '\0';
            local_1d8 = puVar9;
            local_1c8 = plVar14;
            FUN_00122700();
            if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1d0 != '\0') && (local_1d8 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if (puVar9 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (plVar6 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
            goto LAB_0012073f;
          }
          FUN_00d50b20();
        }
        iVar5 = 1;
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        local_40 = (longlong *)((ulonglong)local_40._4_4_ << 0x20);
      }
LAB_00120766:
      FUN_00d50b20();
      if (local_b0 != (longlong *)0x0) goto LAB_0012077e;
    }
    in_RAX = (ulonglong)local_40 & 0xffffffff;
    if (iVar5 != 0) goto LAB_0012078c;
  }
  in_RAX = CONCAT71((int7)(in_RAX >> 8),1);
LAB_0012078c:
  return in_RAX & 0xffffffffffffff01;
}


