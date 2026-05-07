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

