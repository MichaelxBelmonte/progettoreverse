// Function: FUN_014e36c0
// Address: 014e36c0
// Size: 14394 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t FUN_014e36c0(uint64_t param_1,int64_t param_2,size_t param_3)

{
  double dVar1;
  void* pVar2;
  bool bVar3;
  dword dVar4;
  char *pcVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint32_t uVar10;
  uint uVar11;
  int64_t lVar12;
  void *pvVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  uint64_t uVar20;
  void *pvVar21;
  void*puVar22;
  void *pvVar23;
  void*puVar24;
  char *pcVar25;
  undefined7 uVar28;
  int64_t lVar26;
  int64_t lVar27;
  void* pVar29;
  char *pcVar30;
  char **ppcVar31;
  char **ppcVar32;
  int64_t *plVar33;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar34;
  char *pcVar35;
  int iVar36;
  int64_t lVar37;
  char *pcVar38;
  bool bVar39;
  char *local_170;
  char local_168;
  char *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  uint32_t local_13c;
  int64_t local_138;
  char *local_130;
  char local_128;
  uint64_t local_120;
  int local_114;
  code *local_110;
  void*local_108;
  uint64_t local_100;
  int64_t local_f8;
  int64_t local_f0;
  uint32_t local_e4;
  char local_e0;
  undefined7 uStack_df;
  char local_d8;
  char *local_d0;
  void*local_c8;
  int64_t local_c0;
  char local_b2;
  byte local_b1;
  char *local_b0;
  byte local_a2;
  bool local_a1;
  void*local_a0;
  char *local_98;
  uint64_t local_90;
  uint64_t local_88;
  char *local_68;
  char *local_60;
  char local_58 [8];
  void*local_50;
  int local_48;
  char local_41;
  uint64_t local_40;
  void*local_38;
  
  uVar20 = param_1;
  local_c0 = param_2;
  (**(code **)(*this_ptr + 0x378))();
  if ((((local_58[0] == '\0') && (local_60 != (char *)0x0)) && (FUN_00d50b00(), local_58[0] != '\0')
      ) && (local_60 != (char *)0x0)) {
    FUN_00d50b20();
  }
  local_13c = (uint32_t)param_1;
  lVar12 = FUN_014bb590();
  plVar33 = (int64_t *)*arg1;
  pvVar13 = _pthread_getspecific((void*)uVar20);
  if (pvVar13 != (void *)0x0) {
    plVar33 = (int64_t *)*arg1;
    lVar14 = FUN_00e8b990();
    if (lVar14 != 0) {
      plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
    }
  }
  lVar14 = (**(code **)(*plVar33 + 0x380))();
  if (lVar12 == lVar14) {
    cVar6 = (**(code **)(*this_ptr + 1000))();
    pVar29 = (void*)uVar20;
    if (cVar6 == '\0') goto LAB_014e390e;
    iVar9 = FUN_014c2f80();
    pvVar13 = _pthread_getspecific((void*)uVar20);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014c34a0();
    if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
      FUN_00d50b20();
    }
    if (local_60 != (char *)0x0) {
      do {
        plVar33 = (int64_t *)*arg1;
        pvVar13 = _pthread_getspecific((void*)uVar20);
        if (pvVar13 != (void *)0x0) {
          plVar33 = (int64_t *)*arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
        }
        cVar6 = (**(code **)(*plVar33 + 1000))();
        pVar29 = (void*)uVar20;
        if (cVar6 == '\0') {
          FUN_00d50b00();
          lVar12 = 0;
LAB_014e389a:
          pVar29 = (void*)uVar20;
          dVar4 = *(dword *)(lVar12 + 0xc);
        }
        else {
          lVar12 = **(int64_t **)(plVar33[0x21] + 0x10);
          dVar4 = MACH_HEADER.filetype;
          if (lVar12 != 0) {
            FUN_00d50b00();
            goto LAB_014e389a;
          }
        }
        if (iVar9 < (int)dVar4) goto LAB_014e3906;
        pvVar13 = _pthread_getspecific((void*)uVar20);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c2cf0();
        FUN_00d50b20();
      } while( true );
    }
  }
  lVar37 = 0;
  goto LAB_014e6f01;
LAB_014e3906:
  FUN_00d50b20();
