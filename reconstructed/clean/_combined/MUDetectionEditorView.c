// ===================================================================
// MUDetectionEditorView — Complete reconstructed pseudocode
// 34 functions
// ===================================================================

// Registered properties (1):
//   MUDetectionEditorRenderStyle _renderStyle


// ============================================================
// 01924a10
// ============================================================
// Function: FUN_01924a10
// Address: 01924a10
// Size: 8862 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
//   "MUAudioSourcePrincipalItem"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


code * FUN_01924a10(void* param_1,code *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int64_t lVar5;
  uint64_t uVar6;
  code *pcVar7;
  void*puVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  code **ppcVar11;
  void* pVar12;
  void*puVar13;
  code *pcVar14;
  code *pcVar15;
  char *pcVar16;
  int64_t *arg1;
  int64_t *plVar17;
  uint32_t uVar18;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Db;
  uint32_t extraout_XMM0_Db_00;
  uint32_t extraout_XMM0_Db_01;
  uint32_t extraout_XMM0_Db_02;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t *local_250;
  char local_248;
  int64_t local_230;
  char local_228;
  code *local_220;
  char local_218;
  code *local_210;
  char local_208;
  code *local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  code *local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  code *local_1c0;
  char local_1b8;
  void*local_1b0;
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
  int64_t *local_150;
  char local_148;
  code *local_140;
  char local_138;
  code *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  code *local_110;
  char local_108;
  code *local_100;
  char local_f8;
  code *local_f0;
  char local_e8;
  float local_dc;
  double local_d8;
  int64_t *local_d0;
  char local_c8;
  uint64_t local_c0;
  code *local_b8;
  code *local_b0;
  int64_t *local_a8;
  char local_a0;
  float local_94;
  uint64_t local_90;
  uint64_t local_88;
  char local_78 [8];
  code *local_70;
  char local_68 [8];
  code *local_60;
  uint64_t local_58;
  int local_50;
  code *local_48;
  code *local_40;
  uint64_t local_38;
  
  local_e8 = '\0';
  local_f0 = 0x0;
  local_88 = param_2;
  FUN_01a58dc0();
  local_48 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != 0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != 0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01924a5a;
    }
    local_48 = 0x0;
  }
  else {
    local_48 = local_70;
LAB_01924a5a:
    if (local_48 != 0x0) {
      local_90 = 0;
      local_40 = 0x0;
      local_c0 = 0;
      param_1 = 0;
      local_b0 = 0x0;
      cVar1 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                          *(int64_t *)local_48))();
      if (cVar1 == '\0') {
        local_90 = 0;
        local_40 = 0x0;
        local_c0 = 0;
        local_b0 = 0x0;
        local_b8 = 0x0;
        goto LAB_01925049;
      }
    }
  }
  pcVar15 = local_48;
  if (*(int64_t *)local_88 == 0) {
    if (local_48 != 0x0) {
      FUN_01d3abf0();
      FUN_01e466c0();
      ppcVar11 = &local_70;
      (**(code **)(*(int64_t *)pcVar15 + 0xb18))();
      pcVar15 = local_70;
      FUN_008291b0();
      if (pcVar15 == 0x0) {
LAB_01924c11:
        ppcVar11 = (code **)&g_02802688;
      }
      else {
        (**(code **)(*(int64_t *)pcVar15 + 0x360))();
        cVar1 = FUN_00e85ea0();
        if (cVar1 == '\0') goto LAB_01924c11;
      }
      pcVar15 = *ppcVar11;
      local_b0 = pcVar15;
      pcVar7 = pcVar15;
      if (pcVar15 == 0x0) {
        local_c0 = 0;
        local_b0 = 0x0;
      }
      else {
        if (*(char *)(ppcVar11 + 1) == '\0') {
          pcVar15 = FUN_00d50b00();
        }
        else {
          *(void*)(ppcVar11 + 1) = 0;
        }
        local_c0 = CONCAT71((int7)((uint64_t)pcVar15 >> 8),1);
      }
      param_1 = (void*)pcVar7;
      if ((local_68[0] != '\0') && (local_70 != 0x0)) {
        FUN_00d50b20();
      }
      if (local_b0 == 0x0) {
LAB_01924cd6:
        pcVar15 = 0x0;
      }
      else {
        FUN_01956980();
        pcVar15 = local_70;
        if (local_70 == 0x0) goto LAB_01924cd6;
        if (local_68[0] == '\0') {
          FUN_00d50b00();
          local_f0 = pcVar15;
          local_e8 = '\x01';
          if ((local_68[0] != '\0') && (local_70 != 0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_f0 = local_70;
          local_e8 = '\x01';
        }
      }
      if (*(int64_t *)local_88 != 0) goto LAB_01924b25;
      if (pcVar15 == 0x0) {
        local_90 = 0;
        goto LAB_01924dd6;
      }
      pvVar4 = _pthread_getspecific(param_1);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pcVar15 = *(code **)(pcVar15 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
      }
      uVar18 = (**(code **)(*(int64_t *)pcVar15 + 0x378))();
      local_40 = local_70;
      if (local_70 == 0x0) goto LAB_01924d70;
      local_90 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
      pcVar15 = local_70;
      if (((local_68[0] == '\0') && (uVar18 = FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != 0x0)) {
        uVar18 = FUN_00d50b20();
      }
      goto LAB_01924d7f;
    }
    local_90 = 0;
    local_c0 = 0;
    local_b0 = 0x0;
LAB_01924dd6:
    pcVar15 = local_48;
    if ((g_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_02714a48 = FUN_000914a0();
      g_02714a30 = "MUDetectionEditorView";
      g_02714a38 = 0x600;
      g_02714a40 = FUN_0034de90;
      g_02714a50 = 0;
      ram_0000000002714a58 = 0;
      g_02714a60 = 0;
      g_02714ad8 = 0;
      ram_0000000002714ae0 = 0;
      g_02714ae8 = 0;
      g_02714aea = 1;
      g_02714a68 = 0;
      ram_0000000002714a70 = 0;
      g_02714a78 = 0;
      ram_0000000002714a80 = 0;
      g_02714a88 = 0;
      ram_0000000002714a90 = 0;
      g_02714a98 = 0;
      ram_0000000002714aa0 = 0;
      g_02714aa8 = 0;
      ram_0000000002714ab0 = 0;
      g_02714ab8 = 0;
      ram_0000000002714ac0 = 0;
      g_02714ac8 = 0;
      ram_0000000002714ad0 = 0;
      g_02714af3 = 0;
      g_02714aeb = 0;
      ___cxa_guard_release();
    }
    if (pcVar15 != 0x0) {
      local_40 = 0x0;
      (**(code **)(*(int64_t *)pcVar15 + 0x360))();
      local_40 = 0x0;
      FUN_00e85ea0();
    }
    local_40 = 0x0;
    cVar1 = FUN_01944ee0();
    pcVar7 = local_48;
    if (cVar1 == '\0') {
      local_230 = *(int64_t *)local_88;
      local_228 = '\0';
      local_b8 = FUN_01a58d30(extraout_XMM0_Da,&local_230);
      if ((local_228 != '\0') && (local_230 != 0)) {
        FUN_00d50b20();
      }
      local_40 = 0x0;
      goto LAB_01925049;
    }
    if ((g_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_02714a48 = FUN_000914a0();
      g_02714a30 = "MUDetectionEditorView";
      g_02714a38 = 0x600;
      g_02714a40 = FUN_0034de90;
      g_02714a50 = 0;
      ram_0000000002714a58 = 0;
      g_02714a60 = 0;
      g_02714ad8 = 0;
      ram_0000000002714ae0 = 0;
      g_02714ae8 = 0;
      g_02714aea = 1;
      g_02714a68 = 0;
      ram_0000000002714a70 = 0;
      g_02714a78 = 0;
      ram_0000000002714a80 = 0;
      g_02714a88 = 0;
      ram_0000000002714a90 = 0;
      g_02714a98 = 0;
      ram_0000000002714aa0 = 0;
      g_02714aa8 = 0;
      ram_0000000002714ab0 = 0;
      g_02714ab8 = 0;
      ram_0000000002714ac0 = 0;
      g_02714ac8 = 0;
      ram_0000000002714ad0 = 0;
      g_02714af3 = 0;
      g_02714aeb = 0;
      ___cxa_guard_release();
    }
    if (pcVar7 == 0x0) {
LAB_01924e71:
      ppcVar11 = (code **)&g_02802688;
    }
    else {
      (**(code **)(*(int64_t *)pcVar7 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_01924e71;
      ppcVar11 = &local_48;
    }
    uVar18 = (**(code **)(&UNK_00001668 + *(int64_t *)*ppcVar11))();
    local_40 = local_70;
    pcVar15 = local_70;
    if (local_70 == 0x0) {
      local_40 = 0x0;
      uVar6 = local_90 & 0xffffffff;
    }
    else {
      uVar6 = CONCAT71((int7)((uint64_t)pcVar7 >> 8),1);
      if (((local_68[0] == '\0') && (uVar18 = FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != 0x0)) {
        uVar18 = FUN_00d50b20();
      }
    }
    local_90 = uVar6 & 0xffffffff;
  }
  else {
    local_b0 = 0x0;
    local_c0 = 0;
LAB_01924b25:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar18 = FUN_01264240();
    local_40 = local_70;
    if (local_70 == 0x0) {
LAB_01924d70:
      local_40 = 0x0;
      local_90 = 0;
      pcVar15 = local_70;
    }
    else {
      local_90 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
      pcVar15 = local_70;
      if (((local_68[0] == '\0') && (uVar18 = FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != 0x0)) {
        uVar18 = FUN_00d50b20();
      }
    }
LAB_01924d7f:
    if (local_40 == 0x0) goto LAB_01924dd6;
  }
  if (((local_48 == 0x0) ||
      (iVar2 = FUN_01d3a5a0(), uVar18 = extraout_XMM0_Da_00, iVar2 != 1)) ||
     (iVar2 = FUN_01d3b630(), uVar18 = extraout_XMM0_Da_01, iVar2 != 1)) {
    local_180 = *arg1;
    local_178 = '\0';
    local_170 = *(int64_t *)local_88;
    local_168 = '\0';
    local_b8 = FUN_01a58d30(uVar18,&local_170);
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01925049;
  }
  pvVar4 = _pthread_getspecific((void*)pcVar15);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    pcVar15 = local_40;
  }
  iVar2 = FUN_01326de0();
  pcVar15 = CONCAT71((int7)((uint64_t)pcVar15 >> 8),1);
  local_b8 = pcVar15;
  if (iVar2 != 1) {
    if (iVar2 != 3) goto LAB_01925049;
    iVar2 = FUN_01d3b620();
    pcVar7 = local_48;
    pcVar15 = local_f0;
    if (iVar2 != 2) {
      pcVar15 = local_88;
      if (*(int64_t *)local_88 != 0) {
        pvVar4 = _pthread_getspecific((void*)local_88);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar18 = FUN_0125a2c0();
        local_d8 = (double)CONCAT44(local_d8._4_4_,uVar18);
        FUN_01d3abf0();
        FUN_01e466c0();
        local_dc = (float)(**(code **)(*(int64_t *)local_48 + 0xc00))(extraout_XMM0_Db);
        local_dc = local_dc - local_d8._0_4_;
        local_94 = 0.0;
        local_38 = (double)((uint64_t)local_38._4_4_ << 0x20);
LAB_0192524b:
        (**(code **)(*(int64_t *)local_48 + 0x658))();
        pcVar14 = local_70;
        pcVar7 = *arg1;
        if (pcVar7 == local_70) {
          if (((char)arg1[1] == '\0') && (local_70 != 0x0)) {
            if (local_68[0] == '\0') {
              FUN_00d50b00();
              goto LAB_019252de;
            }
            goto LAB_0192529c;
          }
LAB_019252a5:
          if (*arg1 == 0) goto LAB_01925656;
LAB_019252ef:
          iVar2 = FUN_01d3a5a0();
          if ((local_68[0] != '\0') && (local_70 != 0x0)) {
            FUN_00d50b20();
          }
          if (iVar2 == 6) goto LAB_0192566a;
          iVar2 = FUN_01d3a5a0();
          if (iVar2 == 5) {
            FUN_01d3abf0();
            FUN_01e466c0();
            uVar10 = (**(code **)(*(int64_t *)local_48 + 0xc00))(extraout_XMM0_Db_00);
            local_94 = extraout_XMM0_Da_02 - local_dc;
            if (((uint64_t)local_38 & 1) == 0) {
              if ((float)((uint)(local_94 - local_d8._0_4_) & g_02390140) <= g_02394240)
              goto LAB_0192524b;
              local_38 = (double)CONCAT44(local_38._4_4_,
                                          (int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1));
            }
            local_1f0 = *(int64_t *)local_88;
            local_1e8 = '\0';
            (**(code **)(
                        "/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation"
                        + *(int64_t *)local_48 + 0x48))(local_94);
            if ((local_1e8 != '\0') && (local_1f0 != 0)) {
              FUN_00d50b20();
            }
          }
          goto LAB_0192524b;
        }
        lVar5 = arg1[1];
        if (local_68[0] != '\0') {
          *arg1 = (int64_t)local_70;
          if (((char)lVar5 != '\0') && (pcVar7 != 0x0)) {
            FUN_00d50b20();
          }
LAB_0192529c:
          *(void*)(arg1 + 1) = 1;
          local_68[0] = '\0';
          goto LAB_019252a5;
        }
        if (local_70 != 0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)pcVar14;
        if (((char)lVar5 != '\0') && (pcVar7 != 0x0)) {
          FUN_00d50b20();
        }
LAB_019252de:
        *(void*)(arg1 + 1) = 1;
        if (*arg1 != 0) goto LAB_019252ef;
LAB_01925656:
        if ((local_68[0] != '\0') && (local_70 != 0x0)) {
          FUN_00d50b20();
        }
LAB_0192566a:
        if (((uint64_t)local_38 & 1) != 0) {
          uVar3 = FUN_01d3b590();
          pvVar4 = _pthread_getspecific((void*)pcVar15);
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            pcVar15 = local_40;
          }
          pvVar4 = _pthread_getspecific((void*)pcVar15);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          local_130 = local_70;
          local_128 = 0;
          if (local_68[0] == '\0') {
            if (local_70 != 0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68[0] = '\0';
          }
          local_128 = '\x01';
          FUN_0137e3a0(local_94,(uVar3 & 8) >> 3);
          if ((local_128 != '\0') && (local_130 != 0x0)) {
            FUN_00d50b20();
          }
          if ((local_68[0] != '\0') && (local_70 != 0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*(int64_t *)local_48 + 0xa48))();
        }
        (**(code **)((int64_t)&dylib_command_000011b8.dylib.name.offset + *(int64_t *)local_48))()
        ;
      }
      pcVar7 = local_f0;
      pVar12 = (void*)pcVar15;
      if (local_f0 == 0x0) goto LAB_01925049;
      uVar18 = FUN_01a58dc0();
      (**(code **)(*local_d0 + 0x9a8))(uVar18,0);
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265ae0();
      local_88 = local_70;
      pcVar15 = local_70;
      if (local_70 == 0x0) {
        local_b8 = CONCAT44(local_b8._4_4_,1);
        local_88 = 0x0;
      }
      else {
        if (local_68[0] == '\0') {
          FUN_00d50b00();
          local_b8 = ((uint64_t)local_b8 & 0xffffffff00000000);
          if ((local_68[0] == '\0') || (local_70 == 0x0)) goto LAB_01925f52;
          FUN_00d50b20();
        }
        else {
          local_68[0] = '\0';
        }
        local_b8 = ((uint64_t)local_b8 & 0xffffffff00000000);
      }
LAB_01925f52:
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)pcVar15);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pcVar15 = local_88;
      }
      pvVar4 = _pthread_getspecific((void*)pcVar15);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pcVar7 = *(code **)(pcVar7 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
      }
      (**(code **)(*(int64_t *)pcVar7 + 0x3e0))();
      FUN_012595a0();
      FUN_01a58dc0();
      plVar17 = local_d0;
      uVar18 = FUN_01a58dc0();
      (**(code **)(*local_250 + 0x9b0))(uVar18,0);
      FUN_00d23310();
      pcVar7 = local_70;
      pVar12 = (void*)CONCAT71((int7)((uint64_t)pcVar15 >> 8),local_68[0]);
      pcVar16 = local_78;
      if (local_68[0] != '\0') {
        pcVar16 = local_68;
      }
      local_78[0] = local_68[0];
      *pcVar16 = '\0';
      if ((local_68[0] != '\0') && (pcVar7 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      local_120 = local_160;
      local_118 = 0;
      if (local_158 == '\0') {
        if (local_160 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_158 = '\0';
      }
      local_118 = '\x01';
      pVar12 = 1;
      (**(code **)((int64_t)&linkedit_data_command_000013f8.dataoff + *plVar17))(1,&local_120);
      pvVar4 = _pthread_getspecific(pVar12);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar12 = (void*)local_88;
      }
      FUN_01264970();
      pcVar15 = local_70;
      plVar17 = *(int64_t **)(local_70 + 0x28);
      if (plVar17 != local_a8) {
        if (local_a0 == '\0') {
          if (local_a8 == (int64_t *)0x0) {
            plVar9 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar17 = *(int64_t **)(pcVar15 + 0x28);
            plVar9 = local_a8;
          }
        }
        else {
          local_a0 = '\0';
          plVar9 = local_a8;
        }
        *(int64_t **)(pcVar15 + 0x28) = plVar9;
        if (plVar17 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_68[0] != '\0') && (local_70 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78[0] != '\0') && (pcVar7 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_258 != '\0') && (local_260 != 0)) {
        FUN_00d50b20();
      }
      if ((local_248 != '\0') && (local_250 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc240();
      pcVar15 = local_70;
      if ((((local_68[0] == '\0') && (local_70 != 0x0)) &&
          (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar12);
      pcVar7 = local_88;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), pcVar7 = local_88, lVar5 != 0)) {
        pcVar7 = *(code **)(local_88 + ((uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4) * 8);
      }
      pcVar14 = *(code **)(pcVar7 + 0x168);
      if (pcVar14 != pcVar15) {
        if (pcVar15 != 0x0) {
          FUN_00d50b00();
        }
        *(code **)(pcVar7 + 0x168) = pcVar15;
        if (pcVar14 != 0x0) {
          FUN_00d50b20();
        }
      }
      local_1e0 = local_88;
      local_1d8 = '\0';
      local_1d0 = *arg1;
      local_1c8 = '\0';
      uVar10 = (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation"
                           + *(int64_t *)local_48 + 0x28))(1,&local_1d0);
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      pcVar7 = local_88;
      if ((local_1d8 != '\0') && (local_1e0 != 0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if (pcVar15 != 0x0) {
        uVar10 = FUN_00d50b20();
      }
      cVar1 = (char)local_b8;
      local_b8 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
      if (cVar1 == '\0' && pcVar7 != 0x0) {
        FUN_00d50b20();
      }
      goto LAB_01925049;
    }
    if (*(int64_t *)local_88 != 0) {
      (**(code **)(*(int64_t *)local_48 + 0xe20))();
      local_150 = local_a8;
      local_148 = 0;
      if (local_a0 == '\0') {
        if (local_a8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_148 = '\x01';
      FUN_00243390();
      pcVar15 = local_70;
      if (local_68[0] == '\0') {
        if (((local_70 != 0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
           (local_70 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68[0] = '\0';
      }
      if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pcVar7 = FUN_00e8fc40();
      FUN_00d4ff40();
      puVar13 = &g_02572358;
      *(void**)pcVar7 = &g_02572358;
      (*g_02572370)();
      pVar12 = (void*)puVar13;
      local_88 = pcVar7;
      if (0 < *(int *)(pcVar15 + 0xc)) {
        lVar5 = 0;
        do {
          pvVar4 = _pthread_getspecific((void*)puVar13);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          pcVar7 = local_70;
          if ((((local_68[0] == '\0') && (local_70 != 0x0)) &&
              (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != 0x0)) {
            FUN_00d50b20();
          }
          local_68[0] = '\0';
          local_70 = pcVar7;
          FUN_00d21140();
          if ((local_68[0] != '\0') && (local_70 != 0x0)) {
            FUN_00d50b20();
          }
          if (pcVar7 != 0x0) {
            FUN_00d50b20();
          }
          pVar12 = (void*)puVar13;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(pcVar15 + 0xc));
      }
      pcVar7 = local_88;
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_220 = pcVar7;
      local_218 = '\0';
      uVar18 = FUN_0135c990();
      if ((local_218 != '\0') && (local_220 != 0x0)) {
        uVar18 = FUN_00d50b20();
      }
      local_210 = pcVar15;
      local_208 = '\0';
      (**(code **)(*(int64_t *)local_48 + 0xdc0))(uVar18,1);
      if ((local_208 != '\0') && (local_210 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar7 != 0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01925049;
    }
    if (local_f0 != 0x0) {
      pvVar4 = _pthread_getspecific((void*)local_88);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_200 = pcVar15;
      local_1f8 = '\0';
      FUN_0135b370();
      local_140 = local_70;
      local_138 = 0;
      if (local_68[0] == '\0') {
        if (local_70 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = '\0';
      }
      local_138 = '\x01';
      FUN_0135abc0();
      if ((local_138 != '\0') && (local_140 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (local_70 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_1f8 != '\0') && (local_200 != 0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01925049;
    }
    pcVar15 = local_88;
    if ((g_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_02714a48 = FUN_000914a0();
      g_02714a30 = "MUDetectionEditorView";
      g_02714a38 = 0x600;
      pcVar15 = FUN_0034de90;
      g_02714a40 = FUN_0034de90;
      g_02714a50 = 0;
      ram_0000000002714a58 = 0;
      g_02714a60 = 0;
      g_02714ad8 = 0;
      ram_0000000002714ae0 = 0;
      g_02714ae8 = 0;
      g_02714aea = 1;
      g_02714a68 = 0;
      ram_0000000002714a70 = 0;
      g_02714a78 = 0;
      ram_0000000002714a80 = 0;
      g_02714a88 = 0;
      ram_0000000002714a90 = 0;
      g_02714a98 = 0;
      ram_0000000002714aa0 = 0;
      g_02714aa8 = 0;
      ram_0000000002714ab0 = 0;
      g_02714ab8 = 0;
      ram_0000000002714ac0 = 0;
      g_02714ac8 = 0;
      ram_0000000002714ad0 = 0;
      g_02714af3 = 0;
      g_02714aeb = 0;
      ___cxa_guard_release();
    }
    pVar12 = (void*)pcVar15;
    if (pcVar7 != 0x0) {
      (**(code **)(*(int64_t *)pcVar7 + 0x360))();
      FUN_00e85ea0();
    }
    cVar1 = FUN_01944ee0();
    if (cVar1 == '\0') goto LAB_01925049;
    pvVar4 = _pthread_getspecific(pVar12);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar12 = (void*)local_40;
    }
    iVar2 = FUN_01326de0();
    if (iVar2 != 3) goto LAB_01925049;
    FUN_01d3abf0();
    local_88 = FUN_01e466c0();
    pvVar4 = _pthread_getspecific(pVar12);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)(**(code **)(*(int64_t *)local_48 + 0x930))((uint32_t)local_88);
    pcVar15 = local_48;
    if ((g_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_02714a48 = FUN_000914a0();
      g_02714a30 = "MUDetectionEditorView";
      g_02714a38 = 0x600;
      g_02714a40 = FUN_0034de90;
      g_02714a50 = 0;
      ram_0000000002714a58 = 0;
      g_02714a60 = 0;
      g_02714ad8 = 0;
      ram_0000000002714ae0 = 0;
      g_02714ae8 = 0;
      g_02714aea = 1;
      g_02714a68 = 0;
      ram_0000000002714a70 = 0;
      g_02714a78 = 0;
      ram_0000000002714a80 = 0;
      g_02714a88 = 0;
      ram_0000000002714a90 = 0;
      g_02714a98 = 0;
      ram_0000000002714aa0 = 0;
      g_02714aa8 = 0;
      ram_0000000002714ab0 = 0;
      g_02714ab8 = 0;
      ram_0000000002714ac0 = 0;
      g_02714ac8 = 0;
      ram_0000000002714ad0 = 0;
      g_02714af3 = 0;
      g_02714aeb = 0;
      ___cxa_guard_release();
    }
    if (pcVar15 == 0x0) {
LAB_01926873:
      ppcVar11 = (code **)&g_02802688;
    }
    else {
      (**(code **)(*(int64_t *)pcVar15 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_01926873;
      ppcVar11 = &local_48;
    }
    local_d8 = (double)(**(code **)(&UNK_000016a8 + *(int64_t *)*ppcVar11))();
    uVar18 = (**(code **)(*(int64_t *)local_48 + 0xc00))(local_88._4_4_);
    FUN_01356870(SUB84(local_38 - local_d8,0),uVar18);
    if ((local_268 != '\0') && (local_270 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01925049;
  }
  iVar2 = FUN_01d3b620();
  pcVar7 = local_f0;
  if (iVar2 != 2) {
    if (*(int64_t *)local_88 != 0) {
      pvVar4 = _pthread_getspecific((void*)pcVar15);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar18 = FUN_0125a2c0();
      local_d8 = (double)CONCAT44(local_d8._4_4_,uVar18);
      FUN_01d3abf0();
      FUN_01e466c0();
      local_dc = (float)(**(code **)(*(int64_t *)local_48 + 0xc00))(extraout_XMM0_Db_01);
      local_dc = local_dc - local_d8._0_4_;
      local_94 = 0.0;
      local_38 = (double)((uint64_t)local_38._4_4_ << 0x20);
LAB_01925479:
      (**(code **)(*(int64_t *)local_48 + 0x658))();
      pcVar14 = local_70;
      pcVar7 = *arg1;
      if (pcVar7 == local_70) {
        if (((char)arg1[1] == '\0') && (local_70 != 0x0)) {
          if (local_68[0] == '\0') {
            FUN_00d50b00();
            goto LAB_0192550b;
          }
          goto LAB_019254c9;
        }
LAB_019254d2:
        pVar12 = (void*)pcVar15;
        if (*arg1 == 0) goto LAB_019256c0;
LAB_0192551c:
        iVar2 = FUN_01d3a5a0();
        if ((local_68[0] != '\0') && (local_70 != 0x0)) {
          FUN_00d50b20();
        }
        pVar12 = (void*)pcVar15;
        if (iVar2 == 6) goto LAB_019256d4;
        iVar2 = FUN_01d3a5a0();
        if (iVar2 == 5) {
          FUN_01d3abf0();
          FUN_01e466c0();
          uVar10 = (**(code **)(*(int64_t *)local_48 + 0xc00))(extraout_XMM0_Db_02);
          local_94 = extraout_XMM0_Da_03 - local_dc;
          if (((uint64_t)local_38 & 1) == 0) {
            if ((float)((uint)(local_94 - local_d8._0_4_) & g_02390140) <= g_02394240)
            goto LAB_01925479;
            local_38 = (double)CONCAT44(local_38._4_4_,
                                        (int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1));
          }
          local_190 = *(int64_t *)local_88;
          local_188 = '\0';
          (**(code **)(
                      "/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation"
                      + *(int64_t *)local_48 + 0x48))(local_94);
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_01925479;
      }
      lVar5 = arg1[1];
      if (local_68[0] != '\0') {
        *arg1 = (int64_t)local_70;
        if (((char)lVar5 != '\0') && (pcVar7 != 0x0)) {
          FUN_00d50b20();
        }
LAB_019254c9:
        *(void*)(arg1 + 1) = 1;
        local_68[0] = '\0';
        goto LAB_019254d2;
      }
      if (local_70 != 0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)pcVar14;
      if (((char)lVar5 != '\0') && (pcVar7 != 0x0)) {
        FUN_00d50b20();
      }
LAB_0192550b:
      pVar12 = (void*)pcVar15;
      *(void*)(arg1 + 1) = 1;
      if (*arg1 != 0) goto LAB_0192551c;
LAB_019256c0:
      if ((local_68[0] != '\0') && (local_70 != 0x0)) {
        FUN_00d50b20();
      }
LAB_019256d4:
      if (((uint64_t)local_38 & 1) != 0) {
        uVar3 = FUN_01d3b590();
        pvVar4 = _pthread_getspecific(pVar12);
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar12 = (void*)local_40;
        }
        pvVar4 = _pthread_getspecific(pVar12);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        local_100 = local_70;
        local_f8 = 0;
        if (local_68[0] == '\0') {
          if (local_70 != 0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        local_f8 = '\x01';
        FUN_0137e3a0(local_94,(uVar3 & 8) >> 3);
        if ((local_f8 != '\0') && (local_100 != 0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != 0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)local_48 + 0xa48))();
      }
    }
    (**(code **)((int64_t)&dylib_command_000011b8.dylib.name.offset + *(int64_t *)local_48))();
    goto LAB_01925049;
  }
  if ((g_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_02790158 = FUN_007ef2d0();
    g_02790140 = "MUAudioSourcePrincipalItem";
    g_02790148 = 0x138;
    pcVar15 = FUN_010fe5c0;
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
  }
  if (pcVar7 == 0x0) {
LAB_019251a9:
    ppcVar11 = (code **)&g_02802688;
  }
  else {
    (**(code **)(*(int64_t *)pcVar7 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_019251a9;
    ppcVar11 = &local_f0;
  }
  pVar12 = (void*)pcVar15;
  pcVar7 = *ppcVar11;
  if (pcVar7 == 0x0) {
    if (*(int64_t *)local_88 == 0) goto LAB_01925049;
    uVar6 = FUN_01d3b590();
    if ((uVar6 & 8) == 0) {
      pvVar4 = _pthread_getspecific((void*)pcVar15);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pcVar15 = local_40;
      }
      pVar12 = (void*)pcVar15;
      pvVar4 = _pthread_getspecific(pVar12);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      local_110 = local_70;
      local_108 = 0;
      if (local_68[0] == '\0') {
        if (local_70 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = '\0';
      }
      local_108 = '\x01';
      FUN_01368510();
      if ((local_108 != '\0') && (local_110 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (local_70 != 0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(int64_t *)local_48 + 0xe10))();
      pcVar15 = local_70;
      if ((((local_68[0] == '\0') && (local_70 != 0x0)) &&
          (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != 0x0)) {
        FUN_00d50b20();
      }
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar12 = 0x2572358;
      *puVar8 = &g_02572358;
      (*g_02572370)();
      if (pcVar15 != 0x0) {
        local_68[0] = '\0';
        local_70 = 0x0;
        local_60 = pcVar15;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_58._4_4_ = 0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar2 = -local_58._4_4_;
            }
            else {
              iVar2 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar2);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar2 = 0;
            }
            local_58 = CONCAT44(iVar2,(int)local_58);
          }
          lVar5 = (int64_t)(int)local_58;
          iVar2 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar2);
          if (*(int *)(local_60 + 0xc) <= iVar2) break;
          local_70 = *(code **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar5 * 8);
          pvVar4 = _pthread_getspecific((void*)*(int64_t *)(local_60 + 0x10));
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          plVar17 = local_d0;
          if (local_c8 == '\0') {
            if (local_d0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c8 = '\0';
          }
          local_a8 = plVar17;
          local_a0 = '\0';
          FUN_00d21140();
          if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar17 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        pcVar14 = local_60;
        FUN_001159b0();
        pVar12 = (void*)pcVar14;
      }
      pvVar4 = _pthread_getspecific(pVar12);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar12 = (void*)local_40;
      }
      local_1a8 = '\0';
      local_1b0 = puVar8;
      FUN_0138df30();
      if ((local_1a8 != '\0') && (local_1b0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (pcVar15 != 0x0) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(pVar12);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar18 = FUN_0125e7c0();
    pcVar15 = local_70;
    if ((local_68[0] != '\0') && (local_70 != 0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if (pcVar15 == 0x0) {
      local_1a0 = *(int64_t *)local_88;
      local_198 = '\0';
      (**(code **)(*(int64_t *)local_48 + 0xdb0))(uVar18,1);
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)local_48 + 0xa48))();
    cVar1 = '\0';
  }
  else {
    cVar1 = *(char *)(ppcVar11 + 1);
    if (cVar1 != '\0') {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(pVar12);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_1b8 = '\0';
    local_1c0 = pcVar7;
    FUN_0138d2e0();
    if ((local_1b8 != '\0') && (local_1c0 != 0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)local_48 + 0xa48))();
  }
  if ((cVar1 != '\0') && (pcVar7 != 0x0)) {
    FUN_00d50b20();
  }
LAB_01925049:
  if (local_48 != 0x0) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_40 != 0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_b0 != 0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0x0)) {
    FUN_00d50b20();
  }
  return local_b8;
}



// ============================================================
// 01922e30
// ============================================================
// Function: FUN_01922e30
// Address: 01922e30
// Size: 2696 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_01922e30(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float fVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  float fVar14;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  uint64_t local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  char local_59;
  int64_t local_58;
  int64_t *local_48;
  char local_40;
  
  if (*param_2 == 0) {
    uVar7 = 0;
    goto LAB_0192301d;
  }
  uVar10 = FUN_01a58dc0();
  if (local_48 == (int64_t *)0x0) {
    bVar2 = true;
    bVar9 = false;
LAB_01922f96:
    local_c8 = *arg1;
    local_c0 = '\0';
    local_b8 = *param_2;
    local_b0 = '\0';
    uVar6 = FUN_01a58d30(uVar10,&local_b8);
    uVar7 = (uint64_t)uVar6;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_48))();
    if (cVar4 == '\0') {
      bVar9 = true;
      bVar2 = false;
      uVar7 = 0;
    }
    else {
      iVar5 = FUN_01d3a5a0();
      bVar9 = true;
      uVar10 = extraout_XMM0_Da;
      if ((iVar5 != 1) || (iVar5 = FUN_01d3b630(), uVar10 = extraout_XMM0_Da_00, iVar5 != 1)) {
        bVar2 = false;
        goto LAB_01922f96;
      }
      iVar5 = FUN_01d3b620();
      if (iVar5 == 2) {
        (**(code **)(*(int64_t *)this_ptr[10] + 0x410))();
        (**(code **)(*(int64_t *)this_ptr[10] + 0x388))();
        local_98 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_98 = '\x01';
        local_a0 = local_48;
        FUN_01e4ac90();
        if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_1a8 = *arg1;
        local_1b8 = *param_2;
        local_1b0 = '\0';
        local_1a0 = '\0';
        (**(code **)(*(int64_t *)this_ptr[10] + 0x4b0))(&local_1a8,&local_1b8);
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
          FUN_00d50b20();
        }
        if ((int64_t *)this_ptr[10] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)this_ptr[10] + 0x418))();
          (**(code **)(*local_48 + 0xeb0))();
        }
      }
      else {
        local_58 = *arg1;
        bVar9 = (char)arg1[1] == '\0';
        local_59 = local_58 == 0 || bVar9;
        if (local_58 == 0 || bVar9) {
          local_a8 = 0;
        }
        else {
          local_a8 = 0;
          uVar12 = FUN_00d50b00();
          local_a8 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        }
        FUN_01d3abf0();
        uVar12 = FUN_01e466c0();
        (**(code **)(*local_48 + 0xeb0))();
        plVar8 = local_48;
        do {
          do {
            (**(code **)(*local_48 + 0x658))();
            plVar1 = (int64_t *)*arg1;
            if (plVar1 == local_48) {
              if (((char)arg1[1] == '\0') && (local_48 != (int64_t *)0x0)) {
                if (local_40 == '\0') {
                  FUN_00d50b00();
                  goto LAB_01923138;
                }
                goto LAB_019230f4;
              }
LAB_019230fe:
              if (*arg1 != 0) goto LAB_0192314b;
LAB_0192339e:
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_019233b2:
              this_ptr = plVar8;
              (**(code **)(*local_48 + 0xeb0))();
              local_d8 = *arg1;
              local_d0 = '\0';
              FUN_0199eb40();
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01923887;
            }
            lVar3 = arg1[1];
            plVar8 = (int64_t *)0x0;
            if (local_40 != '\0') {
              *arg1 = (int64_t)local_48;
              if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_019230f4:
              *(void*)(arg1 + 1) = 1;
              local_40 = '\0';
              goto LAB_019230fe;
            }
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)local_48;
            if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01923138:
            *(void*)(arg1 + 1) = 1;
            if (*arg1 == 0) goto LAB_0192339e;
LAB_0192314b:
            uVar6 = FUN_01d3a5a0();
            plVar8 = (int64_t *)(uint64_t)uVar6;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (uVar6 == 6) goto LAB_019233b2;
            iVar5 = FUN_01d3a5a0();
            if ((iVar5 == 4) && (uVar7 = FUN_01d3b590(), (uVar7 & 2) != 0)) {
              local_198 = local_48;
              local_190 = '\0';
              (**(code **)(*(int64_t *)this_ptr[10] + 0x410))();
              if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*(int64_t *)this_ptr[10] + 0x388))();
              local_88 = 0;
              if (local_40 == '\0') {
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              local_88 = '\x01';
              local_90 = local_48;
              FUN_01e4ac90();
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_188 = local_58;
              local_180 = '\0';
              local_178 = *param_2;
              local_170 = '\0';
              local_168 = *arg1;
              local_160 = '\0';
              (**(code **)(*(int64_t *)this_ptr[10] + 0x4b0))(&local_168,&local_178);
              if ((local_160 != '\0') && (local_168 != 0)) {
                FUN_00d50b20();
              }
              if ((local_170 != '\0') && (local_178 != 0)) {
                FUN_00d50b20();
              }
              if ((local_180 != '\0') && (local_188 != 0)) {
                FUN_00d50b20();
              }
              if ((int64_t *)this_ptr[10] != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)this_ptr[10] + 0x418))();
                (**(code **)(*local_48 + 0xeb0))();
              }
              goto LAB_01923887;
            }
            iVar5 = FUN_01d3a5a0();
          } while (iVar5 != 5);
          FUN_01d3abf0();
          uVar13 = FUN_01e466c0();
          fVar11 = (float)((uint)((float)uVar13 - (float)uVar12) & g_02390140);
          fVar14 = (float)((uint)((float)((uint64_t)uVar13 >> 0x20) -
                                 (float)((uint64_t)uVar12 >> 0x20)) & g_02390140);
          if (fVar14 + g_02390d34 < fVar11) {
            local_158 = local_48;
            local_150 = '\0';
            (**(code **)(*(int64_t *)this_ptr[0xb] + 0x410))();
            if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*(int64_t *)this_ptr[0xb] + 0x388))();
            local_78 = 0;
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_78 = '\x01';
            local_80 = local_48;
            FUN_01e4ac90();
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_148 = local_58;
            local_140 = '\0';
            local_138 = *param_2;
            local_130 = '\0';
            local_128 = *arg1;
            local_120 = '\0';
            (**(code **)(*(int64_t *)this_ptr[0xb] + 0x4b0))(&local_128,&local_138);
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            if ((local_130 != '\0') && (local_138 != 0)) {
              FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
            if ((int64_t *)this_ptr[0xb] != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)this_ptr[0xb] + 0x418))();
              (**(code **)(*local_48 + 0xeb0))();
            }
            goto LAB_01923887;
          }
        } while (fVar14 <= fVar11 + g_02390d34);
        local_118 = local_48;
        local_110 = '\0';
        (**(code **)(*(int64_t *)this_ptr[10] + 0x410))();
        if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)this_ptr[10] + 0x388))();
        local_68 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_68 = '\x01';
        local_70 = local_48;
        FUN_01e4ac90();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_108 = local_58;
        local_100 = '\0';
        local_f8 = *param_2;
        local_f0 = '\0';
        local_e8 = *arg1;
        local_e0 = '\0';
        (**(code **)(*(int64_t *)this_ptr[10] + 0x4b0))(&local_e8,&local_f8);
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((int64_t *)this_ptr[10] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)this_ptr[10] + 0x418))();
          (**(code **)(*local_48 + 0xeb0))();
        }
LAB_01923887:
        if (local_59 == '\0') {
          FUN_00d50b20();
          bVar9 = true;
          bVar2 = false;
          uVar7 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
          goto LAB_0192300b;
        }
      }
      bVar2 = false;
      bVar9 = true;
      uVar7 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
    }
  }
LAB_0192300b:
  if ((bVar9) && (!bVar2)) {
    FUN_00d50b20();
  }
LAB_0192301d:
  return uVar7 & 0xffffffff;
}



// ============================================================
// 01bbcdd0
// ============================================================
// Function: FUN_01bbcdd0
// Address: 01bbcdd0
// Size: 2232 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_01bbcdd0(code *param_1,int64_t *param_2)

{
  code *pcVar1;
  code *pcVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  void *pvVar9;
  void* pVar10;
  code **ppcVar11;
  code *pcVar12;
  int64_t *arg1;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  float extraout_XMM0_Db;
  code *local_130;
  uint8_t local_128;
  uint64_t local_120;
  code *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  code *local_f8;
  char local_f0;
  int64_t local_e8;
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
  uint64_t local_88;
  int64_t local_70;
  char local_68;
  code *local_60;
  int64_t local_58;
  char local_50;
  char local_41;
  code *local_40;
  char local_38;
  
  ppcVar11 = &local_40;
  uVar13 = FUN_01a58dc0();
  pcVar1 = local_40;
  if ((g_02732c90 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_05, iVar5 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = FUN_0034de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    uVar13 = ___cxa_guard_release();
  }
  if (pcVar1 == 0x0) {
LAB_01bbce32:
    ppcVar11 = (code **)&g_02802688;
  }
  else {
    (**(code **)(*(int64_t *)pcVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar13 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01bbce32;
  }
  pcVar1 = *ppcVar11;
  if (*(char *)(ppcVar11 + 1) == '\0') {
    if (pcVar1 != 0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(ppcVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != 0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if (pcVar1 == 0x0) {
LAB_01bbd09e:
    local_a8 = *arg1;
    local_a0 = '\0';
    local_98 = *param_2;
    local_90 = '\0';
    uVar6 = FUN_01a58d30(uVar13,&local_98);
    uVar8 = (uint64_t)uVar6;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
LAB_01bbd10d:
    if (pcVar1 == 0x0) goto LAB_01bbd11a;
  }
  else {
    cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *(int64_t *)pcVar1))();
    if (cVar4 != '\0') {
      iVar5 = FUN_01d3a5a0();
      uVar13 = extraout_XMM0_Da_00;
      if ((iVar5 != 1) || (iVar5 = FUN_01d3b630(), uVar13 = extraout_XMM0_Da_01, iVar5 != 1))
      goto LAB_01bbd09e;
      FUN_01d3abf0();
      local_88 = FUN_01e466c0();
      local_120 = (**(code **)(*(int64_t *)pcVar1 + 0x930))();
      FUN_01e436c0();
      if ((extraout_XMM0_Db < local_88._4_4_) && (local_88._4_4_ < extraout_XMM0_Db + g_023908ec))
      {
        local_110 = '\0';
        local_108 = *arg1;
        local_100 = '\0';
        local_118 = pcVar1;
        uVar13 = FUN_0192ed00((uint32_t)local_88);
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        local_60 = CONCAT71(local_60._1_7_,(char)uVar13);
        if ((local_110 != '\0') && (local_118 != 0x0)) {
          FUN_00d50b20();
        }
        uVar8 = CONCAT71((uint7)(uint3)((uint)uVar13 >> 8),1);
        if ((char)local_60 != '\0') goto LAB_01bbd112;
      }
      uVar13 = FUN_01bbc610((uint32_t)local_88,local_120);
      pcVar2 = local_40;
      pVar10 = (void*)param_1;
      local_60 = *param_2;
      if (local_60 == local_40) {
        if (((char)param_2[1] == '\0') && (local_40 != 0x0)) {
          param_1 = (param_2 + 1);
          local_88 = param_1;
          if (local_38 == '\0') {
            uVar13 = FUN_00d50b00();
          }
          goto LAB_01bbd03d;
        }
        if ((local_38 != '\0') && (local_40 != 0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      else {
        local_88 = (param_2 + 1);
        cVar4 = (char)param_2[1];
        if (local_38 == '\0') {
          local_41 = cVar4;
          if (local_40 != 0x0) {
            uVar13 = FUN_00d50b00();
          }
          *param_2 = (int64_t)pcVar2;
          if ((local_41 != '\0') && (local_60 != 0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        else {
          *param_2 = (int64_t)local_40;
          if ((cVar4 != '\0') && (local_60 != 0x0)) {
            uVar13 = FUN_00d50b20();
          }
        }
LAB_01bbd03d:
        pVar10 = (void*)param_1;
        *local_88 = (code)0x1;
      }
      if (*param_2 == 0) goto LAB_01bbd09e;
      iVar5 = FUN_01d3b620();
      if (iVar5 == 2) {
        local_128 = 0;
        local_130 = pcVar1;
        FUN_01bbc300((int)local_120,&local_130);
        pcVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0x0) {
            FUN_00d50b00();
            goto LAB_01bbd380;
          }
        }
        else if (local_40 != 0x0) {
LAB_01bbd380:
          local_88 = pcVar2;
          (**(code **)(&UNK_00001668 + *(int64_t *)pcVar1))();
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_f8 = pcVar2;
          local_f0 = '\0';
          pvVar9 = _pthread_getspecific(pVar10);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0125e7c0();
          local_70 = local_58;
          local_68 = 0;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              uVar13 = FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_68 = '\x01';
          uVar13 = FUN_01367c80(uVar13,&local_70);
          if ((local_68 != '\0') && (local_70 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            uVar13 = FUN_00d50b20();
          }
          local_e8 = *param_2;
          local_e0 = '\0';
          (**(code **)(*(int64_t *)pcVar1 + 0xab0))(uVar13,&local_e8);
          (**(code **)(*(int64_t *)local_40 + 0x620))();
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*(int64_t *)pcVar1 + 0xe20))();
          local_40 = *param_2;
          local_38 = '\0';
          uVar7 = FUN_00d24090();
          uVar13 = extraout_XMM0_Da_04;
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar13 = FUN_00d50b20();
          }
          if ((char)uVar7 == '\0') {
            local_d8 = *param_2;
            local_d0 = '\0';
            (**(code **)(*(int64_t *)pcVar1 + 0xda8))(uVar13,1);
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
          }
          uVar8 = CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),1);
          FUN_00d50b20();
          goto LAB_01bbd112;
        }
        uVar8 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
        goto LAB_01bbd112;
      }
      (**(code **)(*(int64_t *)pcVar1 + 0xe20))();
      local_40 = *param_2;
      local_38 = '\0';
      cVar4 = FUN_00d24090();
      if ((local_38 != '\0') && (local_40 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        uVar8 = FUN_01d3b590();
        uVar13 = extraout_XMM0_Da_03;
        if ((uVar8 & 4) == 0) {
          uVar13 = (**(code **)(*(int64_t *)pcVar1 + 0xda0))();
        }
        local_c8 = *param_2;
        local_c0 = '\0';
        (**(code **)(*(int64_t *)pcVar1 + 0xda8))(uVar13,1);
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar8 = FUN_01d3b590();
        if ((uVar8 & 4) != 0) {
          local_b8 = *param_2;
          local_b0 = '\0';
          (**(code **)(*(int64_t *)pcVar1 + 0xdb0))(extraout_XMM0_Da_02,1);
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*(int64_t *)pcVar1 + 0xeb0))();
      do {
        (**(code **)(*(int64_t *)pcVar1 + 0x658))();
        pcVar12 = local_40;
        pcVar2 = *arg1;
        if (pcVar2 == local_40) {
          if (((char)arg1[1] == '\0') && (local_40 != 0x0)) {
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01bbd30f;
            }
LAB_01bbd2cd:
            *(void*)(arg1 + 1) = 1;
            local_38 = '\0';
          }
          lVar3 = *arg1;
        }
        else {
          lVar3 = arg1[1];
          if (local_38 != '\0') {
            *arg1 = (int64_t)local_40;
            if (((char)lVar3 != '\0') && (pcVar2 != 0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01bbd2cd;
          }
          if (local_40 != 0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)pcVar12;
          if (((char)lVar3 != '\0') && (pcVar2 != 0x0)) {
            FUN_00d50b20();
          }
LAB_01bbd30f:
          *(void*)(arg1 + 1) = 1;
          lVar3 = *arg1;
        }
        if (lVar3 == 0) {
          if ((local_38 != '\0') && (local_40 != 0x0)) {
            FUN_00d50b20();
          }
          break;
        }
        uVar6 = FUN_01d3a5a0();
        pcVar12 = (uint64_t)uVar6;
        if ((local_38 != '\0') && (local_40 != 0x0)) {
          FUN_00d50b20();
        }
      } while (uVar6 != 6);
      uVar8 = CONCAT71((int7)((uint64_t)pcVar12 >> 8),1);
      (**(code **)(*(int64_t *)pcVar1 + 0xeb0))();
      goto LAB_01bbd10d;
    }
    uVar8 = 0;
  }
LAB_01bbd112:
  FUN_00d50b20();
LAB_01bbd11a:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 01956f50
// ============================================================
// Function: FUN_01956f50
// Address: 01956f50
// Size: 3576 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_01956f50(void* param_1)

{
  void*puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  void *pvVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *plVar9;
  void*arg1;
  int64_t this_ptr;
  int64_t *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float extraout_XMM0_Db;
  int64_t *local_70;
  char local_68;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  plVar9 = *(int64_t **)(this_ptr + 0x170);
  if (plVar9 == (int64_t *)0x0) {
    return;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x170);
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar9 + 0x378))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
    return;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar11 = (float)FUN_014bc1c0();
  plVar9 = *(int64_t **)(this_ptr + 0x170);
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x170);
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar9 + 0x378))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar12 = (float)FUN_01326e70();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  fVar11 = fVar11 * (g_02390124 / fVar12);
  fVar12 = 0.0;
  if ((0.0 <= fVar11) && (fVar12 = fVar11, g_02390124 < fVar11)) {
    fVar12 = g_02390124;
  }
  cVar5 = FUN_0198a780();
  if (cVar5 == '\0') {
    fVar11 = 0.0;
    FUN_01cfcdc0(g_0239011c,g_0239011c,g_0239011c,fVar12 * 0.0 + g_02390124);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    fVar12 = g_0239011c - *(float *)(this_ptr + 0x14c) * g_0239011c;
    fVar11 = 0.0;
    FUN_01cfcdc0(fVar12,fVar12,fVar12,g_02390124);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar5 = FUN_01958500();
  if (cVar5 != '\0') {
    fVar11 = 0.0;
    FUN_01cfcdc0(g_0239011c,0,0,g_02390124);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e3f820();
  FUN_01989f80();
  fVar12 = (float)(**(code **)(&UNK_00001418 + *local_40))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  if ((fVar12 == g_02390124) && (!NAN(fVar12) && !NAN(g_02390124))) {
    FUN_01956250();
    lVar7 = *(int64_t *)(this_ptr + 0x170);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(&UNK_00001760 + *local_40))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      FUN_01956250();
      cVar5 = (**(code **)(&UNK_00001818 + *local_40))();
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        return;
      }
    }
    else {
      FUN_01cfcdc0(g_02390124,g_0239011c,g_0239011c,g_02390124);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar9 = (int64_t *)*arg1;
      FUN_01e3f820();
      (**(code **)(*plVar9 + 0x3b0))();
      FUN_01cfcdc0(g_0239011c,0,0,g_02390124);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar9 = (int64_t *)*arg1;
    FUN_01e3f820();
    (**(code **)(*plVar9 + 0x3b8))();
    return;
  }
  if (*(int64_t *)(this_ptr + 0x178) == 0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc240();
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) goto LAB_01957a65;
      FUN_00d50b00();
    }
    else if (local_40 == (int64_t *)0x0) goto LAB_01957a65;
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar9 = (int64_t *)&g_02680400;
    *puVar8 = &g_02680400;
    *(void*)((int64_t)puVar8 + 0xc) = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    *(void*)((int64_t)puVar8 + 0x39) = 0;
    *(void*)((int64_t)puVar8 + 0x41) = 0;
    (*g_02680418)();
    puVar1 = *(void**)(this_ptr + 0x178);
    if (puVar1 == puVar8) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x178) = puVar8;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01d38cd0(g_02421228);
    fVar12 = fVar11 * g_0239011c + extraout_XMM0_Db;
    fVar11 = fVar12;
    FUN_01d39400(0);
    FUN_01989f80();
    dVar2 = (double)(**(code **)(*local_40 + 0x930))(*(void*)(this_ptr + 0x10c));
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    fVar13 = g_023b1608 + fVar12;
    for (local_44 = g_02390124; fVar14 = (float)FUN_01e3f820(),
        local_44 < fVar14 + fVar11 + g_02390d00; local_44 = local_44 + g_02390124) {
      pvVar6 = _pthread_getspecific((void*)plVar9);
      plVar10 = local_40;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar9 = local_40;
        plVar10 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      FUN_01989f80();
      dVar3 = (double)(**(code **)(*local_40 + 0x930))
                                (*(float *)(this_ptr + 0x10c) + local_44 + g_02390d00);
      FUN_01989f80();
      dVar4 = (double)(**(code **)(*local_70 + 0x930))(*(float *)(this_ptr + 0x10c) + local_44);
      dVar3 = (double)(**(code **)(*plVar10 + 0x3a8))(SUB84(dVar3 - dVar2,0),SUB84(dVar4 - dVar2,0))
      ;
      fVar11 = (float)FUN_019569d0((float)dVar3);
      fVar11 = fVar12 - fVar11 * fVar13;
      FUN_01d38ba0(local_44);
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_44 = local_44 + g_02390d00;
    if (0.0 < local_44) {
      do {
        pvVar6 = _pthread_getspecific((void*)plVar9);
        plVar10 = local_40;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar10 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        FUN_01989f80();
        dVar3 = (double)(**(code **)(*local_40 + 0x930))
                                  (*(float *)(this_ptr + 0x10c) + local_44 + g_02390d00);
        FUN_01989f80();
        dVar4 = (double)(**(code **)(*local_70 + 0x930))(*(float *)(this_ptr + 0x10c) + local_44);
        dVar3 = (double)(**(code **)(*plVar10 + 0x3a8))
                                  (SUB84(dVar3 - dVar2,0),SUB84(dVar4 - dVar2,0));
        fVar11 = (float)FUN_019569d0((float)dVar3);
        FUN_01d38ba0(local_44,fVar11 * fVar13 + fVar12);
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_44 = local_44 + g_02390d00;
      } while (g_0239424c < local_44);
    }
    FUN_01d38b10();
    FUN_00d50b20();
  }
LAB_01957a65:
  FUN_01956250();
  lVar7 = *(int64_t *)(this_ptr + 0x170);
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(&UNK_00001760 + *local_40))();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_01956250();
    cVar5 = (**(code **)(&UNK_00001818 + *local_40))();
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      plVar9 = (int64_t *)*arg1;
      lVar7 = *(int64_t *)(this_ptr + 0x178);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar9 + 0x3a8))();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01cfcdc0(g_02390124,g_0239011c,g_0239011c,g_02390124);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (int64_t *)*arg1;
    lVar7 = *(int64_t *)(this_ptr + 0x178);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar9 + 0x3a0))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_01cfcdc0(g_0239011c,0,0,g_02390124);
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (int64_t *)*arg1;
    lVar7 = *(int64_t *)(this_ptr + 0x178);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar9 + 0x3a8))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0192ed00
// ============================================================
// Function: FUN_0192ed00
// Address: 0192ed00
// Size: 2068 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_0192ed00(uint64_t param_1)

{
  uint64_t uVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  int64_t lVar11;
  uint64_t uVar12;
  void* pVar13;
  uint64_t in_RCX;
  uint64_t uVar14;
  undefined7 uVar15;
  uint64_t *arg1;
  uint64_t *this_ptr;
  double extraout_XMM0_Qa;
  double dVar17;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar18 [16];
  uint8_t in_XMM1 [16];
  int64_t local_118;
  char local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint8_t local_f0 [8];
  uint8_t local_e8;
  uint8_t local_e0 [8];
  uint8_t local_d8;
  double local_d0;
  uint64_t local_c8;
  char local_c0;
  uint64_t local_b8;
  char local_b0;
  uint64_t local_a8;
  char local_a0;
  uint64_t local_98;
  char local_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint local_6c;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  char local_50;
  uint64_t local_48;
  uint64_t uVar16;
  
  local_88 = (double)param_1;
  uStack_80 = in_XMM0_Qb;
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 1) && (iVar8 = FUN_01d3b630(), iVar8 == 1)) {
    (**(code **)(&UNK_00001668 + *(int64_t *)*this_ptr))();
    uVar6 = local_58;
    if ((local_50 == '\0') &&
       (((local_58 != 0 && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)))) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific((void*)in_RCX);
    if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      in_RCX = uVar6;
    }
    FUN_01328ff0();
    lVar11 = local_68;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_e8 = 1;
    FUN_0192eab0(local_88,local_f0);
    uVar14 = local_58;
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    local_48 = uVar14;
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    iVar8 = FUN_01d3b620();
    pVar13 = (void*)in_RCX;
    if (iVar8 == 2) {
      if (local_48 == 0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          pVar13 = (void*)uVar6;
        }
        FUN_01329770();
        lVar11 = local_68;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_d8 = 1;
        FUN_0192eab0(local_88,local_e0);
        uVar14 = local_48;
        if ((local_58 != 0) && (uVar14 = local_58, local_50 == '\0')) {
          FUN_00d50b00();
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (uVar14 == 0) {
          pvVar10 = _pthread_getspecific(pVar13);
          uVar14 = uVar6;
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            uVar14 = *(uint64_t *)(uVar6 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8);
          }
          local_88 = (double)(**(code **)(*(int64_t *)*this_ptr + 0x930))(local_88);
          dVar17 = (double)(**(code **)(&UNK_000016a8 + *(int64_t *)*this_ptr))();
          FUN_01364d50(local_88 - dVar17,1);
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
          if (uVar6 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar10 = _pthread_getspecific(pVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_b0 = '\0';
          local_b8 = uVar14;
          FUN_0135de20();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          uVar14 = CONCAT71((int7)((uint64_t)lVar11 >> 8),1);
          if (uVar6 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c8 = local_48;
        local_c0 = '\0';
        FUN_0135d960();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
        if (uVar6 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_0192f217;
    }
    if (local_48 != 0) {
      uVar12 = (**(code **)(*(int64_t *)*this_ptr + 0x930))(local_88);
      local_6c = (uint)CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
      dVar17 = extraout_XMM0_Qa;
LAB_0192ef10:
      (**(code **)(*(int64_t *)*this_ptr + 0x658))();
      uVar7 = local_58;
      uVar1 = *arg1;
      if (uVar1 == local_58) {
        if (((char)arg1[1] == '\0') && (local_58 != 0)) {
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_0192efbc;
          }
LAB_0192ef73:
          *(void*)(arg1 + 1) = 1;
          local_50 = '\0';
        }
        pVar13 = (void*)in_RCX;
        uVar1 = *arg1;
      }
      else {
        uVar5 = arg1[1];
        uVar14 = 0;
        if (local_50 != '\0') {
          *arg1 = local_58;
          if (((char)uVar5 != '\0') && (uVar1 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_0192ef73;
        }
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        *arg1 = uVar7;
        if (((char)uVar5 != '\0') && (uVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_0192efbc:
        pVar13 = (void*)in_RCX;
        *(void*)(arg1 + 1) = 1;
        uVar1 = *arg1;
      }
      if (uVar1 != 0) {
        uVar9 = FUN_01d3a5a0();
        uVar14 = (uint64_t)uVar9;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        pVar13 = (void*)in_RCX;
        if (uVar9 == 6) goto LAB_0192f23f;
        iVar8 = FUN_01d3a5a0();
        if (iVar8 == 5) {
          uVar14 = *this_ptr;
          FUN_01d3abf0();
          uVar12 = FUN_01e466c0();
          local_d0 = (double)(**(code **)(*(int64_t *)*this_ptr + 0x930))();
          pvVar10 = _pthread_getspecific((void*)in_RCX);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            in_RCX = uVar6;
          }
          local_a8 = local_48;
          local_a0 = '\0';
          FUN_013663a0(local_d0 - dVar17,1);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          auVar18._0_8_ = FUN_01e436c0();
          auVar18._8_8_ = extraout_XMM0_Qb_00;
          local_108 = (float)uVar12;
          fStack_104 = (float)((uint64_t)uVar12 >> 0x20);
          fStack_100 = (float)extraout_XMM0_Qb;
          fStack_fc = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
          if ((float)local_88 < local_108) {
            local_108 = local_108 - (float)local_88;
            fStack_104 = fStack_104 - local_88._4_4_;
            fStack_100 = fStack_100 - (float)uStack_80;
            fStack_fc = fStack_fc - uStack_80._4_4_;
            auVar4._4_4_ = local_88._4_4_;
            auVar4._0_4_ = (float)local_88 + g_0241f374;
            auVar4._8_4_ = (float)uStack_80;
            auVar4._12_4_ = uStack_80._4_4_;
            auVar18 = blendps(auVar18,auVar4,1);
            uVar16 = auVar18._0_8_;
          }
          else {
            auVar2._4_4_ = fStack_104;
            auVar2._0_4_ = local_108 + g_0241f374;
            auVar2._8_4_ = fStack_100;
            auVar2._12_4_ = fStack_fc;
            auVar18 = blendps(auVar18,auVar2,1);
            uVar16 = auVar18._0_8_;
            local_108 = (float)local_88 - local_108;
            fStack_104 = local_88._4_4_ - fStack_104;
            fStack_100 = (float)uStack_80 - fStack_100;
            fStack_fc = uStack_80._4_4_ - fStack_fc;
          }
          auVar3._4_4_ = fStack_104;
          auVar3._0_4_ = local_108 + g_023b36a0;
          auVar3._8_4_ = fStack_100;
          auVar3._12_4_ = fStack_fc;
          in_XMM1 = blendps(in_XMM1,auVar3,1);
          (**(code **)(*(int64_t *)*this_ptr + 0x618))(uVar16,in_XMM1._0_8_);
          local_6c = 0;
          (**(code **)(*(int64_t *)*this_ptr + 0xa48))();
          local_88 = (double)uVar12;
          uStack_80 = extraout_XMM0_Qb;
          dVar17 = local_d0;
        }
        goto LAB_0192ef10;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
LAB_0192f23f:
      local_98 = *arg1;
      local_90 = '\0';
      FUN_0199eb40();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      uVar15 = (undefined7)(uVar14 >> 8);
      if ((local_6c & 1) == 0) {
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013668f0();
        (**(code **)(*(int64_t *)*this_ptr + 0x620))();
        (**(code **)(*(int64_t *)*this_ptr + 0xa48))();
        FUN_00d50b20();
        uVar14 = CONCAT71(uVar15,1);
        if (uVar6 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b20();
        uVar14 = CONCAT71(uVar15,1);
        if (uVar6 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_0192f217;
    }
    if (uVar6 != 0) {
      FUN_00d50b20();
    }
  }
  uVar14 = 0;
LAB_0192f217:
  return uVar14 & 0xffffffff;
}



// ============================================================
// 01959300
// ============================================================
// Function: FUN_01959300
// Address: 01959300
// Size: 2256 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void* FUN_01959300(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *pvVar5;
  void*puVar6;
  uint64_t uVar7;
  void* pVar8;
  int64_t lVar9;
  int iVar10;
  void*this_ptr;
  void*puVar11;
  bool bVar12;
  int64_t local_158;
  char local_150;
  void*local_c8;
  char local_c0;
  void*local_b8;
  char local_b0;
  void*local_a8;
  int64_t *local_a0;
  void*local_98;
  char local_90;
  void*local_88;
  void*local_80;
  char local_78;
  void*local_70;
  uint64_t local_68;
  int local_60;
  void*local_58;
  int64_t *local_50;
  void*local_48;
  char local_40;
  code *local_38;
  
  FUN_00243390();
  puVar1 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (void*)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  local_a0 = plVar3;
  local_50 = plVar2;
  if (puVar1 != (void*)0x0) {
    local_78 = '\0';
    local_80 = (void*)0x0;
    local_70 = puVar1;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_38 = g_02572370;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar10 = -local_68._4_4_;
        }
        else {
          iVar10 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar10);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar10 = 0;
        }
        local_68 = CONCAT44(iVar10,(int)local_68);
      }
      lVar4 = (int64_t)(int)local_68;
      iVar10 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar10);
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar10) break;
      lVar9 = local_70[2];
      local_80 = *(void**)(lVar9 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar9);
      pVar8 = (void*)lVar9;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      local_58 = local_48;
      if (((local_40 == '\0') && (local_48 != (void*)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (void*)0x0)))) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      puVar6 = local_48;
      if (((local_40 == '\0') && (local_48 != (void*)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (void*)0x0)))) {
        FUN_00d50b20();
      }
      local_a8 = puVar6;
      FUN_0025dd10();
      puVar11 = local_48;
      if (local_48 == (void*)0x0) {
        bVar12 = true;
        puVar11 = (void*)0x0;
        puVar6 = (void*)0x0;
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
          puVar6 = (void*)CONCAT71((int7)((uint64_t)puVar6 >> 8),1);
          bVar12 = false;
          if ((local_40 == '\0') || (bVar12 = false, local_48 == (void*)0x0))
          goto LAB_019595b6;
          FUN_00d50b20();
        }
        else {
          local_40 = '\0';
        }
        puVar6 = (void*)CONCAT71((int7)((uint64_t)puVar6 >> 8),1);
        bVar12 = false;
      }
LAB_019595b6:
      local_88 = puVar6;
      if (bVar12) {
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02572358;
        (*local_38)();
        if (puVar6 == puVar11) {
          if (!bVar12) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = puVar11 != (void*)0x0;
          puVar11 = puVar6;
          if (((byte)local_88 & bVar12) == 1) {
            FUN_00d50b20();
          }
        }
        FUN_0025ddc0();
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02572358;
        (*local_38)();
        uVar7 = FUN_0076f1c0();
        bVar12 = true;
        local_88 = (void*)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
      else {
        FUN_0076f110();
        puVar6 = local_48;
        if (local_48 == (void*)0x0) {
          puVar6 = (void*)0x0;
          bVar12 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar12 = true;
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = true;
        }
      }
      local_48 = local_58;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_48 = local_80;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar12) && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      plVar2 = local_50;
      if (((char)local_88 != '\0') && (puVar11 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (local_a8 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_58 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (plVar2 != (int64_t *)0x0) {
    local_78 = '\0';
    local_80 = (void*)0x0;
    local_70 = (void*)plVar2[2];
    local_68 = local_68 & 0xffffffff00000000;
    if (0 < *(int *)((int64_t)local_70 + 0xc)) {
      pVar8 = 0;
      do {
        local_80 = *(void**)(local_70[2] + (int64_t)(int)pVar8 * 8);
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0195a240();
        puVar11 = local_48;
        local_c0 = 0;
        if (local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_c0 = '\x01';
        local_c8 = puVar11;
        FUN_0195a310();
        local_b8 = local_98;
        local_b0 = 0;
        if (local_90 == '\0') {
          if (local_98 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_b0 = '\x01';
        FUN_01372190(&local_b8,&local_c8);
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_0195a310();
        puVar11 = local_98;
        if (local_90 == '\0') {
          if (local_98 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_48 = puVar11;
        local_40 = '\0';
        FUN_00d214d0();
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar11 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
          FUN_00d50b20();
        }
        plVar2 = local_50;
        pVar8 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,pVar8);
      } while ((int)pVar8 < *(int *)((int64_t)local_70 + 0xc));
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0195a3e0
// ============================================================
// Function: FUN_0195a3e0
// Address: 0195a3e0
// Size: 2131 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void* FUN_0195a3e0(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t lVar6;
  void *pvVar7;
  void*puVar8;
  void* pVar9;
  int64_t lVar10;
  int iVar11;
  void*this_ptr;
  void*puVar12;
  void*puVar13;
  int64_t local_148;
  char local_140;
  void*local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  int64_t *local_90;
  void*local_88;
  char local_80;
  void*local_78;
  char local_70;
  void*local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  void*local_48;
  char local_40;
  code *local_38;
  
  FUN_00243390();
  local_98 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (void*)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_50 = plVar5;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_90 = plVar5;
  if (local_98 != (void*)0x0) {
    local_70 = '\0';
    local_78 = (void*)0x0;
    local_68 = local_98;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_38 = g_02572370;
    local_60._4_4_ = 0;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar11 = -local_60._4_4_;
        }
        else {
          iVar11 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar11);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar11 = 0;
        }
        local_60 = CONCAT44(iVar11,(int)local_60);
      }
      lVar6 = (int64_t)(int)local_60;
      iVar11 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar11);
      if (*(int *)((int64_t)local_68 + 0xc) <= iVar11) break;
      lVar10 = local_68[2];
      local_78 = *(void**)(lVar10 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((void*)lVar10);
      pVar9 = (void*)lVar10;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      puVar8 = local_48;
      if (((local_40 == '\0') && (local_48 != (void*)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (void*)0x0)))) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      puVar3 = local_48;
      if (((local_40 == '\0') && (local_48 != (void*)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (void*)0x0)))) {
        FUN_00d50b20();
      }
      local_40 = '\0';
      local_48 = puVar3;
      cVar4 = FUN_00ca18c0();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        puVar13 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &g_02572358;
        (*local_38)();
        FUN_0025ddc0();
        puVar12 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar12 = &g_02572358;
        (*local_38)();
        FUN_0076f1c0();
        bVar1 = true;
        bVar2 = true;
      }
      else {
        FUN_0025dd10();
        puVar13 = local_48;
        if (local_48 == (void*)0x0) {
          puVar13 = (void*)0x0;
          bVar2 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar2 = true;
        }
        FUN_0076f110();
        puVar12 = local_48;
        if (local_48 == (void*)0x0) {
          puVar12 = (void*)0x0;
          bVar1 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar1 = true;
        }
      }
      local_40 = '\0';
      local_48 = puVar8;
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_48 = local_78;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar1) && (puVar12 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (puVar13 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*g_02572370)();
  if (local_50 != (int64_t *)0x0) {
    local_70 = '\0';
    local_78 = (void*)0x0;
    local_68 = (void*)local_50[2];
    local_60 = local_60 & 0xffffffff00000000;
    if (0 < *(int *)((int64_t)local_68 + 0xc)) {
      pVar9 = 0;
      do {
        local_78 = *(void**)(local_68[2] + (int64_t)(int)pVar9 * 8);
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0195a240();
        puVar3 = local_48;
        local_b0 = 0;
        if (local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_b0 = '\x01';
        local_b8 = puVar3;
        FUN_0195a310();
        local_a8 = local_88;
        local_a0 = 0;
        if (local_80 == '\0') {
          if (local_88 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_a0 = '\x01';
        FUN_0137c3f0(&local_a8,&local_b8);
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_0195a310();
        puVar3 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_48 = puVar3;
        local_40 = '\0';
        FUN_00d214d0();
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        pVar9 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,pVar9);
      } while ((int)pVar9 < *(int *)((int64_t)local_68 + 0xc));
      if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_98 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0192b000
// ============================================================
// Function: FUN_0192b000
// Address: 0192b000
// Size: 1495 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192b000(void)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  int64_t lVar6;
  void *pvVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int iVar10;
  char *pcVar11;
  int64_t this_ptr;
  int iVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  float fVar15;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  float local_a4;
  int *local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  plVar13 = local_70;
  FUN_0192b8f0();
  if ((local_68[0] == '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_c8 = 0;
  local_c0 = '\0';
  FUN_01293ed0(&local_c8);
  if (local_68[0] == '\0') {
    if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 == (int64_t *)0x0) || (*(int *)((int64_t)local_70 + 0xc) == 0)) {
    local_a0 = (int *)((int64_t)local_70 + 0xc);
    bVar2 = true;
    plVar14 = local_70;
  }
  else {
    local_40 = local_70;
    local_68[0] = '\0';
    local_70 = (int64_t *)0x0;
    local_48 = plVar13;
    local_60 = plVar13;
    local_58 = 0xffffffff;
    local_50 = 0;
    while( true ) {
      lVar6 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      iVar10 = *(int *)((int64_t)local_60 + 0xc);
      bVar2 = iVar12 < iVar10;
      plVar8 = local_60;
      if (iVar10 <= iVar12) break;
      plVar8 = (int64_t *)local_60[2];
      local_70 = (int64_t *)plVar8[lVar6 + 1];
      pvVar7 = _pthread_getspecific((void*)plVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01334f30();
      if (cVar4 == '\0') break;
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar10 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar10 = 0;
        }
        local_58 = CONCAT44(iVar10,(int)local_58);
      }
    }
    FUN_00115190();
    local_a0 = (int *)((int64_t)local_40 + 0xc);
    plVar13 = local_48;
    plVar14 = local_40;
    if ((iVar10 <= iVar12) && (0 < *(int *)((int64_t)local_40 + 0xc))) {
      plVar13 = *(int64_t **)(this_ptr + 0xd8);
      FUN_00d23310();
      piVar3 = local_a0;
      uVar9 = CONCAT71((int7)((uint64_t)plVar8 >> 8),local_68[0]);
      pcVar11 = local_38;
      if (local_68[0] != '\0') {
        pcVar11 = local_68;
      }
      local_38[0] = local_68[0];
      *pcVar11 = '\0';
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((void*)uVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012660a0();
      (**(code **)(*plVar13 + 0x928))();
      if ((local_38[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (1 < *(int *)((int64_t)local_40 + 0xc)) {
        lVar6 = 1;
        do {
          pvVar7 = _pthread_getspecific((void*)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_a4 = (float)FUN_012660a0();
          pvVar7 = _pthread_getspecific((void*)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar15 = (float)FUN_012660a0();
          if ((local_a4 != fVar15) || (NAN(local_a4) || NAN(fVar15))) {
            plVar13 = *(int64_t **)(this_ptr + 0xd8);
            FUN_00e99dd0();
            local_80 = 0;
            if (local_68[0] == '\0') {
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68[0] = '\0';
            }
            local_80 = '\x01';
            local_88 = local_70;
            (**(code **)(*plVar13 + 0x968))();
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            bVar2 = false;
            plVar13 = local_48;
            plVar14 = local_40;
            goto LAB_0192b4e9;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < *piVar3);
      }
      bVar2 = false;
      plVar13 = local_48;
      plVar14 = local_40;
      goto LAB_0192b4e9;
    }
  }
  plVar8 = *(int64_t **)(this_ptr + 0xd8);
  FUN_00d8ede0();
  local_90 = 0;
  if (local_68[0] == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68[0] = '\0';
  }
  local_90 = '\x01';
  local_98 = local_70;
  (**(code **)(*plVar8 + 0x968))();
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0192b4e9:
  FUN_01a13070();
  if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 == (int64_t *)0x0) {
    bVar5 = 0;
  }
  else {
    FUN_01a13070();
    local_b0 = '\0';
    local_b8 = plVar14;
    bVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_70 + 8))();
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar5 = bVar5 ^ 1;
  }
  pcVar1 = *(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x998);
  if (bVar2 || (*local_a0 < 1 || bVar5 != 0)) {
    (*pcVar1)();
  }
  else {
    (*pcVar1)();
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar14 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0192cfb0
// ============================================================
// Function: FUN_0192cfb0
// Address: 0192cfb0
// Size: 1479 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192cfb0(uint32_t param_1,uint32_t param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void* in_ECX;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01a58dc0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
LAB_0192d4e9:
    FUN_01a58d00(param_1);
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_58))();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01a58dc0();
    FUN_0199f460();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xad8))(param_1);
    if (local_40 == (int64_t *)0x0) {
      bVar1 = true;
      plVar6 = (int64_t *)0x0;
    }
    else {
      plVar6 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        local_38 = '\0';
        bVar1 = false;
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_01a58dc0();
      FUN_0199f460();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a58dc0();
      (**(code **)(&UNK_000017f0 + *local_40))(param_1);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      lVar5 = *(int64_t *)(arg1 + 0x40);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar5;
      *(void*)(this_ptr + 1) = 1;
      if (plVar6 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    FUN_01a58dc0();
    (**(code **)(*local_58 + 0xab8))(param_1);
    local_48 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar1 = true;
      local_48 = (int64_t *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    else {
      local_38 = '\0';
      bVar1 = false;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_01a58dc0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      uVar7 = FUN_01e437f0(param_1);
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_019764d0();
      cVar2 = FUN_00d05410(uVar7,uVar8,param_2);
      if (cVar2 != '\0') {
        FUN_01a58dc0();
        FUN_0199f460();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01a58dc0();
        (**(code **)(&UNK_000017f0 + *local_40))(param_1);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar5;
        *(void*)(this_ptr + 1) = 1;
        if (local_48 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if ((iVar3 == 2) || (iVar3 == 4)) {
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar5;
        *(void*)(this_ptr + 1) = 1;
        if (local_48 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      *(void*)(this_ptr + 1) = 0;
      lVar5 = *(int64_t *)(arg1 + 0x38);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar5;
      *(void*)(this_ptr + 1) = 1;
      if (local_48 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    FUN_01a58dc0();
    (**(code **)(&UNK_000016c8 + *local_58))(param_1);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (int64_t *)0x0) {
      FUN_01a58dc0();
      cVar2 = FUN_01944ee0();
      if (cVar2 == '\0') goto LAB_0192d4e9;
      if ((iVar3 == 2) || (iVar3 == 4)) {
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x38);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
    }
    else {
      FUN_01a58dc0();
      (**(code **)(&UNK_000017f0 + *local_40))(param_1);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((iVar3 == 2) || (iVar3 == 4)) {
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(this_ptr + 1) = 0;
        lVar5 = *(int64_t *)(arg1 + 0x38);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
    }
    *this_ptr = lVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}



// ============================================================
// 01940080
// ============================================================
// Function: FUN_01940080
// Address: 01940080
// Size: 1457 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_01940080(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar9;
  float fVar10;
  uint64_t uVar11;
  uint8_t auVar12 [16];
  float local_88;
  int64_t local_48;
  char local_40;
  uint64_t extraout_XMM0_Qb;
  
  FUN_01e3f820();
  iVar6 = FUN_01d3a5a0();
  if (iVar6 == 5) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(&UNK_000017c8 + *this_ptr))();
    if ((char)this_ptr[0xb6] != '\0') {
      FUN_01d3abf0();
      uVar11 = FUN_01e466c0();
      (**(code **)(*this_ptr + 0xab8))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      (**(code **)(&UNK_000016c8 + *this_ptr))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
        *(void*)((int64_t)this_ptr + 0x5bc) = uVar11;
        *(void*)((int64_t)this_ptr + 0x5c4) = 1;
LAB_019401b7:
        FUN_00d50b20();
      }
      else {
        if (local_48 == 0) {
          *(void*)((int64_t)this_ptr + 0x5c4) = 0;
          goto LAB_019401cc;
        }
        *(void*)((int64_t)this_ptr + 0x5bc) = uVar11;
        *(void*)((int64_t)this_ptr + 0x5c4) = 1;
        if (local_48 != 0) goto LAB_019401b7;
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
LAB_019401cc:
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), iVar6 == 1)) {
    (**(code **)(&UNK_00001668 + *this_ptr))();
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_01326de0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar6 == 3) {
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(&g_00001730 + *this_ptr))();
      bVar4 = FUN_00d05410();
      if (bVar4 == 0) {
        (**(code **)(&g_00001738 + *this_ptr))();
        cVar5 = FUN_00d05410();
        if (cVar5 == '\0') goto LAB_01940545;
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013514c0();
        *(void*)(this_ptr + 0xae) = uVar9;
      }
      else {
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013514d0();
        *(void*)((int64_t)this_ptr + 0x56c) = uVar9;
      }
      local_88 = (float)(**(code **)(*this_ptr + 0xc00))();
      plVar8 = this_ptr + 0xae;
      lVar1 = (uint64_t)(bVar4 ^ 1) * 4 + 0x56c;
      do {
        (**(code **)(*this_ptr + 0x658))();
        lVar2 = *arg1;
        if (lVar2 == local_48) {
          if (((char)arg1[1] == '\0') && (local_48 != 0)) {
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_019404cc;
            }
LAB_01940482:
            *(void*)(arg1 + 1) = 1;
            local_40 = '\0';
          }
          lVar2 = *arg1;
        }
        else {
          lVar3 = arg1[1];
          if (local_40 != '\0') {
            *arg1 = local_48;
            if (((char)lVar3 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01940482;
          }
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_019404cc:
          *(void*)(arg1 + 1) = 1;
          lVar2 = *arg1;
        }
        if (lVar2 == 0) {
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
LAB_01940596:
          pvVar7 = _pthread_getspecific(param_1);
          if (bVar4 == 0) {
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013548b0();
          }
          else {
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01354950();
            plVar8 = (int64_t *)((int64_t)this_ptr + 0x56c);
          }
          *(void*)plVar8 = 0x7fc00000;
          (**(code **)(*this_ptr + 0x620))();
          return;
        }
        iVar6 = FUN_01d3a5a0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar6 == 6) goto LAB_01940596;
        FUN_01d3abf0();
        auVar12._0_8_ = FUN_01e466c0();
        auVar12._8_8_ = extraout_XMM0_Qb;
        if ((float)((uint64_t)auVar12._0_8_ >> 0x20) < g_023908d8) {
          insertps(auVar12,ZEXT416((uint)g_023908d8),0x10);
        }
        fVar10 = (float)(**(code **)(*this_ptr + 0xc00))();
        *(float *)((int64_t)this_ptr + lVar1) =
             (fVar10 - local_88) + *(float *)((int64_t)this_ptr + lVar1);
        (**(code **)(*this_ptr + 0x620))();
        local_88 = fVar10;
      } while( true );
    }
  }
LAB_01940545:
  FUN_0199c1c0();
  return;
}



// ============================================================
// 019298b0
// ============================================================
// Function: FUN_019298b0
// Address: 019298b0
// Size: 997 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_019298b0(void* param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t lVar4;
  uint uVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *this_ptr;
  int64_t lVar8;
  int64_t *plVar9;
  uint32_t uVar10;
  float fVar11;
  uint uVar12;
  uint64_t uVar13;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t uVar14;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  int64_t local_98;
  char local_90;
  uint64_t local_88;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint local_70;
  float local_6c;
  int64_t local_68;
  int64_t local_40;
  char local_38;
  
  uVar5 = (**(code **)(*this_ptr + 0x688))();
  plVar9 = (int64_t *)(uint64_t)uVar5;
  if (((char)uVar5 != '\0') && (param_2 != '\0')) {
    plVar1 = (int64_t *)this_ptr[0x1c];
    (**(code **)(*(int64_t *)this_ptr[0x1b] + 0x960))();
    lVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = (**(code **)(*plVar1 + 0x380))();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr[0x1b] + 0x960))();
    local_6c = (float)FUN_00d8d7b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar10 = (**(code **)(*this_ptr + 0x3f8))();
    lVar7 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (0 < *(int *)(lVar7 + 0xc)) {
      lVar8 = 0;
      plVar9 = &local_40;
      local_68 = lVar7;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar8 * 8);
        if (lVar2 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_90 = '\0';
        local_98 = lVar2;
        FUN_019a54a0(uVar10,&local_98);
        lVar7 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        uVar10 = 0;
        uVar14 = 0;
        uVar13 = (uint64_t)local_70;
        if (lVar7 != 0) {
          fVar11 = (float)FUN_00d459e0();
          uVar13 = FUN_00aea5e0(fVar11 + local_6c);
          uVar10 = extraout_XMM0_Dc;
          uVar14 = extraout_XMM0_Dd;
        }
        local_88 = uVar13;
        uStack_80 = uVar10;
        uStack_7c = uVar14;
        fVar11 = (float)FUN_00aea610();
        if (g_02390434 < fVar11) {
          local_88 = FUN_00aea5e0(g_02390434);
          uStack_80 = extraout_XMM0_Dc_00;
          uStack_7c = extraout_XMM0_Dd_00;
        }
        fVar11 = (float)FUN_00aea610((uint)local_88);
        bVar3 = g_0241b664 < fVar11;
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar12 = -(uint)bVar3 & (uint)local_88;
        FUN_01265b00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_0125e930();
        lVar4 = local_40;
        local_88 = lVar7;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar4 != 0) {
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_0152e890(uVar12);
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar10 = FUN_00d50b20();
          }
        }
        lVar7 = local_68;
        if (local_88 != 0) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar2 != 0) {
          uVar10 = FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(lVar7 + 0xc));
    }
    FUN_00d50b20();
    plVar9 = (int64_t *)CONCAT71((int7)((uint64_t)plVar9 >> 8),(char)uVar5);
  }
  return (uint64_t)plVar9 & 0xffffffff;
}



// ============================================================
// 0195b5f0
// ============================================================
// Function: FUN_0195b5f0
// Address: 0195b5f0
// Size: 996 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_0195b5f0(void* param_1,uint64_t param_2)

{
  byte bVar1;
  void *pvVar2;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar3;
  uint32_t uVar4;
  float fVar5;
  float fVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  uint64_t in_XMM1_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint64_t local_58;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  if (this_ptr[0x2f] != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_38 == (int64_t *)0x0) {
      bVar1 = 0;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      if (local_88 == 0) {
        bVar1 = 0;
      }
      else {
        FUN_01989f80();
        bVar1 = FUN_019b43a0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        bVar1 = bVar1 ^ 1;
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar1 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_012f7cb0();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_012f9490();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      uVar7 = (**(code **)(*local_38 + 0x938))(uVar3);
      fVar5 = (float)(**(code **)(*this_ptr + 0x4d8))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      local_58 = (**(code **)(*local_38 + 0x938))(uVar4);
      uStack_50 = extraout_XMM0_Dc_00;
      uStack_4c = extraout_XMM0_Dd_00;
      fVar6 = (float)(**(code **)(*this_ptr + 0x4d8))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01989f80();
      uVar8 = FUN_01e436c0();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      fVar5 = (float)uVar7 - fVar5;
      auVar10._4_12_ = local_58._4_12_;
      auVar10._0_4_ = ((float)local_58 - fVar6) - fVar5;
      uVar9 = (**(code **)(*this_ptr + 0x4d8))();
      auVar12._0_4_ = (float)uVar8 - (float)uVar9;
      auVar12._4_4_ = (float)((uint64_t)uVar8 >> 0x20) - (float)((uint64_t)uVar9 >> 0x20);
      auVar12._8_4_ = extraout_XMM0_Dc_01 - extraout_XMM0_Dc_02;
      auVar12._12_4_ = extraout_XMM0_Dd_01 - extraout_XMM0_Dd_02;
      auVar11._8_8_ = in_XMM1_Qb;
      auVar11._0_8_ = param_2;
      auVar11 = blendps(auVar10,auVar11,0xe);
      auVar13._4_4_ = (int)((uint64_t)uVar7 >> 0x20);
      auVar13._0_4_ = fVar5;
      auVar13._8_4_ = extraout_XMM0_Dc;
      auVar13._12_4_ = extraout_XMM0_Dd;
      auVar13 = blendps(auVar12,auVar13,1);
      (**(code **)(*(int64_t *)*arg1 + 0x390))(auVar13._0_4_,auVar11._0_8_);
      return 1;
    }
  }
  return 0;
}



// ============================================================
// 019303c0
// ============================================================
// Function: FUN_019303c0
// Address: 019303c0
// Size: 1453 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_019303c0(void)

{
  int64_t this_ptr;
  uint32_t uVar1;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_30;
  char local_28;
  
  FUN_0198e770();
  *(void*)(this_ptr + 0x355) = 1;
  *(void*)(this_ptr + 0x358) = 0;
  *(void*)(this_ptr + 0x568) = 0x7fc000007fc00000;
  *(void*)(this_ptr + 0x570) = 0x7fc00000;
  *(void*)(this_ptr + 0x580) = 0;
  uVar1 = FUN_01bfdcc0(g_02390124);
  *(void*)(this_ptr + 0x584) = uVar1;
  *(void*)(this_ptr + 0x598) = 0;
  *(void*)(this_ptr + 0x351) = 0;
  *(void*)(this_ptr + 0x355) = 1;
  *(void*)(this_ptr + 0x352) = 0x101;
  *(void*)(this_ptr + 0x356) = 1;
  *(void*)(this_ptr + 0x280) = 0;
  *(void*)(this_ptr + 0x5b0) = 0;
  FUN_00d403d0();
  FUN_00d50b00();
  local_150 = g_027e1fc8;
  if (g_027e1fc8 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  local_140 = 0;
  local_138 = '\0';
  FUN_00d41430(&local_140,&local_150);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_130 = g_027086a8;
  if (g_027086a8 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_00d41430(&local_120,&local_130);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_110 = g_027e3b30;
  if (g_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d41430(&local_100,&local_110);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = g_027ebe30;
  if (g_027ebe30 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = g_027c8278;
  if (g_027c8278 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = g_027c8280;
  if (g_027c8280 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x5c4) = 0;
  *(void*)(this_ptr + 0x5c8) = 0xbe800000;
  *(void*)(this_ptr + 0x5d0) = 0x7ff8000000000000;
  *(void*)(this_ptr + 0x4dc) = 1;
  return;
}



// ============================================================
// 01927ba0
// ============================================================
// Function: FUN_01927ba0
// Address: 01927ba0
// Size: 1023 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_01927ba0(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  bool bVar7;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((g_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = 0x34de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_01927bf7:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01927bf7;
  }
  if (*pplVar6 == (int64_t *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 1;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fb9a8;
  if (bVar7) {
    *(void*)(this_ptr + 1) = 0;
    goto joined_r0x01927ded;
  }
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((g_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = 0x34de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_01927d20:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01927d20;
  }
  if (*pplVar6 == (int64_t *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 3;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fb9c0;
  if (!bVar7) {
    FUN_01a593c0();
    return;
  }
  *(void*)(this_ptr + 1) = 0;
joined_r0x01927ded:
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0192dad0
// ============================================================
// Function: FUN_0192dad0
// Address: 0192dad0
// Size: 1023 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192dad0(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  bool bVar7;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((g_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = 0x34de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_0192db27:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0192db27;
  }
  if (*pplVar6 == (int64_t *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 1;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fb9a8;
  if (bVar7) {
    *(void*)(this_ptr + 1) = 0;
    goto joined_r0x0192dd1d;
  }
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((g_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = 0x34de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_0192dc50:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0192dc50;
  }
  if (*pplVar6 == (int64_t *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 3;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fb9c0;
  if (!bVar7) {
    FUN_01a593c0();
    return;
  }
  *(void*)(this_ptr + 1) = 0;
joined_r0x0192dd1d:
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01bf85a0
// ============================================================
// Function: FUN_01bf85a0
// Address: 01bf85a0
// Size: 1023 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_01bf85a0(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  bool bVar7;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((g_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = 0x34de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_01bf85f7:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bf85f7;
  }
  if (*pplVar6 == (int64_t *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 1;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fb9a8;
  if (bVar7) {
    *(void*)(this_ptr + 1) = 0;
    goto joined_r0x01bf87ed;
  }
  pplVar6 = &local_58;
  FUN_01a58dc0();
  plVar2 = local_58;
  if ((g_02732c90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = 0x34de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_01bf8720:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bf8720;
  }
  if (*pplVar6 == (int64_t *)0x0) {
    bVar7 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_48))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01326de0();
    bVar7 = iVar4 == 3;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_026fb9b0;
  if (!bVar7) {
    FUN_01a593c0();
    return;
  }
  *(void*)(this_ptr + 1) = 0;
joined_r0x01bf87ed:
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01958cf0
// ============================================================
// Function: FUN_01958cf0
// Address: 01958cf0
// Size: 894 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_01958cf0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void* pVar5;
  int64_t **pplVar6;
  int64_t **pplVar7;
  int64_t lVar8;
  int64_t *this_ptr;
  bool bVar9;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar7 = &local_48;
  FUN_01a58dc0();
  plVar1 = local_48;
  if ((g_02732c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01958d4a:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01958d4a;
  }
  plVar1 = *pplVar7;
  local_38[0] = *(char *)(pplVar7 + 1);
  pplVar6 = (int64_t **)local_38;
  if (local_38[0] != '\0') {
    pplVar6 = pplVar7 + 1;
  }
  *(void*)pplVar6 = 0;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar5 = (void*)pplVar6;
  if (plVar1 == (int64_t *)0x0) {
LAB_01958f66:
    FUN_01a593c0();
  }
  else {
    (**(code **)(&UNK_00001668 + *plVar1))();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    bVar9 = true;
    if (iVar3 != 2) {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = iVar3 == 4;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = g_026fb9e0;
    if (bVar9) {
      *(void*)(this_ptr + 1) = 0;
      if (lVar8 == 0) {
LAB_01958f79:
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = true;
      if (iVar3 != 3) {
        (**(code **)(&UNK_00001668 + *plVar1))();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar9 = iVar3 == 1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = g_026fb9d0;
      if (!bVar9) goto LAB_01958f66;
      *(void*)(this_ptr + 1) = 0;
      if (lVar8 == 0) goto LAB_01958f79;
      FUN_00d50b00();
    }
    *this_ptr = lVar8;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01bbdb10
// ============================================================
// Function: FUN_01bbdb10
// Address: 01bbdb10
// Size: 894 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_01bbdb10(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void* pVar5;
  int64_t **pplVar6;
  int64_t **pplVar7;
  int64_t lVar8;
  int64_t *this_ptr;
  bool bVar9;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar7 = &local_48;
  FUN_01a58dc0();
  plVar1 = local_48;
  if ((g_02732c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01bbdb6a:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01bbdb6a;
  }
  plVar1 = *pplVar7;
  local_38[0] = *(char *)(pplVar7 + 1);
  pplVar6 = (int64_t **)local_38;
  if (local_38[0] != '\0') {
    pplVar6 = pplVar7 + 1;
  }
  *(void*)pplVar6 = 0;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar5 = (void*)pplVar6;
  if (plVar1 == (int64_t *)0x0) {
LAB_01bbdd86:
    FUN_01a593c0();
  }
  else {
    (**(code **)(&UNK_00001668 + *plVar1))();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    bVar9 = true;
    if (iVar3 != 2) {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = iVar3 == 4;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = g_026fb9e0;
    if (bVar9) {
      *(void*)(this_ptr + 1) = 0;
      if (lVar8 == 0) {
LAB_01bbdd99:
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = true;
      if (iVar3 != 3) {
        (**(code **)(&UNK_00001668 + *plVar1))();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar9 = iVar3 == 1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = g_026fb9d0;
      if (!bVar9) goto LAB_01bbdd86;
      *(void*)(this_ptr + 1) = 0;
      if (lVar8 == 0) goto LAB_01bbdd99;
      FUN_00d50b00();
    }
    *this_ptr = lVar8;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0192e4a0
// ============================================================
// Function: FUN_0192e4a0
// Address: 0192e4a0
// Size: 894 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192e4a0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void* pVar5;
  int64_t **pplVar6;
  int64_t **pplVar7;
  int64_t lVar8;
  int64_t *this_ptr;
  bool bVar9;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  char local_38 [8];
  
  pplVar7 = &local_48;
  FUN_01a58dc0();
  plVar1 = local_48;
  if ((g_02732c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_0192e4fa:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0192e4fa;
  }
  plVar1 = *pplVar7;
  local_38[0] = *(char *)(pplVar7 + 1);
  pplVar6 = (int64_t **)local_38;
  if (local_38[0] != '\0') {
    pplVar6 = pplVar7 + 1;
  }
  *(void*)pplVar6 = 0;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar5 = (void*)pplVar6;
  if (plVar1 == (int64_t *)0x0) {
LAB_0192e716:
    FUN_01a593c0();
  }
  else {
    (**(code **)(&UNK_00001668 + *plVar1))();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    bVar9 = true;
    if (iVar3 != 2) {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = iVar3 == 4;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar8 = g_026fb9e0;
    if (bVar9) {
      *(void*)(this_ptr + 1) = 0;
      if (lVar8 == 0) {
LAB_0192e729:
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(&UNK_00001668 + *plVar1))();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar9 = true;
      if (iVar3 != 3) {
        (**(code **)(&UNK_00001668 + *plVar1))();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_01326de0();
        bVar9 = iVar3 == 1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar8 = g_026fb9d0;
      if (!bVar9) goto LAB_0192e716;
      *(void*)(this_ptr + 1) = 0;
      if (lVar8 == 0) goto LAB_0192e729;
      FUN_00d50b00();
    }
    *this_ptr = lVar8;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 005a97a0
// ============================================================
// Function: FUN_005a97a0
// Address: 005a97a0
// Size: 4650 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_005a97a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0059ed40();
  *this_ptr = &g_0261df38;
  this_ptr[2] = &g_0261f7b0;
  this_ptr[0x28] = &g_0261f7f0;
  this_ptr[0x29] = &g_0261f840;
  this_ptr[0x2a] = &g_0261f870;
  FUN_005aab90();
  FUN_005aaec0();
  FUN_005ab1f0();
  FUN_005ab520();
  FUN_005ab850();
  FUN_005abb80();
  *(void*)(this_ptr + 0xad) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005abeb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x56c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ac040();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xae) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ac1d0();
    FUN_00e87980();
  }
  this_ptr[0xaf] = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ac360();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb0) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ac4f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x584) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ac740();
    FUN_00e87980();
  }
  FUN_005ac8d0();
  FUN_005acc00();
  this_ptr[0xb3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005acf30();
    FUN_00e87980();
  }
  this_ptr[0xb4] = 0;
  this_ptr[0xb5] = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ad0c0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb6) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ad250();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5b4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ad3e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5bc) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ad570();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ad700();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb9) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ad890();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5cc) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ada20();
    FUN_00e87980();
  }
  this_ptr[0xba] = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005adbb0();
    FUN_00e87980();
  }
  FUN_005add40();
  FUN_005ae000();
  FUN_005ae330();
  this_ptr[0xbe] = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ae660();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xbf) = 0;
  // [STATIC_INIT: property registration]
  if (g_02714aeb == '\0') {
    FUN_005ae7f0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0195bf50
// ============================================================
// Function: FUN_0195bf50
// Address: 0195bf50
// Size: 812 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_0195bf50(float param_1,float param_2)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  void* in_ECX;
  int64_t *this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar4;
  float fVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  undefined7 uVar5;
  
  fVar11 = param_2;
  fVar6 = (float)(**(code **)(*this_ptr + 0x4d8))();
  cVar1 = FUN_00d054a0();
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined7)((uint64_t)unaff_R12 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (this_ptr[0x2f] != 0) {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_40 == (int64_t *)0x0) {
        bVar2 = 0;
      }
      else {
        FUN_01989f80();
        cVar1 = FUN_019a9840();
        if (cVar1 == '\0') {
          bVar2 = 0;
        }
        else {
          FUN_01989f80();
          bVar2 = FUN_019b43a0();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          bVar2 = bVar2 ^ 1;
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar2 != 0) {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = FUN_012f7cb0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = FUN_012f9490();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01989f80();
        fVar9 = (float)(**(code **)(*local_40 + 0x938))(uVar7);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01989f80();
        fVar10 = (float)(**(code **)(*local_40 + 0x938))(uVar8);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        fVar12 = fVar6;
        if (fVar6 <= fVar9) {
          fVar12 = fVar9;
        }
        if (fVar11 + fVar6 <= fVar10) {
          fVar10 = fVar11 + fVar6;
        }
        uVar4 = CONCAT71(uVar5,param_1 < fVar10 && fVar12 < param_2 + param_1);
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// ============================================================
// 0192a150
// ============================================================
// Function: FUN_0192a150
// Address: 0192a150
// Size: 888 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192a150(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  uint32_t uVar10;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_40;
  char local_38;
  
  FUN_01d3a560();
  iVar5 = FUN_01d3b590();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar5 == 8) {
    FUN_00c9eb90(g_02394254);
  }
  else {
    FUN_00c9eb90(g_02391090);
  }
  (**(code **)(*this_ptr + 0x3f8))();
  if (local_40 == (int64_t *)0x0) {
    bVar3 = true;
    plVar9 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = false;
    plVar9 = local_40;
  }
  if (this_ptr[0x1b] == *arg1) {
    FUN_00e38430();
  }
  FUN_00e99dd0();
  (**(code **)(*(int64_t *)*arg1 + 0x960))();
  lVar8 = local_98;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  cVar4 = (**(code **)(*local_40 + 0x50))();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (0 < *(int *)((int64_t)plVar9 + 0xc))) {
    lVar7 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      lVar1 = *(int64_t *)(plVar9[2] + lVar7 * 8);
      if (lVar8 == lVar1) {
        if ((!bVar2) && (lVar8 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar8 = lVar1;
        }
        else {
          bVar2 = true;
          lVar8 = lVar1;
        }
      }
      if (this_ptr[0x1b] == *arg1) {
        pvVar6 = _pthread_getspecific((void*)arg1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b60();
        FUN_00aea610();
        uVar10 = FUN_00d46dc0();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            uVar10 = FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_a0 = '\0';
        local_a8 = lVar8;
        FUN_019b43b0(uVar10,&local_a8);
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((int64_t)plVar9 + 0xc));
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar3 && plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01929220
// ============================================================
// Function: FUN_01929220
// Address: 01929220
// Size: 1028 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_01929220(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t *this_ptr;
  float fVar6;
  float fVar7;
  float local_58;
  float local_54;
  int64_t local_50;
  char local_48;
  int local_38;
  
  lVar2 = local_50;
  (**(code **)(*this_ptr + 0x3f8))();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (int64_t *)this_ptr[0x1b];
  if (*(int *)(local_50 + 0xc) == 0) {
    (**(code **)(*plVar1 + 0x998))();
    plVar1 = (int64_t *)this_ptr[0x1b];
    FUN_00e9aaa0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = (**(code **)(*this_ptr + 0x698))();
    if (cVar3 != '\0') {
      (**(code **)(*this_ptr + 0x688))();
    }
    (**(code **)(*plVar1 + 0x998))();
    local_50 = 0;
    local_38 = -1;
    local_58 = g_02391074;
    local_54 = g_02391078;
    fVar6 = local_58;
    while( true ) {
      local_58 = fVar6;
      lVar4 = (int64_t)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_38) break;
      local_50 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((void*)*(int64_t *)(lVar2 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar6 = (float)FUN_01265b60();
      fVar7 = fVar6;
      if (local_54 <= fVar6) {
        fVar7 = local_54;
      }
      local_54 = fVar7;
      if (fVar6 <= local_58) {
        fVar6 = local_58;
      }
    }
    FUN_00083b20();
    if (*(int *)(lVar2 + 0xc) == 1) {
      plVar1 = (int64_t *)this_ptr[0x1b];
      (**(code **)(*(int64_t *)this_ptr[0x1c] + 0x378))(local_54);
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar1 = (int64_t *)this_ptr[0x1b];
      if ((local_54 != local_58) || (NAN(local_54) || NAN(local_58))) {
        FUN_00e99dd0();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*(int64_t *)this_ptr[0x1c] + 0x378))();
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x958))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 019280d0
// ============================================================
// Function: FUN_019280d0
// Address: 019280d0
// Size: 654 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_019280d0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void*this_ptr;
  int64_t **pplVar5;
  bool bVar6;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  pplVar5 = &local_78;
  FUN_01a58dc0();
  plVar1 = local_78;
  if ((g_02732c90 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = 0x34de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_0192812e;
  }
  pplVar5 = (int64_t **)&g_02802688;
LAB_0192812e:
  if (*pplVar5 == (int64_t *)0x0) {
    bVar6 = false;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(&UNK_00001668 + *local_68))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01326de0();
    bVar6 = true;
    if (iVar3 != 2) {
      FUN_01a58dc0();
      (**(code **)(&UNK_00001668 + *local_58))();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01326de0();
      bVar6 = iVar3 == 4;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_01a58be0();
  }
  return;
}



// ============================================================
// 0195c420
// ============================================================
// Function: FUN_0195c420
// Address: 0195c420
// Size: 834 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0195c420(void)

{
  void *pvVar1;
  int64_t lVar2;
  void* pVar3;
  int64_t *plVar4;
  int64_t this_ptr;
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
  
  FUN_00d403d0();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_b8 = 0;
  local_b0 = '\0';
  local_a8 = 0;
  local_a0 = '\0';
  plVar4 = &local_a8;
  FUN_00d41040(plVar4,&local_b8);
  pVar3 = (void*)plVar4;
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x178) != 0) {
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar4 = (int64_t *)(this_ptr + 0x168);
    (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
    FUN_00d50b00();
    local_98 = 0;
    local_90 = '\0';
    FUN_00e8b9a0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      pvVar1 = _pthread_getspecific(pVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_88 = 0;
      local_80 = '\0';
      local_78 = 0;
      local_70 = '\0';
      FUN_00cbadd0(&local_78,&local_88);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x178) != 0) {
      *(void*)(this_ptr + 0x178) = 0;
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
  FUN_00d50b00();
  local_60 = '\x01';
  local_68 = (int64_t *)(this_ptr + 0x168);
  FUN_00cbb340();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    (**(code **)(*local_68 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01989e30();
  return;
}



// ============================================================
// 0195bb80
// ============================================================
// Function: FUN_0195bb80
// Address: 0195bb80
// Size: 705 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_0195bb80(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  void* in_ECX;
  int64_t *this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar4;
  uint64_t uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  undefined7 uVar5;
  
  uVar6 = (**(code **)(*this_ptr + 0x4d8))();
  cVar1 = FUN_00d05410(param_1,uVar6,param_2);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar5 = (undefined7)((uint64_t)unaff_R12 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (this_ptr[0x2f] != 0) {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_40 == (int64_t *)0x0) {
        bVar2 = 0;
      }
      else {
        FUN_01989f80();
        cVar1 = FUN_019a9840();
        if (cVar1 == '\0') {
          bVar2 = 0;
        }
        else {
          FUN_01989f80();
          bVar2 = FUN_019b43a0();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          bVar2 = bVar2 ^ 1;
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar2 != 0) {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_012f7cb0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012f9490();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01989f80();
        dVar9 = (double)(**(code **)(*local_40 + 0x930))(param_1);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar4 = CONCAT71(uVar5,dVar9 <= dVar8 && dVar7 <= dVar9);
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// ============================================================
// 019246c0
// ============================================================
// Function: FUN_019246c0
// Address: 019246c0
// Size: 505 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_019246c0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b0a88 == 0) || (g_028b0a91 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027e07d8;
    if (g_028b0a88 == 0) {
      if (g_027e07d8 != 0) {
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
      FUN_01d20ca0(g_023b5570);
      lVar2 = g_028b0a88;
      if (g_028b0a88 != local_48) {
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
        bVar1 = g_028b0a88 != 0;
        g_028b0a88 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (g_028b0a90 == '\0')) {
        g_028b0a90 = '\x01';
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
      g_028b0a91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0a91 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b0a88 == 0) {
      lVar3 = 0;
      goto LAB_01924879;
    }
  }
  lVar3 = g_028b0a88;
  FUN_00d50b00();
LAB_01924879:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0192e160
// ============================================================
// Function: FUN_0192e160
// Address: 0192e160
// Size: 505 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192e160(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  if ((g_028b0b28 == 0) || (g_028b0b31 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027e0810;
    if (g_028b0b28 == 0) {
      if (g_027e0810 != 0) {
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
      FUN_01d20ca0(g_0241ea30);
      lVar2 = g_028b0b28;
      if (g_028b0b28 != local_48) {
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
        bVar1 = g_028b0b28 != 0;
        g_028b0b28 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (g_028b0b30 == '\0')) {
        g_028b0b30 = '\x01';
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
      g_028b0b31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0b31 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b0b28 == 0) {
      lVar3 = 0;
      goto LAB_0192e319;
    }
  }
  lVar3 = g_028b0b28;
  FUN_00d50b00();
LAB_0192e319:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0192bba0
// ============================================================
// Function: FUN_0192bba0
// Address: 0192bba0
// Size: 557 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192bba0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar6;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar2 = *arg1;
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      plVar1 = (int64_t *)(this_ptr + 0xb8);
      iVar6 = 0;
      do {
        pVar5 = (void*)param_1;
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d4efa0();
        lVar3 = g_026d83f8;
        if (g_026d83f8 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        local_38 = 0;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_38 = '\x01';
        local_40 = local_68;
        param_1 = 0x20;
        FUN_00e8b850(0x20,&local_40);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}



// ============================================================
// 01928f30
// ============================================================
// Function: FUN_01928f30
// Address: 01928f30
// Size: 509 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_01928f30(void)

{
  byte bVar1;
  int iVar2;
  int64_t *this_ptr;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  int64_t local_50;
  char local_48;
  
  (**(code **)(*this_ptr + 0x3f8))();
  lVar3 = local_50;
  if (local_50 == 0) {
    bVar1 = 1;
    lVar3 = 0;
    bVar4 = false;
  }
  else if (local_48 == '\0') {
    FUN_00d50b00();
    bVar1 = 0;
    bVar4 = true;
  }
  else {
    bVar1 = 0;
    bVar4 = true;
  }
  iVar2 = *(int *)(lVar3 + 0xc);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      if (*(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar6 * 8) != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        iVar2 = *(int *)(lVar3 + 0xc);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar2);
  }
  FUN_01a13090();
  (**(code **)(*this_ptr + 0x3f8))();
  if (local_50 == lVar3) {
    if ((bool)(bVar1 & local_50 != 0)) {
      bVar5 = true;
      if (local_48 != '\0') goto LAB_019290cf;
      bVar4 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_48 != '\0') {
      bVar5 = true;
      lVar3 = local_50;
      if (bVar4) {
        FUN_00d50b20();
      }
      goto LAB_019290cf;
    }
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    bVar5 = true;
    lVar3 = local_50;
    if (!bVar4) goto LAB_019290cf;
    FUN_00d50b20();
    bVar4 = true;
  }
  bVar5 = bVar4;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_019290cf:
  iVar2 = *(int *)(lVar3 + 0xc);
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      if (*(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar6 * 8) != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        iVar2 = *(int *)(lVar3 + 0xc);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar2);
  }
  if (bVar5) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0192fde0
// ============================================================
// Function: FUN_0192fde0
// Address: 0192fde0
// Size: 1467 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
//   "handleReseparateElementsAtAttacks"
//   "handleConvertNonAdjacentElementsToAdjacentSequence"
//   "handleCreateAttackItemAndSplit"
//   "handleToggleRenderStyle"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192fde0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b0b38 = "handleConvertNonAdjacentElementsToAdjacentSequence";
      g_028b0b40 = &g_02714a30;
      g_028b0b48 = 0;
      g_028b0b50 = &g_027e0948;
      g_028b0b58 = FUN_01954a30;
      g_028b0b60 = &UNK_00001801;
      g_028b0b68 = 0;
      ram_00000000028b0b70 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b0b80 = "handleCreateAttackItemAndSplit";
      g_028b0b88 = &g_02714a30;
      g_028b0b90 = 0;
      g_028b0b98 = &g_027e0948;
      g_028b0ba0 = FUN_01954a30;
      g_028b0ba8 = &UNK_00001809;
      g_028b0bb0 = 0;
      ram_00000000028b0bb8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b0bc8 = "handleToggleRenderStyle";
      g_028b0bd0 = &g_02714a30;
      g_028b0bd8 = 0;
      g_028b0be0 = &g_027e0948;
      g_028b0be8 = FUN_01954a30;
      g_028b0bf0 = &UNK_00001811;
      g_028b0bf8 = 0;
      ram_00000000028b0c00 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b0c10 = "handleReseparateElementsAtAttacks";
      g_028b0c18 = &g_02714a30;
      g_028b0c20 = 0;
      g_028b0c28 = &g_027e0948;
      g_028b0c30 = FUN_01954a30;
      g_028b0c38 = &UNK_000017f9;
      g_028b0c40 = 0;
      ram_00000000028b0c48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 0192c7a0
// ============================================================
// Function: FUN_0192c7a0
// Address: 0192c7a0
// Size: 514 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_0192c7a0(void* param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  uint32_t uVar4;
  int64_t local_80;
  char local_78;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  if (param_2 != 0) {
    uVar4 = FUN_01caeac0();
    FUN_0192b8f0();
    if (local_78 == '\0') {
      if (local_80 == 0) {
        return 1;
      }
      FUN_00d50b00();
    }
    else if (local_80 == 0) {
      return 1;
    }
    if (0 < *(int *)(local_80 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        if (local_58 == 0) {
          cVar1 = '\0';
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01334f30();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266020(uVar4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_80 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 0192bf20
// ============================================================
// Function: FUN_0192bf20
// Address: 0192bf20
// Size: 552 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192bf20(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar5;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  
  lVar2 = *arg1;
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      plVar1 = (int64_t *)(this_ptr + 0xb8);
      iVar5 = 0;
      do {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d4efa0();
        lVar3 = g_026d83f8;
        if (g_026d83f8 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00e8b9a0();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}



// ============================================================
// 005ac4f0
// ============================================================
// Function: FUN_005ac4f0
// Address: 005ac4f0
// Size: 550 bytes
// Class: MUDetectionEditorView
// String references:
//   "MUDetectionEditorView"
//   "MUDetectionEditorRenderStyle"
//   "_renderStyle"
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void* FUN_005ac4f0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027179d0 = "_renderStyle";
      g_027179d8 = &g_02714a30;
      g_027179e0 = 0;
      g_027179e8 = 0x6500;
      g_027179f0 = "MUDetectionEditorRenderStyle";
      g_027179f8 = &g_02717a50;
      g_02717a00 = 0;
      ram_0000000002717a08 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027179d0;
}

