// Function: FUN_00d93870
// Address: 00d93870
// Size: 4443 bytes
// Class: GNString
// String references:
//   "Invalid enum value"
//   "NaN"
//   "lld"
//   "%lld"
//   "ll"
//   "%i/%i"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d93870(uint64_t param_1,int64_t *param_2)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  uint *puVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  int64_t lVar13;
  char *pcVar14;
  char *pcVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int iVar18;
  uint *puVar19;
  uint64_t uVar20;
  int64_t lVar21;
  uint uVar22;
  bool bVar23;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar24;
  int64_t *plVar25;
  bool bVar26;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar27;
  uint64_t extraout_XMM0_Qa_00;
  int64_t local_2070;
  uint64_t local_2048;
  char local_2040;
  uint local_2038 [1024];
  char local_1038;
  char local_1037 [4095];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(byte *)((int64_t)this_ptr + 0x24) & 1) != 0) {
    if ((g_028a85b0 == 0) || (g_028a85b9 == '\0')) {
      FUN_00e8cb50();
      lVar24 = g_02781688;
      if (g_028a85b0 == 0) {
        if (g_02781688 != 0) {
          FUN_00d50b00();
          lVar13 = g_028a85b0;
          if (g_028a85b0 == lVar24) {
            bVar26 = false;
          }
          else {
            g_028a85b0 = lVar24;
            bVar26 = true;
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
          if (g_028a85b8 == '\0') {
            g_028a85b8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar26) {
            FUN_00d50b20();
          }
        }
        g_028a85b9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a85b9 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((g_028a85c0 == 0) || (g_028a85c9 == '\0')) {
      FUN_00e8cb50();
      lVar24 = g_02781690;
      if (g_028a85c0 == 0) {
        if (g_02781690 != 0) {
          FUN_00d50b00();
          lVar13 = g_028a85c0;
          if (g_028a85c0 == lVar24) {
            bVar26 = false;
          }
          else {
            g_028a85c0 = lVar24;
            bVar26 = true;
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
          if (g_028a85c8 == '\0') {
            g_028a85c8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar26) {
            FUN_00d50b20();
          }
        }
        g_028a85c9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a85c9 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((g_028a85d0 == 0) || (g_028a85d9 == '\0')) {
      FUN_00e8cb50();
      lVar24 = g_02781698;
      if (g_028a85d0 == 0) {
        if (g_02781698 != 0) {
          FUN_00d50b00();
          lVar13 = g_028a85d0;
          if (g_028a85d0 == lVar24) {
            bVar26 = false;
          }
          else {
            g_028a85d0 = lVar24;
            bVar26 = true;
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
          if (g_028a85d8 == '\0') {
            g_028a85d8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar26) {
            FUN_00d50b20();
          }
        }
        g_028a85d9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a85d9 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((g_028a85e0 == 0) || (g_028a85e9 == '\0')) {
      FUN_00e8cb50();
      lVar24 = g_027816a0;
      if (g_028a85e0 == 0) {
        if (g_027816a0 != 0) {
          FUN_00d50b00();
          lVar13 = g_028a85e0;
          if (g_028a85e0 == lVar24) {
            bVar26 = false;
          }
          else {
            g_028a85e0 = lVar24;
            bVar26 = true;
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
          if (g_028a85e8 == '\0') {
            g_028a85e8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar26) {
            FUN_00d50b20();
          }
        }
        g_028a85e9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a85e9 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((g_028a85f0 == 0) || (g_028a85f9 == '\0')) {
      FUN_00e8cb50();
      lVar24 = g_027816a8;
      if (g_028a85f0 == 0) {
        if (g_027816a8 != 0) {
          FUN_00d50b00();
          lVar13 = g_028a85f0;
          if (g_028a85f0 == lVar24) {
            bVar26 = false;
          }
          else {
            g_028a85f0 = lVar24;
            bVar26 = true;
            if (lVar13 != 0) {
              FUN_00d50b20();
            }
          }
          if (g_028a85f8 == '\0') {
            g_028a85f8 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar26) {
            FUN_00d50b20();
          }
        }
        g_028a85f9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028a85f9 = '\x01';
        FUN_00e8cb70();
      }
    }
    lVar24 = *arg1;
    uVar3 = *(uint *)(lVar24 + 0x20);
    if (uVar3 == 0xffffffff) {
      if (*(int64_t *)(lVar24 + 0x10) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00e7dde0();
        lVar24 = *arg1;
      }
    }
    pcVar7 = (char *)(uint64_t)uVar3;
    if ((*(int64_t *)(lVar24 + 0x10) == 0) && (iVar4 = *(int *)(lVar24 + 0x20), iVar4 != -1)) {
      if (iVar4 < 0x18) {
        lVar13 = lVar24 + 0x28;
      }
      else {
        lVar13 = FUN_00e83010(iVar4 + 1);
        iVar4 = *(int *)(lVar24 + 0x20);
      }
      FUN_00da41a0(iVar4,0);
      *(void*)(lVar13 + *(int *)(lVar24 + 0x20)) = 0;
      local_2048 = (int64_t *)0x0;
      cVar2 = FUN_00e31450(3,lVar13);
      if ((cVar2 == '\0') && (lVar13 != lVar24 + 0x28)) {
        FUN_00e83070();
      }
    }
    pcVar14 = "";
    if (*(char **)(lVar24 + 0x10) != (char *)0x0) {
      pcVar14 = *(char **)(lVar24 + 0x10);
    }
    if (*(int *)(*arg1 + 0x20) == -1) {
      local_2070 = 0;
    }
    else {
      local_2070 = *(int64_t *)(*arg1 + 0x18);
      if (local_2070 == 0) {
        local_2070 = 0;
      }
      else {
        pcVar9 = (char *)0x0;
        if (0 < (int)uVar3) {
          pcVar8 = (char *)0x0;
          do {
            pcVar9 = pcVar8;
            if (0x7f < *(ushort *)(local_2070 + (int64_t)pcVar8 * 2)) break;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar7;
          } while (pcVar7 != pcVar8);
        }
        if ((uint)pcVar9 == uVar3) {
          local_2070 = 0;
        }
      }
    }
    if (0 < (int)uVar3) {
      iVar6 = 0;
      iVar18 = 0;
      iVar4 = 0;
      do {
        while (pcVar14[iVar6] == '%') {
          pcVar9 = pcVar7;
          if (iVar18 != 0) {
            if (local_2070 == 0) {
              pcVar9 = (char *)0x0;
              FUN_00d8dd20();
            }
            else {
              FUN_00d8ea20();
            }
          }
          puVar10 = (uint *)(pcVar14 + iVar6);
          local_1038 = '\0';
          bVar26 = false;
          pcVar8 = (char *)((int64_t)&MACH_HEADER.magic + 1);
          do {
            if ((int64_t)pcVar7 <= (int64_t)(pcVar8 + iVar6)) goto LAB_00d938a6;
            lVar24 = *arg1;
            pcVar15 = pcVar9;
            if (*(int *)(lVar24 + 0x20) == -1) {
              FUN_00d931c0();
              pcVar15 = pcVar9;
            }
            lVar13 = g_0276bc70;
            sVar1 = *(short *)(*(int64_t *)(lVar24 + 0x18) + (int64_t)(pcVar8 + iVar6) * 2);
            pcVar9 = pcVar8 + 1;
            if (sVar1 == 0x51) {
              cVar2 = (**(code **)*param_2)();
              puVar11 = &g_023de330;
              if (cVar2 == 'q') {
                puVar11 = (uint64_t *)(**(code **)(*param_2 + 0x10))();
              }
              plVar25 = (int64_t *)*puVar11;
              local_2048 = plVar25;
              if ((uint64_t)plVar25 >> 0x20 == 0) {
                FUN_00e7df20();
              }
              else {
                cVar2 = FUN_00e7c630();
                if (cVar2 == '\0') {
                  local_2048._4_4_ = (uint32_t)((uint64_t)plVar25 >> 0x20);
                  FUN_00e7df20((uint64_t)plVar25 & 0xffffffff,"%i/%i",local_2048._4_4_);
                }
                else {
                  FUN_00e7df20();
                }
              }
LAB_00d94564:
              bVar26 = true;
            }
            else {
              if (sVar1 == 0x40) {
                cVar2 = (**(code **)*param_2)();
                if ((cVar2 == 'e') && (lVar24 = (**(code **)(*param_2 + 8))(), lVar24 != 0)) {
                  iVar4 = FUN_00e8ce70();
                  if (*(char *)(lVar24 + 0xc) == '\0') {
                    if (0 < (int)*(uint *)(lVar24 + 8)) {
                      uVar16 = 0;
                      do {
                        if (*(int *)(*(int64_t *)(lVar24 + 0x10) + uVar16 * 4) == iVar4) {
                          iVar4 = (int)uVar16;
                          if (iVar4 != -1) goto LAB_00d944e9;
                          break;
                        }
                        uVar16 = uVar16 + 1;
                      } while (*(uint *)(lVar24 + 8) != uVar16);
                    }
                  }
                  else {
                    iVar4 = iVar4 - **(int **)(lVar24 + 0x10);
                    if ((-1 < iVar4) && (iVar4 < *(int *)(lVar24 + 8))) {
LAB_00d944e9:
                      lVar24 = *(int64_t *)
                                (*(int64_t *)(*(int64_t *)(lVar24 + 0x28) + 0x10) +
                                (int64_t)iVar4 * 8);
                      if (lVar24 != 0) {
                        FUN_00d50b00();
                      }
                      FUN_00d8dbf0();
                      if (lVar24 != 0) {
                        FUN_00d50b20();
                      }
                      goto LAB_00d94564;
                    }
                  }
                  FUN_00e7dde0();
                  FUN_00d8dd20(0);
                  goto LAB_00d94564;
                }
                FUN_00e8d170();
                plVar25 = g_028a8368;
                if (local_2040 == '\0') {
                  if (local_2048 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    goto LAB_00d9416a;
                  }
LAB_00d941fe:
                  if (g_028a8368 == (int64_t *)0x0) {
                    bVar23 = true;
                    bVar26 = false;
                    plVar25 = (int64_t *)0x0;
                  }
                  else {
                    FUN_00d50b00();
                    bVar23 = true;
                    bVar26 = true;
                  }
                }
                else {
                  if (local_2048 == (int64_t *)0x0) goto LAB_00d941fe;
LAB_00d9416a:
                  cVar2 = FUN_00d50c10();
                  plVar25 = g_027816b0;
                  if (cVar2 == '\0') {
                    if (g_027816b0 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    bVar26 = plVar25 != (int64_t *)0x0;
LAB_00d94267:
                    bVar23 = false;
                  }
                  else {
                    lVar24 = (**(code **)(*local_2048 + 0x360))();
                    lVar13 = (**(code **)(*this_ptr + 0x360))();
                    plVar25 = local_2048;
                    if (lVar24 != lVar13) {
                      (**(code **)(*local_2048 + 400))();
                      if (local_2048 == (int64_t *)0x0) {
                        bVar26 = false;
                      }
                      else {
                        bVar26 = true;
                        if (local_2040 == '\0') {
                          FUN_00d50b00();
                        }
                      }
                      goto LAB_00d94267;
                    }
                    FUN_00d50b00();
                    bVar26 = true;
                    bVar23 = false;
                  }
                }
                FUN_00d8dbf0();
                if ((bVar26) && (plVar25 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (!bVar23) {
                  FUN_00d50b20();
                }
                goto LAB_00d94564;
              }
              if (sVar1 != 0x25) {
                iVar4 = FUN_00d90c90();
                if (iVar4 != -1) {
                  cVar2 = (**(code **)*param_2)();
                  if (cVar2 == 'c') {
                    pcVar8 = (char *)(**(code **)(*param_2 + 0x10))();
                    cVar2 = *pcVar8;
                  }
                  else {
                    cVar2 = '\0';
                  }
                  local_2048 = (int64_t *)CONCAT71(local_2048._1_7_,cVar2);
                  if (pcVar9 == (char *)((int64_t)&MACH_HEADER.magic + 2)) {
                    FUN_00d8dd20(0);
                    goto LAB_00d94564;
                  }
                  FUN_00e7de50(pcVar9,puVar10);
                  uVar16 = (uint64_t)(uint)(int)cVar2;
LAB_00d94133:
                  FUN_00e7df20(uVar16);
                  goto LAB_00d94564;
                }
                iVar4 = FUN_00d90c90();
                if (iVar4 == -1) {
                  iVar4 = FUN_00d90c90();
                  if (iVar4 == -1) {
                    iVar4 = FUN_00d90c90();
                    if (iVar4 == -1) {
                      iVar4 = FUN_00d90c90();
                      if (iVar4 == -1) goto LAB_00d94567;
                      uVar27 = FUN_00e8d220();
                      if (sVar1 == 0x73) {
                        FUN_00e7dde0();
                        FUN_00d8dd20(0);
                      }
                      else {
                        FUN_00e7de50(extraout_XMM0_Qa_00,puVar10);
                        FUN_00e7df20(uVar27);
                      }
                    }
                    else {
                      uVar27 = FUN_00e8ce20();
                      FUN_00e7de50(uVar27,puVar10);
                      FUN_00e7df20(uVar27);
                    }
                    bVar26 = true;
                    goto LAB_00d94567;
                  }
                  puVar19 = puVar10;
                  FUN_00e7de50();
                  cVar2 = (**(code **)*param_2)();
                  if (cVar2 == 'l') {
                    cVar2 = (**(code **)*param_2)();
                    if (cVar2 == 'l') {
                      puVar11 = (uint64_t *)(**(code **)(*param_2 + 0x10))();
                      uVar16 = *puVar11;
                    }
                    else {
                      uVar16 = 0;
                    }
                  }
                  else {
                    uVar5 = FUN_00e8ce70();
                    uVar16 = (uint64_t)(int)uVar5;
                    uVar22 = (int)cVar2 - 0x55;
                    if (uVar22 < 0x1f) {
                      puVar19 = &switchD_00d944d7::switchdataD_00d94d00;
                      pcVar15 = (char *)((int64_t)&switchD_00d944d7::switchdataD_00d94d00 +
                                        (int64_t)
                                        (int)(&switchD_00d944d7::switchdataD_00d94d00)[uVar22]);
                      switch((int)cVar2) {
                      case 0x55:
                      case 0x73:
                        uVar16 = (uint64_t)(ushort)uVar5;
                        break;
                      case 0x62:
                        uVar16 = (uint64_t)(uVar5 != 0);
                        break;
                      case 99:
                        uVar16 = (uint64_t)(byte)uVar5;
                        break;
                      case 0x65:
                      case 0x69:
                        uVar16 = (uint64_t)uVar5;
                      }
                    }
                  }
LAB_00d948ae:
                  pcVar8 = _strstr(pcVar15,(char *)puVar19);
                  if (pcVar8 == (char *)0x0) {
                    uVar16 = uVar16 & 0xffffffff;
                    goto LAB_00d94133;
                  }
LAB_00d948c2:
                  FUN_00e7df20(uVar16);
                  goto LAB_00d94564;
                }
                FUN_00e7de50(extraout_XMM0_Qa,puVar10);
                cVar2 = (**(code **)*param_2)();
                if (cVar2 == 'l') {
                  cVar2 = (**(code **)*param_2)();
                  if (cVar2 != 'l') {
                    uVar16 = 0;
                    goto joined_r0x00d94345;
                  }
                  puVar11 = (uint64_t *)(**(code **)(*param_2 + 0x10))();
                  uVar16 = *puVar11;
                  if (sVar1 != 0x49) goto LAB_00d9408d;
LAB_00d9434b:
                  if ((char *)((int64_t)&MACH_HEADER.cpusubtype + 2) < pcVar8) goto LAB_00d938a6;
                  if (pcVar9 != (char *)((int64_t)&MACH_HEADER.magic + 2)) {
                    uVar27 = FUN_00e7de50();
                    FUN_00e7dea0(uVar27,"lld");
                    goto LAB_00d948c2;
                  }
                  if ((int64_t)uVar16 < 0) {
                    uVar20 = 0x7fffffffffffffff;
                    local_1038 = '-';
                    bVar26 = true;
                    pcVar8 = local_1037;
                    if (uVar16 != 0x8000000000000000) {
                      uVar20 = -uVar16;
                      pcVar8 = local_1037;
                      goto LAB_00d945d1;
                    }
LAB_00d945e2:
                    uVar16 = 1;
                    do {
                      while (uVar16 = uVar16 * 10, (uVar20 | uVar16) >> 0x20 != 0) {
                        if ((int64_t)uVar20 / (int64_t)uVar16 < 10) goto LAB_00d9461e;
                      }
                    } while (9 < (uVar20 & 0xffffffff) / (uVar16 & 0xffffffff));
                  }
                  else {
                    pcVar8 = &local_1038;
                    uVar20 = uVar16;
LAB_00d945d1:
                    uVar16 = 1;
                    bVar26 = false;
                    if (9 < (int64_t)uVar20) goto LAB_00d945e2;
                  }
LAB_00d9461e:
                  lVar24 = 0;
                  do {
                    while( true ) {
                      if ((uVar20 | uVar16) >> 0x20 == 0) {
                        uVar12 = (uVar20 & 0xffffffff) / (uVar16 & 0xffffffff);
                        uVar20 = (uVar20 & 0xffffffff) % (uVar16 & 0xffffffff);
                      }
                      else {
                        uVar12 = (int64_t)uVar20 / (int64_t)uVar16;
                        uVar20 = (int64_t)uVar20 % (int64_t)uVar16;
                      }
                      lVar13 = -((int64_t)uVar16 >> 0x3f);
                      lVar21 = (int64_t)uVar16 / 10 + ((int64_t)uVar16 >> 0x3f);
                      uVar17 = uVar16 + 9;
                      if (((lVar24 != 0) || (0 < (int64_t)uVar12)) || (uVar17 < 0x13)) break;
                      lVar24 = 0;
                      uVar16 = lVar21 + lVar13;
                      if (uVar17 < 0x13) goto LAB_00d94886;
                    }
                    cVar2 = (char)uVar12 + '0';
                    if (9 < (int64_t)uVar12) {
                      cVar2 = (char)uVar12 + '7';
                    }
                    *pcVar8 = cVar2;
                    pcVar8 = pcVar8 + 1;
                    lVar24 = lVar24 + 1;
                    bVar23 = bVar26;
                    if (bVar26) {
                      bVar23 = false;
                    }
                    uVar20 = uVar20 + bVar26;
                    uVar16 = lVar21 + lVar13;
                    bVar26 = bVar23;
                  } while (0x12 < uVar17);
                }
                else {
                  iVar4 = FUN_00e8ce70();
                  uVar16 = (uint64_t)iVar4;
joined_r0x00d94345:
                  if (sVar1 == 0x49) goto LAB_00d9434b;
LAB_00d9408d:
                  puVar19 = local_2038;
                  iVar4 = FUN_00e7ddf0();
                  if (iVar4 != 0) goto LAB_00d948ae;
                  if ((int64_t)uVar16 < 0) {
                    uVar20 = 0x7fffffffffffffff;
                    local_1038 = '-';
                    bVar26 = true;
                    pcVar8 = local_1037;
                    if (uVar16 != 0x8000000000000000) {
                      uVar20 = -uVar16;
                      pcVar8 = local_1037;
                      goto LAB_00d94771;
                    }
LAB_00d94782:
                    uVar16 = 1;
                    do {
                      while (uVar16 = uVar16 * 10, (uVar20 | uVar16) >> 0x20 != 0) {
                        if ((int64_t)uVar20 / (int64_t)uVar16 < 10) goto LAB_00d947be;
                      }
                    } while (9 < (uVar20 & 0xffffffff) / (uVar16 & 0xffffffff));
                  }
                  else {
                    pcVar8 = &local_1038;
                    uVar20 = uVar16;
LAB_00d94771:
                    uVar16 = 1;
                    bVar26 = false;
                    if (9 < (int64_t)uVar20) goto LAB_00d94782;
                  }
LAB_00d947be:
                  lVar24 = 0;
                  do {
                    while( true ) {
                      if ((uVar20 | uVar16) >> 0x20 == 0) {
                        uVar12 = (uVar20 & 0xffffffff) / (uVar16 & 0xffffffff);
                        uVar20 = (uVar20 & 0xffffffff) % (uVar16 & 0xffffffff);
                      }
                      else {
                        uVar12 = (int64_t)uVar20 / (int64_t)uVar16;
                        uVar20 = (int64_t)uVar20 % (int64_t)uVar16;
                      }
                      lVar13 = -((int64_t)uVar16 >> 0x3f);
                      lVar21 = (int64_t)uVar16 / 10 + ((int64_t)uVar16 >> 0x3f);
                      uVar17 = uVar16 + 9;
                      if (((lVar24 != 0) || (0 < (int64_t)uVar12)) || (uVar17 < 0x13)) break;
                      lVar24 = 0;
                      uVar16 = lVar21 + lVar13;
                      if (uVar17 < 0x13) goto LAB_00d94886;
                    }
                    cVar2 = (char)uVar12 + '0';
                    if (9 < (int64_t)uVar12) {
                      cVar2 = (char)uVar12 + '7';
                    }
                    *pcVar8 = cVar2;
                    pcVar8 = pcVar8 + 1;
                    lVar24 = lVar24 + 1;
                    bVar23 = bVar26;
                    if (bVar26) {
                      bVar23 = false;
                    }
                    uVar20 = uVar20 + bVar26;
                    uVar16 = lVar21 + lVar13;
                    bVar26 = bVar23;
                  } while (0x12 < uVar17);
                }
LAB_00d94886:
                *pcVar8 = '\0';
                goto LAB_00d94564;
              }
              if (g_0276bc70 != 0) {
                FUN_00d50b00();
              }
              FUN_00d8dbf0();
              bVar26 = true;
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
            }
LAB_00d94567:
            if (local_1038 != '\0') {
              FUN_00e7dde0();
              FUN_00d8dd20(0);
            }
            pcVar8 = pcVar9;
          } while (!bVar26);
          iVar6 = iVar6 + (int)pcVar9;
          iVar18 = 0;
          iVar4 = iVar6;
          if ((int)uVar3 <= iVar6) goto LAB_00d94973;
        }
        iVar18 = iVar18 + 1;
        iVar6 = iVar4 + iVar18;
      } while (iVar6 < (int)uVar3);
LAB_00d94973:
      if (iVar18 != 0) {
        if (local_2070 == 0) {
          FUN_00d8dd20(0);
        }
        else {
          FUN_00d8ea20();
        }
      }
    }
  }
LAB_00d938a6:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

