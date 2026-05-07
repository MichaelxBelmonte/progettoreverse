// Function: FUN_014f7360
// Address: 014f7360
// Size: 5506 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x014f7903) */
/* WARNING: Removing unreachable block (ram,0x014f790f) */
/* WARNING: Removing unreachable block (ram,0x014f74c4) */
/* WARNING: Removing unreachable block (ram,0x014f74d0) */
/* WARNING: Removing unreachable block (ram,0x014f769e) */
/* WARNING: Removing unreachable block (ram,0x014f76ae) */
/* WARNING: Removing unreachable block (ram,0x014f833c) */
/* WARNING: Removing unreachable block (ram,0x014f8348) */
/* WARNING: Removing unreachable block (ram,0x014f87be) */
/* WARNING: Removing unreachable block (ram,0x014f87ce) */
/* WARNING: Removing unreachable block (ram,0x014f8776) */
/* WARNING: Removing unreachable block (ram,0x014f8786) */
/* WARNING: Removing unreachable block (ram,0x014f8823) */
/* WARNING: Removing unreachable block (ram,0x014f8833) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_014f7360(float param_1,uint param_2)

{
  dword dVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  code *pcVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  char in_CL;
  int iVar20;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  bool bVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 *local_148;
  char local_140;
  undefined8 *local_c0;
  char local_b8;
  longlong local_b0;
  undefined8 *local_88;
  undefined8 *puVar32;
  undefined8 *puVar33;
  longlong local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 *local_40;
  
  puVar15 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = &DAT_02572358;
  pcVar11 = DAT_02572370;
  (*DAT_02572370)();
  puVar16 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar16 = &DAT_02572358;
  (*pcVar11)();
  puVar17 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar17 = &DAT_02572358;
  (*pcVar11)();
  puVar18 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar18 = &DAT_02572358;
  (*pcVar11)();
  puVar19 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar19 = &DAT_02572358;
  (*pcVar11)();
  uVar25 = param_2;
  if (0 < (int)param_2) {
    do {
      local_c0 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_c0 = &DAT_02572358;
      (*pcVar11)();
      local_b8 = '\0';
      FUN_00d21140();
      FUN_00d50b20();
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  lVar23 = *unaff_RSI;
  if (*(int *)(lVar23 + 0xc) < 1) {
    bVar3 = false;
    local_40 = (undefined8 *)0x0;
    bVar6 = false;
    local_b0 = 0;
  }
  else {
    lVar21 = 0;
    local_b0 = 0;
    bVar6 = false;
    local_40 = (undefined8 *)0x0;
    bVar3 = false;
    do {
      puVar32 = *(undefined8 **)(*(longlong *)(lVar23 + 0x10) + lVar21 * 8);
      if (local_40 == puVar32) {
        if ((!bVar3) && (local_40 != (undefined8 *)0x0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (puVar32 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
          bVar3 = true;
          local_40 = puVar32;
        }
        else {
          bVar3 = true;
          local_40 = puVar32;
        }
      }
      lVar23 = *(longlong *)(puVar19[2] + (longlong)*(int *)(local_40 + 5) * 8);
      if (local_b0 == lVar23) {
        if ((!bVar6) && (local_b0 != 0)) {
          bVar6 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar23 != 0) {
          FUN_00d50b00();
        }
        if ((bVar6) && (local_b0 != 0)) {
          FUN_00d50b20();
          bVar6 = true;
          local_b0 = lVar23;
        }
        else {
          bVar6 = true;
          local_b0 = lVar23;
        }
      }
      local_c0 = local_40;
      local_b8 = '\0';
      FUN_00d21140();
      lVar21 = lVar21 + 1;
      lVar23 = *unaff_RSI;
    } while (lVar21 < *(int *)(lVar23 + 0xc));
  }
  if (0 < (int)param_2) {
    uVar22 = 0;
    do {
      lVar23 = *(longlong *)(puVar19[2] + uVar22 * 8);
      if (local_b0 == lVar23) {
        if ((!bVar6) && (local_b0 != 0)) {
          bVar6 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar23 != 0) {
          FUN_00d50b00();
        }
        if ((bVar6) && (local_b0 != 0)) {
          FUN_00d50b20();
          bVar6 = true;
          local_b0 = lVar23;
        }
        else {
          bVar6 = true;
          local_b0 = lVar23;
        }
      }
      if (0 < *(int *)(local_b0 + 0xc)) {
        lVar23 = 0;
        do {
          puVar32 = *(undefined8 **)(*(longlong *)(local_b0 + 0x10) + lVar23 * 8);
          if (local_40 == puVar32) {
            if ((!bVar3) && (local_40 != (undefined8 *)0x0)) {
              bVar3 = true;
              FUN_00d50b00();
            }
LAB_014f7880:
            if (*(float *)(local_40 + 6) <= DAT_02394274 && DAT_02394274 != *(float *)(local_40 + 6)
               ) {
LAB_014f7892:
              *(undefined4 *)(local_40 + 6) = 0x800000;
            }
          }
          else {
            if (puVar32 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (local_40 != (undefined8 *)0x0)) {
              FUN_00d50b20();
              bVar3 = true;
              local_40 = puVar32;
              goto LAB_014f7880;
            }
            bVar3 = true;
            local_40 = puVar32;
            if (*(float *)(puVar32 + 6) <= DAT_02394274 && DAT_02394274 != *(float *)(puVar32 + 6))
            goto LAB_014f7892;
          }
          FUN_014f6db0();
          if (local_140 == '\0') {
            if (local_148 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_140 = '\0';
          }
          local_c0 = local_148;
          local_b8 = '\0';
          FUN_00d21140();
          if (local_148 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          lVar23 = lVar23 + 1;
        } while (lVar23 < *(int *)(local_b0 + 0xc));
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != param_2);
  }
  FUN_00d21370();
  if (*(int *)((longlong)puVar16 + 0xc) == 0) {
    bVar9 = false;
    local_60 = 0;
    bVar7 = false;
    local_58 = 0;
    bVar4 = false;
    local_88 = (undefined8 *)0x0;
    bVar27 = false;
    local_50 = (undefined8 *)0x0;
    bVar5 = false;
    puVar32 = (undefined8 *)0x0;
    bVar8 = false;
    lVar23 = 0;
  }
  else {
    fVar29 = DAT_02390124 / param_1;
    lVar23 = 0;
    bVar8 = false;
    puVar32 = (undefined8 *)0x0;
    bVar5 = false;
    local_50 = (undefined8 *)0x0;
    bVar27 = false;
    local_88 = (undefined8 *)0x0;
    bVar4 = false;
    local_58 = 0;
    bVar7 = false;
    local_60 = 0;
    bVar10 = false;
    bVar9 = false;
    do {
      fVar30 = (float)FUN_00d216c0();
      if (0 < *(int *)((longlong)puVar16 + 0xc)) {
        lVar21 = 0;
        do {
          lVar24 = *(longlong *)(puVar16[2] + lVar21 * 8);
          if (local_58 == lVar24) {
            if ((!bVar7) && (local_58 != 0)) {
              bVar7 = true;
              FUN_00d50b00();
            }
LAB_014f7ac0:
            *(undefined1 *)(local_58 + 0xd) = 0;
          }
          else {
            if (lVar24 != 0) {
              FUN_00d50b00();
            }
            if ((bVar7) && (local_58 != 0)) {
              FUN_00d50b20();
              bVar7 = true;
              local_58 = lVar24;
              goto LAB_014f7ac0;
            }
            bVar7 = true;
            *(undefined1 *)(lVar24 + 0xd) = 0;
            local_58 = lVar24;
          }
          if (local_88 != (undefined8 *)0x0) {
            if (bVar4) {
              FUN_00d50b20();
            }
            bVar4 = false;
          }
          bVar28 = bVar27;
          if ((local_50 != (undefined8 *)0x0) && (bVar28 = bVar4, bVar27)) {
            FUN_00d50b20();
          }
          fVar2 = 0.0;
          local_50 = (undefined8 *)0x0;
          local_88 = (undefined8 *)0x0;
          iVar20 = -1;
          bVar27 = bVar28;
          do {
            fVar30 = (float)FUN_014f6e40();
            if (local_c0 == local_40) {
              if ((bVar3) || (local_c0 == (undefined8 *)0x0)) {
                if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
                  fVar30 = (float)FUN_00d50b20();
                }
              }
              else {
                bVar3 = true;
                if (local_b8 == '\0') {
                  fVar30 = (float)FUN_00d50b00();
                }
              }
            }
            else if (local_b8 == '\0') {
              if (local_c0 != (undefined8 *)0x0) {
                fVar30 = (float)FUN_00d50b00();
              }
              if ((!bVar3) || (local_40 == (undefined8 *)0x0)) goto LAB_014f7c50;
              fVar30 = (float)FUN_00d50b20();
              local_40 = local_c0;
              bVar3 = true;
            }
            else if ((bVar3) && (local_40 != (undefined8 *)0x0)) {
              fVar30 = (float)FUN_00d50b20();
              local_40 = local_c0;
              bVar3 = true;
            }
            else {
LAB_014f7c50:
              local_40 = local_c0;
              bVar3 = true;
            }
            uVar25 = *(int *)(local_40 + 5) + iVar20;
            if ((-1 < (int)uVar25) && ((int)uVar25 < (int)param_2)) {
              lVar24 = *(longlong *)(puVar19[2] + (ulonglong)uVar25 * 8);
              if (lVar23 == lVar24) {
                if (bVar8) {
                  dVar1 = *(dword *)(lVar23 + 0xc);
                }
                else {
                  dVar1 = MACH_HEADER.filetype;
                  if (lVar23 != 0) {
                    fVar30 = (float)FUN_00d50b00();
                    lVar24 = lVar23;
                    goto LAB_014f7ce2;
                  }
                }
              }
              else {
                if (lVar24 != 0) {
                  fVar30 = (float)FUN_00d50b00();
                }
                if ((bVar8) && (lVar23 != 0)) {
                  fVar30 = (float)FUN_00d50b20();
                }
LAB_014f7ce2:
                bVar8 = true;
                dVar1 = *(dword *)(lVar24 + 0xc);
                lVar23 = lVar24;
              }
              if (0 < (int)dVar1) {
                lVar24 = 0;
                bVar28 = bVar27;
                do {
                  puVar33 = *(undefined8 **)(*(longlong *)(lVar23 + 0x10) + lVar24 * 8);
                  if (puVar32 == puVar33) {
                    if ((!bVar5) && (puVar32 != (undefined8 *)0x0)) {
                      bVar5 = true;
                      fVar30 = (float)FUN_00d50b00();
                    }
LAB_014f7e60:
                    lVar26 = puVar32[3];
                    puVar33 = puVar32;
                    if (lVar26 != local_60) goto LAB_014f7e6e;
LAB_014f7ecb:
                    puVar32 = puVar33;
                    if ((bVar9) || (lVar26 == 0)) goto joined_r0x014f8018;
                    fVar30 = (float)FUN_00d50b00();
                    lVar26 = local_60;
joined_r0x014f8042:
                    bVar10 = true;
                    puVar32 = puVar33;
                    local_60 = lVar26;
                    bVar9 = true;
                  }
                  else {
                    if (puVar33 != (undefined8 *)0x0) {
                      fVar30 = (float)FUN_00d50b00();
                    }
                    if ((bVar5) && (puVar32 != (undefined8 *)0x0)) {
                      fVar30 = (float)FUN_00d50b20();
                      bVar5 = true;
                      puVar32 = puVar33;
                      goto LAB_014f7e60;
                    }
                    bVar5 = true;
                    lVar26 = puVar33[3];
                    if (lVar26 == local_60) goto LAB_014f7ecb;
LAB_014f7e6e:
                    if (lVar26 != 0) {
                      fVar30 = (float)FUN_00d50b00();
                    }
                    bVar10 = true;
                    if (!bVar9) goto joined_r0x014f8042;
                    bVar27 = local_60 != 0;
                    puVar32 = puVar33;
                    local_60 = lVar26;
                    bVar9 = true;
                    if (bVar27) {
                      fVar30 = (float)FUN_00d50b20();
                      goto joined_r0x014f8042;
                    }
                  }
joined_r0x014f8018:
                  puVar33 = local_88;
                  bVar27 = bVar28;
                  bVar12 = bVar4;
                  if (local_60 != 0) {
                    fVar30 = (float)FUN_014f6e40(fVar30,-iVar20);
                    if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
                      fVar30 = (float)FUN_00d50b20();
                    }
                    if (local_c0 == puVar32) {
                      fVar31 = *(float *)((longlong)local_40 + 0x2c);
                      if (in_CL == '\0') {
                        fVar30 = (float)((uint)(fVar31 - *(float *)((longlong)puVar32 + 0x2c)) &
                                        _DAT_02390140);
                        if (fVar30 < param_1) {
                          fVar30 = fVar30 * fVar29;
                          fVar31 = (DAT_02390124 - fVar30) * *(float *)(puVar32 + 6);
                          if (fVar2 < fVar31) {
                            if (local_50 == local_40) {
                              if (!bVar28 && bVar3) {
                                bVar27 = true;
                                FUN_00d50b00();
                              }
                            }
                            else {
                              if (bVar3) {
                                FUN_00d50b00();
                              }
                              bVar27 = bVar3;
                              if ((bVar28) && (local_50 != (undefined8 *)0x0)) {
                                FUN_00d50b20();
                              }
                            }
                            fVar30 = fVar31;
                            fVar2 = fVar31;
                            if (local_88 == puVar32) {
                              local_50 = local_40;
                              if ((bVar5) && (!bVar4)) {
                                FUN_00d50b00();
                                bVar12 = true;
                              }
                            }
                            else {
                              if (bVar5) {
                                FUN_00d50b00();
                              }
                              puVar33 = puVar32;
                              local_50 = local_40;
                              bVar12 = bVar5;
                              if ((bVar4) && (local_88 != (undefined8 *)0x0)) {
                                FUN_00d50b20();
                              }
                            }
                          }
                        }
                      }
                      else {
                        fVar30 = (float)((uint)(fVar31 - *(float *)((longlong)puVar32 + 0x2c)) &
                                        _DAT_02390140);
                        if (fVar30 < fVar31 * param_1) {
                          fVar30 = fVar30 / (fVar31 * param_1);
                          fVar31 = (DAT_02390124 - fVar30) * *(float *)(puVar32 + 6);
                          if (fVar2 < fVar31) {
                            if (local_50 == local_40) {
                              if (!bVar28 && bVar3) {
                                bVar27 = true;
                                FUN_00d50b00();
                              }
                            }
                            else {
                              if (bVar3) {
                                FUN_00d50b00();
                              }
                              bVar27 = bVar3;
                              if ((bVar28) && (local_50 != (undefined8 *)0x0)) {
                                FUN_00d50b20();
                              }
                            }
                            fVar30 = fVar31;
                            fVar2 = fVar31;
                            if (local_88 == puVar32) {
                              local_50 = local_40;
                              if ((bVar5) && (!bVar4)) {
                                FUN_00d50b00();
                                bVar12 = true;
                              }
                            }
                            else {
                              if (bVar5) {
                                FUN_00d50b00();
                              }
                              puVar33 = puVar32;
                              local_50 = local_40;
                              bVar12 = bVar5;
                              if ((bVar4) && (local_88 != (undefined8 *)0x0)) {
                                FUN_00d50b20();
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  bVar4 = bVar12;
                  local_88 = puVar33;
                  lVar24 = lVar24 + 1;
                  bVar28 = bVar27;
                } while (lVar24 < *(int *)(lVar23 + 0xc));
              }
            }
            bVar28 = iVar20 < 0;
            iVar20 = iVar20 + 2;
          } while (bVar28);
          if (local_50 == (undefined8 *)0x0) {
            *(undefined1 *)(local_58 + 0xc) = 0;
          }
          else {
            local_50[2] = local_88;
            *(float *)((longlong)local_50 + 0x34) = fVar2;
            local_c0 = local_50;
            local_b8 = '\0';
            fVar30 = (float)FUN_00d21140();
            *(undefined1 *)(local_58 + 0xd) = 1;
            *(undefined1 *)(local_50 + 7) = 1;
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)((longlong)puVar16 + 0xc));
      }
      FUN_00d242c0(fVar30,0);
      uVar25 = *(uint *)((longlong)puVar17 + 0xc);
      uVar14 = uVar25 + 3;
      if (-1 < (int)uVar25) {
        uVar14 = uVar25;
      }
      uVar14 = ((int)uVar14 >> 2) * 3;
      if ((int)uVar25 < 10) {
        uVar14 = uVar25;
      }
      if (0 < (int)uVar14) {
        uVar22 = 0;
        bVar9 = bVar10;
        do {
          puVar33 = *(undefined8 **)(puVar17[2] + uVar22 * 8);
          if (local_40 == puVar33) {
            if ((!bVar3) && (local_40 != (undefined8 *)0x0)) {
              bVar3 = true;
              FUN_00d50b00();
            }
LAB_014f8480:
            lVar21 = local_40[3];
            if (lVar21 != local_58) goto LAB_014f848e;
LAB_014f84e8:
            if ((!bVar7) && (lVar21 != 0)) {
              FUN_00d50b00();
              goto LAB_014f8510;
            }
            cVar13 = *(char *)(local_40 + 7);
          }
          else {
            if (puVar33 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (local_40 != (undefined8 *)0x0)) {
              FUN_00d50b20();
              bVar3 = true;
              local_40 = puVar33;
              goto LAB_014f8480;
            }
            bVar3 = true;
            lVar21 = puVar33[3];
            local_40 = puVar33;
            if (lVar21 == local_58) goto LAB_014f84e8;
LAB_014f848e:
            if (lVar21 != 0) {
              FUN_00d50b00();
            }
            if (bVar7) {
              if (local_58 == 0) {
                cVar13 = *(char *)(local_40 + 7);
                local_58 = lVar21;
                bVar7 = true;
                goto joined_r0x014f8583;
              }
              FUN_00d50b20();
              local_58 = lVar21;
LAB_014f8510:
              cVar13 = *(char *)(local_40 + 7);
            }
            else {
              cVar13 = *(char *)(local_40 + 7);
              local_58 = lVar21;
            }
            bVar7 = true;
          }
joined_r0x014f8583:
          if ((cVar13 != '\0') && (*(char *)(local_58 + 0xd) != '\0')) {
            lVar21 = *(longlong *)(local_40[2] + 0x18);
            if (lVar21 == local_60) {
              lVar24 = local_60;
              bVar10 = bVar9;
              if ((!bVar9) && (lVar21 != 0)) {
                FUN_00d50b00();
                bVar10 = true;
              }
            }
            else {
              if (lVar21 != 0) {
                FUN_00d50b00();
              }
              bVar10 = true;
              lVar24 = lVar21;
              if ((bVar9) && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            local_60 = lVar24;
            cVar13 = FUN_014f6fc0();
            bVar9 = bVar10;
            if (cVar13 != '\0') {
              *(undefined1 *)(local_60 + 0xe) = 1;
              *(undefined1 *)(local_58 + 0xd) = 0;
              *(undefined1 *)(local_40 + 7) = 0;
            }
          }
          uVar22 = uVar22 + 1;
          bVar10 = bVar9;
        } while (uVar14 != uVar22);
      }
      FUN_00d216c0();
      if (0 < *(int *)((longlong)puVar16 + 0xc)) {
        lVar21 = 0;
        do {
          lVar24 = *(longlong *)(puVar16[2] + lVar21 * 8);
          if (local_58 == lVar24) {
            if ((!bVar7) && (local_58 != 0)) {
              bVar7 = true;
              FUN_00d50b00();
            }
LAB_014f8730:
            cVar13 = *(char *)(local_58 + 0xe);
          }
          else {
            if (lVar24 != 0) {
              FUN_00d50b00();
            }
            if ((bVar7) && (local_58 != 0)) {
              FUN_00d50b20();
              bVar7 = true;
              local_58 = lVar24;
              goto LAB_014f8730;
            }
            bVar7 = true;
            cVar13 = *(char *)(lVar24 + 0xe);
            local_58 = lVar24;
          }
          if (cVar13 == '\0') {
            if (*(char *)(local_58 + 0xc) == '\0') {
              FUN_00d21140();
            }
            else {
              FUN_00d21140();
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)((longlong)puVar16 + 0xc));
      }
      FUN_00d216c0();
      local_b8 = '\0';
      FUN_00d214d0();
      local_c0 = puVar18;
    } while (*(int *)((longlong)puVar16 + 0xc) != 0);
  }
  *unaff_RDI = puVar15;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar19 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar17 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((bVar9) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar7) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_88 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar27) && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (puVar32 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (lVar23 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


