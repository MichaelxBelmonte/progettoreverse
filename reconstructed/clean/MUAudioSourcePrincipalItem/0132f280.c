// Function: FUN_0132f280
// Address: 0132f280
// Size: 17702 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"
//   "%@/Principal"
//   "%@/Sibilant_%08d_%06d"

void FUN_0132f280(code *param_1,code *param_2,char param_3)

{
  code cVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint32_t uVar6;
  void *pvVar7;
  void*puVar8;
  int64_t lVar9;
  code *pcVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  code **ppcVar15;
  uint64_t uVar16;
  int64_t lVar17;
  code *pcVar18;
  int64_t lVar19;
  uint uVar20;
  void* pVar21;
  code *pcVar22;
  code **ppcVar23;
  code *pcVar24;
  code *pcVar25;
  uint64_t uVar26;
  int64_t lVar27;
  code *pcVar28;
  uint uVar29;
  int64_t *plVar30;
  code *pcVar31;
  code *pcVar32;
  int iVar33;
  int64_t this_ptr;
  code *pcVar34;
  int64_t lVar35;
  uint64_t uVar36;
  bool bVar37;
  int64_t lVar38;
  bool bVar39;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t uVar40;
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  int64_t local_308;
  char local_300;
  code *local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  code *local_260;
  char local_258;
  code *local_250;
  char local_248;
  code *local_240;
  char local_238;
  code *local_230;
  char local_228;
  void*local_220;
  char local_218;
  float local_20c;
  int64_t local_208;
  code *local_200;
  void*local_1f8;
  code *local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  void*local_180;
  code *local_178;
  uint64_t local_170;
  double local_168;
  code *local_160;
  int local_154;
  void*local_150;
  double local_148;
  code *local_140;
  code *local_138;
  code *local_130;
  code *local_128;
  uint64_t local_120;
  code *local_118;
  code *local_110;
  code *local_108;
  uint64_t local_100;
  code *local_f8;
  uint64_t local_f0;
  code **local_e8;
  uint64_t local_e0;
  float local_d4;
  uint64_t local_d0;
  uint64_t local_c8;
  code **local_c0;
  uint32_t local_b4;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  code *local_88;
  void*local_80;
  code *local_78;
  char local_70;
  code *local_68;
  code *local_60;
  uint local_58 [2];
  code *local_50;
  uint64_t local_48;
  int local_40;
  int local_3c;
  code *local_38;
  
  if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
    return;
  }
  pcVar22 = param_1;
  local_118 = param_2;
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar5 = FUN_0141bab0();
  if (iVar5 != 1) {
    return;
  }
  if (*(int64_t *)local_118 == 0) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar30 = puVar8 + 2;
    *puVar8 = &g_025d8bd0;
    puVar8[2] = &g_025d8f58;
    *(void*)(puVar8 + 3) = 0;
    puVar8[4] = 0;
    FUN_00d500e0();
    if (puVar8 == (void*)0x0) {
      plVar30 = (int64_t *)0x0;
    }
    plVar2 = *(int64_t **)local_118;
    if (plVar2 == plVar30) {
      if ((local_118[8] != (code)0x0) || (puVar8 == (void*)0x0)) {
        FUN_00d50b20();
        goto LAB_0132f3f0;
      }
    }
    else if (plVar2 == (int64_t *)0x0) {
      *(int64_t **)local_118 = plVar30;
    }
    else {
      cVar1 = local_118[8];
      lVar9 = (**(code **)(*plVar2 + 0x10))();
      *(int64_t **)local_118 = plVar30;
      pcVar22 = local_118;
      if ((cVar1 != (code)0x0) && (lVar9 != 0)) {
        FUN_00d50b20();
      }
    }
    local_118[8] = (code)0x1;
  }
