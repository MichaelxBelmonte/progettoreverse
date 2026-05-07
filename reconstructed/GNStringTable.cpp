// Reconstructed implementation of GNStringTable
// From MikeCore binary — reverse-engineered pseudocode

#include "GNStringTable.h"

// ============================================================
// @0011fca0 — 5556 bytes
// str: ""track%I""
// str: ""%@.%I""
// ============================================================

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




// ============================================================
// @01f47fa0 — 3352 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f48c41) */
/* WARNING: Removing unreachable block (ram,0x01f48a20) */
/* WARNING: Removing unreachable block (ram,0x01f48a2c) */
/* WARNING: Removing unreachable block (ram,0x01f48174) */
/* WARNING: Removing unreachable block (ram,0x01f48168) */
/* WARNING: Removing unreachable block (ram,0x01f489ce) */
/* WARNING: Removing unreachable block (ram,0x01f489da) */
/* WARNING: Removing unreachable block (ram,0x01f48ae0) */
/* WARNING: Removing unreachable block (ram,0x01f48aec) */
/* WARNING: Removing unreachable block (ram,0x01f48c4d) */

undefined8 FUN_01f47fa0(undefined8 param_1,int param_2,size_t param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar7 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_2118;
  undefined8 uStack_2110;
  undefined8 local_2108;
  undefined8 uStack_2100;
  longlong *local_2058;
  char local_2050;
  longlong *local_2048;
  char local_2040;
  longlong *local_2038;
  char local_2030;
  undefined8 extraout_XMM0_Qb_02;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (param_2 != 0) {
    if ((DAT_028baa10 == (longlong *)0x0) || (DAT_028baa19 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028baa10 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_00e8fc40();
        FUN_000161a0();
        (**(code **)(*plVar4 + 0x18))();
        if (DAT_028baa10 == plVar4) {
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          bVar3 = true;
          bVar6 = DAT_028baa10 != (longlong *)0x0;
          DAT_028baa10 = plVar4;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028baa18 == '\0') {
          DAT_028baa18 = '\x01';
          FUN_00e8cb90();
          bVar3 = bVar2;
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        (**(code **)(*DAT_028baa10 + 0x448))();
        FUN_01d4e800();
        plVar4 = DAT_028baa40;
        if (DAT_028baa40 != local_2038) {
          if (local_2030 == '\0') {
            if (local_2038 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
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
          bVar3 = DAT_028baa40 != (longlong *)0x0;
          DAT_028baa40 = plVar4;
          if (bVar3) {
            FUN_00d50b20();
            plVar4 = local_2038;
          }
        }
        if ((plVar4 != (longlong *)0x0) && (DAT_028baa48 == '\0')) {
          DAT_028baa48 = '\x01';
          FUN_00e8cb90();
          plVar4 = local_2038;
        }
        if ((local_2030 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00e90e50();
        plVar4 = (longlong *)FUN_00e8fc40();
        FUN_0006daf0();
        *(undefined4 *)(plVar4 + 0x27) = 0;
        plVar4[0x2e] = 0;
        *(undefined4 *)(plVar4 + 0x2f) = 0;
        plVar4[0x30] = 0;
        *(undefined1 *)(plVar4 + 0x31) = 0;
        plVar4[0x28] = 0;
        plVar4[0x29] = 0;
        *(undefined4 *)(plVar4 + 0x2a) = 0;
        plVar4[0x2b] = 0;
        plVar4[0x2c] = 0;
        *(undefined8 *)((longlong)plVar4 + 0x165) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x18c) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x194) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x199) = 0;
        plVar4[0x35] = 0;
        plVar4[0x36] = 0;
        plVar4[0x37] = 0;
        plVar4[0x38] = 0;
        *plVar4 = (longlong)&DAT_02682cf8;
        puVar5 = &DAT_026837c0;
        plVar4[2] = (longlong)&DAT_026837c0;
        plVar4[0x39] = 0;
        plVar4[0x3a] = 0;
        *(undefined4 *)(plVar4 + 0x3b) = 0;
        plVar4[0x3c] = 0;
        plVar4[0x3d] = 0;
        *(undefined2 *)(plVar4 + 0x3e) = 0;
        (*DAT_02682d10)();
        if (DAT_028baa20 == plVar4) {
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          bVar3 = true;
          bVar6 = DAT_028baa20 != (longlong *)0x0;
          DAT_028baa20 = plVar4;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028baa28 == '\0') {
          DAT_028baa28 = '\x01';
          FUN_00e8cb90();
          bVar3 = bVar2;
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        (**(code **)(*DAT_028baa20 + 0x4d0))();
        plVar4 = DAT_028baa40;
        if (DAT_028baa40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_01d56f30();
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = (longlong *)FUN_00e8fc40();
        FUN_00074c30();
        (**(code **)(*plVar4 + 0x18))();
        (**(code **)(*plVar4 + 0x640))();
        local_2108 = (**(code **)(*local_2038 + 0x580))();
        uStack_2100 = extraout_XMM0_Qb;
        (**(code **)(*plVar4 + 0x640))();
        auVar11._0_8_ = (**(code **)(*local_2048 + 0x578))();
        auVar11._8_8_ = extraout_XMM0_Qb_00;
        auVar10._4_12_ = local_2108._4_12_;
        auVar10._0_4_ = (float)local_2108 + DAT_0239394c;
        auVar7._4_12_ = auVar11._4_12_;
        auVar7._0_4_ = (float)auVar11._0_8_ + DAT_0239394c;
        auVar11 = insertps(auVar10,auVar7,0x10);
        (**(code **)(*plVar4 + 0x4d0))();
        if ((local_2040 != '\0') && (local_2048 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2030 != '\0') && (local_2038 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d94ee0();
        FUN_01d95060();
        (**(code **)(*plVar4 + 0x570))();
        (**(code **)(*plVar4 + 0x558))();
        plVar4 = DAT_028baa20;
        if (DAT_028baa20 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_01d978b0();
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_01e3f820();
        _memset(puVar5,0x1fff,param_3);
        FUN_00d8d3e0();
        plVar4 = DAT_028baa50;
        if (DAT_028baa50 != local_2048) {
          if (local_2040 == '\0') {
            if (local_2048 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
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
          bVar3 = DAT_028baa50 != (longlong *)0x0;
          DAT_028baa50 = plVar4;
          if (bVar3) {
            FUN_00d50b20();
            plVar4 = local_2048;
          }
        }
        if ((plVar4 != (longlong *)0x0) && (DAT_028baa58 == '\0')) {
          DAT_028baa58 = '\x01';
          FUN_00e8cb90();
          plVar4 = local_2048;
        }
        if ((local_2040 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar4 = (longlong *)FUN_00e8fc40();
        FUN_0006daf0();
        *plVar4 = (longlong)&DAT_0269d720;
        plVar4[2] = (longlong)&DAT_0269e0b8;
        plVar4[0x2b] = 0;
        *(undefined2 *)(plVar4 + 0x2c) = 0;
        *(undefined4 *)(plVar4 + 0x2e) = 0;
        *(undefined1 *)((longlong)plVar4 + 0x174) = 0;
        plVar4[0x36] = 0;
        *(undefined2 *)(plVar4 + 0x37) = 0;
        plVar4[0x38] = 0;
        *(undefined1 *)(plVar4 + 0x39) = 0;
        plVar4[0x27] = 0;
        plVar4[0x28] = 0;
        *(undefined8 *)((longlong)plVar4 + 0x141) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x149) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x164) = 0;
        *(undefined4 *)((longlong)plVar4 + 0x16b) = 0;
        plVar4[0x2f] = 0;
        plVar4[0x30] = 0;
        *(undefined1 *)(plVar4 + 0x31) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x18c) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x194) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x19a) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x1a2) = 0;
        *(undefined1 *)((longlong)plVar4 + 0x1d4) = 0;
        *(undefined8 *)((longlong)plVar4 + 0x1cc) = 0;
        (*DAT_0269d738)();
        if (DAT_028baa30 == plVar4) {
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          bVar3 = true;
          bVar6 = DAT_028baa30 != (longlong *)0x0;
          DAT_028baa30 = plVar4;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028baa38 == '\0') {
          DAT_028baa38 = '\x01';
          FUN_00e8cb90();
          bVar3 = bVar2;
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        (**(code **)(*DAT_028baa30 + 0x4d0))();
        (**(code **)(*DAT_028baa30 + 0x640))();
        (**(code **)(*local_2058 + 0x378))();
        if (local_2040 == '\0') {
          if (local_2048 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_2040 = '\0';
        }
        FUN_01e12b60();
        if (local_2048 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_2040 != '\0') && (local_2048 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2050 != '\0') && (local_2058 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d8b910();
        FUN_00e91160();
        plVar4 = DAT_028baa50;
        if (DAT_028baa50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_01e125e0();
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = (longlong *)FUN_00e8fc40();
        FUN_00074c30();
        (**(code **)(*plVar4 + 0x18))();
        (**(code **)(*plVar4 + 0x640))();
        local_2118 = (**(code **)(*local_2048 + 0x580))();
        uStack_2110 = extraout_XMM0_Qb_01;
        (**(code **)(*plVar4 + 0x640))();
        auVar8._0_8_ = (**(code **)(*local_2058 + 0x578))();
        auVar8._8_8_ = extraout_XMM0_Qb_02;
        auVar12._4_12_ = local_2118._4_12_;
        auVar12._0_4_ = (float)local_2118 + DAT_0239394c;
        auVar9._4_12_ = auVar8._4_12_;
        auVar9._0_4_ = (float)auVar8._0_8_ + DAT_02390d38;
        insertps(auVar12,auVar9,0x10);
        (**(code **)(*plVar4 + 0x4d0))();
        if ((local_2050 != '\0') && (local_2058 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2040 != '\0') && (local_2048 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d94ee0();
        FUN_01d95060();
        (**(code **)(*plVar4 + 0x570))();
        (**(code **)(*plVar4 + 0x558))();
        plVar4 = DAT_028baa30;
        if (DAT_028baa30 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_01d978b0();
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar4 = (longlong *)FUN_001edd10();
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
        if ((local_2040 != '\0') && (local_2048 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01e561b0();
        (**(code **)(*local_2048 + 0x450))();
        if ((local_2040 != '\0') && (local_2048 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01e1eb80(DAT_023934c8,0);
        plVar4 = DAT_028baa60;
        if (DAT_028baa60 != local_2048) {
          if (local_2040 == '\0') {
            if (local_2048 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
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
          bVar3 = DAT_028baa60 != (longlong *)0x0;
          DAT_028baa60 = plVar4;
          if (bVar3) {
            FUN_00d50b20();
            plVar4 = local_2048;
          }
        }
        if ((plVar4 != (longlong *)0x0) && (DAT_028baa68 == '\0')) {
          DAT_028baa68 = '\x01';
          FUN_00e8cb90();
          plVar4 = local_2048;
        }
        if ((local_2040 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        DAT_028baa19 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028baa19 = '\x01';
        FUN_00e8cb70();
      }
    }
    FUN_01e56750();
    FUN_01e5bfa0();
    if ((local_2030 != '\0') && (local_2038 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*DAT_028baa10 + 0x460))();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return CONCAT71((int7)((ulonglong)*(longlong *)PTR____stack_chk_guard_024a9898 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ============================================================
// @01e587b0 — 1881 bytes
// str: ""frame""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e58ecc) */
/* WARNING: Removing unreachable block (ram,0x01e58ed5) */
/* WARNING: Removing unreachable block (ram,0x01e58e80) */
/* WARNING: Removing unreachable block (ram,0x01e58e89) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e587b0(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char unaff_SIL;
  longlong unaff_RDI;
  bool bVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 local_a8;
  longlong local_88;
  char local_80;
  char local_74;
  longlong in_stack_ffffffffffffff90;
  char local_68;
  double local_58;
  double local_40;
  double local_38;
  
  uVar11 = *(uint *)(unaff_RDI + 0x3c);
  if ((*(char *)(unaff_RDI + 0x38) == '\0') && (*(char *)(unaff_RDI + 0x39) == '\0')) {
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
  (*(code *)PTR__objc_msgSend_024a9998)();
  puVar3 = PTR__NSZeroPoint_0249c210;
  cVar5 = _NSEqualPoints(DAT_02802fa0,SUB84(DAT_02802fa8,0),*(undefined8 *)PTR__NSZeroPoint_0249c210
                         ,*(undefined8 *)(PTR__NSZeroPoint_0249c210 + 8));
  puVar4 = PTR__objc_msgSend_024a9998;
  if (cVar5 == '\0') {
    local_a8 = DAT_02802fa0;
    local_38 = (double)*(float *)(unaff_RDI + 0x8c);
  }
  else {
    uVar13 = (*(code *)PTR__objc_msgSend_024a9998)();
    lVar6 = (*(code *)puVar4)(uVar13,0);
    if (lVar6 == 0) {
      local_58 = 0.0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Qa,PTR_s_frame_026ca200);
    }
    DAT_02802fa0 = 0x4069000000000000;
    local_38 = (double)*(float *)(unaff_RDI + 0x8c);
    DAT_02802fa8 = (local_58 + _DAT_02421cb8) - local_38;
    local_a8 = CONCAT44(_UNK_02421cd4,_DAT_02421cd0);
  }
  dVar20 = DAT_02802fa8;
  dVar14 = (double)*(float *)(unaff_RDI + 0x88);
  _objc_alloc();
  puVar4 = PTR__objc_msgSend_024a9998;
  dVar21 = dVar14;
  dVar22 = local_38;
  dVar18 = dVar14;
  uVar13 = (*(code *)PTR__objc_msgSend_024a9998)(2,(uVar11 << 0x1f) >> 0x1b & uVar11 * 2 | uVar10,1)
  ;
  *(undefined8 *)(unaff_RDI + 0xa0) = uVar13;
  DAT_02802fa0 = *(undefined8 *)puVar3;
  DAT_02802fa8 = *(double *)(puVar3 + 8);
  dVar15 = (double)FUN_01f25900(*(undefined8 *)(unaff_RDI + 0x40));
  dVar19 = dVar18;
  dVar16 = (double)FUN_01f25900(*(undefined8 *)(unaff_RDI + 0x48));
  local_40 = dVar14;
  if (*(char *)(unaff_RDI + 0x38) != '\0') {
    dVar14 = dVar15;
    local_40 = dVar16;
  }
  dVar15 = local_38;
  if (*(char *)(unaff_RDI + 0x39) != '\0') {
    local_38 = dVar18;
    dVar15 = dVar19;
  }
  (*(code *)puVar4)(dVar14,SUB84(local_38,0),local_38,dVar15,local_a8,dVar20,dVar21,dVar22);
  uVar13 = (*(code *)puVar4)(local_40,SUB84(dVar15,0));
  uVar11 = *(uint *)(unaff_RDI + 0x3c);
  if ((uVar11 & 0x400) != 0) {
    (*(code *)puVar4)(uVar13,0);
    uVar13 = (*(code *)puVar4)(DAT_0238fee8,(int)DAT_0240e410);
    uVar13 = (*(code *)puVar4)(extraout_XMM0_Qa_01,uVar13);
    uVar11 = *(uint *)(unaff_RDI + 0x3c);
  }
  if ((uVar11 & 8) != 0) {
    uVar13 = (*(code *)PTR__objc_msgSend_024a9998)(uVar13,3);
    uVar11 = *(uint *)(unaff_RDI + 0x3c);
  }
  if ((uVar11 & 0x100) != 0) {
    uVar13 = (*(code *)puVar4)(uVar13,1);
    uVar13 = (*(code *)puVar4)(uVar13,0x65);
    uVar11 = *(uint *)(unaff_RDI + 0x3c);
  }
  uVar13 = (*(code *)puVar4)(uVar13,2);
  uVar13 = (*(code *)puVar4)(uVar13,uVar11 >> 4 & 1);
  uVar13 = (*(code *)puVar4)(uVar13,2);
  (*(code *)puVar4)(uVar13,~(byte)(uVar11 >> 4) & 1);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *(ulonglong *)PTR__NSAppKitVersionNumber_0249c100;
  auVar17 = roundsd(auVar17,auVar17,9);
  if ((_DAT_02421cc0 < auVar17._0_8_) && ((*(byte *)(unaff_RDI + 0x3d) & 2) != 0)) {
    (*(code *)PTR__objc_msgSend_024a9998)(auVar17._0_8_,0x80);
  }
  _objc_alloc();
  uVar7 = (*(code *)PTR__objc_msgSend_024a9998)();
  uVar13 = FUN_00d50b00();
  uVar13 = (*(code *)PTR__objc_msgSend_024a9998)(uVar13,&stack0xffffffffffffffb0);
  if (unaff_RDI != 0) {
    uVar13 = FUN_00d50b20();
  }
  if (DAT_028b9e10 == 0) {
    _objc_alloc();
    DAT_028b9e10 = (*(code *)PTR__objc_msgSend_024a9998)();
    uVar13 = extraout_XMM0_Qa_00;
  }
  uVar13 = (*(code *)puVar4)(uVar13,*(undefined8 *)(unaff_RDI + 0xa0));
  uVar13 = (*(code *)puVar4)(uVar13,uVar7);
  uVar13 = (*(code *)puVar4)(uVar13,0);
  (*(code *)puVar4)(uVar13,1);
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
    FUN_01e590a0();
    FUN_00d50b00();
    if (DAT_028b9df0 != (undefined8 *)0x0) goto LAB_01e58d2f;
LAB_01e58d3c:
    FUN_00e8cb50();
    if (DAT_028b9df0 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_0258a670;
      (*DAT_0258a688)();
      if (DAT_028b9df0 == puVar8) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar12 = DAT_028b9df0 != (undefined8 *)0x0;
        DAT_028b9df0 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b9df8 == '\0') {
        DAT_028b9df8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00e38130(0,0,1);
      DAT_028b9df9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b9df9 = '\x01';
      FUN_00e8cb70();
    }
  }
  else {
    if (local_74 != '\0') {
      FUN_01e59140();
    }
    FUN_00d50b00();
    if (DAT_028b9df0 == (undefined8 *)0x0) goto LAB_01e58d3c;
LAB_01e58d2f:
    if (DAT_028b9df9 == '\0') goto LAB_01e58d3c;
  }
  if (*(longlong *)(unaff_RDI + 0xa0) == 0) goto LAB_01e58ee7;
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
// @0011e190 — 1589 bytes
// str: ""GNStringTable""
// str: ""MDExportAudioController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e190(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  int iVar7;
  longlong unaff_RDI;
  longlong *plVar8;
  undefined4 uVar9;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  int local_a4;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_01e534b0();
  lVar5 = DAT_026e1850;
  if (DAT_026e1850 != 0) {
    FUN_00d50b00();
  }
  pplVar6 = &local_58;
  FUN_01e57490();
  plVar8 = local_58;
  if ((DAT_026d6328 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d6278 = FUN_00d4fe50();
    _DAT_026d6260 = "GNStringTable";
    _DAT_026d6268 = 0x28;
    _DAT_026d6270 = FUN_0005eaf0;
    _DAT_026d6280 = 0;
    uRam00000000026d6288 = 0;
    _DAT_026d6290 = 0;
    uRam00000000026d6298 = 0;
    _DAT_026d62a0 = 0;
    uRam00000000026d62a8 = 0;
    _DAT_026d62b0 = 0;
    uRam00000000026d62b8 = 0;
    _DAT_026d62c0 = 0;
    uRam00000000026d62c8 = 0;
    _DAT_026d62d0 = 0;
    uRam00000000026d62d8 = 0;
    _DAT_026d62e0 = 0;
    uRam00000000026d62e8 = 0;
    _DAT_026d62f0 = 0;
    uRam00000000026d62f8 = 0;
    _DAT_026d6300 = 0;
    uRam00000000026d6308 = 0;
    _DAT_026d6310 = 0;
    uRam00000000026d6318 = 0;
    _DAT_026d6320 = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (longlong *)0x0) {
LAB_0011e21a:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0011e21a;
  }
  plVar8 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  local_80 = plVar8;
  local_a4 = FUN_004bb140();
  FUN_01d6f8d0();
  if (*(longlong *)(unaff_RDI + 0x150) == 0) {
    iVar4 = 0;
  }
  else {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    iVar4 = 0;
    local_48 = *(longlong *)(unaff_RDI + 0x150);
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
      lVar5 = (longlong)(int)local_40;
      iVar7 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar7);
      if (*(int *)(local_48 + 0xc) <= iVar7) break;
      local_58 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar5 * 8);
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
  lVar5 = DAT_026e1858;
  if (DAT_026e1858 != 0) {
    uVar9 = FUN_00d50b00();
  }
  FUN_00d708a0(uVar9,iVar4);
  FUN_01d6ed40();
  plVar8 = local_80;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_026e1860;
  if (DAT_026e1860 != 0) {
    FUN_00d50b00();
  }
  local_c8 = 0;
  local_c0 = '\0';
  local_b8 = 0;
  local_b0 = '\0';
  pplVar6 = &local_58;
  FUN_01e4fcf0(&local_b8,&local_c8);
  plVar2 = local_58;
  if ((DAT_026e2658 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026e25a8 = FUN_00015ff0();
    _DAT_026e2590 = "MDExportAudioController";
    _DAT_026e2598 = 0xf0;
    _DAT_026e25a0 = FUN_00130570;
    _DAT_026e25b0 = 0;
    uRam00000000026e25b8 = 0;
    _DAT_026e25c0 = 0;
    _DAT_026e2638 = 0;
    uRam00000000026e2640 = 0;
    _DAT_026e2648 = 0;
    DAT_026e264a = 1;
    _DAT_026e25c8 = 0;
    uRam00000000026e25d0 = 0;
    _DAT_026e25d8 = 0;
    uRam00000000026e25e0 = 0;
    _DAT_026e25e8 = 0;
    uRam00000000026e25f0 = 0;
    _DAT_026e25f8 = 0;
    uRam00000000026e2600 = 0;
    _DAT_026e2608 = 0;
    uRam00000000026e2610 = 0;
    _DAT_026e2618 = 0;
    uRam00000000026e2620 = 0;
    _DAT_026e2628 = 0;
    uRam00000000026e2630 = 0;
    DAT_026e2653 = 0;
    _DAT_026e264b = 0;
    ___cxa_guard_release();
    plVar8 = local_80;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0011e580;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_0011e580:
  plVar1 = *(longlong **)(unaff_RDI + 0xb8);
  plVar2 = *pplVar6;
  if (plVar1 != plVar2) {
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar2 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0xb8) = 0;
      }
      else {
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0xb8);
        *(longlong **)(unaff_RDI + 0xb8) = *pplVar6;
      }
    }
    else {
      *(undefined1 *)(pplVar6 + 1) = 0;
      *(longlong **)(unaff_RDI + 0xb8) = plVar2;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
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
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01f493b0 — 1399 bytes
// ============================================================

undefined4 FUN_01f493b0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  uVar5 = FUN_01caeae0();
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f49416;
    }
LAB_01f494c8:
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    lVar1 = *(longlong *)(unaff_RDI + 0xb8);
  }
  else {
    if (local_58 == (longlong *)0x0) goto LAB_01f494c8;
LAB_01f49416:
    lVar1 = DAT_02725a70;
    if (*(longlong *)(unaff_RDI + 0xc0) == 0) {
      if (DAT_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02725a80;
      local_f8 = lVar1;
      local_f0 = '\x01';
      if (DAT_02725a80 != 0) {
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
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = local_50 & 0xffffff00;
      }
      local_70 = '\x01';
      FUN_01d64eb0();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
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
      if (DAT_02725a70 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02725a78;
      if (DAT_02725a78 != 0) {
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
      lVar2 = *(longlong *)(unaff_RDI + 0xc0);
      local_50 = 1;
      local_58 = &DAT_024c5048;
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
      local_58 = &DAT_024c5048;
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
    lVar1 = *(longlong *)(unaff_RDI + 0xb8);
  }
  if (lVar1 == 0) {
    uVar4 = 0;
    goto LAB_01f49901;
  }
  FUN_01da4890();
  plVar3 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar3 + 0x468))();
  plVar3 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f4982a;
    }
LAB_01f49880:
    uVar4 = 0;
  }
  else {
    if (local_58 == (longlong *)0x0) goto LAB_01f49880;
LAB_01f4982a:
    local_a0 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0xb8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_a8 = lVar1;
    FUN_01caeba0();
    local_68 = local_58;
    local_60 = 0;
    if ((char)local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    local_60 = '\x01';
    uVar4 = (**(code **)(*plVar3 + 0x3b8))();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
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
// @0011edf0 — 1170 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0011efb3) */
/* WARNING: Removing unreachable block (ram,0x0011efbf) */
/* WARNING: Removing unreachable block (ram,0x0011eec7) */
/* WARNING: Removing unreachable block (ram,0x0011eed7) */

double FUN_0011edf0(char param_1,double param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  undefined4 in_EDX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  pthread_key_t pVar8;
  double dVar9;
  longlong local_d8;
  char local_d0;
  double local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  double local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
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
                (*(longlong *)(*(longlong *)(unaff_RDI + 0x158) + 0x10) + (longlong)iVar3 * 8);
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
    lVar1 = *unaff_RSI;
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
              lVar5 = (longlong)(int)local_48;
              iVar3 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar3);
              if (*(int *)(local_50 + 0xc) <= iVar3) break;
              lVar7 = *(longlong *)(local_50 + 0x10);
              local_60 = *(longlong *)(lVar7 + 8 + lVar5 * 8);
              pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
              pVar6 = (pthread_key_t)lVar7;
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
// @01f47720 — 1113 bytes
// str: ""GNStringTable""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f478d1) */
/* WARNING: Removing unreachable block (ram,0x01f47804) */
/* WARNING: Removing unreachable block (ram,0x01f47810) */
/* WARNING: Removing unreachable block (ram,0x01f4781e) */
/* WARNING: Removing unreachable block (ram,0x01f4782a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01f47720(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *unaff_RDI;
  longlong *plVar10;
  undefined4 uVar11;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  undefined8 local_40;
  char local_38 [8];
  
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_78 = plVar5;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (longlong)&DAT_02572358;
  (*DAT_02572370)();
  FUN_01e5b340();
  uVar11 = FUN_01e5b320();
  local_90 = '\0';
  local_98 = plVar5;
  FUN_01e2af10(uVar11,&local_98);
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
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
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38[0] == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01f47899;
    }
LAB_01f47aad:
    plVar10 = (longlong *)0x0;
    bVar1 = true;
    local_40 = 0;
  }
  else {
    if (local_68 == (longlong *)0x0) goto LAB_01f47aad;
LAB_01f47899:
    local_60[0] = '\0';
    local_68 = (longlong *)0x0;
    local_70 = plVar10;
    local_58 = plVar10;
    local_50 = -1;
    iStack_4c = 0;
    iStack_48 = 0;
    while( true ) {
      lVar9 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((longlong)local_58 + 0xc) <= local_50) break;
      plVar10 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
      local_68 = plVar10;
      uVar6 = 0;
      if ((DAT_026d6328 == '\0') && (uVar6 = ___cxa_guard_acquire(), (int)uVar6 != 0)) {
        _DAT_026d6278 = FUN_00d4fe50();
        _DAT_026d6260 = "GNStringTable";
        _DAT_026d6268 = 0x28;
        _DAT_026d6270 = FUN_0005eaf0;
        _DAT_026d6280 = 0;
        uRam00000000026d6288 = 0;
        _DAT_026d6290 = 0;
        uRam00000000026d6298 = 0;
        _DAT_026d62a0 = 0;
        uRam00000000026d62a8 = 0;
        _DAT_026d62b0 = 0;
        uRam00000000026d62b8 = 0;
        _DAT_026d62c0 = 0;
        uRam00000000026d62c8 = 0;
        _DAT_026d62d0 = 0;
        uRam00000000026d62d8 = 0;
        _DAT_026d62e0 = 0;
        uRam00000000026d62e8 = 0;
        _DAT_026d62f0 = 0;
        uRam00000000026d62f8 = 0;
        _DAT_026d6300 = 0;
        uRam00000000026d6308 = 0;
        _DAT_026d6310 = 0;
        uRam00000000026d6318 = 0;
        _DAT_026d6320 = 0;
        uVar6 = ___cxa_guard_release();
      }
      pplVar7 = (longlong **)&DAT_02802688;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        uVar6 = FUN_00e85ea0();
        pplVar7 = &local_68;
        if ((char)uVar6 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
      plVar4 = local_70;
      plVar10 = *pplVar7;
      if (plVar10 != (longlong *)0x0) {
        if (*(char *)(pplVar7 + 1) == '\0') {
          uVar6 = FUN_00d50b00();
          local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          FUN_00083b20();
          goto joined_r0x01f47b71;
        }
        *(undefined1 *)(pplVar7 + 1) = 0;
        local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
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
    plVar10 = (longlong *)0x0;
LAB_01f47a3c:
    plVar4 = local_70;
    FUN_00083b20();
joined_r0x01f47b71:
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    bVar3 = true;
    bVar2 = true;
    bVar1 = true;
    if (plVar10 != (longlong *)0x0) {
      local_80 = '\0';
      local_88 = plVar10;
      FUN_00d23d90();
      bVar1 = false;
      if ((local_80 != '\0') && (bVar1 = false, local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
        bVar1 = false;
      }
    }
    if (plVar5 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x01f47aa3;
    }
  }
  local_60[0] = '\0';
  local_68 = (longlong *)0x0;
  iStack_4c = 0;
  iStack_48 = 0;
  local_58 = plVar5;
  for (lVar9 = 0; local_50 = (int)lVar9, local_50 < *(int *)((longlong)plVar5 + 0xc);
      lVar9 = lVar9 + 1) {
    local_68 = *(longlong **)(plVar5[2] + lVar9 * 8);
    FUN_00d50130();
  }
  FUN_00083b20();
  bVar3 = false;
  bVar2 = false;
  *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x01f47aa3:
  if (((char)local_40 == '\0') && (bVar2 = bVar3, !bVar1)) {
    FUN_00d50b00();
  }
  *unaff_RDI = (longlong)plVar10;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @0011f440 — 888 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0011f4d2) */
/* WARNING: Removing unreachable block (ram,0x0011f4de) */
/* WARNING: Removing unreachable block (ram,0x0011f580) */
/* WARNING: Removing unreachable block (ram,0x0011f589) */
/* WARNING: Removing unreachable block (ram,0x0011f631) */
/* WARNING: Removing unreachable block (ram,0x0011f63e) */
/* WARNING: Removing unreachable block (ram,0x0011f6a5) */
/* WARNING: Removing unreachable block (ram,0x0011f6b1) */

void FUN_0011f440(undefined8 param_1,int param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  char cVar6;
  longlong lVar7;
  longlong *local_b8;
  char local_b0;
  longlong local_78;
  char local_70;
  char local_31;
  
  if (param_2 == 0) {
    (**(code **)(*(longlong *)*unaff_RSI + 0x998))();
    plVar1 = (longlong *)*unaff_RSI;
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
  (**(code **)(*(longlong *)*unaff_RSI + 0x998))();
  FUN_00d6f370();
  (**(code **)(*local_b8 + 0x88))();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
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
        cVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar5 * 8) + 0x50))();
        lVar5 = lVar5 + 1;
      } while (cVar2 == '\0');
      FUN_01d6ed40();
      FUN_00083b20();
      goto joined_r0x0011f753;
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x978))();
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
// @01e55990 — 744 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e55c10) */
/* WARNING: Removing unreachable block (ram,0x01e55c1d) */
/* WARNING: Removing unreachable block (ram,0x01e55bdb) */
/* WARNING: Removing unreachable block (ram,0x01e55be4) */
/* WARNING: Removing unreachable block (ram,0x01e55ae7) */
/* WARNING: Removing unreachable block (ram,0x01e55af0) */
/* WARNING: Removing unreachable block (ram,0x01e55b97) */
/* WARNING: Removing unreachable block (ram,0x01e55ba4) */
/* WARNING: Removing unreachable block (ram,0x01e55a1d) */
/* WARNING: Removing unreachable block (ram,0x01e55a2a) */

void FUN_01e55990(void)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar4;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  if (*(char *)(unaff_RSI + 0x40) == '\0') {
    if (*(longlong *)(unaff_RSI + 0x10) == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    else {
      FUN_01e40eb0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 != '\0') goto LAB_01e55aac;
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        *unaff_RDI = (longlong)local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return;
      }
    }
LAB_01e55a78:
    local_40 = (longlong *)0x0;
  }
  else {
    if ((*(longlong *)(unaff_RSI + 0x18) == 0) || (cVar3 = FUN_01e5c800(), cVar3 != '\0')) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    cVar3 = FUN_01e5c8a0();
    if (cVar3 != '\0') {
      FUN_01f27fe0();
      FUN_01f2e7e0();
      if (local_40 == (longlong *)0x0) {
        bVar2 = true;
        plVar4 = (longlong *)0x0;
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
      if (plVar4 == (longlong *)0x0) {
LAB_01e55b55:
        FUN_01f27fe0();
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            *unaff_RDI = (longlong)local_40;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            goto LAB_01e55c5c;
          }
          local_40 = (longlong *)0x0;
        }
      }
      else {
        lVar1 = *(longlong *)(unaff_RSI + 0x18);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar4 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') goto LAB_01e55b55;
        FUN_01e5cf30();
        if (local_40 == (longlong *)0x0) {
          if (bVar2) {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            FUN_00d50b00();
            *unaff_RDI = (longlong)plVar4;
            goto LAB_01e55ab0;
          }
          FUN_00d50b00();
          local_40 = plVar4;
        }
        else if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      *unaff_RDI = (longlong)local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01e55c5c:
      if (!bVar2 && plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      return;
    }
    plVar4 = *(longlong **)(unaff_RSI + 0x20);
    if (plVar4 == (longlong *)0x0) {
      FUN_01f27fe0();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          *unaff_RDI = (longlong)local_40;
          *(undefined1 *)(unaff_RDI + 1) = 1;
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
  *unaff_RDI = (longlong)local_40;
LAB_01e55ab0:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01e56280 — 686 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e564f4) */
/* WARNING: Removing unreachable block (ram,0x01e564c9) */
/* WARNING: Removing unreachable block (ram,0x01e56508) */

void FUN_01e56280(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong unaff_RDI;
  undefined4 uVar3;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_38;
  char local_30;
  
  *(undefined1 *)(unaff_RDI + 0x40) = 1;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined1 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &DAT_026a3350;
  puVar2[2] = &DAT_026a37c8;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined2 *)(puVar2 + 5) = 0;
  puVar2[6] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x37) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar2 + 100) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x69) = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x7f) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x94) = 0;
  uVar3 = (*DAT_026a3368)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x18);
  if (puVar1 == puVar2) {
    uVar3 = FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x18) = puVar2;
    if (puVar1 != (undefined8 *)0x0) {
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x20) != 0) {
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
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
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
// @01e57a30 — 677 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e57be7) */
/* WARNING: Removing unreachable block (ram,0x01e57b1c) */
/* WARNING: Removing unreachable block (ram,0x01e57b29) */
/* WARNING: Removing unreachable block (ram,0x01e57bf0) */
/* WARNING: Removing unreachable block (ram,0x01e57c37) */
/* WARNING: Removing unreachable block (ram,0x01e57c40) */

void FUN_01e57a30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_98;
  char local_90;
  
  lVar1 = *unaff_RSI;
  lVar2 = unaff_RDI[0xc];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0xc] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *param_2;
  lVar2 = unaff_RDI[0xd];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    unaff_RDI[0xd] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*unaff_RSI == 0) {
    if (unaff_RDI[3] == 0) {
      (**(code **)(*unaff_RDI + 0x448))();
      lVar1 = unaff_RDI[3];
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = unaff_RDI[3];
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
    (**(code **)(*unaff_RDI + 0x598))();
    FUN_01e5d9c0();
    FUN_01f27fe0();
    FUN_01f45250();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e5e740();
    (**(code **)(*unaff_RDI + 0x5a0))();
    param_2 = (longlong *)*param_2;
    FUN_00d50b00();
    (**(code **)(*param_2 + 0x440))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = unaff_RDI[2];
    if (lVar1 == 0) {
      (**(code **)(*unaff_RDI + 0x4c0))();
      lVar1 = unaff_RDI[2];
    }
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x598))();
    plVar3 = (longlong *)*unaff_RSI;
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0x9a8))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01e595b0 — 636 bytes
// str: ""setRootView:""
// str: ""objectAtIndex:""
// str: ""removeFromSuperview""
// ============================================================

void FUN_01e595b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)puVar1)();
  lVar4 = (*(code *)puVar1)();
  if (-1 < lVar4 + -1) {
    do {
      lVar4 = lVar4 + -1;
      (*(code *)puVar1)(param_1,lVar4);
      uVar5 = (*(code *)puVar1)();
      cVar3 = (*(code *)puVar1)(param_1,uVar5);
      if (cVar3 != '\0') {
        local_48 = '\0';
        local_50 = 0;
        (*(code *)puVar1)(param_1,&local_50);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        (*(code *)puVar1)();
      }
    } while (0 < lVar4);
  }
  (*(code *)puVar1)(param_1,*(undefined8 *)(unaff_RDI + 0xa0));
  lVar4 = (*(code *)puVar1)();
  if (lVar4 == 0) {
    (*(code *)PTR__objc_release_024a99a0)();
    DAT_028b9e10 = 0;
  }
  (*(code *)puVar1)();
  (*(code *)puVar1)(param_1,0);
  puVar2 = PTR__objc_release_024a99a0;
  (*(code *)PTR__objc_release_024a99a0)();
  (*(code *)puVar1)();
  (*(code *)puVar2)();
  FUN_00d50b00();
  if (DAT_028b9df0 != 0) {
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
  *(undefined8 *)(unaff_RDI + 0xa0) = 0;
  return;
}




// ============================================================
// @0011eac0 — 601 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0011ed15) */
/* WARNING: Removing unreachable block (ram,0x0011ed22) */

longlong * FUN_0011eac0(pthread_key_t param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_40;
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
          lVar2 = *(longlong *)(*(longlong *)(local_68 + 0x10) + lVar5 * 8);
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
              *(undefined1 *)(unaff_RDI + 1) = 0;
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              *unaff_RDI = lVar2;
              *(undefined1 *)(unaff_RDI + 1) = 1;
              FUN_000be170();
              FUN_00d50b20();
              return unaff_RDI;
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
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}




// ============================================================
// @01e56f90 — 586 bytes
// str: ""GNStringTable""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e56f90(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  if (*(longlong *)(unaff_RSI + 0x50) == 0) {
LAB_01e571b6:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    lVar5 = 0;
    while( true ) {
      FUN_00ca1380();
      local_48 = (longlong *)CONCAT71(local_48._1_7_,(char)local_50);
      pplVar4 = &local_50;
      if ((char)local_50 == '\0') {
        pplVar4 = &local_48;
      }
      *(undefined1 *)pplVar4 = 0;
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
        pplVar4 = (longlong **)local_38;
      }
      *(undefined1 *)pplVar4 = 0;
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      plVar1 = *(longlong **)(*(longlong *)(local_58 + 0x10) + lVar5 * 8);
      local_48 = plVar1;
      local_40 = '\0';
      if (DAT_026d6328 == '\0') {
        iVar3 = ___cxa_guard_acquire();
        if (iVar3 != 0) {
          _DAT_026d6278 = FUN_00d4fe50();
          _DAT_026d6260 = "GNStringTable";
          _DAT_026d6268 = 0x28;
          _DAT_026d6270 = FUN_0005eaf0;
          _DAT_026d6280 = 0;
          uRam00000000026d6288 = 0;
          _DAT_026d6290 = 0;
          uRam00000000026d6298 = 0;
          _DAT_026d62a0 = 0;
          uRam00000000026d62a8 = 0;
          _DAT_026d62b0 = 0;
          uRam00000000026d62b8 = 0;
          _DAT_026d62c0 = 0;
          uRam00000000026d62c8 = 0;
          _DAT_026d62d0 = 0;
          uRam00000000026d62d8 = 0;
          _DAT_026d62e0 = 0;
          uRam00000000026d62e8 = 0;
          _DAT_026d62f0 = 0;
          uRam00000000026d62f8 = 0;
          _DAT_026d6300 = 0;
          uRam00000000026d6308 = 0;
          _DAT_026d6310 = 0;
          uRam00000000026d6318 = 0;
          _DAT_026d6320 = 0;
          ___cxa_guard_release();
        }
      }
      pplVar4 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_48;
        if (cVar2 == '\0') {
          pplVar4 = (longlong **)&DAT_02802688;
        }
      }
      plVar1 = *pplVar4;
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar4 + 1) = 0;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) break;
      lVar5 = lVar5 + 1;
    }
    *unaff_RDI = (longlong)plVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}




// ============================================================
// @01e59140 — 537 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e59241) */
/* WARNING: Removing unreachable block (ram,0x01e5924a) */

void FUN_01e59140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  _objc_alloc();
  puVar2 = PTR__objc_msgSend_024a9998;
  dVar1 = (double)(float)((ulonglong)*(undefined8 *)(unaff_RDI + 0x88) >> 0x20);
  uVar5 = 0;
  uVar6 = 0;
  auVar7._8_4_ = SUB84(dVar1,0);
  auVar7._0_8_ = (double)(float)*(undefined8 *)(unaff_RDI + 0x88);
  auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uVar3 = (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)puVar2)(extraout_XMM0_Da,0x12,param_3,param_4,uVar5,uVar6,auVar7);
  uVar4 = (*(code *)puVar2)();
  uVar4 = (*(code *)puVar2)(uVar4,uVar3);
  local_50 = 0;
  local_58 = *(longlong *)(unaff_RDI + 0x18);
  if (local_58 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_50 = '\x01';
  (*(code *)PTR__objc_msgSend_024a9998)(uVar4,&local_58);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d90850();
  local_48 = *(longlong *)(unaff_RDI + 0x18);
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
  (*(code *)PTR__objc_release_024a99a0)();
  FUN_00d50b00();
  uVar4 = FUN_01d8c690();
  if (unaff_RDI != 0) {
    uVar4 = FUN_00d50b20();
  }
  (*(code *)PTR__objc_msgSend_024a9998)(uVar4,uVar3);
  return;
}



