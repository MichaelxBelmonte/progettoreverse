// Function: FUN_01393860
// Address: 01393860
// Size: 1296 bytes
// Class: MUAudioFileSource
// String references:
//   "%@-%@"
//   "%@%@%@_"

uint64_t FUN_01393860(void* param_1)

{
  bool bVar1;
  void*puVar2;
  void*puVar3;
  void*puVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  void*puVar9;
  void*puVar10;
  int64_t arg1;
  uint64_t this_ptr;
  int64_t local_e8;
  int64_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  puVar10 = g_027bf428;
  plVar8 = *(int64_t **)(arg1 + 0x38);
  if (plVar8 == (int64_t *)0x0) {
    if (g_027bf428 != (void*)0x0) {
      FUN_00d50b00();
    }
LAB_0139390f:
    local_78 = '\0';
  }
  else {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      plVar8 = *(int64_t **)(arg1 + 0x38);
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar8 + 0x3a8))();
    puVar10 = local_80;
    if (local_78 != '\0') goto LAB_0139390f;
    if (local_80 == (void*)0x0) {
      puVar10 = (void*)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d9bb60();
  puVar2 = local_80;
  if ((((local_78 == '\0') && (local_80 != (void*)0x0)) && (FUN_00d50b00(), local_78 != '\0')
      ) && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d93140();
  FUN_00d93100();
  FUN_00d93180();
  local_e8 = local_d8;
  local_e0 = local_c8;
  FUN_002bd7b0(&local_e0,&local_e8,3);
  FUN_00d8cb40();
  puVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (void*)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = (void*)&g_025df260;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_80 = (void*)&g_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &g_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar10 != (void*)0x0) {
    local_b0 = (int64_t)puVar3;
    local_a8 = '\0';
    FUN_00d8ede0();
    local_90 = (int64_t)local_40;
    local_88 = 0;
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = '\x01';
    FUN_00d997b0(&local_90,&local_b0);
    puVar9 = local_80;
    puVar4 = puVar10;
    if (puVar10 == local_80) {
joined_r0x01393b58:
      puVar9 = puVar4;
      if ((local_78 != '\0') && (puVar10 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_78 == '\0') {
        if (local_80 != (void*)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        puVar4 = puVar9;
        puVar10 = local_80;
        goto joined_r0x01393b58;
      }
      FUN_00d50b20();
      local_78 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    puVar10 = puVar9;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  bVar1 = true;
  if (puVar10 == (void*)0x0) {
LAB_01393c66:
    puVar10 = (void*)0x0;
    if (g_027294c0 == (void*)0x0) goto LAB_01393c97;
LAB_01393c74:
    puVar9 = g_027294c0;
    FUN_00d50b00();
    if (puVar10 == puVar9) {
      FUN_00d50b20();
      puVar9 = puVar10;
      goto LAB_01393cb7;
    }
    if (bVar1) goto LAB_01393cb7;
  }
  else {
    iVar5 = FUN_00d8c7a0();
    if (0x20 < iVar5) {
      FUN_00d97ce0();
      if (local_80 == puVar10) {
LAB_01393c3d:
        if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        puVar10 = local_80;
        if (local_78 == '\0') {
          if (local_80 != (void*)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          goto LAB_01393c3d;
        }
        FUN_00d50b20();
      }
      if (puVar10 == (void*)0x0) goto LAB_01393c66;
    }
    iVar5 = FUN_00d8c7a0();
    puVar9 = puVar10;
    if (iVar5 != 0) goto LAB_01393cb7;
    bVar1 = false;
    if (g_027294c0 != (void*)0x0) goto LAB_01393c74;
LAB_01393c97:
    puVar9 = g_027294c0;
    if ((bool)(puVar10 == g_027294c0 | bVar1)) goto LAB_01393cb7;
  }
  FUN_00d50b20();
LAB_01393cb7:
  local_a0 = puVar2;
  local_40 = puVar9;
  FUN_00083ea0(2,&local_a0);
  FUN_00d8cb40();
  local_80 = (void*)&g_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &g_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

