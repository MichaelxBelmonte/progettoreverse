// ===================================================================
// MDProjectInsp — Complete reconstructed pseudocode
// 8 functions
// ===================================================================


// ============================================================
// 002c59e0
// ============================================================
// Function: FUN_002c59e0
// Address: 002c59e0
// Size: 4475 bytes
// Class: MDProjectInsp

void FUN_002c59e0(void)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char cVar7;
  uint *puVar8;
  void *pvVar9;
  void*puVar10;
  void*puVar11;
  int64_t lVar12;
  uint *puVar13;
  int64_t *plVar14;
  int iVar15;
  int64_t this_ptr;
  uint32_t uVar16;
  uint32_t extraout_XMM0_Da;
  void*local_1f0;
  uint8_t local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  uint local_68 [2];
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  plVar6 = local_70;
  FUN_002cd3f0();
  if (((char)local_68[0] == '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x120);
  if (*(int *)((int64_t)local_70 + 0xc) == 1) {
    FUN_00d23310();
    local_38[0] = (char)local_68[0];
    puVar13 = (uint *)local_38;
    puVar8 = local_68;
    if ((char)local_68[0] == '\0') {
      puVar8 = puVar13;
    }
    *(void*)puVar8 = 0;
    if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70[3] == 0) {
      plVar14 = (int64_t *)local_70[2];
      pvVar9 = _pthread_getspecific((void*)puVar13);
      if (pvVar9 != (void *)0x0) {
        plVar14 = (int64_t *)local_70[2];
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar14 + 0x478))();
    }
    else {
      FUN_00b88600();
    }
    (**(code **)(*local_90 + 0x3f0))();
    (**(code **)(*local_80 + 0x470))();
    plVar14 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x120);
    FUN_00d23310();
    puVar13 = (uint *)local_38;
    puVar8 = local_68;
    if ((char)local_68[0] == '\0') {
      puVar8 = puVar13;
    }
    local_38[0] = (char)local_68[0];
    *(void*)puVar8 = 0;
    if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70[3] == 0) {
      plVar14 = (int64_t *)local_70[2];
      pvVar9 = _pthread_getspecific((void*)puVar13);
      if (pvVar9 != (void *)0x0) {
        plVar14 = (int64_t *)local_70[2];
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar14 + 0x478))();
    }
    else {
      FUN_00b88600();
    }
    (**(code **)(*local_90 + 0x3f0))();
    (**(code **)(*local_80 + 0x470))();
    plVar14 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*plVar1 + 0x6a8))();
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    local_1d8 = '\0';
    local_1e0 = 0;
    (**(code **)(*plVar1 + 0x958))();
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    local_1c8 = '\0';
    local_1d0 = 0;
    (**(code **)(**(int64_t **)(this_ptr + 0x120) + 0x6a8))();
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x108) == 0) goto LAB_002c64d0;
  FUN_01f27fe0();
  cVar7 = (**(code **)(*local_70 + 0x450))();
  if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar7 != '\0') goto LAB_002c64d0;
  uVar16 = FUN_002cc5d0();
  if ((char)local_68[0] == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_002c5e9a;
    FUN_00d50b00();
    if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_002c5e5b:
    FUN_01f27fe0();
    (**(code **)(*local_48 + 0x760))();
    if ((char)local_68[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = local_68[0] & 0xffffff00;
    }
    cVar7 = (**(code **)(*local_70 + 0x50))();
    uVar16 = extraout_XMM0_Da;
    if (local_70 != (int64_t *)0x0) {
      uVar16 = FUN_00d50b20();
    }
    if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if (cVar7 != '\0') {
      bVar3 = false;
      bVar2 = false;
      plVar1 = *(int64_t **)(this_ptr + 0x108);
      lVar12 = g_026fcea0;
      goto joined_r0x002c5f41;
    }
    plVar1 = *(int64_t **)(this_ptr + 0x108);
    (**(code **)(*local_70 + 0x470))();
    if ((char)local_68[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = local_68[0] & 0xffffff00;
    }
    uVar16 = (**(code **)(*plVar1 + 0x978))();
    if (local_70 != (int64_t *)0x0) {
      uVar16 = FUN_00d50b20();
    }
    if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    lVar12 = g_026fceb0;
    plVar1 = *(int64_t **)(this_ptr + 0x108);
    if (g_026fceb0 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_1a0 = lVar12;
    local_198 = '\x01';
    FUN_01e57260(uVar16,&local_1a0);
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    (**(code **)(*local_70 + 0x470))();
    local_68[0] = 1;
    local_58 = local_58 & 0xffffffffffffff00;
    if (local_90 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_60 = local_90;
    local_58 = CONCAT71(local_58._1_7_,1);
    FUN_00d93690();
    plVar14 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*plVar1 + 0x6a8))();
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_70 != (int64_t *)0x0) goto LAB_002c5e5b;
LAB_002c5e9a:
    bVar3 = true;
    bVar2 = true;
    plVar1 = *(int64_t **)(this_ptr + 0x108);
    lVar12 = g_026fcea0;
joined_r0x002c5f41:
    g_026fcea0 = lVar12;
    if (lVar12 != 0) {
      uVar16 = FUN_00d50b00();
      bVar2 = bVar3;
    }
    local_1b8 = '\x01';
    local_1c0 = lVar12;
    FUN_01e57260(uVar16,&local_1c0);
    if ((char)local_68[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68[0] = local_68[0] & 0xffffff00;
    }
    uVar16 = (**(code **)(*plVar1 + 0x978))();
    if (local_70 != (int64_t *)0x0) {
      uVar16 = FUN_00d50b20();
    }
    if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (bVar2) {
      FUN_01f27fe0();
      uVar16 = (**(code **)(*local_48 + 0x760))();
      if (local_70 != (int64_t *)0x0) {
        if ((char)local_68[0] == '\0') {
          uVar16 = FUN_00d50b00();
          if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
            uVar16 = FUN_00d50b20();
          }
        }
        else {
          local_68[0] = local_68[0] & 0xffffff00;
        }
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    lVar12 = g_026fcea8;
    plVar1 = *(int64_t **)(this_ptr + 0x108);
    if (g_026fcea8 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_1b0 = lVar12;
    local_1a8 = '\x01';
    FUN_01e57260(uVar16,&local_1b0);
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    (**(code **)(*local_70 + 0x470))();
    local_68[0] = 1;
    local_58 = local_58 & 0xffffffffffffff00;
    if (local_90 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_60 = local_90;
    local_58 = CONCAT71(local_58._1_7_,1);
    FUN_00d93690();
    plVar14 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    (**(code **)(*plVar1 + 0x6a8))();
    if (plVar14 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
  }
  local_70 = &g_024c5048;
  FUN_00d50b20();
LAB_002c64d0:
  lVar12 = *(int64_t *)(this_ptr + 0xe0);
  if (lVar12 != 0) {
    FUN_00d50b00();
  }
  iVar15 = *(int *)(lVar12 + 0xc);
  FUN_00d50b20();
  if (iVar15 == 0) {
    if (*(int64_t *)(this_ptr + 0x148) == 0) {
      FUN_01e40eb0();
      FUN_01e40eb0();
      if ((char)local_68[0] == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
          if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_68[0] = local_68[0] & 0xffffff00;
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      puVar11 = (void*)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(puVar11 + 0x27) = 0;
      puVar11[0x2e] = 0;
      *(void*)(puVar11 + 0x2f) = 0;
      puVar11[0x30] = 0;
      *(void*)(puVar11 + 0x31) = 0;
      puVar11[0x28] = 0;
      puVar11[0x29] = 0;
      *(void*)(puVar11 + 0x2a) = 0;
      puVar11[0x2b] = 0;
      puVar11[0x2c] = 0;
      *(void*)((int64_t)puVar11 + 0x165) = 0;
      *(void*)((int64_t)puVar11 + 0x18c) = 0;
      *(void*)((int64_t)puVar11 + 0x194) = 0;
      *(void*)((int64_t)puVar11 + 0x199) = 0;
      puVar11[0x35] = 0;
      puVar11[0x36] = 0;
      puVar11[0x37] = 0;
      puVar11[0x38] = 0;
      *puVar11 = &g_02683800;
      puVar11[2] = &g_026842c8;
      puVar11[0x39] = 0;
      puVar11[0x3a] = 0;
      (*g_02683818)();
      puVar10 = *(void**)(this_ptr + 0x148);
      if (puVar10 == puVar11) {
        FUN_00d50b20();
      }
      else {
        *(void**)(this_ptr + 0x148) = puVar11;
        if (puVar10 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      lVar12 = g_026f6f70;
      plVar1 = *(int64_t **)(this_ptr + 0x148);
      if (g_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar5 = g_026fce80;
      local_190 = lVar12;
      local_188 = '\x01';
      if (g_026fce80 != 0) {
        FUN_00d50b00();
      }
      local_180 = lVar5;
      local_178 = '\x01';
      local_170 = 0;
      local_168 = '\0';
      FUN_00d31230(&local_170);
      if ((char)local_68[0] == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = local_68[0] & 0xffffff00;
      }
      (**(code **)(*plVar1 + 0x968))();
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0x148) + 0x9c8))();
      (**(code **)(**(int64_t **)(this_ptr + 0x148) + 0x558))();
      plVar1 = *(int64_t **)(this_ptr + 0x148);
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x4d0))();
      lVar12 = *(int64_t *)(this_ptr + 0x148);
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*local_70 + 0x450))();
      if (lVar12 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else if (*(int64_t *)(this_ptr + 0x148) != 0) {
    FUN_01e40eb0();
    if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x148) + 0x478))();
    }
    if (*(int64_t *)(this_ptr + 0x148) != 0) {
      *(void*)(this_ptr + 0x148) = 0;
      FUN_00d50b20();
    }
  }
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &g_02572358;
  pcVar4 = g_02572370;
  (*g_02572370)();
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &g_02572358;
  uVar16 = (*pcVar4)();
  if (plVar6 != (int64_t *)0x0) {
    local_68[0] = local_68[0] & 0xffffff00;
    local_70 = (int64_t *)0x0;
    local_60 = plVar6;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar15 = -local_58._4_4_;
        }
        else {
          iVar15 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar15);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar15 = 0;
        }
        local_58 = CONCAT44(iVar15,(int)local_58);
      }
      lVar12 = (int64_t)(int)local_58;
      iVar15 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar15);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar15) break;
      local_70 = *(int64_t **)(local_60[2] + 8 + lVar12 * 8);
      if (local_70[3] == 0) {
        if (local_70[2] != 0) {
          FUN_00d50b00();
          FUN_00d50b20();
          plVar1 = (int64_t *)local_70[2];
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_40 = '\0';
          local_48 = plVar1;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d50b00();
        FUN_00d50b20();
        plVar1 = (int64_t *)local_70[3];
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_40 = '\0';
        local_48 = plVar1;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    uVar16 = FUN_002d7300();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x128);
  local_1e8 = 0;
  local_1f0 = puVar11;
  FUN_002ccab0(uVar16,&local_1f0);
  if ((char)local_68[0] == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68[0] = local_68[0] & 0xffffff00;
  }
  (**(code **)(*plVar1 + 0x978))();
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar11 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002c48f0
// ============================================================
// Function: FUN_002c48f0
// Address: 002c48f0
// Size: 1574 bytes
// Class: MDProjectInsp

void FUN_002c48f0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint32_t uVar5;
  int64_t this_ptr;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  FUN_01e534b0();
  (**(code **)(*(int64_t *)(this_ptr + 0xd8) + 0x10))();
  FUN_00d50b00();
  FUN_01d25fa0();
  if ((int64_t *)(this_ptr + 0xd8) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)(this_ptr + 0xd8) + 0x10))();
    FUN_00d50b20();
  }
  lVar2 = g_026fce28;
  if (g_026fce28 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026fce30;
  if (g_026fce30 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar3;
  local_d8 = '\x01';
  FUN_01d61e70(param_1,&local_e0);
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x4d8))();
  local_d0 = local_40;
  local_c8 = '\0';
  (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x6e8))();
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
  FUN_01d9aec0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
  cVar4 = FUN_01d95200();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
    FUN_01d97e80();
    FUN_01d92440();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
  cVar4 = FUN_01d951e0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
    FUN_01d97ec0();
    FUN_01d92440();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b0))();
  FUN_01cf4060();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b0))();
  FUN_01cf4120();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  (**(code **)(*local_40 + 0x450))();
  FUN_002c54d0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026fce38;
  if (cVar4 != '\0') {
    if (g_026fce38 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    FUN_01d5e6e0(param_1,&local_c0);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      local_b0 = local_40;
      local_a8 = '\0';
      uVar5 = FUN_01d5e2e0();
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d5b240(param_1,uVar5);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d5dde0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d5b240(param_1,uVar5);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d5dde0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  local_a0 = local_40;
  local_98 = '\0';
  FUN_01d778e0();
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x150);
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0xa20))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_002c59e0();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00643690
// ============================================================
// Function: FUN_00643690
// Address: 00643690
// Size: 1060 bytes
// Class: MDProjectInsp
// String references:
//   "MDProjectInsp"

