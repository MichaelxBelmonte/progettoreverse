// Function: FUN_017d5470
// Address: 017d5470
// Size: 647 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_017d5470(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_50;
  int local_38;
  
  lVar1 = *(int64_t *)(arg1 + 0x110);
  if (lVar1 == 0) {
LAB_017d5674:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_38 = -1;
  do {
    do {
      lVar4 = (int64_t)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_38) {
        FUN_01c0a2d0();
        lVar1 = *(int64_t *)(arg1 + 0x110);
        if (lVar1 == 0) goto LAB_017d5674;
        local_38 = -1;
        goto LAB_017d5605;
      }
      lVar7 = *(int64_t *)(lVar1 + 0x10);
      local_50 = *(int64_t *)(lVar7 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar7);
      pVar6 = (void*)lVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01783c70();
    } while (iVar3 != 0);
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01783c80();
  } while (cVar2 != '\0');
  goto LAB_017d56bb;
  while( true ) {
    lVar7 = *(int64_t *)(lVar1 + 0x10);
    local_50 = *(int64_t *)(lVar7 + 8 + lVar4 * 8);
    pvVar5 = _pthread_getspecific((void*)lVar7);
    pVar6 = (void*)lVar7;
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01783c70();
    if (iVar3 == 0) break;
LAB_017d5605:
    lVar4 = (int64_t)local_38;
    local_38 = local_38 + 1;
    if (*(int *)(lVar1 + 0xc) <= local_38) {
      FUN_01c0a2d0();
      goto LAB_017d5674;
    }
  }
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01783c80();
LAB_017d56bb:
  *(void*)(this_ptr + 1) = 0;
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = local_50;
  *(void*)(this_ptr + 1) = 1;
  FUN_01c0a2d0();
  return;
}

