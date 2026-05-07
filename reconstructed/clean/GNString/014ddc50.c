// Function: FUN_014ddc50
// Address: 014ddc50
// Size: 10440 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_014ddc50(uint64_t param_1,uint32_t param_2)

{
  bool bVar1;
  code *pcVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  uint32_t uVar6;
  int64_t lVar7;
  void *pvVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t uVar12;
  void*puVar13;
  undefined7 extraout_var;
  void*puVar14;
  byte bVar15;
  void* pVar16;
  int64_t *plVar17;
  uint32_t uVar18;
  int64_t *plVar19;
  int64_t *plVar20;
  int64_t *plVar21;
  uint64_t uVar22;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar23;
  int64_t *unaff_R12;
  uint32_t uVar24;
  uint uVar25;
  undefined7 uVar26;
  undefined7 uVar27;
  bool bVar28;
  float fVar29;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  uint32_t local_108;
  uint32_t local_104;
  int64_t *local_100;
  char local_f8;
  uint64_t local_f0;
  int64_t local_e8;
  uint32_t local_e0;
  uint32_t local_dc;
  int64_t local_d8;
  int64_t *local_d0;
  uint32_t local_c8;
  uint local_c4;
  void* local_c0;
  uint local_bc;
  int64_t *local_b8;
  int64_t *local_a0;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  void*local_78;
  uint local_70;
  uint32_t local_6c;
  int64_t *local_68;
  void*local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  
  local_108 = param_2;
  lVar7 = FUN_014bb590();
  plVar19 = (int64_t *)*arg1;
  pvVar8 = _pthread_getspecific((void*)param_1);
  if (pvVar8 != (void *)0x0) {
    plVar19 = (int64_t *)*arg1;
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      plVar19 = (int64_t *)plVar19[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
  }
  lVar9 = (**(code **)(*plVar19 + 0x380))();
  if (lVar7 != lVar9) {
LAB_014dde25:
    uVar22 = 0;
    goto LAB_014e04f7;
  }
  cVar4 = (**(code **)(*this_ptr + 1000))();
  pVar16 = (void*)param_1;
  if (cVar4 != '\0') {
    iVar5 = FUN_014c2f80();
    pvVar8 = _pthread_getspecific((void*)param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014c34a0();
    plVar19 = local_50;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar19 == (int64_t *)0x0) goto LAB_014dde25;
    while( true ) {
      plVar19 = (int64_t *)*arg1;
      pvVar8 = _pthread_getspecific((void*)param_1);
      if (pvVar8 != (void *)0x0) {
        plVar19 = (int64_t *)*arg1;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          plVar19 = (int64_t *)plVar19[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
      }
      cVar4 = (**(code **)(*plVar19 + 1000))();
      if (cVar4 == '\0') {
        FUN_01f9a510();
                            FUN_00004f30();
      }
      lVar7 = **(int64_t **)(plVar19[0x21] + 0x10);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pVar16 = (void*)param_1;
      if (iVar5 < *(int *)(lVar7 + 0xc)) break;
      unaff_R12 = (int64_t *)*arg1;
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        unaff_R12 = (int64_t *)*arg1;
        lVar7 = FUN_00e8b990();
        if (lVar7 != 0) {
          unaff_R12 = (int64_t *)unaff_R12[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
      }
      FUN_014c2cf0();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x378))();
  local_98 = local_50;
  if ((((local_48 == '\0') && (local_50 != (int64_t *)0x0)) && (FUN_00d50b00(), local_48 != '\0'))
     && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_014bc070();
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_014bc070();
  }
  pvVar8 = _pthread_getspecific(pVar16);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_014bc420();
  plVar19 = local_50;
  local_c8 = uVar6;
  if (local_50 == (int64_t *)0x0) {
    local_f0 = 0;
    local_a0 = (int64_t *)0x0;
joined_r0x014ddf5b:
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_48 == '\0') {
      uVar10 = FUN_00d50b00();
      local_f0 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
      local_a0 = plVar19;
      goto joined_r0x014ddf5b;
    }
    local_f0 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
    local_a0 = local_50;
  }
  local_60 = (void*)0x0;
  local_58 = (int64_t *)0x0;
  local_78 = (void*)0x0;
  pVar16 = 0;
  local_68 = (int64_t *)0x0;
  cVar4 = (**(code **)(*this_ptr + 0x3c0))();
  if (cVar4 == '\0') {
    local_60 = (void*)0x0;
    local_58 = (int64_t *)0x0;
    local_78 = (void*)0x0;
    local_68 = (int64_t *)0x0;
    cVar4 = FUN_014bc070();
    if (cVar4 != '\0') goto LAB_014ddfe0;
    plVar23 = (int64_t *)*arg1;
    local_60 = (void*)0x0;
    local_58 = (int64_t *)0x0;
    local_78 = (void*)0x0;
    local_68 = (int64_t *)0x0;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      plVar23 = (int64_t *)*arg1;
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      local_78 = (void*)0x0;
      local_68 = (int64_t *)0x0;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    local_60 = (void*)0x0;
    local_58 = (int64_t *)0x0;
    local_78 = (void*)0x0;
    uVar10 = 0;
    local_68 = (int64_t *)0x0;
    cVar4 = (**(code **)(*plVar23 + 0x3c0))();
    plVar17 = (int64_t *)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
    local_c0 = (void*)plVar17;
    local_d8 = -1;
    if (cVar4 == '\0') {
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      local_78 = (void*)0x0;
      local_68 = (int64_t *)0x0;
      pvVar8 = _pthread_getspecific(local_c0);
      if (pvVar8 != (void *)0x0) {
        local_60 = (void*)0x0;
        local_58 = (int64_t *)0x0;
        local_78 = (void*)0x0;
        local_68 = (int64_t *)0x0;
        FUN_00e8b990();
      }
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      local_78 = (void*)0x0;
      local_68 = (int64_t *)0x0;
      cVar4 = FUN_014bc070();
      if (cVar4 != '\0') goto LAB_014de39d;
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      local_78 = (void*)0x0;
      local_68 = (int64_t *)0x0;
      lVar7 = (**(code **)(*this_ptr + 0x380))();
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      local_78 = (void*)0x0;
      pVar16 = 0;
      local_68 = (int64_t *)0x0;
      local_e8 = (**(code **)(*this_ptr + 0x3b0))();
      plVar23 = (int64_t *)*arg1;
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      local_78 = (void*)0x0;
      local_68 = (int64_t *)0x0;
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        plVar23 = (int64_t *)*arg1;
        local_60 = (void*)0x0;
        local_58 = (int64_t *)0x0;
        local_78 = (void*)0x0;
        local_68 = (int64_t *)0x0;
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
      }
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      local_78 = (void*)0x0;
      plVar17 = (int64_t *)0x0;
      local_68 = (int64_t *)0x0;
      cVar4 = (**(code **)(*plVar23 + 0x3d0))();
      local_e8 = local_e8 + lVar7;
      if (cVar4 != '\0') {
        plVar23 = (int64_t *)*arg1;
        local_60 = (void*)0x0;
        local_58 = (int64_t *)0x0;
        local_78 = (void*)0x0;
        local_68 = (int64_t *)0x0;
        pvVar8 = _pthread_getspecific((void*)plVar17);
        if (pvVar8 != (void *)0x0) {
          plVar23 = (int64_t *)*arg1;
          local_60 = (void*)0x0;
          local_58 = (int64_t *)0x0;
          local_78 = (void*)0x0;
          local_68 = (int64_t *)0x0;
          lVar7 = FUN_00e8b990();
          if (lVar7 != 0) {
            plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
        }
        local_60 = (void*)0x0;
        local_58 = (int64_t *)0x0;
        local_78 = (void*)0x0;
        pVar16 = 0;
        local_68 = (int64_t *)0x0;
        lVar7 = (**(code **)(*plVar23 + 0x380))();
        plVar23 = (int64_t *)*arg1;
        local_60 = (void*)0x0;
        local_58 = (int64_t *)0x0;
        local_78 = (void*)0x0;
        local_68 = (int64_t *)0x0;
        pvVar8 = _pthread_getspecific(pVar16);
        if (pvVar8 != (void *)0x0) {
          plVar23 = (int64_t *)*arg1;
          local_60 = (void*)0x0;
          local_58 = (int64_t *)0x0;
          local_78 = (void*)0x0;
          local_68 = (int64_t *)0x0;
          lVar9 = FUN_00e8b990();
          if (lVar9 != 0) {
            plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
        }
        local_60 = (void*)0x0;
        local_58 = (int64_t *)0x0;
        local_78 = (void*)0x0;
        plVar17 = (int64_t *)0x0;
        local_68 = (int64_t *)0x0;
        local_d8 = (**(code **)(*plVar23 + 0x3b8))();
        local_d8 = local_d8 + lVar7;
      }
      local_c0 = 0;
    }
    else {
LAB_014de39d:
      local_e8 = -1;
    }
    local_bc = 0;
    local_c4 = 0;
    plVar23 = (int64_t *)this_ptr[0x23];
joined_r0x014de258:
    if (plVar23 != (int64_t *)0x0) goto LAB_014de0b7;
LAB_014de25e:
    local_68 = (int64_t *)0x0;
    lVar7 = 0;
    plVar21 = local_68;
  }
  else {
LAB_014ddfe0:
    plVar23 = (int64_t *)*arg1;
    local_60 = (void*)0x0;
    local_58 = (int64_t *)0x0;
    local_78 = (void*)0x0;
    local_68 = (int64_t *)0x0;
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      plVar23 = (int64_t *)*arg1;
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      local_78 = (void*)0x0;
      local_68 = (int64_t *)0x0;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    local_60 = (void*)0x0;
    local_58 = (int64_t *)0x0;
    local_78 = (void*)0x0;
    plVar17 = (int64_t *)0x0;
    local_68 = (int64_t *)0x0;
    uVar10 = (**(code **)(*plVar23 + 0x3c0))();
    local_e8 = -1;
    if ((char)uVar10 == '\0') {
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      local_78 = (void*)0x0;
      local_68 = (int64_t *)0x0;
      pvVar8 = _pthread_getspecific((void*)plVar17);
      if (pvVar8 != (void *)0x0) {
        local_60 = (void*)0x0;
        local_58 = (int64_t *)0x0;
        local_78 = (void*)0x0;
        local_68 = (int64_t *)0x0;
        FUN_00e8b990();
      }
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      local_78 = (void*)0x0;
      local_68 = (int64_t *)0x0;
      local_c4 = FUN_014bc070();
      local_bc = local_c4 ^ 1;
      local_c0 = 0;
      local_d8 = -1;
      plVar23 = (int64_t *)this_ptr[0x23];
      goto joined_r0x014de258;
    }
    local_c4 = (uint)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
    local_bc = 0;
    local_d8 = -1;
    local_c0 = 0;
    plVar23 = (int64_t *)this_ptr[0x23];
    if (plVar23 == (int64_t *)0x0) goto LAB_014de25e;
LAB_014de0b7:
    FUN_00d50b00();
    local_78 = &g_02802501;
    local_60 = (void*)0x0;
    local_58 = (int64_t *)0x0;
    local_68 = plVar23;
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if (pvVar8 == (void *)0x0) {
LAB_014de120:
      lVar7 = plVar23[0x22];
      plVar21 = plVar23;
    }
    else {
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      local_68 = plVar23;
      lVar7 = FUN_00e8b990();
      if (lVar7 == 0) goto LAB_014de120;
      plVar21 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      lVar7 = plVar21[0x22];
    }
    if (lVar7 != 0) {
      unaff_R12 = plVar21 + 0x22;
      FUN_00d64850();
      plVar21[0x22] = 0;
      FUN_00d64910();
    }
    lVar7 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
    plVar21 = plVar23;
    if (this_ptr[0x23] != 0) {
      FUN_00d64850();
      this_ptr[0x23] = 0;
      FUN_00d64910();
    }
  }
  local_68 = plVar21;
  lVar9 = *arg1;
  pvVar8 = _pthread_getspecific((void*)plVar17);
  if (pvVar8 != (void *)0x0) {
    lVar9 = *arg1;
    lVar11 = FUN_00e8b990();
    if (lVar11 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
    }
  }
  plVar20 = local_68;
  uVar10 = 0;
  plVar21 = *(int64_t **)(lVar9 + 0x118);
  if (plVar21 == local_68) {
    local_78 = (void*)lVar7;
    plVar3 = plVar20;
    if ((plVar23 == (int64_t *)0x0) && (plVar21 != (int64_t *)0x0)) {
      local_78 = (void*)0x1;
      FUN_00d50b00();
    }
  }
  else {
    if (plVar21 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
    local_78 = (void*)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
    plVar3 = plVar21;
    if (plVar23 != (int64_t *)0x0 && plVar20 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_68 = plVar3;
  if (local_68 != (int64_t *)0x0) {
    local_60 = (void*)0x0;
    local_58 = (int64_t *)0x0;
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if (pvVar8 == (void *)0x0) {
LAB_014de500:
      lVar9 = local_68[0x22];
      plVar23 = local_68;
    }
    else {
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      lVar9 = FUN_00e8b990();
      if (lVar9 == 0) goto LAB_014de500;
      plVar23 = (int64_t *)local_68[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      lVar9 = plVar23[0x22];
      plVar17 = local_68;
    }
    if (lVar9 != 0) {
      FUN_00d64850();
      plVar23[0x22] = 0;
      FUN_00d64910();
    }
    lVar9 = *arg1;
    local_60 = (void*)0x0;
    local_58 = (int64_t *)0x0;
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if (pvVar8 != (void *)0x0) {
      lVar9 = *arg1;
      local_60 = (void*)0x0;
      local_58 = (int64_t *)0x0;
      lVar11 = FUN_00e8b990();
      if (lVar11 != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar9 + 0x118) != 0) {
      FUN_00d64850();
      *(void*)(lVar9 + 0x118) = 0;
      FUN_00d64910();
    }
  }
  lVar9 = *arg1;
  pvVar8 = _pthread_getspecific((void*)plVar17);
  if (pvVar8 != (void *)0x0) {
    lVar9 = *arg1;
    lVar11 = FUN_00e8b990();
    if (lVar11 != 0) {
      lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
    }
  }
  plVar23 = *(int64_t **)(lVar9 + 0x110);
  local_d0 = plVar23;
  if (plVar23 == (int64_t *)0x0) {
    local_e0 = 1;
    local_58 = (int64_t *)0x0;
    local_60 = (void*)0x0;
  }
  else {
    FUN_00d50b00();
    lVar9 = *arg1;
    local_60 = &g_02802501;
    local_58 = plVar23;
    pvVar8 = _pthread_getspecific((void*)plVar23);
    if (pvVar8 != (void *)0x0) {
      lVar9 = *arg1;
      local_58 = local_d0;
      lVar11 = FUN_00e8b990();
      if (lVar11 != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
    }
    if (*(int64_t *)(lVar9 + 0x110) != 0) {
      FUN_00d64850();
      *(void*)(lVar9 + 0x110) = 0;
      FUN_00d64910();
    }
    local_58 = local_d0;
    pvVar8 = _pthread_getspecific((void*)plVar23);
    if (pvVar8 == (void *)0x0) {
LAB_014de6e3:
      lVar9 = local_d0[0x23];
      plVar17 = plVar23;
      plVar23 = local_d0;
    }
    else {
      local_58 = local_d0;
      lVar9 = FUN_00e8b990();
      if (lVar9 == 0) goto LAB_014de6e3;
      plVar23 = (int64_t *)local_d0[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      lVar9 = plVar23[0x23];
      plVar17 = local_d0;
    }
    local_60 = (void*)0x1;
    if (lVar9 != 0) {
      local_60 = (void*)0x1;
      FUN_00d64850();
      plVar23[0x23] = 0;
      FUN_00d64910();
    }
    local_e0 = 0;
    local_58 = local_d0;
  }
  cVar4 = (**(code **)(*this_ptr + 1000))();
  if (cVar4 != '\0') {
    while( true ) {
      plVar23 = (int64_t *)*arg1;
      pvVar8 = _pthread_getspecific((void*)plVar17);
      if (pvVar8 != (void *)0x0) {
        plVar23 = (int64_t *)*arg1;
        lVar9 = FUN_00e8b990();
        if (lVar9 != 0) {
          plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
      }
      cVar4 = (**(code **)(*plVar23 + 1000))();
      if ((cVar4 == '\0') || (lVar7 = **(int64_t **)(plVar23[0x21] + 0x10), lVar7 == 0)) break;
      FUN_00d50b00();
      FUN_014c2e20();
      pvVar8 = _pthread_getspecific((void*)plVar17);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014c2cf0();
      FUN_00d50b20();
    }
  }
  uVar10 = (**(code **)(*this_ptr + 0x388))();
  plVar23 = (int64_t *)*arg1;
  pvVar8 = _pthread_getspecific((void*)plVar17);
  if (pvVar8 != (void *)0x0) {
    plVar23 = (int64_t *)*arg1;
    lVar9 = FUN_00e8b990();
    if (lVar9 != 0) {
      plVar23 = (int64_t *)plVar23[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar23 + 0x388))();
  FUN_014bb2b0();
  pvVar8 = _pthread_getspecific((void*)plVar17);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar17 = local_98;
  }
  iVar5 = FUN_01326de0();
  pVar16 = (void*)plVar17;
  if (iVar5 == 3) {
    FUN_014ce440();
    FUN_014ceed0();
    FUN_014cfcc0();
  }
  else {
    FUN_014bc090();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    local_b8 = local_50;
    if (local_50 == (int64_t *)0x0) {
      uVar6 = (uint32_t)CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
      local_70 = 0;
    }
    else {
      if (local_48 == '\0') {
        uVar12 = FUN_00d50b00();
        uVar6 = 0;
        local_70 = (uint)CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        if ((local_48 == '\0') || (local_50 == (int64_t *)0x0)) goto LAB_014dea75;
        plVar23 = (int64_t *)FUN_00d50b20();
      }
      else {
        local_48 = '\0';
        plVar23 = local_50;
      }
      local_70 = (uint)CONCAT71((int7)((uint64_t)plVar23 >> 8),1);
      uVar6 = 0;
    }
LAB_014dea75:
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc090();
    plVar23 = local_90;
    pvVar8 = _pthread_getspecific(pVar16);
    plVar17 = local_90;
    if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar23 = plVar17, lVar7 != 0)) {
      plVar23 = (int64_t *)plVar17[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    FUN_013eb920();
    local_80 = local_50;
    if (local_50 == (int64_t *)0x0) {
      uVar18 = (uint32_t)CONCAT71((int7)((uint64_t)plVar23 >> 8),1);
      uVar24 = 0;
    }
    else {
      uVar26 = (undefined7)((uint64_t)uVar10 >> 8);
      if (local_48 == '\0') {
        FUN_00d50b00();
        uVar18 = 0;
        uVar24 = (uint32_t)CONCAT71(uVar26,1);
        if ((local_48 == '\0') || (local_50 == (int64_t *)0x0)) goto LAB_014deb60;
        FUN_00d50b20();
      }
      else {
        local_48 = '\0';
      }
      uVar24 = (uint32_t)CONCAT71(uVar26,1);
      uVar18 = 0;
    }
LAB_014deb60:
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = local_b8;
    local_88 = '\0';
    local_104 = uVar6;
    local_dc = uVar18;
    local_6c = uVar24;
    FUN_00c8e4f0();
    plVar23 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    uVar6 = FUN_00c92160();
    bVar28 = plVar23 != (int64_t *)0x0;
    FUN_00c92190(uVar6,(int)local_80[3]);
    puVar13 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar13 + 7) = 0;
    *(void*)((int64_t)puVar13 + 0x3c) = 0;
    *(void*)(puVar13 + 8) = 0;
    pVar16 = 0x25dc9e8;
    *puVar13 = &g_025dc9e8;
    puVar13[9] = 0;
    puVar13[10] = 0;
    pcVar2 = g_025dca00;
    (*g_025dca00)();
    pvVar8 = _pthread_getspecific(pVar16);
    puVar14 = puVar13;
    if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      puVar14 = (void*)puVar13[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    FUN_014bc090();
    plVar17 = local_50;
    pvVar8 = _pthread_getspecific(pVar16);
    plVar21 = local_50;
    if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar17 = plVar21, lVar7 != 0)) {
      plVar17 = (int64_t *)plVar21[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    FUN_013eb950((int)plVar17[10]);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    if ((void*)this_ptr[0x11] != puVar13) {
      FUN_00d64850();
      puVar14 = (void*)this_ptr[0x11];
      if (puVar14 != puVar13) {
        FUN_00d50b00();
        this_ptr[0x11] = (int64_t)puVar13;
        if (puVar14 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_014bc0d0();
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_013eb920();
    plVar20 = local_50;
    plVar21 = local_b8;
    uVar26 = (undefined7)((uint64_t)uVar10 >> 8);
    uVar27 = (undefined7)((uint64_t)puVar14 >> 8);
    if (local_b8 == local_50) {
      plVar17 = local_b8;
      if (((byte)local_104 & local_b8 != (int64_t *)0x0) == 1) {
        plVar20 = local_b8;
        if (local_48 != '\0') goto LAB_014dee9f;
        puVar14 = (void*)CONCAT71(uVar27,1);
        FUN_00d50b00();
      }
      else {
        puVar14 = (void*)(uint64_t)local_70;
      }
LAB_014df160:
      uVar6 = SUB84(puVar14,0);
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar15 = (byte)local_70 & local_b8 != (int64_t *)0x0;
        plVar17 = (int64_t *)(uint64_t)CONCAT31((int3)(local_70 >> 8),bVar15);
        puVar14 = (void*)CONCAT71(uVar27,1);
        plVar21 = plVar20;
        if (bVar15 == 1) {
          local_b8 = plVar20;
          FUN_00d50b20();
        }
        goto LAB_014df160;
      }
      bVar15 = (byte)local_70 & local_b8 != (int64_t *)0x0;
      plVar17 = (int64_t *)(uint64_t)CONCAT31((int3)(local_70 >> 8),bVar15);
      local_b8 = plVar17;
      if (bVar15 == 1) {
        local_b8 = local_50;
        FUN_00d50b20();
        local_b8 = plVar17;
        uVar26 = extraout_var;
      }
LAB_014dee9f:
      local_48 = '\0';
      plVar17 = local_b8;
      plVar21 = plVar20;
      uVar6 = (int)CONCAT71(uVar26,1);
    }
    local_70 = uVar6;
    local_b8 = plVar21;
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc0d0();
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_013eb920();
    plVar20 = local_50;
    plVar21 = local_80;
    uVar26 = (undefined7)((uint64_t)puVar14 >> 8);
    if (local_80 == local_50) {
      uVar6 = local_6c;
      if ((char)local_dc != '\0') {
        if (local_48 != '\0') goto LAB_014df268;
        FUN_00d50b00();
        uVar6 = (int)CONCAT71(uVar26,1);
      }
LAB_014df2e3:
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar6 = (uint32_t)CONCAT71(uVar26,1);
        plVar21 = plVar20;
        if ((char)local_dc == '\0') {
          local_80 = plVar20;
          FUN_00d50b20();
        }
        goto LAB_014df2e3;
      }
      local_80 = plVar20;
      if ((char)local_dc == '\0') {
        local_80 = local_50;
        uVar10 = FUN_00d50b20();
        local_80 = plVar20;
      }
LAB_014df268:
      local_48 = '\0';
      plVar21 = local_80;
      uVar6 = (int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
    }
    local_6c = uVar6;
    local_80 = plVar21;
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = local_b8;
    local_88 = '\0';
    FUN_00c8e4f0();
    plVar21 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    uVar6 = FUN_00c92160();
    if (plVar23 == plVar21) {
      plVar21 = plVar23;
      if (plVar23 != (int64_t *)0x0) {
        uVar6 = FUN_00d50b20();
      }
    }
    else {
      bVar28 = true;
      if (plVar23 != (int64_t *)0x0) {
        uVar6 = FUN_00d50b20();
      }
    }
    FUN_00c92190(uVar6,(int)local_80[3]);
    puVar14 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar14 + 7) = 0;
    *(void*)((int64_t)puVar14 + 0x3c) = 0;
    *(void*)(puVar14 + 8) = 0;
    *puVar14 = &g_025dc9e8;
    puVar14[9] = 0;
    puVar14[10] = 0;
    (*pcVar2)();
    if (puVar13 == puVar14) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      puVar13 = puVar14;
    }
    pvVar8 = _pthread_getspecific((void*)plVar17);
    puVar14 = puVar13;
    if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      puVar14 = (void*)puVar13[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    FUN_014bc0d0();
    plVar23 = local_50;
    pvVar8 = _pthread_getspecific((void*)plVar17);
    plVar20 = local_50;
    if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar23 = plVar20, lVar7 != 0)) {
      plVar23 = (int64_t *)plVar20[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    FUN_013eb950((int)plVar23[10]);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    if ((void*)this_ptr[9] != puVar13) {
      FUN_00d64850();
      puVar14 = (void*)this_ptr[9];
      if (puVar14 != puVar13) {
        FUN_00d50b00();
        this_ptr[9] = (int64_t)puVar13;
        if (puVar14 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_014bc240();
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_013eb920();
    plVar20 = local_50;
    plVar23 = local_b8;
    uVar26 = (undefined7)((uint64_t)puVar14 >> 8);
    if (local_b8 == local_50) {
      uVar25 = local_70;
      if (((char)local_70 == '\0') && (local_b8 != (int64_t *)0x0)) {
        plVar20 = local_b8;
        if (local_48 != '\0') goto LAB_014df64f;
        FUN_00d50b00();
        uVar25 = (int)CONCAT71(uVar26,1);
      }
LAB_014df6bf:
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar25 = (uint)CONCAT71(uVar26,1);
        plVar23 = plVar20;
        if (((char)local_70 != '\0') && (local_b8 != (int64_t *)0x0)) {
          local_b8 = plVar20;
          FUN_00d50b20();
        }
        goto LAB_014df6bf;
      }
      if (((char)local_70 != '\0') && (local_b8 != (int64_t *)0x0)) {
        local_b8 = local_50;
        uVar10 = FUN_00d50b20();
      }
LAB_014df64f:
      local_48 = '\0';
      plVar23 = plVar20;
      uVar25 = (int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
    }
    local_70 = uVar25;
    local_b8 = plVar23;
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc240();
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    plVar20 = local_50;
    plVar23 = local_80;
    if (local_80 == local_50) {
      if ((char)local_6c == '\0') {
        if (local_48 != '\0') goto LAB_014df805;
        FUN_00d50b00();
      }
LAB_014df817:
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar23 = plVar20;
        if ((char)local_6c != '\0') {
          local_80 = plVar20;
          FUN_00d50b20();
        }
        goto LAB_014df817;
      }
      local_80 = plVar20;
      if ((char)local_6c != '\0') {
        local_80 = local_50;
        FUN_00d50b20();
        local_80 = plVar20;
      }
LAB_014df805:
      local_48 = '\0';
      plVar23 = local_80;
    }
    local_80 = plVar23;
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = local_b8;
    local_88 = '\0';
    FUN_00c8e4f0();
    plVar23 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    uVar6 = FUN_00c92160();
    if (plVar23 == plVar21) {
      plVar23 = plVar21;
      if ((bVar28) || (plVar21 == (int64_t *)0x0)) {
        bVar1 = bVar28;
        if (plVar21 == (int64_t *)0x0) {
          plVar23 = (int64_t *)0x0;
        }
        else {
          uVar6 = FUN_00d50b20();
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
      if ((bVar28) && (plVar21 != (int64_t *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
    }
    FUN_00c92190(uVar6,(int)local_80[3]);
    puVar14 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar14 + 7) = 0;
    *(void*)((int64_t)puVar14 + 0x3c) = 0;
    *(void*)(puVar14 + 8) = 0;
    *puVar14 = &g_025dc9e8;
    puVar14[9] = 0;
    puVar14[10] = 0;
    (*pcVar2)();
    if (puVar14 == puVar13) {
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
    local_6c = 0x2802501;
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc240();
    plVar21 = local_50;
    pvVar8 = _pthread_getspecific((void*)plVar17);
    plVar20 = local_50;
    if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar21 = plVar20, lVar7 != 0)) {
      plVar21 = (int64_t *)plVar20[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
    FUN_013eb950((int)plVar21[10]);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    FUN_014bc1d0();
    pvVar8 = _pthread_getspecific((void*)plVar17);
    if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar17 = local_98;
    }
    cVar4 = FUN_0132dd90();
    if (cVar4 == '\0') {
      pvVar8 = _pthread_getspecific((void*)plVar17);
      if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar17 = local_98;
      }
      FUN_01327990();
      FUN_014bd640();
    }
    else {
      plVar17 = (int64_t *)0x0;
      FUN_014d9720(0,0);
    }
    FUN_00d50b20();
    if ((bVar1) && (plVar23 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (((char)local_70 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar8 = _pthread_getspecific((void*)plVar17);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bb7f0();
  FUN_014bb800();
  pvVar8 = _pthread_getspecific((void*)plVar17);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc2e0();
  pvVar8 = _pthread_getspecific((void*)plVar17);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_014bc070();
  pVar16 = (void*)plVar17;
  if (cVar4 == '\0') {
LAB_014dfd91:
    if (local_a0 == (int64_t *)0x0) {
      FUN_014bc360();
      local_a0 = (int64_t *)0x0;
    }
    else {
LAB_014dfd9f:
      pvVar8 = _pthread_getspecific(pVar16);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc360();
      FUN_014bc360();
      pvVar8 = _pthread_getspecific(pVar16);
      if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar16 = (void*)local_a0;
      }
      local_f8 = 0;
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_f8 = '\x01';
      local_100 = this_ptr;
      FUN_014bc2e0();
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    pvVar8 = _pthread_getspecific(pVar16);
    if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar17 = local_98;
    }
    iVar5 = FUN_01326de0();
    pVar16 = (void*)plVar17;
    if (iVar5 != 3) goto LAB_014dfd91;
    if (local_a0 != (int64_t *)0x0) {
      pvVar8 = _pthread_getspecific(pVar16);
      plVar23 = local_a0;
      if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar23 = local_a0, lVar7 != 0)) {
        plVar17 = local_a0;
        plVar23 = (int64_t *)local_a0[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      pVar16 = (void*)plVar17;
      local_b8 = (int64_t *)(**(code **)(*plVar23 + 0x3e0))();
      fVar29 = (float)(**(code **)(*this_ptr + 0x3e0))();
      if (g_02390438 < (float)((uint)(local_b8._0_4_ - fVar29) & g_02390140))
      goto LAB_014e01ac;
      goto LAB_014dfd9f;
    }
LAB_014e01ac:
    pvVar8 = _pthread_getspecific(pVar16);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc360();
    plVar23 = local_a0;
    FUN_014bc360();
    if (plVar23 == (int64_t *)0x0) {
      local_a0 = (int64_t *)0x0;
    }
    else {
      pvVar8 = _pthread_getspecific(pVar16);
      if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar16 = (void*)local_a0;
      }
      FUN_014bc2e0();
    }
  }
  FUN_014bc030();
  pvVar8 = _pthread_getspecific(pVar16);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_01334f30();
  if (cVar4 != '\0') {
    if ((char)local_c4 == '\0') {
      cVar4 = FUN_014bc070();
      if (cVar4 == '\0') {
        if ((byte)((byte)local_bc | (byte)local_c0) == 1) {
          local_128 = local_98;
          local_120 = '\0';
          FUN_014c0100(&local_128,(byte)local_c0);
          if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((char)local_bc == '\0') {
          lVar7 = (**(code **)(*this_ptr + 0x380))();
          if (local_e8 < lVar7) {
            if (this_ptr[0x1d] != 0) {
              FUN_00d64850();
              this_ptr[0x1d] = 0;
              FUN_00d64910();
            }
          }
          else {
            lVar7 = (**(code **)(*this_ptr + 0x380))();
            lVar7 = local_e8 - lVar7;
            if (this_ptr[0x1d] != lVar7) {
              FUN_00d64850();
              this_ptr[0x1d] = lVar7;
              FUN_00d64910();
            }
          }
        }
        if ((byte)local_c0 == '\0') {
          lVar7 = (**(code **)(*this_ptr + 0x380))();
          if (lVar7 <= local_d8) {
            lVar7 = (**(code **)(*this_ptr + 0x380))();
            lVar9 = (**(code **)(*this_ptr + 0x388))();
            if (local_d8 < lVar9 + lVar7) {
              lVar7 = (**(code **)(*this_ptr + 0x380))();
              lVar7 = local_d8 - lVar7;
              if (this_ptr[0x1e] != lVar7) {
                FUN_00d64850();
                this_ptr[0x1e] = lVar7;
                FUN_00d64910();
              }
              goto LAB_014e0438;
            }
          }
          if (this_ptr[0x1e] != 0x7fffffffffffffff) {
            FUN_00d64850();
            this_ptr[0x1e] = 0x7fffffffffffffff;
            FUN_00d64910();
          }
        }
      }
      else {
        if (this_ptr[0x1d] != 0) {
          FUN_00d64850();
          this_ptr[0x1d] = 0;
          FUN_00d64910();
        }
        if (this_ptr[0x1e] != 0x7fffffffffffffff) {
          FUN_00d64850();
          this_ptr[0x1e] = 0x7fffffffffffffff;
          FUN_00d64910();
        }
      }
    }
    else {
      if (this_ptr[0x1d] != 0x7fffffffffffffff) {
        FUN_00d64850();
        this_ptr[0x1d] = 0x7fffffffffffffff;
        FUN_00d64910();
      }
      if (this_ptr[0x1e] != 0x7fffffffffffffff) {
        FUN_00d64850();
        this_ptr[0x1e] = 0x7fffffffffffffff;
        FUN_00d64910();
      }
    }
LAB_014e0438:
    FUN_014bd410();
  }
  if ((char)local_108 != '\0') {
    local_110 = '\0';
    local_118 = 0;
    FUN_014dcf30();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_014bfad0();
  if (local_98 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar23 = local_68;
  if (local_d0 != (int64_t *)0x0 && (char)local_e0 == '\0') {
    FUN_00d50b20();
  }
  plVar17 = local_a0;
  if (((char)local_78 != '\0') && (plVar23 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar22 = CONCAT71((int7)((uint64_t)plVar23 >> 8),1);
  if ((plVar19 != (int64_t *)0x0) && (plVar17 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_014e04f7:
  return uVar22 & 0xffffffff;
}

