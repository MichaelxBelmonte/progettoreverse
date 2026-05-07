// Function: FUN_01a779a0
// Address: 01a779a0
// Size: 652 bytes
// Class: MUTimeHandleToolViewInfo
// === MUTimeHandleToolViewInfo properties ===
//                   _viewsWithSelection
//                   _editElement
//                   _removedPredecessors
//                   _removedSuccessors


int64_t * FUN_01a779a0(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f5210();
  lVar1 = *param_2;
  cVar4 = FUN_00d23d70();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (lVar1 != 0) {
      FUN_00d50b00();
      lVar6 = 0;
      while ((int)lVar6 < *(int *)(lVar1 + 0xc)) {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        lVar3 = *arg1;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
        if (local_68 == lVar3) {
          *(void*)(this_ptr + 1) = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          *this_ptr = lVar2;
          *(void*)(this_ptr + 1) = 1;
          FUN_001159b0();
          FUN_00d50b20();
          return this_ptr;
        }
      }
      FUN_001159b0();
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

