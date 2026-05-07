// Function: FUN_01553290
// Address: 01553290
// Size: 1225 bytes
// Class: MUVoiceMapperVoiceOption
// === MUVoiceMapperVoiceOption properties ===
//                   _transpositionInterval
//                   _totalPitchDelta
//                   _totalMoveDelta
//                   _totalPitchCount
//                   _totalMoveCount
//                   _resetOnly


void FUN_01553290(int64_t *param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  void*puVar5;
  int64_t *plVar6;
  void*this_ptr;
  bool bVar7;
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
  
  if ((g_028ad180 == (void*)0x0) || (g_028ad189 == '\0')) {
    FUN_00e8cb50();
    if (g_028ad180 == (void*)0x0) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_02572358;
      (*g_02572370)();
      if (g_028ad180 == puVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar7 = g_028ad180 != (void*)0x0;
        g_028ad180 = puVar5;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (g_028ad188 == '\0') {
        g_028ad188 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f60;
      if (g_027c6f60 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0277cf70;
      if (g_0277cf70 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f68;
      if (g_027c6f68 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027815c0;
      if (g_027815c0 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f70;
      if (g_027c6f70 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_02775668;
      if (g_02775668 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027c6f78;
      if (g_027c6f78 != 0) {
        FUN_00d50b00();
      }
      local_40 = (int64_t *)lVar3;
      local_38 = '\0';
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028ad189 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ad189 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00c7e7b0();
  lVar3 = local_50;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_40 = (int64_t *)lVar3;
  local_38 = '\0';
  cVar4 = FUN_00d23d70();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    lVar3 = g_027c6f80;
    local_60 = *param_2;
    local_58 = '\0';
    if (g_027c6f80 != 0) {
      FUN_00d50b00();
    }
    local_40 = (int64_t *)lVar3;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    local_40 = plVar6;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    local_80 = *param_2;
    local_78 = '\0';
    local_70 = *param_1;
    local_68 = '\0';
    FUN_00dacb30(&local_70,&local_80);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

