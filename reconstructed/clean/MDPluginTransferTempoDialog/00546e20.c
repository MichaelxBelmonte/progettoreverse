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

