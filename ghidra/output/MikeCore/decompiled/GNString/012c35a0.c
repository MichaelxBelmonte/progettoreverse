// Function: FUN_012c35a0
// Address: 012c35a0
// Size: 5601 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x012c43e4) */
/* WARNING: Removing unreachable block (ram,0x012c43ed) */
/* WARNING: Removing unreachable block (ram,0x012c47b1) */
/* WARNING: Removing unreachable block (ram,0x012c47ba) */
/* WARNING: Removing unreachable block (ram,0x012c35eb) */
/* WARNING: Removing unreachable block (ram,0x012c35f4) */
/* WARNING: Removing unreachable block (ram,0x012c3fc7) */
/* WARNING: Removing unreachable block (ram,0x012c3fd0) */
/* WARNING: Removing unreachable block (ram,0x012c42ff) */
/* WARNING: Removing unreachable block (ram,0x012c4308) */
/* WARNING: Removing unreachable block (ram,0x012c4984) */
/* WARNING: Removing unreachable block (ram,0x012c498d) */
/* WARNING: Removing unreachable block (ram,0x012c4a32) */
/* WARNING: Removing unreachable block (ram,0x012c4a3b) */
/* WARNING: Type propagation algorithm not settling */

void FUN_012c35a0(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  undefined7 uVar12;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  pthread_key_t pVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *unaff_RDI;
  longlong *plVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  undefined4 uVar22;
  longlong *local_168;
  undefined1 local_160;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  pthread_key_t local_9c;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_84;
  ulonglong local_80;
  longlong *local_70;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  plVar1 = local_48;
  FUN_0142dbe0();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar5 = unaff_RDI[0x1e];
  if (*(int *)(lVar5 + 0xc) < 1) {
    uVar15 = 0;
    local_50 = (longlong *)0x0;
    bVar19 = false;
    local_38 = (longlong *)0x0;
    local_b0 = 0;
    local_60 = (longlong *)0x0;
    local_84 = 0;
    local_70 = (longlong *)0x0;
    local_a8 = 0;
    local_58 = (longlong *)0x0;
  }
  else {
    local_58 = (longlong *)0x0;
    local_a8 = 0;
    local_70 = (longlong *)0x0;
    local_84 = 0;
    local_60 = (longlong *)0x0;
    local_b0 = 0;
    local_38 = (longlong *)0x0;
    bVar19 = false;
    local_50 = (longlong *)0x0;
    uVar17 = 0;
    uVar2 = 0;
    do {
      uVar15 = uVar2;
      lVar5 = *(longlong *)(lVar5 + 0x10);
      plVar14 = (longlong *)(longlong)(int)uVar17;
      plVar18 = *(longlong **)(lVar5 + (longlong)plVar14 * 8);
      local_e8 = uVar17;
      if (local_58 == plVar18) {
        if (((char)local_a8 == '\0') && (local_58 != (longlong *)0x0)) {
          local_a8 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          FUN_00d50b00();
        }
LAB_012c3720:
        pVar13 = (pthread_key_t)plVar14;
        if ((char)local_58[5] != '\0') goto LAB_012c372e;
LAB_012c39db:
        uVar6 = FUN_014320a0();
        uVar12 = (undefined7)((ulonglong)uVar6 >> 8);
        cVar3 = (char)uVar15;
        if (local_48 == local_50) {
          local_80 = uVar15;
          if ((cVar3 == '\0') && (local_48 != (longlong *)0x0)) {
            local_80 = CONCAT71(uVar12,1);
            if (local_40 != '\0') goto LAB_012c3aa5;
            local_80 = CONCAT71(uVar12,1);
            FUN_00d50b00();
          }
joined_r0x012c3a7d:
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            uVar6 = FUN_00d50b00();
          }
          local_80 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          if (cVar3 == '\0') {
            local_50 = local_48;
          }
          else {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b20();
              local_50 = local_48;
              goto joined_r0x012c3a7d;
            }
            local_50 = local_48;
          }
        }
        else {
          local_80 = CONCAT71(uVar12,1);
          if ((cVar3 == '\0') || (local_50 == (longlong *)0x0)) {
            local_50 = local_48;
          }
          else {
            FUN_00d50b20();
            local_50 = local_48;
          }
        }
LAB_012c3aa5:
        pvVar7 = _pthread_getspecific((pthread_key_t)plVar14);
        if ((pvVar7 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          plVar18 = (longlong *)local_50[0x1c];
          plVar9 = local_50;
          if (plVar18 != local_70) goto LAB_012c3b20;
LAB_012c3ae5:
          plVar9 = local_70;
          if (((char)local_84 == '\0') && (plVar18 != (longlong *)0x0)) {
            local_84 = 0;
            uVar6 = FUN_00d50b00();
            local_84 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          }
        }
        else {
          plVar18 = (longlong *)
                    ((longlong *)local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4])[0x1c];
          plVar9 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          plVar14 = local_50;
          if (plVar18 == local_70) goto LAB_012c3ae5;
LAB_012c3b20:
          if (plVar18 != (longlong *)0x0) {
            plVar9 = (longlong *)FUN_00d50b00();
          }
          bVar20 = (char)local_84 != '\0';
          local_84 = (undefined4)CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
          plVar9 = plVar18;
          if ((bVar20) && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_70 = plVar9;
        pvVar7 = _pthread_getspecific((pthread_key_t)plVar14);
        if ((pvVar7 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          plVar18 = (longlong *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
          pVar13 = (pthread_key_t)plVar18;
          local_9c = pVar13;
          if (local_50[0x1b] != 0) goto LAB_012c3bba;
LAB_012c3d60:
          local_98 = (longlong *)0x0;
LAB_012c3d69:
          bVar20 = false;
        }
        else {
          plVar18 = (longlong *)CONCAT71((int7)((ulonglong)local_50 >> 8),1);
          pVar13 = (pthread_key_t)plVar18;
          local_9c = pVar13;
          if (*(longlong *)(local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0xd8) == 0)
          goto LAB_012c3d60;
LAB_012c3bba:
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar18);
          plVar14 = local_50;
          if ((pvVar7 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar18 = local_50;
            plVar14 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          lVar5 = plVar14[0x1b];
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar7 != (void *)0x0) {
            lVar5 = plVar14[0x1b];
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          pVar13 = (pthread_key_t)plVar18;
          if (*(longlong *)(lVar5 + 0x50) == 0) goto LAB_012c3d60;
          pvVar7 = _pthread_getspecific(pVar13);
          plVar14 = local_50;
          if ((pvVar7 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar18 = local_50;
            plVar14 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          lVar5 = plVar14[0x1b];
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar7 != (void *)0x0) {
            lVar5 = plVar14[0x1b];
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          lVar8 = *(longlong *)(lVar5 + 0x50);
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar18);
          if (pvVar7 != (void *)0x0) {
            lVar8 = *(longlong *)(lVar5 + 0x50);
            lVar5 = FUN_00e8b990();
            if (lVar5 != 0) {
              lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
            }
          }
          pVar13 = (pthread_key_t)plVar18;
          local_98 = *(longlong **)(lVar8 + 0x48);
          if (local_98 == (longlong *)0x0) goto LAB_012c3d60;
          FUN_00d50b00();
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar18);
          if ((pvVar7 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
            if (*(char *)((longlong)local_98 + 0xac) != '\0') goto LAB_012c4a8b;
LAB_012c3d4e:
            pVar13 = (pthread_key_t)plVar18;
            local_9c = 0;
            goto LAB_012c3d69;
          }
          plVar18 = local_98;
          if (*(char *)(local_98[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0xac) == '\0')
          goto LAB_012c3d4e;
LAB_012c4a8b:
          pVar13 = (pthread_key_t)plVar18;
          pvVar7 = _pthread_getspecific(pVar13);
          if ((pvVar7 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            pVar13 = (pthread_key_t)local_98;
          }
          pvVar7 = _pthread_getspecific(pVar13);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar4 = FUN_01326de0();
          bVar20 = iVar4 == 3;
          local_9c = 0;
        }
        pvVar7 = _pthread_getspecific(pVar13);
        if ((pvVar7 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if ((char)plVar1[0xb] != '\0') goto LAB_012c3dba;
LAB_012c3dc3:
          if (0 < *(int *)((longlong)local_70 + 0xc)) {
            lVar5 = 0;
            do {
              lVar8 = local_70[2];
              plVar18 = *(longlong **)(lVar8 + lVar5 * 8);
              plVar14 = local_70;
              if (local_60 == plVar18) {
                if (((char)local_b0 == '\0') && (local_60 != (longlong *)0x0)) {
                  local_b0 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                if (plVar18 != (longlong *)0x0) {
                  lVar8 = FUN_00d50b00();
                }
                if (((char)local_b0 == '\0') || (local_60 == (longlong *)0x0)) {
                  local_b0 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
                  local_60 = plVar18;
                }
                else {
                  uVar6 = FUN_00d50b20();
                  local_b0 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
                  local_60 = plVar18;
                }
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)plVar14);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar14 = local_60;
              }
              FUN_011ef460();
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (local_48 != (longlong *)0x0) {
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar14);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  plVar14 = local_60;
                }
                FUN_011ef460();
                lVar8 = local_158;
                pvVar7 = _pthread_getspecific((pthread_key_t)plVar14);
                lVar11 = local_158;
                if ((pvVar7 != (void *)0x0) &&
                   (lVar10 = FUN_00e8b990(), lVar8 = lVar11, lVar10 != 0)) {
                  lVar8 = *(longlong *)
                           (lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                }
                FUN_013dd6a0();
                if (local_48 == (longlong *)0x0) {
                  uVar22 = (undefined4)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
                  plVar18 = (longlong *)0x0;
                }
                else {
                  plVar18 = local_48;
                  if (local_40 == '\0') {
                    FUN_00d50b00();
                    uVar22 = 0;
                  }
                  else {
                    local_40 = '\0';
                    uVar22 = 0;
                  }
                }
                if ((local_150 != '\0') && (local_158 != 0)) {
                  FUN_00d50b20();
                }
                if (plVar18 != (longlong *)0x0) {
                  local_a0 = uVar22;
                  pvVar7 = _pthread_getspecific((pthread_key_t)plVar14);
                  plVar9 = plVar18;
                  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                    plVar9 = (longlong *)plVar18[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                  }
                  cVar3 = (**(code **)(*plVar9 + 0x3d8))();
                  if (cVar3 == '\0') {
LAB_012c45a3:
                    cVar3 = (char)local_a0;
                  }
                  else {
                    pvVar7 = _pthread_getspecific((pthread_key_t)plVar14);
                    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                      plVar14 = plVar1;
                    }
                    fVar21 = (float)FUN_012c6ce0();
                    if (DAT_0239424c < fVar21) {
                      lVar8 = local_58[4];
                      pvVar7 = _pthread_getspecific((pthread_key_t)plVar14);
                      if (pvVar7 != (void *)0x0) {
                        lVar8 = local_58[4];
                        lVar11 = FUN_00e8b990();
                        if (lVar11 != 0) {
                          lVar8 = *(longlong *)
                                   (lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
                        }
                      }
                      if (*(longlong *)(lVar8 + 0x108) != 0) {
                        lVar8 = local_58[4];
                        pvVar7 = _pthread_getspecific((pthread_key_t)plVar14);
                        if (pvVar7 != (void *)0x0) {
                          lVar8 = local_58[4];
                          lVar11 = FUN_00e8b990();
                          if (lVar11 != 0) {
                            lVar8 = *(longlong *)
                                     (lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8)
                            ;
                          }
                        }
                        if (*(char *)(*(longlong *)(lVar8 + 0x108) + 0x21) != '\0')
                        goto LAB_012c4471;
                      }
                      local_168 = local_60;
                      local_160 = 0;
                      FUN_012c2f70(0,&local_168);
                      if (local_48 == local_38) {
                        plVar14 = local_38;
                        if ((bVar19) || (local_48 == (longlong *)0x0)) {
                          bVar20 = bVar19;
                          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          bVar20 = true;
                          if (local_40 == '\0') {
                            FUN_00d50b00();
                          }
                        }
                      }
                      else if (local_40 == '\0') {
                        local_90 = plVar18;
                        if (local_48 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        plVar18 = local_90;
                        plVar14 = local_48;
                        bVar20 = true;
                        if (bVar19) {
                          if (local_38 == (longlong *)0x0) goto LAB_012c41ea;
                          FUN_00d50b20();
                          plVar14 = local_48;
                          bVar20 = true;
                        }
                      }
                      else if ((bVar19) && (local_38 != (longlong *)0x0)) {
                        FUN_00d50b20();
                        plVar14 = local_48;
                        bVar20 = true;
                      }
                      else {
LAB_012c41ea:
                        plVar14 = local_48;
                        bVar20 = true;
                      }
                      bVar19 = bVar20;
                      local_38 = plVar14;
                      if (plVar14 == (longlong *)0x0) {
                        local_168 = local_60;
                        local_160 = 0;
                        plVar14 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
                        FUN_012c2f70(1,&local_168);
                        local_90 = plVar18;
                        if (local_48 != (longlong *)0x0) {
                          bVar19 = true;
                          if (local_40 == '\0') {
                            FUN_00d50b00();
                          }
                          if (local_48 != (longlong *)0x0) {
                            bVar19 = true;
                            local_38 = local_48;
                            goto LAB_012c43f5;
                          }
                        }
                        FUN_0142fe00();
                        local_38 = local_48;
                        if (local_48 == (longlong *)0x0) {
                          local_38 = (longlong *)0x0;
                          plVar14 = local_48;
                          goto LAB_012c4471;
                        }
                        plVar18 = local_48;
                        if (local_40 == '\0') {
                          FUN_00d50b00();
                        }
                        pVar13 = (pthread_key_t)plVar18;
                        local_d8 = 0;
                        FUN_00d50b00();
                        local_d8 = '\x01';
                        local_e0 = unaff_RDI;
                        FUN_012dd9b0();
                        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        pvVar7 = _pthread_getspecific(pVar13);
                        if (pvVar7 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        uVar22 = FUN_012c6ce0();
                        *(undefined4 *)((longlong)local_48 + 0x26c) = uVar22;
                        local_40 = '\0';
                        plVar14 = unaff_RDI;
                        FUN_00d21140();
                        bVar19 = true;
                      }
LAB_012c43f5:
                      local_148 = local_60;
                      local_140 = '\0';
                      FUN_014320f0();
                      if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_138 = local_60;
                      local_130 = '\0';
                      (**(code **)(*local_38 + 0x668))();
                      if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
LAB_012c4471:
                    pVar13 = (pthread_key_t)plVar14;
                    pvVar7 = _pthread_getspecific(pVar13);
                    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                      pVar13 = (pthread_key_t)plVar1;
                    }
                    fVar21 = (float)FUN_012c6d50();
                    if (fVar21 <= DAT_0239424c) {
                      lVar8 = local_58[4];
                      pvVar7 = _pthread_getspecific(pVar13);
                      if (pvVar7 != (void *)0x0) {
                        lVar8 = local_58[4];
                        lVar11 = FUN_00e8b990();
                        if (lVar11 != 0) {
                          lVar8 = *(longlong *)
                                   (lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
                        }
                      }
                      if (*(longlong *)(lVar8 + 0x108) != 0) {
                        lVar8 = local_58[4];
                        pvVar7 = _pthread_getspecific(pVar13);
                        if (pvVar7 != (void *)0x0) {
                          lVar8 = local_58[4];
                          lVar11 = FUN_00e8b990();
                          if (lVar11 != 0) {
                            lVar8 = *(longlong *)
                                     (lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8)
                            ;
                          }
                        }
                        if (*(char *)(*(longlong *)(lVar8 + 0x108) + 0x21) != '\0')
                        goto LAB_012c4556;
                      }
                      goto LAB_012c45a3;
                    }
LAB_012c4556:
                    FUN_0142ffb0();
                    if (local_48 == local_38) {
                      if ((!bVar19) && (local_48 != (longlong *)0x0)) {
                        bVar20 = true;
                        plVar18 = local_38;
                        if (local_40 != '\0') goto joined_r0x012c4878;
                        FUN_00d50b00();
LAB_012c461a:
                        bVar19 = true;
                      }
                      bVar20 = bVar19;
                      plVar18 = local_38;
                      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else if (local_40 == '\0') {
                      if (local_48 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                      bVar20 = true;
                      plVar18 = local_48;
                      if ((bVar19) && (plVar18 = local_48, local_38 != (longlong *)0x0)) {
                        FUN_00d50b20();
                        local_38 = local_48;
                        goto LAB_012c461a;
                      }
                    }
                    else {
                      bVar20 = true;
                      plVar18 = local_48;
                      if ((bVar19) && (plVar18 = local_48, local_38 != (longlong *)0x0)) {
                        FUN_00d50b20();
                        plVar18 = local_48;
                      }
                    }
joined_r0x012c4878:
                    local_38 = plVar18;
                    bVar19 = bVar20;
                    if (local_38 == (longlong *)0x0) {
                      local_38 = (longlong *)0x0;
                      goto LAB_012c45a3;
                    }
                    pVar13 = (pthread_key_t)local_38;
                    local_c8 = 0;
                    FUN_00d50b00();
                    local_c8 = '\x01';
                    local_d0 = unaff_RDI;
                    FUN_012dd9b0();
                    if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    lVar8 = local_58[4];
                    pvVar7 = _pthread_getspecific(pVar13);
                    if (pvVar7 != (void *)0x0) {
                      lVar8 = local_58[4];
                      lVar11 = FUN_00e8b990();
                      if (lVar11 != 0) {
                        lVar8 = *(longlong *)
                                 (lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
                      }
                    }
                    if (*(longlong *)(lVar8 + 0x108) == 0) {
LAB_012c473e:
                      pvVar7 = _pthread_getspecific(pVar13);
                      if (pvVar7 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar22 = FUN_012c6d50();
                    }
                    else {
                      lVar8 = local_58[4];
                      pvVar7 = _pthread_getspecific(pVar13);
                      if (pvVar7 != (void *)0x0) {
                        lVar8 = local_58[4];
                        lVar11 = FUN_00e8b990();
                        if (lVar11 != 0) {
                          lVar8 = *(longlong *)
                                   (lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
                        }
                      }
                      uVar22 = DAT_02390124;
                      if (*(char *)(*(longlong *)(lVar8 + 0x108) + 0x21) == '\0') goto LAB_012c473e;
                    }
                    *(undefined4 *)((longlong)local_38 + 0x26c) = uVar22;
                    local_40 = '\0';
                    FUN_00d21140();
                    cVar3 = (char)local_a0;
                    local_128 = local_60;
                    local_120 = '\0';
                    FUN_014320f0();
                    if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_118 = local_60;
                    local_110 = '\0';
                    (**(code **)(*local_38 + 0x668))();
                    local_48 = local_38;
                    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if (cVar3 == '\0') {
                    FUN_00d50b20();
                  }
                }
              }
              lVar5 = lVar5 + 1;
            } while (lVar5 < *(int *)((longlong)local_70 + 0xc));
          }
        }
        else {
          if (*(char *)(plVar1[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4] + 0x58) == '\0')
          goto LAB_012c3dc3;
LAB_012c3dba:
          if (!bVar20) goto LAB_012c3dc3;
        }
        *(undefined1 *)(local_58 + 5) = 1;
        iVar4 = FUN_014321d0();
        if (iVar4 == 0) {
          FUN_012ddc30();
          local_108 = local_50;
          local_100 = '\0';
          (**(code **)(*local_48 + 0x6a8))();
          if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          FUN_00d23d90();
          if (*(int *)(unaff_RDI[0x1e] + 0xc) == 0) {
            FUN_012ddc30();
            local_f8 = local_50;
            local_f0 = '\0';
            local_b8 = 0;
            uVar22 = FUN_00d50b00();
            local_b8 = '\x01';
            local_c0 = unaff_RDI;
            FUN_0142fc50(uVar22,&local_c0);
            if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_e8 = (ulonglong)((int)local_e8 - 1);
          local_48 = local_58;
          uVar15 = local_80;
        }
        else {
          uVar15 = local_80;
        }
        local_80 = uVar15;
        if ((char)local_9c == '\0') {
          FUN_00d50b20();
          uVar15 = local_80;
        }
      }
      else {
        if (plVar18 != (longlong *)0x0) {
          lVar5 = FUN_00d50b00();
        }
        pVar13 = (pthread_key_t)plVar14;
        if (((char)local_a8 != '\0') && (local_58 != (longlong *)0x0)) {
          uVar6 = FUN_00d50b20();
          local_a8 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          local_58 = plVar18;
          goto LAB_012c3720;
        }
        local_a8 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
        local_58 = plVar18;
        if ((char)plVar18[5] == '\0') goto LAB_012c39db;
LAB_012c372e:
        lVar5 = local_58[4];
        pvVar7 = _pthread_getspecific(pVar13);
        if (pvVar7 != (void *)0x0) {
          lVar5 = local_58[4];
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        if (*(longlong *)(lVar5 + 0x108) != 0) {
          lVar5 = local_58[4];
          pvVar7 = _pthread_getspecific(pVar13);
          if (pvVar7 != (void *)0x0) {
            lVar5 = local_58[4];
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          if (*(char *)(*(longlong *)(lVar5 + 0x108) + 0x20) != '\0') {
            (**(code **)(*unaff_RDI + 0x628))();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 != (longlong *)0x0) {
              lVar5 = (**(code **)(*unaff_RDI + 0x5e0))();
              unaff_RDI[0x15] = lVar5;
              lVar5 = (**(code **)(*unaff_RDI + 0x5f0))();
              unaff_RDI[0x16] = lVar5;
              *(undefined1 *)(unaff_RDI + 0x1a) = 1;
            }
            lVar5 = unaff_RDI[0x1f];
            if (0 < *(int *)(lVar5 + 0xc)) {
              lVar8 = 0;
              do {
                (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 0x10) + lVar8 * 8) + 0x670))();
                lVar8 = lVar8 + 1;
                lVar5 = unaff_RDI[0x1f];
              } while (lVar8 < *(int *)(lVar5 + 0xc));
            }
            goto LAB_012c365d;
          }
        }
        lVar5 = local_58[4];
        pvVar7 = _pthread_getspecific(pVar13);
        if (pvVar7 != (void *)0x0) {
          lVar5 = local_58[4];
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
        }
        if (*(longlong *)(lVar5 + 0x108) == 0) {
          lVar5 = local_58[4];
          pvVar7 = _pthread_getspecific(pVar13);
          if (pvVar7 != (void *)0x0) {
            lVar5 = local_58[4];
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
          }
          if (*(longlong *)(lVar5 + 0x100) == 0) {
            (**(code **)(*unaff_RDI + 0x628))();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 != (longlong *)0x0) {
              lVar5 = (**(code **)(*unaff_RDI + 0x5e0))();
              unaff_RDI[0x15] = lVar5;
              lVar5 = (**(code **)(*unaff_RDI + 0x5f0))();
              unaff_RDI[0x16] = lVar5;
              *(undefined1 *)(unaff_RDI + 0x1a) = 1;
            }
            lVar5 = unaff_RDI[0x1f];
            if (0 < *(int *)(lVar5 + 0xc)) {
              lVar8 = 0;
              do {
                (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 0x10) + lVar8 * 8) + 0x670))();
                lVar8 = lVar8 + 1;
                lVar5 = unaff_RDI[0x1f];
              } while (lVar8 < *(int *)(lVar5 + 0xc));
            }
          }
        }
      }
LAB_012c365d:
      uVar16 = (int)local_e8 + 1;
      uVar17 = (ulonglong)uVar16;
      lVar5 = unaff_RDI[0x1e];
      uVar2 = uVar15 & 0xffffffff;
    } while ((int)uVar16 < *(int *)(lVar5 + 0xc));
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)uVar15 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar19) && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_84 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