void FUN_00643690(void)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  int64_t **pplVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar7;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    if (*(int64_t *)(this_ptr + 0xc0) == 0) {
      return;
    }
    iVar4 = FUN_00643ea0();
    uVar7 = extraout_XMM0_Da_00;
    lVar2 = g_026fce40;
    if (iVar4 == -1) {
      FUN_006447a0();
      uVar7 = FUN_00643150();
      lVar2 = g_026fce40;
    }
    g_026fce40 = lVar2;
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_38 = '\x01';
    pplVar6 = &local_30;
    local_40 = lVar2;
    FUN_0009d910(uVar7,&local_40);
    plVar5 = local_30;
    if ((g_0271db30 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_026fcf28 = FUN_00018750();
      g_026fcf10 = "MDProjectInsp";
      g_026fcf18 = 0x160;
      g_026fcf20 = FUN_002d5a20;
      g_026fcf30 = 0;
      ram_00000000026fcf38 = 0;
      g_026fcf40 = 0;
      g_026fcfb8 = 0;
      ram_00000000026fcfc0 = 0;
      g_026fcfc8 = 0;
      g_026fcfca = 1;
      g_026fcf48 = 0;
      ram_00000000026fcf50 = 0;
      g_026fcf58 = 0;
      ram_00000000026fcf60 = 0;
      g_026fcf68 = 0;
      ram_00000000026fcf70 = 0;
      g_026fcf78 = 0;
      ram_00000000026fcf80 = 0;
      g_026fcf88 = 0;
      ram_00000000026fcf90 = 0;
      g_026fcf98 = 0;
      ram_00000000026fcfa0 = 0;
      g_026fcfa8 = 0;
      ram_00000000026fcfb0 = 0;
      g_026fcfd3 = 0;
      g_026fcfcb = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (int64_t *)0x0) {
LAB_0064385f:
      pplVar6 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0064385f;
    }
    plVar5 = *pplVar6;
    if (plVar5 == (int64_t *)0x0) {
      bVar1 = false;
      plVar5 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar6 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar6 + 1) = 0;
      }
      bVar1 = true;
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_006438fe;
  }
  if (*(int64_t *)(this_ptr + 200) == 0) {
    return;
  }
  iVar4 = FUN_00644650();
  uVar7 = extraout_XMM0_Da;
  lVar2 = g_026fce40;
  if (iVar4 == -1) {
    FUN_006449a0();
    uVar7 = FUN_00643150();
    lVar2 = g_026fce40;
  }
  g_026fce40 = lVar2;
  if (lVar2 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_48 = '\x01';
  pplVar6 = &local_30;
  local_50 = lVar2;
  FUN_0009d910(uVar7,&local_50);
  plVar5 = local_30;
  if ((g_0271db30 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026fcf28 = FUN_00018750();
    g_026fcf10 = "MDProjectInsp";
    g_026fcf18 = 0x160;
    g_026fcf20 = FUN_002d5a20;
    g_026fcf30 = 0;
    ram_00000000026fcf38 = 0;
    g_026fcf40 = 0;
    g_026fcfb8 = 0;
    ram_00000000026fcfc0 = 0;
    g_026fcfc8 = 0;
    g_026fcfca = 1;
    g_026fcf48 = 0;
    ram_00000000026fcf50 = 0;
    g_026fcf58 = 0;
    ram_00000000026fcf60 = 0;
    g_026fcf68 = 0;
    ram_00000000026fcf70 = 0;
    g_026fcf78 = 0;
    ram_00000000026fcf80 = 0;
    g_026fcf88 = 0;
    ram_00000000026fcf90 = 0;
    g_026fcf98 = 0;
    ram_00000000026fcfa0 = 0;
    g_026fcfa8 = 0;
    ram_00000000026fcfb0 = 0;
    g_026fcfd3 = 0;
    g_026fcfcb = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (int64_t *)0x0) {
LAB_006437b9:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_006437b9;
  }
  plVar5 = *pplVar6;
  if (plVar5 == (int64_t *)0x0) {
    bVar1 = false;
    plVar5 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar6 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
    }
    bVar1 = true;
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_006438fe:
  if ((plVar5 != (int64_t *)0x0) && (FUN_002d2180(), bVar1)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002c54d0
// ============================================================
// Function: FUN_002c54d0
// Address: 002c54d0
// Size: 808 bytes
// Class: MDProjectInsp

void FUN_002c54d0(void)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int unaff_ESI;
  int64_t this_ptr;
  float fVar11;
  uint8_t auVar6 [16];
  uint32_t uVar12;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar13 [16];
  int64_t *local_30;
  char local_28;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  if (unaff_ESI == 0) {
    FUN_01e40eb0();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x118) + 0x478))();
      if (*(int64_t **)(this_ptr + 0x100) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
        if ((local_28 == '\0') && (local_30 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        auVar9._0_8_ = (**(code **)(*local_30 + 0x4d8))();
        auVar9._8_8_ = extraout_XMM0_Qb_01;
        fVar11 = (float)((uint64_t)auVar9._0_8_ >> 0x20);
        uVar12 = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
        auVar7._4_4_ = fVar11;
        auVar7._0_4_ = fVar11 + g_023941fc;
        auVar7._8_4_ = uVar12;
        auVar7._12_4_ = uVar12;
        auVar7 = insertps(auVar9,auVar7,0x10);
        auVar13._4_4_ = in_XMM1._4_4_;
        auVar13._0_4_ = in_XMM1._4_4_ + g_023942a8;
        auVar13._8_4_ = in_XMM1._12_4_;
        auVar13._12_4_ = in_XMM1._12_4_;
        auVar13 = insertps(in_XMM1,auVar13,0x10);
        (**(code **)(*local_30 + 0x4d0))(auVar7._0_8_,auVar13._0_8_);
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x150) != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
        if ((local_28 == '\0') && (local_30 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        auVar10._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x150) + 0x4d8))();
        auVar10._8_8_ = extraout_XMM0_Qb_02;
        fVar11 = (float)((uint64_t)auVar10._0_8_ >> 0x20);
        uVar12 = (uint32_t)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
        auVar4._4_4_ = fVar11;
        auVar4._0_4_ = fVar11 + g_023941fc;
        auVar4._8_4_ = uVar12;
        auVar4._12_4_ = uVar12;
        auVar7 = insertps(auVar10,auVar4,0x10);
        (**(code **)(**(int64_t **)(this_ptr + 0x150) + 0x4d0))(auVar7._0_8_);
        if (local_30 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    FUN_01e40eb0();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 == (int64_t *)0x0) {
      FUN_01e53c20();
      lVar1 = *(int64_t *)(this_ptr + 0x118);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(MACH_HEADER._0_8_ + 0x450))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (*(int64_t **)(this_ptr + 0x100) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
        auVar6._0_8_ = (**(code **)(MACH_HEADER._0_8_ + 0x4d8))();
        auVar6._8_8_ = extraout_XMM0_Qb;
        fVar11 = (float)((uint64_t)auVar6._0_8_ >> 0x20);
        uVar12 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
        auVar2._4_4_ = fVar11;
        auVar2._0_4_ = fVar11 + g_023942a8;
        auVar2._8_4_ = uVar12;
        auVar2._12_4_ = uVar12;
        auVar7 = insertps(auVar6,auVar2,0x10);
        auVar5._4_4_ = in_XMM1._4_4_;
        auVar5._0_4_ = in_XMM1._4_4_ + g_023941fc;
        auVar5._8_4_ = in_XMM1._12_4_;
        auVar5._12_4_ = in_XMM1._12_4_;
        auVar13 = insertps(in_XMM1,auVar5,0x10);
        (**(code **)(MACH_HEADER._0_8_ + 0x4d0))(auVar7._0_8_,auVar13._0_8_);
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x150) != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x7b8))();
        auVar8._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x150) + 0x4d8))();
        auVar8._8_8_ = extraout_XMM0_Qb_00;
        fVar11 = (float)((uint64_t)auVar8._0_8_ >> 0x20);
        uVar12 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
        auVar3._4_4_ = fVar11;
        auVar3._0_4_ = fVar11 + g_023942a8;
        auVar3._8_4_ = uVar12;
        auVar3._12_4_ = uVar12;
        auVar7 = insertps(auVar8,auVar3,0x10);
        (**(code **)(**(int64_t **)(this_ptr + 0x150) + 0x4d0))(auVar7._0_8_);
      }
    }
  }
  return;
}



