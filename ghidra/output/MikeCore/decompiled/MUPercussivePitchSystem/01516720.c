// Function: FUN_01516720
// Address: 01516720
// Size: 3844 bytes
// Class: MUPercussivePitchSystem


ulonglong FUN_01516720(undefined8 param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong **pplVar11;
  ulonglong uVar12;
  longlong lVar13;
  pthread_key_t pVar14;
  longlong *in_RCX;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong *puVar18;
  undefined8 *local_res8;
  undefined1 local_res10;
  char local_res18;
  undefined8 local_1b0;
  undefined1 local_1a8;
  longlong local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined1 local_178;
  longlong local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148;
  longlong local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  longlong local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  longlong *local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  undefined8 local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_60;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  longlong *local_38;
  
  local_b8 = '\0';
  local_c0 = (longlong *)0x0;
  plVar15 = in_RCX;
  local_70 = param_4;
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_0111d0d0();
  (**(code **)(*plVar7 + 0x18))();
  bVar2 = true;
  local_38 = plVar7;
LAB_015167b0:
  lVar10 = *unaff_RSI;
  pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
  if (pvVar8 != (void *)0x0) {
    lVar10 = *unaff_RSI;
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
  }
  pVar14 = (pthread_key_t)plVar15;
  if (*(longlong *)(lVar10 + 0x88) == 0) {
    do {
      pVar14 = (pthread_key_t)plVar15;
      lVar9 = *(longlong *)(lVar10 + 0x50);
      if (lVar9 == 0) {
        bVar1 = true;
        lVar10 = 0;
        goto LAB_01516880;
      }
      pvVar8 = _pthread_getspecific(pVar14);
      if (pvVar8 != (void *)0x0) {
        lVar9 = *(longlong *)(lVar10 + 0x50);
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
      }
      pVar14 = (pthread_key_t)plVar15;
      lVar10 = lVar9;
    } while (*(longlong *)(lVar9 + 0x88) == 0);
    lVar10 = *(longlong *)(lVar9 + 0x88);
  }
  else {
    lVar10 = *(longlong *)(lVar10 + 0x88);
  }
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  bVar1 = false;
LAB_01516880:
  pvVar8 = _pthread_getspecific(pVar14);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_01252960(local_70,param_3,&local_c0,&local_78);
  if (!bVar1 && lVar10 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    if (((ulonglong)local_78 >> 0x20 == 0) && (param_3 >> 0x20 != 0)) {
      pvVar8 = _pthread_getspecific((pthread_key_t)(param_3 >> 0x20));
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = (longlong *)FUN_016caf30(0,4);
    }
    if ((local_90._4_4_ == 0) && (local_70 >> 0x20 != 0)) {
      pvVar8 = _pthread_getspecific((pthread_key_t)(local_70 >> 0x20));
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016caf30(0,4);
    }
    local_1b0 = *param_2;
    local_1a8 = 0;
    local_1a0 = *in_RCX;
    local_198 = 0;
    local_190 = *local_res8;
    local_188 = 0;
    local_78 = (longlong *)FUN_01514120(param_1,&local_1b0,&local_190,local_res10);
    local_180 = *param_2;
    local_178 = 0;
    local_170 = *in_RCX;
    local_168 = 0;
    local_160 = *local_res8;
    local_158 = 0;
    local_90 = (longlong *)FUN_01514120(param_1,&local_180,&local_160,local_res10);
    local_48 = local_78;
    plVar15 = (longlong *)((ulonglong)local_78 >> 0x20);
    pVar14 = (pthread_key_t)((ulonglong)local_78 >> 0x20);
    local_50 = local_90;
    if ((plVar15 != (longlong *)0x0) && ((ulonglong)local_90 >> 0x20 != 0)) goto code_r0x01516ac3;
    goto LAB_01516ad8;
  }
  if (!bVar2) {
    local_88 = (longlong *)FUN_00e7bdb0();
    local_80 = FUN_00e7bdb0();
    plVar15 = (longlong *)0x0;
    if (param_3 >> 0x20 != 0) {
      local_150 = *param_2;
      local_148 = 0;
      local_140 = *in_RCX;
      local_138 = 0;
      local_130 = *local_res8;
      local_128 = 0;
      plVar15 = &local_140;
      local_88 = (longlong *)FUN_01514120(param_1,&local_150,&local_130,local_res10);
    }
    if (local_70 >> 0x20 != 0) {
      local_120 = *param_2;
      local_118 = 0;
      local_110 = *in_RCX;
      local_108 = 0;
      local_100 = *local_res8;
      local_f8 = 0;
      plVar15 = &local_110;
      local_80 = FUN_01514120(param_1,&local_120,&local_100,local_res10);
    }
    iVar4 = 2;
    if (local_res18 == '\0') {
      lVar10 = *unaff_RSI;
      pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
      if (pvVar8 != (void *)0x0) {
        lVar10 = *unaff_RSI;
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
      }
      if (*(longlong *)(lVar10 + 0x88) == 0) {
        lVar9 = 0;
        do {
          lVar13 = *(longlong *)(lVar10 + 0x50);
          if (lVar13 == 0) {
            bVar2 = true;
            goto LAB_01516d50;
          }
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
          if (pvVar8 != (void *)0x0) {
            lVar13 = *(longlong *)(lVar10 + 0x50);
            lVar10 = FUN_00e8b990();
            if (lVar10 != 0) {
              lVar13 = *(longlong *)(lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8)
              ;
            }
          }
          lVar10 = lVar13;
        } while (*(longlong *)(lVar13 + 0x88) == 0);
        lVar9 = *(longlong *)(lVar13 + 0x88);
      }
      else {
        lVar9 = *(longlong *)(lVar10 + 0x88);
      }
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      bVar2 = false;
LAB_01516d50:
      pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_018847d0();
      if (!bVar2 && lVar9 != 0) {
        FUN_00d50b20();
      }
    }
    param_3 = param_3 | local_70;
    plVar7 = (longlong *)(unaff_RDI + 0x88);
    lVar10 = unaff_RDI;
    if (*(longlong *)(unaff_RDI + 0x88) == 0) {
      do {
        lVar9 = *(longlong *)(lVar10 + 0x50);
        if (lVar9 == 0) goto LAB_01516e9e;
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
        if (pvVar8 != (void *)0x0) {
          lVar9 = *(longlong *)(lVar10 + 0x50);
          lVar10 = FUN_00e8b990();
          if (lVar10 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
        }
        lVar10 = lVar9;
      } while (*(longlong *)(lVar9 + 0x88) == 0);
      lVar10 = *(longlong *)(lVar9 + 0x88);
    }
    else {
      lVar10 = *plVar7;
    }
    if (lVar10 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      if (param_3 >> 0x20 != 0) {
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
        plVar15 = local_38;
        if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar15 = local_38, lVar10 != 0)) {
          plVar15 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        FUN_00d23310();
        plVar16 = local_48;
        local_50 = (longlong *)CONCAT71(local_50._1_7_,local_40[0]);
        pplVar11 = (longlong **)local_40;
        if (local_40[0] == '\0') {
          pplVar11 = &local_50;
        }
        *(char *)pplVar11 = '\0';
        if ((local_40[0] != '\0') && (plVar16 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((plVar16 == (longlong *)0x0) && (0xe < *(int *)(plVar15[9] + 0x18) + 7U)) {
          local_60 = (longlong *)**(undefined8 **)(plVar15[9] + 0x10);
        }
        else {
          local_60 = (longlong *)FUN_00e7bdb0();
          if (((char)local_50 != '\0') && (plVar16 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d23340();
        plVar16 = local_48;
        local_50 = (longlong *)CONCAT71(local_50._1_7_,local_40[0]);
        pplVar11 = (longlong **)local_40;
        if (local_40[0] == '\0') {
          pplVar11 = &local_50;
        }
        *(char *)pplVar11 = '\0';
        if ((local_40[0] != '\0') && (plVar16 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 == (longlong *)0x0) {
          iVar6 = *(int *)(plVar15[9] + 0x18);
          if (iVar6 + 7U < 0xf) goto LAB_01517141;
          uVar12 = *(ulonglong *)((longlong)iVar6 + -8 + *(longlong *)(plVar15[9] + 0x10));
        }
        else {
LAB_01517141:
          uVar12 = FUN_00e7bdb0();
          if (((char)local_50 != '\0') && (plVar16 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*(int *)(plVar15[9] + 0x18) + 7U < 0xf) {
          FUN_00d23310();
          plVar15 = local_48;
          pplVar11 = (longlong **)local_40;
          if (local_40[0] == '\0') {
            pplVar11 = &local_50;
          }
          local_50 = (longlong *)CONCAT71(local_50._1_7_,local_40[0]);
          *(char *)pplVar11 = '\0';
          if ((local_40[0] != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_50 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar15 == (longlong *)0x0) goto LAB_01516fe0;
        }
        local_e0 = local_88;
        local_d0 = local_80;
        local_d8 = local_60;
        local_c8 = uVar12;
        if ((ulonglong)local_88 >> 0x20 == 0) {
          local_88 = local_60;
          if (local_80 >> 0x20 != 0) goto LAB_0151722d;
LAB_0151725d:
          puVar18 = &local_c8;
        }
        else {
          local_60 = (longlong *)((ulonglong)local_60 >> 0x20);
          if (local_60 != (longlong *)0x0) {
            cVar3 = FUN_00e7c020();
            pplVar11 = &local_e0;
            if (cVar3 != '\0') {
              pplVar11 = &local_d8;
            }
            local_88 = *pplVar11;
          }
          if (local_80 >> 0x20 == 0) goto LAB_0151725d;
LAB_0151722d:
          if (uVar12 >> 0x20 == 0) {
            puVar18 = &local_d0;
          }
          else {
            cVar3 = FUN_00e7c020();
            puVar18 = &local_d0;
            if (cVar3 != '\0') {
              puVar18 = &local_c8;
            }
          }
        }
        plVar15 = (longlong *)*puVar18;
        local_50 = plVar15;
        local_48 = local_88;
        if ((((ulonglong)local_88 >> 0x20 == 0) || ((ulonglong)plVar15 >> 0x20 == 0)) ||
           (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
          pVar14 = (pthread_key_t)local_60;
          plVar16 = plVar7;
          if (*plVar7 == 0) {
            lVar10 = 0;
            lVar9 = unaff_RDI;
            do {
              pVar14 = (pthread_key_t)local_60;
              lVar13 = *(longlong *)(lVar9 + 0x50);
              if (lVar13 == 0) {
                bVar2 = true;
                goto LAB_01517328;
              }
              pvVar8 = _pthread_getspecific(pVar14);
              if (pvVar8 != (void *)0x0) {
                lVar13 = *(longlong *)(lVar9 + 0x50);
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar13 = *(longlong *)
                            (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              pVar14 = (pthread_key_t)local_60;
              lVar9 = lVar13;
            } while (*(longlong *)(lVar13 + 0x88) == 0);
            plVar16 = (longlong *)(lVar13 + 0x88);
          }
          lVar10 = *plVar16;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          bVar2 = false;
LAB_01517328:
          pvVar8 = _pthread_getspecific(pVar14);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_48 = local_38;
          local_40[0] = '\0';
          plVar16 = plVar15;
          uVar5 = FUN_01254260(plVar15,local_88);
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar2 && lVar10 != 0) {
            FUN_00d50b20();
          }
          pVar14 = (pthread_key_t)plVar16;
          if ((char)uVar5 == '\0') {
            plVar17 = plVar7;
            if (*plVar7 == 0) {
              lVar10 = 0;
              lVar9 = unaff_RDI;
              do {
                pVar14 = (pthread_key_t)plVar16;
                lVar13 = *(longlong *)(lVar9 + 0x50);
                if (lVar13 == 0) {
                  bVar2 = true;
                  goto LAB_0151742a;
                }
                pvVar8 = _pthread_getspecific(pVar14);
                if (pvVar8 != (void *)0x0) {
                  lVar13 = *(longlong *)(lVar9 + 0x50);
                  lVar9 = FUN_00e8b990();
                  if (lVar9 != 0) {
                    lVar13 = *(longlong *)
                              (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                  }
                }
                pVar14 = (pthread_key_t)plVar16;
                lVar9 = lVar13;
              } while (*(longlong *)(lVar13 + 0x88) == 0);
              plVar17 = (longlong *)(lVar13 + 0x88);
            }
            lVar10 = *plVar17;
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            bVar2 = false;
LAB_0151742a:
            pvVar8 = _pthread_getspecific(pVar14);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_48 = local_38;
            local_40[0] = '\0';
            FUN_012549c0(plVar15,local_88,1);
            plVar16 = plVar15;
            if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar16 = plVar15;
            }
            if (!bVar2 && lVar10 != 0) {
              FUN_00d50b20();
            }
          }
          plVar15 = plVar7;
          if (*plVar7 == 0) {
            lVar10 = 0;
            lVar9 = unaff_RDI;
            do {
              lVar13 = *(longlong *)(lVar9 + 0x50);
              if (lVar13 == 0) {
                bVar2 = true;
                goto LAB_0151752c;
              }
              pvVar8 = _pthread_getspecific((pthread_key_t)plVar16);
              if (pvVar8 != (void *)0x0) {
                lVar13 = *(longlong *)(lVar9 + 0x50);
                lVar9 = FUN_00e8b990();
                if (lVar9 != 0) {
                  lVar13 = *(longlong *)
                            (lVar13 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
                }
              }
              lVar9 = lVar13;
            } while (*(longlong *)(lVar13 + 0x88) == 0);
            plVar15 = (longlong *)(lVar13 + 0x88);
          }
          lVar10 = *plVar15;
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          bVar2 = false;
LAB_0151752c:
          pvVar8 = _pthread_getspecific((pthread_key_t)plVar16);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar6 = FUN_018847d0();
          if (!bVar2 && lVar10 != 0) {
            FUN_00d50b20();
          }
          pVar14 = (pthread_key_t)plVar16;
          if (iVar6 < iVar4) {
            if (*plVar7 == 0) {
              lVar10 = 0;
              do {
                pVar14 = (pthread_key_t)plVar16;
                lVar9 = *(longlong *)(unaff_RDI + 0x50);
                if (lVar9 == 0) {
                  bVar2 = true;
                  goto LAB_01517605;
                }
                pvVar8 = _pthread_getspecific(pVar14);
                if (pvVar8 != (void *)0x0) {
                  lVar9 = *(longlong *)(unaff_RDI + 0x50);
                  lVar13 = FUN_00e8b990();
                  if (lVar13 != 0) {
                    lVar9 = *(longlong *)
                             (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
                  }
                }
                unaff_RDI = lVar9;
                pVar14 = (pthread_key_t)plVar16;
              } while (*(longlong *)(unaff_RDI + 0x88) == 0);
              plVar7 = (longlong *)(unaff_RDI + 0x88);
            }
            lVar10 = *plVar7;
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            bVar2 = false;
LAB_01517605:
            pvVar8 = _pthread_getspecific(pVar14);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_018847e0();
            uVar12 = CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
            if (!bVar2 && lVar10 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            uVar12 = (ulonglong)uVar5 ^ 1;
          }
          goto LAB_01517009;
        }
        goto LAB_01516fe0;
      }
    }
LAB_01516e9e:
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar15 = local_38;
    }
    FUN_018847e0();
    pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
    if ((pvVar8 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
      plVar16 = local_38;
      if (*plVar7 != 0) goto LAB_01516f8e;
LAB_01516f41:
      do {
        lVar10 = *(longlong *)(unaff_RDI + 0x50);
        if (lVar10 == 0) {
          local_b0 = 0;
          goto LAB_01516fa6;
        }
        pvVar8 = _pthread_getspecific((pthread_key_t)plVar15);
        if (pvVar8 != (void *)0x0) {
          lVar10 = *(longlong *)(unaff_RDI + 0x50);
          lVar9 = FUN_00e8b990();
          if (lVar9 != 0) {
            lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
        }
        unaff_RDI = lVar10;
      } while (*(longlong *)(unaff_RDI + 0x88) == 0);
      local_b0 = *(longlong *)(unaff_RDI + 0x88);
    }
    else {
      plVar15 = local_38;
      plVar16 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      if (*plVar7 == 0) goto LAB_01516f41;
LAB_01516f8e:
      local_b0 = *plVar7;
    }
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
LAB_01516fa6:
    local_a8 = '\x01';
    cVar3 = FUN_00d51e10();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      local_f0 = local_38;
      local_e8 = 0;
      uVar12 = CONCAT71((int7)((ulonglong)plVar16 >> 8),1);
      FUN_0150c7f0();
      goto LAB_01517009;
    }
  }
LAB_01516fe0:
  uVar12 = 0;
LAB_01517009:
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return uVar12 & 0xffffffff;
code_r0x01516ac3:
  cVar3 = FUN_00e7c020();
  pVar14 = (pthread_key_t)plVar15;
  if (cVar3 != '\0') {
LAB_01516ad8:
    pvVar8 = _pthread_getspecific(pVar14);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = local_c0;
    local_40[0] = '\0';
    plVar15 = local_90;
    FUN_012502a0(local_90,local_78,1);
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
  }
  goto LAB_015167b0;
}


