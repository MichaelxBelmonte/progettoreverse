// Function: FUN_00327aa0
// Address: 00327aa0
// Size: 2462 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00327aa0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  uint64_t uVar4;
  undefined7 extraout_var;
  undefined7 uVar5;
  uint32_t uVar6;
  undefined7 uVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  byte bVar10;
  int64_t *plVar11;
  bool bVar12;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  int64_t *local_48;
  char local_40;
  uint32_t local_38;
  uint32_t local_34;
  
  FUN_01a3ce90();
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 == 0) {
    return;
  }
  FUN_00d50b00();
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_48 + 0x450))();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') goto LAB_00328424;
  local_50 = lVar3;
  FUN_0032c070();
  FUN_00e86210();
  lVar3 = g_027024f0;
  if (g_027024f0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_00c841b0();
  plVar8 = local_48;
  if (local_48 == (int64_t *)0x0) {
    bVar10 = 1;
    local_34 = 0;
  }
  else {
    if (local_40 == '\0') {
      uVar4 = FUN_00d50b00();
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      bVar10 = 0;
      if ((local_40 == '\0') || (bVar10 = 0, local_48 == (int64_t *)0x0)) goto LAB_00327be8;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    bVar10 = 0;
  }
LAB_00327be8:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  local_98 = 0;
  plVar9 = (int64_t *)(this_ptr + 0x138);
  (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_180 = 0;
  local_178 = '\0';
  local_170 = plVar8;
  local_168 = '\0';
  local_a0 = plVar9;
  FUN_00cbad30(&local_170,&local_180,0xa0);
  if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0032c070();
  FUN_00e86210();
  lVar3 = g_027024f8;
  if (g_027024f8 != 0) {
    FUN_00d50b00();
  }
  local_160 = lVar3;
  local_158 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar11 = local_48;
  uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
  uVar7 = (undefined7)((uint64_t)lVar3 >> 8);
  if (plVar8 == local_48) {
    uVar6 = local_34;
    if ((bool)(bVar10 & plVar8 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_00327d5f;
      FUN_00d50b00();
      uVar6 = (int)CONCAT71(uVar7,1);
    }
LAB_00327dbd:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar12 = plVar8 != (int64_t *)0x0;
      uVar6 = (uint32_t)CONCAT71(uVar7,1);
      plVar8 = plVar11;
      if (((byte)local_34 & bVar12) == 1) {
        FUN_00d50b20();
      }
      goto LAB_00327dbd;
    }
    bVar12 = plVar8 != (int64_t *)0x0;
    plVar8 = plVar11;
    if (((byte)local_34 & bVar12) == 1) {
      FUN_00d50b20();
      uVar5 = extraout_var;
    }
LAB_00327d5f:
    local_40 = '\0';
    uVar6 = (int)CONCAT71(uVar5,1);
  }
  local_34 = uVar6;
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  local_88 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_150 = 0;
  local_148 = '\0';
  local_138 = '\0';
  local_140 = plVar8;
  local_90 = plVar9;
  FUN_00cbad30(&local_140,&local_150,0xa0);
  if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0032c070();
  FUN_00e86210();
  lVar3 = g_02702500;
  if (g_02702500 != 0) {
    FUN_00d50b00();
  }
  local_130 = lVar3;
  local_128 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar11 = local_48;
  uVar5 = (undefined7)((uint64_t)lVar3 >> 8);
  if (plVar8 == local_48) {
    plVar11 = plVar8;
    uVar6 = local_34;
    if (((char)local_34 == '\0') && (plVar8 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_00327f30;
      FUN_00d50b00();
      uVar6 = (int)CONCAT71(uVar5,1);
    }
LAB_00327fa0:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar6 = (uint32_t)CONCAT71(uVar5,1);
      if (((char)local_34 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00327fa0;
    }
    if (((char)local_34 != '\0') && (plVar8 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b20();
    }
LAB_00327f30:
    local_40 = '\0';
    uVar6 = (int)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
  }
  local_34 = uVar6;
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  local_78 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  local_108 = '\0';
  local_110 = plVar11;
  local_80 = plVar9;
  FUN_00cbad30(&local_110,&local_120,0xa0);
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0032c070();
  FUN_00e86210();
  local_100 = g_02702508;
  if (g_02702508 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar8 = local_48;
  if (plVar11 == local_48) {
    plVar8 = plVar11;
    if (((char)local_34 == '\0') && (plVar11 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_0032810a;
      local_38 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      FUN_00d50b00();
    }
    else {
      local_38 = local_34;
    }
LAB_00328171:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      if (((char)local_34 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00328171;
    }
    if (((char)local_34 != '\0') && (plVar11 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b20();
    }
LAB_0032810a:
    local_40 = '\0';
    local_38 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  local_d8 = '\0';
  local_e0 = plVar8;
  local_70 = plVar9;
  FUN_00cbad30(&local_e0,&local_f0,0xa0);
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0015e380();
  FUN_00e86210();
  local_d0 = g_02702510;
  if (g_02702510 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  uVar4 = FUN_00c841b0();
  plVar11 = local_48;
  uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
  if (plVar8 == local_48) {
    plVar11 = plVar8;
    if (((char)local_38 == '\0') && (plVar8 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_003282d3;
      local_34 = (uint32_t)CONCAT71(uVar5,1);
      local_38 = 0;
      FUN_00d50b00();
    }
    else {
      local_34 = local_38;
    }
LAB_00328334:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
      local_34 = (uint32_t)CONCAT71(uVar5,1);
      if (((char)local_38 != '\0') && (plVar8 != (int64_t *)0x0)) {
        local_38 = (uint32_t)CONCAT71(uVar5,1);
        uVar4 = FUN_00d50b20();
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      }
      goto LAB_00328334;
    }
    if (((char)local_38 != '\0') && (plVar8 != (int64_t *)0x0)) {
      local_38 = (uint32_t)CONCAT71(uVar5,1);
      uVar4 = FUN_00d50b20();
    }
LAB_003282d3:
    local_40 = '\0';
    local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  local_58 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  local_a8 = '\0';
  local_b0 = plVar11;
  local_60 = plVar9;
  FUN_00cbad30(&local_b0,&local_c0,0xa0);
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  if (((char)local_34 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00328424:
  FUN_00d50b20();
  return;
}

