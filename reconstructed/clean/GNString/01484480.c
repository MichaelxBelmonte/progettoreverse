// Function: FUN_01484480
// Address: 01484480
// Size: 838 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01484480(void* param_1)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  int iVar10;
  double dVar11;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  FUN_013fb420();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  dVar11 = (double)*(int *)(local_50 + 0x20) * *(double *)(local_50 + 0x18) + g_023942d0;
  uVar4 = FUN_00e83010();
  iVar10 = (int)dVar11 / 2;
  *(void*)(this_ptr + 0x90) = uVar4;
  ___bzero();
  *(int64_t *)(this_ptr + 0x88) = (int64_t)iVar10 * 4 + *(int64_t *)(this_ptr + 0x90);
  plVar9 = *(int64_t **)(this_ptr + 0x68);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  plVar8 = *(int64_t **)(this_ptr + 0x68);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar8 = *(int64_t **)(this_ptr + 0x68);
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  uVar2 = (**(code **)(*plVar8 + 0x3a0))();
  lVar5 = (int64_t)-iVar10;
  uVar4 = 0;
  cVar1 = (**(code **)(*plVar9 + 0x388))(0,g_0238fee8,uVar2,lVar5);
  if (cVar1 == '\0') {
    FUN_00e33860();
    while( true ) {
      plVar9 = *(int64_t **)(this_ptr + 0x68);
      pVar7 = (void*)uVar4;
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        plVar9 = *(int64_t **)(this_ptr + 0x68);
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar9 = (int64_t *)plVar9[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      plVar8 = *(int64_t **)(this_ptr + 0x68);
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        plVar8 = *(int64_t **)(this_ptr + 0x68);
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      uVar2 = (**(code **)(*plVar8 + 0x3a0))();
      uVar4 = 0;
      cVar1 = (**(code **)(*plVar9 + 0x388))(0,g_0238fee8,uVar2,lVar5);
      if (cVar1 != '\0') {
        FUN_00e33860();
        goto LAB_01484765;
      }
      if (*(char *)(this_ptr + 0x3c) != '\0') break;
      FUN_00da68a0(g_023944e0);
    }
    FUN_00e34a60();
  }
  else {
LAB_01484765:
    FUN_015c2d90(g_0241c6e8,g_02390434,g_02390128,(float)*(double *)(this_ptr + 0xa8));
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  return;
}

