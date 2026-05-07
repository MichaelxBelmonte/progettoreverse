// Function: FUN_012b6e60
// Address: 012b6e60
// Size: 548 bytes
// Class: MULSSComponentRenderer
// === MULSSComponentRenderer properties ===
//                   _currentComponent
//                   _components
//                   _lastRightAdjacentItem
//                   _sourceSamplePosition


void FUN_012b6e60(void* param_1,int param_2,int param_3,uint64_t param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar7;
  double dVar8;
  byte local_res10;
  char local_res18;
  int64_t local_60;
  char local_58;
  
  plVar6 = (int64_t *)*arg1;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (int64_t *)*arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  iVar2 = (**(code **)(*plVar6 + 0x3a0))();
  if (iVar2 < param_3) {
    plVar6 = (int64_t *)*arg1;
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      plVar6 = (int64_t *)*arg1;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    param_3 = (**(code **)(*plVar6 + 0x3a0))();
  }
  iVar2 = FUN_00b33120();
  if (iVar2 < param_3) {
    param_3 = FUN_00b33120();
  }
  pVar5 = 1;
  if (local_res18 == '\0') {
    pVar5 = (uint)local_res10 * 2;
  }
  plVar6 = (int64_t *)*arg1;
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (int64_t *)*arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  dVar8 = g_0238fee8 / (double)param_2;
  (**(code **)(*this_ptr + 0x420))();
  uVar7 = (**(code **)(*this_ptr + 0x5f8))();
  cVar1 = (**(code **)(*plVar6 + 0x388))(dVar8,uVar7,param_3,param_4);
  if (cVar1 == '\0') {
    (**(code **)(*this_ptr + 0x5d0))();
    if (local_58 == '\0') {
      if (local_60 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_60 == 0) {
      return;
    }
    FUN_012dc360();
    FUN_00d50b20();
  }
  return;
}

