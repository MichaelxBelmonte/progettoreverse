// Function: FUN_01c9b940
// Address: 01c9b940
// Size: 5097 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void FUN_01c9b940(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t *******ppppppplVar4;
  int64_t *****ppppplVar5;
  int64_t *****ppppplVar6;
  bool bVar7;
  int64_t *******ppppppplVar8;
  char cVar9;
  bool bVar10;
  void* pVar11;
  void* pVar12;
  void* pVar13;
  int64_t lVar14;
  uint64_t uVar15;
  void *pvVar16;
  void* pVar17;
  int64_t **pplVar18;
  int64_t *******ppppppplVar19;
  int64_t ******pppppplVar20;
  int iVar21;
  int64_t *arg1;
  uint64_t uVar22;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  uint8_t local_118;
  int64_t local_110;
  int local_108;
  int iStack_104;
  int local_100;
  int64_t *****local_f8;
  char local_f0;
  int64_t *******local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *******local_c8;
  char local_c0;
  int64_t *******local_b8;
  uint64_t local_b0;
  int local_a8;
  int64_t *******local_a0;
  char local_98;
  int64_t *******local_90;
  uint64_t local_88;
  int local_80;
  uint64_t local_78;
  int64_t *******local_70;
  int64_t *****local_68;
  uint64_t local_60;
  int64_t *******local_58;
  int64_t *******local_50;
  int64_t *******local_48;
  char local_40;
  int64_t *******local_38;
  
  lVar14 = *(int64_t *)(*arg1 + 0x20);
  if (lVar14 != 0) {
    FUN_00d50b00();
    local_118 = 0;
    local_120 = (int64_t *)0x0;
    local_110 = lVar14;
    local_108 = -1;
    iStack_104 = 0;
    local_100 = 0;
    bVar10 = false;
    local_78 = param_2;
LAB_01c9b9c0:
    if (iStack_104 != 0) {
      if (iStack_104 < 1) {
        iStack_104 = -iStack_104;
      }
      else {
        local_108 = local_108 - iStack_104;
        FUN_00d23690();
        local_100 = local_100 + iStack_104;
        iStack_104 = 0;
      }
    }
    lVar14 = (int64_t)local_108;
    local_108 = local_108 + 1;
    if (local_108 < *(int *)(local_110 + 0xc)) {
      plVar3 = *(int64_t **)(*(int64_t *)(local_110 + 0x10) + 8 + lVar14 * 8);
      local_120 = plVar3;
      if ((g_026fdd70 == '\0') && (iVar21 = ___cxa_guard_acquire(), iVar21 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        ___cxa_guard_release();
      }
      pplVar18 = (int64_t **)&g_02802688;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x360))();
        cVar9 = FUN_00e85ea0();
        pplVar18 = &local_120;
        if (cVar9 == '\0') {
          pplVar18 = (int64_t **)&g_02802688;
        }
      }
      ppppppplVar19 = (int64_t *******)*pplVar18;
      local_70 = ppppppplVar19;
      if (*(char *)(pplVar18 + 1) == '\0') {
        if (ppppppplVar19 != (int64_t *******)0x0) {
          FUN_00d50b00();
          goto LAB_01c9baaa;
        }
LAB_01c9bb10:
        bVar7 = true;
      }
      else {
        *(void*)(pplVar18 + 1) = 0;
        if (ppppppplVar19 == (int64_t *******)0x0) goto LAB_01c9bb10;
LAB_01c9baaa:
        pvVar16 = _pthread_getspecific((void*)pplVar18);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb480();
        ppppppplVar19 = local_c8;
        if (local_c0 == '\0') {
          if (local_c8 != (int64_t *******)0x0) {
            FUN_00d50b00();
            if ((local_c0 != '\0') && (local_c8 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01c9bb50;
          }
        }
        else if (local_c8 != (int64_t *******)0x0) {
LAB_01c9bb50:
          local_c0 = '\0';
          local_c8 = (int64_t *******)0x0;
          local_b8 = ppppppplVar19;
          local_b0 = 0xffffffff;
          local_a8 = 0;
          local_b0._4_4_ = 0;
          local_60 = 0;
          local_58 = (int64_t *******)0x0;
          local_50 = ppppppplVar19;
          do {
            if (local_b0._4_4_ != 0) {
              if (local_b0._4_4_ < 1) {
                iVar21 = -local_b0._4_4_;
              }
              else {
                iVar21 = (int)local_b0 - local_b0._4_4_;
                local_b0 = CONCAT44(local_b0._4_4_,iVar21);
                FUN_00d23690();
                local_a8 = local_a8 + local_b0._4_4_;
                iVar21 = 0;
              }
              local_b0 = CONCAT44(iVar21,(int)local_b0);
            }
            lVar14 = (int64_t)(int)local_b0;
            iVar21 = (int)local_b0 + 1;
            local_b0 = CONCAT44(local_b0._4_4_,iVar21);
            if (*(int *)((int64_t)local_b8 + 0xc) <= iVar21) {
              bVar7 = true;
              ppppppplVar19 = local_b8;
              goto LAB_01c9c2b0;
            }
            ppppppplVar4 = (int64_t *******)local_b8[2][lVar14 + 1];
            local_c8 = ppppppplVar4;
            local_a0 = ppppppplVar4;
            if ((g_026fdd70 == '\0') && (iVar21 = ___cxa_guard_acquire(), iVar21 != 0)) {
              g_026e3238 = FUN_00115af0();
              g_026e3220 = "MUAudioFileSource";
              g_026e3228 = 0xa0;
              g_026e3230 = FUN_00136df0;
              g_026e3240 = 0;
              ram_00000000026e3248 = 0;
              g_026e3250 = 0;
              ram_00000000026e3258 = 0;
              g_026e3260 = 0;
              ram_00000000026e3268 = 0;
              g_026e3270 = 0;
              ram_00000000026e3278 = 0;
              g_026e3280 = 0;
              ram_00000000026e3288 = 0;
              g_026e3290 = 0;
              ram_00000000026e3298 = 0;
              g_026e32a0 = 0;
              ram_00000000026e32a8 = 0;
              g_026e32b0 = 0;
              ram_00000000026e32b8 = 0;
              g_026e32c0 = 0;
              ram_00000000026e32c8 = 0;
              g_026e32d0 = 0;
              ram_00000000026e32d8 = 0;
              g_026e32e0 = 0;
              ___cxa_guard_release();
            }
            ppppppplVar19 = (int64_t *******)&g_02802688;
            if (ppppppplVar4 != (int64_t *******)0x0) {
              (*(*ppppppplVar4)[0x6c])();
              cVar9 = FUN_00e85ea0();
              ppppppplVar19 = (int64_t *******)&local_a0;
              if (cVar9 == '\0') {
                ppppppplVar19 = (int64_t *******)&g_02802688;
              }
            }
            if (*ppppppplVar19 != (int64_t ******)0x0) {
              pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
              if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                ppppppplVar19 = local_70;
              }
              FUN_0123abe0();
              ppppppplVar4 = local_a0;
              pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0123abe0();
              ppppppplVar8 = local_48;
              local_e0 = 0;
              if (local_40 == '\0') {
                if (local_48 != (int64_t *******)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              local_e0 = '\x01';
              local_e8 = ppppppplVar8;
              cVar9 = (*(*ppppppplVar4)[10])();
              if ((local_e0 != '\0') && (local_e8 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              if ((local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
                FUN_00d50b20();
              }
              ppppppplVar4 = local_58;
              if (cVar9 != '\0') {
                local_38 = local_c8;
                if (local_c8 == local_58) {
                  if (((char)local_60 != '\0') || (local_c8 == (int64_t *******)0x0)) {
                    local_68 = (int64_t *****)CONCAT71(local_68._1_7_,(char)local_60);
                    local_38 = local_58;
                    goto joined_r0x01c9be85;
                  }
                  if (local_c0 != '\0') {
                    local_38 = local_58;
                    goto LAB_01c9be27;
                  }
                  local_68 = (int64_t *****)CONCAT71(local_68._1_7_,1);
                  FUN_00d50b00();
                  local_38 = ppppppplVar4;
                  if (ppppppplVar4 != (int64_t *******)0x0) goto LAB_01c9be87;
LAB_01c9be39:
                  local_58 = (int64_t *******)0x0;
                }
                else {
                  if (local_c0 == '\0') {
                    if (local_c8 != (int64_t *******)0x0) {
                      FUN_00d50b00();
                    }
                    local_68 = (int64_t *****)CONCAT71(local_68._1_7_,1);
                    if (((char)local_60 != '\0') && (local_58 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (((char)local_60 != '\0') && (local_58 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
LAB_01c9be27:
                    local_c0 = '\0';
                    local_68 = (int64_t *****)CONCAT71(local_68._1_7_,1);
                  }
joined_r0x01c9be85:
                  if (local_38 == (int64_t *******)0x0) goto LAB_01c9be39;
LAB_01c9be87:
                  pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                  if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    ppppppplVar19 = local_70;
                  }
                  FUN_0124c6e0();
                  iVar21 = *(int *)((int64_t)local_a0 + 0xc);
                  pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                  if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    ppppppplVar19 = local_38;
                  }
                  uVar15 = FUN_0124c6e0();
                  iVar1 = *(int *)((int64_t)local_48 + 0xc);
                  if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                    uVar15 = FUN_00d50b20();
                  }
                  if ((local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
                    uVar15 = FUN_00d50b20();
                  }
                  if (iVar21 != iVar1) goto LAB_01c9c281;
                  pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                  if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    ppppppplVar19 = local_38;
                  }
                  uVar15 = FUN_0124c6e0();
                  uVar2 = *(uint *)((int64_t)local_a0 + 0xc);
                  if ((local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
                    uVar15 = FUN_00d50b20();
                  }
                  if ((int)uVar2 < 1) {
                    bVar7 = false;
                    local_60 = CONCAT71((int7)((uint64_t)uVar15 >> 8),local_68._0_1_);
                    local_58 = local_38;
                    goto LAB_01c9c2b0;
                  }
                  bVar7 = true;
                  uVar22 = 0;
                  do {
                    pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                    if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                      ppppppplVar19 = local_38;
                    }
                    FUN_0124c6e0();
                    pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                    if (pvVar16 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    pvVar16 = _pthread_getspecific((void*)ppppppplVar19);
                    if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                      ppppppplVar19 = local_70;
                    }
                    FUN_0124c6e0();
                    ppppplVar5 = local_48[2][uVar22];
                    local_f0 = 0;
                    if (ppppplVar5 != (int64_t *****)0x0) {
                      FUN_00d50b00();
                    }
                    local_f0 = '\x01';
                    local_f8 = ppppplVar5;
                    cVar9 = FUN_013d8180();
                    if ((local_f0 != '\0') && (local_f8 != (int64_t *****)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
                      FUN_00d50b20();
                    }
                    uVar15 = 0;
                    if (cVar9 == '\0') {
                      bVar7 = false;
                    }
                    uVar22 = uVar22 + 1;
                  } while (uVar2 != uVar22);
                  local_58 = local_38;
                  if (bVar7) goto LAB_01c9c281;
                }
                local_60 = CONCAT71((int7)((uint64_t)local_58 >> 8),local_68._0_1_);
              }
            }
          } while( true );
        }
        bVar7 = false;
      }
      pVar17 = (void*)pplVar18;
      local_58 = (int64_t *******)0x0;
      local_60 = 0;
      goto LAB_01c9c2d0;
    }
    lVar14 = local_110;
    FUN_00115e00();
    pVar17 = (void*)lVar14;
    FUN_00d50b20();
    if (bVar10) {
      pvVar16 = _pthread_getspecific(pVar17);
      if (pvVar16 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_140 = (int64_t *)0x0;
      local_138 = '\0';
      local_130 = (int64_t *)0x0;
      local_128 = '\0';
      FUN_012cc0c0(&local_130,&local_140,1,0);
      if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
        (**(code **)(*local_130 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
        (**(code **)(*local_140 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  return;
LAB_01c9c281:
  bVar7 = false;
  local_60 = CONCAT71((int7)((uint64_t)uVar15 >> 8),local_68._0_1_);
  local_58 = local_38;
LAB_01c9c2b0:
  pVar17 = (void*)ppppppplVar19;
  FUN_00136d50();
  FUN_00d50b20();
  if (bVar7) {
    bVar7 = false;
LAB_01c9c2d0:
    pvVar16 = _pthread_getspecific(pVar17);
    if (pvVar16 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb4b0();
    bVar10 = true;
  }
  else {
    ppppppplVar19 = *(int64_t ********)(*arg1 + 0x10);
    if (ppppppplVar19 == (int64_t *******)0x0) {
      bVar7 = false;
    }
    else {
      FUN_00d50b00();
      local_c0 = '\0';
      local_c8 = (int64_t *******)0x0;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_b0._4_4_ = 0;
      local_b8 = ppppppplVar19;
      while( true ) {
        if (local_b0._4_4_ != 0) {
          if (local_b0._4_4_ < 1) {
            iVar21 = -local_b0._4_4_;
          }
          else {
            iVar21 = (int)local_b0 - local_b0._4_4_;
            local_b0 = CONCAT44(local_b0._4_4_,iVar21);
            FUN_00d23690();
            local_a8 = local_a8 + local_b0._4_4_;
            iVar21 = 0;
          }
          local_b0 = CONCAT44(iVar21,(int)local_b0);
        }
        lVar14 = (int64_t)(int)local_b0;
        iVar21 = (int)local_b0 + 1;
        local_b0 = CONCAT44(local_b0._4_4_,iVar21);
        if (*(int *)((int64_t)local_b8 + 0xc) <= iVar21) break;
        local_c8 = (int64_t *******)local_b8[2][lVar14 + 1];
        pvVar16 = _pthread_getspecific((void*)local_b8[2]);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        ppppppplVar19 = local_a0;
        if (local_98 == '\0') {
          if (local_a0 != (int64_t *******)0x0) {
            FUN_00d50b00();
            if ((local_98 != '\0') && (local_a0 != (int64_t *******)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01c9c500;
          }
        }
        else if (local_a0 != (int64_t *******)0x0) {
LAB_01c9c500:
          local_98 = '\0';
          local_a0 = (int64_t *******)0x0;
          local_90 = ppppppplVar19;
          local_88 = 0xffffffff;
          local_80 = 0;
          local_88._4_4_ = 0;
          while( true ) {
            if (local_88._4_4_ != 0) {
              if (local_88._4_4_ < 1) {
                iVar21 = -local_88._4_4_;
              }
              else {
                iVar21 = (int)local_88 - local_88._4_4_;
                local_88 = CONCAT44(local_88._4_4_,iVar21);
                FUN_00d23690();
                local_80 = local_80 + local_88._4_4_;
                iVar21 = 0;
              }
              local_88 = CONCAT44(iVar21,(int)local_88);
            }
            lVar14 = (int64_t)(int)local_88;
            iVar21 = (int)local_88 + 1;
            local_88 = CONCAT44(local_88._4_4_,iVar21);
            if (*(int *)((int64_t)local_90 + 0xc) <= iVar21) break;
            pppppplVar20 = local_90[2];
            local_a0 = (int64_t *******)pppppplVar20[lVar14 + 1];
            pvVar16 = _pthread_getspecific((void*)pppppplVar20);
            pVar17 = (void*)pppppplVar20;
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            if (local_40 == '\0') {
              if (local_48 != (int64_t *******)0x0) {
                local_38 = local_48;
                FUN_00d50b00();
                if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01c9c630;
              }
            }
            else {
              local_38 = local_48;
              if (local_48 != (int64_t *******)0x0) {
LAB_01c9c630:
                pvVar16 = _pthread_getspecific(pVar17);
                if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pVar17 = (void*)local_38;
                }
                FUN_013dd710();
                ppppppplVar19 = local_48;
                if ((((local_40 == '\0') && (local_48 != (int64_t *******)0x0)) &&
                    (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                pvVar16 = _pthread_getspecific(pVar17);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013df480();
                local_50 = local_48;
                if (((local_40 == '\0') && (local_48 != (int64_t *******)0x0)) &&
                   ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (int64_t *******)0x0)))) {
                  FUN_00d50b20();
                }
                pvVar16 = _pthread_getspecific(pVar17);
                if (pvVar16 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013df790();
                local_48 = local_38;
                local_40 = '\0';
                pVar11 = FUN_00d23d20();
                if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_d0 != '\0') && (local_d8 != 0)) {
                  FUN_00d50b20();
                }
                pvVar16 = _pthread_getspecific(pVar17);
                if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pVar17 = (void*)local_50;
                }
                FUN_01327a50();
                local_40 = '\0';
                local_48 = ppppppplVar19;
                pVar12 = FUN_00d23d20();
                if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_d0 != '\0') && (local_d8 != 0)) {
                  FUN_00d50b20();
                }
                pvVar16 = _pthread_getspecific(pVar17);
                if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  pVar17 = (void*)local_70;
                }
                FUN_0124c6e0();
                local_48 = local_50;
                local_40 = '\0';
                pVar13 = FUN_00d23d20();
                if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_d0 != '\0') && (local_d8 != 0)) {
                  FUN_00d50b20();
                }
                if (pVar13 != 0xffffffff) {
                  pvVar16 = _pthread_getspecific(pVar17);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0124c6e0();
                  lVar14 = (int64_t)(int)pVar13;
                  local_68 = local_48[2][lVar14];
                  if (local_68 != (int64_t *****)0x0) {
                    FUN_00d50b00();
                    pVar13 = (void*)lVar14;
                  }
                  if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar16 = _pthread_getspecific(pVar13);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01327a50();
                  lVar14 = (int64_t)(int)pVar12;
                  ppppplVar5 = local_48[2][lVar14];
                  if (ppppplVar5 != (int64_t *****)0x0) {
                    FUN_00d50b00();
                    pVar12 = (void*)lVar14;
                  }
                  if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar16 = _pthread_getspecific(pVar12);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013df790();
                  lVar14 = (int64_t)(int)pVar11;
                  ppppplVar6 = local_48[2][lVar14];
                  if (ppppplVar6 != (int64_t *****)0x0) {
                    FUN_00d50b00();
                    pVar11 = (void*)lVar14;
                  }
                  if ((local_40 != '\0') && (local_48 != (int64_t *******)0x0)) {
                    FUN_00d50b20();
                  }
                  pvVar16 = _pthread_getspecific(pVar11);
                  if ((pvVar16 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                    pVar11 = (void*)local_38;
                  }
                  FUN_013ddad0();
                  pvVar16 = _pthread_getspecific(pVar11);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_011ef3f0();
                  pvVar16 = _pthread_getspecific(pVar11);
                  if (pvVar16 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd9a0();
                  if (ppppplVar6 != (int64_t *****)0x0) {
                    FUN_00d50b20();
                  }
                  if (ppppplVar5 != (int64_t *****)0x0) {
                    FUN_00d50b20();
                  }
                  if (local_68 != (int64_t *****)0x0) {
                    FUN_00d50b20();
                  }
                }
                if (local_50 != (int64_t *******)0x0) {
                  FUN_00d50b20();
                }
                if (ppppppplVar19 != (int64_t *******)0x0) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
      FUN_00d50b20();
      bVar7 = false;
    }
  }
  if (((char)local_60 != '\0') && (local_58 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar7) {
    FUN_00d50b20();
  }
  goto LAB_01c9b9c0;
}

