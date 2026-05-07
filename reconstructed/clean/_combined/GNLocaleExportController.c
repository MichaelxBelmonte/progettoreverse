// ===================================================================
// GNLocaleExportController — Complete reconstructed pseudocode
// 6 functions
// ===================================================================

// Registered properties (8):
//                   _destDir
//                   _oldDir
//                   _oldDir2
//                   _destResourceDir
//                   _oldResourceDir2
//                   _oldResourceDir
//                   _buildFromScratch
//                   _removeUnsedKeys


// ============================================================
// 01f6fa60
// ============================================================
// Function: FUN_01f6fa60
// Address: 01f6fa60
// Size: 2104 bytes
// Class: GNLocaleExportController
// === GNLocaleExportController properties ===
//                   _destDir
//                   _oldDir
//                   _oldDir2
//                   _destResourceDir
//                   _oldResourceDir2
//                   _oldResourceDir
//                   _buildFromScratch
//                   _removeUnsedKeys


void FUN_01f6fa60(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  undefined7 uVar7;
  undefined7 extraout_var;
  int64_t lVar6;
  int64_t this_ptr;
  undefined7 uVar9;
  uint64_t uVar8;
  byte bVar10;
  int64_t lVar11;
  bool bVar12;
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
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  int64_t local_40;
  char local_38;
  
  local_48 = 0;
  FUN_01e534b0();
  *(void*)(this_ptr + 0xa0) = 0;
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    *(void*)(this_ptr + 0x70) = 0;
    local_48 = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    *(void*)(this_ptr + 0x78) = 0;
    local_48 = 0;
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_118 = g_02800c50;
  if (g_02800c50 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_108 = 0;
  local_100 = '\0';
  uVar5 = FUN_00d710b0(&local_108,&local_118);
  lVar11 = local_40;
  if (local_40 == 0) {
    bVar10 = 1;
    lVar11 = 0;
    local_48 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar5 = FUN_00d50b00();
      local_48 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      bVar10 = 0;
      if ((local_38 == '\0') || (bVar10 = 0, local_40 == 0)) goto LAB_01f6fb7f;
      uVar5 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_48 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    bVar10 = 0;
  }
LAB_01f6fb7f:
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar11 != 0) && (iVar4 = FUN_00d8c7a0(), 0 < iVar4)) {
    local_f0 = '\0';
    local_f8 = lVar11;
    FUN_00cddf30();
    lVar1 = *(int64_t *)(this_ptr + 0x70);
    lVar6 = lVar1;
    if (lVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar6 = 0;
          goto LAB_01f6fc1b;
        }
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x70);
        *(int64_t *)(this_ptr + 0x70) = local_40;
        lVar6 = local_40;
      }
      else {
        local_38 = '\0';
        lVar6 = local_40;
LAB_01f6fc1b:
        *(int64_t *)(this_ptr + 0x70) = lVar6;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar6 = local_40;
      }
    }
    if ((local_38 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (((*(int64_t **)(this_ptr + 0x70) != (int64_t *)0x0) &&
        (cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x3a0))(), cVar3 == '\0')) &&
       (*(int64_t *)(this_ptr + 0x70) != 0)) {
      *(void*)(this_ptr + 0x70) = 0;
      FUN_00d50b20();
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0x88);
  if (*(int64_t **)(this_ptr + 0x70) == (int64_t *)0x0) {
    FUN_00d8ede0();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x470))();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  if (*(int64_t **)(this_ptr + 0x78) == (int64_t *)0x0) {
    FUN_00d8ede0();
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x470))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d6f370();
  lVar1 = local_98;
  local_e8 = g_02800c58;
  if (g_02800c58 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  uVar5 = FUN_00d710b0(&local_d8,&local_e8);
  lVar6 = local_40;
  uVar7 = (undefined7)((uint64_t)uVar5 >> 8);
  uVar9 = (undefined7)((uint64_t)lVar1 >> 8);
  if (local_40 == lVar11) {
    lVar6 = lVar11;
    if ((bool)(bVar10 & local_40 != 0)) {
      if (local_38 != '\0') goto LAB_01f6ff51;
      uVar8 = CONCAT71(uVar9,1);
      FUN_00d50b00();
    }
    else {
      uVar8 = local_48 & 0xffffffff;
    }
LAB_01f6ffb3:
    lVar11 = lVar6;
    if ((local_38 == '\0') || (local_40 == 0)) {
      local_48 = uVar8 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      local_48 = uVar8 & 0xffffffff;
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      uVar8 = CONCAT71(uVar9,1);
      if (((byte)local_48 & lVar11 != 0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_01f6ffb3;
    }
    bVar12 = lVar11 != 0;
    lVar11 = lVar6;
    if (((byte)local_48 & bVar12) == 1) {
      FUN_00d50b20();
      uVar7 = extraout_var;
    }
LAB_01f6ff51:
    local_38 = '\0';
    local_48 = CONCAT71(uVar7,1);
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar11 == 0) || (iVar4 = FUN_00d8c7a0(), iVar4 < 1)) goto LAB_01f70138;
  local_c0 = '\0';
  local_c8 = lVar11;
  FUN_00cddf30();
  lVar1 = *(int64_t *)(this_ptr + 0x80);
  lVar6 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_01f70075;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x80);
      *(int64_t *)(this_ptr + 0x80) = local_40;
      lVar6 = local_40;
    }
    else {
      local_38 = '\0';
      lVar6 = local_40;
LAB_01f70075:
      *(int64_t *)(this_ptr + 0x80) = lVar6;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (((*(int64_t **)(this_ptr + 0x80) != (int64_t *)0x0) &&
      (cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x3a0))(), cVar3 == '\0')) &&
     (*(int64_t *)(this_ptr + 0x80) != 0)) {
    *(void*)(this_ptr + 0x80) = 0;
    FUN_00d50b20();
  }