// ============================================================
// 002c3530
// ============================================================
// Function: FUN_002c3530
// Address: 002c3530
// Size: 4070 bytes
// Class: MDProjectInsp
// String references:
//   "onLocaleChanged"
//   "handleRevealInFinder"
//   "handleCopyFilePath"
//   "handleCopy"
//   "handleCollect"
//   "handleFind"
//   "handleDeleteUnused"
//   "handleSortByName"
//   "handleSortByStatus"
//   "handleSetProjectDir2"
//   "handleAudioSourcesChanged"
//   "MDProjectInsp"

void FUN_002c3530(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028063f8 = "handleRevealInFinder";
      g_02806400 = &g_026fcf10;
      g_02806408 = 0;
      g_02806410 = &g_026fd1a8;
      g_02806418 = FUN_002d6050;
      g_02806420 = FUN_002cd6f0;
      g_02806428 = 0;
      ram_0000000002806430 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02806440 = "handleCopyFilePath";
      g_02806448 = &g_026fcf10;
      g_02806450 = 0;
      g_02806458 = &g_026fd1a8;
      g_02806460 = FUN_002d6050;
      g_02806468 = FUN_002cdbd0;
      g_02806470 = 0;
      ram_0000000002806478 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02806488 = "handleCopy";
      g_02806490 = &g_026fcf10;
      g_02806498 = 0;
      g_028064a0 = &g_026fd1a8;
      g_028064a8 = FUN_002d6050;
      g_028064b0 = FUN_002ce2a0;
      g_028064b8 = 0;
      ram_00000000028064c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028064d0 = "handleCollect";
      g_028064d8 = &g_026fcf10;
      g_028064e0 = 0;
      g_028064e8 = &g_026fd1a8;
      g_028064f0 = FUN_002d6050;
      g_028064f8 = FUN_002ce760;
      g_02806500 = 0;
      ram_0000000002806508 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02806518 = "handleFind";
      g_02806520 = &g_026fcf10;
      g_02806528 = 0;
      g_02806530 = &g_026fd1a8;
      g_02806538 = FUN_002d6050;
      g_02806540 = FUN_002cf230;
      g_02806548 = 0;
      ram_0000000002806550 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02806560 = "handleDeleteUnused";
      g_02806568 = &g_026fcf10;
      g_02806570 = 0;
      g_02806578 = &g_026fd1a8;
      g_02806580 = FUN_002d6050;
      g_02806588 = FUN_002d22e0;
      g_02806590 = 0;
      ram_0000000002806598 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028065a8 = "handleSortByName";
      g_028065b0 = &g_026fcf10;
      g_028065b8 = 0;
      g_028065c0 = &g_026fd1a8;
      g_028065c8 = FUN_002d6050;
      g_028065d0 = FUN_002d21a0;
      g_028065d8 = 0;
      ram_00000000028065e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028065f0 = "handleSortByStatus";
      g_028065f8 = &g_026fcf10;
      g_02806600 = 0;
      g_02806608 = &g_026fd1a8;
      g_02806610 = FUN_002d6050;
      g_02806618 = FUN_002d2240;
      g_02806620 = 0;
      ram_0000000002806628 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02806638 = "handleSetProjectDir2";
      g_02806640 = &g_026fcf10;
      g_02806648 = 0;
      g_02806650 = &g_026fd1a8;
      g_02806658 = FUN_002d6050;
      g_02806660 = FUN_002d1180;
      g_02806668 = 0;
      ram_0000000002806670 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02806680 = "handleAudioSourcesChanged";
      g_02806688 = &g_026fcf10;
      g_02806690 = 0;
      g_02806698 = &g_026fd1ac;
      g_028066a0 = FUN_002d60e0;
      g_028066a8 = FUN_002d54a0;
      g_028066b0 = 0;
      ram_00000000028066b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028066c8 = "onLocaleChanged";
      g_028066d0 = &g_026fcf10;
      g_028066d8 = 0;
      g_028066e0 = &g_026fd1ac;
      g_028066e8 = FUN_002d60e0;
      g_028066f0 = FUN_002c8420;
      g_028066f8 = 0;
      ram_0000000002806700 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00643ea0
// ============================================================
// Function: FUN_00643ea0
// Address: 00643ea0
// Size: 759 bytes
// Class: MDProjectInsp

int FUN_00643ea0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  int64_t *this_ptr;
  uint64_t uVar7;
  int64_t *local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00637870();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00643ef2;
    }
  }
  else if (local_40 != 0) {
LAB_00643ef2:
    iVar5 = FUN_006e18e0();
    if (iVar5 == -1) {
      iVar5 = -1;
    }
    else {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_78 + 0x450))();
      lVar1 = g_02708e90;
      if (cVar3 == '\0') {
        local_48 = lVar2;
        if (g_02708e90 != 0) {
          FUN_00d50b00();
        }
        FUN_00e7d6f0();
        param_1 = 0xaaaaaaab;
        uVar7 = FUN_0071a120();
        lVar2 = local_40;
        if ((((local_38 == '\0') && (local_40 != 0)) && (uVar7 = FUN_00d50b00(), local_38 != '\0'))
           && (local_40 != 0)) {
          uVar7 = FUN_00d50b20();
        }
        bVar4 = (byte)lVar2;
        local_58 = lVar1;
        local_50 = '\0';
        FUN_000175c0(uVar7,&local_58);
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          local_38 = '\0';
          local_40 = lVar2;
          bVar4 = FUN_00c70bc0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        bVar4 = lVar2 != 0 & bVar4;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        bVar4 = 0;
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar4 != 0) {
        (**(code **)(*this_ptr + 0x5e8))();
        if (local_40 == 0) {
          cVar3 = '\0';
        }
        else {
          (**(code **)(*this_ptr + 0x5e8))();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_004a1190();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          iVar5 = -1;
        }
      }
    }
    FUN_00d50b20();
    return iVar5;
  }
  return -1;
}



