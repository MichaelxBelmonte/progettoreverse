// ===================================================================
// GNStringTable — Complete reconstructed pseudocode
// 15 functions
// ===================================================================


// ============================================================
// 0011fca0
// ============================================================
// Function: FUN_0011fca0
// Address: 0011fca0
// Size: 5556 bytes
// Class: GNStringTable
// String references:
//   "track%I"
//   "%@.%I"

uint64_t FUN_0011fca0(uint64_t param_1,int param_2)

{
  bool bVar1;
  int64_t *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint64_t in_RAX;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t **pplVar8;
  void*puVar9;
  int64_t lVar10;
  void *pvVar11;
  void* pVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int64_t this_ptr;
  int64_t *plVar15;
  bool bVar16;
  int64_t *local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  void*local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int local_168;
  int local_164;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  void*local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  int64_t local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  char local_98 [8];
  int64_t *local_90;
  uint64_t local_88;
  int local_80;
  int64_t *local_78;
  uint local_70;
  int64_t *local_68;
  char local_60;
  int local_58;
  int64_t *local_50;
  uint local_48;
  int local_44;
  uint64_t local_40;
  
  if (param_2 != 0) {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    iVar5 = FUN_01d70da0();
    lVar10 = *(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x150) + 0x10) + (int64_t)iVar5 * 8);
    if (lVar10 == 0) {
      iVar5 = 1;
      local_40 = (int64_t *)((uint64_t)local_40 & 0xffffffff00000000);
LAB_0012077e:
      FUN_00d50b20();
    }
    else {
      local_b8 = lVar10;
      FUN_00d50b00();
      local_b0 = plVar6;
      if (((*(char *)(this_ptr + 0xb0) == '\0') && (iVar5 = FUN_003b9000(), iVar5 != 2)) &&
         (iVar5 = FUN_003b9000(), iVar5 != 3)) {
        do {
          plVar6 = g_02804040;
          local_138 = 0;
          if (g_02804040 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          lVar10 = g_026e1898;
          local_140 = plVar6;
          local_138 = '\x01';
          local_1b8 = 0;
          local_1b0 = '\0';
          if (g_026e1898 != 0) {
            FUN_00d50b00();
          }
          local_1a8 = lVar10;
          local_1a0 = '\x01';
          FUN_00e427c0();
          plVar6 = local_78;
          local_f8 = 0;
          if ((char)local_70 == '\0') {
            if (local_78 != (int64_t *)0x0) {
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
            if (((local_a0 != (int64_t *)0x0) && (uVar7 = FUN_00d50b00(), local_98[0] != '\0')) &&
               (local_a0 != (int64_t *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
          }
          else {
            local_98[0] = '\0';
          }
          if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
            uVar7 = FUN_00d50b20();
          }
          if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            uVar7 = FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
            uVar7 = FUN_00d50b20();
          }
          if ((local_1b0 != '\0') && (local_1b8 != 0)) {
            uVar7 = FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
            uVar7 = FUN_00d50b20();
          }
          local_40 = (int64_t *)
                     CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar7 >> 8),1));
          iVar5 = 1;
          if (plVar6 == (int64_t *)0x0) goto LAB_00120766;
          iVar5 = 1;
          if (*(int *)((int64_t)plVar6 + 0xc) == 1) {
            FUN_00d23310();
            plVar6 = local_a0;
            local_78 = (int64_t *)CONCAT71(local_78._1_7_,local_98[0]);
            pplVar8 = (int64_t **)local_98;
            if (local_98[0] == '\0') {
              pplVar8 = &local_78;
            }
            *(char *)pplVar8 = '\0';
            if ((local_98[0] != '\0') && (local_a0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar14 = g_02804040;
            if (g_02804040 != plVar6) {
              if (plVar6 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              g_02804040 = plVar6;
              if (plVar14 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            if ((plVar6 != (int64_t *)0x0) && (g_02804048 == '\0')) {
              g_02804048 = '\x01';
              FUN_00e8cb90();
            }
            if (((char)local_78 != '\0') && (plVar6 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            bVar3 = (**(code **)(*g_02804040 + 0x3a0))();
            iVar5 = (uint)bVar3 << 2;
          }
          FUN_00d50b20();
        } while (iVar5 == 0);
        if (iVar5 == 4) {
          puVar9 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = &g_02572358;
          (*g_02572370)();
          local_148 = puVar9;
          uVar7 = FUN_01d2b630();
          plVar6 = local_a0;
          if (local_98[0] == '\0') {
            if (local_a0 == (int64_t *)0x0) goto LAB_00121121;
            FUN_00d50b00();
            if ((local_98[0] != '\0') && (local_a0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_00120839:
            local_98[0] = '\0';
            local_a0 = (int64_t *)0x0;
            local_90 = plVar6;
            local_88 = 0xffffffff;
            local_80 = 0;
            local_40 = (int64_t *)CONCAT44(local_40._4_4_,0xffffff01);
            while( true ) {
              lVar10 = (int64_t)(int)local_88;
              local_168 = (int)local_88 + 1;
              local_88 = CONCAT44(local_88._4_4_,local_168);
              local_164 = *(int *)((int64_t)local_90 + 0xc);
              if (local_164 <= local_168) break;
              lVar13 = local_90[2];
              plVar6 = *(int64_t **)(lVar13 + 8 + lVar10 * 8);
              local_a0 = plVar6;
              if (local_98[0] == '\0') {
                if (plVar6 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_98[0] = '\0';
              }
              pVar12 = (void*)lVar13;
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
                  if (local_78 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  local_70 = local_70 & 0xffffff00;
                }
                if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((plVar6 == (int64_t *)0x0) ||
                   (iVar5 = FUN_00d8c7a0(), plVar14 = plVar6, iVar5 == 0)) {
                  local_44 = local_80 + (int)local_88;
                  local_48 = 1;
                  local_50 = &g_024cc6f0;
                  FUN_00d8cb40(&g_024cc6f0,&local_50);
                  plVar14 = local_78;
                  plVar15 = plVar6;
                  if (plVar6 != local_78) {
                    if ((char)local_70 != '\0') {
                      if (plVar6 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      goto LAB_00120a46;
                    }
                    if (local_78 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    plVar15 = plVar14;
                    if (plVar6 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  plVar14 = plVar15;
                  if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
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
                  if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if ((char)local_70 == '\0') {
                    if (local_78 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    plVar15 = plVar6;
                    if (plVar14 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                    goto LAB_00120aac;
                  }
                  if (plVar14 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                }
                plVar14 = plVar6;
                if (plVar6 == (int64_t *)0x0) {
                  iVar5 = 2;
                  while( true ) {
                    local_70 = local_70 & 0xffffff00;
                    local_78 = plVar14;
                    cVar4 = FUN_00d23d70();
                    if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (cVar4 == '\0') break;
                    local_70 = 2;
                    local_60 = '\x01';
                    local_78 = (int64_t *)&g_025df2a0;
                    local_68 = plVar6;
                    local_58 = iVar5;
                    FUN_00d8cb40();
                    plVar15 = local_50;
                    if (plVar14 == local_50) {
LAB_00120d12:
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if ((char)local_48 == '\0') {
                        if (local_50 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                        bVar16 = plVar14 != (int64_t *)0x0;
                        plVar14 = plVar15;
                        if (bVar16) {
                          FUN_00d50b20();
                        }
                        goto LAB_00120d12;
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      local_48 = local_48 & 0xffffff00;
                      plVar14 = plVar15;
                    }
                    if ((local_60 != '\0') &&
                       (local_78 = &g_024c5048, local_68 != (int64_t *)0x0)) {
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
                    if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (cVar4 == '\0') break;
                    local_70 = 2;
                    local_78 = &g_024c5048;
                    local_60 = 0;
                    FUN_00d50b00();
                    local_60 = '\x01';
                    local_78 = (int64_t *)&g_025df2a0;
                    local_68 = plVar6;
                    local_58 = iVar5;
                    FUN_00d8cb40();
                    plVar15 = local_50;
                    if (plVar14 == local_50) {
LAB_00120bbd:
                      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if ((char)local_48 == '\0') {
                        if (local_50 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                        bVar16 = plVar14 != (int64_t *)0x0;
                        plVar14 = plVar15;
                        if (bVar16) {
                          FUN_00d50b20();
                        }
                        goto LAB_00120bbd;
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      local_48 = local_48 & 0xffffff00;
                      plVar14 = plVar15;
                    }
                    if ((local_60 != '\0') &&
                       (local_78 = &g_024c5048, local_68 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    iVar5 = iVar5 + 1;
                  }
                }
                local_70 = local_70 & 0xffffff00;
                local_78 = plVar14;
                FUN_00d21140();
                if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                plVar15 = g_02804040;
                local_190 = '\0';
                local_198 = plVar14;
                iVar5 = FUN_01d70da0();
                lVar10 = *(int64_t *)
                          (*(int64_t *)(*(int64_t *)(this_ptr + 0x150) + 0x10) +
                          (int64_t)iVar5 * 8);
                if (lVar10 != 0) {
                  FUN_00d50b00();
                }
                local_150 = lVar10;
                FUN_003b9010();
                plVar2 = local_50;
                local_e8 = 0;
                if ((char)local_48 == '\0') {
                  if (local_50 != (int64_t *)0x0) {
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
                  if (local_78 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  local_70 = local_70 & 0xffffff00;
                }
                if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (local_150 != 0) {
                  FUN_00d50b20();
                }
                if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                cVar4 = FUN_001221b0();
                if (cVar4 == '\0') {
                  local_40 = (int64_t *)((uint64_t)local_40 & 0xffffffff00000000);
                }
                else {
                  FUN_003b2360();
                  plVar15 = local_50;
                  local_c8 = 0;
                  if ((char)local_48 == '\0') {
                    if (local_50 != (int64_t *)0x0) {
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
                    if (local_78 != (int64_t *)0x0) {
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
                  if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if (local_a8 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if (plVar14 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if (plVar6 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if (cVar4 != '\0') goto LAB_001210e3;
                bVar1 = false;
                bVar16 = false;
              }
              if (local_c0 != (int64_t *)0x0) {
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
            if (local_a0 != (int64_t *)0x0) goto LAB_00120839;
LAB_00121121:
            local_40 = (int64_t *)
                       CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar7 >> 8),1));
LAB_00121170:
            FUN_00c9fe20();
            plVar6 = local_a0;
            pplVar8 = (int64_t **)local_98;
            if (local_98[0] == '\0') {
              pplVar8 = &local_78;
            }
            local_78 = (int64_t *)CONCAT71(local_78._1_7_,local_98[0]);
            *(char *)pplVar8 = '\0';
            if ((local_98[0] != '\0') && (local_a0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((char)local_78 == '\0') {
              if (plVar6 == (int64_t *)0x0) goto LAB_00121280;
              FUN_00d50b00();
            }
            else if (plVar6 == (int64_t *)0x0) {
LAB_00121280:
              bVar1 = true;
              bVar16 = true;
              goto joined_r0x00121165;
            }
            local_98[0] = '\0';
            local_a0 = (int64_t *)0x0;
            local_90 = plVar6;
            local_80 = 0;
            local_88 = 0;
            if (0 < *(int *)((int64_t)plVar6 + 0xc)) {
              lVar10 = 0;
              do {
                local_178 = *(int64_t **)(plVar6[2] + lVar10 * 8);
                local_170 = '\0';
                local_a0 = local_178;
                FUN_00721410();
                if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                lVar10 = lVar10 + 1;
                local_88 = CONCAT44(local_88._4_4_,(int)lVar10);
              } while ((int)lVar10 < *(int *)((int64_t)plVar6 + 0xc));
            }
            FUN_00115910();
            bVar1 = true;
            bVar16 = true;
            FUN_00d50b20();
          }
joined_r0x00121165:
          if (puVar9 != (void*)0x0) {
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
        lVar10 = g_026e1890;
        if (g_026e1890 != 0) {
          FUN_00d50b00();
        }
        FUN_01e57260();
        plVar6 = local_a0;
        if (local_98[0] == '\0') {
          if (((local_a0 != (int64_t *)0x0) && (FUN_00d50b00(), local_98[0] != '\0')) &&
             (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_98[0] = '\0';
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        if (*(int64_t **)(this_ptr + 0xc0) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x468))();
          plVar14 = local_a0;
          if ((local_98[0] != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar14 != (int64_t *)0x0) {
            (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x468))();
            (**(code **)(*local_78 + 0x390))();
            plVar14 = local_a0;
            if (plVar6 == local_a0) {
LAB_001201b6:
              if ((local_98[0] != '\0') && (local_a0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_98[0] == '\0') {
                if (local_a0 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                bVar16 = plVar6 != (int64_t *)0x0;
                plVar6 = plVar14;
                if (bVar16) {
                  FUN_00d50b20();
                }
                goto LAB_001201b6;
              }
              if (plVar6 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              local_98[0] = '\0';
              plVar6 = plVar14;
            }
            if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_003b9010();
        local_120 = local_50;
        local_118 = 0;
        if ((char)local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
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
          if (local_78 != (int64_t *)0x0) {
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
          if (((local_a0 != (int64_t *)0x0) && (FUN_00d50b00(), local_98[0] != '\0')) &&
             (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_98[0] = '\0';
        }
        if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar14 != (int64_t *)0x0) {
          cVar4 = FUN_001221b0();
          if (cVar4 != '\0') {
            local_1e8 = plVar14;
            local_1e0 = '\0';
            FUN_00721410();
            if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            puVar9 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = &g_02572358;
            (*g_02572370)();
            FUN_01d2b630();
            plVar15 = local_a0;
            if (local_98[0] == '\0') {
              if (local_a0 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_98[0] != '\0') && (local_a0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0012054e;
              }
            }
            else if (local_a0 != (int64_t *)0x0) {
LAB_0012054e:
              local_a8 = plVar14;
              local_98[0] = '\0';
              local_a0 = (int64_t *)0x0;
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
                lVar10 = (int64_t)(int)local_88;
                iVar5 = (int)local_88 + 1;
                local_88 = CONCAT44(local_88._4_4_,iVar5);
                if (*(int *)((int64_t)local_90 + 0xc) <= iVar5) break;
                local_a0 = *(int64_t **)(local_90[2] + 8 + lVar10 * 8);
                cVar4 = FUN_003b2350();
                if (cVar4 != '\0') {
                  FUN_003b2360();
                  plVar6 = local_50;
                  if ((char)local_48 == '\0') {
                    if (local_50 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_48 = local_48 & 0xffffff00;
                  }
                  local_78 = plVar6;
                  local_70 = local_70 & 0xffffff00;
                  FUN_00d21140();
                  if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar6 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
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
            if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1d0 != '\0') && (local_1d8 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if (puVar9 != (void*)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (plVar6 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            local_40 = (int64_t *)((uint64_t)local_40 & 0xffffffff00000000);
            goto LAB_0012073f;
          }
          FUN_00d50b20();
        }
        iVar5 = 1;
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        local_40 = (int64_t *)((uint64_t)local_40._4_4_ << 0x20);
      }
LAB_00120766:
      FUN_00d50b20();
      if (local_b0 != (int64_t *)0x0) goto LAB_0012077e;
    }
    in_RAX = (uint64_t)local_40 & 0xffffffff;
    if (iVar5 != 0) goto LAB_0012078c;
  }
  in_RAX = CONCAT71((int7)(in_RAX >> 8),1);
LAB_0012078c:
  return in_RAX & 0xffffffffffffff01;
}



// ============================================================
// 01f47fa0
// ============================================================
// Function: FUN_01f47fa0
// Address: 01f47fa0
// Size: 3352 bytes
// Class: GNStringTable

uint64_t FUN_01f47fa0(uint64_t param_1,int param_2,size_t param_3)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  void*puVar5;
  bool bVar6;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar7 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t local_2118;
  uint64_t uStack_2110;
  uint64_t local_2108;
  uint64_t uStack_2100;
  int64_t *local_2058;
  char local_2050;
  int64_t *local_2048;
  char local_2040;
  int64_t *local_2038;
  char local_2030;
  uint64_t extraout_XMM0_Qb_02;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (param_2 != 0) {
    if ((g_028baa10 == (int64_t *)0x0) || (g_028baa19 == '\0')) {
      FUN_00e8cb50();
      if (g_028baa10 == (int64_t *)0x0) {
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_000161a0();
        (**(code **)(*plVar4 + 0x18))();
        if (g_028baa10 == plVar4) {
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          bVar3 = true;
          bVar6 = g_028baa10 != (int64_t *)0x0;
          g_028baa10 = plVar4;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028baa18 == '\0') {
          g_028baa18 = '\x01';
          FUN_00e8cb90();
          bVar3 = bVar2;
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        (**(code **)(*g_028baa10 + 0x448))();
        FUN_01d4e800();
        plVar4 = g_028baa40;
        if (g_028baa40 != local_2038) {
          if (local_2030 == '\0') {
            if (local_2038 == (int64_t *)0x0) {
              plVar4 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar4 = local_2038;
            }
          }
          else {
            local_2030 = '\0';
            plVar4 = local_2038;
          }
          bVar3 = g_028baa40 != (int64_t *)0x0;
          g_028baa40 = plVar4;
          if (bVar3) {
            FUN_00d50b20();
            plVar4 = local_2038;
          }
        }
        if ((plVar4 != (int64_t *)0x0) && (g_028baa48 == '\0')) {
          g_028baa48 = '\x01';
          FUN_00e8cb90();
          plVar4 = local_2038;
        }
        if ((local_2030 != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00e90e50();
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_0006daf0();
        *(void*)(plVar4 + 0x27) = 0;
        plVar4[0x2e] = 0;
        *(void*)(plVar4 + 0x2f) = 0;
        plVar4[0x30] = 0;
        *(void*)(plVar4 + 0x31) = 0;
        plVar4[0x28] = 0;
        plVar4[0x29] = 0;
        *(void*)(plVar4 + 0x2a) = 0;
        plVar4[0x2b] = 0;
        plVar4[0x2c] = 0;
        *(void*)((int64_t)plVar4 + 0x165) = 0;
        *(void*)((int64_t)plVar4 + 0x18c) = 0;
        *(void*)((int64_t)plVar4 + 0x194) = 0;
        *(void*)((int64_t)plVar4 + 0x199) = 0;
        plVar4[0x35] = 0;
        plVar4[0x36] = 0;
        plVar4[0x37] = 0;
        plVar4[0x38] = 0;
        *plVar4 = (int64_t)&g_02682cf8;
        puVar5 = &g_026837c0;
        plVar4[2] = (int64_t)&g_026837c0;
        plVar4[0x39] = 0;
        plVar4[0x3a] = 0;
        *(void*)(plVar4 + 0x3b) = 0;
        plVar4[0x3c] = 0;
        plVar4[0x3d] = 0;
        *(void*)(plVar4 + 0x3e) = 0;
        (*g_02682d10)();
        if (g_028baa20 == plVar4) {
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          bVar3 = true;
          bVar6 = g_028baa20 != (int64_t *)0x0;
          g_028baa20 = plVar4;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028baa28 == '\0') {
          g_028baa28 = '\x01';
          FUN_00e8cb90();
          bVar3 = bVar2;
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        (**(code **)(*g_028baa20 + 0x4d0))();
        plVar4 = g_028baa40;
        if (g_028baa40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_01d56f30();
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_00074c30();
        (**(code **)(*plVar4 + 0x18))();
        (**(code **)(*plVar4 + 0x640))();
        local_2108 = (**(code **)(*local_2038 + 0x580))();
        uStack_2100 = extraout_XMM0_Qb;
        (**(code **)(*plVar4 + 0x640))();
        auVar11._0_8_ = (**(code **)(*local_2048 + 0x578))();
        auVar11._8_8_ = extraout_XMM0_Qb_00;
        auVar10._4_12_ = local_2108._4_12_;
        auVar10._0_4_ = (float)local_2108 + g_0239394c;
        auVar7._4_12_ = auVar11._4_12_;
        auVar7._0_4_ = (float)auVar11._0_8_ + g_0239394c;
        auVar11 = insertps(auVar10,auVar7,0x10);
        (**(code **)(*plVar4 + 0x4d0))();
        if ((local_2040 != '\0') && (local_2048 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2030 != '\0') && (local_2038 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d94ee0();
        FUN_01d95060();
        (**(code **)(*plVar4 + 0x570))();
        (**(code **)(*plVar4 + 0x558))();
        plVar4 = g_028baa20;
        if (g_028baa20 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_01d978b0();
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_01e3f820();
        _memset(puVar5,0x1fff,param_3);
        FUN_00d8d3e0();
        plVar4 = g_028baa50;
        if (g_028baa50 != local_2048) {
          if (local_2040 == '\0') {
            if (local_2048 == (int64_t *)0x0) {
              plVar4 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar4 = local_2048;
            }
          }
          else {
            local_2040 = '\0';
            plVar4 = local_2048;
          }
          bVar3 = g_028baa50 != (int64_t *)0x0;
          g_028baa50 = plVar4;
          if (bVar3) {
            FUN_00d50b20();
            plVar4 = local_2048;
          }
        }
        if ((plVar4 != (int64_t *)0x0) && (g_028baa58 == '\0')) {
          g_028baa58 = '\x01';
          FUN_00e8cb90();
          plVar4 = local_2048;
        }
        if ((local_2040 != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_0006daf0();
        *plVar4 = (int64_t)&g_0269d720;
        plVar4[2] = (int64_t)&g_0269e0b8;
        plVar4[0x2b] = 0;
        *(void*)(plVar4 + 0x2c) = 0;
        *(void*)(plVar4 + 0x2e) = 0;
        *(void*)((int64_t)plVar4 + 0x174) = 0;
        plVar4[0x36] = 0;
        *(void*)(plVar4 + 0x37) = 0;
        plVar4[0x38] = 0;
        *(void*)(plVar4 + 0x39) = 0;
        plVar4[0x27] = 0;
        plVar4[0x28] = 0;
        *(void*)((int64_t)plVar4 + 0x141) = 0;
        *(void*)((int64_t)plVar4 + 0x149) = 0;
        *(void*)((int64_t)plVar4 + 0x164) = 0;
        *(void*)((int64_t)plVar4 + 0x16b) = 0;
        plVar4[0x2f] = 0;
        plVar4[0x30] = 0;
        *(void*)(plVar4 + 0x31) = 0;
        *(void*)((int64_t)plVar4 + 0x18c) = 0;
        *(void*)((int64_t)plVar4 + 0x194) = 0;
        *(void*)((int64_t)plVar4 + 0x19a) = 0;
        *(void*)((int64_t)plVar4 + 0x1a2) = 0;
        *(void*)((int64_t)plVar4 + 0x1d4) = 0;
        *(void*)((int64_t)plVar4 + 0x1cc) = 0;
        (*g_0269d738)();
        if (g_028baa30 == plVar4) {
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          bVar3 = true;
          bVar6 = g_028baa30 != (int64_t *)0x0;
          g_028baa30 = plVar4;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (g_028baa38 == '\0') {
          g_028baa38 = '\x01';
          FUN_00e8cb90();
          bVar3 = bVar2;
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        (**(code **)(*g_028baa30 + 0x4d0))();
        (**(code **)(*g_028baa30 + 0x640))();
        (**(code **)(*local_2058 + 0x378))();
        if (local_2040 == '\0') {
          if (local_2048 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_2040 = '\0';
        }
        FUN_01e12b60();
        if (local_2048 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_2040 != '\0') && (local_2048 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2050 != '\0') && (local_2058 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d8b910();
        FUN_00e91160();
        plVar4 = g_028baa50;
        if (g_028baa50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_01e125e0();
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_00074c30();
        (**(code **)(*plVar4 + 0x18))();
        (**(code **)(*plVar4 + 0x640))();
        local_2118 = (**(code **)(*local_2048 + 0x580))();
        uStack_2110 = extraout_XMM0_Qb_01;
        (**(code **)(*plVar4 + 0x640))();
        auVar8._0_8_ = (**(code **)(*local_2058 + 0x578))();
        auVar8._8_8_ = extraout_XMM0_Qb_02;
        auVar12._4_12_ = local_2118._4_12_;
        auVar12._0_4_ = (float)local_2118 + g_0239394c;
        auVar9._4_12_ = auVar8._4_12_;
        auVar9._0_4_ = (float)auVar8._0_8_ + g_02390d38;
        insertps(auVar12,auVar9,0x10);
        (**(code **)(*plVar4 + 0x4d0))();
        if ((local_2050 != '\0') && (local_2058 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2040 != '\0') && (local_2048 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d94ee0();
        FUN_01d95060();
        (**(code **)(*plVar4 + 0x570))();
        (**(code **)(*plVar4 + 0x558))();
        plVar4 = g_028baa30;
        if (g_028baa30 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_01d978b0();
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = (int64_t *)FUN_001edd10();
        (**(code **)(*plVar4 + 0x18))();
        FUN_01e3f820();
        (**(code **)(*plVar4 + 0x4d0))();
        FUN_01db1930();
        blendps(ZEXT816(0),auVar11,0xd);
        FUN_01db1cf0(1,1,1);
        FUN_01db1cf0(0,1,1);
        (**(code **)(*plVar4 + 0x920))();
        (**(code **)(*plVar4 + 0x570))();
        (**(code **)(*plVar4 + 0x558))();
        FUN_01e56750();
        FUN_01e5bc80();
        if ((local_2040 != '\0') && (local_2048 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01e561b0();
        (**(code **)(*local_2048 + 0x450))();
        if ((local_2040 != '\0') && (local_2048 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01e1eb80(g_023934c8,0);
        plVar4 = g_028baa60;
        if (g_028baa60 != local_2048) {
          if (local_2040 == '\0') {
            if (local_2048 == (int64_t *)0x0) {
              plVar4 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar4 = local_2048;
            }
          }
          else {
            local_2040 = '\0';
            plVar4 = local_2048;
          }
          bVar3 = g_028baa60 != (int64_t *)0x0;
          g_028baa60 = plVar4;
          if (bVar3) {
            FUN_00d50b20();
            plVar4 = local_2048;
          }
        }
        if ((plVar4 != (int64_t *)0x0) && (g_028baa68 == '\0')) {
          g_028baa68 = '\x01';
          FUN_00e8cb90();
          plVar4 = local_2048;
        }
        if ((local_2040 != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        g_028baa19 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028baa19 = '\x01';
        FUN_00e8cb70();
      }
    }
    FUN_01e56750();
    FUN_01e5bfa0();
    if ((local_2030 != '\0') && (local_2038 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*g_028baa10 + 0x460))();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return CONCAT71((int7)((uint64_t)*(int64_t *)PTR____stack_chk_guard_024a9898 >> 8),1);
  }
                      ___stack_chk_fail();
}



// ============================================================
// 0011e190
// ============================================================
// Function: FUN_0011e190
// Address: 0011e190
// Size: 1589 bytes
// Class: GNStringTable
// String references:
//   "GNStringTable"
//   "MDExportAudioController"

void FUN_0011e190(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int iVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  uint32_t uVar9;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int local_a4;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_01e534b0();
  lVar5 = g_026e1850;
  if (g_026e1850 != 0) {
    FUN_00d50b00();
  }
  pplVar6 = &local_58;
  FUN_01e57490();
  plVar8 = local_58;
  if ((g_026d6328 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026d6278 = FUN_00d4fe50();
    g_026d6260 = "GNStringTable";
    g_026d6268 = 0x28;
    g_026d6270 = FUN_0005eaf0;
    g_026d6280 = 0;
    ram_00000000026d6288 = 0;
    g_026d6290 = 0;
    ram_00000000026d6298 = 0;
    g_026d62a0 = 0;
    ram_00000000026d62a8 = 0;
    g_026d62b0 = 0;
    ram_00000000026d62b8 = 0;
    g_026d62c0 = 0;
    ram_00000000026d62c8 = 0;
    g_026d62d0 = 0;
    ram_00000000026d62d8 = 0;
    g_026d62e0 = 0;
    ram_00000000026d62e8 = 0;
    g_026d62f0 = 0;
    ram_00000000026d62f8 = 0;
    g_026d6300 = 0;
    ram_00000000026d6308 = 0;
    g_026d6310 = 0;
    ram_00000000026d6318 = 0;
    g_026d6320 = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (int64_t *)0x0) {
LAB_0011e21a:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0011e21a;
  }
  plVar8 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  local_80 = plVar8;
  local_a4 = FUN_004bb140();
  FUN_01d6f8d0();
  if (*(int64_t *)(this_ptr + 0x150) == 0) {
    iVar4 = 0;
  }
  else {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    iVar4 = 0;
    local_48 = *(int64_t *)(this_ptr + 0x150);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar7 = -local_40._4_4_;
        }
        else {
          iVar7 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar7);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar7 = 0;
        }
        local_40 = CONCAT44(iVar7,(int)local_40);
      }
      lVar5 = (int64_t)(int)local_40;
      iVar7 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar7);
      if (*(int *)(local_48 + 0xc) <= iVar7) break;
      local_58 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + 8 + lVar5 * 8);
      iVar7 = FUN_003b9070();
      if (iVar7 == local_a4) {
        iVar4 = local_38 + (int)local_40;
      }
      uVar9 = FUN_003b90c0();
      local_68 = local_90;
      local_60 = 0;
      if (local_88 == '\0') {
        if (local_90 != 0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        local_88 = '\0';
      }
      local_60 = '\x01';
      FUN_00e427c0(uVar9,&local_68);
      local_78 = local_a0;
      local_70 = 0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_70 = '\x01';
      FUN_01d6f990();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00136ae0();
  }
  uVar9 = FUN_00d6f370();
  lVar5 = g_026e1858;
  if (g_026e1858 != 0) {
    uVar9 = FUN_00d50b00();
  }
  FUN_00d708a0(uVar9,iVar4);
  FUN_01d6ed40();
  plVar8 = local_80;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = g_026e1860;
  if (g_026e1860 != 0) {
    FUN_00d50b00();
  }
  local_c8 = 0;
  local_c0 = '\0';
  local_b8 = 0;
  local_b0 = '\0';
  pplVar6 = &local_58;
  FUN_01e4fcf0(&local_b8,&local_c8);
  plVar2 = local_58;
  if ((g_026e2658 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026e25a8 = FUN_00015ff0();
    g_026e2590 = "MDExportAudioController";
    g_026e2598 = 0xf0;
    g_026e25a0 = FUN_00130570;
    g_026e25b0 = 0;
    ram_00000000026e25b8 = 0;
    g_026e25c0 = 0;
    g_026e2638 = 0;
    ram_00000000026e2640 = 0;
    g_026e2648 = 0;
    g_026e264a = 1;
    g_026e25c8 = 0;
    ram_00000000026e25d0 = 0;
    g_026e25d8 = 0;
    ram_00000000026e25e0 = 0;
    g_026e25e8 = 0;
    ram_00000000026e25f0 = 0;
    g_026e25f8 = 0;
    ram_00000000026e2600 = 0;
    g_026e2608 = 0;
    ram_00000000026e2610 = 0;
    g_026e2618 = 0;
    ram_00000000026e2620 = 0;
    g_026e2628 = 0;
    ram_00000000026e2630 = 0;
    g_026e2653 = 0;
    g_026e264b = 0;
    ___cxa_guard_release();
    plVar8 = local_80;
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0011e580;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_0011e580:
  plVar1 = *(int64_t **)(this_ptr + 0xb8);
  plVar2 = *pplVar6;
  if (plVar1 != plVar2) {
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar2 == (int64_t *)0x0) {
        *(void*)(this_ptr + 0xb8) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0xb8);
        *(int64_t **)(this_ptr + 0xb8) = *pplVar6;
      }
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
      *(int64_t **)(this_ptr + 0xb8) = plVar2;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e587b0
// ============================================================
// Function: FUN_01e587b0
// Address: 01e587b0
// Size: 1881 bytes
// Class: GNStringTable
// String references:
//   "frame"

void FUN_01e587b0(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  void*puVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void*puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char unaff_SIL;
  int64_t this_ptr;
  bool bVar12;
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qa;
  double dVar14;
  double dVar15;
  double dVar16;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint8_t auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint64_t local_a8;
  int64_t local_88;
  char local_80;
  char local_74;
  int64_t in_stack_ffffffffffffff90;
  char local_68;
  double local_58;
  double local_40;
  double local_38;
  
  uVar11 = *(uint *)(this_ptr + 0x3c);
  if ((*(char *)(this_ptr + 0x38) == '\0') && (*(char *)(this_ptr + 0x39) == '\0')) {
    uVar9 = 1;
  }
  else {
    uVar9 = 9;
  }
  uVar10 = 0;
  if ((uVar11 & 0x180) == 0) {
    uVar10 = uVar11 * 2 & 4 | uVar11 >> 1 & 2 | uVar9;
  }
  local_74 = unaff_SIL;
  (*PTR__objc_msgSend_024a9998)();
  puVar3 = PTR__NSZeroPoint_0249c210;
  cVar5 = _NSEqualPoints(g_02802fa0,SUB84(g_02802fa8,0),*(void*)PTR__NSZeroPoint_0249c210
                         ,*(void*)(PTR__NSZeroPoint_0249c210 + 8));
  puVar4 = PTR__objc_msgSend_024a9998;
  if (cVar5 == '\0') {
    local_a8 = g_02802fa0;
    local_38 = (double)*(float *)(this_ptr + 0x8c);
  }
  else {
    uVar13 = (*PTR__objc_msgSend_024a9998)();
    lVar6 = (*puVar4)(uVar13,0);
    if (lVar6 == 0) {
      local_58 = 0.0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Qa,PTR_s_frame_026ca200);
    }
    g_02802fa0 = 0x4069000000000000;
    local_38 = (double)*(float *)(this_ptr + 0x8c);
    g_02802fa8 = (local_58 + g_02421cb8) - local_38;
    local_a8 = CONCAT44(_UNK_02421cd4,g_02421cd0);
  }
  dVar20 = g_02802fa8;
  dVar14 = (double)*(float *)(this_ptr + 0x88);
  _objc_alloc();
  puVar4 = PTR__objc_msgSend_024a9998;
  dVar21 = dVar14;
  dVar22 = local_38;
  dVar18 = dVar14;
  uVar13 = (*PTR__objc_msgSend_024a9998)(2,(uVar11 << 0x1f) >> 0x1b & uVar11 * 2 | uVar10,1)
  ;
  *(void*)(this_ptr + 0xa0) = uVar13;
  g_02802fa0 = *(void*)puVar3;
  g_02802fa8 = *(double *)(puVar3 + 8);
  dVar15 = (double)FUN_01f25900(*(void*)(this_ptr + 0x40));
  dVar19 = dVar18;
  dVar16 = (double)FUN_01f25900(*(void*)(this_ptr + 0x48));
  local_40 = dVar14;
  if (*(char *)(this_ptr + 0x38) != '\0') {
    dVar14 = dVar15;
    local_40 = dVar16;
  }
  dVar15 = local_38;
  if (*(char *)(this_ptr + 0x39) != '\0') {
    local_38 = dVar18;
    dVar15 = dVar19;
  }
  (*puVar4)(dVar14,SUB84(local_38,0),local_38,dVar15,local_a8,dVar20,dVar21,dVar22);
  uVar13 = (*puVar4)(local_40,SUB84(dVar15,0));
  uVar11 = *(uint *)(this_ptr + 0x3c);
  if ((uVar11 & 0x400) != 0) {
    (*puVar4)(uVar13,0);
    uVar13 = (*puVar4)(g_0238fee8,(int)g_0240e410);
    uVar13 = (*puVar4)(extraout_XMM0_Qa_01,uVar13);
    uVar11 = *(uint *)(this_ptr + 0x3c);
  }
  if ((uVar11 & 8) != 0) {
    uVar13 = (*PTR__objc_msgSend_024a9998)(uVar13,3);
    uVar11 = *(uint *)(this_ptr + 0x3c);
  }
  if ((uVar11 & 0x100) != 0) {
    uVar13 = (*puVar4)(uVar13,1);
    uVar13 = (*puVar4)(uVar13,0x65);
    uVar11 = *(uint *)(this_ptr + 0x3c);
  }
  uVar13 = (*puVar4)(uVar13,2);
  uVar13 = (*puVar4)(uVar13,uVar11 >> 4 & 1);
  uVar13 = (*puVar4)(uVar13,2);
  (*puVar4)(uVar13,~(byte)(uVar11 >> 4) & 1);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *(uint64_t *)PTR__NSAppKitVersionNumber_0249c100;
  auVar17 = roundsd(auVar17,auVar17,9);
  if ((g_02421cc0 < auVar17._0_8_) && ((*(byte *)(this_ptr + 0x3d) & 2) != 0)) {
    (*PTR__objc_msgSend_024a9998)(auVar17._0_8_,0x80);
  }
  _objc_alloc();
  uVar7 = (*PTR__objc_msgSend_024a9998)();
  uVar13 = FUN_00d50b00();
  uVar13 = (*PTR__objc_msgSend_024a9998)(uVar13,&stack0xffffffffffffffb0);
  if (this_ptr != 0) {
    uVar13 = FUN_00d50b20();
  }
  if (g_028b9e10 == 0) {
    _objc_alloc();
    g_028b9e10 = (*PTR__objc_msgSend_024a9998)();
    uVar13 = extraout_XMM0_Qa_00;
  }
  uVar13 = (*puVar4)(uVar13,*(void*)(this_ptr + 0xa0));
  uVar13 = (*puVar4)(uVar13,uVar7);
  uVar13 = (*puVar4)(uVar13,0);
  (*puVar4)(uVar13,1);
  if (*(int64_t *)(this_ptr + 0x18) == 0) {
    FUN_01e590a0();
    FUN_00d50b00();
    if (g_028b9df0 != (void*)0x0) goto LAB_01e58d2f;
LAB_01e58d3c:
    FUN_00e8cb50();
    if (g_028b9df0 == (void*)0x0) {
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_0258a670;
      (*g_0258a688)();
      if (g_028b9df0 == puVar8) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar12 = g_028b9df0 != (void*)0x0;
        g_028b9df0 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (g_028b9df8 == '\0') {
        g_028b9df8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00e38130(0,0,1);
      g_028b9df9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b9df9 = '\x01';
      FUN_00e8cb70();
    }
  }
  else {
    if (local_74 != '\0') {
      FUN_01e59140();
    }
    FUN_00d50b00();
    if (g_028b9df0 == (void*)0x0) goto LAB_01e58d3c;
LAB_01e58d2f:
    if (g_028b9df9 == '\0') goto LAB_01e58d3c;
  }
  if (*(int64_t *)(this_ptr + 0xa0) == 0) goto LAB_01e58ee7;
  FUN_01e583a0();
  if (local_68 == '\0') {
    if (in_stack_ffffffffffffff90 != 0) {
      FUN_00d50b00();
      goto LAB_01e58e45;
    }
  }
  else if (in_stack_ffffffffffffff90 != 0) {
LAB_01e58e45:
    FUN_00d50b20();
    goto LAB_01e58ee7;
  }
  uVar13 = FUN_00dd6a00();
  if ((local_68 == '\0') && (in_stack_ffffffffffffff90 != 0)) {
    uVar13 = FUN_00d50b00();
  }
  local_80 = '\0';
  local_88 = in_stack_ffffffffffffff90;
  FUN_01e5fa90(uVar13,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (in_stack_ffffffffffffff90 != 0) {
    FUN_00d50b20();
  }
LAB_01e58ee7:
  FUN_00d50b20();
  FUN_01e594e0();
  return;
}



// ============================================================
// 01f493b0
// ============================================================
// Function: FUN_01f493b0
// Address: 01f493b0
// Size: 1399 bytes
// Class: GNStringTable

uint32_t FUN_01f493b0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint32_t uVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  uVar5 = FUN_01caeae0();
  if ((char)local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f49416;
    }
LAB_01f494c8:
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    lVar1 = *(int64_t *)(this_ptr + 0xb8);
  }
  else {
    if (local_58 == (int64_t *)0x0) goto LAB_01f494c8;
LAB_01f49416:
    lVar1 = g_02725a70;
    if (*(int64_t *)(this_ptr + 0xc0) == 0) {
      if (g_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02725a80;
      local_f8 = lVar1;
      local_f0 = '\x01';
      if (g_02725a80 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar2;
      local_e0 = '\x01';
      local_d8 = 0;
      local_d0 = '\0';
      FUN_00d31230(&local_d8,&local_e8);
      local_78 = local_58;
      local_70 = 0;
      if ((char)local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = local_50 & 0xffffff00;
      }
      local_70 = '\x01';
      FUN_01d64eb0();
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_02725a78;
      if (g_02725a78 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar2;
      local_110 = '\x01';
      local_108 = 0;
      local_100 = '\0';
      FUN_00d31230(&local_108,&local_118);
      local_88 = local_b8;
      local_80 = 0;
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_80 = '\x01';
      lVar2 = *(int64_t *)(this_ptr + 0xc0);
      local_50 = 1;
      local_58 = &g_024c5048;
      local_40 = 0;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\x01';
      local_48 = lVar2;
      FUN_00d93690();
      local_98 = local_c8;
      local_90 = 0;
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_c0 = '\0';
      }
      local_90 = '\x01';
      FUN_01d64eb0();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      local_58 = &g_024c5048;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    local_34 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0xb8);
  }
  if (lVar1 == 0) {
    uVar4 = 0;
    goto LAB_01f49901;
  }
  FUN_01da4890();
  plVar3 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar3 + 0x468))();
  plVar3 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f4982a;
    }
LAB_01f49880:
    uVar4 = 0;
  }
  else {
    if (local_58 == (int64_t *)0x0) goto LAB_01f49880;
LAB_01f4982a:
    local_a0 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0xb8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_a8 = lVar1;
    FUN_01caeba0();
    local_68 = local_58;
    local_60 = 0;
    if ((char)local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    local_60 = '\x01';
    uVar4 = (**(code **)(*plVar3 + 0x3b8))();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01f49901:
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return uVar4;
}



// ============================================================
// 01f47720
// ============================================================
// Function: FUN_01f47720
// Address: 01f47720
// Size: 1113 bytes
// Class: GNStringTable
// String references:
//   "GNStringTable"

int64_t * FUN_01f47720(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t **pplVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t *this_ptr;
  int64_t *plVar10;
  uint32_t uVar11;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  uint64_t local_40;
  char local_38 [8];
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_78 = plVar5;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (int64_t)&g_02572358;
  (*g_02572370)();
  FUN_01e5b340();
  uVar11 = FUN_01e5b320();
  local_90 = '\0';
  local_98 = plVar5;
  FUN_01e2af10(uVar11,&local_98);
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e5b320();
  FUN_00ca1380();
  plVar10 = local_68;
  pcVar8 = local_38;
  if (local_60[0] != '\0') {
    pcVar8 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar8 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38[0] == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01f47899;
    }
LAB_01f47aad:
    plVar10 = (int64_t *)0x0;
    bVar1 = true;
    local_40 = 0;
  }
  else {
    if (local_68 == (int64_t *)0x0) goto LAB_01f47aad;
LAB_01f47899:
    local_60[0] = '\0';
    local_68 = (int64_t *)0x0;
    local_70 = plVar10;
    local_58 = plVar10;
    local_50 = -1;
    iStack_4c = 0;
    iStack_48 = 0;
    while( true ) {
      lVar9 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((int64_t)local_58 + 0xc) <= local_50) break;
      plVar10 = *(int64_t **)(local_58[2] + 8 + lVar9 * 8);
      local_68 = plVar10;
      uVar6 = 0;
      if ((g_026d6328 == '\0') && (uVar6 = ___cxa_guard_acquire(), (int)uVar6 != 0)) {
        g_026d6278 = FUN_00d4fe50();
        g_026d6260 = "GNStringTable";
        g_026d6268 = 0x28;
        g_026d6270 = FUN_0005eaf0;
        g_026d6280 = 0;
        ram_00000000026d6288 = 0;
        g_026d6290 = 0;
        ram_00000000026d6298 = 0;
        g_026d62a0 = 0;
        ram_00000000026d62a8 = 0;
        g_026d62b0 = 0;
        ram_00000000026d62b8 = 0;
        g_026d62c0 = 0;
        ram_00000000026d62c8 = 0;
        g_026d62d0 = 0;
        ram_00000000026d62d8 = 0;
        g_026d62e0 = 0;
        ram_00000000026d62e8 = 0;
        g_026d62f0 = 0;
        ram_00000000026d62f8 = 0;
        g_026d6300 = 0;
        ram_00000000026d6308 = 0;
        g_026d6310 = 0;
        ram_00000000026d6318 = 0;
        g_026d6320 = 0;
        uVar6 = ___cxa_guard_release();
      }
      pplVar7 = (int64_t **)&g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        uVar6 = FUN_00e85ea0();
        pplVar7 = &local_68;
        if ((char)uVar6 == '\0') {
          pplVar7 = (int64_t **)&g_02802688;
        }
      }
      plVar4 = local_70;
      plVar10 = *pplVar7;
      if (plVar10 != (int64_t *)0x0) {
        if (*(char *)(pplVar7 + 1) == '\0') {
          uVar6 = FUN_00d50b00();
          local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          FUN_00083b20();
          goto joined_r0x01f47b71;
        }
        *(void*)(pplVar7 + 1) = 0;
        local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        goto LAB_01f47a3c;
      }
      if (iStack_4c != 0) {
        if (iStack_4c < 1) {
          iStack_4c = -iStack_4c;
        }
        else {
          local_50 = local_50 - iStack_4c;
          FUN_00d23690();
          iStack_48 = iStack_48 + iStack_4c;
          iStack_4c = 0;
        }
      }
    }
    local_40 = 0;
    plVar10 = (int64_t *)0x0;
LAB_01f47a3c:
    plVar4 = local_70;
    FUN_00083b20();
joined_r0x01f47b71:
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    bVar3 = true;
    bVar2 = true;
    bVar1 = true;
    if (plVar10 != (int64_t *)0x0) {
      local_80 = '\0';
      local_88 = plVar10;
      FUN_00d23d90();
      bVar1 = false;
      if ((local_80 != '\0') && (bVar1 = false, local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
        bVar1 = false;
      }
    }
    if (plVar5 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x01f47aa3;
    }
  }
  local_60[0] = '\0';
  local_68 = (int64_t *)0x0;
  iStack_4c = 0;
  iStack_48 = 0;
  local_58 = plVar5;
  for (lVar9 = 0; local_50 = (int)lVar9, local_50 < *(int *)((int64_t)plVar5 + 0xc);
      lVar9 = lVar9 + 1) {
    local_68 = *(int64_t **)(plVar5[2] + lVar9 * 8);
    FUN_00d50130();
  }
  FUN_00083b20();
  bVar3 = false;
  bVar2 = false;
  *(void*)(this_ptr + 1) = 0;
joined_r0x01f47aa3:
  if (((char)local_40 == '\0') && (bVar2 = bVar3, !bVar1)) {
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)plVar10;
  *(void*)(this_ptr + 1) = 1;
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0011edf0
// ============================================================
// Function: FUN_0011edf0
// Address: 0011edf0
// Size: 1170 bytes
// Class: GNStringTable

double FUN_0011edf0(char param_1,double param_2)

{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t lVar7;
  uint32_t in_EDX;
  int64_t *arg1;
  int64_t this_ptr;
  void* pVar8;
  double dVar9;
  int64_t local_d8;
  char local_d0;
  double local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  double local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  double local_38;
  
  iVar3 = FUN_01d70da0();
  if (iVar3 < 0) {
    local_90 = (double)FUN_004f01b0();
    local_38 = param_2;
  }
  else {
    local_38 = (double)CONCAT44(local_38._4_4_,in_EDX);
    iVar3 = FUN_01d70da0();
    local_68 = *(double *)
                (*(int64_t *)(*(int64_t *)(this_ptr + 0x158) + 0x10) + (int64_t)iVar3 * 8);
    FUN_0011eac0();
    local_80 = 0;
    if ((local_d0 == '\0') && (local_d8 != 0)) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = local_d8;
    FUN_00757c60();
    local_78 = local_60;
    local_70 = 0;
    uVar2 = local_38._0_4_;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_70 = '\x01';
    local_90 = (double)FUN_004ef800(&local_78,&local_88,uVar2 & 0xff);
    local_38 = param_2;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if (param_1 != '\0') {
    local_68 = local_38 + local_90;
    lVar1 = *arg1;
    if (lVar1 != 0) {
      local_38 = local_68;
      if (0 < *(int *)(lVar1 + 0xc)) {
        pVar8 = 0;
        do {
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          lVar5 = local_60;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0011f0f0;
            }
          }
          else if (local_60 != 0) {
LAB_0011f0f0:
            local_58 = '\0';
            local_60 = 0;
            local_50 = lVar5;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar3 = -local_48._4_4_;
                }
                else {
                  iVar3 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar3);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar3 = 0;
                }
                local_48 = CONCAT44(iVar3,(int)local_48);
              }
              lVar5 = (int64_t)(int)local_48;
              iVar3 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar3);
              if (*(int *)(local_50 + 0xc) <= iVar3) break;
              lVar7 = *(int64_t *)(local_50 + 0x10);
              local_60 = *(int64_t *)(lVar7 + 8 + lVar5 * 8);
              pvVar4 = _pthread_getspecific((void*)lVar7);
              pVar6 = (void*)lVar7;
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar9 = (double)FUN_01259520();
              if (local_38 < dVar9) {
                pvVar4 = _pthread_getspecific(pVar6);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar9 = (double)FUN_0125a280();
                if (dVar9 < local_38) {
                  pvVar4 = _pthread_getspecific(pVar6);
                  if (pvVar4 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar9 = (double)FUN_01259520();
                  if (local_68 <= dVar9) {
                    local_68 = dVar9;
                  }
                }
              }
            }
            FUN_001159b0();
            FUN_00d50b20();
          }
          pVar8 = pVar8 + 1;
        } while ((int)pVar8 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
  }
  return local_90;
}



// ============================================================
// 01e55990
// ============================================================
// Function: FUN_01e55990
// Address: 01e55990
// Size: 744 bytes
// Class: GNStringTable

void FUN_01e55990(void)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  if (*(char *)(arg1 + 0x40) == '\0') {
    if (*(int64_t *)(arg1 + 0x10) == 0) {
      *(void*)(this_ptr + 1) = 0;
    }
    else {
      FUN_01e40eb0();
      *(void*)(this_ptr + 1) = 0;
      if (local_38 != '\0') goto LAB_01e55aac;
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        *this_ptr = (int64_t)local_40;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
    }
LAB_01e55a78:
    local_40 = (int64_t *)0x0;
  }
  else {
    if ((*(int64_t *)(arg1 + 0x18) == 0) || (cVar3 = FUN_01e5c800(), cVar3 != '\0')) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    cVar3 = FUN_01e5c8a0();
    if (cVar3 != '\0') {
      FUN_01f27fe0();
      FUN_01f2e7e0();
      if (local_40 == (int64_t *)0x0) {
        bVar2 = true;
        plVar4 = (int64_t *)0x0;
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar2 = false;
        }
        else {
          local_38 = '\0';
          bVar2 = false;
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (plVar4 == (int64_t *)0x0) {
LAB_01e55b55:
        FUN_01f27fe0();
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            *this_ptr = (int64_t)local_40;
            *(void*)(this_ptr + 1) = 1;
            goto LAB_01e55c5c;
          }
          local_40 = (int64_t *)0x0;
        }
      }
      else {
        lVar1 = *(int64_t *)(arg1 + 0x18);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar4 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') goto LAB_01e55b55;
        FUN_01e5cf30();
        if (local_40 == (int64_t *)0x0) {
          if (bVar2) {
            *(void*)(this_ptr + 1) = 0;
            FUN_00d50b00();
            *this_ptr = (int64_t)plVar4;
            goto LAB_01e55ab0;
          }
          FUN_00d50b00();
          local_40 = plVar4;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      *this_ptr = (int64_t)local_40;
      *(void*)(this_ptr + 1) = 1;
LAB_01e55c5c:
      if (!bVar2 && plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    plVar4 = *(int64_t **)(arg1 + 0x20);
    if (plVar4 == (int64_t *)0x0) {
      FUN_01f27fe0();
      *(void*)(this_ptr + 1) = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          *this_ptr = (int64_t)local_40;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        goto LAB_01e55a78;
      }
    }
    else {
      FUN_00d50b00();
      local_40 = plVar4;
    }
  }
LAB_01e55aac:
  *this_ptr = (int64_t)local_40;
LAB_01e55ab0:
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0011f440
// ============================================================
// Function: FUN_0011f440
// Address: 0011f440
// Size: 888 bytes
// Class: GNStringTable

void FUN_0011f440(uint64_t param_1,int param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  void*arg1;
  char cVar6;
  int64_t lVar7;
  int64_t *local_b8;
  char local_b0;
  int64_t local_78;
  char local_70;
  char local_31;
  
  if (param_2 == 0) {
    (**(code **)(*(int64_t *)*arg1 + 0x998))();
    plVar1 = (int64_t *)*arg1;
    FUN_00d8ede0();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    (**(code **)(*plVar1 + 0x968))();
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if (local_70 == '\0') {
      return;
    }
    if (local_78 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x998))();
  FUN_00d6f370();
  (**(code **)(*local_b8 + 0x88))();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_31 = '\x01';
  if (local_78 == 0) {
    local_78 = *param_3;
    if (local_78 != 0) {
      local_31 = (char)param_3[1];
      if (local_31 != '\0') {
        FUN_00d50b00();
      }
      goto LAB_0011f50e;
    }
    lVar7 = *param_4;
    local_78 = 0;
    local_31 = '\x01';
    cVar6 = '\x01';
    if (lVar7 != 0) goto LAB_0011f51d;
  }
  else {
LAB_0011f50e:
    lVar7 = *param_4;
    if (lVar7 != 0) {
LAB_0011f51d:
      lVar5 = 0;
      do {
        cVar6 = local_31;
        if (*(int *)(lVar7 + 0xc) <= (int)lVar5) {
          FUN_00083b20();
          FUN_01d6fde0();
          FUN_01d6ed40();
          goto joined_r0x0011f753;
        }
        cVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar7 + 0x10) + lVar5 * 8) + 0x50))();
        lVar5 = lVar5 + 1;
      } while (cVar2 == '\0');
      FUN_01d6ed40();
      FUN_00083b20();
      goto joined_r0x0011f753;
    }
    (**(code **)(*(int64_t *)*arg1 + 0x978))();
    iVar3 = FUN_01d70da0();
    cVar6 = local_31;
    if (-1 < iVar3) {
      iVar3 = FUN_01d70da0();
      iVar4 = FUN_01d6fde0();
      if (iVar3 < iVar4) goto joined_r0x0011f753;
    }
  }
  FUN_01d6fde0();
  FUN_01d6ed40();
joined_r0x0011f753:
  if ((cVar6 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01e56280
// ============================================================
// Function: FUN_01e56280
// Address: 01e56280
// Size: 686 bytes
// Class: GNStringTable

void FUN_01e56280(uint64_t param_1,int64_t *param_2)

{
  void*puVar1;
  void*puVar2;
  int64_t this_ptr;
  uint32_t uVar3;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_38;
  char local_30;
  
  *(void*)(this_ptr + 0x40) = 1;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar2 + 0xc) = 0;
  *puVar2 = &g_026a3350;
  puVar2[2] = &g_026a37c8;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(void*)(puVar2 + 5) = 0;
  puVar2[6] = 0;
  *(void*)((int64_t)puVar2 + 0x37) = 0;
  *(void*)((int64_t)puVar2 + 0x3c) = 0;
  *(void*)((int64_t)puVar2 + 0x44) = 0;
  *(void*)((int64_t)puVar2 + 0x4c) = 0;
  *(void*)((int64_t)puVar2 + 0x54) = 0;
  *(void*)((int64_t)puVar2 + 0x5c) = 0;
  *(void*)((int64_t)puVar2 + 100) = 0;
  *(void*)((int64_t)puVar2 + 0x69) = 0;
  puVar2[0xf] = 0;
  *(void*)((int64_t)puVar2 + 0x7f) = 0;
  *(void*)((int64_t)puVar2 + 0x84) = 0;
  *(void*)((int64_t)puVar2 + 0x8c) = 0;
  *(void*)((int64_t)puVar2 + 0x94) = 0;
  uVar3 = (*g_026a3368)();
  puVar1 = *(void**)(this_ptr + 0x18);
  if (puVar1 == puVar2) {
    uVar3 = FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x18) = puVar2;
    if (puVar1 != (void*)0x0) {
      uVar3 = FUN_00d50b20();
    }
  }
  local_78 = *param_2;
  local_70 = '\0';
  FUN_01e5b6f0(uVar3,&local_78);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01e5c670();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x20) != 0) {
    FUN_01e5eec0();
  }
  FUN_01e5e3f0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if (local_30 != '\0') {
      local_30 = '\0';
    }
    FUN_01e5e380();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x28) != 0) {
    FUN_01e5ca90();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01e6cc40();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e5e430();
  return;
}



// ============================================================
// 01e56f90
// ============================================================
// Function: FUN_01e56f90
// Address: 01e56f90
// Size: 586 bytes
// Class: GNStringTable
// String references:
//   "GNStringTable"

void FUN_01e56f90(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  if (*(int64_t *)(arg1 + 0x50) == 0) {
LAB_01e571b6:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    lVar5 = 0;
    while( true ) {
      FUN_00ca1380();
      local_48 = (int64_t *)CONCAT71(local_48._1_7_,(char)local_50);
      pplVar4 = &local_50;
      if ((char)local_50 == '\0') {
        pplVar4 = &local_48;
      }
      *(void*)pplVar4 = 0;
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = *(int *)(local_58 + 0xc);
      if ((char)local_48 != '\0') {
        FUN_00d50b20();
      }
      if (iVar3 <= lVar5) goto LAB_01e571b6;
      FUN_00ca1380();
      local_38[0] = (char)local_50;
      pplVar4 = &local_50;
      if ((char)local_50 == '\0') {
        pplVar4 = (int64_t **)local_38;
      }
      *(void*)pplVar4 = 0;
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      plVar1 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + lVar5 * 8);
      local_48 = plVar1;
      local_40 = '\0';
      // [STATIC_INIT: property registration]
      pplVar4 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_48;
        if (cVar2 == '\0') {
          pplVar4 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar4;
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar4 + 1) = 0;
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) break;
      lVar5 = lVar5 + 1;
    }
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}



// ============================================================
// 01e59140
// ============================================================
// Function: FUN_01e59140
// Address: 01e59140
// Size: 537 bytes
// Class: GNStringTable

void FUN_01e59140(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  double dVar1;
  void*puVar2;
  uint64_t uVar3;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint8_t auVar7 [16];
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  _objc_alloc();
  puVar2 = PTR__objc_msgSend_024a9998;
  dVar1 = (double)(float)((uint64_t)*(void*)(this_ptr + 0x88) >> 0x20);
  uVar5 = 0;
  uVar6 = 0;
  auVar7._8_4_ = SUB84(dVar1,0);
  auVar7._0_8_ = (double)(float)*(void*)(this_ptr + 0x88);
  auVar7._12_4_ = (int)((uint64_t)dVar1 >> 0x20);
  uVar3 = (*PTR__objc_msgSend_024a9998)();
  (*puVar2)(extraout_XMM0_Da,0x12,param_3,param_4,uVar5,uVar6,auVar7);
  uVar4 = (*puVar2)();
  uVar4 = (*puVar2)(uVar4,uVar3);
  local_50 = 0;
  local_58 = *(int64_t *)(this_ptr + 0x18);
  if (local_58 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_50 = '\x01';
  (*PTR__objc_msgSend_024a9998)(uVar4,&local_58);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d90850();
  local_48 = *(int64_t *)(this_ptr + 0x18);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  FUN_01d470d0();
  local_30 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_30 = '\x01';
  local_38 = local_68;
  FUN_01d8cde0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (*PTR__objc_release_024a99a0)();
  FUN_00d50b00();
  uVar4 = FUN_01d8c690();
  if (this_ptr != 0) {
    uVar4 = FUN_00d50b20();
  }
  (*PTR__objc_msgSend_024a9998)(uVar4,uVar3);
  return;
}



// ============================================================
// 0011eac0
// ============================================================
// Function: FUN_0011eac0
// Address: 0011eac0
// Size: 601 bytes
// Class: GNStringTable

int64_t * FUN_0011eac0(void* param_1)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  void *pvVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  iVar3 = FUN_01d70da0();
  if (-1 < iVar3) {
    FUN_00757c60();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      if (0 < *(int *)(local_68 + 0xc)) {
        lVar5 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + lVar5 * 8);
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e5ae0();
          iVar1 = *(int *)(local_40 + 0xc);
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (0 < iVar1) {
            if (iVar3 == 0) {
              *(void*)(this_ptr + 1) = 0;
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              *this_ptr = lVar2;
              *(void*)(this_ptr + 1) = 1;
              FUN_000be170();
              FUN_00d50b20();
              return this_ptr;
            }
            iVar3 = iVar3 + -1;
          }
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(local_68 + 0xc));
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}



// ============================================================
// 01e595b0
// ============================================================
// Function: FUN_01e595b0
// Address: 01e595b0
// Size: 636 bytes
// Class: GNStringTable
// String references:
//   "setRootView:"
//   "objectAtIndex:"
//   "removeFromSuperview"

void FUN_01e595b0(uint64_t param_1)

{
  void*puVar1;
  void*puVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar1 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  (*puVar1)();
  lVar4 = (*puVar1)();
  if (-1 < lVar4 + -1) {
    do {
      lVar4 = lVar4 + -1;
      (*puVar1)(param_1,lVar4);
      uVar5 = (*puVar1)();
      cVar3 = (*puVar1)(param_1,uVar5);
      if (cVar3 != '\0') {
        local_48 = '\0';
        local_50 = 0;
        (*puVar1)(param_1,&local_50);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        (*puVar1)();
      }
    } while (0 < lVar4);
  }
  (*puVar1)(param_1,*(void*)(this_ptr + 0xa0));
  lVar4 = (*puVar1)();
  if (lVar4 == 0) {
    (*PTR__objc_release_024a99a0)();
    g_028b9e10 = 0;
  }
  (*puVar1)();
  (*puVar1)(param_1,0);
  puVar2 = PTR__objc_release_024a99a0;
  (*PTR__objc_release_024a99a0)();
  (*puVar1)();
  (*puVar2)();
  FUN_00d50b00();
  if (g_028b9df0 != 0) {
    FUN_01e583a0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01e59811;
      FUN_00d50b00();
    }
    else if (local_40 == 0) goto LAB_01e59811;
    FUN_00dd6a00();
    lVar4 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    local_40 = lVar4;
    FUN_00e383c0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01e59811:
  FUN_00d50b20();
  *(void*)(this_ptr + 0xa0) = 0;
  return;
}



// ============================================================
// 01e57a30
// ============================================================
// Function: FUN_01e57a30
// Address: 01e57a30
// Size: 677 bytes
// Class: GNStringTable

void FUN_01e57a30(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_98;
  char local_90;
  
  lVar1 = *arg1;
  lVar2 = this_ptr[0xc];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0xc] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *param_2;
  lVar2 = this_ptr[0xd];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0xd] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*arg1 == 0) {
    if (this_ptr[3] == 0) {
      (**(code **)(*this_ptr + 0x448))();
      lVar1 = this_ptr[3];
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = this_ptr[3];
    }
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if (*param_1 == 0) {
      FUN_01e5bfa0();
    }
    else {
      FUN_01e5c1a0();
    }
    (**(code **)(*this_ptr + 0x598))();
    FUN_01e5d9c0();
    FUN_01f27fe0();
    FUN_01f45250();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e5e740();
    (**(code **)(*this_ptr + 0x5a0))();
    param_2 = (int64_t *)*param_2;
    FUN_00d50b00();
    (**(code **)(*param_2 + 0x440))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = this_ptr[2];
    if (lVar1 == 0) {
      (**(code **)(*this_ptr + 0x4c0))();
      lVar1 = this_ptr[2];
    }
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x598))();
    plVar3 = (int64_t *)*arg1;
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x9a8))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