LAB_0132f3f0:
  plVar30 = *(int64_t **)(this_ptr + 0x38);
  pvVar7 = _pthread_getspecific((void*)pcVar22);
  if (pvVar7 != (void *)0x0) {
    plVar30 = *(int64_t **)(this_ptr + 0x38);
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      plVar30 = (int64_t *)plVar30[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
  }
  local_38 = (**(code **)(*plVar30 + 0x378))();
  plVar30 = *(int64_t **)(this_ptr + 0x38);
  pvVar7 = _pthread_getspecific((void*)pcVar22);
  if (pvVar7 != (void *)0x0) {
    plVar30 = *(int64_t **)(this_ptr + 0x38);
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      plVar30 = (int64_t *)plVar30[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
  }
  local_148 = (double)(**(code **)(*plVar30 + 0x370))();
  plVar30 = *(int64_t **)(this_ptr + 0x38);
  pvVar7 = _pthread_getspecific((void*)pcVar22);
  if (pvVar7 != (void *)0x0) {
    plVar30 = *(int64_t **)(this_ptr + 0x38);
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      plVar30 = (int64_t *)plVar30[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
  }
  local_d0 = (**(code **)(*plVar30 + 0x3a0))();
  local_1e0 = 0;
  local_1e8 = *(int64_t *)(this_ptr + 0x40);
  if (local_1e8 != 0) {
    FUN_00d50b00();
  }
  local_1e0 = '\x01';
  FUN_0147ce20();
  local_b0 = local_60;
  if ((char)local_58[0] == '\0') {
    if (local_60 != 0x0) {
      FUN_00d50b00();
      if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58[0] = local_58[0] & 0xffffff00;
  }
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  if (local_b0 == 0x0) {
    return;
  }
  if (*(int *)(local_b0 + 0xc) == 0) goto LAB_01333749;
  FUN_00d242c0();
  FUN_00d50b00();
  if ((param_3 == '\0') && (lVar9 = *(int64_t *)param_1, lVar9 != 0)) {
    uVar29 = *(uint *)(lVar9 + 0x18);
    local_b4 = 0;
    if (uVar29 + 7 < 0xf) goto LAB_0132f654;
    local_88 = local_b0;
    if ((int)uVar29 < 8) goto LAB_0132f65f;
    uVar29 = uVar29 >> 3;
    lVar9 = *(int64_t *)(lVar9 + 0x10);
    if (uVar29 == 1) {
      local_68 = 0x8000000000000001;
      uVar36 = 0;
      local_a8 = 0x7fffffffffffffff;
    }
    else {
      local_68 = 0x8000000000000001;
      uVar36 = 0;
      local_a8 = 0x7fffffffffffffff;
      do {
        lVar11 = (int64_t)*(int *)(lVar9 + 4 + uVar36 * 8);
        if (0 < lVar11) {
          pcVar10 = (int64_t)*(int *)(lVar9 + uVar36 * 8);
          pcVar22 = local_a8;
          if ((int64_t)pcVar10 < (int64_t)local_a8) {
            pcVar22 = pcVar10;
          }
          local_a8 = pcVar22;
          if ((int64_t)local_68 < (int64_t)(pcVar10 + lVar11)) {
            local_68 = pcVar10 + lVar11;
          }
        }
        lVar11 = (int64_t)*(int *)(lVar9 + 0xc + uVar36 * 8);
        if (0 < lVar11) {
          pcVar10 = (int64_t)*(int *)(lVar9 + 8 + uVar36 * 8);
          pcVar22 = local_a8;
          if ((int64_t)pcVar10 < (int64_t)local_a8) {
            pcVar22 = pcVar10;
          }
          local_a8 = pcVar22;
          if ((int64_t)local_68 < (int64_t)(pcVar10 + lVar11)) {
            local_68 = pcVar10 + lVar11;
          }
        }
        uVar36 = uVar36 + 2;
      } while ((uVar29 & 0xfffffffe) != uVar36);
    }
    if (((uVar29 & 1) != 0) &&
       (pcVar22 = (int64_t)*(int *)(lVar9 + 4 + uVar36 * 8), 0 < (int64_t)pcVar22)) {
      pcVar10 = (int64_t)*(int *)(lVar9 + uVar36 * 8);
      if ((int64_t)pcVar10 < (int64_t)local_a8) {
        local_a8 = pcVar10;
      }
      pcVar22 = pcVar22 + (int64_t)pcVar10;
      if ((int64_t)local_68 < (int64_t)pcVar22) {
        local_68 = pcVar22;
      }
    }
    if (local_a8 == 0x7fffffffffffffff) goto LAB_0132f654;
    pvVar7 = _pthread_getspecific((void*)pcVar22);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar9 = FUN_013de650();
    if ((int64_t)local_a8 <= lVar9) {
      FUN_00d23340();
      pcVar10 = local_60;
      pVar21 = (void*)CONCAT71((int7)((uint64_t)pcVar22 >> 8),(char)local_58[0]);
      ppcVar23 = &local_78;
      if ((char)local_58[0] != '\0') {
        ppcVar23 = (code **)local_58;
      }
      local_78 = CONCAT71(local_78._1_7_,(char)local_58[0]);
      *(void*)ppcVar23 = 0;
      if (((char)local_58[0] != '\0') && (pcVar10 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar21);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar9 = FUN_013de650();
      if (((char)local_78 != '\0') && (pcVar10 != 0x0)) {
        FUN_00d50b20();
      }
      if (lVar9 < (int64_t)local_68) goto LAB_0132f654;
    }
    pcVar22 = local_b0;
    local_88 = FUN_00e8fc40();
    FUN_00d4ff40();
    *(void**)local_88 = &g_02572358;
    (*g_02572370)();
    FUN_00d50b20();
    local_58[0] = local_58[0] & 0xffffff00;
    local_60 = 0x0;
    local_50 = pcVar22;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar5 = -local_48._4_4_;
        }
        else {
          iVar5 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar5);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar5 = 0;
        }
        local_48 = CONCAT44(iVar5,(int)local_48);
      }
      lVar9 = (int64_t)(int)local_48;
      iVar5 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar5);
      if (*(int *)(local_50 + 0xc) <= iVar5) break;
      lVar11 = *(int64_t *)(local_50 + 0x10);
      local_60 = *(code **)(lVar11 + 8 + lVar9 * 8);
      pvVar7 = _pthread_getspecific((void*)lVar11);
      pVar21 = (void*)lVar11;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar9 = FUN_013de650();
      if (lVar9 < (int64_t)local_68) {
        pvVar7 = _pthread_getspecific(pVar21);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar9 = FUN_013de650();
        pvVar7 = _pthread_getspecific(pVar21);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar11 = FUN_013de790();
        if ((int64_t)local_a8 < lVar11 + lVar9) {
          local_78 = local_60;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != 0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    pcVar22 = local_50;
    FUN_001150f0();
    if (*(int *)(local_88 + 0xc) != 0) {
      pcVar10 = **(void**)(local_88 + 0x10);
      if (pcVar10 != 0x0) {
        FUN_00d50b00();
      }
      do {
        local_58[0] = local_58[0] & 0xffffff00;
        local_60 = pcVar10;
        iVar5 = FUN_00d237a0();
        if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
          FUN_00d50b20();
        }
        if (iVar5 < 1) break;
        pcVar18 = *(code **)(*(int64_t *)(local_b0 + 0x10) + (uint64_t)(iVar5 - 1) * 8);
        if (pcVar18 != 0x0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((void*)pcVar22);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pcVar31 = local_60;
        if (((char)local_58[0] == '\0') && (local_60 != 0x0)) {
          FUN_00d50b00();
          if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar7 = _pthread_getspecific((void*)pcVar22);
        pcVar32 = pcVar31;
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar32 = *(code **)(pcVar31 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        cVar4 = (**(code **)(*(int64_t *)pcVar32 + 0x3c0))();
        uVar40 = extraout_XMM0_Qa;
        if (cVar4 == '\0') {
          pvVar7 = _pthread_getspecific((void*)pcVar22);
          pcVar32 = pcVar31;
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pcVar32 = *(code **)(pcVar31 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
          }
          cVar4 = (**(code **)(*(int64_t *)pcVar32 + 0x3c8))();
          uVar40 = extraout_XMM0_Qa_00;
          if (cVar4 != '\0') goto LAB_01330201;
          pvVar7 = _pthread_getspecific((void*)pcVar22);
          pcVar32 = pcVar31;
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pcVar32 = *(code **)(pcVar31 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
          }
          cVar4 = (**(code **)(*(int64_t *)pcVar32 + 0x3d0))();
          uVar40 = extraout_XMM0_Qa_01;
          if (cVar4 != '\0') goto LAB_01330201;
          pvVar7 = _pthread_getspecific((void*)pcVar22);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_014bc070();
          uVar40 = extraout_XMM0_Qa_02;
          if (cVar4 != '\0') goto LAB_01330201;
          bVar37 = false;
        }
        else {
LAB_01330201:
          local_58[0] = local_58[0] & 0xffffff00;
          local_60 = pcVar18;
          FUN_00d23370(uVar40,0);
          if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
          bVar37 = true;
          if (pcVar10 != pcVar18) {
            if (pcVar18 != 0x0) {
              FUN_00d50b00();
            }
            bVar39 = pcVar10 != 0x0;
            pcVar10 = pcVar18;
            if (bVar39) {
              FUN_00d50b20();
            }
          }
        }
        if (pcVar31 != 0x0) {
          FUN_00d50b20();
        }
        if (pcVar18 != 0x0) {
          FUN_00d50b20();
        }
      } while (bVar37);
      FUN_00d23340();
      pcVar22 = local_60;
      local_78 = CONCAT71(local_78._1_7_,(char)local_58[0]);
      ppcVar23 = (code **)local_58;
      if ((char)local_58[0] == '\0') {
        ppcVar23 = &local_78;
      }
      *(void*)ppcVar23 = 0;
      if (((char)local_58[0] != '\0') && (pcVar22 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar22 == pcVar10) {
        pcVar18 = pcVar10;
        if (((char)local_78 != '\0') && (pcVar22 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pcVar18 = pcVar22;
        if ((char)local_78 == '\0') {
          if (pcVar22 != 0x0) {
            FUN_00d50b00();
          }
          if (pcVar10 != 0x0) {
            FUN_00d50b20();
          }
        }
        else if (pcVar10 != 0x0) {
          FUN_00d50b20();
        }
      }
      do {
        local_58[0] = local_58[0] & 0xffffff00;
        local_60 = pcVar18;
        iVar5 = FUN_00d237a0();
        if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
          FUN_00d50b20();
        }
        pcVar22 = local_b0;
        if (*(int *)(local_b0 + 0xc) + -1 <= iVar5) break;
        pcVar22 = *(code **)(local_b0 + 0x10);
        pcVar10 = *(code **)(pcVar22 + (int64_t)iVar5 * 8 + 8);
        if (pcVar10 != 0x0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((void*)pcVar22);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pcVar31 = local_60;
        if (((char)local_58[0] == '\0') && (local_60 != 0x0)) {
          FUN_00d50b00();
          if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar7 = _pthread_getspecific((void*)pcVar22);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pcVar32 = local_60;
        if (((char)local_58[0] == '\0') && (local_60 != 0x0)) {
          FUN_00d50b00();
          if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar7 = _pthread_getspecific((void*)pcVar22);
        pcVar25 = pcVar32;
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar25 = *(code **)(pcVar32 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        cVar4 = (**(code **)(*(int64_t *)pcVar25 + 0x3c0))();
        if (cVar4 == '\0') {
          pvVar7 = _pthread_getspecific((void*)pcVar22);
          pcVar25 = pcVar32;
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pcVar25 = *(code **)(pcVar32 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
          }
          cVar4 = (**(code **)(*(int64_t *)pcVar25 + 0x3c8))();
          if (cVar4 != '\0') goto LAB_0133185f;
          pvVar7 = _pthread_getspecific((void*)pcVar22);
          pcVar25 = pcVar32;
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pcVar25 = *(code **)(pcVar32 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
          }
          cVar4 = (**(code **)(*(int64_t *)pcVar25 + 0x3d0))();
          if (cVar4 != '\0') goto LAB_0133185f;
          pvVar7 = _pthread_getspecific((void*)pcVar22);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_014bc070();
          if (cVar4 != '\0') goto LAB_0133185f;
          bVar37 = false;
        }
        else {
LAB_0133185f:
          local_58[0] = local_58[0] & 0xffffff00;
          local_60 = pcVar10;
          FUN_00d21140();
          if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
          bVar37 = true;
          if (pcVar18 != pcVar10) {
            if (pcVar10 != 0x0) {
              FUN_00d50b00();
            }
            bVar39 = pcVar18 != 0x0;
            pcVar18 = pcVar10;
            if (bVar39) {
              FUN_00d50b20();
            }
          }
        }
        if (pcVar32 != 0x0) {
          FUN_00d50b20();
        }
        if (pcVar31 != 0x0) {
          FUN_00d50b20();
        }
        if (pcVar10 != 0x0) {
          FUN_00d50b20();
        }
      } while (bVar37);
      pvVar7 = _pthread_getspecific((void*)pcVar22);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a8 = FUN_013de650();
      FUN_00d23340();
      pcVar22 = local_60;
      ppcVar23 = &local_78;
      if ((char)local_58[0] != '\0') {
        ppcVar23 = (code **)local_58;
      }
      local_78 = CONCAT71(local_78._1_7_,(char)local_58[0]);
      *(void*)ppcVar23 = 0;
      if (((char)local_58[0] != '\0') && (pcVar22 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((void*)ppcVar23);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar9 = FUN_013de650();
      FUN_00d23340();
      pcVar10 = local_60;
      ppcVar23 = &local_98;
      ppcVar15 = (code **)local_58;
      if ((char)local_58[0] == '\0') {
        ppcVar15 = ppcVar23;
      }
      local_98._0_1_ = (char)local_58[0];
      *(void*)ppcVar15 = 0;
      if (((char)local_58[0] != '\0') && (pcVar10 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((void*)ppcVar23);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = FUN_013de790();
      if (((char)local_98 != '\0') && (pcVar10 != 0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_78 != '\0') && (pcVar22 != 0x0)) {
        FUN_00d50b20();
      }
      local_68 = ((int64_t)local_68 + lVar9);
      if (pcVar18 != 0x0) {
        FUN_00d50b20();
      }
    }
    if (*(int *)(local_88 + 0xc) == *(int *)(local_b0 + 0xc)) {
LAB_01331a78:
      local_b4 = 0;
      goto LAB_0132f65f;
    }
    local_58[0] = local_58[0] & 0xffffff00;
    local_60 = 0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    bVar37 = false;
    local_50 = local_88;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar5 = -local_48._4_4_;
        }
        else {
          iVar5 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar5);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar5 = 0;
        }
        local_48 = CONCAT44(iVar5,(int)local_48);
      }
      lVar9 = (int64_t)(int)local_48;
      iVar5 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar5);
      pcVar22 = local_50;
      if (*(int *)(local_50 + 0xc) <= iVar5) break;
      pcVar22 = *(code **)(local_50 + 0x10);
      local_60 = *(code **)(pcVar22 + lVar9 * 8 + 8);
      pvVar7 = _pthread_getspecific((void*)pcVar22);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pcVar10 = local_78;
      if (local_70 == '\0') {
        if (local_78 != 0x0) {
          FUN_00d50b00();
          if ((local_70 != '\0') && (local_78 != 0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01331b74;
        }
      }
      else if (local_78 != 0x0) {
LAB_01331b74:
        pvVar7 = _pthread_getspecific((void*)pcVar22);
        pcVar18 = pcVar10;
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pcVar18 = *(code **)(pcVar10 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
        }
        cVar4 = (**(code **)(*(int64_t *)pcVar18 + 0x3c0))();
        if (cVar4 == '\0') {
          pvVar7 = _pthread_getspecific((void*)pcVar22);
          pcVar18 = pcVar10;
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pcVar18 = *(code **)(pcVar10 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
          }
          cVar4 = (**(code **)(*(int64_t *)pcVar18 + 0x3c8))();
          if (cVar4 != '\0') goto LAB_01331c7e;
          pvVar7 = _pthread_getspecific((void*)pcVar22);
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pcVar10 = *(code **)(pcVar10 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8 + 0x20);
          }
          cVar4 = (**(code **)(*(int64_t *)pcVar10 + 0x3d0))();
          if (cVar4 != '\0') goto LAB_01331c7e;
          pvVar7 = _pthread_getspecific((void*)pcVar22);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_014bc070();
          bVar39 = true;
          if (cVar4 != '\0') goto LAB_01331c7e;
        }
        else {
LAB_01331c7e:
          bVar37 = true;
          bVar39 = false;
        }
        FUN_00d50b20();
        if (!bVar39) break;
      }
    }
    FUN_001150f0();
    if (bVar37) {
      lVar9 = *(int64_t *)(this_ptr + 200);
      if (0 < *(int *)(lVar9 + 0xc)) {
        lVar11 = 0;
        do {
          pVar21 = (void*)pcVar22;
          lVar9 = *(int64_t *)(*(int64_t *)(lVar9 + 0x10) + lVar11 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          pvVar7 = _pthread_getspecific(pVar21);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc000();
          pcVar22 = local_60;
          if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
          if (pcVar22 != 0x0) {
            pvVar7 = _pthread_getspecific(pVar21);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc000();
            local_110 = local_60;
            if (local_60 == 0x0) {
              local_110 = 0x0;
              local_b4 = 0;
            }
            else {
              local_b4 = (uint32_t)CONCAT71((int7)((uint64_t)local_60 >> 8),1);
              if ((char)local_58[0] == '\0') {
                FUN_00d50b00();
                if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
            if (local_110 != 0x0) goto LAB_0132f6e7;
            break;
          }
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar11 = lVar11 + 1;
          lVar9 = *(int64_t *)(this_ptr + 200);
          pcVar22 = (int64_t)*(int *)(lVar9 + 0xc);
          local_b4 = 0;
        } while (lVar11 < (int64_t)pcVar22);
        goto LAB_0132f65f;
      }
      goto LAB_01331a78;
    }
  }
  else {
LAB_0132f654:
    local_b4 = 0;
    local_88 = local_b0;
LAB_0132f65f:
    if (local_b0 != local_88) {
      FUN_00d50b00();
      if (local_88 == 0x0) {
        local_88 = local_b0;
      }
      else {
        local_88 = local_b0;
        FUN_00d50b20();
      }
    }
    local_68 = (int64_t)(int)local_38;
    local_110 = 0x0;
    local_a8 = 0x0;
LAB_0132f6e7:
    if ((param_3 == '\0') && (*(code **)(this_ptr + 200) != 0x0)) {
      local_58[0] = local_58[0] & 0xffffff00;
      local_60 = 0x0;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      local_50 = *(code **)(this_ptr + 200);
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            iVar5 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        lVar9 = (int64_t)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        local_60 = *(code **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar9 * 8);
        pvVar7 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
      }
      FUN_0131c810();
    }
    if (0 < *(int *)(local_b0 + 0xc)) {
      local_140 = CONCAT44(local_140._4_4_,(int)local_68 - (int)local_a8);
      lVar9 = 0;
LAB_0132f828:
      pvVar7 = _pthread_getspecific((void*)local_b0);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013e6560();
      pcVar22 = local_60;
      if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar22 == 0x0) goto code_r0x0132f886;
      cVar4 = FUN_01334f30();
      if (cVar4 != '\0') {
        local_130 = CONCAT44(local_130._4_4_,(int)local_d0 * 8);
        FUN_00c8e690();
        pcVar22 = local_60;
        if (((char)local_58[0] == '\0') && (local_60 != 0x0)) {
          FUN_00d50b00();
          if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
        }
        local_160 = pcVar22;
        FUN_00c92170();
        FUN_00c8e690();
        pcVar22 = local_60;
        if (((char)local_58[0] == '\0') && (local_60 != 0x0)) {
          FUN_00d50b00();
          if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c92170();
        local_c8 = *(uint64_t *)(local_160 + 0x10);
        local_1f0 = pcVar22;
        local_208 = *(int64_t *)(pcVar22 + 0x10);
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        local_138 = &g_02572358;
        *puVar8 = &g_02572358;
        local_128 = g_02572370;
        (*g_02572370)();
        local_100 = local_d0 & 0xffffffff;
        local_180 = puVar8;
        if (0 < (int)local_d0) {
          uVar36 = 0;
          do {
            FUN_00c8e690();
            pcVar22 = local_60;
            if (((char)local_58[0] == '\0') && (local_60 != 0x0)) {
              FUN_00d50b00();
              if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00c92170();
            FUN_00c92160();
            ___bzero();
            *(int64_t *)(local_c8 + uVar36 * 8) = *(int64_t *)(pcVar22 + 0x10);
            local_58[0] = local_58[0] & 0xffffff00;
            local_60 = pcVar22;
            FUN_00d21140();
            if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
              FUN_00d50b20();
            }
            FUN_00c8e690();
            pcVar10 = local_60;
            if (((char)local_58[0] == '\0') && (local_60 != 0x0)) {
              FUN_00d50b00();
              if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00c92170();
            FUN_00c92160();
            ___bzero();
            if (pcVar22 == pcVar10) {
              FUN_00d50b20();
            }
            else {
              FUN_00d50b20();
              pcVar22 = pcVar10;
            }
            *(int64_t *)(local_208 + uVar36 * 8) = *(int64_t *)(pcVar22 + 0x10);
            local_58[0] = local_58[0] & 0xffffff00;
            local_60 = pcVar22;
            FUN_00d21140();
            if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            uVar36 = uVar36 + 1;
          } while (local_100 != uVar36);
        }
        lVar9 = FUN_00e7dae0(g_0241b6a0 * local_148);
        lVar11 = FUN_00e7dae0(g_02391030 * local_148);
        uVar20 = (int)local_a8 - (int)(g_023942d0 * local_148);
        uVar36 = (uint64_t)uVar20;
        iVar5 = (int)local_68 + (int)(g_023942d0 * local_148);
        uVar29 = 0;
        if (-1 < (int)uVar20) {
          uVar29 = uVar20;
        }
        if ((int)local_38 < iVar5) {
          iVar5 = (int)local_38;
        }
        uVar16 = (uint64_t)uVar29;
        if (local_110 == 0x0) {
          plVar30 = *(int64_t **)(this_ptr + 0x38);
          pvVar7 = _pthread_getspecific(uVar20);
          if (pvVar7 != (void *)0x0) {
            plVar30 = *(int64_t **)(this_ptr + 0x38);
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              plVar30 = (int64_t *)plVar30[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar30 + 0x390))(g_0238fee8,0,0,local_38);
        }
        else {
          uVar12 = FUN_00e83010();
          if (0 < (int)(uint)local_d0) {
            if ((uint)local_d0 < 4) {
              uVar13 = 0;
            }
            else if ((uVar12 < local_c8 + local_100 * 8) && (local_c8 < uVar12 + local_100 * 8)) {
              uVar13 = 0;
            }
            else {
              uVar13 = (uint64_t)((uint)local_100 & 0xfffffffc);
              uVar36 = (uVar13 - 4 >> 2) + 1;
              uVar26 = (uint64_t)((uint)uVar36 & 3);
              if (uVar13 - 4 < 0xc) {
                lVar38 = 0;
              }
              else {
                lVar14 = -(uVar36 & 0xfffffffffffffffc);
                lVar38 = 0;
                lVar17 = (uint64_t)uVar29 * 4;
                lVar19 = (uint64_t)uVar29 * 4;
                do {
                  plVar30 = (int64_t *)(local_c8 + lVar38 * 8);
                  lVar35 = plVar30[1];
                  plVar2 = (int64_t *)(local_c8 + 0x10 + lVar38 * 8);
                  lVar27 = *plVar2;
                  lVar3 = plVar2[1];
                  plVar2 = (int64_t *)(uVar12 + lVar38 * 8);
                  *plVar2 = *plVar30 + lVar17;
                  plVar2[1] = lVar35 + lVar19;
                  plVar30 = (int64_t *)(uVar12 + 0x10 + lVar38 * 8);
                  *plVar30 = lVar27 + lVar17;
                  plVar30[1] = lVar3 + lVar19;
                  plVar30 = (int64_t *)(local_c8 + 0x20 + lVar38 * 8);
                  lVar35 = plVar30[1];
                  plVar2 = (int64_t *)(local_c8 + 0x30 + lVar38 * 8);
                  lVar27 = *plVar2;
                  lVar3 = plVar2[1];
                  plVar2 = (int64_t *)(uVar12 + 0x20 + lVar38 * 8);
                  *plVar2 = *plVar30 + lVar17;
                  plVar2[1] = lVar35 + lVar19;
                  plVar30 = (int64_t *)(uVar12 + 0x30 + lVar38 * 8);
                  *plVar30 = lVar27 + lVar17;
                  plVar30[1] = lVar3 + lVar19;
                  plVar30 = (int64_t *)(local_c8 + 0x40 + lVar38 * 8);
                  lVar35 = plVar30[1];
                  plVar2 = (int64_t *)(local_c8 + 0x50 + lVar38 * 8);
                  lVar27 = *plVar2;
                  lVar3 = plVar2[1];
                  plVar2 = (int64_t *)(uVar12 + 0x40 + lVar38 * 8);
                  *plVar2 = *plVar30 + lVar17;
                  plVar2[1] = lVar35 + lVar19;
                  plVar30 = (int64_t *)(uVar12 + 0x50 + lVar38 * 8);
                  *plVar30 = lVar27 + lVar17;
                  plVar30[1] = lVar3 + lVar19;
                  plVar30 = (int64_t *)(local_c8 + 0x60 + lVar38 * 8);
                  plVar2 = (int64_t *)(local_c8 + 0x70 + lVar38 * 8);
                  lVar35 = *plVar2;
                  lVar27 = plVar2[1];
                  auVar45._0_8_ = *plVar30 + lVar17;
                  auVar45._8_8_ = plVar30[1] + lVar19;
                  *(uint8_t (*) [16])(uVar12 + 0x60 + lVar38 * 8) = auVar45;
                  plVar30 = (int64_t *)(uVar12 + 0x70 + lVar38 * 8);
                  *plVar30 = lVar35 + lVar17;
                  plVar30[1] = lVar27 + lVar19;
                  lVar38 = lVar38 + 0x10;
                  lVar14 = lVar14 + 4;
                } while (lVar14 != 0);
              }
              uVar36 = 0;
              if (uVar26 != 0) {
                lVar14 = uVar12 + lVar38 * 8;
                lVar38 = local_c8 + lVar38 * 8;
                uVar36 = uVar26 << 5;
                uVar26 = 0;
                do {
                  plVar2 = (int64_t *)(lVar38 + uVar26);
                  plVar30 = (int64_t *)(lVar38 + 0x10 + uVar26);
                  auVar42._0_8_ = *plVar2 + (uint64_t)uVar29 * 4;
                  auVar42._8_8_ = plVar2[1] + (uint64_t)uVar29 * 4;
                  auVar46._0_8_ = *plVar30 + (uint64_t)uVar29 * 4;
                  auVar46._8_8_ = plVar30[1] + (uint64_t)uVar29 * 4;
                  *(uint8_t (*) [16])(lVar14 + uVar26) = auVar42;
                  *(uint8_t (*) [16])(lVar14 + 0x10 + uVar26) = auVar46;
                  uVar26 = uVar26 + 0x20;
                } while (uVar36 != uVar26);
              }
              if (uVar13 == local_100) goto LAB_013304ea;
            }
            uVar36 = ~uVar13 + local_100;
            uVar26 = local_100 & 3;
            if (uVar26 != 0) {
              do {
                *(uint64_t *)(uVar12 + uVar13 * 8) =
                     *(int64_t *)(local_c8 + uVar13 * 8) + uVar16 * 4;
                uVar13 = uVar13 + 1;
                uVar26 = uVar26 - 1;
              } while (uVar26 != 0);
            }
            if (2 < uVar36) {
              uVar36 = uVar16 * 4;
              do {
                *(uint64_t *)(uVar12 + uVar13 * 8) = *(int64_t *)(local_c8 + uVar13 * 8) + uVar36;
                *(uint64_t *)(uVar12 + 8 + uVar13 * 8) =
                     *(int64_t *)(local_c8 + 8 + uVar13 * 8) + uVar36;
                *(uint64_t *)(uVar12 + 0x10 + uVar13 * 8) =
                     *(int64_t *)(local_c8 + 0x10 + uVar13 * 8) + uVar36;
                *(uint64_t *)(uVar12 + 0x18 + uVar13 * 8) =
                     *(int64_t *)(local_c8 + 0x18 + uVar13 * 8) + uVar36;
                uVar13 = uVar13 + 4;
              } while (local_100 != uVar13);
            }
          }
LAB_013304ea:
          plVar30 = *(int64_t **)(this_ptr + 0x38);
          pvVar7 = _pthread_getspecific((void*)uVar36);
          if (pvVar7 != (void *)0x0) {
            plVar30 = *(int64_t **)(this_ptr + 0x38);
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              plVar30 = (int64_t *)plVar30[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar30 + 0x390))(g_0238fee8,0,uVar16,iVar5 - uVar29);
          FUN_00e83070();
        }
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = &g_025f0d98;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        (*g_025f0db0)();
        local_1f8 = puVar8;
        if (0 < (int)(uint)local_d0) {
          local_68 = CONCAT44(local_68._4_4_,(float)local_148);
          uVar36 = 0;
          do {
            FUN_015c2d90(0,g_023941ec,g_02390120,(uint64_t)local_68 & 0xffffffff);
            uVar36 = uVar36 + 1;
          } while (local_100 != uVar36);
        }
        plVar30 = *(int64_t **)local_118;
        if (plVar30 != (int64_t *)0x0) {
          local_1d0 = 0;
          if (this_ptr != 0) {
            FUN_00d50b00();
          }
          local_1d0 = '\x01';
          local_1d8 = this_ptr;
          (**(code **)(*plVar30 + 0x18))();
          if ((local_1d0 != '\0') && (local_1d8 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_01394a40();
        if ((local_300 != '\0') && (local_308 != 0)) {
          FUN_00d50b20();
        }
        cVar4 = FUN_01396430();
        if (cVar4 != '\0') {
          FUN_01396270();
        }
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar8 = local_138;
        uVar40 = (*local_128)();
        local_150 = puVar8;
        if (param_3 == '\0') {
          pcVar22 = *(code **)(this_ptr + 0x48);
          if (pcVar22 == 0x0) {
            local_58[0] = 1;
            local_60 = &g_024c5048;
            local_48 = local_48 & 0xffffffffffffff00;
          }
          else {
            FUN_00d50b00();
            local_58[0] = 1;
            local_60 = &g_024c5048;
            local_48 = local_48 & 0xffffffffffffff00;
            uVar40 = FUN_00d50b00();
          }
          local_48 = CONCAT71(local_48._1_7_,1);
          local_50 = pcVar22;
          FUN_00d8cb40(uVar40,&local_60);
          pcVar10 = local_78;
          if (local_70 == '\0') {
            if (((local_78 != 0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
               (local_78 != 0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_70 = '\0';
          }
          local_60 = &g_024c5048;
          if (((char)local_48 != '\0') && (local_50 != 0x0)) {
            FUN_00d50b20();
          }
          if (pcVar22 != 0x0) {
            FUN_00d50b20();
          }
          local_280 = pcVar10;
          local_278 = '\0';
          local_178 = pcVar10;
          FUN_0123d700(0,&local_280,(int64_t)(int)local_38,0);
          local_68 = local_60;
          if (local_60 == 0x0) {
            local_68 = 0x0;
            local_e0 = 0;
          }
          else if ((char)local_58[0] == '\0') {
            uVar40 = FUN_00d50b00();
            local_e0 = CONCAT71((int7)((uint64_t)uVar40 >> 8),1);
            if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58[0] = local_58[0] & 0xffffff00;
            local_e0 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
          }
          if ((local_278 != '\0') && (local_280 != 0x0)) {
            FUN_00d50b20();
          }
          local_60 = local_68;
          local_58[0] = local_58[0] & 0xffffff00;
          FUN_00d21140();
          if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
          pcVar22 = (uint64_t)*(uint *)(local_88 + 0xc);
          if ((int)*(uint *)(local_88 + 0xc) < 0) {
            local_80 = (void*)0x0;
            local_f0 = (uint64_t)local_f0._4_4_ << 0x20;
            local_a0 = 0x0;
            local_120 = 0;
          }
          else {
            local_120 = 0;
            local_a0 = 0x0;
            local_f0 = (uint64_t)local_f0._4_4_ << 0x20;
            local_80 = (void*)0x0;
            lVar14 = 0;
            do {
              pVar21 = (void*)pcVar22;
              if (lVar14 < (int)pVar21) {
                lVar38 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar14 * 8);
                if (lVar38 != 0) {
                  FUN_00d50b00();
                }
                pvVar7 = _pthread_getspecific(pVar21);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013de560();
                local_108 = local_60;
                pcVar22 = local_60;
                if (local_60 == 0x0) {
                  local_f8 = 0x0;
                }
                else {
                  local_f8 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
                  if ((char)local_58[0] == '\0') {
                    FUN_00d50b00();
                    if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                pvVar7 = _pthread_getspecific((void*)pcVar22);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar40 = FUN_013e6560();
                pcVar22 = local_60;
                if (local_60 == 0x0) {
                  local_170 = 0;
                  pcVar22 = 0x0;
                }
                else {
                  local_170 = CONCAT71((int7)((uint64_t)uVar40 >> 8),1);
                  if ((char)local_58[0] == '\0') {
                    FUN_00d50b00();
                    if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                if (lVar38 != 0) {
                  FUN_00d50b20();
                }
                if (pcVar22 == 0x0) goto LAB_01330bfa;
                if (local_a0 == 0x0) {
                  puVar8 = (void*)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar8 = local_138;
                  uVar40 = (*local_128)();
                  if (((char)local_f0 != '\0') && (local_80 != (void*)0x0)) {
                    uVar40 = FUN_00d50b20();
                  }
                  local_f0._0_4_ = (int)CONCAT71((int7)((uint64_t)uVar40 >> 8),1);
                  pcVar10 = FUN_00e8fc40();
                  FUN_00d4ff40();
                  *(code **)pcVar10 = local_138;
                  local_f0 = CONCAT44(local_f0._4_4_,
                                      (int)CONCAT71((int7)((uint64_t)local_138 >> 8),1));
                  uVar40 = (*local_128)();
                  local_120 = CONCAT71((int7)((uint64_t)uVar40 >> 8),1);
                  local_80 = puVar8;
                  local_a0 = pcVar10;
                }
                local_60 = local_108;
                local_58[0] = local_58[0] & 0xffffff00;
                FUN_00d21140();
                if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
                local_58[0] = local_58[0] & 0xffffff00;
                local_60 = pcVar22;
                FUN_00d21140();
                if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
                bVar37 = false;
              }
              else {
                local_170 = 0;
                local_f8 = 0x0;
                local_108 = 0x0;
LAB_01330bfa:
                if (local_80 != (void*)0x0) {
                  if (*(int *)((int64_t)local_80 + 0xc) != 0) {
                    ppcVar23 = *(code ***)local_80[2];
                    if (ppcVar23 != (code **)0x0) {
                      FUN_00d50b00();
                    }
                    local_c0 = ppcVar23;
                    FUN_00d23340();
                    pcVar22 = local_60;
                    local_78 = CONCAT71(local_78._1_7_,(char)local_58[0]);
                    ppcVar23 = &local_78;
                    ppcVar15 = (code **)local_58;
                    if ((char)local_58[0] == '\0') {
                      ppcVar15 = ppcVar23;
                    }
                    *(void*)ppcVar15 = 0;
                    if (((char)local_58[0] != '\0') && (pcVar22 != 0x0)) {
                      FUN_00d50b20();
                    }
                    if (((char)local_78 == '\0') && (pcVar22 != 0x0)) {
                      FUN_00d50b00();
                    }
                    pvVar7 = _pthread_getspecific((void*)ppcVar23);
                    ppcVar15 = local_c0;
                    if ((pvVar7 != (void *)0x0) &&
                       (lVar38 = FUN_00e8b990(), ppcVar15 = local_c0, lVar38 != 0)) {
                      ppcVar23 = local_c0;
                      ppcVar15 = (code **)local_c0[(uint64_t)(*(uint *)(lVar38 + 0x154) & 1) + 4];
                    }
                    local_188 = (**(code **)(*ppcVar15 + 0x380))();
                    pvVar7 = _pthread_getspecific((void*)ppcVar23);
                    pcVar10 = pcVar22;
                    if ((pvVar7 != (void *)0x0) && (lVar38 = FUN_00e8b990(), lVar38 != 0)) {
                      pcVar10 = *(code **)(pcVar22 +
                                          (uint64_t)(*(uint *)(lVar38 + 0x154) & 1) * 8 + 0x20);
                    }
                    lVar38 = (**(code **)(*(int64_t *)pcVar10 + 0x380))();
                    pvVar7 = _pthread_getspecific((void*)ppcVar23);
                    pcVar10 = pcVar22;
                    if ((pvVar7 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                      pcVar10 = *(code **)(pcVar22 +
                                          (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8 + 0x20);
                    }
                    lVar17 = (**(code **)(*(int64_t *)pcVar10 + 0x388))();
                    pvVar7 = _pthread_getspecific((void*)ppcVar23);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    cVar4 = FUN_014bc070();
                    lVar17 = lVar17 + lVar38;
                    if (cVar4 == '\0') {
                      pvVar7 = _pthread_getspecific((void*)ppcVar23);
                      pcVar10 = pcVar22;
                      if ((pvVar7 != (void *)0x0) && (lVar38 = FUN_00e8b990(), lVar38 != 0)) {
                        pcVar10 = *(code **)(pcVar22 +
                                            (uint64_t)(*(uint *)(lVar38 + 0x154) & 1) * 8 + 0x20);
                      }
                      cVar4 = (**(code **)(*(int64_t *)pcVar10 + 0x3c0))();
                      if (cVar4 == '\0') {
                        pvVar7 = _pthread_getspecific((void*)ppcVar23);
                        pcVar10 = pcVar22;
                        if ((pvVar7 != (void *)0x0) && (lVar38 = FUN_00e8b990(), lVar38 != 0)) {
                          pcVar10 = *(code **)(pcVar22 +
                                              (uint64_t)(*(uint *)(lVar38 + 0x154) & 1) * 8 + 0x20)
                          ;
                        }
                        cVar4 = (**(code **)(*(int64_t *)pcVar10 + 0x3d0))();
                        if (cVar4 == '\0') {
                          pvVar7 = _pthread_getspecific((void*)ppcVar23);
                          pcVar10 = pcVar22;
                          if ((pvVar7 != (void *)0x0) && (lVar38 = FUN_00e8b990(), lVar38 != 0)) {
                            pcVar10 = *(code **)(pcVar22 +
                                                (uint64_t)(*(uint *)(lVar38 + 0x154) & 1) * 8 +
                                                0x20);
                          }
                          lVar38 = (**(code **)(*(int64_t *)pcVar10 + 0x380))();
                          pvVar7 = _pthread_getspecific((void*)ppcVar23);
                          pcVar10 = pcVar22;
                          if ((pvVar7 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                            pcVar10 = *(code **)(pcVar22 +
                                                (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8 +
                                                0x20);
                          }
                          lVar17 = (**(code **)(*(int64_t *)pcVar10 + 0x3b0))();
                          lVar17 = lVar38 + lVar11 + lVar17;
                        }
                      }
                    }
                    pcVar10 = *(code **)(this_ptr + 0x48);
                    if (pcVar10 != 0x0) {
                      FUN_00d50b00();
                    }
                    pvVar7 = _pthread_getspecific((void*)ppcVar23);
                    ppcVar15 = local_c0;
                    if ((pvVar7 != (void *)0x0) &&
                       (lVar38 = FUN_00e8b990(), ppcVar15 = local_c0, lVar38 != 0)) {
                      ppcVar23 = local_c0;
                      ppcVar15 = (code **)local_c0[(uint64_t)(*(uint *)(lVar38 + 0x154) & 1) + 4];
                    }
                    pVar21 = (void*)ppcVar23;
                    lVar38 = (**(code **)(*ppcVar15 + 0x380))();
                    local_168 = ((double)lVar38 / local_148) * g_023907c0;
                    pvVar7 = _pthread_getspecific(pVar21);
                    ppcVar23 = local_c0;
                    if ((pvVar7 != (void *)0x0) &&
                       (lVar38 = FUN_00e8b990(), ppcVar23 = local_c0, lVar38 != 0)) {
                      ppcVar23 = (code **)local_c0[(uint64_t)(*(uint *)(lVar38 + 0x154) & 1) + 4];
                    }
                    local_d4 = (float)(**(code **)(*ppcVar23 + 0x3e0))();
                    local_58[0] = 3;
                    local_60 = &g_024c5048;
                    local_48 = local_48 & 0xffffffffffffff00;
                    if (pcVar10 != 0x0) {
                      FUN_00d50b00();
                    }
                    local_40 = (int)local_168;
                    local_3c = (int)local_d4;
                    local_48 = CONCAT71(local_48._1_7_,1);
                    local_60 = &g_02509758;
                    local_50 = pcVar10;
                    FUN_00d8cb40(local_3c,&local_60);
                    pcVar18 = local_78;
                    if (local_70 == '\0') {
                      if (((local_78 != 0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
                         (local_78 != 0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      local_70 = '\0';
                    }
                    local_60 = &g_024c5048;
                    if (((char)local_48 != '\0') && (local_50 != 0x0)) {
                      FUN_00d50b20();
                    }
                    if (pcVar10 != 0x0) {
                      FUN_00d50b20();
                    }
                    local_270 = *(int64_t *)(this_ptr + 0x38);
                    local_268 = '\0';
                    local_260 = pcVar18;
                    local_258 = '\0';
                    FUN_0123d700(local_188,&local_260,lVar17 - local_188,0);
                    pcVar10 = local_60;
                    if ((char)local_58[0] == '\0') {
                      if (local_60 != 0x0) {
                        FUN_00d50b00();
                        if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    else {
                      local_58[0] = local_58[0] & 0xffffff00;
                    }
                    if ((local_258 != '\0') && (local_260 != 0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_268 != '\0') && (local_270 != 0)) {
                      FUN_00d50b20();
                    }
                    local_58[0] = local_58[0] & 0xffffff00;
                    local_60 = pcVar10;
                    FUN_00d21140();
                    if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                      FUN_00d50b20();
                    }
                    if (local_a0 != 0x0) {
                      local_58[0] = local_58[0] & 0xffffff00;
                      local_60 = 0x0;
                      local_50 = local_a0;
                      local_48 = 0xffffffff;
                      local_40 = 0;
                      local_48._4_4_ = 0;
                      while( true ) {
                        if (local_48._4_4_ != 0) {
                          if (local_48._4_4_ < 1) {
                            iVar5 = -local_48._4_4_;
                          }
                          else {
                            iVar5 = (int)local_48 - local_48._4_4_;
                            local_48 = CONCAT44(local_48._4_4_,iVar5);
                            FUN_00d23690();
                            local_40 = local_40 + local_48._4_4_;
                            iVar5 = 0;
                          }
                          local_48 = CONCAT44(iVar5,(int)local_48);
                        }
                        lVar38 = (int64_t)(int)local_48;
                        iVar5 = (int)local_48 + 1;
                        local_48 = CONCAT44(local_48._4_4_,iVar5);
                        if (*(int *)(local_50 + 0xc) <= iVar5) break;
                        local_60 = *(code **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar38 * 8);
                        pvVar7 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10))
                        ;
                        if (pvVar7 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        local_250 = pcVar10;
                        local_248 = '\0';
                        FUN_014bbe30();
                        if ((local_248 != '\0') && (local_250 != 0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      FUN_013dc230();
                    }
                    if (pcVar10 != 0x0) {
                      FUN_00d50b20();
                    }
                    if (pcVar18 != 0x0) {
                      FUN_00d50b20();
                    }
                    if (pcVar22 != 0x0) {
                      FUN_00d50b20();
                    }
                    if (local_c0 != (code **)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  if ((char)local_f0 != '\0') {
                    FUN_00d50b20();
                  }
                  local_f0 = local_f0 & 0xffffffff00000000;
                }
                bVar37 = true;
                if (local_a0 == 0x0) {
                  local_80 = (void*)0x0;
                  local_a0 = 0x0;
                }
                else {
                  if ((char)local_120 != '\0') {
                    FUN_00d50b20();
                  }
                  local_80 = (void*)0x0;
                  local_a0 = 0x0;
                  local_120 = 0;
                }
              }
              if (((char)local_170 != '\0') && (!bVar37)) {
                FUN_00d50b20();
              }
              if (((char)local_f8 != '\0') && (local_108 != 0x0)) {
                FUN_00d50b20();
              }
              pcVar22 = (int64_t)*(int *)(local_88 + 0xc);
              bVar37 = lVar14 < (int64_t)pcVar22;
              lVar14 = lVar14 + 1;
            } while (bVar37);
          }
          if (*(code **)(this_ptr + 200) != 0x0) {
            local_58[0] = local_58[0] & 0xffffff00;
            local_60 = 0x0;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            local_50 = *(code **)(this_ptr + 200);
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar5 = -local_48._4_4_;
                }
                else {
                  iVar5 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar5);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar5 = 0;
                }
                local_48 = CONCAT44(iVar5,(int)local_48);
              }
              lVar14 = (int64_t)(int)local_48;
              iVar5 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar5);
              if (*(int *)(local_50 + 0xc) <= iVar5) break;
              local_60 = *(code **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar14 * 8);
              pvVar7 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_240 = local_68;
              local_238 = '\0';
              FUN_014bbe30();
              if ((local_238 != '\0') && (local_240 != 0x0)) {
                FUN_00d50b20();
              }
            }
            pcVar22 = local_50;
            FUN_0131c810();
          }
          if (((char)local_120 != '\0') && (local_a0 != 0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_f0 != '\0') && (local_80 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (local_178 != 0x0) {
            FUN_00d50b20();
          }
        }
        else {
          pcVar10 = FUN_00e8fc40();
          FUN_00d4ff40();
          *(code **)pcVar10 = local_138;
          (*local_128)();
          pcVar22 = *(code **)(this_ptr + 200);
          if (*(int *)(pcVar22 + 0xc) < 1) {
LAB_01330828:
            local_e0 = 0;
            local_68 = 0x0;
          }
          else {
            lVar14 = 0;
            while( true ) {
              lVar38 = *(int64_t *)(*(int64_t *)(pcVar22 + 0x10) + lVar14 * 8);
              if (lVar38 != 0) {
                FUN_00d50b00();
              }
              pVar21 = (void*)pcVar22;
              pvVar7 = _pthread_getspecific(pVar21);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bc000();
              pcVar22 = local_60;
              if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                FUN_00d50b20();
              }
              if (pcVar22 != 0x0) break;
              if (lVar38 != 0) {
                FUN_00d50b20();
              }
              lVar14 = lVar14 + 1;
              pcVar22 = *(code **)(this_ptr + 200);
              if (*(int *)(pcVar22 + 0xc) <= lVar14) goto LAB_01330828;
            }
            pvVar7 = _pthread_getspecific(pVar21);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc000();
            local_68 = local_60;
            pcVar22 = local_60;
            if (local_60 == 0x0) {
              local_68 = 0x0;
              local_e0 = 0;
            }
            else {
              local_e0 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
              if ((char)local_58[0] == '\0') {
                FUN_00d50b00();
                if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            local_60 = local_68;
            local_58[0] = local_58[0] & 0xffffff00;
            FUN_00d235a0();
            if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
              FUN_00d50b20();
            }
            if (lVar38 != 0) {
              FUN_00d50b20();
            }
          }
          lVar14 = *(int64_t *)(this_ptr + 0xd8);
          if (0 < *(int *)(lVar14 + 0xc)) {
            lVar38 = 0;
            do {
              pVar21 = (void*)pcVar22;
              lVar14 = *(int64_t *)(*(int64_t *)(lVar14 + 0x10) + lVar38 * 8);
              if (lVar14 != 0) {
                FUN_00d50b00();
              }
              pvVar7 = _pthread_getspecific(pVar21);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bc000();
              pcVar22 = local_60;
              if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                FUN_00d50b20();
              }
              if (pcVar22 != 0x0) {
                pvVar7 = _pthread_getspecific(pVar21);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bc000();
                pcVar22 = local_78;
                if (local_70 == '\0') {
                  if (local_78 != 0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_70 = '\0';
                }
                local_60 = pcVar22;
                local_58[0] = local_58[0] & 0xffffff00;
                FUN_00d235a0();
                if (((char)local_58[0] != '\0') && (local_60 != 0x0)) {
                  FUN_00d50b20();
                }
                if (pcVar22 != 0x0) {
                  FUN_00d50b20();
                }
                if ((local_70 != '\0') && (local_78 != 0x0)) {
                  FUN_00d50b20();
                }
              }
              if (lVar14 != 0) {
                FUN_00d50b20();
              }
              lVar38 = lVar38 + 1;
              lVar14 = *(int64_t *)(this_ptr + 0xd8);
              pcVar22 = (int64_t)*(int *)(lVar14 + 0xc);
            } while (lVar38 < (int64_t)pcVar22);
          }
          if (pcVar10 != 0x0) {
            local_58[0] = local_58[0] & 0xffffff00;
            local_60 = 0x0;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_48._4_4_ = 0;
            local_50 = pcVar10;
            while( true ) {
              if (local_48._4_4_ != 0) {
                if (local_48._4_4_ < 1) {
                  iVar5 = -local_48._4_4_;
                }
                else {
                  iVar5 = (int)local_48 - local_48._4_4_;
                  local_48 = CONCAT44(local_48._4_4_,iVar5);
                  FUN_00d23690();
                  local_40 = local_40 + local_48._4_4_;
                  iVar5 = 0;
                }
                local_48 = CONCAT44(iVar5,(int)local_48);
              }
              lVar14 = (int64_t)(int)local_48;
              iVar5 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar5);
              if (*(int *)(local_50 + 0xc) <= iVar5) break;
              local_60 = *(code **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar14 * 8);
              pvVar7 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0123da50();
              local_78 = local_60;
              local_70 = '\0';
              FUN_00d21140();
              if ((local_70 != '\0') && (local_78 != 0x0)) {
                FUN_00d50b20();
              }
            }
            pcVar22 = local_50;
            FUN_013dc2c0();
            FUN_00d50b20();
          }
        }
        if (local_110 == 0x0) {
          pvVar7 = _pthread_getspecific((void*)pcVar22);
          pcVar22 = local_68;
          if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), pcVar22 = local_68, lVar14 != 0))
          {
            pcVar22 = *(code **)(local_68 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20);
          }
          (**(code **)(*(int64_t *)pcVar22 + 0x410))(local_d0,0,0,local_38);
        }
        else {
          uVar36 = FUN_00e83010();
          if (0 < (int)(uint)local_d0) {
            if ((uint)local_d0 < 4) {
              uVar16 = 0;
            }
            else if ((uVar36 < local_c8 + local_100 * 8) && (local_c8 < uVar36 + local_100 * 8)) {
              uVar16 = 0;
            }
            else {
              uVar16 = (uint64_t)((uint)local_100 & 0xfffffffc);
              uVar13 = (uVar16 - 4 >> 2) + 1;
              uVar12 = (uint64_t)((uint)uVar13 & 3);
              uVar6 = (uint32_t)((uint64_t)local_a8 >> 0x20);
              if (uVar16 - 4 < 0xc) {
                lVar38 = 0;
              }
              else {
                lVar14 = -(uVar13 & 0xfffffffffffffffc);
                lVar38 = 0;
                auVar43._8_4_ = (int)local_a8;
                auVar43._0_8_ = local_a8;
                auVar43._12_4_ = uVar6;
                lVar17 = (int64_t)local_a8 * 4;
                lVar19 = auVar43._8_8_ * 4;
                do {
                  plVar30 = (int64_t *)(local_c8 + lVar38 * 8);
                  lVar35 = plVar30[1];
                  plVar2 = (int64_t *)(local_c8 + 0x10 + lVar38 * 8);
                  lVar27 = *plVar2;
                  lVar3 = plVar2[1];
                  plVar2 = (int64_t *)(uVar36 + lVar38 * 8);
                  *plVar2 = *plVar30 + lVar17;
                  plVar2[1] = lVar35 + lVar19;
                  plVar30 = (int64_t *)(uVar36 + 0x10 + lVar38 * 8);
                  *plVar30 = lVar27 + lVar17;
                  plVar30[1] = lVar3 + lVar19;
                  plVar30 = (int64_t *)(local_c8 + 0x20 + lVar38 * 8);
                  lVar35 = plVar30[1];
                  plVar2 = (int64_t *)(local_c8 + 0x30 + lVar38 * 8);
                  lVar27 = *plVar2;
                  lVar3 = plVar2[1];
                  plVar2 = (int64_t *)(uVar36 + 0x20 + lVar38 * 8);
                  *plVar2 = *plVar30 + lVar17;
                  plVar2[1] = lVar35 + lVar19;
                  plVar30 = (int64_t *)(uVar36 + 0x30 + lVar38 * 8);
                  *plVar30 = lVar27 + lVar17;
                  plVar30[1] = lVar3 + lVar19;
                  plVar30 = (int64_t *)(local_c8 + 0x40 + lVar38 * 8);
                  lVar35 = plVar30[1];
                  plVar2 = (int64_t *)(local_c8 + 0x50 + lVar38 * 8);
                  lVar27 = *plVar2;
                  lVar3 = plVar2[1];
                  plVar2 = (int64_t *)(uVar36 + 0x40 + lVar38 * 8);
                  *plVar2 = *plVar30 + lVar17;
                  plVar2[1] = lVar35 + lVar19;
                  plVar30 = (int64_t *)(uVar36 + 0x50 + lVar38 * 8);
                  *plVar30 = lVar27 + lVar17;
                  plVar30[1] = lVar3 + lVar19;
                  plVar30 = (int64_t *)(local_c8 + 0x60 + lVar38 * 8);
                  plVar2 = (int64_t *)(local_c8 + 0x70 + lVar38 * 8);
                  lVar35 = *plVar2;
                  lVar27 = plVar2[1];
                  auVar47._0_8_ = *plVar30 + lVar17;
                  auVar47._8_8_ = plVar30[1] + lVar19;
                  *(uint8_t (*) [16])(uVar36 + 0x60 + lVar38 * 8) = auVar47;
                  plVar30 = (int64_t *)(uVar36 + 0x70 + lVar38 * 8);
                  *plVar30 = lVar35 + lVar17;
                  plVar30[1] = lVar27 + lVar19;
                  lVar38 = lVar38 + 0x10;
                  lVar14 = lVar14 + 4;
                } while (lVar14 != 0);
              }
              pcVar22 = 0x0;
              if (uVar12 != 0) {
                lVar14 = uVar36 + lVar38 * 8;
                lVar38 = local_c8 + lVar38 * 8;
                pcVar22 = (uVar12 << 5);
                pcVar10 = 0x0;
                auVar41._8_4_ = (int)local_a8;
                auVar41._0_8_ = local_a8;
                auVar41._12_4_ = uVar6;
                lVar17 = auVar41._8_8_ * 4;
                do {
                  auVar44._0_8_ = *(int64_t *)(pcVar10 + lVar38) + (int64_t)local_a8 * 4;
                  auVar44._8_8_ = *(int64_t *)(pcVar10 + lVar38 + 8) + lVar17;
                  auVar48._0_8_ = *(int64_t *)(pcVar10 + lVar38 + 0x10) + (int64_t)local_a8 * 4;
                  auVar48._8_8_ = *(int64_t *)(pcVar10 + lVar38 + 0x10 + 8) + lVar17;
                  *(uint8_t (*) [16])(pcVar10 + lVar14) = auVar44;
                  *(uint8_t (*) [16])(pcVar10 + lVar14 + 0x10) = auVar48;
                  pcVar10 = pcVar10 + 0x20;
                } while (pcVar22 != pcVar10);
              }
              if (uVar16 == local_100) goto LAB_0133233b;
            }
            pcVar22 = (~uVar16 + local_100);
            uVar12 = local_100 & 3;
            if (uVar12 != 0) {
              do {
                *(int64_t *)(uVar36 + uVar16 * 8) =
                     *(int64_t *)(local_c8 + uVar16 * 8) + (int64_t)local_a8 * 4;
                uVar16 = uVar16 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            if (((int64_t)&MACH_HEADER.magic + 2) < pcVar22) {
              pcVar22 = ((int64_t)local_a8 * 4);
              do {
                *(code **)(uVar36 + uVar16 * 8) = pcVar22 + *(int64_t *)(local_c8 + uVar16 * 8);
                *(code **)(uVar36 + 8 + uVar16 * 8) =
                     pcVar22 + *(int64_t *)(local_c8 + 8 + uVar16 * 8);
                *(code **)(uVar36 + 0x10 + uVar16 * 8) =
                     pcVar22 + *(int64_t *)(local_c8 + 0x10 + uVar16 * 8);
                *(code **)(uVar36 + 0x18 + uVar16 * 8) =
                     pcVar22 + *(int64_t *)(local_c8 + 0x18 + uVar16 * 8);
                uVar16 = uVar16 + 4;
              } while (local_100 != uVar16);
            }
          }
LAB_0133233b:
          pvVar7 = _pthread_getspecific((void*)pcVar22);
          pcVar10 = local_68;
          if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), pcVar10 = local_68, lVar14 != 0))
          {
            pcVar22 = local_68;
            pcVar10 = *(code **)(local_68 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20);
          }
          pVar21 = (void*)pcVar22;
          local_230 = local_110;
          local_228 = '\0';
          (**(code **)(*(int64_t *)pcVar10 + 0x438))();
          if ((local_228 != '\0') && (local_230 != 0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar21);
          pcVar22 = local_68;
          if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), pcVar22 = local_68, lVar14 != 0))
          {
            pcVar22 = *(code **)(local_68 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20);
          }
          pcVar10 = local_a8;
          (**(code **)(*(int64_t *)pcVar22 + 0x428))
                    (local_a8,local_d0,(uint64_t)local_140 & 0xffffffff);
          pvVar7 = _pthread_getspecific((void*)pcVar10);
          pcVar22 = local_68;
          if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), pcVar22 = local_68, lVar14 != 0))
          {
            pcVar22 = *(code **)(local_68 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20);
          }
          (**(code **)(*(int64_t *)pcVar22 + 0x410))
                    (local_d0,0,local_a8,(uint64_t)local_140 & 0xffffffff);
          FUN_00e83070();
        }
        plVar30 = *(int64_t **)local_118;
        if (plVar30 != (int64_t *)0x0) {
          local_1c0 = 0;
          if (this_ptr != 0) {
            FUN_00d50b00();
          }
          local_1c0 = '\x01';
          local_1c8 = this_ptr;
          (**(code **)(*plVar30 + 0x18))();
          if ((local_1c0 != '\0') && (local_1c8 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_88 == 0x0) {
LAB_013325da:
          iVar5 = 1;
        }
        else {
          local_58[0] = local_58[0] & 0xffffff00;
          local_60 = 0x0;
          local_50 = local_88;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          iVar5 = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar33 = -local_48._4_4_;
              }
              else {
                iVar33 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar33);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar33 = 0;
              }
              local_48 = CONCAT44(iVar33,(int)local_48);
            }
            lVar14 = (int64_t)(int)local_48;
            iVar33 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar33);
            if (*(int *)(local_50 + 0xc) <= iVar33) break;
            local_60 = *(code **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar14 * 8);
            pvVar7 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e6560();
            pcVar22 = local_78;
            if ((local_70 != '\0') && (local_78 != 0x0)) {
              FUN_00d50b20();
            }
            iVar5 = (iVar5 + 1) - (uint)(pcVar22 == 0x0);
          }
          FUN_001150f0();
          if (iVar5 == 0) goto LAB_013325da;
        }
        if (local_88 != 0x0) {
          local_58[0] = local_58[0] & 0xffffff00;
          local_60 = 0x0;
          local_50 = local_88;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_20c = (float)iVar5;
          local_48._4_4_ = 0;
          local_154 = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar5 = -local_48._4_4_;
              }
              else {
                iVar5 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar5);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar5 = 0;
              }
              local_48 = CONCAT44(iVar5,(int)local_48);
            }
            lVar14 = (int64_t)(int)local_48;
            iVar5 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            if (*(int *)(local_50 + 0xc) <= iVar5) break;
            lVar38 = *(int64_t *)(local_50 + 0x10);
            local_60 = *(code **)(lVar38 + 8 + lVar14 * 8);
            pvVar7 = _pthread_getspecific((void*)lVar38);
            pVar21 = (void*)lVar38;
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            pcVar22 = local_78;
            if (local_70 == '\0') {
              if (local_78 != 0x0) {
                FUN_00d50b00();
                if ((local_70 != '\0') && (local_78 != 0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01332718;
              }
            }
            else if (local_78 != 0x0) {
LAB_01332718:
              local_130 = pcVar22;
              pvVar7 = _pthread_getspecific(pVar21);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013e6560();
              pcVar10 = local_78;
              if (local_70 == '\0') {
                if (local_78 != 0x0) {
                  FUN_00d50b00();
                  if ((local_70 != '\0') && (local_78 != 0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_0133279a;
                }
              }
              else if (local_78 != 0x0) {
LAB_0133279a:
                local_138 = pcVar10;
                pvVar7 = _pthread_getspecific(pVar21);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bc000();
                pcVar10 = local_78;
                if (local_70 == '\0') {
                  if (local_78 != 0x0) {
                    FUN_00d50b00();
                    local_a8 = pcVar10;
                    if ((local_70 != '\0') && (local_78 != 0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01332824;
                  }
                }
                else {
                  local_a8 = local_78;
                  if (local_78 != 0x0) {
LAB_01332824:
                    pvVar7 = _pthread_getspecific(pVar21);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_014bc340();
                    pcVar10 = local_78;
                    if ((g_027c0170 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
                      g_02790158 = FUN_007ef2d0();
                      g_02790140 = "MUAudioSourcePrincipalItem";
                      g_02790148 = 0x138;
                      g_02790150 = FUN_010fe5c0;
                      g_02790160 = 0;
                      ram_0000000002790168 = 0;
                      g_02790170 = 0;
                      ram_0000000002790178 = 0;
                      g_02790180 = 0;
                      ram_0000000002790188 = 0;
                      g_02790190 = 0;
                      ram_0000000002790198 = 0;
                      g_027901a0 = 0;
                      ram_00000000027901a8 = 0;
                      g_027901b0 = 0;
                      ram_00000000027901b8 = 0;
                      g_027901c0 = 0;
                      ram_00000000027901c8 = 0;
                      g_027901d0 = 0;
                      ram_00000000027901d8 = 0;
                      g_027901e0 = 0;
                      ram_00000000027901e8 = 0;
                      g_027901f0 = 0;
                      ram_00000000027901f8 = 0;
                      g_02790200 = 0;
                      ___cxa_guard_release();
                      pcVar22 = local_130;
                    }
                    ppcVar23 = (code **)&g_02802688;
                    if (pcVar10 != 0x0) {
                      (**(code **)(*(int64_t *)pcVar10 + 0x360))();
                      cVar4 = FUN_00e85ea0();
                      ppcVar23 = &local_78;
                      if (cVar4 == '\0') {
                        ppcVar23 = (code **)&g_02802688;
                      }
                    }
                    pcVar10 = *ppcVar23;
                    if (*(char *)(ppcVar23 + 1) == '\0') {
                      if (pcVar10 != 0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      *(void*)(ppcVar23 + 1) = 0;
                    }
                    pVar21 = (void*)ppcVar23;
                    if ((local_70 != '\0') && (local_78 != 0x0)) {
                      FUN_00d50b20();
                    }
                    local_200 = pcVar10;
                    pvVar7 = _pthread_getspecific(pVar21);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_014bc420();
                    pcVar18 = local_78;
                    if ((g_027c0170 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
                      g_02790158 = FUN_007ef2d0();
                      g_02790140 = "MUAudioSourcePrincipalItem";
                      g_02790148 = 0x138;
                      g_02790150 = FUN_010fe5c0;
                      g_02790160 = 0;
                      ram_0000000002790168 = 0;
                      g_02790170 = 0;
                      ram_0000000002790178 = 0;
                      g_02790180 = 0;
                      ram_0000000002790188 = 0;
                      g_02790190 = 0;
                      ram_0000000002790198 = 0;
                      g_027901a0 = 0;
                      ram_00000000027901a8 = 0;
                      g_027901b0 = 0;
                      ram_00000000027901b8 = 0;
                      g_027901c0 = 0;
                      ram_00000000027901c8 = 0;
                      g_027901d0 = 0;
                      ram_00000000027901d8 = 0;
                      g_027901e0 = 0;
                      ram_00000000027901e8 = 0;
                      g_027901f0 = 0;
                      ram_00000000027901f8 = 0;
                      g_02790200 = 0;
                      ___cxa_guard_release();
                      pcVar10 = local_200;
                      pcVar22 = local_130;
                    }
                    ppcVar23 = (code **)&g_02802688;
                    if (pcVar18 != 0x0) {
                      (**(code **)(*(int64_t *)pcVar18 + 0x360))();
                      cVar4 = FUN_00e85ea0();
                      ppcVar23 = &local_78;
                      if (cVar4 == '\0') {
                        ppcVar23 = (code **)&g_02802688;
                      }
                    }
                    local_e8 = (code **)*ppcVar23;
                    if (*(char *)(ppcVar23 + 1) == '\0') {
                      if (local_e8 != (code **)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      *(void*)(ppcVar23 + 1) = 0;
                    }
                    if ((local_70 != '\0') && (local_78 != 0x0)) {
                      FUN_00d50b20();
                    }
                    if (pcVar10 == 0x0) {
                      bVar37 = false;
                      local_168 = (double)((uint64_t)local_168 & 0xffffffff00000000);
                    }
                    else {
                      pvVar7 = _pthread_getspecific((void*)ppcVar23);
                      pcVar18 = pcVar10;
                      if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                        pcVar18 = *(code **)(pcVar10 +
                                            ((uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4) * 8);
                      }
                      cVar4 = (**(code **)(*(int64_t *)pcVar18 + 0x3c0))();
                      if (cVar4 == '\0') {
                        pvVar7 = _pthread_getspecific((void*)ppcVar23);
                        if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                          pcVar10 = *(code **)(pcVar10 +
                                              ((uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4) * 8);
                        }
                        uVar6 = (**(code **)(*(int64_t *)pcVar10 + 0x3d0))();
                        local_168 = (double)CONCAT44(local_168._4_4_,uVar6);
                        bVar37 = false;
                      }
                      else {
                        bVar37 = true;
                        local_168 = (double)((uint64_t)local_168 & 0xffffffff00000000);
                      }
                    }
                    pVar21 = (void*)ppcVar23;
                    if (local_e8 == (code **)0x0) {
                      bVar39 = false;
                      local_d4 = 0.0;
                    }
                    else {
                      pvVar7 = _pthread_getspecific(pVar21);
                      ppcVar15 = local_e8;
                      if ((pvVar7 != (void *)0x0) &&
                         (lVar14 = FUN_00e8b990(), ppcVar15 = local_e8, lVar14 != 0)) {
                        ppcVar23 = local_e8;
                        ppcVar15 = (code **)local_e8[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4]
                        ;
                      }
                      cVar4 = (**(code **)(*ppcVar15 + 0x3c0))();
                      pVar21 = (void*)ppcVar23;
                      if (cVar4 == '\0') {
                        pvVar7 = _pthread_getspecific(pVar21);
                        ppcVar15 = local_e8;
                        if ((pvVar7 != (void *)0x0) &&
                           (lVar14 = FUN_00e8b990(), ppcVar15 = local_e8, lVar14 != 0)) {
                          ppcVar23 = local_e8;
                          ppcVar15 = (code **)local_e8[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) +
                                                       4];
                        }
                        pVar21 = (void*)ppcVar23;
                        local_d4 = (float)(**(code **)(*ppcVar15 + 0x3c8))();
                        bVar39 = false;
                      }
                      else {
                        bVar39 = true;
                        local_d4 = 0.0;
                      }
                    }
                    pvVar7 = _pthread_getspecific(pVar21);
                    pcVar10 = pcVar22;
                    if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                      pcVar10 = *(code **)(pcVar22 +
                                          (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20);
                    }
                    lVar38 = (**(code **)(*(int64_t *)pcVar10 + 0x388))();
                    lVar14 = lVar38 + 3;
                    if (-1 < lVar38) {
                      lVar14 = lVar38;
                    }
                    pvVar7 = _pthread_getspecific(pVar21);
                    pcVar10 = pcVar22;
                    if ((pvVar7 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                      pcVar10 = *(code **)(pcVar22 +
                                          (uint64_t)(*(uint *)(lVar17 + 0x154) & 1) * 8 + 0x20);
                    }
                    pcVar18 = (**(code **)(*(int64_t *)pcVar10 + 0x380))();
                    lVar14 = lVar14 >> 2;
                    pcVar10 = pcVar18 + lVar38;
                    lVar38 = lVar11;
                    if (lVar14 < lVar11) {
                      lVar38 = lVar14;
                    }
                    lVar35 = 0;
                    lVar19 = lVar9;
                    lVar17 = lVar9;
                    if (local_d4._0_1_ != '\0') {
                      lVar19 = lVar11;
                      lVar17 = lVar35;
                    }
                    if (bVar39) {
                      lVar19 = lVar35;
                      lVar17 = lVar35;
                    }
                    if (lVar14 < lVar17) {
                      lVar17 = lVar14;
                    }
                    pcVar31 = pcVar10 + -lVar17;
                    lVar27 = lVar9;
                    lVar17 = lVar9;
                    if (local_168._0_1_ != '\0') {
                      lVar27 = lVar11;
                      lVar17 = lVar35;
                    }
                    pcVar32 = 0x0;
                    if (bVar37) {
                      lVar17 = 0;
                      lVar27 = 0;
                    }
                    if (lVar14 < lVar17) {
                      lVar17 = lVar14;
                    }
                    if (lVar14 < lVar27) {
                      lVar27 = lVar14;
                    }
                    if (lVar14 < lVar19) {
                      lVar19 = lVar14;
                    }
                    pcVar24 = pcVar10 + -lVar19;
                    pcVar28 = pcVar18 + lVar27;
                    pcVar25 = pcVar24;
                    local_178 = pcVar10;
                    local_128 = pcVar18;
                    do {
                      pVar21 = (void*)pcVar25;
                      if ((int)pcVar32 == 0) {
                        pvVar7 = _pthread_getspecific(pVar21);
                        pcVar25 = pcVar22;
                        if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                          pcVar25 = *(code **)(pcVar22 +
                                              (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20)
                          ;
                        }
                        cVar4 = (**(code **)(*(int64_t *)pcVar25 + 0x3c0))();
                        pcVar25 = pcVar24;
                        pcVar34 = local_128;
                        local_140 = pcVar10;
                        local_f8 = pcVar24;
                        local_a0 = pcVar28;
                        if (cVar4 == '\0') {
                          pvVar7 = _pthread_getspecific((void*)pcVar24);
                          if (pvVar7 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          cVar4 = FUN_014bc070();
                          pcVar34 = local_128;
                          local_140 = pcVar10;
                          local_f8 = pcVar24;
                          local_a0 = pcVar28;
                          if (cVar4 == '\0') goto LAB_01332c76;
                        }
LAB_01332f01:
                        pcVar22 = local_140;
                        local_108 = pcVar32;
                        if (0 < (int)(uint)local_d0) {
                          local_f0 = (int64_t)local_140 - (int64_t)local_f8;
                          local_120 = CONCAT44(local_120._4_4_,(float)(int64_t)local_f0);
                          local_148 = (double)((int64_t)local_a0 - (int64_t)pcVar34);
                          local_170 = CONCAT44(local_170._4_4_,(float)(int64_t)local_148);
                          local_188 = (int64_t)pcVar34 - (int64_t)local_f8;
                          uVar36 = 0;
                          pcVar25 = local_f8;
                          do {
                            if ((int64_t)pcVar34 < (int64_t)local_140) {
                              pcVar25 = (*(int64_t *)(local_208 + uVar36 * 8) +
                                                (int64_t)pcVar34 * 4);
                              local_c0 = (code **)(*(int64_t *)(local_c8 + uVar36 * 8) +
                                                  (int64_t)pcVar34 * 4);
                              lVar14 = 0;
                              local_38 = pcVar25;
                              do {
                                pvVar7 = _pthread_getspecific((void*)pcVar25);
                                pcVar10 = local_a8;
                                if ((pvVar7 != (void *)0x0) &&
                                   (lVar19 = FUN_00e8b990(), pcVar10 = local_a8, lVar19 != 0)) {
                                  pcVar25 = local_a8;
                                  pcVar10 = *(code **)(local_a8 +
                                                      (uint64_t)(*(uint *)(lVar19 + 0x154) & 1) * 8
                                                      + 0x20);
                                }
                                (**(code **)(*(int64_t *)pcVar10 + 0x3f8))();
                                pvVar7 = _pthread_getspecific((void*)pcVar25);
                                pcVar10 = local_68;
                                if ((pvVar7 != (void *)0x0) &&
                                   (lVar19 = FUN_00e8b990(), pcVar10 = local_68, lVar19 != 0)) {
                                  pcVar25 = local_68;
                                  pcVar10 = *(code **)(local_68 +
                                                      (uint64_t)(*(uint *)(lVar19 + 0x154) & 1) * 8
                                                      + 0x20);
                                }
                                (**(code **)(*(int64_t *)pcVar10 + 0x400))();
                                lVar14 = lVar14 + 1;
                              } while (pcVar34 + (lVar14 - (int64_t)pcVar22) != 0x0);
                            }
                            uVar36 = uVar36 + 1;
                          } while (uVar36 != local_100);
                        }
                        pcVar22 = local_130;
                        pvVar7 = _pthread_getspecific((void*)pcVar25);
                        pcVar32 = local_108;
                        pcVar10 = local_178;
                        pcVar34 = pcVar22;
                        if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                          pcVar34 = *(code **)(pcVar22 +
                                              (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20)
                          ;
                        }
                        cVar4 = (**(code **)(*(int64_t *)pcVar34 + 0x3c0))();
                        if (cVar4 != '\0') break;
                        pvVar7 = _pthread_getspecific((void*)pcVar25);
                        if (pvVar7 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        cVar4 = FUN_014bc070();
                        if (cVar4 != '\0') break;
                      }
                      else {
                        if ((int)pcVar32 != 1) {
                          pvVar7 = _pthread_getspecific(pVar21);
                          pcVar34 = pcVar22;
                          if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                            pcVar34 = *(code **)(pcVar22 +
                                                (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 +
                                                0x20);
                          }
                          cVar4 = (**(code **)(*(int64_t *)pcVar34 + 0x3d0))();
                          if (cVar4 != '\0') {
                            pvVar7 = _pthread_getspecific((void*)pcVar25);
                            if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                              pcVar22 = *(code **)(pcVar22 +
                                                  (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 +
                                                  0x20);
                            }
                            lVar14 = (**(code **)(*(int64_t *)pcVar22 + 0x3b8))();
                            pcVar34 = pcVar18 + (lVar14 - lVar11);
                            if ((int64_t)(pcVar18 + (lVar14 - lVar11)) < (int64_t)local_128) {
                              pcVar34 = local_128;
                            }
                            local_140 = pcVar10;
                            local_f8 = pcVar31;
                            local_a0 = pcVar34 + lVar38;
                            goto LAB_01332f01;
                          }
                          break;
                        }
                        pvVar7 = _pthread_getspecific(pVar21);
                        pcVar34 = pcVar22;
                        if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                          pcVar34 = *(code **)(pcVar22 +
                                              (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20)
                          ;
                        }
                        cVar4 = (**(code **)(*(int64_t *)pcVar34 + 0x3c8))();
                        if (cVar4 != '\0') {
                          pvVar7 = _pthread_getspecific((void*)pcVar25);
                          if ((pvVar7 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                            pcVar22 = *(code **)(pcVar22 +
                                                (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 +
                                                0x20);
                          }
                          lVar14 = (**(code **)(*(int64_t *)pcVar22 + 0x3b0))();
                          local_140 = pcVar18 + lVar14 + lVar11;
                          if ((int64_t)pcVar10 < (int64_t)(pcVar18 + lVar14 + lVar11)) {
                            local_140 = pcVar10;
                          }
                          pcVar34 = local_128;
                          local_f8 = local_140 + -lVar38;
                          local_a0 = pcVar18 + lVar17;
                          goto LAB_01332f01;
                        }
                      }
LAB_01332c76:
                      uVar29 = (int)pcVar32 + 1;
                      pcVar32 = (uint64_t)uVar29;
                    } while (uVar29 != 3);
                    pcVar22 = local_200;
                    local_154 = local_154 + 1;
                    if (((local_154 * -0x33333333 + 0x19999998U >> 2 | local_154 * 0x40000000) <
                         0xccccccd) &&
                       (plVar30 = *(int64_t **)local_118, plVar30 != (int64_t *)0x0)) {
                      local_1b0 = 0;
                      if (this_ptr != 0) {
                        FUN_00d50b00();
                      }
                      local_1b0 = '\x01';
                      local_1b8 = this_ptr;
                      (**(code **)(*plVar30 + 0x18))
                                (((float)local_154 / local_20c) * g_023b294c + g_02394214);
                      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    if (local_e8 != (code **)0x0) {
                      FUN_00d50b20();
                    }
                    if (pcVar22 != 0x0) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                }
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          FUN_001150f0();
        }
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *(void*)((int64_t)puVar8 + 0x2f) = 0;
        *(void*)((int64_t)puVar8 + 0x37) = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        *(void*)((int64_t)puVar8 + 0x49) = 0;
        *(void*)((int64_t)puVar8 + 0x51) = 0;
        *puVar8 = &g_025fe9f0;
        puVar8[2] = &g_025feda8;
        puVar8[3] = &g_025fede0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        (*g_025fea08)();
        local_1a0 = 0;
        if (this_ptr != 0) {
          FUN_00d50b00();
        }
        local_1a0 = '\x01';
        local_1a8 = this_ptr;
        FUN_0173a1a0();
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
        local_220 = local_150;
        local_218 = '\0';
        FUN_0173a1f0();
        if ((local_218 != '\0') && (local_220 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_00e34260();
        plVar30 = *(int64_t **)local_118;
        if (plVar30 != (int64_t *)0x0) {
          local_190 = 0;
          if (this_ptr != 0) {
            FUN_00d50b00();
          }
          local_190 = '\x01';
          local_198 = this_ptr;
          (**(code **)(*plVar30 + 0x18))();
          if ((local_190 != '\0') && (local_198 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        puVar8 = local_1f8;
        if (((char)local_e0 != '\0') && (local_68 != 0x0)) {
          FUN_00d50b20();
        }
        if (local_150 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (puVar8 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (local_180 != (void*)0x0) {
          FUN_00d50b20();
        }
        if (local_1f0 != 0x0) {
          FUN_00d50b20();
        }
        if (local_160 != 0x0) {
          FUN_00d50b20();
        }
      }
    }
LAB_01333721:
    if (((char)local_b4 != '\0') && (local_110 != 0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_88 != 0x0) {
    FUN_00d50b20();
  }
LAB_01333749:
  FUN_00d50b20();
  return;
code_r0x0132f886:
  lVar9 = lVar9 + 1;
  if (*(int *)(local_b0 + 0xc) <= lVar9) goto LAB_01333721;
  goto LAB_0132f828;
}

