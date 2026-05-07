// Function: FUN_01c8f0f0
// Address: 01c8f0f0
// Size: 1209 bytes
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


void FUN_01c8f0f0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t lVar7;
  int iVar8;
  uint32_t uVar9;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  int64_t local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  lVar5 = local_78;
  if ((((local_70 == '\0') && (local_78 != 0)) && (FUN_00d50b00(), local_70 != '\0')) &&
     (local_78 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00274ea0();
  *plVar4 = (int64_t)&g_02630138;
  plVar4[2] = (int64_t)&g_02630600;
  plVar4[7] = 0;
  (*g_02630150)();
  local_a8 = g_028b7260;
  local_a0 = 0;
  if (g_028b7260 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  (**(code **)(*plVar4 + 0x410))();
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*g_028b7260 + 0x9b0))();
  local_88 = local_50;
  local_80 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_80 = '\x01';
  FUN_00243390();
  lVar2 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_38 = lVar5;
    local_70 = '\0';
    local_78 = 0;
    local_68 = lVar2;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_40 = plVar4;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar8 = -local_60._4_4_;
        }
        else {
          iVar8 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar8);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar8 = 0;
        }
        local_60 = CONCAT44(iVar8,(int)local_60);
      }
      lVar5 = (int64_t)(int)local_60;
      iVar8 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar8);
      if (*(int *)(local_68 + 0xc) <= iVar8) break;
      lVar7 = *(int64_t *)(local_68 + 0x10);
      local_78 = *(int64_t *)(lVar7 + 8 + lVar5 * 8);
      pvVar3 = _pthread_getspecific((void*)lVar7);
      pVar6 = (void*)lVar7;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      lVar5 = local_50;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_01274b60();
        lVar5 = local_b8;
        if (local_b0 == '\0') {
          if (local_b8 != 0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_b0 = '\0';
        }
        local_50 = lVar5;
        local_48 = '\0';
        FUN_00d233f0(uVar9,local_58 + (int)local_60);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
    lVar5 = local_38;
    plVar4 = local_40;
  }
  plVar1 = g_028b7260;
  local_90 = 0;
  if (g_028b7260 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_98 = plVar1;
  local_90 = '\x01';
  local_d8 = lVar2;
  local_d0 = '\0';
  local_c8 = 0;
  local_c0 = '\0';
  FUN_01a26560(g_0241eeb0,&local_d8,&local_c8,0);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar4 + 0x418))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}

