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

