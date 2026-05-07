// Function: FUN_012596f0
// Address: 012596f0
// Size: 665 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_012596f0(int64_t param_1)

{
  char cVar1;
  void *pvVar2;
  void* pVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int iVar5;
  int local_40;
  
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  if ((cVar1 != '\0') && (lVar4 = this_ptr[0x1c], lVar4 != 0)) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar4 + 0xc)) {
      pvVar2 = _pthread_getspecific((void*)*(void*)(lVar4 + 0x10));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef880();
    }
    FUN_0015edf0();
    param_1 = lVar4;
  }
  cVar1 = (**(code **)(*this_ptr + 0x368))();
  pVar3 = (void*)param_1;
  if ((cVar1 != '\0') && (lVar4 = this_ptr[0xe], lVar4 != 0)) {
    if (0 < *(int *)(lVar4 + 0xc)) {
      iVar5 = 0;
      do {
        pvVar2 = _pthread_getspecific((void*)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c7260();
        pVar3 = (void*)param_1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar4 + 0xc));
    }
    FUN_012a3490();
  }
  if ((this_ptr[0x19] != 0) && (cVar1 = (**(code **)(*this_ptr + 0x368))(), cVar1 != '\0')) {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ec00();
  }
  FUN_00e8b7e0();
  return;
}

