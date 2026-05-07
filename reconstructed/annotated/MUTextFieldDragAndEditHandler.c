// ===== MUTextFieldDragAndEditHandler — Annotated small functions =====
// 16 readable functions

// ==================================================
// @01ba40f0 (2679 bytes) — math_loop

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong *unaff_RBX;
  longlong *arg1;
  bool bVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar13;
  float fVar14;
  float extraout_XMM0_Db;
  undefined8 uVar15;
  float fVar16;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  undefined1 local_a8 [16];
  int local_94;
  longlong local_88;
  char local_80;
  longlong local_70;
  char local_68;
  longlong *local_58;
  char local_50;
  int local_40;
  
  plVar1 = local_58;
  local_b0 = param_2;
  uVar12 = FUN_01a58dc0();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar12 = FUN_00d50b00();
      goto LAB_01ba412f;
    }
    if (*local_b0 == 0) {
      uVar5 = 0;
      goto LAB_01ba4b6e;
    }
    goto LAB_01ba4ae8;
  }
LAB_01ba412f:
  if (*local_b0 == 0) {
    uVar5 = 0;
LAB_01ba4b61:
    if (plVar1 == (longlong *)0x0) goto LAB_01ba4b6e;
  }
  else {
    if (local_58 == (longlong *)0x0) {
LAB_01ba4ae8:
      local_c0 = *local_b0;
      local_b8 = '\0';
      uVar4 = FUN_01a58d30(uVar12,&local_c0);
      uVar5 = (ulonglong)uVar4;
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01ba4b61;
    }
    cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_58))();
    if (cVar2 != '\0') {
      iVar3 = FUN_01d3a5a0();
      uVar12 = extraout_XMM0_Da;
      if ((iVar3 == 1) && (iVar3 = FUN_01d3b630(), uVar12 = extraout_XMM0_Da_00, iVar3 == 1)) {
        (**(code **)(*local_58 + 0x7b0))();
        if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01d3abf0();
        FUN_01e466c0();
        (**(code **)(*local_58 + 0xe30))();
        if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        local_94 = FUN_01d3b620();
        if (local_94 == 2) {
          uVar12 = extraout_XMM0_Da_01;
          if (local_58 != (longlong *)0x0) {
            local_40 = -1;
            local_a8 = ZEXT816(0);
            iVar3 = 0;
            while (local_40 = local_40 + 1, local_40 < *(int *)((longlong)local_58 + 0xc)) {
              pvVar8 = _pthread_getspecific((pthread_key_t)local_58[2]);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar13 = (float)FUN_012660a0();
              local_a8._0_4_ = (float)local_a8._0_4_ + fVar13;
              iVar3 = iVar3 + -1;
            }
            plVar7 = local_58;
            FUN_001159b0();
            if (iVar3 == 0) {
              local_a8 = ZEXT816(0);
            }
            else {
              local_a8 = ZEXT416((uint)DAT_02390d00 &
                                 -(uint)((float)local_a8._0_4_ / (float)-iVar3 < DAT_0239011c) &
                                 -(uint)(DAT_02390118 < (float)local_a8._0_4_ / (float)-iVar3));
            }
            if (0 < *(int *)((longlong)local_58 + 0xc)) {
              iVar3 = 0;
              do {
                pvVar8 = _pthread_getspecific((pthread_key_t)plVar7);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01264240();
                if (local_70 == 0) {
                  cVar2 = '\0';
                }
                else {
                  pvVar8 = _pthread_getspecific((pthread_key_t)plVar7);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01264240();
                  pvVar8 = _pthread_getspecific((pthread_key_t)plVar7);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar2 = FUN_01334f30();
                  if ((local_80 != '\0') && (local_88 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_68 != '\0') && (local_70 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar2 != '\0') {
                  pvVar8 = _pthread_getspecific((pthread_key_t)plVar7);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01266020(local_a8._0_4_);
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)((longlong)local_58 + 0xc));
            }
            FUN_001159b0();
LAB_01ba4ac4:
            uVar12 = FUN_00d50b20();
            unaff_RBX = plVar1;
          }
        }
        else {
          FUN_01cf74c0();
          while( true ) {
            (**(code **)(*plVar1 + 0x658))();
            plVar7 = (longlong *)*arg1;
            if (plVar7 != local_58) break;
            if (((char)arg1[1] == '\0') && (local_58 != (longlong *)0x0)) {
              if (local_50 == '\0') {
                FUN_00d50b00();
                goto LAB_01ba44b0;
              }
LAB_01ba4467:
              *(undefined1 *)(arg1 + 1) = 1;
              local_50 = '\0';
            }
            if (*arg1 == 0) goto LAB_01ba48dc;
LAB_01ba44c8:
            iVar3 = FUN_01d3a5a0();
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar3 == 6) goto LAB_01ba48f0;
            iVar3 = FUN_01d3a5a0();
            if (iVar3 == 5) {
              FUN_01d3abf0();
              uVar15 = FUN_01e466c0();
              uVar5 = FUN_01d3b590();
              if (plVar1 != (longlong *)0x0) {
                local_50 = '\0';
                local_58 = (longlong *)0x0;
                local_40 = -1;
                fVar13 = *(float *)(&DAT_0241dcb8 + (ulonglong)((uVar5 & 8) == 0) * 4);
                bVar11 = true;
                while( true ) {
                  lVar6 = (longlong)local_40;
                  local_40 = local_40 + 1;
                  if (*(int *)((longlong)plVar1 + 0xc) <= local_40) break;
                  lVar10 = plVar1[2];
                  local_58 = *(longlong **)(lVar10 + 8 + lVar6 * 8);
                  if (bVar11) {
                    pvVar8 = _pthread_getspecific((pthread_key_t)lVar10);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    plVar7 = (longlong *)FUN_00e8b990();
                    lVar10 = *plVar7;
                    cVar2 = (**(code **)(lVar10 + 0x3c0))();
                    if (cVar2 != '\0') {
                      pvVar8 = _pthread_getspecific((pthread_key_t)lVar10);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      plVar7 = (longlong *)FUN_00e8b990();
                      lVar10 = *plVar7;
                      (**(code **)(lVar10 + 0x3b8))();
                    }
                    bVar11 = false;
                  }
                  pVar9 = (pthread_key_t)lVar10;
                  pvVar8 = _pthread_getspecific(pVar9);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar12 = FUN_012660a0();
                  local_a8._0_4_ = uVar12;
                  pvVar8 = _pthread_getspecific(pVar9);
                  if (pvVar8 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01264240();
                  if (local_70 == 0) {
                    cVar2 = '\0';
                  }
                  else {
                    pvVar8 = _pthread_getspecific(pVar9);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01264240();
                    pvVar8 = _pthread_getspecific(pVar9);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    cVar2 = FUN_01334f30();
                    if ((local_80 != '\0') && (local_88 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_68 != '\0') && (local_70 != 0)) {
                    FUN_00d50b20();
                  }
                  if (cVar2 != '\0') {
                    pvVar8 = _pthread_getspecific(pVar9);
                    if (pvVar8 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    fVar16 = (float)local_a8._0_4_ +
                             (extraout_XMM0_Db - (float)((ulonglong)uVar15 >> 0x20)) * fVar13;
                    fVar14 = DAT_02390124;
                    if (fVar16 <= DAT_02390124) {
                      fVar14 = fVar16;
                    }
                    fVar16 = DAT_02390d00;
                    if (DAT_02390d00 <= fVar14) {
                      fVar16 = fVar14;
                    }
                    local_a8._0_4_ = fVar16;
                    FUN_01266020(fVar16);
                    cVar2 = FUN_0199be40();
                    if (cVar2 != '\0') {
                      (**(code **)((longlong)&linkedit_data_command_000013d8.cmd + *plVar1))();
                      pvVar8 = _pthread_getspecific(pVar9);
                      if (pvVar8 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01266020(local_a8._0_4_);
                      if ((local_68 != '\0') && (local_70 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
                FUN_001159b0();
              }
              (**(code **)((longlong)&linkedit_data_command_000013e8.cmd + *plVar1))((int)uVar15);
            }
          }
          lVar6 = arg1[1];
          if (local_50 != '\0') {
            *arg1 = (longlong)local_58;
            if (((char)lVar6 != '\0') && (plVar7 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01ba4467;
          }
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (longlong)local_58;
          if (((char)lVar6 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ba44b0:
          *(undefined1 *)(arg1 + 1) = 1;
          if (*arg1 != 0) goto LAB_01ba44c8;
LAB_01ba48dc:
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01ba48f0:
          uVar12 = FUN_01cf74c0();
          unaff_RBX = plVar1;
          if (plVar1 != (longlong *)0x0) goto LAB_01ba4ac4;
        }
        if (plVar1 != (longlong *)0x0) {
          uVar12 = FUN_00d50b20();
        }
        uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        if (local_94 == 2) goto LAB_01ba4b61;
      }
      goto LAB_01ba4ae8;
    }
    uVar5 = 0;
  }
  FUN_00d50b20();
LAB_01ba4b6e:
  return uVar5 & 0xffffffff;
}




// ==================================================
// @01bbad10 (1595 bytes) — math_loop

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  undefined7 uVar12;
  ulonglong uVar11;
  longlong *arg1;
  bool bVar13;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong *local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  local_70 = param_1;
  FUN_01a58dc0();
  pVar10 = (pthread_key_t)param_1;
  if (local_40 == (longlong *)0x0) {
    bVar3 = 0;
  }
  else {
    FUN_01a58dc0();
    bVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_58))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = bVar3 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 == 0) && (lVar9 = *param_2, lVar9 != 0)) {
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      lVar9 = *param_2;
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
    }
    FUN_0125e7c0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01bbae1f;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_01bbae1f:
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01bbaea6;
        }
      }
      else if (local_40 != (longlong *)0x0) {
LAB_01bbaea6:
        FUN_01a58dc0();
        cVar4 = (**(code **)((longlong)&dylib_command_00001220.dylib.current_version + *local_40))()
        ;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar8 = 0;
        if (*param_2 != 0) {
          FUN_01a58dc0();
          if ((local_40 == (longlong *)0x0) || (iVar5 = FUN_01d3a5a0(), iVar5 != 1)) {
            bVar13 = false;
            uVar12 = 0;
          }
          else {
            iVar5 = FUN_01d3b630();
            bVar13 = iVar5 == 1;
            uVar12 = (undefined7)((ulonglong)lVar9 >> 8);
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar13) {
            iVar5 = FUN_01d3b620();
            if ((iVar5 == 2) && (cVar4 == '\x01')) {
              pvVar7 = _pthread_getspecific(pVar10);
              if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                pVar10 = (pthread_key_t)local_40;
              }
              cVar4 = FUN_014c4200();
              if (cVar4 == '\0') {
                pvVar7 = _pthread_getspecific(pVar10);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014c7490(0,DAT_02390124,DAT_02390124,DAT_02390124);
                uVar11 = CONCAT71(uVar12,1);
              }
              else {
                pvVar7 = _pthread_getspecific(pVar10);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar11 = CONCAT71(uVar12,1);
                FUN_014c4100();
              }
            }
            else {
              pvVar7 = _pthread_getspecific(pVar10);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar4 = FUN_014c4200();
              if (cVar4 != '\0') {
                do {
                  lVar8 = *local_70;
                  cVar4 = (char)local_70[1];
                  lVar9 = *arg1;
                  if (lVar9 == lVar8) {
                    if (cVar4 != '\0') {
                      if (((char)arg1[1] == '\0') && (lVar8 != 0)) {
                        cVar4 = '\x01';
                        FUN_00d50b00();
                        goto LAB_01bbb120;
                      }
                      goto LAB_01bbb124;
                    }
                  }
                  else {
                    lVar2 = arg1[1];
                    if ((cVar4 != '\0') && (lVar8 != 0)) {
                      FUN_00d50b00();
                    }
                    *arg1 = lVar8;
                    if (((char)lVar2 != '\0') && (lVar9 != 0)) {
                      FUN_00d50b20();
                    }
LAB_01bbb120:
                    *(char *)(arg1 + 1) = cVar4;
LAB_01bbb124:
                    lVar8 = *arg1;
                  }
                  if (lVar8 == 0) {
                    FUN_01a58dc0();
                    (**(code **)(*local_58 + 0x658))();
                    plVar1 = (longlong *)*arg1;
                    if (plVar1 == local_40) {
                      if (((char)arg1[1] == '\0') && (local_40 != (longlong *)0x0)) {
                        if (local_38 == '\0') {
                          FUN_00d50b00();
                          goto LAB_01bbb1e1;
                        }
                        goto LAB_01bbb191;
                      }
LAB_01bbb19a:
                      if (*arg1 != 0) goto LAB_01bbb1a2;
LAB_01bbb1ee:
                      bVar13 = false;
                      uVar12 = 0;
                    }
                    else {
                      lVar9 = arg1[1];
                      if (local_38 != '\0') {
                        *arg1 = (longlong)local_40;
                        if (((char)lVar9 != '\0') && (plVar1 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
LAB_01bbb191:
                        *(undefined1 *)(arg1 + 1) = 1;
                        local_38 = '\0';
                        goto LAB_01bbb19a;
                      }
                      if (local_40 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                      *arg1 = (longlong)local_40;
                      if (((char)lVar9 != '\0') && (plVar1 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
LAB_01bbb1e1:
                      *(undefined1 *)(arg1 + 1) = 1;
                      if (*arg1 == 0) goto LAB_01bbb1ee;
LAB_01bbb1a2:
                      iVar5 = FUN_01d3a5a0();
                      bVar13 = iVar5 != 6;
                      uVar12 = (undefined7)((ulonglong)local_40 >> 8);
                    }
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (!bVar13) goto LAB_01bbb251;
                  }
                  FUN_01d3a5a0();
                } while( true );
              }
              uVar11 = 0;
            }
            goto LAB_01bbafef;
          }
          lVar8 = *param_2;
        }
        local_78 = '\0';
        local_80 = lVar8;
        uVar6 = FUN_01a58d30(*arg1,&local_80);
        uVar11 = (ulonglong)uVar6;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01bbafef;
      }
      uVar11 = 0;
      goto LAB_01bbaffc;
    }
  }
  uVar11 = 0;
LAB_01bbae4c:
  return uVar11 & 0xffffffff;
LAB_01bbb251:
  uVar11 = CONCAT71(uVar12,1);
  if (*local_70 != 0) {
    *local_70 = 0;
    if ((char)local_70[1] != '\0') {
      FUN_00d50b20();
    }
    *(undefined1 *)(local_70 + 1) = 0;
  }
LAB_01bbafef:
  FUN_00d50b20();
LAB_01bbaffc:
  FUN_00d50b20();
  goto LAB_01bbae4c;
}




// ==================================================
// @01bbc610 (1448 bytes) — math_loop

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  char *pcVar4;
  pthread_key_t in_ECX;
  pthread_key_t pVar5;
  char *pcVar6;
  longlong *in_RDX;
  int iVar7;
  longlong *this;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  undefined4 uVar14;
  float extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  double dVar15;
  longlong *local_b8;
  char local_b0;
  longlong local_a0;
  char local_98;
  longlong *local_80;
  char local_78 [8];
  longlong local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  undefined8 local_48;
  uint uStack_40;
  uint uStack_3c;
  char local_38 [8];
  
  fVar12 = (float)((ulonglong)param_1 >> 0x20);
  lVar8 = *in_RDX;
  cVar9 = (char)in_RDX[1];
  if ((cVar9 == '\0') || (lVar8 == 0)) {
    if (lVar8 == 0) goto LAB_01bbc6b7;
LAB_01bbc663:
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar15 = (double)FUN_0125a280();
    uVar10 = (uint)(float)(dVar15 - param_2) & _DAT_02390140;
    uVar13 = (uint)((ulonglong)(dVar15 - param_2) >> 0x20) & _UNK_02390144;
    uStack_40 = extraout_XMM0_Dc & _UNK_02390148;
    uStack_3c = extraout_XMM0_Dd & _UNK_0239014c;
  }
  else {
    FUN_00d50b00();
    if (*in_RDX != 0) goto LAB_01bbc663;
LAB_01bbc6b7:
    uVar10 = 0;
    uVar13 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
  }
  local_48 = (double)CONCAT44(uVar13,uVar10);
  FUN_01a58dc0();
  dVar15 = DAT_02390108;
  (**(code **)(*local_80 + 0x9b8))(SUB84(param_2,0));
  lVar3 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    local_48 = (double)(float)local_48;
    local_68 = '\0';
    local_70 = 0;
    local_60 = lVar3;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar7 = -local_58._4_4_;
        }
        else {
          iVar7 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar7);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar7 = 0;
        }
        local_58 = CONCAT44(iVar7,(int)local_58);
      }
      lVar3 = (longlong)(int)local_58;
      iVar7 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar7);
      if (*(int *)(local_60 + 0xc) <= iVar7) break;
      local_70 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar3 * 8);
      uVar11 = FUN_01a58dc0();
      local_a0 = local_70;
      local_98 = '\0';
      (**(code **)(*local_b8 + 0xab0))(uVar11,&local_a0);
      local_38[0] = local_78[0];
      pcVar6 = local_38;
      pcVar4 = local_78;
      if (local_78[0] == '\0') {
        pcVar4 = pcVar6;
      }
      *pcVar4 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar5 = (pthread_key_t)pcVar6;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_80 == (longlong *)0x0) {
        uVar11 = SUB84(local_48,0);
        uVar14 = (undefined4)((ulonglong)local_48 >> 0x20);
      }
      else {
        (**(code **)(*local_80 + 0x4d8))();
        if ((extraout_XMM0_Db < fVar12) &&
           (fVar12 < extraout_XMM0_Db + (float)((ulonglong)dVar15 >> 0x20))) {
          pvVar2 = _pthread_getspecific(pVar5);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar15 = (double)FUN_0125a280();
          lVar3 = local_70;
          dVar15 = (double)(float)((uint)(float)(dVar15 - param_2) & _DAT_02390140);
          if ((lVar8 == 0) || (dVar15 < local_48)) {
            local_48 = dVar15;
            if (local_70 == lVar8) {
              if ((cVar9 == '\0') && (local_70 != 0)) {
                lVar3 = lVar8;
                if (local_68 != '\0') goto LAB_01bbc9a0;
                cVar9 = '\x01';
                FUN_00d50b00();
              }
            }
            else {
              if (local_68 == '\0') {
                if (local_70 != 0) {
                  FUN_00d50b00();
                }
                if ((cVar9 != '\0') && (lVar8 != 0)) {
                  FUN_00d50b20();
                  lVar8 = lVar3;
                  cVar9 = '\x01';
                  goto LAB_01bbc956;
                }
              }
              else {
                if ((cVar9 != '\0') && (lVar8 != 0)) {
                  FUN_00d50b20();
                }
LAB_01bbc9a0:
                local_68 = '\0';
              }
              lVar8 = lVar3;
              cVar9 = '\x01';
            }
          }
        }
LAB_01bbc956:
        if (local_38[0] == '\0') {
          uVar11 = SUB84(local_48,0);
          uVar14 = (undefined4)((ulonglong)local_48 >> 0x20);
        }
        else {
          FUN_00d50b20();
          uVar11 = SUB84(local_48,0);
          uVar14 = (undefined4)((ulonglong)local_48 >> 0x20);
        }
      }
      local_48 = (double)CONCAT44(uVar14,uVar11);
    }
    lVar3 = local_60;
    FUN_001159b0();
    in_ECX = (pthread_key_t)lVar3;
    FUN_00d50b20();
  }
  if (lVar8 == 0) {
    *(undefined1 *)(this + 1) = 0;
    goto LAB_01bbcbc6;
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01268dd0();
  lVar3 = local_70;
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01bbcab3;
    }
  }
  else if (local_70 != 0) {
LAB_01bbcab3:
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_01263cf0();
    if (cVar1 == '\0') {
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = (double)FUN_0125a280();
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_0125a280();
      if ((float)((uint)(float)(dVar15 - param_2) & _DAT_02390140) <
          (float)((uint)(float)(local_48 - param_2) & _DAT_02390140)) {
        *this = lVar3;
        *(undefined1 *)(this + 1) = 1;
        if (cVar9 == '\0') {
          return this;
        }
        FUN_00d50b20();
        return this;
      }
    }
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 1) = 0;
  if (cVar9 == '\0') {
    FUN_00d50b00();
  }
