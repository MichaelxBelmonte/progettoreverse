// ===================================================================
// MUAraMusicalContext — Complete reconstructed pseudocode
// 2 functions
// ===================================================================


// ============================================================
// 00221970
// ============================================================
// Function: FUN_00221970
// Address: 00221970
// Size: 4885 bytes
// Class: MUAraMusicalContext
// String references:
//   "_usesHostScales"
//   "_usesHostChords"
//   "MUAraMusicalContext"

void FUN_00221970(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t this_ptr;
  bool bVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t *local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
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
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_e0;
  char local_d8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x1c0);
  if (lVar1 == 0) {
    lVar5 = 0;
    lVar9 = *arg1;
    if (lVar9 == 0) goto LAB_00222abe;
  }
  else {
    FUN_00d50b00();
    lVar5 = *(int64_t *)(this_ptr + 0x1c0);
    lVar9 = *arg1;
    if (lVar5 == lVar9) goto LAB_00222abe;
  }
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  *(int64_t *)(this_ptr + 0x1c0) = lVar9;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x130) != 0) {
    *(void*)(this_ptr + 0x130) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x108) != 0) {
    *(void*)(this_ptr + 0x108) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
joined_r0x00221b4c:
    if (lVar1 != 0) {
      FUN_00710820();
      local_170 = 0;
      local_168 = '\0';
      FUN_00441b30();
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00710820();
      local_160 = 0;
      local_158 = '\0';
      FUN_00441d20();
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00710820();
      local_150 = 0;
      local_148 = '\0';
      FUN_00441f10();
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x100) != 0) {
      *(void*)(this_ptr + 0x100) = 0;
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x120) != 0) {
      *(void*)(this_ptr + 0x120) = 0;
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x138) != 0) {
      *(void*)(this_ptr + 0x138) = 0;
      FUN_00d50b20();
    }
    FUN_00223aa0();
    lVar5 = *(int64_t *)(this_ptr + 0x90);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_138 = '\0';
    local_140 = 0;
    FUN_003a1a30();
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    bVar10 = true;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_006f3f00();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto joined_r0x00221b4c;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (int64_t *)0x0) goto joined_r0x00221b4c;
    FUN_00d50b00();
    local_250 = g_026f6d78;
    if (g_026f6d78 != 0) {
      FUN_00d50b00();
    }
    lVar5 = g_026f6d80;
    local_248 = '\x01';
    if (g_026f6d80 != 0) {
      FUN_00d50b00();
    }
    local_240 = lVar5;
    local_238 = '\x01';
    local_230 = plVar8;
    local_228 = '\0';
    plVar8 = &local_240;
    FUN_000bf690(plVar8,&local_250,&local_230);
    pVar7 = (void*)plVar8;
    plVar8 = *(int64_t **)(this_ptr + 0x108);
    plVar6 = plVar8;
    if (plVar8 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar6 = (int64_t *)0x0;
          goto LAB_00221b2b;
        }
        FUN_00d50b00();
        plVar8 = *(int64_t **)(this_ptr + 0x108);
        *(int64_t **)(this_ptr + 0x108) = local_40;
        plVar6 = local_40;
      }
      else {
        local_38 = '\0';
        plVar6 = local_40;
LAB_00221b2b:
        *(int64_t **)(this_ptr + 0x108) = plVar6;
      }
      pVar7 = (void*)plVar8;
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar6 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00710820();
    local_220 = *(int64_t *)(this_ptr + 0x90);
    if (local_220 != 0) {
      FUN_00d50b00();
    }
    local_218 = '\x01';
    FUN_00441d20();
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00710820();
    FUN_00d50b00();
    FUN_00441b30();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar8 = *(int64_t **)(this_ptr + 0x90);
    FUN_00757c60();
    local_a0 = local_40;
    local_98 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = '\x01';
    (**(code **)(*plVar8 + 0xa08))();
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0021c9b0();
    if (local_40 == (int64_t *)0x0) {
      bVar10 = false;
    }
    else {
      FUN_00757c60();
      bVar10 = local_50 != 0;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar10) {
      FUN_0021c9b0();
      FUN_00757c60();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_90 = local_50;
      local_88 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_88 = '\x01';
      FUN_001060d0();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_208 != '\0') && (local_210 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00757c60();
    pvVar4 = _pthread_getspecific(pVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00223aa0();
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    cVar2 = FUN_00751ba0();
    if (cVar2 != '\0') {
      FUN_00d50b00();
      local_200 = g_026f6d88;
      if (g_026f6d88 != 0) {
        FUN_00d50b00();
      }
      lVar5 = g_026f6d90;
      local_1f8 = '\x01';
      if (g_026f6d90 != 0) {
        FUN_00d50b00();
      }
      local_1f0 = lVar5;
      local_1e8 = '\x01';
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
        local_48 = '\0';
        local_50 = 0;
LAB_00222258:
        local_80 = 0;
      }
      else {
        FUN_006f3f00();
        local_80 = local_50;
        local_78 = 0;
        if (local_48 == '\0') {
          if (local_50 == 0) goto LAB_00222258;
          FUN_00d50b00();
        }
        else {
          local_48 = '\0';
        }
      }
      local_78 = '\x01';
      FUN_000bf690(&local_1f0,&local_200,&local_80);
      plVar8 = *(int64_t **)(this_ptr + 0x100);
      plVar6 = plVar8;
      if (plVar8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar6 = (int64_t *)0x0;
            goto LAB_002222ad;
          }
          FUN_00d50b00();
          plVar8 = *(int64_t **)(this_ptr + 0x100);
          *(int64_t **)(this_ptr + 0x100) = local_40;
          plVar6 = local_40;
        }
        else {
          local_38 = '\0';
          plVar6 = local_40;
LAB_002222ad:
          *(int64_t **)(this_ptr + 0x100) = plVar6;
        }
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1e8 != '\0') && (local_1f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1f8 != '\0') && (local_200 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b00();
      local_1e0 = g_026f6d98;
      if (g_026f6d98 != 0) {
        FUN_00d50b00();
      }
      lVar5 = g_026f6da0;
      local_1d8 = '\x01';
      if (g_026f6da0 != 0) {
        FUN_00d50b00();
      }
      local_1d0 = lVar5;
      local_1c8 = '\x01';
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
        local_48 = '\0';
        local_50 = 0;
LAB_00222420:
        local_70 = 0;
      }
      else {
        FUN_006f3f00();
        local_70 = local_50;
        local_68 = 0;
        if (local_48 == '\0') {
          if (local_50 == 0) goto LAB_00222420;
          FUN_00d50b00();
        }
        else {
          local_48 = '\0';
        }
      }
      local_68 = '\x01';
      plVar8 = &local_1d0;
      FUN_000bf690(plVar8,&local_1e0,&local_70);
      pVar7 = (void*)plVar8;
      plVar8 = *(int64_t **)(this_ptr + 0x120);
      plVar6 = plVar8;
      if (plVar8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar6 = (int64_t *)0x0;
            goto LAB_00222475;
          }
          FUN_00d50b00();
          plVar8 = *(int64_t **)(this_ptr + 0x120);
          *(int64_t **)(this_ptr + 0x120) = local_40;
          plVar6 = local_40;
        }
        else {
          local_38 = '\0';
          plVar6 = local_40;
LAB_00222475:
          *(int64_t **)(this_ptr + 0x120) = plVar6;
        }
        pVar7 = (void*)plVar8;
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b00();
      local_1c0 = g_026f6da8;
      if (g_026f6da8 != 0) {
        FUN_00d50b00();
      }
      local_1b8 = '\x01';
      FUN_00757c60();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e0 = FUN_00e8b990();
      local_d8 = 0;
      uVar11 = extraout_XMM0_Da;
      if (local_e0 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_d8 = '\x01';
      if ((g_026f8b18 == '\0') &&
         (iVar3 = ___cxa_guard_acquire(), uVar11 = extraout_XMM0_Da_03, iVar3 != 0)) {
        g_026f8a68 = FUN_00274820();
        g_026f8a50 = "MUAraMusicalContext";
        g_026f8a58 = 0xa0;
        g_026f8a60 = FUN_002747f0;
        g_026f8a70 = 0;
        ram_00000000026f8a78 = 0;
        g_026f8a80 = 0;
        g_026f8af8 = 0;
        ram_00000000026f8b00 = 0;
        g_026f8b08 = 0;
        g_026f8b0a = 1;
        g_026f8a88 = 0;
        ram_00000000026f8a90 = 0;
        g_026f8a98 = 0;
        ram_00000000026f8aa0 = 0;
        g_026f8aa8 = 0;
        ram_00000000026f8ab0 = 0;
        g_026f8ab8 = 0;
        ram_00000000026f8ac0 = 0;
        g_026f8ac8 = 0;
        ram_00000000026f8ad0 = 0;
        g_026f8ad8 = 0;
        ram_00000000026f8ae0 = 0;
        g_026f8ae8 = 0;
        ram_00000000026f8af0 = 0;
        g_026f8b13 = 0;
        g_026f8b0b = 0;
        uVar11 = ___cxa_guard_release();
      }
      lVar5 = FUN_00e85ef0(uVar11,1);
      if (lVar5 == 0) {
        lVar5 = FUN_00e858c0(extraout_XMM0_Da_00,1);
        if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_00222677;
LAB_0022265f:
        local_b8 = 0;
        FUN_00d50b00();
      }
      else {
        lVar5 = *(int64_t *)(lVar5 + 0x30);
        if (lVar5 != 0) goto LAB_0022265f;
LAB_00222677:
        lVar5 = 0;
      }
      local_b8 = '\x01';
      local_1b0 = 0;
      local_1a8 = '\0';
      local_c0 = lVar5;
      uVar11 = FUN_000bfbc0(&local_e0,&local_1c0,0xa0,&local_c0);
      plVar8 = *(int64_t **)(this_ptr + 0x130);
      plVar6 = plVar8;
      if (plVar8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar6 = (int64_t *)0x0;
            goto LAB_002226e9;
          }
          uVar11 = FUN_00d50b00();
          plVar8 = *(int64_t **)(this_ptr + 0x130);
          *(int64_t **)(this_ptr + 0x130) = local_40;
          plVar6 = local_40;
        }
        else {
          local_38 = '\0';
          plVar6 = local_40;
LAB_002226e9:
          *(int64_t **)(this_ptr + 0x130) = plVar6;
        }
        if (plVar8 != (int64_t *)0x0) {
          uVar11 = FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      if (this_ptr != 0) {
        uVar11 = FUN_00d50b20();
      }
      if ((g_026f8b18 == '\0') &&
         (iVar3 = ___cxa_guard_acquire(), uVar11 = extraout_XMM0_Da_04, iVar3 != 0)) {
        g_026f8a68 = FUN_00274820();
        g_026f8a50 = "MUAraMusicalContext";
        g_026f8a58 = 0xa0;
        g_026f8a60 = FUN_002747f0;
        g_026f8a70 = 0;
        ram_00000000026f8a78 = 0;
        g_026f8a80 = 0;
        g_026f8af8 = 0;
        ram_00000000026f8b00 = 0;
        g_026f8b08 = 0;
        g_026f8b0a = 1;
        g_026f8a88 = 0;
        ram_00000000026f8a90 = 0;
        g_026f8a98 = 0;
        ram_00000000026f8aa0 = 0;
        g_026f8aa8 = 0;
        ram_00000000026f8ab0 = 0;
        g_026f8ab8 = 0;
        ram_00000000026f8ac0 = 0;
        g_026f8ac8 = 0;
        ram_00000000026f8ad0 = 0;
        g_026f8ad8 = 0;
        ram_00000000026f8ae0 = 0;
        g_026f8ae8 = 0;
        ram_00000000026f8af0 = 0;
        g_026f8b13 = 0;
        g_026f8b0b = 0;
        uVar11 = ___cxa_guard_release();
      }
      lVar5 = FUN_00e85ef0(uVar11,1);
      if (lVar5 == 0) {
        lVar5 = FUN_00e858c0(extraout_XMM0_Da_01,1);
        uVar11 = extraout_XMM0_Da_02;
        if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_0022285c;
LAB_0022284b:
        local_a8 = 0;
        uVar11 = FUN_00d50b00();
      }
      else {
        lVar5 = *(int64_t *)(lVar5 + 0x30);
        uVar11 = extraout_XMM0_Da_01;
        if (lVar5 != 0) goto LAB_0022284b;
LAB_0022285c:
        lVar5 = 0;
      }
      local_a8 = '\x01';
      local_1a0 = 0;
      local_198 = '\0';
      local_b0 = lVar5;
      FUN_000bfd00(uVar11,&local_1a0);
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b00();
    local_190 = g_026f6db0;
    if (g_026f6db0 != 0) {
      FUN_00d50b00();
    }
    lVar5 = g_026fe470;
    local_188 = '\x01';
    if (g_026fe470 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar5;
    local_178 = '\x01';
    if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
      local_48 = '\0';
      local_50 = 0;
LAB_0022296a:
      local_60 = 0;
    }
    else {
      FUN_006f3f00();
      local_60 = local_50;
      local_58 = 0;
      if (local_48 == '\0') {
        if (local_50 == 0) goto LAB_0022296a;
        FUN_00d50b00();
      }
      else {
        local_48 = '\0';
      }
    }
    local_58 = '\x01';
    FUN_000bf690(&local_180,&local_190,&local_60);
    plVar8 = *(int64_t **)(this_ptr + 0x138);
    plVar6 = plVar8;
    if (plVar8 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar6 = (int64_t *)0x0;
          goto LAB_002229bf;
        }
        FUN_00d50b00();
        plVar8 = *(int64_t **)(this_ptr + 0x138);
        *(int64_t **)(this_ptr + 0x138) = local_40;
        plVar6 = local_40;
      }
      else {
        local_38 = '\0';
        plVar6 = local_40;
LAB_002229bf:
        *(int64_t **)(this_ptr + 0x138) = plVar6;
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar6 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00223fa0();
    FUN_00225280();
    bVar10 = false;
    FUN_002257b0();
  }
  if (!bVar10) {
    FUN_00d50b20();
  }
LAB_00222abe:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 016a65d0
// ============================================================
// Function: FUN_016a65d0
// Address: 016a65d0
// Size: 1243 bytes
// Class: MUAraMusicalContext
// String references:
//   "MUAraMusicalContext"

void FUN_016a65d0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_016961d0();
  *this_ptr = &g_025fb350;
  FUN_016a6bd0();
  FUN_016a6ef0();
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8b0b == '\0') {
    FUN_016a71b0();
    FUN_00e87980();
  }
  FUN_016a7340();
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8b0b == '\0') {
    FUN_016a7600();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x61) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8b0b == '\0') {
    FUN_016a7790();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x62) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8b0b == '\0') {
    FUN_016a7920();
    FUN_00e87980();
  }
  FUN_016a7ab0();
  FUN_016a7de0();
  FUN_016a8110();
  FUN_016a8440();
  FUN_016a8770();
  FUN_016a8aa0();
  FUN_016a8dd0();
  return;
}

