// Function: FUN_01c70ce0
// Address: 01c70ce0
// Size: 2020 bytes
// Class: MUBeatSelection
// === MUBeatSelection properties ===
//                   _selectionIsTemporary
//                   _isResizable
//                   _drawsBottomBorder
//                   _drawsTopBorder
//                   _showsRegionBar
//                   _tempoEditorDelegate
//                   _showsDestinationRegionStart
//                   _destinationRegionStartAlpha
//                   _destinationRegionStart
//                   _currentRegionStart
//                   _selectedSubdivisionIndex
//                   _enabledRegionIndex


void FUN_01c70ce0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  void *pvVar5;
  uint64_t uVar6;
  void* in_ECX;
  void* pVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar9;
  int64_t *local_d8;
  uint8_t local_d0;
  int64_t *local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  void* local_74;
  uint64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = this_ptr[0x31];
  local_58 = param_2;
  local_50 = param_1;
  pVar7 = in_ECX;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_b8 = lVar1;
  FUN_016cbba0();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  local_48 = plVar3;
  cVar4 = FUN_016bf360();
  if (cVar4 == '\0') {
    lVar1 = this_ptr[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar7 = 0;
    uVar6 = FUN_016c45d0(local_50,0);
    uVar9 = extraout_XMM0_Qa;
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
    FUN_016bef80(uVar9,uVar6);
  }
  local_74 = in_ECX;
  local_70 = (int64_t *)FUN_00e7bdb0();
  cVar4 = FUN_016bf4e0();
  if ((cVar4 == '\0') ||
     ((cVar4 = FUN_016bf4e0(), cVar4 == '\0' && (cVar4 = FUN_016bf360(), cVar4 != '\0')))) {
    lVar1 = this_ptr[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_98 = *arg1;
    local_90 = '\0';
    local_88 = *local_58;
    local_80 = '\0';
    local_60 = 0;
    lVar2 = this_ptr[0x42];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    pVar7 = local_74 & 0xff;
    local_68 = lVar2;
    FUN_016c4850((uint8_t)local_74,&local_88,&local_68,0);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    cVar4 = FUN_016bf530();
    if (cVar4 == '\0') {
      lVar1 = this_ptr[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016bf100();
      pVar7 = 0;
      local_58 = (int64_t *)FUN_016c46a0(0,0);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar3 = (int64_t *)this_ptr[0x2d];
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *plVar3 + 0x20))();
      (**(code **)(*local_40 + 0x60))(local_58);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = this_ptr[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01907d20();
    pVar7 = 0;
    FUN_016cb9d0(local_50,4);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = *arg1;
    local_a0 = '\0';
    FUN_016f1400(local_50);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_00e7bdb0();
    local_40 = (int64_t *)FUN_016c4760(uVar9,0);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00e7b970();
    local_70 = local_40;
    FUN_016bf010();
    plVar3 = (int64_t *)this_ptr[0x2d];
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *plVar3 + 0x20))();
    (**(code **)(*local_40 + 0x60))(local_50);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if ((int)this_ptr[0x39] == 0) {
    lVar1 = this_ptr[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01c44d20();
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_d0 = 1;
    local_d8 = plVar3;
    plVar8 = local_70;
    FUN_01c45410(local_70,&local_d8);
    pVar7 = (void*)plVar8;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = (int64_t *)((uint64_t)local_40 & 0xffffffff00000000);
    if ((local_70._4_4_ == 0) || (cVar4 = FUN_00e7c630(), cVar4 == '\0')) {
      lVar1 = this_ptr[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar9 = FUN_01c44d20();
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_c0 = 1;
      local_c8 = plVar3;
      FUN_01c44700(uVar9,&local_c8);
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01c62c70();
  if (this_ptr[0x31] != 0) {
    FUN_00d50b00();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x620))();
  *(void*)(this_ptr + 0x3a) = 1;
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

