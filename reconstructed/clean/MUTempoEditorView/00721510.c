// Function: FUN_00721510
// Address: 00721510
// Size: 1941 bytes
// Class: MUTempoEditorView
// String references:
//   "%@.%@"
//   "%@%@"
//   "%@"
// === MUTempoEditorView properties ===
//   MUTimelineToolMode _toolMode
//   MUTempoEditMode _tempoEditMode
//   MUEditTimelineMode _editTimelineMode


void FUN_00721510(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  int64_t *local_88;
  int64_t local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint32_t local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (((int64_t *)*arg1 == (int64_t *)0x0) ||
     (cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x398))(), cVar5 == '\0')) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  plVar10 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_b8 = plVar10;
  (**(code **)(*(int64_t *)*arg1 + 0x380))();
  local_78 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
  local_90 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  local_88 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar10 == (int64_t *)0x0) || (iVar6 = FUN_00d8c7a0(), lVar11 = g_02728a40, iVar6 < 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_00721c56;
  }
  if (g_02728a40 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar11;
  local_108 = '\0';
  cVar5 = FUN_00d90eb0();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    lVar1 = *arg1;
    if ((char)arg1[1] == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(arg1 + 1) = 0;
    }
  }
  else {
    local_80 = lVar11;
    iVar6 = FUN_00d8c7a0();
    uVar7 = FUN_00d8c7a0();
    iVar6 = iVar6 + ~uVar7;
    if (-1 < iVar6) {
      do {
        FUN_00d8c7a0();
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        local_100 = local_80;
        local_f8 = '\0';
        cVar5 = (**(code **)(*local_60 + 0x50))();
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar11 = local_80;
        plVar10 = local_b8;
        if (cVar5 != '\0') {
          iVar8 = FUN_00d8c7a0();
          iVar6 = iVar8 + iVar6;
          goto LAB_00721820;
        }
        bVar2 = 0 < iVar6;
        iVar6 = iVar6 + -1;
      } while (bVar2);
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    lVar11 = local_80;
  }
  goto LAB_00721c49;
  while( true ) {
    cVar5 = FUN_00d8ca70();
    iVar6 = iVar8 + 1;
    if ('9' < cVar5) break;
LAB_00721820:
    iVar8 = iVar6;
    iVar6 = FUN_00d8c7a0();
    if ((iVar6 <= iVar8) || (cVar5 = FUN_00d8ca70(), cVar5 < '0')) break;
  }
  FUN_00d97ce0();
  plVar3 = local_60;
  if (((char)local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar6 = FUN_00d8c7a0();
  plVar9 = plVar3;
  if (iVar8 < iVar6) {
    FUN_00d8f140();
    local_d0 = plVar3;
    local_118 = local_c8;
    FUN_00083ea0(2,&local_118);
    FUN_00d94e10();
    plVar9 = local_70;
    plVar4 = plVar3;
    if (plVar3 == local_70) {
LAB_00721940:
      plVar9 = plVar4;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar4 = plVar9;
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00721940;
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_68 = '\0';
    }
    local_60 = (int64_t *)&g_0253d630;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_78 == (int64_t *)0x0) || (iVar6 = FUN_00d8c7a0(), iVar6 < 1)) {
    local_58 = 1;
    local_60 = &g_024c5048;
    local_48 = 0;
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = plVar9;
    FUN_00d8cb40();
    local_a0 = local_70;
    local_98 = 0;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_98 = '\x01';
    local_e0 = local_88;
    local_d8 = '\0';
    (**(code **)(*local_90 + 0x4f8))(&local_e0,&local_a0);
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_d0 = local_78;
    FUN_00083ea0(2,&local_d0);
    FUN_00d8cb40();
    local_b0 = local_70;
    local_a8 = 0;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_a8 = '\x01';
    local_f0 = local_88;
    local_e8 = '\0';
    (**(code **)(*local_90 + 0x4f8))(&local_f0,&local_b0);
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_60 = (int64_t *)&g_0253d630;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00721c49:
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
LAB_00721c56:
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