LAB_01f70138:
  plVar2 = *(int64_t **)(this_ptr + 0x90);
  if (*(int64_t **)(this_ptr + 0x80) == (int64_t *)0x0) {
    FUN_00d8ede0();
    local_a8 = local_40;
    local_a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a0 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x470))();
    local_b8 = local_40;
    local_b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_48 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01f70830
// ============================================================
// Function: FUN_01f70830
// Address: 01f70830
// Size: 1305 bytes
// Class: GNLocaleExportController
// === GNLocaleExportController properties ===
//                   _destDir
//                   _oldDir
//                   _oldDir2
//                   _destResourceDir
//                   _oldResourceDir2
//                   _oldResourceDir
//                   _buildFromScratch
//                   _removeUnsedKeys


uint64_t FUN_01f70830(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t this_ptr;
  int64_t lVar5;
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
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  int64_t local_38;
  char local_30 [8];
  
  if (param_2 != 0) {
    FUN_01f27fe0();
    local_90 = 0;
    local_98 = *(int64_t *)(this_ptr + 0x70);
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    local_c8 = 0;
    local_c0 = '\0';
    FUN_01f2a980(&local_d8,&local_98,1,0);
    lVar2 = local_38;
    if (local_30[0] == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_30[0] != '\0')) && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30[0] = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0xc) != 1)) {
      if (*(int64_t *)(this_ptr + 0x70) != 0) {
        *(void*)(this_ptr + 0x70) = 0;
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d23310();
      lVar3 = local_38;
      pcVar4 = local_30;
      if (local_30[0] == '\0') {
        pcVar4 = &local_48;
      }
      local_48 = local_30[0];
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = *(int64_t *)(this_ptr + 0x70);
      if (lVar5 == lVar3) {
        if ((local_48 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (lVar3 != 0) {
            FUN_00d50b00();
            lVar5 = *(int64_t *)(this_ptr + 0x70);
          }
        }
        else {
          local_48 = '\0';
        }
        *(int64_t *)(this_ptr + 0x70) = lVar3;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    plVar1 = *(int64_t **)(this_ptr + 0x88);
    if (*(int64_t **)(this_ptr + 0x70) == (int64_t *)0x0) {
      FUN_00d8ede0();
      local_78 = local_38;
      local_70 = 0;
      if (local_30[0] == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30[0] = '\0';
      }
      local_70 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x470))();
      local_88 = local_38;
      local_80 = 0;
      if (local_30[0] == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30[0] = '\0';
      }
      local_80 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x70) == 0) {
      FUN_00d6f370();
      FUN_00d8ede0();
      local_50 = 0;
      local_58 = CONCAT71(uStack_47,local_48);
      local_a8 = g_02800c50;
      if (local_40 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          local_a8 = g_02800c50;
        }
      }
      else {
        local_40 = '\0';
      }
      local_50 = '\x01';
      g_02800c50 = local_a8;
      if (local_a8 != 0) {
        local_50 = '\x01';
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      FUN_00d6f570();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d6f370();
      (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x368))();
      local_60 = 0;
      local_68 = CONCAT71(uStack_47,local_48);
      local_b8 = g_02800c50;
      if (local_40 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
          local_b8 = g_02800c50;
        }
      }
      else {
        local_40 = '\0';
      }
      local_60 = '\x01';
      g_02800c50 = local_b8;
      if (local_b8 != 0) {
        local_60 = '\x01';
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_00d6f570();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d6f370();
    FUN_00d71400();
    if ((local_30[0] != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 01f71650
// ============================================================
// Function: FUN_01f71650
// Address: 01f71650
// Size: 1332 bytes
// Class: GNLocaleExportController
// === GNLocaleExportController properties ===
//                   _destDir
//                   _oldDir
//                   _oldDir2
//                   _destResourceDir
//                   _oldResourceDir2
//                   _oldResourceDir
//                   _buildFromScratch
//                   _removeUnsedKeys


uint64_t FUN_01f71650(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char *pcVar4;
  int64_t this_ptr;
  int64_t lVar5;
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
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  int64_t local_38;
  char local_30 [8];
  
  if (param_2 != 0) {
    FUN_01f27fe0();
    local_90 = 0;
    local_98 = *(int64_t *)(this_ptr + 0x80);
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    local_c8 = 0;
    local_c0 = '\0';
    FUN_01f2a980(&local_d8,&local_98,1,0);
    lVar2 = local_38;
    if (local_30[0] == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_30[0] != '\0')) && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30[0] = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      FUN_00d50b20();
    }
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0xc) != 1)) {
      if (*(int64_t *)(this_ptr + 0x80) != 0) {
        *(void*)(this_ptr + 0x80) = 0;
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d23310();
      lVar3 = local_38;
      pcVar4 = local_30;
      if (local_30[0] == '\0') {
        pcVar4 = &local_48;
      }
      local_48 = local_30[0];
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = *(int64_t *)(this_ptr + 0x80);
      if (lVar5 == lVar3) {
        if ((local_48 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (lVar3 != 0) {
            FUN_00d50b00();
            lVar5 = *(int64_t *)(this_ptr + 0x80);
          }
        }
        else {
          local_48 = '\0';
        }
        *(int64_t *)(this_ptr + 0x80) = lVar3;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
    }
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    if (*(int64_t **)(this_ptr + 0x80) == (int64_t *)0x0) {
      FUN_00d8ede0();
      local_78 = local_38;
      local_70 = 0;
      if (local_30[0] == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30[0] = '\0';
      }
      local_70 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x470))();
      local_88 = local_38;
      local_80 = 0;
      if (local_30[0] == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30[0] = '\0';
      }
      local_80 = '\x01';
      (**(code **)(*plVar1 + 0x968))();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x80) == 0) {
      FUN_00d6f370();
      FUN_00d8ede0();
      local_50 = 0;
      local_58 = CONCAT71(uStack_47,local_48);
      local_a8 = g_02800c50;
      if (local_40 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          local_a8 = g_02800c50;
        }
      }
      else {
        local_40 = '\0';
      }
      local_50 = '\x01';
      g_02800c50 = local_a8;
      if (local_a8 != 0) {
        local_50 = '\x01';
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      FUN_00d6f570();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d6f370();
      (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x368))();
      local_60 = 0;
      local_68 = CONCAT71(uStack_47,local_48);
      local_b8 = g_02800c58;
      if (local_40 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
          local_b8 = g_02800c58;
        }
      }
      else {
        local_40 = '\0';
      }
      local_60 = '\x01';
      g_02800c58 = local_b8;
      if (local_b8 != 0) {
        local_60 = '\x01';
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_00d6f570();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
        FUN_00d50b20();
      }
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d6f370();
    FUN_00d71400();
    if ((local_30[0] != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 01f711a0
// ============================================================
// Function: FUN_01f711a0
// Address: 01f711a0
// Size: 726 bytes
// Class: GNLocaleExportController
// === GNLocaleExportController properties ===
//                   _destDir
//                   _oldDir
//                   _oldDir2
//                   _destResourceDir
//                   _oldResourceDir2
//                   _oldResourceDir
//                   _buildFromScratch
//                   _removeUnsedKeys


uint64_t FUN_01f711a0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30 [8];
  
  if (param_2 != 0) {
    FUN_01f27fe0();
    local_60 = 0;
    local_68 = *(int64_t *)(this_ptr + 0x78);
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_98 = 0;
    local_90 = '\0';
    local_88 = 0;
    local_80 = '\0';
    FUN_01f2a980(&local_98,&local_68,1,0);
    lVar2 = local_38;
    if (local_30[0] == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_30[0] != '\0')) && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30[0] = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0xc) == 1) {
        FUN_00d23310();
        lVar2 = local_38;
        pcVar3 = local_30;
        if (local_30[0] == '\0') {
          pcVar3 = &local_78;
        }
        local_78 = local_30[0];
        *pcVar3 = '\0';
        if ((local_30[0] != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = *(int64_t *)(this_ptr + 0x78);
        if (lVar4 == lVar2) {
          if ((local_78 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_78 == '\0') {
            if (lVar2 != 0) {
              FUN_00d50b00();
              lVar4 = *(int64_t *)(this_ptr + 0x78);
            }
          }
          else {
            local_78 = '\0';
          }
          *(int64_t *)(this_ptr + 0x78) = lVar2;
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        plVar1 = *(int64_t **)(this_ptr + 0x98);
        if (*(int64_t **)(this_ptr + 0x78) == (int64_t *)0x0) {
          FUN_00d8ede0();
          local_48 = local_38;
          local_40 = 0;
          if (local_30[0] == '\0') {
            if (local_38 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_30[0] = '\0';
          }
          local_40 = '\x01';
          (**(code **)(*plVar1 + 0x968))();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_30[0] != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x470))();
          local_58 = local_38;
          local_50 = 0;
          if (local_30[0] == '\0') {
            if (local_38 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_30[0] = '\0';
          }
          local_50 = '\x01';
          (**(code **)(*plVar1 + 0x968))();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_30[0] != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 01f6f220
// ============================================================
// Function: FUN_01f6f220
// Address: 01f6f220
// Size: 2057 bytes
// Class: GNLocaleExportController
// String references:
//   "GNLocaleExportController"
//   "handleSetDestResourceDir"
//   "handleSetOldResourceDir"
//   "handleSetOldResourceDir2"
//   "handleSetBuildFromScratch"
//   "handleSetRemoveUnsedKeys"
//   "handleRunExport"
// === GNLocaleExportController properties ===
//                   _destDir
//                   _oldDir
//                   _oldDir2
//                   _destResourceDir
//                   _oldResourceDir2
//                   _oldResourceDir
//                   _buildFromScratch
//                   _removeUnsedKeys


void FUN_01f6f220(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028badf8 = "handleSetDestResourceDir";
      g_028bae00 = &g_027f8088;
      g_028bae08 = 0;
      g_028bae10 = &g_02800c88;
      g_028bae18 = FUN_01f79c60;
      g_028bae20 = FUN_01f70830;
      g_028bae28 = 0;
      ram_00000000028bae30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028bae40 = "handleSetOldResourceDir";
      g_028bae48 = &g_027f8088;
      g_028bae50 = 0;
      g_028bae58 = &g_02800c88;
      g_028bae60 = FUN_01f79c60;
      g_028bae68 = FUN_01f711a0;
      g_028bae70 = 0;
      ram_00000000028bae78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028bae88 = "handleSetOldResourceDir2";
      g_028bae90 = &g_027f8088;
      g_028bae98 = 0;
      g_028baea0 = &g_02800c88;
      g_028baea8 = FUN_01f79c60;
      g_028baeb0 = FUN_01f71650;
      g_028baeb8 = 0;
      ram_00000000028baec0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028baed0 = "handleSetBuildFromScratch";
      g_028baed8 = &g_027f8088;
      g_028baee0 = 0;
      g_028baee8 = &g_02800c88;
      g_028baef0 = FUN_01f79c60;
      g_028baef8 = FUN_01f72000;
      g_028baf00 = 0;
      ram_00000000028baf08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028baf18 = "handleSetRemoveUnsedKeys";
      g_028baf20 = &g_027f8088;
      g_028baf28 = 0;
      g_028baf30 = &g_02800c88;
      g_028baf38 = FUN_01f79c60;
      g_028baf40 = FUN_01f71fd0;
      g_028baf48 = 0;
      ram_00000000028baf50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028baf60 = "handleRunExport";
      g_028baf68 = &g_027f8088;
      g_028baf70 = 0;
      g_028baf78 = &g_02800c88;
      g_028baf80 = FUN_01f79c60;
      g_028baf88 = FUN_01f72030;
      g_028baf90 = 0;
      ram_00000000028baf98 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 01e85f80
// ============================================================
// Function: FUN_01e85f80
// Address: 01e85f80
// Size: 632 bytes
// Class: GNLocaleExportController
// String references:
//   "GNLocaleExportController"
// === GNLocaleExportController properties ===
//                   _destDir
//                   _oldDir
//                   _oldDir2
//                   _destResourceDir
//                   _oldResourceDir2
//                   _oldResourceDir
//                   _buildFromScratch
//                   _removeUnsedKeys


void FUN_01e85f80(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_026bf360;
  FUN_01e862d0();
  FUN_01e86550();
  FUN_01e867d0();
  FUN_01e86a50();
  FUN_01e86d40();
  FUN_01e87030();
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f8143 == '\0') {
    FUN_01e87320();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xa1) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f8143 == '\0') {
    FUN_01e87490();
    FUN_00e87980();
  }
  return;
}

