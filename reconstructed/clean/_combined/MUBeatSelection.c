// ===================================================================
// MUBeatSelection — Complete reconstructed pseudocode
// 9 functions
// ===================================================================

// Registered properties (12):
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


// ============================================================
// 01704df0
// ============================================================
// Function: FUN_01704df0
// Address: 01704df0
// Size: 2918 bytes
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


void FUN_01704df0(double param_1,uint32_t param_2)

{
  int iVar1;
  int64_t lVar2;
  byte bVar3;
  char cVar4;
  void *pvVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  void* pVar9;
  int64_t in_RCX;
  int64_t lVar10;
  int64_t this_ptr;
  double dVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  int iStack_7c;
  char local_58;
  uint64_t local_40;
  char local_38;
  
  lVar10 = in_RCX;
  FUN_00e7bcc0();
  if ((param_1 != 0.0) || (NAN(param_1))) {
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    iVar1 = *(int *)(local_40 + 0xc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 < 3) {
      pvVar5 = _pthread_getspecific((void*)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019012b0();
      pvVar5 = _pthread_getspecific((void*)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_01907950();
      pvVar5 = _pthread_getspecific((void*)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901eb0(param_1 - dVar11);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar5 = _pthread_getspecific((void*)lVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018fc680(param_1);
      local_40 = FUN_00e7cd00();
      FUN_00e7bfe0();
      FUN_016ea680();
    }
  }
  while( true ) {
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_019079b0();
    if (uVar6 >> 0x20 == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = FUN_00e7c6b0();
      bVar3 = bVar3 ^ 1;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3 == 0) break;
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_019079b0();
    uVar12 = FUN_00e7b820();
    FUN_016da710(uVar12,uVar7);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (uVar6 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_016ebc80();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      lVar2 = **(int64_t **)(*(int64_t *)(this_ptr + 0x60) + 0x10);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_016d7fb0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fc0b0();
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_01909fa0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  while( true ) {
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_019079b0();
    if (uVar6 >> 0x20 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = FUN_00e7c650();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') break;
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_00e7b970();
    FUN_016da710();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (uVar6 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific((void*)lVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_01909fa0();
    if (local_40 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific((void*)lVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar9 = 0;
  FUN_0165c340(0,0,0);
  FUN_0123ff00();
  FUN_00e7c2a0();
  FUN_00e7c3c0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_00e7bcc0();
  iStack_7c = (int)((uint64_t)in_RCX >> 0x20);
  if (((iStack_7c == 0) || (uVar6 >> 0x20 == 0)) || (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
    FUN_016f4db0();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  uVar8 = FUN_00e7bcc0();
  if ((uVar8 >> 0x20 != 0) && (cVar4 = FUN_00e7c650(), cVar4 != '\0')) {
    FUN_00e7c240();
  }
  local_40 = CONCAT44((int)(uVar6 >> 0x20),1);
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_018fc1e0(param_1,0);
  uVar12 = FUN_0123fbe0(extraout_XMM0_Qa,param_2);
  if (local_58 == '\0') {
    if (in_RCX != 0) {
      uVar12 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_0165b0c0(uVar12,uVar7);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d64850();
  lVar10 = *(int64_t *)(this_ptr + 0x58);
  if (lVar10 != local_40) {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x58) = local_40;
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (in_RCX != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (in_RCX != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c70ce0
// ============================================================
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



// ============================================================
// 018fc1e0
// ============================================================
// Function: FUN_018fc1e0
// Address: 018fc1e0
// Size: 1174 bytes
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


void FUN_018fc1e0(double param_1)

{
  int iVar1;
  void *pvVar2;
  void* pVar3;
  int *in_RCX;
  int *piVar4;
  int iVar5;
  int64_t this_ptr;
  int iVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if ((g_023e1698 <= (double)(g_023908f0 & (uint64_t)param_1)) || (NAN(param_1))) {
    FUN_00e7bdb0();
    return;
  }
  iVar5 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
  piVar4 = in_RCX;
  dVar9 = (double)FUN_01907950();
  pVar3 = (void*)piVar4;
  if (param_1 < dVar9) {
    iVar8 = 0;
    goto LAB_018fc472;
  }
  iVar7 = iVar5 + -2;
  dVar9 = (double)FUN_01907950();
  pVar3 = (void*)piVar4;
  iVar8 = iVar7;
  if (dVar9 <= param_1) goto LAB_018fc472;
  iVar1 = 1;
  if ((in_RCX != (int *)0x0) && (iVar8 = *in_RCX, iVar8 != -1)) {
    iVar6 = iVar8;
    if (iVar7 < iVar8) {
      iVar6 = iVar7;
    }
    if (iVar8 < 1) {
      iVar6 = 1;
    }
    piVar4 = *(int **)(*(int64_t *)(this_ptr + 0x38) + 0x10);
    dVar9 = (double)FUN_01907950();
    if (dVar9 <= param_1) {
      iVar1 = iVar6;
      if (iVar6 < iVar5 + -1) {
        iVar8 = iVar6 + 1;
        piVar4 = *(int **)(*(int64_t *)(this_ptr + 0x38) + 0x10);
        dVar9 = (double)FUN_01907950();
        if (dVar9 <= param_1) goto LAB_018fc3a8;
LAB_018fc3f0:
        iVar7 = iVar8;
      }
      else {
LAB_018fc3a8:
        iVar8 = iVar6 + 2;
        if (iVar8 < iVar5) {
          piVar4 = *(int **)(*(int64_t *)(this_ptr + 0x38) + 0x10);
          dVar9 = (double)FUN_01907950();
          if (param_1 < dVar9) goto LAB_018fc3f0;
        }
        iVar8 = iVar6 + 3;
        if (iVar8 < iVar5) {
          piVar4 = *(int **)(*(int64_t *)(this_ptr + 0x38) + 0x10);
          dVar9 = (double)FUN_01907950();
          if (param_1 < dVar9) goto LAB_018fc3f0;
        }
      }
    }
    else {
      iVar1 = 1;
      iVar7 = iVar6;
      if (0 < iVar6) {
        piVar4 = *(int **)(*(int64_t *)(this_ptr + 0x38) + 0x10);
        dVar9 = (double)FUN_01907950();
        iVar1 = iVar6 + -1;
        if (param_1 < dVar9) {
          if (iVar6 < 2) {
            iVar1 = 1;
            iVar7 = 1;
          }
          else {
            piVar4 = *(int **)(*(int64_t *)(this_ptr + 0x38) + 0x10);
            dVar9 = (double)FUN_01907950();
            iVar1 = iVar6 + -2;
            if (param_1 < dVar9) {
              if (iVar6 < 3) {
                iVar1 = 1;
                iVar7 = 2;
              }
              else {
                piVar4 = *(int **)(*(int64_t *)(this_ptr + 0x38) + 0x10);
                dVar9 = (double)FUN_01907950();
                iVar1 = iVar6 + -3;
                if (param_1 < dVar9) {
                  iVar1 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  do {
    iVar8 = iVar1;
    pVar3 = (void*)piVar4;
    if (iVar7 - iVar8 == 1) break;
    iVar5 = (iVar7 - iVar8) / 2 + iVar8;
    piVar4 = *(int **)(*(int64_t *)(this_ptr + 0x38) + 0x10);
    dVar9 = (double)FUN_01907950();
    pVar3 = (void*)piVar4;
    iVar1 = iVar5;
    if (param_1 <= dVar9) {
      iVar1 = iVar8;
      iVar7 = iVar5;
    }
  } while ((dVar9 != param_1) || (iVar8 = iVar5, NAN(dVar9) || NAN(param_1)));
LAB_018fc472:
  if (in_RCX != (int *)0x0) {
    *in_RCX = iVar8;
  }
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar9 = (double)FUN_01907950();
  pvVar2 = _pthread_getspecific(pVar3);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  if ((dVar9 != param_1) || (NAN(dVar9) || NAN(param_1))) {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_01907950();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    if ((dVar10 != param_1) || (NAN(dVar10) || NAN(param_1))) {
      dVar11 = (double)FUN_00e7c860();
      dVar12 = (double)FUN_00e7c860();
      if ((0.0 < dVar10 - dVar9) &&
         ((dVar13 = ((param_1 - dVar9) * dVar12 + (dVar10 - param_1) * dVar11) / (dVar10 - dVar9),
          dVar11 <= dVar13 || (param_1 < dVar9)))) {
        dVar11 = (double)(-(uint64_t)(dVar13 <= dVar12) & (uint64_t)dVar13 |
                         ~-(uint64_t)(dVar13 <= dVar12) &
                         (~-(uint64_t)(dVar10 < param_1) & (uint64_t)dVar12 |
                         -(uint64_t)(dVar10 < param_1) & (uint64_t)dVar13));
      }
      FUN_00e7cd00(dVar11);
    }
  }
  return;
}



// ============================================================
// 01c71b80
// ============================================================
// Function: FUN_01c71b80
// Address: 01c71b80
// Size: 1086 bytes
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


void FUN_01c71b80(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *arg1;
  void*this_ptr;
  bool bVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar5 = (uint32_t)((uint64_t)param_2 >> 0x20);
  (**(code **)(*arg1 + 0x4d8))();
  (**(code **)(*arg1 + 0x7b8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c71bed;
    }
  }
  else if (local_40 != 0) {
LAB_01c71bed:
    FUN_01d97870();
    if (local_40 == 0) {
      bVar3 = false;
    }
    else {
      FUN_01d97850();
      bVar3 = local_50 != 0;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      plVar2 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar2 + 0x18))();
      uVar4 = FUN_00d46dc0(CONCAT44(uVar5,uVar5));
      lVar1 = g_027ebed8;
      if ((local_48 == '\0') && (local_50 != 0)) {
        uVar4 = FUN_00d50b00();
        lVar1 = g_027ebed8;
      }
      g_027ebed8 = lVar1;
      if (lVar1 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d470c0(arg1[0x37]);
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = g_027ebee0;
      if (g_027ebee0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d470c0(arg1[0x38]);
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = g_027ebee8;
      if (g_027ebee8 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar4 = FUN_00d46530();
      if (local_50 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = g_027ebef0;
      if (g_027ebef0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = lVar1;
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar2 = (int64_t *)0x0;
    }
    *this_ptr = plVar2;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return;
  }
  *this_ptr = 0;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01c707d0
// ============================================================
// Function: FUN_01c707d0
// Address: 01c707d0
// Size: 869 bytes
// Class: MUBeatSelection
// String references:
//   "MUBeatSelection"
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


uint64_t FUN_01c707d0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t **pplVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_98;
  uint8_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  uint64_t local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar8 = FUN_01ca6970();
  local_88 = g_027ebec8;
  if (g_027ebec8 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_80 = '\x01';
  pplVar7 = &local_50;
  FUN_01cacbe0(uVar8,&local_88);
  plVar1 = local_50;
  FUN_0119c4c0();
  if (plVar1 == (int64_t *)0x0) {
LAB_01c7084f:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01c7084f;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    uVar6 = 0;
    goto LAB_01c70a5e;
  }
  local_58 = CONCAT44(local_58._4_4_,param_2);
  uVar8 = FUN_01ca6970();
  local_78 = g_027ebed0;
  if (g_027ebed0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_70 = '\x01';
  pplVar7 = &local_50;
  uVar8 = FUN_01cacbe0(uVar8,&local_78);
  plVar1 = local_50;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_01c70930:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01c70930;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    uVar6 = 0;
  }
  else {
    local_60 = '\0';
    local_68 = plVar1;
    uVar4 = FUN_016bf700(uVar8,0);
    uVar6 = (uint64_t)uVar4;
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((byte)local_58 & (byte)uVar4) != 0) {
      plVar2 = *(int64_t **)(this_ptr + 0x170);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_58 = (**(code **)(*plVar2 + 0x388))(*(void*)(this_ptr + 0x254));
      FUN_00d50b20();
      local_90 = 0;
      uVar6 = CONCAT71((int7)((uint64_t)plVar2 >> 8),1);
      local_98 = plVar1;
      FUN_01c70ce0((int)local_58,&local_98);
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01c70a5e:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 01705e00
// ============================================================
// Function: FUN_01705e00
// Address: 01705e00
// Size: 1340 bytes
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


int64_t * FUN_01705e00(uint64_t param_1,uint64_t param_2,char param_3)

{
  char cVar1;
  void *pvVar2;
  int extraout_var;
  int64_t lVar3;
  void* in_ECX;
  void* pVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  double dVar6;
  int64_t local_78;
  char local_70;
  double local_48;
  
  pVar4 = in_ECX;
  FUN_016cbba0();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = 0;
  FUN_018fc1e0(param_1,0);
  pvVar2 = _pthread_getspecific((void*)uVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e7bdb0();
  pvVar2 = _pthread_getspecific((void*)uVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165d690();
  pVar4 = (void*)uVar5;
  local_48._0_1_ = (char)in_ECX;
  if (local_48._0_1_ != '\0') {
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((void*)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = (double)FUN_018fd630();
    pvVar2 = _pthread_getspecific((void*)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((void*)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7bdb0();
    pvVar2 = _pthread_getspecific((void*)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    pvVar2 = _pthread_getspecific((void*)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar6 = (double)FUN_018fd630();
    FUN_00e7bcc0();
    local_48 = local_48 / dVar6;
    if (local_48 < g_02411a10) {
      do {
        FUN_00e7c3c0();
        local_48 = local_48 + local_48;
      } while (local_48 < g_02411a10);
    }
    pVar4 = (void*)uVar5;
    if (g_02411a18 <= local_48) {
      do {
        FUN_00e7c2a0();
        pVar4 = (void*)uVar5;
        local_48 = local_48 * g_023942d0;
      } while (g_02411a18 <= local_48);
    }
    if ((extraout_var == 0) || (cVar1 = FUN_00e7c630(), cVar1 == '\0')) {
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        pVar4 = (void*)local_78;
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901fe0();
      FUN_00e7bac0();
    }
  }
  if (param_3 != '\0') {
    FUN_00e7b970();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    pVar4 = (void*)local_78;
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01901eb0(param_1);
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ea680();
  *this_ptr = local_78;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01704680
// ============================================================
// Function: FUN_01704680
// Address: 01704680
// Size: 541 bytes
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


int FUN_01704680(uint64_t param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int64_t lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  int iVar18;
  int64_t *arg1;
  uint64_t uVar19;
  int64_t *this_ptr;
  uint64_t uVar20;
  double local_58;
  
  iVar17 = 1;
  if (1 < (int)param_2) {
    iVar8 = *(int *)(*this_ptr + 0x18);
    iVar18 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar18 = iVar8;
    }
    if ((int)param_2 < (iVar18 >> 3) + -2) {
      uVar20 = (uint64_t)param_2;
      lVar9 = *(int64_t *)(*arg1 + 0x10);
      dVar2 = *(double *)(lVar9 + uVar20 * 8);
      dVar3 = *(double *)(lVar9 + (uint64_t)(param_2 - 1) * 8);
      if ((dVar2 <= dVar3) ||
         (iVar17 = 0, pdVar1 = (double *)(lVar9 + 8 + uVar20 * 8),
         dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
        uVar19 = (uint64_t)(param_2 + 1);
        if ((dVar2 < dVar3) && (dVar2 < *(double *)(lVar9 + uVar19 * 8))) {
          return 0;
        }
        dVar2 = *(double *)(lVar9 + (uint64_t)(param_2 - 2) * 8);
        dVar10 = (double)FUN_00e7c860();
        dVar11 = (double)FUN_00e7c860();
        local_58 = (double)FUN_00e7c860();
        dVar12 = (double)FUN_00e7c860();
        lVar9 = *(int64_t *)(*arg1 + 0x10);
        dVar4 = *(double *)(lVar9 + (uint64_t)(param_2 - 1) * 8);
        dVar5 = *(double *)(lVar9 + 0x10 + uVar20 * 8);
        dVar6 = *(double *)(lVar9 + uVar19 * 8);
        dVar7 = *(double *)(lVar9 + uVar20 * 8);
        dVar13 = (double)FUN_00e7c860();
        dVar14 = (double)FUN_00e7c860();
        dVar15 = (double)FUN_00e7c860();
        dVar16 = (double)FUN_00e7c860();
        iVar17 = (uint)((double)((uint64_t)
                                 ((*(double *)(*(int64_t *)(*arg1 + 0x10) + uVar19 * 8) -
                                  (dVar15 - dVar16) * ((dVar5 - dVar6) / (dVar13 - dVar14))) -
                                 *(double *)(*(int64_t *)(*arg1 + 0x10) + uVar20 * 8)) &
                                g_023908f0) <
                       (double)((uint64_t)
                                (dVar7 - ((local_58 - dVar12) *
                                          ((dVar3 - dVar2) / (dVar10 - dVar11)) + dVar4)) &
                               _UNK_023908f8)) * 2 + -1;
      }
    }
  }
  return iVar17;
}



// ============================================================
// 01704aa0
// ============================================================
// Function: FUN_01704aa0
// Address: 01704aa0
// Size: 696 bytes
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


void FUN_01704aa0(void* param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint64_t uVar3;
  char cVar4;
  void *pvVar5;
  void*puVar6;
  void* pVar7;
  uint32_t uVar8;
  uint64_t local_70;
  uint8_t local_68;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_018fe5d0();
  if (cVar4 == '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar7 = 0;
    FUN_0165cf20(0,0);
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = FUN_0165cf20(0,0);
    local_34 = 4;
    FUN_00e7c260();
    uVar3 = local_60;
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_025fa538;
    uVar2 = _UNK_0239372c;
    uVar1 = _UNK_02393728;
    uVar8 = _UNK_02393724;
    *(void*)((int64_t)puVar6 + 0xc) = g_02393720;
    *(void*)(puVar6 + 2) = uVar8;
    *(void*)((int64_t)puVar6 + 0x14) = uVar1;
    *(void*)(puVar6 + 3) = uVar2;
    uVar8 = FUN_00d500e0();
    FUN_016bf110(uVar8,uVar3);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_016d9380();
    local_70 = 0;
    local_68 = 0;
    FUN_016dcbf0(0,&local_70,param_3,param_4,0);
    FUN_016d63b0();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01706530
// ============================================================
// Function: FUN_01706530
// Address: 01706530
// Size: 516 bytes
// Class: MUBeatSelection
// String references:
//   "MUBeatSelection"
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


void FUN_01706530(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025fa538;
  *(void*)((int64_t)this_ptr + 0xc) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027cb54b == '\0') {
    FUN_01706760();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027cb54b == '\0') {
    FUN_017068f0();
    FUN_00e87980();
  }
  return;
}

