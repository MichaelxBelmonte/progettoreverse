// ===================================================================
// GNToolBoxTool — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (8):
//                   _cellSize
//                   _sendsNotificationActionsOnOpenAndClose
//                   _showsSelectedTool
//                   _isHighlightingSubTools
//                   _allowedScreenFrame
//                   _toolBoxRect
//                   _subtoolsRect
//                   _contextMenusRect


// ============================================================
// 0199f480
// ============================================================
// Function: FUN_0199f480
// Address: 0199f480
// Size: 5781 bytes
// Class: GNToolBoxTool
// === GNToolBoxTool properties ===
//                   _cellSize
//                   _sendsNotificationActionsOnOpenAndClose
//                   _showsSelectedTool
//                   _isHighlightingSubTools
//                   _allowedScreenFrame
//                   _toolBoxRect
//                   _subtoolsRect
//                   _contextMenusRect


void FUN_0199f480(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void *pvVar4;
  uint64_t uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  void* pVar7;
  int64_t lVar8;
  undefined7 uVar9;
  int iVar10;
  int64_t *this_ptr;
  int64_t lVar11;
  char cVar12;
  uint uVar13;
  uint64_t uVar14;
  uint7 uVar15;
  bool bVar16;
  int64_t local_348;
  char local_340;
  int64_t local_328;
  char local_320;
  int64_t local_318;
  char local_310;
  int64_t local_308;
  char local_300;
  int64_t local_2f8;
  char local_2f0;
  int64_t local_2e8;
  char local_2e0;
  int64_t local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  int64_t local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  uint32_t local_144;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  uint64_t local_70;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  uint local_34;
  
  if (this_ptr[0x3d] != 0) {
    local_58 = '\0';
    local_60 = 0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = this_ptr[0x3d];
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar10 = -local_48._4_4_;
        }
        else {
          iVar10 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar10);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar10 = 0;
        }
        local_48 = CONCAT44(iVar10,(int)local_48);
      }
      lVar3 = (int64_t)(int)local_48;
      iVar10 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar10);
      if (*(int *)(local_50 + 0xc) <= iVar10) break;
      local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_138 = 0;
      (**(code **)(this_ptr[0x28] + 0x10))();
      FUN_00d50b00();
      local_138 = '\x01';
      local_140 = this_ptr + 0x28;
      FUN_00e8b9a0();
      if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
        (**(code **)(*local_140 + 0x10))();
        FUN_00d50b20();
      }
    }
    param_1 = local_50;
    FUN_000be170();
  }
  if (this_ptr[0x3e] != 0) {
    local_58 = '\0';
    local_60 = 0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = this_ptr[0x3e];
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar10 = -local_48._4_4_;
        }
        else {
          iVar10 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar10);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar10 = 0;
        }
        local_48 = CONCAT44(iVar10,(int)local_48);
      }
      lVar3 = (int64_t)(int)local_48;
      iVar10 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar10);
      if (*(int *)(local_50 + 0xc) <= iVar10) break;
      lVar8 = *(int64_t *)(local_50 + 0x10);
      local_60 = *(int64_t *)(lVar8 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar8);
      pVar7 = (void*)lVar8;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_128 = 0;
        (**(code **)(this_ptr[0x28] + 0x10))();
        FUN_00d50b00();
        local_128 = '\x01';
        local_130 = this_ptr + 0x28;
        FUN_00e8b9a0();
        if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
          (**(code **)(*local_130 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    param_1 = local_50;
    FUN_000be170();
  }
  (**(code **)(*this_ptr + 0xa00))();
  if (local_60 == 0) {
    bVar16 = false;
    local_68 = 0;
    local_70 = 0;
  }
  else {
    (**(code **)(*this_ptr + 0xa00))();
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = FUN_00e8b990();
    if (local_68 == 0) {
      local_70 = 0;
      local_68 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_70 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    }
    bVar16 = local_68 != 0;
    if ((local_340 != '\0') && (local_348 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar16) goto LAB_019a0b11;
  FUN_0006e1c0();
  FUN_00e86210();
  lVar3 = g_027e1390;
  if (g_027e1390 != 0) {
    FUN_00d50b00();
  }
  uVar5 = FUN_00c841b0();
  lVar8 = local_60;
  if (local_60 == 0) {
    local_144 = (uint32_t)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
    local_34 = 0;
  }
  else {
    if (local_58 == '\0') {
      uVar5 = FUN_00d50b00();
      local_144 = 0;
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((local_58 == '\0') || (local_60 == 0)) goto LAB_0199f945;
      uVar5 = FUN_00d50b20();
    }
    else {
      local_58 = '\0';
    }
    local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    local_144 = 0;
  }
LAB_0199f945:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  plVar2 = this_ptr + 0x28;
  local_118 = 0;
  (**(code **)(this_ptr[0x28] + 0x10))();
  FUN_00d50b00();
  local_118 = '\x01';
  local_328 = 0;
  local_320 = '\0';
  local_318 = lVar8;
  local_310 = '\0';
  local_120 = plVar2;
  FUN_00cbadd0(&local_318,&local_328);
  if ((local_310 != '\0') && (local_318 != 0)) {
    FUN_00d50b20();
  }
  if ((local_320 != '\0') && (local_328 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
    (**(code **)(*local_120 + 0x10))();
    FUN_00d50b20();
  }
  local_308 = local_68;
  local_300 = '\0';
  FUN_019a1b40();
  if ((local_300 != '\0') && (local_308 != 0)) {
    FUN_00d50b20();
  }
  local_108 = 0;
  plVar1 = (int64_t *)(this_ptr[0xa5] + 0x10);
  if (this_ptr[0xa5] == 0) {
    plVar1 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_110 = plVar1;
  FUN_00cbb340();
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    (**(code **)(*local_110 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0013db50();
  FUN_00e86210();
  lVar3 = g_027e1398;
  if (g_027e1398 != 0) {
    FUN_00d50b00();
  }
  local_2f8 = lVar3;
  local_2f0 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar11 = local_60;
  uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
  uVar9 = (undefined7)((uint64_t)lVar3 >> 8);
  if (lVar8 == local_60) {
    uVar13 = local_34;
    if (((byte)local_144 & lVar8 != 0) == 1) {
      if (local_58 != '\0') goto LAB_0199fb60;
      FUN_00d50b00();
      uVar13 = (uint)CONCAT71(uVar9,1);
    }
LAB_0199fbb7:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      bVar16 = lVar8 != 0;
      uVar13 = (uint)CONCAT71(uVar9,1);
      lVar8 = lVar11;
      if (((byte)local_34 & bVar16) == 1) {
        FUN_00d50b20();
      }
      goto LAB_0199fbb7;
    }
    bVar16 = lVar8 != 0;
    lVar8 = lVar11;
    if (((byte)local_34 & bVar16) == 1) {
      FUN_00d50b20();
      uVar6 = extraout_var;
    }
LAB_0199fb60:
    local_58 = '\0';
    uVar13 = (uint)CONCAT71(uVar6,1);
  }
  local_34 = uVar13;
  if ((local_2f0 != '\0') && (local_2f8 != 0)) {
    FUN_00d50b20();
  }
  local_f8 = 0;
  plVar1 = (int64_t *)(this_ptr[0xa5] + 0x10);
  if (this_ptr[0xa5] == 0) {
    plVar1 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_2e8 = 0;
  local_2e0 = '\0';
  local_2d0 = '\0';
  local_2d8 = lVar8;
  local_100 = plVar1;
  FUN_00cbadd0(&local_2d8,&local_2e8);
  if ((local_2d0 != '\0') && (local_2d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2e0 != '\0') && (local_2e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    (**(code **)(*local_100 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0013db50();
  FUN_00e86210();
  lVar3 = g_027e13a0;
  if (g_027e13a0 != 0) {
    FUN_00d50b00();
  }
  local_2c8 = lVar3;
  local_2c0 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar11 = local_60;
  uVar6 = (undefined7)((uint64_t)lVar3 >> 8);
  if (lVar8 == local_60) {
    lVar11 = lVar8;
    uVar13 = local_34;
    if (((char)local_34 == '\0') && (lVar8 != 0)) {
      if (local_58 != '\0') goto LAB_0199fd41;
      FUN_00d50b00();
      uVar13 = (uint)CONCAT71(uVar6,1);
    }
LAB_0199fdb1:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      uVar13 = (uint)CONCAT71(uVar6,1);
      if (((char)local_34 != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
        lVar8 = lVar11;
      }
      goto LAB_0199fdb1;
    }
    if (((char)local_34 != '\0') && (lVar8 != 0)) {
      uVar5 = FUN_00d50b20();
      lVar8 = lVar11;
    }
LAB_0199fd41:
    local_58 = '\0';
    uVar13 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
  }
  local_34 = uVar13;
  if ((local_2c0 != '\0') && (local_2c8 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = 0;
  plVar1 = (int64_t *)(this_ptr[0xa5] + 0x10);
  if (this_ptr[0xa5] == 0) {
    plVar1 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_2b8 = 0;
  local_2b0 = '\0';
  local_2a0 = '\0';
  local_2a8 = lVar11;
  local_f0 = plVar1;
  FUN_00cbadd0(&local_2a8,&local_2b8);
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b0 != '\0') && (local_2b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    (**(code **)(*local_f0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_011a7c20();
  FUN_00e86210();
  local_298 = g_027e13b0;
  if (g_027e13b0 != 0) {
    FUN_00d50b00();
  }
  local_290 = '\x01';
  FUN_00c841b0();
  lVar3 = local_60;
  uVar6 = (undefined7)((uint64_t)lVar8 >> 8);
  if (lVar11 == local_60) {
    lVar3 = lVar11;
    if (((char)local_34 == '\0') && (lVar11 != 0)) {
      if (local_58 != '\0') goto LAB_0199ff3b;
      uVar14 = CONCAT71(uVar6,1);
      FUN_00d50b00();
    }
    else {
      uVar14 = (uint64_t)local_34;
    }
LAB_0199ff9a:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      uVar14 = CONCAT71(uVar6,1);
      if (((char)local_34 != '\0') && (lVar11 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0199ff9a;
    }
    if (((char)local_34 != '\0') && (lVar11 != 0)) {
      FUN_00d50b20();
    }
LAB_0199ff3b:
    local_58 = '\0';
    uVar14 = CONCAT71(uVar6,1);
  }
  if ((local_290 != '\0') && (local_298 != 0)) {
    FUN_00d50b20();
  }
  local_d8 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_d8 = '\x01';
  local_288 = 0;
  local_280 = '\0';
  local_270 = '\0';
  local_278 = lVar3;
  local_e0 = plVar2;
  FUN_00cbadd0(&local_278,&local_288);
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    (**(code **)(*local_e0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a014c0();
  FUN_00e86210();
  local_268 = g_027e13b8;
  if (g_027e13b8 != 0) {
    FUN_00d50b00();
  }
  local_260 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar8 = local_60;
  cVar12 = (char)uVar14;
  if (lVar3 == local_60) {
    local_34 = (uint)uVar14;
    lVar8 = lVar3;
    if ((cVar12 == '\0') && (lVar3 != 0)) {
      if (local_58 != '\0') goto LAB_019a0104;
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      uVar14 = 0;
      FUN_00d50b00();
    }
LAB_019a015c:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar15 = (uint7)(uVar14 >> 8);
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((cVar12 != '\0') && (lVar3 != 0)) {
        uVar14 = (uint64_t)uVar15 << 8;
        uVar5 = FUN_00d50b20();
        local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      }
      goto LAB_019a015c;
    }
    if ((cVar12 != '\0') && (lVar3 != 0)) {
      uVar14 = (uint64_t)uVar15 << 8;
      uVar5 = FUN_00d50b20();
    }
LAB_019a0104:
    local_58 = '\0';
    local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
  }
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  local_c8 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_c8 = '\x01';
  local_258 = 0;
  local_250 = '\0';
  local_240 = '\0';
  local_248 = lVar8;
  local_d0 = plVar2;
  FUN_00cbadd0(&local_248,&local_258);
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  if ((local_250 != '\0') && (local_258 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    (**(code **)(*local_d0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a01770();
  FUN_00e86210();
  local_238 = g_027e13c0;
  if (g_027e13c0 != 0) {
    FUN_00d50b00();
  }
  local_230 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar3 = local_60;
  uVar6 = (undefined7)(uVar14 >> 8);
  if (lVar8 == local_60) {
    lVar3 = lVar8;
    if (((char)local_34 == '\0') && (lVar8 != 0)) {
      if (local_58 != '\0') goto LAB_019a02ca;
      uVar14 = CONCAT71(uVar6,1);
      local_34 = 0;
      FUN_00d50b00();
    }
    else {
      uVar14 = (uint64_t)local_34;
    }
LAB_019a0321:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      uVar14 = CONCAT71(uVar6,1);
      if (((char)local_34 != '\0') && (lVar8 != 0)) {
        local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        FUN_00d50b20();
        uVar14 = CONCAT71(uVar6,1);
      }
      goto LAB_019a0321;
    }
    if (((char)local_34 != '\0') && (lVar8 != 0)) {
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      FUN_00d50b20();
    }
LAB_019a02ca:
    local_58 = '\0';
    uVar14 = CONCAT71(uVar6,1);
  }
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  local_b8 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_b8 = '\x01';
  local_228 = 0;
  local_220 = '\0';
  local_210 = '\0';
  local_218 = lVar3;
  local_c0 = plVar2;
  FUN_00cbadd0(&local_218,&local_228);
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    (**(code **)(*local_c0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a014c0();
  FUN_00e86210();
  local_208 = g_027e3cf0;
  if (g_027e3cf0 != 0) {
    FUN_00d50b00();
  }
  local_200 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar8 = local_60;
  cVar12 = (char)uVar14;
  if (lVar3 == local_60) {
    local_34 = (uint)uVar14;
    lVar8 = lVar3;
    if ((cVar12 == '\0') && (lVar3 != 0)) {
      if (local_58 != '\0') goto LAB_019a048b;
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      uVar14 = 0;
      FUN_00d50b00();
    }
LAB_019a04e3:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar15 = (uint7)(uVar14 >> 8);
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((cVar12 != '\0') && (lVar3 != 0)) {
        uVar14 = (uint64_t)uVar15 << 8;
        uVar5 = FUN_00d50b20();
        local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      }
      goto LAB_019a04e3;
    }
    if ((cVar12 != '\0') && (lVar3 != 0)) {
      uVar14 = (uint64_t)uVar15 << 8;
      uVar5 = FUN_00d50b20();
    }
LAB_019a048b:
    local_58 = '\0';
    local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
  }
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  local_a8 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_a8 = '\x01';
  local_1f8 = 0;
  local_1f0 = '\0';
  local_1e0 = '\0';
  local_1e8 = lVar8;
  local_b0 = plVar2;
  FUN_00cbadd0(&local_1e8,&local_1f8);
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    (**(code **)(*local_b0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_0013de80();
  FUN_00e86210();
  local_1d8 = g_027e13c8;
  if (g_027e13c8 != 0) {
    FUN_00d50b00();
  }
  local_1d0 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar3 = local_60;
  uVar6 = (undefined7)(uVar14 >> 8);
  if (lVar8 == local_60) {
    lVar3 = lVar8;
    uVar13 = local_34;
    if (((char)local_34 == '\0') && (lVar8 != 0)) {
      if (local_58 != '\0') goto LAB_019a0651;
      local_34 = 0;
      FUN_00d50b00();
      uVar13 = (int)CONCAT71(uVar6,1);
    }
LAB_019a06a8:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      uVar13 = (uint)CONCAT71(uVar6,1);
      if (((char)local_34 != '\0') && (lVar8 != 0)) {
        local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        FUN_00d50b20();
        uVar13 = (int)CONCAT71(uVar6,1);
      }
      goto LAB_019a06a8;
    }
    if (((char)local_34 != '\0') && (lVar8 != 0)) {
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      FUN_00d50b20();
    }
LAB_019a0651:
    local_58 = '\0';
    uVar13 = (uint)CONCAT71(uVar6,1);
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  local_98 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_1c8 = 0;
  local_1c0 = '\0';
  local_1b0 = '\0';
  local_1b8 = lVar3;
  local_a0 = plVar2;
  FUN_00cbadd0(&local_1b8,&local_1c8);
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01a01970();
  FUN_00e86210();
  local_1a8 = g_027e13d0;
  if (g_027e13d0 != 0) {
    FUN_00d50b00();
  }
  local_1a0 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar8 = local_60;
  cVar12 = (char)uVar13;
  if (lVar3 == local_60) {
    lVar8 = lVar3;
    local_34 = uVar13;
    if ((cVar12 == '\0') && (lVar3 != 0)) {
      if (local_58 != '\0') goto LAB_019a0812;
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      FUN_00d50b00();
    }
LAB_019a086a:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((cVar12 != '\0') && (lVar3 != 0)) {
        uVar5 = FUN_00d50b20();
        local_34 = (int)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      }
      goto LAB_019a086a;
    }
    if ((cVar12 != '\0') && (lVar3 != 0)) {
      uVar5 = FUN_00d50b20();
    }
LAB_019a0812:
    local_58 = '\0';
    local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  local_88 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_198 = 0;
  local_190 = '\0';
  local_180 = '\0';
  local_188 = lVar8;
  local_90 = plVar2;
  FUN_00cbadd0(&local_188,&local_198);
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00115af0();
  FUN_00e86210();
  local_178 = g_027060a8;
  if (g_027060a8 != 0) {
    FUN_00d50b00();
  }
  local_170 = '\x01';
  uVar5 = FUN_00c841b0();
  lVar3 = local_60;
  if (lVar8 == local_60) {
    lVar3 = lVar8;
    cVar12 = (char)local_34;
    if (((char)local_34 == '\0') && (lVar8 != 0)) {
      if (local_58 != '\0') goto LAB_019a09cf;
      local_34 = 0;
      FUN_00d50b00();
      cVar12 = '\x01';
    }
LAB_019a0a28:
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        uVar5 = FUN_00d50b00();
      }
      cVar12 = '\x01';
      if (((char)local_34 != '\0') && (lVar8 != 0)) {
        local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        FUN_00d50b20();
        cVar12 = '\x01';
      }
      goto LAB_019a0a28;
    }
    if (((char)local_34 != '\0') && (lVar8 != 0)) {
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      FUN_00d50b20();
    }
LAB_019a09cf:
    local_58 = '\0';
    cVar12 = '\x01';
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  local_78 = 0;
  (**(code **)(*plVar2 + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_168 = 0;
  local_160 = '\0';
  local_150 = '\0';
  local_158 = lVar3;
  local_80 = plVar2;
  FUN_00cbadd0(&local_158,&local_168);
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  if ((cVar12 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
LAB_019a0b11:
  if (((char)local_70 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0199ee70
// ============================================================
// Function: FUN_0199ee70
// Address: 0199ee70
// Size: 1038 bytes
// Class: GNToolBoxTool
// String references:
//   "GNToolBoxTool"
//   "MUTool"
// === GNToolBoxTool properties ===
//                   _cellSize
//                   _sendsNotificationActionsOnOpenAndClose
//                   _showsSelectedTool
//                   _isHighlightingSubTools
//                   _allowedScreenFrame
//                   _toolBoxRect
//                   _subtoolsRect
//                   _contextMenusRect


uint64_t FUN_0199ee70(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *this_ptr;
  int64_t **pplVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar6 = FUN_01caec40();
  local_80 = g_027e1388;
  if (g_027e1388 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_78 = '\x01';
  pplVar5 = &local_40;
  FUN_000175c0(uVar6,&local_80);
  plVar1 = local_40;
  if ((g_026e6cf0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026e6c40 = FUN_00d4fe50();
    g_026e6c28 = "GNToolBoxTool";
    g_026e6c30 = 0x48;
    g_026e6c38 = FUN_001a1400;
    g_026e6c48 = 0;
    ram_00000000026e6c50 = 0;
    g_026e6c58 = 0;
    ram_00000000026e6c60 = 0;
    g_026e6c68 = 0;
    ram_00000000026e6c70 = 0;
    g_026e6c78 = 0;
    ram_00000000026e6c80 = 0;
    g_026e6c88 = 0;
    ram_00000000026e6c90 = 0;
    g_026e6c98 = 0;
    ram_00000000026e6ca0 = 0;
    g_026e6ca8 = 0;
    ram_00000000026e6cb0 = 0;
    g_026e6cb8 = 0;
    ram_00000000026e6cc0 = 0;
    g_026e6cc8 = 0;
    ram_00000000026e6cd0 = 0;
    g_026e6cd8 = 0;
    ram_00000000026e6ce0 = 0;
    g_026e6ce8 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_0199ef01:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0199ef01;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_0199f09e;
  uVar6 = FUN_01e26150();
  local_70 = g_026f6e60;
  if (g_026f6e60 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_68 = '\x01';
  pplVar5 = &local_40;
  uVar6 = FUN_000175c0(uVar6,&local_70);
  plVar2 = local_40;
  if ((g_0272ffd0 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar4 != 0)) {
    g_026f8f48 = FUN_00d4fe50();
    g_026f8f30 = "MUTool";
    g_026f8f38 = 0x38;
    g_026f8f40 = FUN_00274e70;
    g_026f8f50 = 0;
    ram_00000000026f8f58 = 0;
    g_026f8f60 = 0;
    g_026f8fd8 = 0;
    ram_00000000026f8fe0 = 0;
    g_026f8fe8 = 0;
    g_026f8fea = 1;
    g_026f8f68 = 0;
    ram_00000000026f8f70 = 0;
    g_026f8f78 = 0;
    ram_00000000026f8f80 = 0;
    g_026f8f88 = 0;
    ram_00000000026f8f90 = 0;
    g_026f8f98 = 0;
    ram_00000000026f8fa0 = 0;
    g_026f8fa8 = 0;
    ram_00000000026f8fb0 = 0;
    g_026f8fb8 = 0;
    ram_00000000026f8fc0 = 0;
    g_026f8fc8 = 0;
    ram_00000000026f8fd0 = 0;
    g_026f8ff3 = 0;
    g_026f8feb = 0;
    uVar6 = ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_0199efe4:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_0199efe4;
  }
  local_48 = 0;
  plVar2 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  local_48 = '\x01';
  local_50 = plVar2;
  (**(code **)(*this_ptr + 0xec8))(uVar6,1);
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d3a630();
  FUN_01e466c0();
  (**(code **)(*this_ptr + 0xd98))();
LAB_0199f09e:
  (**(code **)(*this_ptr + 0xed0))();
  iVar4 = (**(code **)(*local_40 + 0x3e0))();
  if ((bool)*(char *)((int64_t)this_ptr + 0x3c6) != (iVar4 != 0)) {
    *(bool *)((int64_t)this_ptr + 0x3c6) = iVar4 != 0;
    (**(code **)(*this_ptr + 0x620))();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 0199e390
// ============================================================
// Function: FUN_0199e390
// Address: 0199e390
// Size: 1394 bytes
// Class: GNToolBoxTool
// === GNToolBoxTool properties ===
//                   _cellSize
//                   _sendsNotificationActionsOnOpenAndClose
//                   _showsSelectedTool
//                   _isHighlightingSubTools
//                   _allowedScreenFrame
//                   _toolBoxRect
//                   _subtoolsRect
//                   _contextMenusRect


void FUN_0199e390(void)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar8;
  uint64_t uVar9;
  int64_t local_b0;
  char local_a8;
  int64_t local_78;
  double local_58;
  uint64_t local_50;
  double local_48;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (this_ptr[0x94] != 0) goto LAB_0199e8ba;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  lVar1 = this_ptr[0x94];
  this_ptr[0x94] = (int64_t)puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*pcVar2)();
  lVar1 = this_ptr[0x95];
  this_ptr[0x95] = (int64_t)puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*arg1 == 0) {
    local_78 = this_ptr[0x41];
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    FUN_01d3abf0();
    uVar9 = FUN_01e466c0();
    fVar8 = (float)(**(code **)(*this_ptr + 0xc00))((int)((uint64_t)uVar9 >> 0x20));
    local_58 = (double)fVar8;
    local_50 = (**(code **)(*this_ptr + 0x930))((int)uVar9);
    fVar8 = (float)(**(code **)(*this_ptr + 3000))();
    local_48 = (double)(**(code **)(*this_ptr + 0x928))();
    local_48 = (double)fVar8 / local_48;
    FUN_004f2260(&local_58,FUN_019bfe10);
    local_78 = local_b0;
    if (local_a8 == '\0') {
      if (local_b0 == 0) {
        local_78 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*pcVar2)();
  if (local_78 == 0) {
LAB_0199e8a3:
    FUN_00d50b20();
  }
  else {
    if (0 < *(int *)(local_78 + 0xc)) {
      uVar7 = 0;
      do {
        uVar6 = (uint64_t)uVar7;
        lVar1 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + uVar6 * 8);
        FUN_00d216c0();
        FUN_00d21140();
        cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                            *this_ptr + 8))();
        if (cVar3 != '\0') {
          while( true ) {
            pvVar5 = _pthread_getspecific((void*)uVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01274b60();
            if (lVar1 == 0) break;
            pvVar5 = _pthread_getspecific((void*)uVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01274b60();
          }
          cVar3 = FUN_00d24090();
          if (cVar3 == '\0') {
            FUN_00d21140();
            FUN_00d21140();
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < *(int *)(local_78 + 0xc));
    }
    FUN_001159b0();
    if (puVar4 != (void*)0x0) goto LAB_0199e8a3;
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
LAB_0199e8ba:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

