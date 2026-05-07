// Function: FUN_013903d0
// Address: 013903d0
// Size: 5999 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUAudioSourceDescription::assignEnergyClaimsInSampleRange(): wrong object type in list"


/* WARNING: Removing unreachable block (ram,0x013910c3) */
/* WARNING: Removing unreachable block (ram,0x013910cf) */
/* WARNING: Removing unreachable block (ram,0x013905cb) */
/* WARNING: Removing unreachable block (ram,0x013905d4) */
/* WARNING: Removing unreachable block (ram,0x0139118d) */
/* WARNING: Removing unreachable block (ram,0x01391196) */
/* WARNING: Removing unreachable block (ram,0x013911cd) */
/* WARNING: Removing unreachable block (ram,0x013911da) */
/* WARNING: Removing unreachable block (ram,0x0139131e) */
/* WARNING: Removing unreachable block (ram,0x01391327) */
/* WARNING: Removing unreachable block (ram,0x01390a3d) */
/* WARNING: Removing unreachable block (ram,0x01390a46) */
/* WARNING: Removing unreachable block (ram,0x01390845) */
/* WARNING: Removing unreachable block (ram,0x01390a05) */
/* WARNING: Removing unreachable block (ram,0x01390a0e) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_013903d0(float param_1,float param_2,longlong param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  dword dVar11;
  float fVar12;
  code *pcVar13;
  char cVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  void *pvVar19;
  undefined7 uVar23;
  ulonglong uVar20;
  longlong *plVar21;
  undefined8 uVar22;
  pthread_key_t pVar24;
  ulonglong in_RCX;
  longlong lVar25;
  longlong *plVar26;
  longlong *in_RDX;
  longlong lVar27;
  longlong *plVar28;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar29;
  int iVar30;
  longlong lVar31;
  longlong *plVar32;
  float fVar33;
  longlong *local_res10;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  undefined8 *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong local_138;
  char local_130;
  undefined4 local_128;
  int local_124;
  float local_120;
  float local_11c;
  undefined8 local_118;
  undefined8 local_110;
  ulonglong local_108;
  longlong local_b0;
  undefined8 *local_a8;
  longlong local_90;
  longlong *local_80;
  char local_78;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  uint local_40;
  
  local_128 = param_4;
  local_120 = param_2;
  local_11c = param_1;
  puVar16 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar16 = &DAT_02572358;
  pcVar13 = DAT_02572370;
  (*DAT_02572370)();
  if ((*in_RDX == 0) || (*(int *)(*in_RDX + 0xc) == 0)) {
    *unaff_RDI = puVar16;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  lVar4 = *(longlong *)(unaff_RSI + 0x1a0);
  if (lVar4 == 0) {
    FUN_0132d640();
    lVar4 = *(longlong *)(unaff_RSI + 0x1a0);
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  iVar2 = *(int *)(lVar4 + 0x24);
  uVar3 = *(uint *)(lVar4 + 0x30);
  local_108 = (ulonglong)(int)uVar3;
  uVar1 = *(undefined1 *)(lVar4 + 0x5c);
  if ((in_RCX | local_108) >> 0x20 == 0) {
    uVar15 = (uint)((in_RCX & 0xffffffff) / (ulonglong)uVar3);
  }
  else {
    uVar15 = (uint)((longlong)in_RCX / (longlong)local_108);
  }
  in_RCX = param_3 + in_RCX;
  if ((in_RCX | local_108) >> 0x20 == 0) {
    iVar30 = (int)((in_RCX & 0xffffffff) / (ulonglong)uVar3);
  }
  else {
    iVar30 = (int)((longlong)in_RCX / (longlong)local_108);
  }
  local_40 = 0;
  if (-1 < (int)uVar15) {
    local_40 = uVar15;
  }
  uVar3 = iVar30 + 1U;
  if ((int)*(uint *)(unaff_RSI + 0x88) < (int)(iVar30 + 1U)) {
    uVar3 = *(uint *)(unaff_RSI + 0x88);
  }
  puVar17 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar17 = &DAT_02572358;
  (*pcVar13)();
  iVar30 = uVar3 - local_40;
  if (iVar30 != 0 && (int)local_40 <= (int)uVar3) {
    do {
      puVar18 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar18 = &DAT_02572358;
      (*pcVar13)();
      local_78 = '\0';
      FUN_00d21140();
      FUN_00d50b20();
      iVar30 = iVar30 + -1;
    } while (iVar30 != 0);
  }
  local_80 = (longlong *)**(longlong **)(*in_RDX + 0x10);
  FUN_010fe3b0();
  plVar21 = (longlong *)DAT_02802688;
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x360))();
    cVar14 = FUN_00e85ea0();
    plVar21 = (longlong *)DAT_02802688;
    if (cVar14 != '\0') {
      plVar21 = local_80;
    }
  }
  if (plVar21 != (longlong *)0x0) {
    lVar31 = *in_RDX;
    if (*(int *)(lVar31 + 0xc) < 1) {
      bVar9 = false;
      local_60 = (longlong *)0x0;
      bVar6 = false;
      local_90 = 0;
      bVar8 = false;
      local_58 = (longlong *)0x0;
    }
    else {
      lVar27 = 0;
      local_58 = (longlong *)0x0;
      bVar8 = false;
      local_90 = 0;
      bVar6 = false;
      local_60 = (longlong *)0x0;
      local_68 = (longlong *)0x0;
      lVar25 = 0;
      bVar7 = false;
      bVar29 = false;
      do {
        pVar24 = (pthread_key_t)lVar25;
        plVar21 = *(longlong **)(*(longlong *)(lVar31 + 0x10) + lVar27 * 8);
        if (local_68 == plVar21) {
          if ((!bVar7) && (local_68 != (longlong *)0x0)) {
            bVar7 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar21 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar7) && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar7 = true;
            local_68 = plVar21;
          }
          else {
            bVar7 = true;
            local_68 = plVar21;
          }
        }
        pvVar19 = _pthread_getspecific(pVar24);
        if (pvVar19 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c2a40();
        if (local_80 == local_60) {
          bVar9 = bVar29;
          if ((bVar29) || (local_80 == (longlong *)0x0)) {
joined_r0x0139082b:
            plVar21 = local_60;
            if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar9 = true;
            plVar21 = local_60;
            if (local_78 == '\0') {
              FUN_00d50b00();
              goto LAB_01390817;
            }
          }
        }
        else {
          plVar21 = local_80;
          if (local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar9 = true;
            if ((bVar29) && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_60 = local_80;
LAB_01390817:
              bVar9 = true;
              goto joined_r0x0139082b;
            }
          }
          else {
            bVar9 = true;
            if ((bVar29) && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if (0 < *(int *)((longlong)plVar21 + 0xc)) {
          lVar31 = 0;
          bVar29 = false;
          do {
            plVar32 = *(longlong **)(plVar21[2] + lVar31 * 8);
            if (local_58 == plVar32) {
              if ((!bVar8) && (local_58 != (longlong *)0x0)) {
                bVar8 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (plVar32 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar8) && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
                bVar8 = true;
                local_58 = plVar32;
              }
              else {
                bVar8 = true;
                local_58 = plVar32;
              }
            }
            iVar30 = *(int *)((longlong)local_58 + 0xc);
            if (((int)local_40 <= iVar30) && (iVar30 < (int)uVar3)) {
              lVar25 = *(longlong *)(puVar17[2] + (longlong)(int)(iVar30 - local_40) * 8);
              if (local_90 == lVar25) {
                lVar25 = local_90;
                bVar5 = bVar6;
                if ((!bVar6) && (local_90 != 0)) {
                  FUN_00d50b00();
                  bVar5 = true;
                }
              }
              else {
                if (lVar25 != 0) {
                  FUN_00d50b00();
                }
                bVar5 = true;
                if ((bVar6) && (local_90 != 0)) {
                  FUN_00d50b20();
                }
              }
              local_90 = lVar25;
              local_80 = local_58;
              FUN_00d21140();
              if (!bVar29) {
                local_80 = local_68;
                FUN_00d21140();
              }
              local_78 = '\0';
              bVar6 = bVar5;
              bVar29 = true;
            }
            lVar31 = lVar31 + 1;
          } while (lVar31 < *(int *)((longlong)plVar21 + 0xc));
        }
        lVar27 = lVar27 + 1;
        lVar31 = *in_RDX;
        lVar25 = (longlong)*(int *)(lVar31 + 0xc);
        local_60 = plVar21;
        bVar29 = bVar9;
      } while (lVar27 < lVar25);
      if ((bVar7) && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_013912e2;
  }
  local_80 = (longlong *)**(undefined8 **)(*in_RDX + 0x10);
  FUN_007eece0();
  if (local_80 == (longlong *)0x0) {
LAB_01390ad5:
    if (DAT_02802688 != 0) goto LAB_01390ae6;
LAB_013912a7:
    FUN_00e828a0();
  }
  else {
    (**(code **)(*local_80 + 0x360))();
    cVar14 = FUN_00e85ea0();
    if (cVar14 == '\0') goto LAB_01390ad5;
    if (local_80 == (longlong *)0x0) goto LAB_013912a7;
LAB_01390ae6:
    lVar31 = *in_RDX;
    if (0 < *(int *)(lVar31 + 0xc)) {
      lVar25 = 0;
      local_58 = (longlong *)0x0;
      bVar8 = false;
      local_90 = 0;
      bVar6 = false;
      local_60 = (longlong *)0x0;
      bVar9 = false;
      local_50 = 0;
      plVar21 = (longlong *)0x0;
      bVar7 = false;
      local_68 = (longlong *)0x0;
      do {
        uVar20 = local_50 & 0xffffffff;
        lVar31 = *(longlong *)(*(longlong *)(lVar31 + 0x10) + lVar25 * 8);
        if (local_68 == (longlong *)lVar31) {
          if ((!bVar7) && (local_68 != (longlong *)0x0)) {
            bVar7 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar31 != 0) {
            FUN_00d50b00();
          }
          if ((bVar7) && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar7 = true;
            local_68 = (longlong *)lVar31;
          }
          else {
            bVar7 = true;
            local_68 = (longlong *)lVar31;
          }
        }
        pvVar19 = _pthread_getspecific((pthread_key_t)local_50);
        if (pvVar19 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar22 = FUN_013de560();
        uVar23 = (undefined7)((ulonglong)uVar22 >> 8);
        cVar14 = (char)uVar20;
        if (local_80 == plVar21) {
          if ((cVar14 == '\0') && (local_80 != (longlong *)0x0)) {
            local_50 = CONCAT71(uVar23,1);
            plVar32 = plVar21;
            if (local_78 != '\0') goto joined_r0x01390e1c;
            uVar20 = CONCAT71(uVar23,1);
            FUN_00d50b00();
          }
joined_r0x01390e32:
          local_50 = uVar20;
          plVar32 = plVar21;
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar32 = local_80;
          if (local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              uVar22 = FUN_00d50b00();
            }
            uVar20 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
            local_50 = uVar20;
            if ((cVar14 != '\0') && (plVar21 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar21 = local_80;
              goto joined_r0x01390e32;
            }
          }
          else {
            local_50 = CONCAT71(uVar23,1);
            if ((cVar14 != '\0') && (plVar21 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
joined_r0x01390e1c:
        plVar21 = plVar32;
        if (plVar21 != (longlong *)0x0) {
          pVar24 = (pthread_key_t)plVar21;
          pvVar19 = _pthread_getspecific(pVar24);
          if (pvVar19 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c2a40();
          iVar30 = *(int *)((longlong)local_80 + 0xc);
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar30 != 0) {
            pvVar19 = _pthread_getspecific(pVar24);
            if (pvVar19 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014c2a40();
            if (local_80 == local_60) {
              plVar32 = local_60;
              bVar29 = bVar9;
              if ((bVar9) || (local_80 == (longlong *)0x0)) goto LAB_01390eb3;
              bVar29 = true;
              if (local_78 == '\0') {
                bVar29 = true;
                FUN_00d50b00();
              }
            }
            else {
              plVar32 = local_80;
              if (local_78 == '\0') {
                if (local_80 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                bVar29 = true;
                if ((bVar9) && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01390eb3:
                if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                bVar29 = true;
                if ((bVar9) && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            local_60 = plVar32;
            bVar9 = bVar29;
            if (0 < *(int *)((longlong)plVar32 + 0xc)) {
              lVar31 = 0;
              bVar29 = false;
              do {
                plVar28 = *(longlong **)(plVar32[2] + lVar31 * 8);
                plVar26 = plVar32;
                if (local_58 == plVar28) {
                  plVar28 = local_58;
                  if (bVar8) {
                    dVar11 = *(dword *)((longlong)local_58 + 0xc);
                  }
                  else {
                    dVar11 = MACH_HEADER.filetype;
                    if (local_58 != (longlong *)0x0) {
                      FUN_00d50b00();
                      goto LAB_01390f49;
                    }
                  }
                }
                else {
                  if (plVar28 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  if ((bVar8) && (local_58 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01390f49:
                  bVar8 = true;
                  dVar11 = *(dword *)((longlong)plVar28 + 0xc);
                }
                local_58 = plVar28;
                if (((int)local_40 <= (int)dVar11) && ((int)dVar11 < (int)uVar3)) {
                  pvVar19 = _pthread_getspecific((pthread_key_t)plVar26);
                  if (pvVar19 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014c3020();
                  local_58 = local_80;
                  if (local_80 == plVar28) {
                    local_58 = plVar28;
                    bVar5 = bVar8;
                    if (!bVar8) {
                      if (local_78 != '\0') goto LAB_013910ad;
                      FUN_00d50b00();
                      bVar5 = true;
                    }
LAB_01391044:
                    bVar8 = bVar5;
                    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (local_78 == '\0') {
                      if (local_80 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                      bVar5 = true;
                      if (bVar8) {
                        FUN_00d50b20();
                      }
                      goto LAB_01391044;
                    }
                    if (bVar8) {
                      FUN_00d50b20();
                    }
LAB_013910ad:
                    bVar8 = true;
                  }
                  lVar27 = *(longlong *)
                            (puVar17[2] +
                            ((longlong)*(int *)((longlong)local_58 + 0xc) - (longlong)(int)local_40)
                            * 8);
                  if (local_90 == lVar27) {
                    if ((!bVar6) && (local_90 != 0)) {
                      bVar6 = true;
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if (lVar27 != 0) {
                      FUN_00d50b00();
                    }
                    if ((bVar6) && (local_90 != 0)) {
                      FUN_00d50b20();
                      bVar6 = true;
                      local_90 = lVar27;
                    }
                    else {
                      bVar6 = true;
                      local_90 = lVar27;
                    }
                  }
                  local_80 = local_58;
                  local_78 = '\0';
                  FUN_00d21140();
                  bVar5 = !bVar29;
                  bVar29 = true;
                  if (bVar5) {
                    local_78 = '\0';
                    FUN_00d21140();
                    local_80 = plVar21;
                  }
                }
                lVar31 = lVar31 + 1;
              } while (lVar31 < *(int *)((longlong)plVar32 + 0xc));
            }
          }
        }
        lVar25 = lVar25 + 1;
        lVar31 = *in_RDX;
      } while (lVar25 < *(int *)(lVar31 + 0xc));
      if (((char)local_50 != '\0') && (plVar21 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar7) && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_013912e2;
    }
  }
  bVar9 = false;
  local_60 = (longlong *)0x0;
  bVar6 = false;
  local_90 = 0;
  bVar8 = false;
  local_58 = (longlong *)0x0;
LAB_013912e2:
  FUN_00e83120();
  if ((local_78 == '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_118 = FUN_00e83da0();
  FUN_00e83010();
  local_110 = FUN_00e83010();
  local_a8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_a8 = &DAT_025f1488;
  *(undefined8 *)((longlong)local_a8 + 0xc) = 0;
  *(undefined8 *)((longlong)local_a8 + 0x14) = 0;
  *(undefined8 *)((longlong)local_a8 + 0x1c) = 0;
  *(undefined8 *)((longlong)local_a8 + 0x24) = 0;
  *(undefined8 *)((longlong)local_a8 + 0x2c) = 0;
  *(undefined8 *)((longlong)local_a8 + 0x34) = 0;
  *(undefined8 *)((longlong)local_a8 + 0x3c) = 0;
  *(undefined8 *)((longlong)local_a8 + 0x44) = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  pcVar13 = DAT_025f14a0;
  (*DAT_025f14a0)();
  local_1c8 = *(longlong *)(unaff_RSI + 0x38);
  local_1c0 = '\0';
  local_1b0 = '\0';
  local_1a8 = 0;
  local_1a0 = '\0';
  local_198 = local_80;
  local_190 = '\0';
  local_188 = 0;
  local_180 = '\0';
  local_1b8 = lVar4;
  FUN_015c4d90(0,local_110,&local_1c8,&local_1b8,&local_198,local_118,uVar1,6,&local_188);
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  fVar12 = DAT_02390124;
  if (uVar3 - local_40 != 0 && (int)local_40 <= (int)uVar3) {
    fVar12 = DAT_02390124 / (float)(int)(uVar3 - local_40);
  }
  if ((int)local_40 < (int)uVar3) {
    uVar20 = (ulonglong)local_40;
    fVar33 = (float)iVar2 * DAT_0241bdc0;
    local_124 = -local_40;
    local_b0 = 0;
    local_68 = (undefined8 *)0x0;
    bVar7 = false;
    bVar29 = true;
    do {
      plVar21 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar21 = (longlong)&DAT_025f1488;
      *(undefined8 *)((longlong)plVar21 + 0xc) = 0;
      *(undefined8 *)((longlong)plVar21 + 0x14) = 0;
      *(undefined8 *)((longlong)plVar21 + 0x1c) = 0;
      *(undefined8 *)((longlong)plVar21 + 0x24) = 0;
      *(undefined8 *)((longlong)plVar21 + 0x2c) = 0;
      *(undefined8 *)((longlong)plVar21 + 0x34) = 0;
      *(undefined8 *)((longlong)plVar21 + 0x3c) = 0;
      *(undefined8 *)((longlong)plVar21 + 0x44) = 0;
      plVar21[9] = 0;
      plVar21[10] = 0;
      (*pcVar13)();
      if (plVar21 == local_68) {
        plVar21 = local_68;
        if (bVar7) {
          FUN_00d50b20();
          bVar5 = bVar7;
        }
        else {
          bVar5 = true;
        }
      }
      else {
        bVar5 = true;
        if ((bVar7) && (local_68 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_178 = *(longlong *)(unaff_RSI + 0x38);
      local_170 = '\0';
      local_160 = '\0';
      local_150 = '\0';
      local_148 = local_80;
      local_140 = '\0';
      local_138 = 0;
      local_130 = '\0';
      local_168 = lVar4;
      local_158 = local_a8;
      FUN_015c4d90(0,local_110,&local_178,&local_168,&local_148,local_118,uVar1,0x1e,&local_138);
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if (local_a8 == plVar21) {
        puVar18 = local_a8;
        bVar10 = bVar29;
        if ((!bVar29) && (local_a8 != (undefined8 *)0x0)) {
          FUN_00d50b00();
          bVar10 = true;
        }
      }
      else {
        if (plVar21 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        puVar18 = plVar21;
        bVar10 = bVar5;
        if ((bVar29) && (local_a8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_a8 = puVar18;
      FUN_015c6b60();
      FUN_015c66c0();
      uVar22 = FUN_015c6ba0();
      lVar31 = *(longlong *)(puVar17[2] + local_b0 * 8);
      if (local_90 == lVar31) {
        if ((!bVar6) && (local_90 != 0)) {
          bVar6 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar31 != 0) {
          FUN_00d50b00();
        }
        if ((bVar6) && (local_90 != 0)) {
          FUN_00d50b20();
          bVar6 = true;
          local_90 = lVar31;
        }
        else {
          bVar6 = true;
          local_90 = lVar31;
        }
      }
      FUN_013924d0(DAT_0240ded4,DAT_0239011c,uVar22,(int)fVar33);
      if (((longlong *)*local_res10 != (longlong *)0x0) &&
         ((local_40 / 100) * 100 + local_124 == (int)local_b0)) {
        (**(code **)(*(longlong *)*local_res10 + 0x380))
                  ((float)(int)local_b0 * local_120 * fVar12 + local_11c);
      }
      local_b0 = local_b0 + 1;
      local_40 = local_40 + 1;
      local_68 = plVar21;
      bVar7 = bVar5;
      bVar29 = bVar10;
    } while (uVar3 - uVar20 != local_b0);
  }
  else {
    bVar10 = true;
    bVar5 = false;
    local_68 = (undefined8 *)0x0;
  }
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  *unaff_RDI = puVar16;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar17 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((bVar10) && (local_a8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