LAB_014e390e:
  local_b2 = (**(code **)(*this_ptr + 0x3c0))();
  plVar33 = (int64_t *)*arg1;
  pvVar13 = _pthread_getspecific(pVar29);
  if (pvVar13 != (void *)0x0) {
    plVar33 = (int64_t *)*arg1;
    lVar12 = FUN_00e8b990();
    if (lVar12 != 0) {
      plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
    }
  }
  bVar7 = (**(code **)(*plVar33 + 0x3c0))();
  pvVar13 = _pthread_getspecific(pVar29);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar6 = FUN_01334f30();
  pVar29 = 0xffffffff;
  lVar12 = 0x7fffffffffffffff;
  local_f8 = 0x7fffffffffffffff;
  if (cVar6 != '\0') {
    cVar6 = (**(code **)(*this_ptr + 0x3c0))();
    pVar29 = 0xffffffff;
    local_f8 = 0x7fffffffffffffff;
    if (cVar6 == '\0') {
      pVar29 = 0xffffffff;
      lVar12 = (**(code **)(*this_ptr + 0x380))();
      local_f8 = (**(code **)(*this_ptr + 0x3b0))();
      local_f8 = local_f8 + lVar12;
    }
    plVar33 = (int64_t *)*arg1;
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      plVar33 = (int64_t *)*arg1;
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
      }
    }
    cVar6 = (**(code **)(*plVar33 + 0x3d0))();
    if (cVar6 == '\0') {
      lVar12 = 0x7fffffffffffffff;
    }
    else {
      plVar33 = (int64_t *)*arg1;
      pvVar13 = _pthread_getspecific(pVar29);
      if (pvVar13 != (void *)0x0) {
        plVar33 = (int64_t *)*arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
      }
      lVar14 = (**(code **)(*plVar33 + 0x380))();
      plVar33 = (int64_t *)*arg1;
      pvVar13 = _pthread_getspecific(pVar29);
      if (pvVar13 != (void *)0x0) {
        plVar33 = (int64_t *)*arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
      }
      lVar12 = (**(code **)(*plVar33 + 0x3b8))();
      lVar12 = lVar12 + lVar14;
    }
  }
  pvVar13 = _pthread_getspecific(pVar29);
  pVar2 = (void*)local_60;
  if ((pvVar13 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
    pVar29 = pVar2;
  }
  FUN_0132d790();
  dVar1 = *(double *)(local_60 + 0x38);
  local_138 = lVar12;
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  plVar33 = (int64_t *)*arg1;
  pvVar13 = _pthread_getspecific(pVar29);
  if (pvVar13 != (void *)0x0) {
    plVar33 = (int64_t *)*arg1;
    lVar12 = FUN_00e8b990();
    if (lVar12 != 0) {
      plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
    }
  }
  lVar12 = (**(code **)(*plVar33 + 0x380))();
  local_b1 = bVar7;
  lVar14 = (**(code **)(*this_ptr + 0x380))();
  lVar15 = (**(code **)(*this_ptr + 0x398))();
  plVar33 = (int64_t *)*arg1;
  pvVar13 = _pthread_getspecific(pVar29);
  if (pvVar13 != (void *)0x0) {
    plVar33 = (int64_t *)*arg1;
    lVar16 = FUN_00e8b990();
    if (lVar16 != 0) {
      plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
    }
  }
  lVar16 = (**(code **)(*plVar33 + 0x380))();
  plVar33 = (int64_t *)*arg1;
  pvVar13 = _pthread_getspecific(pVar29);
  if (pvVar13 != (void *)0x0) {
    plVar33 = (int64_t *)*arg1;
    lVar17 = FUN_00e8b990();
    if (lVar17 != 0) {
      plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar17 + 0x154) & 1) + 4];
    }
  }
  lVar17 = (**(code **)(*plVar33 + 0x398))();
  pvVar13 = _pthread_getspecific(pVar29);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_38 = (void*)FUN_01327990();
  lVar18 = (**(code **)(*this_ptr + 0x380))();
  pcVar30 = (char *)(uint64_t)(uint)(int)((double)local_38 * g_0241b6a8);
  local_c0 = local_c0 + lVar12;
  lVar37 = (int64_t)(int)((double)local_38 * g_0241b6a8);
  if (local_c0 < lVar18 + lVar37) {
    local_c0 = (**(code **)(*this_ptr + 0x380))();
    local_c0 = local_c0 + lVar37;
  }
  plVar33 = (int64_t *)*arg1;
  pvVar13 = _pthread_getspecific((void*)pcVar30);
  if (pvVar13 != (void *)0x0) {
    plVar33 = (int64_t *)*arg1;
    lVar18 = FUN_00e8b990();
    if (lVar18 != 0) {
      plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4];
    }
  }
  lVar18 = (**(code **)(*plVar33 + 0x380))();
  plVar33 = (int64_t *)*arg1;
  pvVar13 = _pthread_getspecific((void*)pcVar30);
  if (pvVar13 != (void *)0x0) {
    plVar33 = (int64_t *)*arg1;
    lVar19 = FUN_00e8b990();
    if (lVar19 != 0) {
      plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
    }
  }
  lVar19 = (**(code **)(*plVar33 + 0x388))();
  if ((lVar18 - lVar37) + lVar19 <= local_c0) {
    plVar33 = (int64_t *)*arg1;
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      plVar33 = (int64_t *)*arg1;
      lVar18 = FUN_00e8b990();
      if (lVar18 != 0) {
        plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4];
      }
    }
    lVar18 = (**(code **)(*plVar33 + 0x380))();
    plVar33 = (int64_t *)*arg1;
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      plVar33 = (int64_t *)*arg1;
      lVar19 = FUN_00e8b990();
      if (lVar19 != 0) {
        plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
      }
    }
    local_c0 = (**(code **)(*plVar33 + 0x388))();
    local_c0 = (lVar18 - lVar37) + local_c0;
  }
  pcVar35 = (char *)this_ptr[0x23];
  if (pcVar35 == (char *)0x0) {
    local_b0 = (char *)0x0;
    cVar6 = '\0';
    pcVar25 = local_b0;
  }
  else {
    FUN_00d50b00();
    local_41 = '\x01';
    local_c8 = (void*)0x0;
    local_b0 = pcVar35;
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 == (void *)0x0) {
LAB_014e3ec3:
      lVar18 = *(int64_t *)(pcVar35 + 0x110);
      pcVar25 = pcVar35;
    }
    else {
      local_c8 = (void*)0x0;
      local_b0 = pcVar35;
      lVar18 = FUN_00e8b990();
      if (lVar18 == 0) goto LAB_014e3ec3;
      pcVar25 = *(char **)(pcVar35 + ((uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4) * 8);
      lVar18 = *(int64_t *)(pcVar25 + 0x110);
    }
    if (lVar18 != 0) {
      FUN_00d64850();
      pcVar25[0x110] = '\0';
      pcVar25[0x111] = '\0';
      pcVar25[0x112] = '\0';
      pcVar25[0x113] = '\0';
      pcVar25[0x114] = '\0';
      pcVar25[0x115] = '\0';
      pcVar25[0x116] = '\0';
      pcVar25[0x117] = '\0';
      FUN_00d64910();
    }
    cVar6 = '\x01';
    pcVar25 = pcVar35;
    if (this_ptr[0x23] != 0) {
      FUN_00d64850();
      this_ptr[0x23] = 0;
      FUN_00d64910();
    }
  }
  local_b0 = pcVar25;
  lVar18 = *arg1;
  pvVar13 = _pthread_getspecific((void*)pcVar30);
  if (pvVar13 != (void *)0x0) {
    lVar18 = *arg1;
    lVar37 = FUN_00e8b990();
    if (lVar37 != 0) {
      lVar18 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar37 + 0x154) & 1) * 8);
    }
  }
  pcVar38 = local_b0;
  pcVar25 = *(char **)(lVar18 + 0x118);
  if (pcVar25 == local_b0) {
    local_41 = cVar6;
    pcVar5 = pcVar38;
    if ((pcVar35 == (char *)0x0) && (pcVar25 != (char *)0x0)) {
      local_41 = '\x01';
      FUN_00d50b00();
    }
  }
  else {
    if (pcVar25 != (char *)0x0) {
      FUN_00d50b00();
    }
    local_41 = '\x01';
    pcVar5 = pcVar25;
    if (pcVar35 != (char *)0x0 && pcVar38 != (char *)0x0) {
      FUN_00d50b20();
    }
  }
  local_b0 = pcVar5;
  if (local_b0 != (char *)0x0) {
    local_c8 = (void*)0x0;
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 == (void *)0x0) {
LAB_014e40b5:
      lVar18 = *(int64_t *)(local_b0 + 0x110);
      pcVar35 = local_b0;
    }
    else {
      local_c8 = (void*)0x0;
      lVar18 = FUN_00e8b990();
      if (lVar18 == 0) goto LAB_014e40b5;
      pcVar35 = *(char **)(local_b0 + ((uint64_t)(*(uint *)(lVar18 + 0x154) & 1) + 4) * 8);
      lVar18 = *(int64_t *)(pcVar35 + 0x110);
      pcVar30 = local_b0;
    }
    if (lVar18 != 0) {
      FUN_00d64850();
      pcVar35[0x110] = '\0';
      pcVar35[0x111] = '\0';
      pcVar35[0x112] = '\0';
      pcVar35[0x113] = '\0';
      pcVar35[0x114] = '\0';
      pcVar35[0x115] = '\0';
      pcVar35[0x116] = '\0';
      pcVar35[0x117] = '\0';
      FUN_00d64910();
    }
    lVar18 = *arg1;
    local_c8 = (void*)0x0;
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      lVar18 = *arg1;
      local_c8 = (void*)0x0;
      lVar37 = FUN_00e8b990();
      if (lVar37 != 0) {
        lVar18 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar37 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar18 + 0x118) != 0) {
      FUN_00d64850();
      *(void*)(lVar18 + 0x118) = 0;
      FUN_00d64910();
    }
  }
  lVar18 = *arg1;
  pvVar13 = _pthread_getspecific((void*)pcVar30);
  if (pvVar13 != (void *)0x0) {
    lVar18 = *arg1;
    lVar37 = FUN_00e8b990();
    if (lVar37 != 0) {
      lVar18 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar37 + 0x154) & 1) * 8);
    }
  }
  lVar18 = *(int64_t *)(lVar18 + 0x110);
  if (lVar18 == 0) {
    local_e4 = 1;
    lVar37 = 0;
    local_c8 = (void*)0x0;
  }
  else {
    FUN_00d50b00();
    lVar37 = *arg1;
    local_c8 = &g_02802501;
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      lVar37 = *arg1;
      lVar19 = FUN_00e8b990();
      if (lVar19 != 0) {
        lVar37 = *(int64_t *)(lVar37 + 0x20 + (uint64_t)(*(uint *)(lVar19 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar37 + 0x110) != 0) {
      FUN_00d64850();
      *(void*)(lVar37 + 0x110) = 0;
      FUN_00d64910();
    }
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if ((pvVar13 == (void *)0x0) || (lVar37 = FUN_00e8b990(), lVar37 == 0)) {
      lVar19 = *(int64_t *)(lVar18 + 0x118);
      lVar37 = lVar18;
    }
    else {
      lVar37 = *(int64_t *)(lVar18 + 0x20 + (uint64_t)(*(uint *)(lVar37 + 0x154) & 1) * 8);
      lVar19 = *(int64_t *)(lVar37 + 0x118);
    }
    local_c8 = (void*)0x1;
    if (lVar19 != 0) {
      local_c8 = (void*)0x1;
      FUN_00d64850();
      *(void*)(lVar37 + 0x118) = 0;
      FUN_00d64910();
    }
    local_e4 = 0;
    lVar37 = lVar18;
  }
  cVar6 = (**(code **)(*this_ptr + 1000))();
  local_f0 = lVar37;
  if (cVar6 != '\0') {
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if ((pvVar13 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
      pcVar30 = local_60;
    }
    uVar10 = FUN_0134c230();
    local_38 = (void*)CONCAT44(local_38._4_4_,uVar10);
    cVar6 = (**(code **)(*this_ptr + 1000))();
    iVar9 = -1;
    if ((cVar6 != '\0') && (lVar37 = **(int64_t **)(this_ptr[0x21] + 0x10), lVar37 != 0)) {
      FUN_00d50b00();
      iVar9 = *(int *)(lVar37 + 0xc);
      FUN_00d50b20();
    }
    iVar36 = (int)(g_0241b6a8 / dVar1 + g_023942d0);
    if ((int)local_38 - iVar9 < iVar36) {
      cVar6 = (**(code **)(*this_ptr + 1000))();
      local_38._0_4_ = -1;
      if ((cVar6 != '\0') && (lVar37 = **(int64_t **)(this_ptr[0x21] + 0x10), lVar37 != 0)) {
        FUN_00d50b00();
        local_38._0_4_ = *(int *)(lVar37 + 0xc);
        FUN_00d50b20();
      }
      local_38 = (void*)CONCAT44(local_38._4_4_,(int)local_38 + iVar36);
    }
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar9 = FUN_014c2f80();
    if (iVar9 - (int)local_38 < iVar36 + -1) {
      pvVar13 = _pthread_getspecific((void*)pcVar30);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar9 = FUN_014c2f80();
      local_38 = (void*)CONCAT44(local_38._4_4_,iVar9 - (iVar36 + -1));
    }
    plVar33 = (int64_t *)*arg1;
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      plVar33 = (int64_t *)*arg1;
      lVar37 = FUN_00e8b990();
      if (lVar37 != 0) {
        plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
      }
    }
    cVar6 = (**(code **)(*plVar33 + 1000))();
    iVar9 = -1;
    if ((cVar6 != '\0') && (lVar37 = **(int64_t **)(plVar33[0x21] + 0x10), lVar37 != 0)) {
      FUN_00d50b00();
      iVar9 = *(int *)(lVar37 + 0xc);
      FUN_00d50b20();
    }
    if (iVar9 < (int)local_38) {
      pcVar25 = (char *)0x0;
      pcVar35 = (char *)0x0;
      while( true ) {
        cVar6 = (char)pcVar25;
        plVar33 = (int64_t *)*arg1;
        pvVar13 = _pthread_getspecific((void*)pcVar30);
        if (pvVar13 != (void *)0x0) {
          plVar33 = (int64_t *)*arg1;
          lVar37 = FUN_00e8b990();
          if (lVar37 != 0) {
            plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
          }
        }
        cVar8 = (**(code **)(*plVar33 + 1000))();
        iVar9 = -1;
        if ((cVar8 != '\0') && (lVar37 = **(int64_t **)(plVar33[0x21] + 0x10), lVar37 != 0)) {
          FUN_00d50b00();
          iVar9 = *(int *)(lVar37 + 0xc);
          FUN_00d50b20();
        }
        if ((int)local_38 <= iVar9) break;
        plVar33 = (int64_t *)*arg1;
        pvVar13 = _pthread_getspecific((void*)pcVar30);
        if (pvVar13 != (void *)0x0) {
          plVar33 = (int64_t *)*arg1;
          lVar37 = FUN_00e8b990();
          if (lVar37 != 0) {
            plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
          }
        }
        cVar8 = (**(code **)(*plVar33 + 1000))();
        if (cVar8 == '\0') {
          if (pcVar35 == (char *)0x0) {
            pcVar38 = (char *)0x0;
          }
          else {
            if (cVar6 != '\0') {
              FUN_00d50b20();
            }
            pcVar38 = (char *)0x0;
            pcVar25 = (char *)((int64_t)&MACH_HEADER.magic + 1);
          }
        }
        else {
          pcVar38 = (char *)**(void**)(plVar33[0x21] + 0x10);
          if (pcVar38 != (char *)0x0) {
            FUN_00d50b00();
          }
          if (pcVar35 == pcVar38) {
            uVar11 = (uint)pcVar25;
            if (pcVar38 != (char *)0x0) {
              uVar11 = 1;
            }
            pcVar30 = pcVar25;
            if ((cVar6 == '\0') || (uVar11 = (uint)pcVar25, pcVar38 == (char *)0x0)) {
              pcVar25 = (char *)(uint64_t)uVar11;
              pcVar38 = pcVar35;
            }
            else {
              FUN_00d50b20();
              pcVar38 = pcVar35;
            }
          }
          else {
            pcVar25 = (char *)((int64_t)&MACH_HEADER.magic + 1);
            if ((cVar6 != '\0') && (pcVar35 != (char *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        FUN_014c2e20();
        pvVar13 = _pthread_getspecific((void*)pcVar30);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c2cf0();
        pcVar35 = pcVar38;
      }
    }
    else {
      plVar33 = (int64_t *)*arg1;
      pvVar13 = _pthread_getspecific((void*)pcVar30);
      if (pvVar13 != (void *)0x0) {
        plVar33 = (int64_t *)*arg1;
        lVar37 = FUN_00e8b990();
        if (lVar37 != 0) {
          plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
        }
      }
      cVar6 = (**(code **)(*plVar33 + 1000))();
      iVar9 = -1;
      if ((cVar6 != '\0') && (lVar37 = **(int64_t **)(plVar33[0x21] + 0x10), lVar37 != 0)) {
        FUN_00d50b00();
        iVar9 = *(int *)(lVar37 + 0xc);
        FUN_00d50b20();
      }
      if (iVar9 <= (int)local_38) goto LAB_014e4969;
      cVar6 = '\0';
      pcVar35 = (char *)0x0;
      while( true ) {
        plVar33 = (int64_t *)*arg1;
        pvVar13 = _pthread_getspecific((void*)pcVar30);
        if (pvVar13 != (void *)0x0) {
          plVar33 = (int64_t *)*arg1;
          lVar37 = FUN_00e8b990();
          if (lVar37 != 0) {
            plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
          }
        }
        cVar8 = (**(code **)(*plVar33 + 1000))();
        iVar9 = -1;
        if ((cVar8 != '\0') && (lVar37 = **(int64_t **)(plVar33[0x21] + 0x10), lVar37 != 0)) {
          FUN_00d50b00();
          iVar9 = *(int *)(lVar37 + 0xc);
          FUN_00d50b20();
        }
        if (iVar9 <= (int)local_38) break;
        cVar8 = (**(code **)(*this_ptr + 1000))();
        if (cVar8 == '\0') {
          if (pcVar35 == (char *)0x0) {
LAB_014e48a5:
            pcVar25 = (char *)0x0;
          }
          else {
            if (cVar6 != '\0') {
              FUN_00d50b20();
            }
            cVar6 = '\x01';
            pcVar25 = (char *)0x0;
          }
        }
        else {
          FUN_00d23340();
          local_e0 = local_58[0];
          pcVar30 = &local_e0;
          pcVar25 = local_58;
          if (local_58[0] == '\0') {
            pcVar25 = pcVar30;
          }
          *pcVar25 = '\0';
          if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 == '\0') && (local_60 != (char *)0x0)) {
            FUN_00d50b00();
          }
          if (pcVar35 == local_60) {
            pcVar25 = pcVar35;
            if ((cVar6 == '\0') && (pcVar35 != (char *)0x0)) {
              cVar6 = '\x01';
            }
            else {
              if (pcVar35 == (char *)0x0) goto LAB_014e48a5;
              FUN_00d50b20();
            }
          }
          else {
            bVar39 = cVar6 != '\0';
            cVar6 = '\x01';
            pcVar25 = local_60;
            if ((bVar39) && (pcVar35 != (char *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        pvVar13 = _pthread_getspecific((void*)pcVar30);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c2e20();
        FUN_014c2cf0();
        pcVar35 = pcVar25;
      }
    }
    if ((cVar6 != '\0') && (pcVar35 != (char *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_014e4969:
  plVar33 = (int64_t *)*arg1;
  pvVar13 = _pthread_getspecific((void*)pcVar30);
  if (pvVar13 != (void *)0x0) {
    plVar33 = (int64_t *)*arg1;
    lVar37 = FUN_00e8b990();
    if (lVar37 != 0) {
      plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar33 + 0x380))();
  plVar33 = (int64_t *)*arg1;
  pvVar13 = _pthread_getspecific((void*)pcVar30);
  if (pvVar13 != (void *)0x0) {
    plVar33 = (int64_t *)*arg1;
    lVar37 = FUN_00e8b990();
    if (lVar37 != 0) {
      plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar33 + 0x388))();
  pvVar13 = _pthread_getspecific((void*)pcVar30);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb250();
  pvVar13 = _pthread_getspecific((void*)pcVar30);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb2b0();
  (**(code **)(*this_ptr + 0x380))();
  FUN_014bb2b0();
  pvVar13 = _pthread_getspecific((void*)pcVar30);
  if ((pvVar13 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
    pcVar30 = local_60;
  }
  iVar9 = FUN_01326de0();
  if (iVar9 == 3) {
    FUN_014ce440();
    pVar29 = (void*)pcVar30;
    FUN_014ceed0();
    FUN_014cfcc0();
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014ce440();
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014ceed0();
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014cfcc0();
  }
  else {
    FUN_014bc090();
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    iVar9 = *(int *)(local_60 + 0x18);
    iVar36 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar36 = iVar9;
    }
    if (local_58[0] != '\0') {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (CONCAT71(uStack_df,local_e0) != 0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc090();
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    iVar9 = *(int *)(local_60 + 0x18);
    iVar34 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar34 = iVar9;
    }
    if (local_58[0] != '\0') {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (CONCAT71(uStack_df,local_e0) != 0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if ((pvVar13 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
      pcVar30 = local_60;
    }
    (**(code **)(*this_ptr + 0x380))();
    iVar9 = FUN_0132dca0();
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if ((pvVar13 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
      pcVar30 = local_60;
    }
    local_40 = (char *)FUN_0132dca0();
    local_120 = (uint64_t)(uint)((iVar36 >> 2) + (iVar34 >> 2));
    local_48 = iVar9;
    local_d0 = (char *)FUN_00e83010();
    local_88 = 0;
    local_90 = 0;
    local_98 = (char *)0x0;
    local_50 = (void*)0x0;
    local_38 = (void*)0x0;
    local_a0 = (void*)0x0;
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      local_88 = 0;
      local_90 = 0;
      local_98 = (char *)0x0;
      local_50 = (void*)0x0;
      local_38 = (void*)0x0;
      local_a0 = (void*)0x0;
      lVar37 = FUN_00e8b990();
      if (lVar37 != 0) {
        pcVar30 = local_60;
      }
    }
    local_88 = 0;
    local_90 = 0;
    local_98 = (char *)0x0;
    local_50 = (void*)0x0;
    local_38 = (void*)0x0;
    local_a0 = (void*)0x0;
    local_100 = FUN_0132dc40();
    uVar20 = FUN_014bc090();
    if (local_60 == (char *)0x0) {
      local_90 = 0;
      local_98 = (char *)0x0;
LAB_014e5092:
      local_a2 = local_60 != (char *)0x0;
      if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_58[0] == '\0') {
        uVar20 = FUN_00d50b00();
        local_90 = CONCAT71((int7)((uint64_t)uVar20 >> 8),1);
        local_98 = local_60;
        goto LAB_014e5092;
      }
      local_90 = CONCAT71((int7)((uint64_t)uVar20 >> 8),1);
      local_98 = local_60;
      local_a2 = 1;
    }
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar20 = FUN_014bc090();
    pcVar35 = local_60;
    if (local_60 == (char *)0x0) {
      local_88 = 0;
      local_a1 = false;
      pcVar35 = (char *)0x0;
joined_r0x014e5134:
      if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_58[0] == '\0') {
        uVar20 = FUN_00d50b00();
        local_88 = CONCAT71((int7)((uint64_t)uVar20 >> 8),1);
        local_a1 = local_60 != (char *)0x0;
        goto joined_r0x014e5134;
      }
      local_88 = CONCAT71((int7)((uint64_t)uVar20 >> 8),1);
      local_a1 = true;
    }
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if ((pvVar13 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
      pcVar30 = local_98;
    }
    FUN_013eb920();
    pvVar13 = (void *)(int64_t)((iVar36 >> 2) * 4);
    _memcpy(pcVar30,pvVar13,param_3);
    pVar29 = (void*)pcVar30;
    if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
      FUN_00d50b20();
    }
    pvVar21 = _pthread_getspecific(pVar29);
    if (pvVar21 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    pvVar21 = (void *)(int64_t)((iVar34 >> 2) << 2);
    _memcpy(local_d0,pvVar21,param_3);
    if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
      FUN_00d50b20();
    }
    puVar22 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar22 + 7) = 0;
    *(void*)((int64_t)puVar22 + 0x3c) = 0;
    *(void*)(puVar22 + 8) = 0;
    pVar29 = 0x25dc9e8;
    local_108 = &g_025dc9e8;
    *puVar22 = &g_025dc9e8;
    puVar22[9] = 0;
    puVar22[10] = 0;
    local_110 = g_025dca00;
    (*g_025dca00)();
    local_50 = (void*)0x0;
    local_38 = (void*)0x0;
    local_a0 = puVar22;
    pvVar23 = _pthread_getspecific(pVar29);
    if (pvVar23 != (void *)0x0) {
      local_50 = (void*)0x0;
      local_38 = (void*)0x0;
      lVar37 = FUN_00e8b990();
      if (lVar37 != 0) {
        pVar29 = (void*)local_a0;
      }
    }
    local_50 = (void*)0x0;
    local_38 = (void*)0x0;
    FUN_013eb950(local_100);
    local_50 = (void*)0x0;
    local_38 = (void*)0x0;
    pvVar23 = _pthread_getspecific(pVar29);
    if (pvVar23 != (void *)0x0) {
      local_50 = (void*)0x0;
      local_38 = (void*)0x0;
      FUN_00e8b990();
    }
    puVar22 = local_a0;
    uVar11 = (int)local_40 - local_48;
    local_40 = (char *)(uint64_t)uVar11;
    local_114 = uVar11 * 4;
    FUN_00c8e2b0();
    if ((((local_58[0] == '\0') && (local_60 != (char *)0x0)) &&
        (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (char *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_013eb890();
    if (local_60 != (char *)0x0) {
      FUN_00d50b20();
    }
    if ((void*)this_ptr[0x11] != puVar22) {
      FUN_00d64850();
      puVar24 = (void*)this_ptr[0x11];
      if (puVar24 != puVar22) {
        FUN_00d50b00();
        this_ptr[0x11] = (int64_t)puVar22;
        if (puVar24 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    puVar24 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar24 + 7) = 0;
    *(void*)((int64_t)puVar24 + 0x3c) = 0;
    *(void*)(puVar24 + 8) = 0;
    *puVar24 = local_108;
    puVar24[9] = 0;
    puVar24[10] = 0;
    (*local_110)();
    if (puVar22 == puVar24) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      local_a0 = puVar24;
    }
    local_50 = (void*)0x0;
    local_38 = (void*)0x0;
    pvVar23 = _pthread_getspecific(pVar29);
    if (pvVar23 != (void *)0x0) {
      local_50 = (void*)0x0;
      local_38 = (void*)0x0;
      lVar37 = FUN_00e8b990();
      if (lVar37 != 0) {
        pVar29 = (void*)local_a0;
      }
    }
    local_50 = (void*)0x0;
    local_38 = (void*)0x0;
    FUN_013eb950(local_100);
    local_50 = (void*)0x0;
    local_38 = (void*)0x0;
    pvVar23 = _pthread_getspecific(pVar29);
    if (pvVar23 != (void *)0x0) {
      local_50 = (void*)0x0;
      local_38 = (void*)0x0;
      FUN_00e8b990();
    }
    local_120 = (uint64_t)(uint)(((int)local_120 - (int)local_40) * 4);
    pcVar30 = local_d0;
    FUN_00c8e2b0();
    if (((local_58[0] == '\0') && (local_60 != (char *)0x0)) &&
       ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (char *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_013eb890();
    if (local_60 != (char *)0x0) {
      FUN_00d50b20();
    }
    lVar37 = *arg1;
    local_50 = (void*)0x0;
    local_38 = (void*)0x0;
    pvVar23 = _pthread_getspecific((void*)pcVar30);
    if (pvVar23 != (void *)0x0) {
      lVar37 = *arg1;
      local_50 = (void*)0x0;
      local_38 = (void*)0x0;
      lVar19 = FUN_00e8b990();
      if (lVar19 != 0) {
        lVar37 = *(int64_t *)(lVar37 + 0x20 + (uint64_t)(*(uint *)(lVar19 + 0x154) & 1) * 8);
      }
    }
    if (*(void**)(lVar37 + 0x88) != local_a0) {
      FUN_00d64850();
      puVar22 = *(void**)(lVar37 + 0x88);
      if (puVar22 != local_a0) {
        FUN_00d50b00();
        *(void**)(lVar37 + 0x88) = local_a0;
        if (puVar22 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_014bc0d0();
    if (local_60 == local_98) {
      local_48 = CONCAT31(local_48._1_3_,(char)local_90);
LAB_014e585d:
      if (local_58[0] != '\0') {
LAB_014e5863:
        if (local_60 != (char *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_58[0] == '\0') {
        if (local_60 != (char *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = local_a2 & local_98 != (char *)0x0;
        pcVar30 = (char *)CONCAT71((int7)((uint64_t)pcVar30 >> 8),bVar7);
        local_48 = CONCAT31(local_48._1_3_,1);
        if (bVar7 == 1) {
          local_98 = local_60;
          FUN_00d50b20();
          goto LAB_014e585d;
        }
        local_98 = local_60;
        if (local_58[0] == '\0') goto LAB_014e5871;
        goto LAB_014e5863;
      }
      bVar7 = local_a2 & local_98 != (char *)0x0;
      pcVar30 = (char *)CONCAT71((int7)((uint64_t)pcVar30 >> 8),bVar7);
      local_48 = CONCAT31(local_48._1_3_,1);
      if (bVar7 == 1) {
        local_98 = local_60;
        FUN_00d50b20();
      }
      else {
        local_98 = local_60;
      }
    }
LAB_014e5871:
    pvVar23 = _pthread_getspecific((void*)pcVar30);
    if (pvVar23 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar20 = FUN_014bc0d0();
    if (local_60 == pcVar35) {
      local_40 = (char *)CONCAT44(local_40._4_4_,(int)local_88);
LAB_014e5953:
      if (local_58[0] != '\0') {
LAB_014e5959:
        if (local_60 != (char *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_58[0] == '\0') {
        if (local_60 != (char *)0x0) {
          uVar20 = FUN_00d50b00();
        }
        bVar7 = local_a1 & pcVar35 != (char *)0x0;
        pcVar30 = (char *)CONCAT71((int7)((uint64_t)pcVar30 >> 8),bVar7);
        local_40 = (char *)CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar20 >> 8),1));
        if (bVar7 == 1) {
          FUN_00d50b20();
          pcVar35 = local_60;
          goto LAB_014e5953;
        }
        pcVar35 = local_60;
        if (local_58[0] == '\0') goto LAB_014e5967;
        goto LAB_014e5959;
      }
      bVar7 = local_a1 & pcVar35 != (char *)0x0;
      pcVar30 = (char *)CONCAT71((int7)((uint64_t)pcVar30 >> 8),bVar7);
      local_40 = (char *)CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar20 >> 8),1));
      pcVar35 = local_60;
      if (bVar7 == 1) {
        FUN_00d50b20();
      }
    }
LAB_014e5967:
    pvVar23 = _pthread_getspecific((void*)pcVar30);
    if ((pvVar23 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
      pcVar30 = local_98;
    }
    FUN_013eb920();
    _memcpy(pcVar30,pvVar13,param_3);
    if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
      FUN_00d50b20();
    }
    pvVar23 = _pthread_getspecific((void*)pcVar30);
    if (pvVar23 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    _memcpy(pcVar30,pvVar21,param_3);
    if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = (char *)FUN_00e8fc40();
    FUN_00d4ff40();
    local_68[0x38] = '\0';
    local_68[0x3c] = '\0';
    local_68[0x3d] = '\0';
    local_68[0x3e] = '\0';
    local_68[0x3f] = '\0';
    local_68[0x40] = '\0';
    local_68[0x41] = '\0';
    *(void**)local_68 = local_108;
    local_68[0x48] = '\0';
    local_68[0x49] = '\0';
    local_68[0x4a] = '\0';
    local_68[0x4b] = '\0';
    local_68[0x4c] = '\0';
    local_68[0x4d] = '\0';
    local_68[0x4e] = '\0';
    local_68[0x4f] = '\0';
    local_68[0x50] = '\0';
    local_68[0x51] = '\0';
    local_68[0x52] = '\0';
    local_68[0x53] = '\0';
    local_68[0x54] = '\0';
    local_68[0x55] = '\0';
    local_68[0x56] = '\0';
    local_68[0x57] = '\0';
    (*local_110)();
    local_38 = &g_02802501;
    local_50 = (void*)0x0;
    local_88 = (uint64_t)local_40 & 0xffffffff;
    local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
    pvVar23 = _pthread_getspecific((void*)pcVar30);
    if (pvVar23 != (void *)0x0) {
      local_50 = (void*)0x0;
      local_88 = (uint64_t)local_40 & 0xffffffff;
      local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
      lVar37 = FUN_00e8b990();
      if (lVar37 != 0) {
        pcVar30 = local_68;
      }
    }
    local_50 = (void*)0x0;
    local_88 = (uint64_t)local_40 & 0xffffffff;
    local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
    FUN_013eb950(local_100);
    local_50 = (void*)0x0;
    local_88 = (uint64_t)local_40 & 0xffffffff;
    local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
    pvVar23 = _pthread_getspecific((void*)pcVar30);
    if (pvVar23 != (void *)0x0) {
      local_50 = (void*)0x0;
      local_88 = (uint64_t)local_40 & 0xffffffff;
      local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
      FUN_00e8b990();
    }
    FUN_00c8e2b0();
    if ((((local_58[0] == '\0') && (local_60 != (char *)0x0)) &&
        (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (char *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_013eb890();
    if (local_60 != (char *)0x0) {
      FUN_00d50b20();
    }
    if ((char *)this_ptr[9] != local_68) {
      FUN_00d64850();
      pcVar25 = (char *)this_ptr[9];
      if (pcVar25 != local_68) {
        FUN_00d50b00();
        this_ptr[9] = (int64_t)local_68;
        if (pcVar25 != (char *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    pcVar25 = (char *)FUN_00e8fc40();
    FUN_00d4ff40();
    pcVar25[0x38] = '\0';
    pcVar25[0x3c] = '\0';
    pcVar25[0x3d] = '\0';
    pcVar25[0x3e] = '\0';
    pcVar25[0x3f] = '\0';
    pcVar25[0x40] = '\0';
    pcVar25[0x41] = '\0';
    *(void**)pcVar25 = local_108;
    pcVar25[0x48] = '\0';
    pcVar25[0x49] = '\0';
    pcVar25[0x4a] = '\0';
    pcVar25[0x4b] = '\0';
    pcVar25[0x4c] = '\0';
    pcVar25[0x4d] = '\0';
    pcVar25[0x4e] = '\0';
    pcVar25[0x4f] = '\0';
    pcVar25[0x50] = '\0';
    pcVar25[0x51] = '\0';
    pcVar25[0x52] = '\0';
    pcVar25[0x53] = '\0';
    pcVar25[0x54] = '\0';
    pcVar25[0x55] = '\0';
    pcVar25[0x56] = '\0';
    pcVar25[0x57] = '\0';
    (*local_110)();
    if (local_68 == pcVar25) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      local_68 = pcVar25;
    }
    local_50 = (void*)0x0;
    local_88 = (uint64_t)local_40 & 0xffffffff;
    local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
    pvVar23 = _pthread_getspecific((void*)pcVar30);
    if (pvVar23 != (void *)0x0) {
      local_50 = (void*)0x0;
      local_88 = (uint64_t)local_40 & 0xffffffff;
      local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
      lVar37 = FUN_00e8b990();
      if (lVar37 != 0) {
        pcVar30 = local_68;
      }
    }
    local_50 = (void*)0x0;
    local_88 = (uint64_t)local_40 & 0xffffffff;
    local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
    FUN_013eb950(local_100);
    local_50 = (void*)0x0;
    local_88 = (uint64_t)local_40 & 0xffffffff;
    local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
    pvVar23 = _pthread_getspecific((void*)pcVar30);
    if (pvVar23 != (void *)0x0) {
      local_50 = (void*)0x0;
      local_88 = (uint64_t)local_40 & 0xffffffff;
      local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
      lVar37 = FUN_00e8b990();
      if (lVar37 != 0) {
        pcVar30 = local_68;
      }
    }
    FUN_00c8e2b0();
    if (((local_58[0] == '\0') && (local_60 != (char *)0x0)) &&
       ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (char *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_013eb890();
    if (local_60 != (char *)0x0) {
      FUN_00d50b20();
    }
    lVar37 = *arg1;
    local_50 = (void*)0x0;
    local_88 = (uint64_t)local_40 & 0xffffffff;
    local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
    pvVar23 = _pthread_getspecific((void*)pcVar30);
    if (pvVar23 != (void *)0x0) {
      lVar37 = *arg1;
      local_50 = (void*)0x0;
      local_88 = (uint64_t)local_40 & 0xffffffff;
      local_90 = (uint64_t)CONCAT31((int3)((uint64_t)local_40 >> 8),(char)local_48);
      lVar19 = FUN_00e8b990();
      if (lVar19 != 0) {
        lVar37 = *(int64_t *)(lVar37 + 0x20 + (uint64_t)(*(uint *)(lVar19 + 0x154) & 1) * 8);
      }
    }
    if (*(char **)(lVar37 + 0x48) != local_68) {
      FUN_00d64850();
      pcVar25 = *(char **)(lVar37 + 0x48);
      if (pcVar25 != local_68) {
        FUN_00d50b00();
        *(char **)(lVar37 + 0x48) = local_68;
        if (pcVar25 != (char *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    uVar20 = FUN_014bc240();
    uVar28 = (undefined7)((uint64_t)uVar20 >> 8);
    if (local_60 == local_98) {
      if (((char)local_48 == '\0') && (local_60 != (char *)0x0)) {
        local_90 = CONCAT71(uVar28,1);
        if (local_58[0] != '\0') goto LAB_014e6036;
        local_90 = CONCAT71(uVar28,1);
        FUN_00d50b00();
        pcVar25 = local_98;
      }
      else {
        local_90 = CONCAT71(uVar28,(char)local_48);
        pcVar25 = local_98;
      }
joined_r0x014e6026:
      local_98 = pcVar25;
      if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_58[0] == '\0') {
        if (local_60 != (char *)0x0) {
          uVar20 = FUN_00d50b00();
        }
        local_90 = CONCAT71((int7)((uint64_t)uVar20 >> 8),1);
        pcVar25 = local_60;
        if (((char)local_48 != '\0') && (pcVar25 = local_60, local_98 != (char *)0x0)) {
          local_98 = local_60;
          FUN_00d50b20();
          pcVar25 = local_98;
        }
        goto joined_r0x014e6026;
      }
      local_90 = CONCAT71(uVar28,1);
      if (((char)local_48 == '\0') || (local_98 == (char *)0x0)) {
        local_98 = local_60;
      }
      else {
        local_98 = local_60;
        FUN_00d50b20();
      }
    }
LAB_014e6036:
    pvVar23 = _pthread_getspecific((void*)pcVar30);
    if (pvVar23 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar20 = FUN_014bc240();
    uVar28 = (undefined7)((uint64_t)uVar20 >> 8);
    if (local_60 == pcVar35) {
      pcVar25 = pcVar35;
      if (((char)local_40 == '\0') && (local_60 != (char *)0x0)) {
        local_88 = CONCAT71(uVar28,1);
        if (local_58[0] != '\0') goto LAB_014e618b;
        local_88 = CONCAT71(uVar28,1);
        local_40 = (char *)((uint64_t)local_40._4_4_ << 0x20);
        FUN_00d50b00();
      }
      else {
        local_88 = (uint64_t)local_40 & 0xffffffff;
      }
LAB_014e6177:
      if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pcVar25 = local_60;
      if (local_58[0] == '\0') {
        if (local_60 != (char *)0x0) {
          uVar20 = FUN_00d50b00();
        }
        uVar28 = (undefined7)((uint64_t)uVar20 >> 8);
        local_88 = CONCAT71(uVar28,1);
        if (((char)local_40 != '\0') && (pcVar35 != (char *)0x0)) {
          local_40 = (char *)CONCAT44(local_40._4_4_,(int)CONCAT71(uVar28,1));
          uVar20 = FUN_00d50b20();
          local_88 = CONCAT71((int7)((uint64_t)uVar20 >> 8),1);
        }
        goto LAB_014e6177;
      }
      local_88 = CONCAT71(uVar28,1);
      if (((char)local_40 != '\0') && (pcVar35 != (char *)0x0)) {
        local_40 = (char *)CONCAT44(local_40._4_4_,(int)CONCAT71(uVar28,1));
        uVar20 = FUN_00d50b20();
        local_88 = CONCAT71((int7)((uint64_t)uVar20 >> 8),1);
      }
    }
LAB_014e618b:
    local_40 = pcVar25;
    pvVar23 = _pthread_getspecific((void*)pcVar30);
    if ((pvVar23 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
      pcVar30 = local_98;
    }
    FUN_013eb920();
    _memcpy(pcVar30,pvVar13,param_3);
    if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific((void*)pcVar30);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    _memcpy(pcVar30,pvVar21,param_3);
    pVar29 = (void*)pcVar30;
    if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
      FUN_00d50b20();
    }
    puVar22 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar22 + 7) = 0;
    *(void*)((int64_t)puVar22 + 0x3c) = 0;
    *(void*)(puVar22 + 8) = 0;
    *puVar22 = local_108;
    puVar22[9] = 0;
    puVar22[10] = 0;
    (*local_110)();
    local_50 = &g_02802501;
    local_38 = &g_02802501;
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      local_38 = (void*)CONCAT71((int7)((uint64_t)pvVar13 >> 8),1);
      FUN_00e8b990();
    }
    local_38 = (void*)0x1;
    FUN_013eb950(local_100);
    local_38 = &g_02802501;
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      local_38 = (void*)CONCAT71((int7)((uint64_t)pvVar13 >> 8),1);
      FUN_00e8b990();
    }
    FUN_00c8e2b0();
    if ((((local_58[0] == '\0') && (local_60 != (char *)0x0)) &&
        (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (char *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_013eb890();
    if (local_60 != (char *)0x0) {
      FUN_00d50b20();
    }
    FUN_014bc1d0();
    puVar24 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar24 + 7) = 0;
    *(void*)((int64_t)puVar24 + 0x3c) = 0;
    *(void*)(puVar24 + 8) = 0;
    *puVar24 = local_108;
    puVar24[9] = 0;
    puVar24[10] = 0;
    (*local_110)();
    if (puVar22 == puVar24) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
    local_38 = &g_02802501;
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      local_38 = (void*)CONCAT71((int7)((uint64_t)pvVar13 >> 8),1);
      FUN_00e8b990();
    }
    local_38 = (void*)0x1;
    FUN_013eb950(local_100);
    local_38 = &g_02802501;
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      local_38 = (void*)CONCAT71((int7)((uint64_t)pvVar13 >> 8),1);
      FUN_00e8b990();
    }
    FUN_00c8e2b0();
    if (((local_58[0] == '\0') && (local_60 != (char *)0x0)) &&
       ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (char *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    FUN_013eb890();
    if (local_60 != (char *)0x0) {
      FUN_00d50b20();
    }
    local_38 = &g_02802501;
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      local_38 = (void*)CONCAT71((int7)((uint64_t)pvVar13 >> 8),1);
      FUN_00e8b990();
    }
    uVar20 = FUN_014bc1d0();
    local_38 = (void*)CONCAT71((int7)((uint64_t)uVar20 >> 8),1);
    FUN_00e83070();
    local_38 = &g_02802501;
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      local_38 = (void*)CONCAT71((int7)((uint64_t)pvVar13 >> 8),1);
      lVar37 = FUN_00e8b990();
      if (lVar37 != 0) {
        pVar29 = pVar2;
      }
    }
    local_38 = (void*)0x1;
    cVar6 = FUN_0132dd90();
    if (cVar6 == '\0') {
      pvVar13 = _pthread_getspecific(pVar29);
      if ((pvVar13 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
        pVar29 = pVar2;
      }
      local_38 = (void*)FUN_01327990();
      FUN_014bd640(local_38);
      pvVar13 = _pthread_getspecific(pVar29);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bd640(local_38);
    }
    else {
      pVar29 = 0;
      FUN_014d9720(0,0);
      local_38 = &g_02802501;
      pvVar13 = _pthread_getspecific(pVar29);
      if (pvVar13 != (void *)0x0) {
        local_38 = (void*)CONCAT71((int7)((uint64_t)pvVar13 >> 8),1);
        FUN_00e8b990();
      }
      pVar29 = 0;
      FUN_014d9720(0,0);
    }
    if (((char)local_88 != '\0') && (local_40 != (char *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_90 != '\0') && (local_98 != (char *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  pvVar13 = _pthread_getspecific(pVar29);
  if ((pvVar13 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
    pVar29 = pVar2;
  }
  cVar8 = FUN_01334f30();
  cVar6 = local_b2;
  if (cVar8 != '\0') {
    bVar3 = local_f8 < local_c0;
    bVar39 = local_138 <= local_c0;
    local_170 = local_60;
    local_168 = '\0';
    ppcVar31 = &local_170;
    FUN_014c0100(ppcVar31,1);
    pVar29 = (void*)ppcVar31;
    if ((local_168 != '\0') && (local_170 != (char *)0x0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    bVar7 = bVar39 | local_b1;
    local_160 = local_60;
    local_158 = '\0';
    ppcVar31 = &local_160;
    FUN_014c0100(ppcVar31,bVar7);
    if ((local_158 != '\0') && (local_160 != (char *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar3 && cVar6 == '\0') && (local_f8 != 0x7fffffffffffffff)) {
      lVar37 = (**(code **)(*this_ptr + 0x380))();
      ppcVar32 = (char **)(local_f8 - lVar37);
      ppcVar31 = ppcVar32;
      if ((char **)this_ptr[0x1d] != ppcVar32) {
        FUN_00d64850();
        this_ptr[0x1d] = (int64_t)ppcVar32;
        FUN_00d64910();
      }
    }
    pVar29 = (void*)ppcVar31;
    if ((bVar7 == 0) && (local_138 != 0x7fffffffffffffff)) {
      lVar37 = *arg1;
      pvVar13 = _pthread_getspecific(pVar29);
      if (pvVar13 != (void *)0x0) {
        lVar37 = *arg1;
        lVar19 = FUN_00e8b990();
        if (lVar19 != 0) {
          lVar37 = *(int64_t *)(lVar37 + 0x20 + (uint64_t)(*(uint *)(lVar19 + 0x154) & 1) * 8);
        }
      }
      plVar33 = (int64_t *)*arg1;
      pvVar13 = _pthread_getspecific(pVar29);
      if (pvVar13 != (void *)0x0) {
        plVar33 = (int64_t *)*arg1;
        lVar19 = FUN_00e8b990();
        if (lVar19 != 0) {
          plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
        }
      }
      lVar19 = (**(code **)(*plVar33 + 0x380))();
      ppcVar32 = (char **)(local_138 - lVar19);
      ppcVar31 = ppcVar32;
      if (*(char ***)(lVar37 + 0xf0) != ppcVar32) {
        FUN_00d64850();
        *(char ***)(lVar37 + 0xf0) = ppcVar32;
        FUN_00d64910();
      }
    }
    pVar29 = (void*)ppcVar31;
    FUN_014bd410();
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bd410();
  }
  plVar33 = (int64_t *)*arg1;
  pvVar13 = _pthread_getspecific(pVar29);
  if (pvVar13 != (void *)0x0) {
    plVar33 = (int64_t *)*arg1;
    lVar37 = FUN_00e8b990();
    if (lVar37 != 0) {
      plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
    }
  }
  lVar37 = (**(code **)(*plVar33 + 0x380))();
  plVar33 = (int64_t *)*arg1;
  pvVar13 = _pthread_getspecific(pVar29);
  if (pvVar13 != (void *)0x0) {
    plVar33 = (int64_t *)*arg1;
    lVar19 = FUN_00e8b990();
    if (lVar19 != 0) {
      plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar19 + 0x154) & 1) + 4];
    }
  }
  lVar26 = (**(code **)(*plVar33 + 0x390))();
  lVar19 = *arg1;
  pvVar13 = _pthread_getspecific(pVar29);
  if (pvVar13 != (void *)0x0) {
    lVar19 = *arg1;
    lVar27 = FUN_00e8b990();
    if (lVar27 != 0) {
      lVar19 = *(int64_t *)(lVar19 + 0x20 + (uint64_t)(*(uint *)(lVar27 + 0x154) & 1) * 8);
    }
  }
  FUN_00d64850();
  lVar37 = lVar37 - lVar12;
  lVar12 = 0;
  if (-1 < lVar26 - lVar37) {
    lVar12 = lVar26 - lVar37;
  }
  *(int64_t *)(lVar19 + 0xd0) = lVar12;
  FUN_00d64910();
  if ((char)local_13c == '\0') {
    local_148 = '\0';
    local_150 = 0;
    FUN_014dcf30();
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*this_ptr + 0x378))();
    if (local_58[0] == '\0') {
      if (local_60 != (char *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    local_128 = '\x01';
    local_130 = local_60;
    FUN_014dcf30();
    if ((local_128 != '\0') && (local_130 != (char *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (char *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar12 = (**(code **)(*this_ptr + 0x380))();
    FUN_00d64850();
    this_ptr[0x1b] = (lVar15 + lVar14) - lVar12;
    FUN_00d64910();
    plVar33 = (int64_t *)*arg1;
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      plVar33 = (int64_t *)*arg1;
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        plVar33 = (int64_t *)plVar33[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
      }
    }
    lVar14 = (**(code **)(*plVar33 + 0x380))();
    lVar12 = *arg1;
    pvVar13 = _pthread_getspecific(pVar29);
    if (pvVar13 != (void *)0x0) {
      lVar12 = *arg1;
      lVar15 = FUN_00e8b990();
      if (lVar15 != 0) {
        lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar15 + 0x154) & 1) * 8);
      }
    }
    FUN_00d64850();
    *(int64_t *)(lVar12 + 0xd8) = (lVar17 + lVar16) - lVar14;
    FUN_00d64910();
  }
  FUN_014bfad0();
  pvVar13 = _pthread_getspecific(pVar29);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bfad0();
  if (lVar18 != 0 && (char)local_e4 == '\0') {
    FUN_00d50b20();
  }
  if ((local_41 != '\0') && (local_b0 != (char *)0x0)) {
    FUN_00d50b20();
  }
LAB_014e6f01:
  if (local_60 != (char *)0x0) {
    FUN_00d50b20();
  }
  return lVar37;
}

