// Function: FUN_00326a30
// Address: 00326a30
// Size: 2447 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00326a30(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  undefined7 uVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  bool bVar11;
  int64_t local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
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
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int64_t *local_48;
  char local_40;
  uint32_t local_34;
  
  if (*(int64_t *)(this_ptr + 0x148) == 0) goto LAB_003273a5;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar4 = FUN_00e8b990();
  if (lVar4 == 0) goto LAB_003273a5;
  FUN_00d50b00();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_48 + 0x450))();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    local_58 = lVar4;
    FUN_0032c070();
    FUN_00e86210();
    lVar4 = g_027024f0;
    if (g_027024f0 != 0) {
      FUN_00d50b00();
    }
    uVar5 = FUN_00c841b0();
    plVar9 = local_48;
    if (local_48 == (int64_t *)0x0) {
      local_50 = (int64_t *)CONCAT44(local_50._4_4_,(int)CONCAT71((int7)((uint64_t)uVar5 >> 8),1))
      ;
      local_34 = 0;
    }
    else {
      if (local_40 == '\0') {
        uVar5 = FUN_00d50b00();
        local_50 = (int64_t *)((uint64_t)local_50._4_4_ << 0x20);
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_00326b7d;
        uVar5 = FUN_00d50b20();
      }
      else {
        local_40 = '\0';
      }
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      local_50 = (int64_t *)((uint64_t)local_50 & 0xffffffff00000000);
    }
LAB_00326b7d:
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)(this_ptr + 0x138);
    local_a0 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
    FUN_00d50b00();
    local_a0 = '\x01';
    local_188 = 0;
    local_180 = '\0';
    local_178 = plVar9;
    local_170 = '\0';
    local_a8 = plVar1;
    FUN_00cbadd0(&local_178,&local_188);
    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      (**(code **)(*local_a8 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0032c070();
    FUN_00e86210();
    lVar4 = g_027024f8;
    if (g_027024f8 != 0) {
      FUN_00d50b00();
    }
    local_168 = lVar4;
    local_160 = '\x01';
    uVar5 = FUN_00c841b0();
    plVar10 = local_48;
    uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
    uVar7 = (undefined7)((uint64_t)lVar4 >> 8);
    if (plVar9 == local_48) {
      uVar8 = local_34;
      if (((byte)local_50 & plVar9 != (int64_t *)0x0) == 1) {
        if (local_40 != '\0') goto LAB_00326ce7;
        FUN_00d50b00();
        uVar8 = (int)CONCAT71(uVar7,1);
      }
LAB_00326d3e:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar11 = plVar9 != (int64_t *)0x0;
        uVar8 = (uint32_t)CONCAT71(uVar7,1);
        plVar9 = plVar10;
        if (((byte)local_34 & bVar11) == 1) {
          FUN_00d50b20();
        }
        goto LAB_00326d3e;
      }
      bVar11 = plVar9 != (int64_t *)0x0;
      plVar9 = plVar10;
      if (((byte)local_34 & bVar11) == 1) {
        FUN_00d50b20();
        uVar6 = extraout_var;
      }
LAB_00326ce7:
      local_40 = '\0';
      uVar8 = (int)CONCAT71(uVar6,1);
    }
    local_34 = uVar8;
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    local_90 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_90 = '\x01';
    local_158 = 0;
    local_150 = '\0';
    local_140 = '\0';
    local_148 = plVar9;
    local_98 = plVar1;
    FUN_00cbadd0(&local_148,&local_158);
    if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      (**(code **)(*local_98 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0032c070();
    FUN_00e86210();
    lVar4 = g_02702500;
    if (g_02702500 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar4;
    local_130 = '\x01';
    uVar5 = FUN_00c841b0();
    plVar10 = local_48;
    uVar6 = (undefined7)((uint64_t)lVar4 >> 8);
    if (plVar9 == local_48) {
      plVar10 = plVar9;
      uVar8 = local_34;
      if (((char)local_34 == '\0') && (plVar9 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_00326eb5;
        FUN_00d50b00();
        uVar8 = (int)CONCAT71(uVar6,1);
      }
LAB_00326f25:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar8 = (uint32_t)CONCAT71(uVar6,1);
        if (((char)local_34 != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00326f25;
      }
      if (((char)local_34 != '\0') && (plVar9 != (int64_t *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
LAB_00326eb5:
      local_40 = '\0';
      uVar8 = (int)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    }
    local_34 = uVar8;
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    local_80 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_80 = '\x01';
    local_128 = 0;
    local_120 = '\0';
    local_110 = '\0';
    local_118 = plVar10;
    local_88 = plVar1;
    FUN_00cbadd0(&local_118,&local_128);
    if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      (**(code **)(*local_88 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0032c070();
    uVar5 = FUN_00e86210();
    local_108 = g_02702508;
    if (g_02702508 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    FUN_00c841b0();
    uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
    if (plVar10 == local_48) {
      uVar8 = local_34;
      plVar9 = plVar10;
      if (((char)local_34 == '\0') && (plVar10 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_0032708f;
        FUN_00d50b00();
        uVar8 = (int)CONCAT71(uVar6,1);
      }
LAB_003270f4:
      local_50 = plVar9;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar8 = (uint32_t)CONCAT71(uVar6,1);
        plVar9 = local_50;
        if (((char)local_34 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar9 = local_50;
        }
        goto LAB_003270f4;
      }
      plVar9 = local_50;
      if (((char)local_34 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
        plVar9 = local_50;
      }
LAB_0032708f:
      local_50 = plVar9;
      local_40 = '\0';
      uVar8 = (uint32_t)CONCAT71(uVar6,1);
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    local_70 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_70 = '\x01';
    local_f8 = 0;
    local_f0 = '\0';
    local_e8 = local_50;
    local_e0 = '\0';
    local_78 = plVar1;
    FUN_00cbadd0(&local_e8,&local_f8);
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    FUN_0015e380();
    FUN_00e86210();
    local_d8 = g_02702510;
    if (g_02702510 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    uVar5 = FUN_00c841b0();
    plVar10 = local_48;
    plVar9 = local_50;
    cVar2 = (char)uVar8;
    if (local_50 == local_48) {
      plVar10 = plVar9;
      local_34 = uVar8;
      if ((cVar2 == '\0') && (local_50 != (int64_t *)0x0)) {
        if (local_40 != '\0') goto LAB_00327255;
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        FUN_00d50b00();
      }
LAB_003272af:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if ((cVar2 != '\0') && (plVar9 != (int64_t *)0x0)) {
          uVar5 = FUN_00d50b20();
          local_34 = (int)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
        goto LAB_003272af;
      }
      if ((cVar2 != '\0') && (local_50 != (int64_t *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
LAB_00327255:
      local_40 = '\0';
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    local_60 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_60 = '\x01';
    local_c8 = 0;
    local_c0 = '\0';
    local_b0 = '\0';
    local_b8 = plVar10;
    local_68 = plVar1;
    FUN_00cbadd0(&local_b8,&local_c8);
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if (((char)local_34 != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_003273a5:
  FUN_01a3d730();
  return;
}

