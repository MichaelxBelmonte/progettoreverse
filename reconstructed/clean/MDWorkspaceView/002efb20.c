// Function: FUN_002efb20
// Address: 002efb20
// Size: 694 bytes
// Class: MDWorkspaceView
// === MDWorkspaceView properties ===
//   bool            _isVertical
//   bool            _allowsChainedResize
//   GNCoord         _size
//   GNCoord         _paddingLineSize
//   GNBorderStyle   _borderStyle


void FUN_002efb20(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  void* pVar4;
  int64_t lVar5;
  double dVar6;
  double dVar7;
  int64_t *local_70;
  char local_68;
  double local_60;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar1 = local_58;
  FUN_002eb090();
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_58 == (int64_t *)0x0) {
    return;
  }
  local_58 = (int64_t *)0x0;
  local_40 = -1;
  local_60 = 0.0;
  dVar6 = local_60;
  while( true ) {
    local_60 = dVar6;
    lVar2 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((int64_t)plVar1 + 0xc) <= local_40) break;
    lVar5 = *(int64_t *)((int64_t)plVar1 + 0x10);
    local_58 = *(int64_t **)(lVar5 + 8 + lVar2 * 8);
    pvVar3 = _pthread_getspecific((void*)lVar5);
    pVar4 = (void*)lVar5;
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    dVar6 = local_60;
    if (local_70 != (int64_t *)0x0) {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar6 = (double)FUN_012ebd30();
      if (dVar6 <= local_60) {
        dVar6 = local_60;
      }
    }
  }
  FUN_000be170();
  FUN_00d50b20();
  if ((local_60 != 0.0) || (NAN(local_60))) {
    FUN_01be80e0();
    dVar6 = (double)(**(code **)(*local_58 + 0x368))();
    FUN_01be80e0();
    dVar7 = (double)(**(code **)(*local_70 + 0x378))();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (dVar6 + dVar7 < local_60) {
      FUN_01be80e0();
      dVar6 = (double)(**(code **)(*local_58 + 0x368))();
      local_60 = local_60 / g_02394de0;
      FUN_01be80e0();
      (**(code **)(*local_58 + 0x380))((double)((int)local_60 * 0x1e + 0x1e) - dVar6);
    }
  }
  return;
}

