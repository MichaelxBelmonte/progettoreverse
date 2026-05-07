// Function: FUN_0161c3f0
// Address: 0161c3f0
// Size: 5283 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0161d7e7) */
/* WARNING: Removing unreachable block (ram,0x0161d7f0) */
/* WARNING: Removing unreachable block (ram,0x0161ce06) */
/* WARNING: Removing unreachable block (ram,0x0161ce0b) */
/* WARNING: Removing unreachable block (ram,0x0161c956) */
/* WARNING: Removing unreachable block (ram,0x0161c95b) */
/* WARNING: Removing unreachable block (ram,0x0161cd79) */
/* WARNING: Removing unreachable block (ram,0x0161cd7e) */
/* WARNING: Removing unreachable block (ram,0x0161c697) */
/* WARNING: Removing unreachable block (ram,0x0161c6a0) */
/* WARNING: Removing unreachable block (ram,0x0161c5fc) */
/* WARNING: Removing unreachable block (ram,0x0161c605) */
/* WARNING: Removing unreachable block (ram,0x0161c56d) */
/* WARNING: Removing unreachable block (ram,0x0161c579) */
/* WARNING: Removing unreachable block (ram,0x0161c8ab) */
/* WARNING: Removing unreachable block (ram,0x0161c8b4) */
/* WARNING: Removing unreachable block (ram,0x0161d4d7) */
/* WARNING: Removing unreachable block (ram,0x0161d4e0) */
/* WARNING: Removing unreachable block (ram,0x0161d557) */
/* WARNING: Removing unreachable block (ram,0x0161d560) */
/* WARNING: Removing unreachable block (ram,0x0161c977) */
/* WARNING: Removing unreachable block (ram,0x0161c980) */
/* WARNING: Removing unreachable block (ram,0x0161d5d7) */
/* WARNING: Removing unreachable block (ram,0x0161d5e0) */
/* WARNING: Removing unreachable block (ram,0x0161d6e7) */
/* WARNING: Removing unreachable block (ram,0x0161d6f0) */
/* WARNING: Removing unreachable block (ram,0x0161c58b) */
/* WARNING: Removing unreachable block (ram,0x0161c59b) */
/* WARNING: Removing unreachable block (ram,0x0161ce7c) */
/* WARNING: Removing unreachable block (ram,0x0161cf4b) */
/* WARNING: Removing unreachable block (ram,0x0161cf58) */
/* WARNING: Removing unreachable block (ram,0x0161d0ae) */
/* WARNING: Removing unreachable block (ram,0x0161d0b7) */
/* WARNING: Removing unreachable block (ram,0x0161d109) */
/* WARNING: Removing unreachable block (ram,0x0161d297) */
/* WARNING: Removing unreachable block (ram,0x0161d2a4) */
/* WARNING: Removing unreachable block (ram,0x0161d15f) */
/* WARNING: Removing unreachable block (ram,0x0161d168) */
/* WARNING: Removing unreachable block (ram,0x0161d18b) */
/* WARNING: Removing unreachable block (ram,0x0161d194) */
/* WARNING: Removing unreachable block (ram,0x0161d1b7) */
/* WARNING: Removing unreachable block (ram,0x0161d1c0) */
/* WARNING: Removing unreachable block (ram,0x0161d1e9) */
/* WARNING: Removing unreachable block (ram,0x0161d1f2) */
/* WARNING: Removing unreachable block (ram,0x0161d22e) */
/* WARNING: Removing unreachable block (ram,0x0161d237) */
/* WARNING: Removing unreachable block (ram,0x0161d767) */
/* WARNING: Removing unreachable block (ram,0x0161d770) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0161c3f0(int param_1,int param_2,int param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *unaff_RDI;
  longlong lVar20;
  char cVar21;
  longlong lVar22;
  bool bVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  longlong *local_res8;
  longlong *local_res10;
  longlong local_218;
  char local_210;
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
  float local_120;
  int local_11c;
  int local_118;
  float local_114;
  ulonglong local_110;
  longlong *local_108;
  float local_100;
  int local_fc;
  double local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [16];
  ulonglong local_a8;
  longlong local_a0;
  float local_94;
  longlong local_88;
  longlong local_80;
  float local_64;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_40;
  
  local_11c = param_3;
  local_118 = param_2;
  local_108 = param_4;
  local_fc = param_1;
  if (*param_4 == 0) {
    puVar10 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar10 = &DAT_025f0d98;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    (*DAT_025f0db0)();
    lVar17 = *local_108;
    *local_108 = (longlong)puVar10;
    if (((char)local_108[1] != '\0') && (lVar17 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(local_108 + 1) = 1;
    iVar7 = *(int *)(*unaff_RDI + 0xc);
  }
  else {
    iVar7 = *(int *)(*unaff_RDI + 0xc);
  }
  if (0 < iVar7) {
    lVar17 = 0;
    do {
      local_1a0 = 0;
      local_198 = '\0';
      FUN_015fb200(DAT_023942a8,1,&local_1a0);
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(*unaff_RDI + 0xc));
  }
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &DAT_02572358;
  uVar24 = (*DAT_02572370)();
  local_40 = *unaff_RDI;
  FUN_00d214d0(uVar24,*(undefined4 *)((longlong)puVar10 + 0xc));
  do {
    if (*(int *)((longlong)puVar10 + 0xc) == 0) {
      FUN_00d50b20();
      return;
    }
    local_88 = *(longlong *)puVar10[2];
    if (local_88 != 0) {
      FUN_00d50b00();
    }
    FUN_00d23620();
    do {
      lVar17 = local_40;
      FUN_015f8890();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      uVar16 = *(uint *)(local_40 + 0xc);
      if ((int)uVar16 < 1) {
        bVar23 = true;
LAB_0161c656:
        FUN_00d50b20();
      }
      else {
        local_f0 = (ulonglong)(uVar16 - 1);
        lVar2 = *(longlong *)(*(longlong *)(local_40 + 0x10) + local_f0 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_110 = (ulonglong)*(uint *)(lVar2 + 0xc);
        iVar7 = *(uint *)(lVar2 + 0xc) + 1;
        uVar13 = 5;
        if ((int)uVar16 < 5) {
          uVar13 = (ulonglong)uVar16;
        }
        uVar11 = (uint)uVar13;
        local_114 = (float)(int)uVar11;
        local_a0 = 1;
        bVar4 = false;
        local_94 = DAT_023b26e8;
        local_64 = DAT_023b26e8;
        local_60 = 0;
        bVar5 = false;
        do {
          bVar6 = (byte)local_a0 ^ 1;
          iVar12 = local_fc;
          if (local_a0 != 0) {
            iVar12 = local_118;
          }
          if ((int)(uint)bVar6 <= iVar12) {
            local_a8 = (ulonglong)bVar6;
            do {
              iVar15 = (int)local_a8;
              lVar22 = lVar2;
              fVar26 = DAT_023b36b0;
              if (local_a0 == 0) {
                uVar8 = uVar16 - iVar15;
                if ((int)uVar8 < 0) {
                  local_a0 = 0;
                  local_80 = local_a0;
                  goto joined_r0x0161cfb4;
                }
                iVar15 = -iVar15;
                lVar22 = *(longlong *)(*(longlong *)(local_40 + 0x10) + (ulonglong)uVar8 * 8);
                fVar26 = DAT_02390d04;
              }
              local_100 = fVar26;
              iVar15 = iVar7 + iVar15;
              if ((iVar15 < 0) || (local_11c <= iVar15)) break;
              local_120 = *(float *)(lVar22 + 0x58);
              FUN_015fe420(local_120,iVar15);
              if (local_40 != 0) {
                FUN_00d50b00();
              }
              if (*(int *)(local_40 + 0xc) < 1) {
                local_80 = 0;
              }
              else {
                local_f8 = (double)CONCAT44(local_f8._4_4_,iVar15);
                lVar22 = 0;
                local_80 = 0;
                fVar26 = DAT_02390d30;
                do {
                  lVar20 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar22 * 8);
                  if (lVar20 != 0) {
                    FUN_00d50b00();
                  }
                  lVar19 = *(longlong *)(lVar20 + 0x80);
                  if (lVar19 != 0) {
                    FUN_00d50b00();
                    if ((lVar19 != local_88) && (FUN_015f8890(), local_40 != 0)) {
                      FUN_00d50b00();
                      if ((*(int *)(**(longlong **)(local_40 + 0x10) + 0xc) == local_f8._0_4_) &&
                         (((longlong)local_a8 < (longlong)*(int *)(local_40 + 0xc) &&
                          (fVar25 = (float)((uint)(*(float *)(lVar20 + 0x5c) - local_120) &
                                           _DAT_02390140), local_e8 = ZEXT416((uint)fVar25),
                          fVar25 <= fVar26)))) {
                        if (local_80 == lVar20) {
                          if ((!bVar4) && (local_80 != 0)) {
                            FUN_00d50b00();
                            lVar18 = local_80;
                            goto LAB_0161ca46;
                          }
                        }
                        else {
                          FUN_00d50b00();
                          lVar18 = lVar20;
                          if ((bVar4) && (local_80 != 0)) {
                            FUN_00d50b20();
                          }
LAB_0161ca46:
                          local_80 = lVar18;
                          bVar4 = true;
                        }
                        if (NAN(local_94)) {
                          if (uVar13 - 1 < 3) {
                            local_94 = 0.0;
                            lVar14 = 0;
                          }
                          else {
                            lVar18 = *(longlong *)(local_40 + 0x10) + local_f0 * 8;
                            local_94 = 0.0;
                            lVar14 = 0;
                            do {
                              local_94 = (float)*(int *)(*(longlong *)(lVar18 + -0x18 + lVar14 * 8)
                                                        + 0x10) +
                                         (float)*(int *)(*(longlong *)(lVar18 + -0x10 + lVar14 * 8)
                                                        + 0x10) +
                                         (float)*(int *)(*(longlong *)(lVar18 + -8 + lVar14 * 8) +
                                                        0x10) +
                                         (float)*(int *)(*(longlong *)(lVar18 + lVar14 * 8) + 0x10)
                                         + local_94;
                              lVar14 = lVar14 + -4;
                            } while (-(ulonglong)(uVar11 & 0xfffffffc) != lVar14);
                            lVar14 = -lVar14;
                          }
                          if ((ulonglong)(uVar11 & 3) != 0) {
                            lVar18 = 0;
                            do {
                              local_94 = local_94 +
                                         (float)*(int *)(*(longlong *)
                                                          (*(longlong *)(local_40 + 0x10) +
                                                           local_f0 * 8 + lVar14 * -8 + lVar18 * 8)
                                                        + 0x10);
                              lVar18 = lVar18 + -1;
                            } while (-(ulonglong)(uVar11 & 3) != lVar18);
                          }
                          local_94 = local_94 / local_114;
                        }
                        iVar15 = *(int *)(local_40 + 0xc);
                        iVar9 = 5;
                        if (iVar15 < 5) {
                          iVar9 = iVar15;
                        }
                        if (iVar15 < 1) {
                          fVar26 = 0.0;
                        }
                        else {
                          plVar3 = *(longlong **)(local_40 + 0x10);
                          iVar15 = 1;
                          if (1 < iVar9) {
                            iVar15 = iVar9;
                          }
                          fVar26 = (float)*(int *)(*plVar3 + 0x10);
                          if ((((1 < iVar9) &&
                               (fVar26 = fVar26 + (float)*(int *)(plVar3[1] + 0x10), iVar15 != 2))
                              && (fVar26 = fVar26 + (float)*(int *)(plVar3[2] + 0x10), iVar15 != 3))
                             && (fVar26 = fVar26 + (float)*(int *)(plVar3[3] + 0x10), iVar15 != 4))
                          {
                            fVar26 = fVar26 + (float)*(int *)(plVar3[4] + 0x10);
                          }
                        }
                        if ((float)((uint)(local_94 - fVar26 / (float)iVar9) & _DAT_02390140) <=
                            local_100) {
                          if (lVar19 == local_60) {
                            if (!bVar5) {
                              bVar5 = true;
                              FUN_00d50b00();
                            }
                          }
                          else {
                            FUN_00d50b00();
                            if ((bVar5) && (local_60 != 0)) {
                              FUN_00d50b20();
                            }
                            bVar5 = true;
                            local_60 = lVar19;
                          }
                          local_64 = fVar26 / (float)iVar9;
                          fVar26 = (float)local_e8._0_4_;
                        }
                        else {
                          fVar26 = (float)local_e8._0_4_;
                        }
                      }
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                  if (lVar20 != 0) {
                    FUN_00d50b20();
                  }
                  lVar22 = lVar22 + 1;
                } while (lVar22 < *(int *)(local_40 + 0xc));
              }
              FUN_00d50b20();
              if (local_80 != 0) goto joined_r0x0161cfb4;
              local_a8 = local_a8 + 1;
            } while (local_a8 != iVar12 + 1);
          }
          local_a0 = 0;
          local_80 = local_a0;
        } while ((local_fc != 0) && (bVar6 == 0));
joined_r0x0161cfb4:
        if (local_60 == 0) {
          bVar23 = true;
        }
        else {
          FUN_015f8890();
          iVar12 = *(int *)(**(longlong **)(local_40 + 0x10) + 0xc);
          lVar22 = *(longlong *)(*(longlong *)(local_40 + 0x10) + local_f0 * 8);
          if (lVar22 != 0) {
            FUN_00d50b00();
          }
          if ((int)local_110 < iVar12) {
            if (iVar7 < iVar12) {
              uVar24 = FUN_00e7d780(local_94);
              *(undefined4 *)(lVar22 + 0x10) = uVar24;
              uVar24 = FUN_00e7d780(local_64);
              FUN_015f8890();
              *(undefined4 *)(**(longlong **)(local_40 + 0x10) + 0x10) = uVar24;
              do {
                local_188 = '\0';
                local_190 = lVar22;
                FUN_015f8590();
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
                if ((local_188 != '\0') && (local_190 != 0)) {
                  FUN_00d50b20();
                }
                *(int *)(local_40 + 0xc) = iVar7;
                uVar24 = FUN_00e7d780();
                *(undefined4 *)(local_40 + 0x10) = uVar24;
                local_180 = local_40;
                local_178 = '\0';
                FUN_015f96a0();
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
                iVar7 = iVar7 + 1;
              } while (iVar12 != iVar7);
            }
          }
          else {
            uVar24 = FUN_00e7d780(*(undefined4 *)(lVar22 + 0x58));
            lVar20 = *(longlong *)(local_40 + 0x10);
            uVar16 = iVar7 - iVar12;
            uVar13 = (ulonglong)uVar16;
            if (uVar13 - 1 < 3) {
              lVar18 = 0;
            }
            else {
              lVar19 = lVar20 + local_f0 * 8;
              lVar18 = 0;
              do {
                *(undefined4 *)(*(longlong *)(lVar19 + lVar18 * 8) + 0x10) = uVar24;
                *(undefined4 *)(*(longlong *)(lVar19 + -8 + lVar18 * 8) + 0x10) = uVar24;
                *(undefined4 *)(*(longlong *)(lVar19 + -0x10 + lVar18 * 8) + 0x10) = uVar24;
                *(undefined4 *)(*(longlong *)(lVar19 + -0x18 + lVar18 * 8) + 0x10) = uVar24;
                lVar18 = lVar18 + -4;
              } while (-lVar18 != (ulonglong)(uVar16 & 0xfffffffc));
              lVar18 = -lVar18;
            }
            if ((ulonglong)(uVar16 & 3) != 0) {
              lVar19 = 0;
              do {
                *(undefined4 *)(*(longlong *)(lVar20 + (local_f0 - lVar18) * 8 + lVar19 * 8) + 0x10)
                     = uVar24;
                lVar19 = lVar19 + -1;
              } while (-lVar19 != (ulonglong)(uVar16 & 3));
            }
            do {
              FUN_015f99f0();
              uVar16 = (int)uVar13 - 1;
              uVar13 = (ulonglong)uVar16;
            } while (uVar16 != 0);
          }
          FUN_015f8890();
          FUN_015f8890();
          uVar24 = FUN_015f8890();
          if ((local_210 != '\0') && (local_218 != 0)) {
            uVar24 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar24 = FUN_00d50b20();
          }
          local_170 = local_88;
          local_168 = '\0';
          local_158 = '\0';
          local_160 = local_60;
          FUN_015f9150(uVar24,&local_160);
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d23f50();
          FUN_00d23f50();
          FUN_00d21140();
          iVar7 = FUN_00d237a0();
          if (iVar7 != -1) {
            FUN_00d23620();
          }
          local_40 = local_88;
          iVar7 = FUN_00d237a0();
          if (iVar7 != -1) {
            FUN_00d23620();
          }
          if (lVar17 != local_88) {
            if (lVar17 != 0) {
              FUN_00d50b00();
            }
            bVar23 = local_88 != 0;
            local_88 = lVar17;
            if (bVar23) {
              FUN_00d50b20();
            }
          }
          local_150 = *local_108;
          local_148 = '\0';
          local_140 = 0;
          local_138 = '\0';
          local_130 = 0;
          local_128 = '\0';
          FUN_015fb200(DAT_023942a8,1,&local_130);
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((*local_res8 != 0) && (lVar20 = *local_res10, lVar20 != 0)) {
            cVar21 = (char)local_res10[1];
            if (cVar21 != '\0') {
              FUN_00d50b00();
            }
            local_e8._0_8_ = lVar22;
            if (iVar12 <= (int)local_110) {
              lVar22 = *local_res8;
              cVar1 = (char)local_res8[1];
              if (lVar22 == lVar20) {
                if ((cVar1 != '\0') && (bVar23 = cVar21 == '\0', cVar21 = '\x01', bVar23)) {
                  FUN_00d50b00();
                  cVar21 = '\x01';
                }
              }
              else {
                if ((cVar1 != '\0') && (lVar22 != 0)) {
                  FUN_00d50b00();
                }
                bVar23 = cVar21 != '\0';
                lVar20 = lVar22;
                cVar21 = cVar1;
                if (bVar23) {
                  FUN_00d50b20();
                }
              }
            }
            fVar26 = local_64 + DAT_02390d00;
            local_f8 = (double)(local_64 + DAT_0239424c);
            local_64 = local_64 + DAT_02390124;
            iVar7 = -1;
            do {
              uVar24 = SUB84((double)(iVar12 + iVar7),0);
              FUN_014328b0(uVar24,(double)fVar26);
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              FUN_00d21140();
              if (local_58 != 0) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              FUN_014328b0(uVar24,local_f8);
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              FUN_00d21140();
              if (local_58 != 0) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              FUN_014328b0(uVar24,(double)local_64);
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              FUN_00d21140();
              if (local_58 != 0) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 2);
            fVar26 = local_94 + DAT_02390d00;
            local_f8 = (double)(local_94 + DAT_0239424c);
            local_94 = local_94 + DAT_02390124;
            iVar7 = -1;
            do {
              uVar24 = SUB84((double)((int)local_110 + iVar7),0);
              FUN_014328b0(uVar24,(double)fVar26);
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              FUN_00d21140();
              if (local_58 != 0) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              FUN_014328b0(uVar24,local_f8);
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              FUN_00d21140();
              if (local_58 != 0) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              FUN_014328b0(uVar24,(double)local_94);
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_40 = local_58;
              FUN_00d21140();
              if (local_58 != 0) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 2);
            lVar22 = local_e8._0_8_;
            if ((cVar21 != '\0') && (lVar20 != 0)) {
              FUN_00d50b20();
            }
          }
          if (lVar17 != 0) {
            FUN_00d50b20();
          }
          if (lVar22 != 0) {
            FUN_00d50b20();
          }
          bVar23 = false;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if ((bVar4) && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (lVar17 != 0) goto LAB_0161c656;
      }
    } while (!bVar23);
    if (local_88 != 0) {
      FUN_00d50b20();
    }
  } while( true );
}


