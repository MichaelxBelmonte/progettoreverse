// Function: FUN_01c90380
// Address: 01c90380
// Size: 1528 bytes
// Class: MUSignatureEditorRulerView
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c90380(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void *pvVar7;
  void* pVar8;
  uint uVar9;
  int64_t lVar10;
  int iVar11;
  void*puVar12;
  bool bVar13;
  uint64_t uVar14;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  void*local_78;
  void*local_70;
  void*local_68;
  char local_60;
  void*local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  uVar14 = (**(code **)(*g_028b7260 + 0x9a8))(param_1,0);
  puVar12 = local_68;
  if ((((local_60 == '\0') && (local_68 != (void*)0x0)) &&
      (uVar14 = FUN_00d50b00(), local_60 != '\0')) && (local_68 != (void*)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  local_70 = puVar12;
  (**(code **)(*g_028b7260 + 0x9b0))(uVar14,0);
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  FUN_01293ed0(&local_d8);
  local_78 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (void*)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  if (local_78 != (void*)0x0) {
    local_60 = '\0';
    local_68 = (void*)0x0;
    local_58 = local_78;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if ((int)local_50._4_4_ < 1) {
          iVar11 = -local_50._4_4_;
        }
        else {
          iVar11 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar11);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar11 = 0;
        }
        local_50 = CONCAT44(iVar11,(int)local_50);
      }
      lVar5 = (int64_t)(int)local_50;
      iVar11 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar11);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar11) break;
      lVar10 = local_58[2];
      local_68 = *(void**)(lVar10 + 8 + lVar5 * 8);
      FUN_0141ae30();
      local_98 = local_b8;
      pVar8 = (void*)lVar10;
      local_90 = 0;
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_90 = '\x01';
      FUN_0141af60();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_000fdf90();
      (**(code **)(*plVar6 + 0x18))();
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      plVar2 = local_40;
      puVar12 = local_70;
      local_80 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_80 = '\x01';
      local_88 = plVar2;
      FUN_013fb180();
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_c8 = plVar1;
      local_c0 = '\0';
      FUN_013fb350();
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      local_40 = plVar6;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar6 + 0x398))();
      FUN_00d50b20();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00115190();
  }
  if (puVar4 == (void*)0x0) {
    while( true ) {
      FUN_00d403d0();
      FUN_00d3fc60();
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (MACH_HEADER.filetype == 0) break;
      FUN_00da68a0(g_02391038);
    }
  }
  else {
    while( true ) {
      FUN_00d403d0();
      FUN_00d3fc60();
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_60 = '\0';
      local_68 = (void*)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = puVar4;
      while( true ) {
        lVar5 = (int64_t)(int)local_50;
        iVar11 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar11);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar11) break;
        local_68 = *(void**)(local_58[2] + 8 + lVar5 * 8);
        cVar3 = FUN_00e34230();
        if (((cVar3 == '\0') && (cVar3 = FUN_00e34240(), cVar3 == '\0')) &&
           (cVar3 = FUN_00e34250(), cVar3 == '\0')) {
          bVar13 = local_50 < 0;
          uVar9 = local_50._4_4_;
        }
        else {
          lVar5 = local_50;
          uVar9 = ~local_50._4_4_;
          local_50 = CONCAT44(uVar9,(int)local_50);
          bVar13 = -1 < lVar5;
        }
        if (uVar9 != 0) {
          if (uVar9 == 0 || bVar13) {
            iVar11 = -uVar9;
          }
          else {
            local_50._4_4_ = (uint)((uint64_t)local_50 >> 0x20);
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar9);
            FUN_00d23690(uVar9,uVar9);
            local_48 = local_48 + local_50._4_4_;
            iVar11 = 0;
          }
          local_50 = CONCAT44(iVar11,(int)local_50);
        }
      }
      FUN_0079b950();
      if (*(int *)((int64_t)puVar4 + 0xc) == 0) break;
      FUN_00da68a0(g_02391038);
    }
  }
  FUN_00d50b20();
  if (local_78 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar12 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