// ============================================================
// 00644ba0
// ============================================================
// Function: FUN_00644ba0
// Address: 00644ba0
// Size: 916 bytes
// Class: MDProjectInsp

void FUN_00644ba0(void)

{
  int64_t *plVar1;
  char cVar2;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t *local_40;
  char local_38;
  
  FUN_00637870();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01e54250();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_01e53c20();
    (**(code **)(*local_40 + 0x478))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar2 = FUN_0009acd0();
  if (cVar2 == '\0') {
    FUN_006e24f0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0009b0b0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_006e2de0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0009f2a0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (unaff_ESI == 2) {
    plVar1 = *(int64_t **)(this_ptr + 0xe0);
    FUN_01e53c20();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x450))();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (unaff_ESI == 1) {
    plVar1 = *(int64_t **)(this_ptr + 0xd0);
    FUN_01e53c20();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x450))();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (unaff_ESI == 0) {
    plVar1 = *(int64_t **)(this_ptr + 0xb8);
    FUN_01e53c20();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x450))();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 006451f0
// ============================================================
// Function: FUN_006451f0
// Address: 006451f0
// Size: 745 bytes
// Class: MDProjectInsp

void FUN_006451f0(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t *local_40;
  char local_38;
  
  FUN_00637870();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (*(int64_t *)(this_ptr + 0xc0) != 0) {
    FUN_01e54250();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_01e53c20();
      (**(code **)(*local_40 + 0x478))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    cVar2 = FUN_0009acd0();
    if (cVar2 == '\0') {
      FUN_006e22c0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_0009b0b0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_006e2ae0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_0009f2a0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (unaff_ESI == 2) {
      plVar1 = *(int64_t **)(this_ptr + 0xe0);
      FUN_01e53c20();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x9e0))(param_1,0);
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (unaff_ESI == 0) {
      plVar1 = *(int64_t **)(this_ptr + 0xb8);
      FUN_01e53c20();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x9e0))(param_1,0);
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

