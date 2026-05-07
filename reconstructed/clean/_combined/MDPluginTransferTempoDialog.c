// ===================================================================
// MDPluginTransferTempoDialog — Complete reconstructed pseudocode
// 8 functions
// ===================================================================


// ============================================================
// 00546e20
// ============================================================
// Function: FUN_00546e20
// Address: 00546e20
// Size: 4912 bytes
// Class: MDPluginTransferTempoDialog

bool FUN_00546e20(void*param_1)

{
  void*puVar1;
  int iVar2;
  uint64_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void*puVar7;
  void* pVar8;
  int64_t lVar9;
  char cVar10;
  int64_t this_ptr;
  void*puVar11;
  uint32_t uVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar13;
  void*local_200;
  char local_1f8;
  void*local_1f0;
  char local_1e8;
  void*local_1e0;
  char local_1d8;
  void*local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  void*local_1b0;
  char local_1a8;
  void*local_1a0;
  char local_198;
  void*local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  void*local_160;
  char local_158;
  void*local_150;
  char local_148;
  uint64_t local_140;
  int64_t local_138;
  char local_130;
  uint64_t local_128;
  uint64_t local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  void*local_c8;
  void*local_c0;
  uint64_t local_b8;
  void*local_b0;
  uint64_t local_a8;
  int64_t local_a0;
  void*local_98;
  int64_t *local_90;
  uint64_t local_88;
  void*local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  char local_60 [8];
  void*local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38;
  
  lVar5 = *(int64_t *)(this_ptr + 0xb8);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  puVar11 = *(void**)(this_ptr + 0xe0);
  if (puVar11 == (void*)0x0) {
    if ((*(int64_t *)(this_ptr + 0xa8) == 0) ||
       (iVar2 = (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x920))(), iVar2 == 0)) {
      uVar3 = FUN_00548c70();
      puVar11 = local_68;
      if (local_68 == (void*)0x0) {
        puVar11 = (void*)0x0;
        local_a8 = 0;
      }
      else {
        local_a8 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
        if (local_60[0] == '\0') {
          FUN_00d50b00();
        }
      }
    }
    else {
      local_130 = 0;
      lVar9 = *(int64_t *)(this_ptr + 0xa8);
      uVar3 = extraout_XMM0_Qa;
      if (lVar9 != 0) {
        uVar3 = FUN_00d50b00();
      }
      local_130 = '\x01';
      local_138 = lVar9;
      uVar3 = FUN_0052f720(uVar3,&local_138);
      puVar11 = local_68;
      if (local_68 == (void*)0x0) {
        puVar11 = (void*)0x0;
        local_a8 = 0;
      }
      else if (local_60[0] == '\0') {
        uVar3 = FUN_00d50b00();
        local_a8 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
        if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
        local_a8 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar3 = FUN_00d50b00();
    local_a8 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
  }
  if (puVar11 == (void*)0x0) goto LAB_0054810a;
  local_c0 = puVar11;
  local_a0 = lVar5;
  FUN_01f27fe0();
  FUN_00521db0();
  local_118 = local_78;
  local_110 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_110 = '\x01';
  FUN_000c4290();
  puVar7 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (void*)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_c8 = puVar7;
  FUN_00521db0();
  FUN_00757c60();
  local_80 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (void*)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific((void*)param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = local_80;
  }
  uVar3 = FUN_012caf10();
  pVar8 = (void*)param_1;
  local_98 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00547100;
    }
LAB_0054715f:
    local_120 = 0;
    local_88 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
    local_140 = 0;
    local_128 = 0;
    local_b8 = 0;
    local_90 = (int64_t *)0x0;
    plVar6 = local_90;
  }
  else {
    if (local_68 == (void*)0x0) goto LAB_0054715f;
LAB_00547100:
    uVar3 = (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x920))();
    iVar2 = (int)uVar3;
    if (iVar2 == 0) {
      local_128 = 0;
      local_120 = 0;
    }
    else {
      pvVar4 = _pthread_getspecific(pVar8);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar8 = (void*)local_98;
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xb0) + 0x408))();
      local_128 = FUN_016cb850();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xb0) + 0x418))();
      uVar3 = FUN_016cb850();
      local_120 = extraout_XMM0_Qa_00;
    }
    puVar7 = local_c8;
    local_140 = CONCAT71((int7)((uint64_t)uVar3 >> 8),iVar2 != 0);
    local_88 = 0;
    local_b8 = 0;
    local_90 = (int64_t *)0x0;
    plVar6 = (int64_t *)FUN_00e8fc40();
    local_88 = 0;
    local_b8 = 0;
    local_90 = (int64_t *)0x0;
    FUN_00022d50();
    local_88 = 0;
    local_b8 = 0;
    param_1 = (void*)0x0;
    local_90 = (int64_t *)0x0;
    uVar3 = (**(code **)(*plVar6 + 0x18))();
    local_b8 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
    local_88 = 0;
    if (puVar7 != (void*)0x0) {
      local_60[0] = '\0';
      local_68 = (void*)0x0;
      local_58 = puVar7;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar2 = -local_50._4_4_;
          }
          else {
            iVar2 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar2);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar2 = 0;
          }
          local_50 = CONCAT44(iVar2,(int)local_50);
        }
        lVar5 = (int64_t)(int)local_50;
        iVar2 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar2);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar2) break;
        lVar9 = local_58[2];
        local_68 = *(void**)(lVar9 + 8 + lVar5 * 8);
        FUN_0053a8d0();
        pvVar4 = _pthread_getspecific((void*)lVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar3 = FUN_00550980();
        local_108 = local_40;
        local_100 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar3 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_100 = '\x01';
        local_200 = local_68;
        local_1f8 = '\0';
        FUN_00549130(uVar3,&local_200);
        if ((local_1f8 != '\0') && (local_200 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      param_1 = local_58;
      FUN_0015ee90();
      local_88 = 0;
      puVar11 = local_c0;
    }
  }
  local_90 = plVar6;
  iVar2 = (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x920))();
  if (iVar2 == 0) {
    pvVar4 = _pthread_getspecific((void*)param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = local_80;
    }
    lVar5 = local_a0;
    local_198 = '\0';
    local_1a0 = puVar11;
    FUN_012caf90();
    if ((local_198 != '\0') && (local_1a0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(lVar5 + 0x308) == 0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar8 = 0x2572358;
      *puVar7 = &g_02572358;
      (*g_02572370)();
      local_b0 = puVar7;
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      puVar1 = local_68;
      if (local_60[0] == '\0') {
        if (((local_68 != (void*)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
           (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (puVar1 != (void*)0x0) {
        local_60[0] = '\0';
        local_68 = (void*)0x0;
        local_58 = puVar1;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar2 = -local_50._4_4_;
            }
            else {
              iVar2 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar2);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar2 = 0;
            }
            local_50 = CONCAT44(iVar2,(int)local_50);
          }
          lVar5 = (int64_t)(int)local_50;
          iVar2 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar2);
          if (*(int *)((int64_t)local_58 + 0xc) <= iVar2) break;
          local_68 = *(void**)(local_58[2] + 8 + lVar5 * 8);
          pvVar4 = _pthread_getspecific((void*)local_58[2]);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          lVar5 = local_78;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_40 = lVar5;
          local_38 = '\0';
          FUN_00d235a0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        param_1 = local_58;
        FUN_001159b0();
        FUN_00d50b20();
        puVar11 = local_c0;
        puVar7 = local_b0;
        if (local_b0 == (void*)0x0) goto LAB_00547d91;
      }
      local_60[0] = '\0';
      local_68 = (void*)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      local_58 = puVar7;
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar2 = -local_50._4_4_;
          }
          else {
            iVar2 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar2);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar2 = 0;
          }
          local_50 = CONCAT44(iVar2,(int)local_50);
        }
        lVar5 = (int64_t)(int)local_50;
        iVar2 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar2);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar2) break;
        lVar9 = local_58[2];
        local_68 = *(void**)(lVar9 + 8 + lVar5 * 8);
        pvVar4 = _pthread_getspecific((void*)lVar9);
        pVar8 = (void*)lVar9;
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_188 = '\0';
        local_190 = puVar11;
        FUN_016cbba0();
        lVar5 = local_40;
        local_f0 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_f0 = '\x01';
        local_f8 = lVar5;
        FUN_0132d960();
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_188 != '\0') && (local_190 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d403d0();
        lVar5 = g_027ebe30;
        if (g_027ebe30 != 0) {
          FUN_00d50b00();
        }
        local_180 = lVar5;
        local_178 = '\x01';
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        local_e8 = local_78;
        local_e0 = 0;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_e0 = '\x01';
        local_168 = '\0';
        local_170 = 0;
        FUN_00d40470(&local_170,&local_e8,3,3);
        puVar11 = local_c0;
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_178 != '\0') && (local_180 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      param_1 = local_58;
      FUN_00115190();
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_88 == '\0') {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7210();
      puVar7 = local_68;
      if (local_60[0] == '\0') {
        if (((local_68 != (void*)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
           (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (puVar7 != (void*)0x0) {
        local_1f0 = puVar7;
        local_1e8 = '\0';
        local_1e0 = local_98;
        local_1d8 = '\0';
        local_1c8 = '\0';
        local_1d0 = puVar11;
        param_1 = (void*)FUN_00e7bdb0();
        local_1b8 = '\0';
        local_1c0 = 0;
        FUN_012910e0(g_0238fee8,&local_1d0,&local_1c0);
        if ((local_1b8 != '\0') && (local_1c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1c8 != '\0') && (local_1d0 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1d8 != '\0') && (local_1e0 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1e8 != '\0') && (local_1f0 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific((void*)param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = local_80;
    }
    local_1a8 = '\0';
    local_1b0 = puVar11;
    FUN_012cae50();
    if ((local_1a8 != '\0') && (local_1b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00547d91:
  puVar7 = local_c8;
  if ((char)local_140 != '\0') {
    plVar6 = *(int64_t **)(this_ptr + 0xb0);
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b0 = (void*)FUN_016cb790(local_128,0);
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar12 = FUN_016cb790(local_120,0);
    (**(code **)(*plVar6 + 0x428))(local_b0,uVar12);
  }
  if (local_90 == (int64_t *)0x0) {
LAB_005480c5:
    if ((char)local_88 == '\0') {
      FUN_00d50b20();
    }
  }
  else {
    iVar2 = (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x920))();
    cVar10 = (char)local_88;
    if (iVar2 != 0) {
      FUN_00c9fe20();
      puVar1 = local_68;
      uVar3 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_60[0]);
      plVar6 = (int64_t *)local_60;
      if (local_60[0] == '\0') {
        plVar6 = &local_40;
      }
      local_40 = CONCAT71(local_40._1_7_,local_60[0]);
      *(char *)plVar6 = '\0';
      if ((local_60[0] != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_40 == '\0') {
        if (puVar1 != (void*)0x0) {
          FUN_00d50b00();
          goto LAB_00547ede;
        }
      }
      else if (puVar1 != (void*)0x0) {
LAB_00547ede:
        local_60[0] = '\0';
        local_68 = (void*)0x0;
        local_58 = puVar1;
        local_48 = 0;
        local_50 = 0;
        if (0 < *(int *)((int64_t)puVar1 + 0xc)) {
          lVar5 = 0;
          do {
            puVar11 = *(void**)(puVar1[2] + lVar5 * 8);
            local_68 = puVar11;
            FUN_0053a8d0();
            pvVar4 = _pthread_getspecific((void*)uVar3);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_158 = '\0';
            local_160 = puVar11;
            uVar13 = FUN_005491e0();
            local_d8 = local_78;
            puVar11 = local_c0;
            local_d0 = 0;
            if (local_70 == '\0') {
              if (local_78 != 0) {
                uVar13 = FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            local_d0 = '\x01';
            local_150 = puVar11;
            local_148 = '\0';
            FUN_00551070(uVar13,&local_150);
            cVar10 = (char)local_88;
            if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if ((local_158 != '\0') && (local_160 != (void*)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + 1;
            local_50 = CONCAT44(local_50._4_4_,(int)lVar5);
          } while ((int)lVar5 < *(int *)((int64_t)puVar1 + 0xc));
        }
        FUN_0015ee90();
        FUN_00d50b20();
        puVar11 = local_c0;
        puVar7 = local_c8;
      }
    }
    if (cVar10 == '\0') {
      FUN_00d50b20();
      goto LAB_005480c5;
    }
  }
  lVar5 = local_a0;
  if (local_80 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_a8 != '\0') {
    FUN_00d50b20();
  }
LAB_0054810a:
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return puVar11 != (void*)0x0;
}



// ============================================================
// 00546290
// ============================================================
// Function: FUN_00546290
// Address: 00546290
// Size: 1758 bytes
// Class: MDPluginTransferTempoDialog

void FUN_00546290(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  uint64_t extraout_XMM0_Qa;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0xb0) == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0xb8) == 0) {
    return;
  }
  FUN_00d50b00();
  if (*(int64_t *)(this_ptr + 0xa8) != 0) goto LAB_005462db;
  FUN_00536640();
  FUN_0052f680();
  plVar1 = *(int64_t **)(this_ptr + 0xa8);
  plVar6 = plVar1;
  if (plVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        goto LAB_0054659d;
      }
      FUN_00d50b00();
      plVar1 = *(int64_t **)(this_ptr + 0xa8);
      *(int64_t **)(this_ptr + 0xa8) = local_40;
      plVar6 = local_40;
    }
    else {
      local_38 = '\0';
      plVar6 = local_40;
LAB_0054659d:
      *(int64_t **)(this_ptr + 0xa8) = plVar6;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_005462db:
  iVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x920))();
  if (iVar5 == 0) {
    local_48 = (int64_t *)FUN_00536680();
    FUN_00544e30();
    plVar1 = *(int64_t **)(this_ptr + 0x80);
    if (0.0 < (double)local_48) {
      lVar2 = *(int64_t *)(this_ptr + 0xb8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      if ((*(int64_t *)(this_ptr + 0xe0) == 0) && (*(int64_t *)(this_ptr + 0xa8) == 0)) {
        (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x920))();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*plVar1 + 0x998))();
  }
  else {
    iVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x920))();
    lVar2 = g_0270cbb8;
    if (iVar5 == 1) {
      if (g_0270cbb8 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_0270cbd0;
      if (g_0270cbd0 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar3;
      local_110 = '\x01';
      local_108 = 0;
      local_100 = '\0';
      FUN_00d31230(&local_108,&local_118);
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      local_48 = plVar1;
      (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x960))();
      local_f8 = plVar1;
      local_f0 = '\0';
      cVar4 = (**(code **)(*local_40 + 0x50))();
      if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        local_e8 = plVar1;
        local_e0 = '\0';
        (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x958))();
        if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((*(int64_t *)(this_ptr + 0xa8) == 0) ||
         (cVar4 = (**(code **)(**(int64_t **)(this_ptr + 0xb0) + 0x3a0))(), cVar4 != '\0')) {
        cVar4 = (**(code **)(**(int64_t **)(this_ptr + 0xb0) + 0x3a0))();
        lVar2 = g_0270cbb8;
        plVar1 = *(int64_t **)(this_ptr + 0x98);
        if (cVar4 == '\0') {
          if (g_0270cbb8 != 0) {
            FUN_00d50b00();
          }
          lVar3 = g_0270cbe8;
          local_a8 = lVar2;
          local_a0 = '\x01';
          if (g_0270cbe8 != 0) {
            FUN_00d50b00();
          }
          local_98 = lVar3;
          local_90 = '\x01';
          local_88 = 0;
          local_80 = '\0';
          FUN_00d31230(&local_88,&local_98);
          local_58 = local_40;
          local_50 = 0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_50 = '\x01';
          (**(code **)(*plVar1 + 0x958))();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (g_0270cbb8 != 0) {
            FUN_00d50b00();
          }
          lVar3 = g_0270cbe0;
          local_d8 = lVar2;
          local_d0 = '\x01';
          if (g_0270cbe0 != 0) {
            FUN_00d50b00();
          }
          local_c8 = lVar3;
          local_c0 = '\x01';
          local_b8 = 0;
          local_b0 = '\0';
          FUN_00d31230(&local_b8,&local_c8);
          local_68 = local_40;
          local_60 = 0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_60 = '\x01';
          (**(code **)(*plVar1 + 0x958))();
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01522f00(extraout_XMM0_Qa,&local_78);
        FUN_005457b0(local_40,local_78);
      }
      plVar1 = *(int64_t **)(this_ptr + 0x80);
      lVar2 = *(int64_t *)(this_ptr + 0xb8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      if ((*(int64_t *)(this_ptr + 0xe0) == 0) && (*(int64_t *)(this_ptr + 0xa8) == 0)) {
        (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x920))();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar1 + 0x998))();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 005457b0
// ============================================================
// Function: FUN_005457b0
// Address: 005457b0
// Size: 1596 bytes
// Class: MDPluginTransferTempoDialog
// String references:
//   "%@ - %@"

void FUN_005457b0(double param_1,double param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  double dVar3;
  char cVar4;
  undefined7 uVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t unaff_R13;
  char cVar9;
  undefined7 uVar11;
  uint64_t uVar10;
  byte bVar12;
  bool bVar13;
  uint64_t uVar14;
  int64_t local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  double local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  double local_40;
  
  lVar1 = g_0270cbb8;
  local_88 = param_1;
  local_40 = param_2;
  if (g_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_0270cbd0;
  local_138 = lVar1;
  local_130 = '\x01';
  if (g_0270cbd0 != 0) {
    FUN_00d50b00();
  }
  local_128 = lVar2;
  local_120 = '\x01';
  local_118 = 0;
  local_110 = '\0';
  FUN_00d31230(&local_118,&local_128);
  plVar7 = local_70;
  if (local_70 == (int64_t *)0x0) {
    bVar12 = 1;
    plVar7 = (int64_t *)0x0;
    unaff_R13 = 0;
  }
  else {
    if (local_68 == '\0') {
      FUN_00d50b00();
      unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
      bVar12 = 0;
      if ((local_68 == '\0') || (bVar12 = 0, local_70 == (int64_t *)0x0)) goto LAB_0054588d;
      FUN_00d50b20();
    }
    else {
      local_68 = '\0';
    }
    unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
    bVar12 = 0;
  }
LAB_0054588d:
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x960))();
  local_100 = '\0';
  local_108 = plVar7;
  cVar4 = (**(code **)(*local_70 + 0x50))();
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    local_f0 = '\0';
    local_f8 = plVar7;
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x958))();
    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 200) + 0x378))((float)local_88);
  (**(code **)(**(int64_t **)(this_ptr + 200) + 0x378))((float)local_40);
  local_140 = local_98;
  uVar5 = 0;
  uVar14 = FUN_00083ea0(2,&local_140);
  FUN_00d8cb40(uVar14,&local_70);
  plVar8 = local_80;
  uVar11 = (undefined7)((uint64_t)this_ptr >> 8);
  if (local_80 == plVar7) {
    plVar8 = plVar7;
    if ((bool)(bVar12 & plVar7 != (int64_t *)0x0)) {
      if (local_78 != '\0') goto LAB_00545a55;
      uVar10 = CONCAT71(uVar11,1);
      FUN_00d50b00();
    }
    else {
      uVar10 = unaff_R13 & 0xffffffff;
    }
LAB_00545aa2:
    if ((local_78 == '\0') || (local_80 == (int64_t *)0x0)) {
      local_40 = (double)(uVar10 & 0xffffffff);
    }
    else {
      FUN_00d50b20();
      local_40 = (double)(uVar10 & 0xffffffff);
    }
  }
  else {
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar10 = CONCAT71(uVar11,1);
      if (((byte)unaff_R13 & plVar7 != (int64_t *)0x0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_00545aa2;
    }
    bVar13 = plVar7 != (int64_t *)0x0;
    uVar5 = (undefined7)((unaff_R13 & 0xffffffff) >> 8);
    plVar7 = plVar8;
    if (((byte)(unaff_R13 & 0xffffffff) & bVar13) == 1) {
      FUN_00d50b20();
    }
LAB_00545a55:
    local_78 = '\0';
    local_40 = (double)CONCAT71(uVar5,1);
    plVar8 = plVar7;
  }
  local_70 = (int64_t *)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_0270cbb0;
  if (g_0270cbb0 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  local_a8 = plVar8;
  FUN_00083ea0(2,&local_98);
  uVar14 = FUN_000b4da0();
  plVar7 = local_80;
  if (local_80 == (int64_t *)0x0) {
    local_88 = (double)CONCAT44(local_88._4_4_,(int)CONCAT71((int7)((uint64_t)uVar14 >> 8),1));
  }
  else {
    if (local_78 == '\0') {
      FUN_00d50b00();
      local_88 = (double)((uint64_t)local_88 & 0xffffffff00000000);
      if ((local_78 == '\0') || (local_80 == (int64_t *)0x0)) goto LAB_00545bc5;
      FUN_00d50b20();
    }
    else {
      local_78 = '\0';
    }
    local_88 = (double)((uint64_t)local_88 & 0xffffffff00000000);
  }
LAB_00545bc5:
  local_70 = (int64_t *)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  dVar3 = local_40;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_0270cbb8;
  if (g_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_0270cbd8;
  local_e8 = lVar1;
  local_e0 = '\x01';
  if (g_0270cbd8 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar2;
  local_d0 = '\x01';
  local_c8 = plVar7;
  local_c0 = '\0';
  FUN_00d31230(&local_c8,&local_d8);
  plVar6 = local_70;
  cVar4 = SUB81(dVar3,0);
  if (local_70 == plVar8) {
    plVar6 = plVar8;
    cVar9 = cVar4;
    if ((cVar4 == '\0') && (local_70 != (int64_t *)0x0)) {
      if (local_68 == '\0') {
        FUN_00d50b00();
        goto LAB_00545ce0;
      }
      goto LAB_00545caf;
    }
  }
  else {
    if (local_68 != '\0') {
      if ((cVar4 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00545caf:
      local_68 = '\0';
      cVar9 = '\x01';
      goto LAB_00545d22;
    }
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    cVar9 = '\x01';
    if ((cVar4 != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
      plVar8 = plVar6;
LAB_00545ce0:
      plVar6 = plVar8;
      cVar9 = '\x01';
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00545d22:
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = '\0';
  local_b8 = plVar6;
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x958))();
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (SUB81(local_88,0) == '\0' && plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar9 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00544e30
// ============================================================
// Function: FUN_00544e30
// Address: 00544e30
// Size: 1368 bytes
// Class: MDPluginTransferTempoDialog

void FUN_00544e30(double param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  uint64_t unaff_R13;
  byte bVar9;
  bool bVar10;
  int64_t local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  uint32_t local_64;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(**(int64_t **)(this_ptr + 200) + 0x378))((float)param_1);
  lVar2 = g_0270cbb0;
  if (g_0270cbb0 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar2;
  FUN_00083ea0(2,&local_138);
  FUN_000b4da0();
  lVar4 = local_80;
  if (local_80 == 0) {
    uVar8 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
  }
  else {
    if (local_78 == '\0') {
      FUN_00d50b00();
      uVar8 = 0;
      if ((local_78 == '\0') || (local_80 == 0)) goto LAB_00544ef0;
      FUN_00d50b20();
    }
    else {
      local_78 = '\0';
    }
    uVar8 = 0;
  }
LAB_00544ef0:
  local_60 = (int64_t *)&g_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_0270cbb8;
  local_70 = lVar4;
  local_64 = uVar8;
  if (g_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_0270cbc0;
  local_120 = lVar2;
  local_118 = '\x01';
  if (g_0270cbc0 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar3;
  local_108 = '\x01';
  local_100 = lVar4;
  local_f8 = '\0';
  FUN_00d31230(&local_100,&local_110);
  plVar7 = local_60;
  if (local_60 == (int64_t *)0x0) {
    bVar9 = 1;
    bVar1 = false;
  }
  else {
    if (local_58 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      bVar9 = 0;
      if ((local_58 == '\0') || (bVar9 = 0, local_60 == (int64_t *)0x0)) goto LAB_00545012;
      FUN_00d50b20();
    }
    else {
      local_58 = '\0';
    }
    bVar1 = true;
    bVar9 = 0;
  }
LAB_00545012:
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x960))();
  local_f0 = plVar7;
  local_e8 = '\0';
  cVar6 = (**(code **)(*local_60 + 0x50))();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    local_e0 = plVar7;
    local_d8 = '\0';
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x958))();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_0270cbb8;
  if (g_0270cbb8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_0270cbc8;
  local_d0 = lVar2;
  local_c8 = '\x01';
  if (g_0270cbc8 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar4;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d31230(&local_b0,&local_c0);
  plVar5 = local_60;
  if (plVar7 == local_60) {
    if (!(bool)(bVar9 & plVar7 != (int64_t *)0x0)) goto joined_r0x00545217;
    if (local_58 == '\0') {
      FUN_00d50b00();
      goto LAB_00545202;
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar10 = plVar7 != (int64_t *)0x0;
      plVar7 = plVar5;
      if ((bool)(bVar1 & bVar10)) {
        FUN_00d50b20();
      }
LAB_00545202:
      bVar1 = true;
joined_r0x00545217:
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto joined_r0x0054536a;
    }
    bVar10 = plVar7 != (int64_t *)0x0;
    plVar7 = plVar5;
    if ((bool)(bVar1 & bVar10)) {
      FUN_00d50b20();
    }
  }
  local_58 = '\0';
  bVar1 = true;
joined_r0x0054536a:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x960))();
  local_98 = '\0';
  local_a0 = plVar7;
  cVar6 = (**(code **)(*local_60 + 0x50))();
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    local_88 = '\0';
    local_90 = plVar7;
    (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x958))();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((char)local_64 == '\0' && local_70 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 005495c0
// ============================================================
// Function: FUN_005495c0
// Address: 005495c0
// Size: 1384 bytes
// Class: MDPluginTransferTempoDialog

void FUN_005495c0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  char cVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t this_ptr;
  uint64_t uVar8;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int local_40;
  uint64_t local_3c;
  
  lVar1 = *(int64_t *)(this_ptr + 0xb8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0052f4f0();
  lVar2 = *(int64_t *)(this_ptr + 0xe0);
  lVar7 = lVar2;
  if (lVar2 == local_58) goto LAB_0054965d;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      lVar7 = 0;
      goto LAB_0054960f;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0xe0);
    *(int64_t *)(this_ptr + 0xe0) = local_58;
    lVar7 = local_58;
  }
  else {
    local_50 = '\0';
    lVar7 = local_58;
LAB_0054960f:
    *(int64_t *)(this_ptr + 0xe0) = lVar7;
  }
  param_1 = (void*)lVar2;
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar7 = local_58;
  }
LAB_0054965d:
  if ((local_50 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x998))();
  if (*(int64_t *)(this_ptr + 0xe0) == 0) {
    cVar4 = FUN_005364c0();
    pcVar3 = *(code **)(**(int64_t **)(this_ptr + 0x88) + 0x918);
    if (cVar4 == '\0') {
      (*pcVar3)();
    }
    else {
      (*pcVar3)();
    }
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_016c2730();
    if (cVar4 == '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_00e7bdb0();
      uVar6 = FUN_00e7bdb0();
      FUN_016d1840(uVar8,&local_68,uVar6);
      FUN_005457b0(local_58,local_68);
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x918))();
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x998))();
      (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x998))();
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_00e7bdb0();
      FUN_016c9410(uVar8,0);
      FUN_00544e30();
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x918))();
      (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x998))();
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x998))();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x998))();
  cVar4 = FUN_00549d80();
  pcVar3 = *(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x918);
  if (cVar4 == '\0') {
    (*pcVar3)();
  }
  else {
    (*pcVar3)();
  }
  if (*(int64_t *)(this_ptr + 0xe0) == 0) {
    do {
      FUN_00536640();
      FUN_0052f680();
      lVar2 = local_58;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    } while (lVar2 != 0);
    FUN_00536630();
    FUN_01f27fe0();
    local_80 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
    uVar8 = FUN_00d50b00();
    local_80 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    local_88 = (int64_t *)(this_ptr + 0x70);
    FUN_01f47190(uVar8,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      (**(code **)(*local_88 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_01f27fe0();
    uVar8 = FUN_00521db0();
    local_78 = local_98;
    local_70 = 0;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    local_70 = '\x01';
    FUN_000c4290(uVar8,&local_78);
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_48 = lVar2;
      local_3c = 0;
      for (lVar7 = 0; local_40 = (int)lVar7, local_40 < *(int *)(lVar2 + 0xc); lVar7 = lVar7 + 1) {
        local_58 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
        FUN_0053abf0();
      }
      FUN_0015ee90();
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00549e60
// ============================================================
// Function: FUN_00549e60
// Address: 00549e60
// Size: 824 bytes
// Class: MDPluginTransferTempoDialog

void FUN_00549e60(uint64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0xb8);
  if ((lVar1 != 0) && (FUN_00d50b00(), unaff_ESI == 1)) {
    FUN_00536630();
    do {
      FUN_00536640();
      FUN_0052f680();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    } while (local_80 != 0);
  }
  if (*(int64_t *)(this_ptr + 0xe0) == 0) {
    FUN_01f27fe0();
    (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
    FUN_00d50b00();
    FUN_01f474f0();
    if ((int64_t *)(this_ptr + 0x70) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0xb0) != 0) {
    *(void*)(this_ptr + 0xb0) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xb8) != 0) {
    *(void*)(this_ptr + 0xb8) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xc0) != 0) {
    *(void*)(this_ptr + 0xc0) = 0;
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  FUN_00521db0();
  local_38 = 0;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  local_38 = '\x01';
  local_40 = local_a0;
  FUN_000c4290(param_1,&local_40);
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    for (iVar2 = 0; iVar2 < *(int *)(local_80 + 0xc); iVar2 = iVar2 + 1) {
      FUN_0051b610();
      FUN_0053abf0();
    }
    FUN_0015ee90();
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xe0) != 0) {
    *(void*)(this_ptr + 0xe0) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xa8) != 0) {
    *(void*)(this_ptr + 0xa8) = 0;
    FUN_00d50b20();
  }
  FUN_01e57e90();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00548c70
// ============================================================
// Function: FUN_00548c70
// Address: 00548c70
// Size: 780 bytes
// Class: MDPluginTransferTempoDialog

int64_t * FUN_00548c70(void* param_1)

{
  int64_t lVar1;
  int iVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(arg1 + 0xb8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00521db0();
  FUN_00757c60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_016c2ea0();
    if (iVar2 == 1) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      param_1 = 0;
      FUN_016ca8d0(0,0,0);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_0123fef0();
      FUN_0123ff00();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00536680();
    FUN_016c0b50();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if (iVar2 != 1) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c2ef0();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00544340
// ============================================================
// Function: FUN_00544340
// Address: 00544340
// Size: 1479 bytes
// Class: MDPluginTransferTempoDialog
// String references:
//   "handleToggleAutoStretch"
//   "handleImportTempo"
//   "MDPluginTransferTempoDialog"
//   "handleTransferRecordedTempo"
//   "handleCancelRecordedTempo"

void FUN_00544340(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_0280a208 = "handleTransferRecordedTempo";
      g_0280a210 = &g_027051f0;
      g_0280a218 = 0;
      g_0280a220 = &g_0270cbf8;
      g_0280a228 = FUN_0054a610;
      g_0280a230 = FUN_005492b0;
      g_0280a238 = 0;
      ram_000000000280a240 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a250 = "handleCancelRecordedTempo";
      g_0280a258 = &g_027051f0;
      g_0280a260 = 0;
      g_0280a268 = &g_0270cbf8;
      g_0280a270 = FUN_0054a610;
      g_0280a278 = FUN_00549290;
      g_0280a280 = 0;
      ram_000000000280a288 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a298 = "handleImportTempo";
      g_0280a2a0 = &g_027051f0;
      g_0280a2a8 = 0;
      g_0280a2b0 = &g_0270cbf8;
      g_0280a2b8 = FUN_0054a610;
      g_0280a2c0 = FUN_0054a3a0;
      g_0280a2c8 = 0;
      ram_000000000280a2d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a2e0 = "handleToggleAutoStretch";
      g_0280a2e8 = &g_027051f0;
      g_0280a2f0 = 0;
      g_0280a2f8 = &g_0270cbf8;
      g_0280a300 = FUN_0054a610;
      g_0280a308 = FUN_0054a450;
      g_0280a310 = 0;
      ram_000000000280a318 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

