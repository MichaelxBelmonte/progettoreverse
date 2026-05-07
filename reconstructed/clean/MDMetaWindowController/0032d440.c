// Function: FUN_0032d440
// Address: 0032d440
// Size: 10036 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "MUAudioFileSource"

void FUN_0032d440(void)

{
  void*puVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  void* pVar5;
  int iVar6;
  int64_t lVar7;
  void *pvVar8;
  code *pcVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  char *pcVar12;
  code **ppcVar13;
  int64_t lVar14;
  undefined7 uVar17;
  uint64_t uVar15;
  code *pcVar16;
  code *this_ptr;
  code *pcVar18;
  byte unaff_R13B;
  int iVar19;
  code *pcVar20;
  bool bVar21;
  uint32_t uVar22;
  int64_t local_220;
  char local_218;
  int64_t local_1b8;
  char local_1b0;
  code *local_1a8;
  char local_1a0;
  code *local_198;
  char local_190;
  code *local_188;
  char local_180;
  code *local_178;
  char local_170;
  code *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  code *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  code *local_108;
  char local_100;
  code *local_f8;
  char local_f0;
  code *local_e8;
  char local_e0;
  code *local_d8;
  char local_d0;
  uint64_t local_c8;
  code *local_c0;
  uint64_t local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  code *local_78;
  char local_70 [8];
  code *local_68;
  int local_60;
  int iStack_5c;
  int local_58;
  uint64_t local_50;
  code *local_48;
  char local_40;
  byte local_38;
  
  FUN_01e561b0();
  if ((local_70[0] != '\0') && (local_78 != 0x0)) {
    FUN_00d50b20();
  }
  pcVar20 = g_026f6de0;
  if (local_78 == 0x0) {
    return;
  }
  if (g_026f6de0 != 0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  FUN_0071a120();
  if ((((local_70[0] == '\0') && (local_78 != 0x0)) && (FUN_00d50b00(), local_70[0] != '\0')
      ) && (local_78 != 0x0)) {
    FUN_00d50b20();
  }
  local_48 = pcVar20;
  local_40 = '\0';
  FUN_000175c0();
  if (local_70[0] == '\0') {
    if (((local_78 != 0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
       (local_78 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70[0] = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0x0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0x0) {
    local_70[0] = '\0';
    unaff_R13B = FUN_00c70bc0();
    if ((local_70[0] != '\0') && (local_78 != 0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  local_38 = local_78 != 0x0;
  if (pcVar20 != 0x0) {
    FUN_00d50b20();
  }
  FUN_003322a0();
  if ((local_70[0] == '\0') && (local_78 != 0x0)) {
    FUN_00d50b00();
  }
  local_b0 = local_78;
  local_38 = local_38 & unaff_R13B;
  if (*(int64_t *)(this_ptr + 0x110) != 0) {
    FUN_00d50b00();
    local_90 = '\0';
    local_48 = this_ptr;
    do {
      pcVar20 = local_48;
      (**(code **)(*(int64_t *)local_48 + 0x370))();
      if (local_78 == pcVar20) {
        if (((local_90 == '\0') && (local_78 != 0x0)) && (local_70[0] != '\0'))
        goto LAB_0032d6ad;
      }
      else {
        local_48 = local_78;
        pcVar20 = local_78;
        if (local_70[0] == '\0') {
          if (local_90 == '\0') {
            pcVar12 = &local_90;
          }
          else {
            FUN_00d50b20();
            pcVar12 = &local_90;
          }
        }
        else {
          if (local_90 != '\0') {
            FUN_00d50b20();
          }
LAB_0032d6ad:
          local_90 = '\x01';
          pcVar12 = local_70;
        }
        *pcVar12 = '\0';
      }
      if ((local_70[0] != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      if ((g_026fddb0 == '\0') && (iVar19 = ___cxa_guard_acquire(), iVar19 != 0)) {
        g_026e0ab8 = FUN_00015ff0();
        g_026e0aa0 = "MDMetaWindowController";
        g_026e0aa8 = 0x198;
        g_026e0ab0 = FUN_0006dea0;
        g_026e0ac0 = 0;
        ram_00000000026e0ac8 = 0;
        g_026e0ad0 = 0;
        g_026e0b48 = 0;
        ram_00000000026e0b50 = 0;
        g_026e0b58 = 0;
        g_026e0b5a = 1;
        g_026e0ad8 = 0;
        ram_00000000026e0ae0 = 0;
        g_026e0ae8 = 0;
        ram_00000000026e0af0 = 0;
        g_026e0af8 = 0;
        ram_00000000026e0b00 = 0;
        g_026e0b08 = 0;
        ram_00000000026e0b10 = 0;
        g_026e0b18 = 0;
        ram_00000000026e0b20 = 0;
        g_026e0b28 = 0;
        ram_00000000026e0b30 = 0;
        g_026e0b38 = 0;
        ram_00000000026e0b40 = 0;
        g_026e0b63 = 0;
        g_026e0b5b = 0;
        ___cxa_guard_release();
      }
      ppcVar13 = &g_02802688;
      if (pcVar20 != 0x0) {
        (**(code **)(*(int64_t *)pcVar20 + 0x360))();
        cVar4 = FUN_00e85ea0();
        ppcVar13 = &local_48;
        if (cVar4 == '\0') {
          ppcVar13 = &g_02802688;
        }
      }
      pcVar20 = local_48;
      if (*ppcVar13 != 0x0) {
        if ((local_90 == '\0') && (local_48 != 0x0)) {
          FUN_00d50b00();
        }
        goto LAB_0032d845;
      }
    } while (local_48 != 0x0);
    pcVar20 = 0x0;
LAB_0032d845:
    FUN_00d50b20();
    bVar21 = true;
    if (pcVar20 == 0x0) {
LAB_0032d8b9:
      local_b8 = 0;
LAB_0032d8c5:
      pcVar9 = 0x0;
    }
    else {
      FUN_0063f230();
      if ((local_70[0] != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      if (local_78 == 0x0) goto LAB_0032d8b9;
      FUN_0063f230();
      FUN_0021a630();
      if (local_78 == 0x0) {
        pcVar9 = 0x0;
        uVar15 = 0;
      }
      else {
        uVar17 = (undefined7)((uint64_t)local_78 >> 8);
        pcVar9 = local_78;
        if (local_70[0] == '\0') {
          FUN_00d50b00();
          uVar15 = CONCAT71(uVar17,1);
          if ((local_70[0] != '\0') && (local_78 != 0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70[0] = '\0';
          uVar15 = CONCAT71(uVar17,1);
        }
      }
      if ((local_40 != '\0') && (local_48 != 0x0)) {
        FUN_00d50b20();
      }
      local_b8 = uVar15;
      if (pcVar9 == 0x0) goto LAB_0032d8c5;
      (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                  *(int64_t *)pcVar9 + 8))();
      bVar21 = false;
    }
    local_c0 = pcVar9;
    if ((*(int *)(local_b0 + 0xc) < 1) || (cVar4 = FUN_0028b150(), cVar4 == '\0')) {
      (**(code **)(**(int64_t **)(this_ptr + 0x110) + 0x998))();
    }
    else {
      local_70[0] = '\0';
      local_78 = 0x0;
      local_68 = local_b0;
      local_60 = -1;
      iStack_5c = 0;
      local_58 = 0;
      while( true ) {
        lVar7 = (int64_t)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(local_68 + 0xc) <= local_60) break;
        local_78 = *(code **)(*(int64_t *)(local_68 + 0x10) + 8 + lVar7 * 8);
        pvVar8 = _pthread_getspecific((void*)*(int64_t *)(local_68 + 0x10));
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_0126cd60();
        if (cVar4 != '\0') break;
        if (iStack_5c != 0) {
          if (iStack_5c < 1) {
            iStack_5c = -iStack_5c;
          }
          else {
            local_60 = local_60 - iStack_5c;
            FUN_00d23690();
            local_58 = local_58 + iStack_5c;
            iStack_5c = 0;
          }
        }
      }
      FUN_001159b0();
      (**(code **)(**(int64_t **)(this_ptr + 0x110) + 0x998))();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x110) + 0x918))();
    if ((char)local_b8 != '\0' && !bVar21) {
      FUN_00d50b20();
    }
    if (pcVar20 != 0x0) {
      FUN_00d50b20();
    }
  }
  pcVar20 = g_026e3e60;
  plVar11 = *(int64_t **)(this_ptr + 0x130);
  if (plVar11 != (int64_t *)0x0) {
    if (*(int *)(local_b0 + 0xc) == 0) {
      if (g_026e3e60 != 0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar11 + 0x968))();
      if (pcVar20 != 0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_70[0] = '\0';
      local_78 = 0x0;
      local_68 = local_b0;
      local_60 = -1;
      iStack_5c = 0;
      local_58 = 0;
      local_b8 = local_b8 & 0xffffffff00000000;
      while( true ) {
        if (iStack_5c != 0) {
          if (iStack_5c < 1) {
            iStack_5c = -iStack_5c;
          }
          else {
            local_60 = local_60 - iStack_5c;
            FUN_00d23690();
            local_58 = local_58 + iStack_5c;
            iStack_5c = 0;
          }
        }
        lVar7 = (int64_t)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(local_68 + 0xc) <= local_60) break;
        lVar14 = *(int64_t *)(local_68 + 0x10);
        local_78 = *(code **)(lVar14 + 8 + lVar7 * 8);
        pvVar8 = _pthread_getspecific((void*)lVar14);
        pVar5 = (void*)lVar14;
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pcVar20 = local_48;
        if ((local_40 != '\0') && (local_48 != 0x0)) {
          FUN_00d50b20();
        }
        if (pcVar20 != 0x0) {
          pvVar8 = _pthread_getspecific(pVar5);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar8 = _pthread_getspecific(pVar5);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar22 = FUN_0152de10();
          local_c0 = CONCAT44(local_c0._4_4_,uVar22);
          if ((local_40 != '\0') && (local_48 != 0x0)) {
            FUN_00d50b20();
          }
          local_b8 = CONCAT44(local_b8._4_4_,(float)local_b8 + local_c0._0_4_);
        }
      }
      FUN_001159b0();
      (**(code **)(**(int64_t **)(this_ptr + 0x130) + 0x928))
                ((float)local_b8 / (float)*(int *)(local_b0 + 0xc));
    }
  }
  pcVar9 = FUN_00e8fc40();
  FUN_00d4ff40();
  pcVar20 = &g_02572358;
  *(void**)pcVar9 = &g_02572358;
  (*g_02572370)();
  local_c0 = pcVar9;
  if (local_b0 != 0x0) {
    local_70[0] = '\0';
    local_78 = 0x0;
    local_68 = local_b0;
    local_60 = -1;
    iStack_5c = 0;
    local_58 = 0;
    while( true ) {
      if (iStack_5c != 0) {
        if (iStack_5c < 1) {
          iStack_5c = -iStack_5c;
        }
        else {
          local_60 = local_60 - iStack_5c;
          FUN_00d23690();
          local_58 = local_58 + iStack_5c;
          iStack_5c = 0;
        }
      }
      lVar7 = (int64_t)local_60;
      local_60 = local_60 + 1;
      if (*(int *)(local_68 + 0xc) <= local_60) break;
      lVar14 = *(int64_t *)(local_68 + 0x10);
      local_78 = *(code **)(lVar14 + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((void*)lVar14);
      pVar5 = (void*)lVar14;
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      pcVar20 = local_48;
      if ((local_40 != '\0') && (local_48 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar20 != 0x0) {
        pvVar8 = _pthread_getspecific(pVar5);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        pcVar20 = CONCAT71(uStack_8f,local_90);
        if (local_88 == '\0') {
          if (pcVar20 != 0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_40 = '\0';
        local_48 = pcVar20;
        FUN_00d235a0();
        if ((local_40 != '\0') && (local_48 != 0x0)) {
          FUN_00d50b20();
        }
        if (pcVar20 != 0x0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
          FUN_00d50b20();
        }
      }
    }
    pcVar20 = local_68;
    FUN_001159b0();
  }
  plVar11 = *(int64_t **)(this_ptr + 0xe0);
  local_b8 = CONCAT44(local_b8._4_4_,(uint)local_38);
  if (plVar11 == (int64_t *)0x0) {
    local_a0 = 0x0;
    pcVar9 = 0x0;
  }
  else {
    if (*(int *)(local_b0 + 0xc) == 0) {
      local_a0 = 0x0;
      pcVar20 = 0x0;
      local_98 = 0x0;
      uVar10 = (**(code **)(*plVar11 + 0x998))();
      pcVar9 = g_026e3e60;
      if (g_026e3e60 != 0x0) {
        uVar10 = FUN_00d50b00();
      }
      local_a0 = CONCAT71((int7)((uint64_t)uVar10 >> 8),pcVar9 != 0x0);
    }
    else {
      if (local_c0 == 0x0) {
        local_a8 = 0x0;
        pcVar18 = 0x0;
        local_a0 = 0x0;
        pcVar9 = 0x0;
      }
      else {
        local_70[0] = '\0';
        local_78 = 0x0;
        local_68 = local_c0;
        local_60 = -1;
        iStack_5c = 0;
        local_58 = 0;
        local_a8 = 0x0;
        pcVar18 = 0x0;
        local_a0 = 0x0;
        local_98 = 0x0;
        while( true ) {
          lVar7 = (int64_t)local_60;
          local_60 = local_60 + 1;
          if (*(int *)(local_68 + 0xc) <= local_60) break;
          pcVar20 = *(code **)(local_68 + 0x10);
          local_78 = *(code **)(pcVar20 + (lVar7 + 1) * 8);
          pvVar8 = _pthread_getspecific((void*)pcVar20);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0134a500();
          pcVar9 = local_48;
          if ((local_40 != '\0') && (local_48 != 0x0)) {
            FUN_00d50b20();
          }
          lVar7 = g_027025f0;
          if (pcVar9 == 0x0) {
            if (g_027025f0 != 0) {
              FUN_00d50b00();
            }
            lVar14 = g_027025f8;
            if (g_027025f8 != 0) {
              FUN_00d50b00();
            }
            local_1b8 = 0;
            local_1b0 = '\0';
            pcVar20 = &local_1b8;
            uVar10 = FUN_00d31230();
            pcVar9 = local_48;
            if (local_48 == 0x0) {
              local_50 = (int64_t *)((uint64_t)local_50._4_4_ << 0x20);
            }
            else if (local_40 == '\0') {
              uVar10 = FUN_00d50b00();
              local_50 = (int64_t *)
                         CONCAT44(local_50._4_4_,(int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1));
              if ((local_40 != '\0') && (local_48 != 0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40 = '\0';
              local_50 = (int64_t *)
                         CONCAT44(local_50._4_4_,(int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1));
            }
            if ((local_1b0 != '\0') && (local_1b8 != 0)) {
              FUN_00d50b20();
            }
            if (lVar14 != 0) {
              FUN_00d50b20();
            }
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar8 = _pthread_getspecific((void*)pcVar20);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0134a500();
            pvVar8 = _pthread_getspecific((void*)pcVar20);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar10 = FUN_0141b7f0();
            pcVar9 = local_48;
            if (local_48 == 0x0) {
              local_50 = (int64_t *)((uint64_t)local_50._4_4_ << 0x20);
            }
            else if (local_40 == '\0') {
              uVar10 = FUN_00d50b00();
              local_50 = (int64_t *)
                         CONCAT44(local_50._4_4_,(int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1));
              if ((local_40 != '\0') && (local_48 != 0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40 = '\0';
              local_50 = (int64_t *)
                         CONCAT44(local_50._4_4_,(int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1));
            }
            if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
              FUN_00d50b20();
            }
          }
          if (pcVar18 == 0x0) {
            pvVar8 = _pthread_getspecific((void*)pcVar20);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0134a500();
            pcVar20 = local_48;
            if ((local_40 != '\0') && (local_48 != 0x0)) {
              FUN_00d50b20();
            }
            pcVar16 = local_98;
            if (pcVar20 != 0x0) {
              if (pcVar9 == 0x0) {
                pcVar18 = 0x0;
              }
              else {
                if ((char)local_50 != '\0') {
                  FUN_00d50b00();
                }
                local_a8 = ((uint64_t)local_50 & 0xffffffff);
                pcVar18 = pcVar9;
              }
              local_1a0 = '\0';
              local_1a8 = pcVar18;
              pVar5 = FUN_0141b8d0();
              if ((local_1a0 != '\0') && (local_1a8 != 0x0)) {
                FUN_00d50b20();
              }
              FUN_0141b540();
              pcVar16 = local_98;
              lVar14 = (int64_t)(int)pVar5;
              lVar7 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + lVar14 * 8);
              if (lVar7 != 0) {
                FUN_00d50b00();
                pVar5 = (void*)lVar14;
              }
              if ((local_40 != '\0') && (local_48 != 0x0)) {
                FUN_00d50b20();
              }
              if (lVar7 == 0) goto LAB_0032e25f;
              pvVar8 = _pthread_getspecific(pVar5);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0141b690();
              pcVar3 = local_48;
              pcVar20 = local_98;
              uVar17 = (undefined7)((uint64_t)pcVar16 >> 8);
              if (pcVar16 == local_48) {
                if ((char)local_a0 == '\0') {
                  if (pcVar16 == 0x0) {
                    uVar15 = (uint64_t)local_a0 & 0xffffffff;
                    pcVar16 = pcVar20;
                  }
                  else {
                    uVar15 = CONCAT71(uVar17,1);
                    pcVar16 = local_98;
                    if (local_40 != '\0') goto LAB_0032e553;
                    uVar15 = CONCAT71(uVar17,1);
                    local_a0 = 0x0;
                    FUN_00d50b00();
                    pcVar16 = pcVar20;
                  }
                }
                else {
                  uVar15 = (uint64_t)local_a0 & 0xffffffff;
                }
LAB_0032e53f:
                if ((local_40 != '\0') && (local_48 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pcVar16 = pcVar3;
                if (local_40 == '\0') {
                  if (local_48 != 0x0) {
                    FUN_00d50b00();
                  }
                  uVar15 = CONCAT71(uVar17,1);
                  if (((char)local_a0 != '\0') && (local_98 != 0x0)) {
                    local_98 = pcVar3;
                    FUN_00d50b20();
                  }
                  goto LAB_0032e53f;
                }
                uVar15 = CONCAT71(uVar17,1);
                if (((char)local_a0 != '\0') && (local_98 != 0x0)) {
                  local_98 = local_48;
                  FUN_00d50b20();
                }
              }
LAB_0032e553:
              FUN_00d50b20();
              local_a0 = (uVar15 & 0xffffffff);
              goto LAB_0032e25f;
            }
            if (local_98 != pcVar9) {
              if (((char)local_50 != '\0') && (pcVar9 != 0x0)) {
                FUN_00d50b00();
              }
              if (((char)local_a0 != '\0') && (pcVar16 != 0x0)) {
                FUN_00d50b20();
              }
              pcVar18 = 0x0;
              local_a0 = ((uint64_t)local_50 & 0xffffffff);
              pcVar16 = pcVar9;
              goto LAB_0032e25f;
            }
            if ((char)local_50 != '\0') {
              if (((char)local_a0 != '\0') || (local_98 == 0x0)) {
                pcVar18 = 0x0;
                goto joined_r0x0032e26c;
              }
              uVar10 = FUN_00d50b00();
              local_a0 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
              pcVar18 = 0x0;
              goto LAB_0032df30;
            }
            pcVar18 = 0x0;
            bVar21 = iStack_5c == 0;
            if (!bVar21) goto LAB_0032def0;
          }
          else {
            local_190 = '\0';
            local_198 = pcVar9;
            cVar4 = (**(code **)(*(int64_t *)pcVar18 + 0x50))();
            if ((local_190 != '\0') && (local_198 != 0x0)) {
              FUN_00d50b20();
            }
            pcVar16 = local_98;
            pcVar3 = g_02726ce0;
            if (cVar4 == '\0') {
              if (g_02726ce0 != 0x0) {
                FUN_00d50b00();
              }
              if (pcVar16 == pcVar3) {
                uVar15 = 1;
                if (pcVar3 == 0x0) {
                  uVar15 = (uint64_t)local_a0 & 0xff;
                }
                pcVar20 = local_a0;
                if (((char)local_a0 != '\0') &&
                   (uVar15 = (uint64_t)local_a0 & 0xff, pcVar3 != 0x0)) {
                  FUN_00d50b20();
                  uVar15 = (uint64_t)local_a0 & 0xffffffff;
                }
              }
              else {
                uVar15 = CONCAT71((int7)((uint64_t)pcVar16 >> 8),1);
                if (((char)local_a0 == '\0') || (local_98 == 0x0)) {
                  local_98 = pcVar3;
                }
                else {
                  FUN_00d50b20();
                  local_98 = pcVar3;
                }
              }
              if (((char)local_50 != '\0') && (pcVar9 != 0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0032e78d;
            }
LAB_0032e25f:
            if ((char)local_50 != '\0') {
joined_r0x0032e26c:
              if (pcVar9 != 0x0) {
LAB_0032df30:
                FUN_00d50b20();
              }
            }
            bVar21 = false;
            local_98 = pcVar16;
            if (iStack_5c != 0) {
LAB_0032def0:
              if (bVar21 || iStack_5c < 0) {
                iStack_5c = -iStack_5c;
              }
              else {
                local_60 = local_60 - iStack_5c;
                FUN_00d23690();
                local_58 = local_58 + iStack_5c;
                iStack_5c = 0;
              }
            }
          }
        }
        uVar15 = (uint64_t)local_a0 & 0xffffffff;
        pcVar20 = local_68;
LAB_0032e78d:
        FUN_00115190();
        plVar11 = *(int64_t **)(this_ptr + 0xe0);
        local_a0 = (uVar15 & 0xffffffff);
        pcVar9 = local_98;
      }
      (**(code **)(*plVar11 + 0x998))();
      if (((char)local_a8 != '\0') && (pcVar18 != 0x0)) {
        FUN_00d50b20();
      }
    }
    local_180 = '\0';
    local_188 = pcVar9;
    (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x958))();
    if ((local_180 != '\0') && (local_188 != 0x0)) {
      FUN_00d50b20();
    }
  }
  plVar11 = *(int64_t **)(this_ptr + 0xd8);
  local_98 = pcVar9;
  if (plVar11 != (int64_t *)0x0) {
    local_40 = '\0';
    local_48 = 0x0;
    if (local_b0 == 0x0) {
      iVar19 = 0;
LAB_0032ea5e:
      local_150 = '\0';
      local_158 = 0;
      (**(code **)(*plVar11 + 0x6a8))();
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if (*(int64_t **)(this_ptr + 0xe8) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x998))();
      }
      pcVar9 = g_026e3e60;
      lVar7 = g_026e3e58;
      plVar11 = *(int64_t **)(this_ptr + 0xd8);
      if (iVar19 == 0) {
        if (g_026e3e60 != 0x0) {
          FUN_00d50b00();
        }
        local_138 = pcVar9;
        local_130 = '\x01';
        (**(code **)(*plVar11 + 0x978))();
        if ((local_130 != '\0') && (local_138 != 0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x998))();
      }
      else {
        if (g_026e3e58 != 0) {
          FUN_00d50b00();
        }
        local_148 = lVar7;
        local_140 = '\x01';
        (**(code **)(*plVar11 + 0x978))();
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x998))();
      }
    }
    else {
      local_70[0] = '\0';
      local_78 = 0x0;
      local_68 = local_b0;
      local_60 = -1;
      iStack_5c = 0;
      local_58 = 0;
      local_a8 = 0x0;
      pcVar18 = 0x0;
      local_50 = (int64_t *)((uint64_t)local_50 & 0xffffffff00000000);
      iVar19 = 0;
      pcVar16 = 0x0;
LAB_0032e8b2:
      while( true ) {
        if (iStack_5c != 0) {
          if (iStack_5c < 1) {
            iStack_5c = -iStack_5c;
          }
          else {
            local_60 = local_60 - iStack_5c;
            FUN_00d23690();
            local_58 = local_58 + iStack_5c;
            iStack_5c = 0;
          }
        }
        lVar7 = (int64_t)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(local_68 + 0xc) <= local_60) break;
        local_78 = *(code **)(*(int64_t *)(local_68 + 0x10) + 8 + lVar7 * 8);
        pvVar8 = _pthread_getspecific((void*)*(int64_t *)(local_68 + 0x10));
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        pcVar9 = CONCAT71(uStack_8f,local_90);
        if (local_88 == '\0') goto LAB_0032e960;
        if (pcVar9 != 0x0) goto LAB_0032e990;
      }
      local_48 = local_a8;
      local_40 = (char)local_50;
      pcVar20 = local_68;
      FUN_001159b0();
      if (iVar19 != 1) {
        plVar11 = *(int64_t **)(this_ptr + 0xd8);
        goto LAB_0032ea5e;
      }
      pvVar8 = _pthread_getspecific((void*)pcVar20);
      if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), pcVar18 = pcVar16, lVar7 != 0)) {
        pcVar18 = *(code **)(pcVar16 + ((uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4) * 8);
      }
      (**(code **)(*(int64_t *)pcVar18 + 0x3a8))();
      FUN_00d8f1a0();
      if (local_78 == 0x0) {
        uVar15 = CONCAT71((int7)((uint64_t)pcVar9 >> 8),1);
      }
      else {
        if (local_70[0] == '\0') {
          FUN_00d50b00();
          uVar15 = 0;
          if ((local_70[0] == '\0') || (local_78 == 0x0)) goto LAB_0032ebfd;
          FUN_00d50b20();
        }
        else {
          local_70[0] = '\0';
        }
        uVar15 = 0;
      }
LAB_0032ebfd:
      if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
        FUN_00d50b20();
      }
      local_178 = local_78;
      local_170 = '\0';
      (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x978))();
      if ((local_170 != '\0') && (local_178 != 0x0)) {
        FUN_00d50b20();
      }
      if ((g_026fdd70 == '\0') && (iVar19 = ___cxa_guard_acquire(), iVar19 != 0)) {
        local_50 = (int64_t *)CONCAT44(local_50._4_4_,(int)uVar15);
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        pcVar20 = FUN_00136df0;
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
        uVar15 = (uint64_t)local_50 & 0xffffffff;
      }
      if (pcVar16 == 0x0) {
LAB_0032ec8a:
        pcVar9 = g_02802688;
        pcVar18 = g_02802688;
        cVar4 = g_02802690;
        if (g_02802690 == '\0') goto LAB_0032ecbe;
LAB_0032ecaf:
        pcVar18 = 0x0;
        if (pcVar9 == 0x0) goto LAB_0032ecbe;
        FUN_00d50b00();
LAB_0032ecc7:
        plVar11 = *(int64_t **)(this_ptr + 0xd8);
        local_50 = (int64_t *)CONCAT44(local_50._4_4_,(int)uVar15);
        pvVar8 = _pthread_getspecific((void*)pcVar20);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123abe0();
        (**(code **)(*(int64_t *)CONCAT71(uStack_8f,local_90) + 0x470))();
        local_f0 = 0;
        if (local_70[0] == '\0') {
          if (local_78 != 0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70[0] = '\0';
        }
        local_f0 = '\x01';
        local_f8 = local_78;
        uVar15 = (uint64_t)local_50 & 0xffffffff;
        (**(code **)(*plVar11 + 0x6a8))();
        if ((local_f0 != '\0') && (local_f8 != 0x0)) {
          FUN_00d50b20();
        }
        if ((local_70[0] != '\0') && (local_78 != 0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*(int64_t *)pcVar16 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_0032ec8a;
        pcVar9 = local_48;
        pcVar18 = local_48;
        cVar4 = local_40;
        if (local_40 != '\0') goto LAB_0032ecaf;
LAB_0032ecbe:
        if (pcVar18 != 0x0) goto LAB_0032ecc7;
        local_168 = local_78;
        local_160 = '\0';
        (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x6a8))();
        if ((local_160 != '\0') && (local_168 != 0x0)) {
          FUN_00d50b20();
        }
      }
      if (*(int64_t **)(this_ptr + 0xe8) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x998))();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x998))();
      if ((char)uVar15 == '\0' && local_78 != 0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0x0)) {
      FUN_00d50b20();
    }
  }
  puVar1 = *(void**)(this_ptr + 0x118);
  if ((puVar1 != (void*)0x0) && (*(int64_t **)(this_ptr + 0xd8) != (int64_t *)0x0)) {
    (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x9a0))();
    pcVar20 = *puVar1;
    (**(code **)(pcVar20 + 0x998))();
  }
  puVar1 = *(void**)(this_ptr + 0x120);
  if ((puVar1 != (void*)0x0) && (*(int64_t **)(this_ptr + 0xe0) != (int64_t *)0x0)) {
    (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x9a0))();
    pcVar20 = *puVar1;
    (**(code **)(pcVar20 + 0x998))();
  }
  if (((*(int64_t *)(this_ptr + 0xf0) != 0) && (*(int64_t *)(this_ptr + 0xf8) != 0)) &&
     (*(int64_t *)(this_ptr + 0x100) != 0)) {
    iVar19 = *(int *)(local_c0 + 0xc);
    if (iVar19 == 1) {
      FUN_00d23310();
      pVar5 = (void*)CONCAT71((int7)((uint64_t)pcVar20 >> 8),local_70[0]);
      pcVar12 = &local_90;
      if (local_70[0] != '\0') {
        pcVar12 = local_70;
      }
      local_90 = local_70[0];
      *pcVar12 = '\0';
      if ((local_70[0] != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(pVar5);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      pcVar20 = local_48;
      if (local_48 == 0x0) {
        bVar2 = false;
        pcVar20 = 0x0;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        if ((local_40 != '\0') && (local_48 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        bVar2 = true;
      }
      if ((local_90 != '\0') && (local_78 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(pVar5);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar6 = FUN_01326de0();
      bVar21 = true;
      if (iVar6 != 2) {
        pvVar8 = _pthread_getspecific(0x2802558);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_01326de0();
        bVar21 = iVar6 == 4;
      }
    }
    else {
      pcVar20 = 0x0;
      bVar2 = false;
      bVar21 = false;
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x998))();
    lVar7 = **(int64_t **)(this_ptr + 0xf8);
    (**(code **)(lVar7 + 0x998))();
    pVar5 = (void*)lVar7;
    (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x998))();
    if (bVar21) {
      plVar11 = *(int64_t **)(this_ptr + 0xf0);
      pvVar8 = _pthread_getspecific(pVar5);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7bd0();
      (**(code **)(*plVar11 + 0x928))();
    }
    if (iVar19 == 1) {
      plVar11 = *(int64_t **)(this_ptr + 0xf8);
      pvVar8 = _pthread_getspecific(pVar5);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7ca0();
      (**(code **)(*plVar11 + 0x928))();
      plVar11 = *(int64_t **)(this_ptr + 0x100);
      pvVar8 = _pthread_getspecific(pVar5);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013d7d70();
      (**(code **)(*plVar11 + 0x928))();
    }
    if ((bVar2) && (pcVar20 != 0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x140) == 0) goto LAB_0032fad5;
  FUN_01e40eb0();
  if ((local_70[0] != '\0') && (local_78 != 0x0)) {
    FUN_00d50b20();
  }
  if (local_78 == 0x0) goto LAB_0032fad5;
  FUN_003322a0();
  local_e8 = local_48;
  local_e0 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_e0 = '\x01';
  FUN_012e74e0();
  if (local_70[0] == '\0') {
    if (((local_78 != 0x0) && (FUN_00d50b00(), local_70[0] != '\0')) &&
       (local_78 != 0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70[0] = '\0';
  }
  if ((local_e0 != '\0') && (local_e8 != 0x0)) {
    FUN_00d50b20();
  }
  local_a8 = local_78;
  plVar11 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar11 + 0x18))();
  local_50 = plVar11;
  FUN_00d50b00();
  local_90 = '\0';
  local_48 = this_ptr;
  do {
    pcVar20 = local_48;
    (**(code **)(*(int64_t *)local_48 + 0x370))();
    if (local_78 == pcVar20) {
      if (((local_90 == '\0') && (local_78 != 0x0)) && (local_70[0] != '\0'))
      goto LAB_0032f37d;
    }
    else {
      local_48 = local_78;
      pcVar20 = local_78;
      if (local_70[0] == '\0') {
        if (local_90 == '\0') {
          pcVar12 = &local_90;
        }
        else {
          FUN_00d50b20();
          pcVar12 = &local_90;
        }
      }
      else {
        if (local_90 != '\0') {
          FUN_00d50b20();
        }
LAB_0032f37d:
        local_90 = '\x01';
        pcVar12 = local_70;
      }
      *pcVar12 = '\0';
    }
    if ((local_70[0] != '\0') && (local_78 != 0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddb0 == '\0') && (iVar19 = ___cxa_guard_acquire(), iVar19 != 0)) {
      g_026e0ab8 = FUN_00015ff0();
      g_026e0aa0 = "MDMetaWindowController";
      g_026e0aa8 = 0x198;
      g_026e0ab0 = FUN_0006dea0;
      g_026e0ac0 = 0;
      ram_00000000026e0ac8 = 0;
      g_026e0ad0 = 0;
      g_026e0b48 = 0;
      ram_00000000026e0b50 = 0;
      g_026e0b58 = 0;
      g_026e0b5a = 1;
      g_026e0ad8 = 0;
      ram_00000000026e0ae0 = 0;
      g_026e0ae8 = 0;
      ram_00000000026e0af0 = 0;
      g_026e0af8 = 0;
      ram_00000000026e0b00 = 0;
      g_026e0b08 = 0;
      ram_00000000026e0b10 = 0;
      g_026e0b18 = 0;
      ram_00000000026e0b20 = 0;
      g_026e0b28 = 0;
      ram_00000000026e0b30 = 0;
      g_026e0b38 = 0;
      ram_00000000026e0b40 = 0;
      g_026e0b63 = 0;
      g_026e0b5b = 0;
      ___cxa_guard_release();
    }
    ppcVar13 = &g_02802688;
    if (pcVar20 != 0x0) {
      (**(code **)(*(int64_t *)pcVar20 + 0x360))();
      cVar4 = FUN_00e85ea0();
      ppcVar13 = &local_48;
      if (cVar4 == '\0') {
        ppcVar13 = &g_02802688;
      }
    }
    pcVar9 = local_48;
    pcVar20 = local_a8;
    if (*ppcVar13 != 0x0) {
      if ((local_90 == '\0') && (local_48 != 0x0)) {
        FUN_00d50b00();
      }
      goto LAB_0032f523;
    }
  } while (local_48 != 0x0);
  pcVar9 = 0x0;
LAB_0032f523:
  FUN_00d50b20();
  bVar21 = true;
  if (*(int *)(pcVar20 + 0xc) < 1) {
    local_c8 = 0;
  }
  else {
    FUN_00d23310();
    pVar5 = (void*)CONCAT71((int7)((uint64_t)ppcVar13 >> 8),local_70[0]);
    pcVar12 = &local_90;
    if (local_70[0] != '\0') {
      pcVar12 = local_70;
    }
    local_90 = local_70[0];
    *pcVar12 = '\0';
    if ((local_70[0] != '\0') && (local_78 != 0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar5);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pcVar18 = local_48;
    if (local_48 == 0x0) {
      local_c8 = 0;
      pcVar18 = 0x0;
    }
    else if (local_40 == '\0') {
      uVar10 = FUN_00d50b00();
      local_c8 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
      if ((local_40 != '\0') && (local_48 != 0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      local_c8 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
    }
    if ((local_90 != '\0') && (local_78 != 0x0)) {
      FUN_00d50b20();
    }
    if (pcVar18 != 0x0) {
      pvVar8 = _pthread_getspecific(pVar5);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      if (local_70[0] == '\0') {
        if (local_78 != 0x0) {
          FUN_00d50b00();
          if ((local_70[0] != '\0') && (local_78 != 0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0032f6e7;
        }
      }
      else if (local_78 != 0x0) {
LAB_0032f6e7:
        local_70[0] = '\0';
        local_68 = local_78;
        local_60 = -1;
        iStack_5c = 0;
        local_58 = 0;
        while( true ) {
          if (iStack_5c != 0) {
            if (iStack_5c < 1) {
              iStack_5c = -iStack_5c;
            }
            else {
              local_60 = local_60 - iStack_5c;
              FUN_00d23690();
              local_58 = local_58 + iStack_5c;
              iStack_5c = 0;
            }
          }
          lVar7 = (int64_t)local_60;
          local_60 = local_60 + 1;
          if (*(int *)(local_68 + 0xc) <= local_60) break;
          lVar14 = *(int64_t *)(local_68 + 0x10);
          pcVar18 = *(code **)(lVar14 + 8 + lVar7 * 8);
          local_40 = '\0';
          local_48 = pcVar18;
          cVar4 = FUN_00d23d70();
          pVar5 = (void*)lVar14;
          if ((local_40 != '\0') && (local_48 != 0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            pvVar8 = _pthread_getspecific(pVar5);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar22 = FUN_012e6000();
            pcVar20 = local_48;
            local_d0 = 0;
            lVar7 = g_02702600;
            if (local_40 == '\0') {
              if (local_48 != 0x0) {
                uVar22 = FUN_00d50b00();
                lVar7 = g_02702600;
              }
            }
            else {
              local_40 = '\0';
            }
            local_d0 = '\x01';
            local_d8 = pcVar20;
            g_02702600 = lVar7;
            if (lVar7 != 0) {
              local_d0 = '\x01';
              uVar22 = FUN_00d50b00();
            }
            local_120 = '\x01';
            local_128 = lVar7;
            FUN_01d5d9b0(uVar22,&local_128);
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != 0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0x0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            pvVar8 = _pthread_getspecific(pVar5);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6160();
            local_40 = '\0';
            local_48 = pcVar18;
            FUN_00d237a0();
            if ((local_40 != '\0') && (local_48 != 0x0)) {
              FUN_00d50b20();
            }
            FUN_01d65490();
            if ((local_218 != '\0') && (local_220 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            local_100 = 0;
            FUN_00d50b00();
            local_100 = '\x01';
            local_108 = this_ptr;
            FUN_01d651e0();
            pcVar20 = local_a8;
            if ((local_100 != '\0') && (local_108 != 0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_000be170();
        FUN_00d50b20();
      }
      bVar21 = false;
    }
  }
  local_118 = local_50;
  local_110 = '\0';
  FUN_01d778e0();
  if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar11 = *(int64_t **)(this_ptr + 0x140);
  FUN_01d5b230();
  (**(code **)(*plVar11 + 0x998))();
  if ((char)local_c8 != '\0' && !bVar21) {
    FUN_00d50b20();
  }
  plVar11 = local_50;
  if (pcVar9 != 0x0) {
    FUN_00d50b20();
  }
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (pcVar20 != 0x0) {
    FUN_00d50b20();
  }
LAB_0032fad5:
  pcVar20 = *(code **)(this_ptr + 0xd0);
  if (pcVar20 != 0x0) {
    local_70[0] = '\0';
    iStack_5c = 0;
    local_58 = 0;
    local_68 = pcVar20;
    for (lVar7 = 0; local_60 = (int)lVar7, local_60 < *(int *)(pcVar20 + 0xc); lVar7 = lVar7 + 1) {
      (**(code **)(**(int64_t **)(*(int64_t *)(pcVar20 + 0x10) + lVar7 * 8) + 0x680))();
    }
    FUN_003357b0();
  }
  if (((char)local_a0 != '\0') && (local_98 != 0x0)) {
    FUN_00d50b20();
  }
  if (local_c0 != 0x0) {
    FUN_00d50b20();
  }
  if (local_b0 != 0x0) {
    FUN_00d50b20();
  }
  return;
LAB_0032e960:
  if (pcVar9 == 0x0) goto LAB_0032e8b2;
  FUN_00d50b00();
  if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
    FUN_00d50b20();
  }
LAB_0032e990:
  pcVar18 = pcVar16;
  if (pcVar16 == pcVar9) goto LAB_0032e8a4;
  if (pcVar16 == 0x0) {
    if (pcVar9 == 0x0) {
      if ((char)local_50 != '\0') goto LAB_0032e8a0;
      local_50 = (int64_t *)((uint64_t)local_50 & 0xffffffff00000000);
      uVar10 = FUN_00d50b00();
    }
    else {
      uVar10 = FUN_00d50b00();
      pcVar16 = pcVar9;
      local_a8 = pcVar9;
    }
    local_50 = (int64_t *)CONCAT44(local_50._4_4_,(int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1));
  }
LAB_0032e8a0:
  iVar19 = iVar19 + 1;
  pcVar18 = pcVar16;
LAB_0032e8a4:
  FUN_00d50b20();
  pcVar16 = pcVar18;
  goto LAB_0032e8b2;
}