LAB_01bbcbc6:
  *this = lVar8;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @0080b970 (677 bytes) — logic_branch

{
  int iVar1;
  undefined4 uVar2;
  longlong local_30;
  
  if ((DAT_02732b88 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_02732ad8 = FUN_00335590();
    _DAT_02732ac0 = "MUDetectionPitchRelevanceInspector";
    _DAT_02732ac8 = 0xe0;
    _DAT_02732ad0 = FUN_00828b70;
    _DAT_02732ae0 = 0;
    uRam0000000002732ae8 = 0;
    _DAT_02732af0 = 0;
    _DAT_02732b68 = 0;
    uRam0000000002732b70 = 0;
    _DAT_02732b78 = 0;
    DAT_02732b7a = 1;
    _DAT_02732af8 = 0;
    uRam0000000002732b00 = 0;
    _DAT_02732b08 = 0;
    uRam0000000002732b10 = 0;
    _DAT_02732b18 = 0;
    uRam0000000002732b20 = 0;
    _DAT_02732b28 = 0;
    uRam0000000002732b30 = 0;
    _DAT_02732b38 = 0;
    uRam0000000002732b40 = 0;
    _DAT_02732b48 = 0;
    uRam0000000002732b50 = 0;
    _DAT_02732b58 = 0;
    uRam0000000002732b60 = 0;
    DAT_02732b83 = 0;
    _DAT_02732b7b = 0;
    ___cxa_guard_release();
  }
  if (DAT_02732b7b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_008258e0();
    if ((DAT_027323d0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      _DAT_0271fb70 = "MUTextFieldDragAndEditHandler";
      DAT_0271fb80 = 0;
      _DAT_0271fb78 = 0;
      ___cxa_guard_release();
    }
    FUN_00e87c40();
    FUN_00828be0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01c390e0();
    FUN_00e87920(uVar2,0);
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}




// ==================================================
// @01ba3960 (677 bytes) — logic_branch

{
  int iVar1;
  undefined4 uVar2;
  longlong local_30;
  
  if ((DAT_027e5368 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e52b8 = FUN_00335590();
    _DAT_027e52a0 = "MUSibilantBalanceInspector";
    _DAT_027e52a8 = 0xe0;
    _DAT_027e52b0 = FUN_01ba53d0;
    _DAT_027e52c0 = 0;
    uRam00000000027e52c8 = 0;
    _DAT_027e52d0 = 0;
    _DAT_027e5348 = 0;
    uRam00000000027e5350 = 0;
    _DAT_027e5358 = 0;
    DAT_027e535a = 1;
    _DAT_027e52d8 = 0;
    uRam00000000027e52e0 = 0;
    _DAT_027e52e8 = 0;
    uRam00000000027e52f0 = 0;
    _DAT_027e52f8 = 0;
    uRam00000000027e5300 = 0;
    _DAT_027e5308 = 0;
    uRam00000000027e5310 = 0;
    _DAT_027e5318 = 0;
    uRam00000000027e5320 = 0;
    _DAT_027e5328 = 0;
    uRam00000000027e5330 = 0;
    _DAT_027e5338 = 0;
    uRam00000000027e5340 = 0;
    DAT_027e5363 = 0;
    _DAT_027e535b = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e535b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_008258e0();
    if ((DAT_027323d0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      _DAT_0271fb70 = "MUTextFieldDragAndEditHandler";
      DAT_0271fb80 = 0;
      _DAT_0271fb78 = 0;
      ___cxa_guard_release();
    }
    FUN_00e87c40();
    FUN_01ba5440();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_0192ad80();
    FUN_00e87920(uVar2,0);
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}




// ==================================================
// @01bbc300 (602 bytes) — math_loop

{
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  ulonglong in_RCX;
  ulonglong uVar4;
  longlong lVar5;
  longlong *this;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  double dVar9;
  double local_78;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40;
  
  (**(code **)(&UNK_00001668 + *(longlong *)*param_2))();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328ff0();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 == 0) {
    *(undefined1 *)(this + 1) = 0;
  }
  else {
    if (*(int *)(local_70 + 0xc) < 1) {
      uVar4 = 0;
      lVar5 = 0;
    }
    else {
      local_78 = DAT_02411188;
      lVar8 = 0;
      lVar6 = 0;
      uVar2 = 0;
      do {
        uVar4 = uVar2;
        lVar1 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar8 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_014bb640();
        dVar9 = (double)((ulonglong)(dVar9 - param_1) & _DAT_023908f0);
        lVar5 = lVar6;
        if (dVar9 < local_78) {
          cVar7 = (char)uVar4;
          local_78 = dVar9;
          if (lVar6 == lVar1) {
            if ((cVar7 == '\0') && (lVar6 != 0)) {
              FUN_00d50b00();
              uVar4 = CONCAT71((int7)(in_RCX >> 8),1);
            }
          }
          else {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            uVar4 = CONCAT71((int7)(in_RCX >> 8),1);
            lVar5 = lVar1;
            if ((cVar7 != '\0') && (lVar6 != 0)) {
              FUN_00d50b20();
              uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
            }
          }
        }
        lVar8 = lVar8 + 1;
        in_RCX = uVar4;
        lVar6 = lVar5;
        uVar2 = uVar4 & 0xffffffff;
      } while ((int)lVar8 < *(int *)(local_70 + 0xc));
    }
    FUN_01a021a0();
    FUN_00d50b20();
    *(undefined1 *)(this + 1) = 0;
    if ((char)uVar4 != '\0') goto LAB_01bbc549;
    if (lVar5 != 0) {
      FUN_00d50b00();
      goto LAB_01bbc549;
    }
  }
  lVar5 = 0;
LAB_01bbc549:
  *this = lVar5;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @00831880 (600 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_008258e0();
  this[0x1a] = &DAT_0264a7b8;
  if (DAT_027323d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271fb70 = "MUTextFieldDragAndEditHandler";
      DAT_0271fb80 = 0;
      _DAT_0271fb78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *this = &DAT_02654840;
  this[0x17] = &DAT_02654f10;
  this[0x1a] = &DAT_02654f60;
  FUN_00831bb0();
  FUN_00831ee0();
  FUN_00832210();
  FUN_00832540();
  FUN_00832800();
  FUN_00832ac0();
  *(undefined4 *)(this + 0x21) = 0;
  if (DAT_02735010 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02734f60 = FUN_00335590();
      _DAT_02734f48 = "MUElementPitchInspector";
      _DAT_02734f50 = 0x110;
      _DAT_02734f58 = FUN_008317f0;
      _DAT_02734f68 = 0;
      uRam0000000002734f70 = 0;
      _DAT_02734f78 = 0;
      _DAT_02734ff0 = 0;
      uRam0000000002734ff8 = 0;
      _DAT_02735000 = 0;
      DAT_02735002 = 1;
      _DAT_02734f80 = 0;
      uRam0000000002734f88 = 0;
      _DAT_02734f90 = 0;
      uRam0000000002734f98 = 0;
      _DAT_02734fa0 = 0;
      uRam0000000002734fa8 = 0;
      _DAT_02734fb0 = 0;
      uRam0000000002734fb8 = 0;
      _DAT_02734fc0 = 0;
      uRam0000000002734fc8 = 0;
      _DAT_02734fd0 = 0;
      uRam0000000002734fd8 = 0;
      _DAT_02734fe0 = 0;
      uRam0000000002734fe8 = 0;
      DAT_0273500b = 0;
      _DAT_02735003 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02735003 == '\0') {
    FUN_00832d80();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @01ba5860 (583 bytes) — logic_branch

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_027e54a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e53f8 = FUN_00335590();
      _DAT_027e53e0 = "MUDetectionSibilantRangeInspector";
      _DAT_027e53e8 = 0xd8;
      _DAT_027e53f0 = FUN_01ba7b80;
      _DAT_027e5400 = 0;
      uRam00000000027e5408 = 0;
      _DAT_027e5410 = 0;
      _DAT_027e5488 = 0;
      uRam00000000027e5490 = 0;
      _DAT_027e5498 = 0;
      DAT_027e549a = 1;
      _DAT_027e5418 = 0;
      uRam00000000027e5420 = 0;
      _DAT_027e5428 = 0;
      uRam00000000027e5430 = 0;
      _DAT_027e5438 = 0;
      uRam00000000027e5440 = 0;
      _DAT_027e5448 = 0;
      uRam00000000027e5450 = 0;
      _DAT_027e5458 = 0;
      uRam00000000027e5460 = 0;
      _DAT_027e5468 = 0;
      uRam00000000027e5470 = 0;
      _DAT_027e5478 = 0;
      uRam00000000027e5480 = 0;
      DAT_027e54a3 = 0;
      _DAT_027e549b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e549b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_008258e0();
    if (DAT_027323d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271fb70 = "MUTextFieldDragAndEditHandler";
        DAT_0271fb80 = 0;
        _DAT_0271fb78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87c40();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b8c840();
    FUN_00e87920(uVar2,0);
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}




// ==================================================
// @01bba650 (583 bytes) — logic_branch

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_027e5618 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e5568 = FUN_00335590();
      _DAT_027e5550 = "MUVibratoInspector";
      _DAT_027e5558 = 0xd8;
      _DAT_027e5560 = FUN_01bbb9e0;
      _DAT_027e5570 = 0;
      uRam00000000027e5578 = 0;
      _DAT_027e5580 = 0;
      _DAT_027e55f8 = 0;
      uRam00000000027e5600 = 0;
      _DAT_027e5608 = 0;
      DAT_027e560a = 1;
      _DAT_027e5588 = 0;
      uRam00000000027e5590 = 0;
      _DAT_027e5598 = 0;
      uRam00000000027e55a0 = 0;
      _DAT_027e55a8 = 0;
      uRam00000000027e55b0 = 0;
      _DAT_027e55b8 = 0;
      uRam00000000027e55c0 = 0;
      _DAT_027e55c8 = 0;
      uRam00000000027e55d0 = 0;
      _DAT_027e55d8 = 0;
      uRam00000000027e55e0 = 0;
      _DAT_027e55e8 = 0;
      uRam00000000027e55f0 = 0;
      DAT_027e5613 = 0;
      _DAT_027e560b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e560b == '\0') {
    FUN_00827f80();
    FUN_00e87760();
    FUN_00018440();
    FUN_00d50c00();
    FUN_008258e0();
    if (DAT_027323d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271fb70 = "MUTextFieldDragAndEditHandler";
        DAT_0271fb80 = 0;
        _DAT_0271fb78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87c40();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b8d300();
    FUN_00e87920(uVar2,0);
    FUN_000a2890();
    FUN_000a2890();
  }
  return;
}




// ==================================================
// @0082f7f0 (558 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_008258e0();
  this[0x1a] = &DAT_0264a7b8;
  if (DAT_027323d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271fb70 = "MUTextFieldDragAndEditHandler";
      DAT_0271fb80 = 0;
      _DAT_0271fb78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *this = &DAT_02655728;
  this[0x17] = &DAT_02655e10;
  this[0x1a] = &DAT_02655e60;
  FUN_0082fac0();
  FUN_0082fd80();
  FUN_008300b0();
  FUN_00830370();
  *(undefined4 *)(this + 0x1f) = 0;
  if (DAT_02734b18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02734a68 = FUN_00335590();
      _DAT_02734a50 = "MUElementSinglePercentInspector";
      _DAT_02734a58 = 0x100;
      _DAT_02734a60 = FUN_0082f770;
      _DAT_02734a70 = 0;
      uRam0000000002734a78 = 0;
      _DAT_02734a80 = 0;
      _DAT_02734af8 = 0;
      uRam0000000002734b00 = 0;
      _DAT_02734b08 = 0;
      DAT_02734b0a = 1;
      _DAT_02734a88 = 0;
      uRam0000000002734a90 = 0;
      _DAT_02734a98 = 0;
      uRam0000000002734aa0 = 0;
      _DAT_02734aa8 = 0;
      uRam0000000002734ab0 = 0;
      _DAT_02734ab8 = 0;
      uRam0000000002734ac0 = 0;
      _DAT_02734ac8 = 0;
      uRam0000000002734ad0 = 0;
      _DAT_02734ad8 = 0;
      uRam0000000002734ae0 = 0;
      _DAT_02734ae8 = 0;
      uRam0000000002734af0 = 0;
      DAT_02734b13 = 0;
      _DAT_02734b0b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02734b0b == '\0') {
    FUN_00830630();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @008308f0 (512 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_008258e0();
  this[0x1a] = &DAT_0264a7b8;
  if (DAT_027323d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271fb70 = "MUTextFieldDragAndEditHandler";
      DAT_0271fb80 = 0;
      _DAT_0271fb78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *this = &DAT_02652f30;
  this[0x17] = &DAT_026535f8;
  this[0x1a] = &DAT_02653648;
  FUN_00830b50();
  FUN_00830e80();
  *(undefined4 *)(this + 0x1d) = 0;
  if (DAT_02734d50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02734ca0 = FUN_00335590();
      _DAT_02734c88 = "MUElementFormantInspector";
      _DAT_02734c90 = 0xf8;
      _DAT_02734c98 = FUN_00830870;
      _DAT_02734ca8 = 0;
      uRam0000000002734cb0 = 0;
      _DAT_02734cb8 = 0;
      _DAT_02734d30 = 0;
      uRam0000000002734d38 = 0;
      _DAT_02734d40 = 0;
      DAT_02734d42 = 1;
      _DAT_02734cc0 = 0;
      uRam0000000002734cc8 = 0;
      _DAT_02734cd0 = 0;
      uRam0000000002734cd8 = 0;
      _DAT_02734ce0 = 0;
      uRam0000000002734ce8 = 0;
      _DAT_02734cf0 = 0;
      uRam0000000002734cf8 = 0;
      _DAT_02734d00 = 0;
      uRam0000000002734d08 = 0;
      _DAT_02734d10 = 0;
      uRam0000000002734d18 = 0;
      _DAT_02734d20 = 0;
      uRam0000000002734d28 = 0;
      DAT_02734d4b = 0;
      _DAT_02734d43 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02734d43 == '\0') {
    FUN_00831140();
    FUN_00e87980();
  }
  FUN_008312d0();
  return;
}




// ==================================================
// @01ba3cc0 (505 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b5b20 == 0) || (DAT_028b5b29 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e5298;
    if (DAT_028b5b20 == 0) {
      if (DAT_027e5298 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b5b20;
      if (DAT_028b5b20 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b5b20 != 0;
        DAT_028b5b20 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b5b28 == '\0')) {
        DAT_028b5b28 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b5b29 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b5b29 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b5b20 == 0) {
      lVar3 = 0;
      goto LAB_01ba3e79;
    }
  }
  lVar3 = DAT_028b5b20;
  FUN_00d50b00();
LAB_01ba3e79:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01ba5af0 (505 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b5b30 == 0) || (DAT_028b5b39 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e53d8;
    if (DAT_028b5b30 == 0) {
      if (DAT_027e53d8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b5b30;
      if (DAT_028b5b30 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b5b30 != 0;
        DAT_028b5b30 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b5b38 == '\0')) {
        DAT_028b5b38 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b5b39 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b5b39 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b5b30 == 0) {
      lVar3 = 0;
      goto LAB_01ba5ca9;
    }
  }
  lVar3 = DAT_028b5b30;
  FUN_00d50b00();
LAB_01ba5ca9:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01bba8e0 (505 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b5cb8 == 0) || (DAT_028b5cc1 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e5548;
    if (DAT_028b5cb8 == 0) {
      if (DAT_027e5548 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b5cb8;
      if (DAT_028b5cb8 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b5cb8 != 0;
        DAT_028b5cb8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b5cc0 == '\0')) {
        DAT_028b5cc0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b5cc1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b5cc1 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b5cb8 == 0) {
      lVar3 = 0;
      goto LAB_01bbaa99;
    }
  }
  lVar3 = DAT_028b5cb8;
  FUN_00d50b00();
LAB_01bbaa99:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01bbbec0 (505 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b5cc8 == 0) || (DAT_028b5cd1 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e0810;
    if (DAT_028b5cc8 == 0) {
      if (DAT_027e0810 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b5cc8;
      if (DAT_028b5cc8 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b5cc8 != 0;
        DAT_028b5cc8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b5cd0 == '\0')) {
        DAT_028b5cd0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b5cd1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b5cd1 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b5cc8 == 0) {
      lVar3 = 0;
      goto LAB_01bbc079;
    }
  }
  lVar3 = DAT_028b5cc8;
  FUN_00d50b00();
LAB_01bbc079:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01ba4ed0 (500 bytes) — math_loop

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong local_48;
  char local_40;
  
  FUN_01a58dc0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01ba4f27;
    FUN_00d50b00();
  }
  else if (local_48 == 0) {
LAB_01ba4f27:
    plVar1 = (longlong *)*param_2;
    FUN_000914a0();
    if (plVar1 == (longlong *)0x0) {
LAB_01ba4f53:
      param_2 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01ba4f53;
    }
    lVar2 = *param_2;
    if (lVar2 != 0) {
      cVar3 = (char)param_2[1];
      if (cVar3 != '\0') {
        FUN_00d50b00();
      }
      goto joined_r0x01ba4f87;
    }
  }
  cVar3 = '\x01';
  lVar2 = local_48;
joined_r0x01ba4f87:
  if (lVar2 != 0) {
    FUN_019c1990();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if (local_48 != 0) {
      if (0 < *(int *)(local_48 + 0xc)) {
        lVar6 = 0;
        do {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_01334f30();
        } while ((cVar4 == '\0') && (lVar6 = lVar6 + 1, lVar6 < *(int *)(local_48 + 0xc)));
      }
      FUN_00d50b20();
    }
  }
  FUN_01e262d0();
  if ((cVar3 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return;
}



