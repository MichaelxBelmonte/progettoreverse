// Function: FUN_017d5dc0
// Address: 017d5dc0
// Size: 632 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_017d5dc0(uint64_t param_1,uint64_t param_2,uint8_t param_3)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t this_ptr;
  int iVar4;
  int local_40;
  
  cVar2 = FUN_00d59e50();
  if ((cVar2 != '\0') && (lVar1 = *(int64_t *)(this_ptr + 0x68), lVar1 != 0)) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar1 + 0xc)) {
      pvVar3 = _pthread_getspecific((void*)*(void*)(lVar1 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018bb110();
    }
    FUN_018bc370();
  }
  param_1 = param_1 & 0xff;
  FUN_00d5af30(param_1,param_2,param_3);
  cVar2 = FUN_00d59e50();
  if ((cVar2 != '\0') && (lVar1 = *(int64_t *)(this_ptr + 0x68), lVar1 != 0)) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific((void*)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_018bb110();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_018bc370();
  }
  return;
}

