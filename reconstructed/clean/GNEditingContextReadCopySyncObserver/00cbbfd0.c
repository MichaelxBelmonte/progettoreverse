// Function: FUN_00cbbfd0
// Address: 00cbbfd0
// Size: 611 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cbbfd0(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  char cVar3;
  uint uVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t this_ptr;
  int local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  if (*(int *)(lVar1 + 0xc) != 0) {
    uVar4 = *(uint *)(this_ptr + 0x154);
    local_40 = -1;
    while( true ) {
      lVar5 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      uVar8 = *(void*)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((void*)*(int64_t *)(lVar1 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar5 = FUN_00e8bc10();
      *(void*)(lVar5 + (uint64_t)(~uVar4 & 1) * 8) = uVar8;
    }
    FUN_00cc1410();
    uVar4 = FUN_00e31390();
    uVar8 = 3;
    cVar3 = FUN_00e314a0(3,uVar4 & 1 ^ 1);
    if (cVar3 == '\0') {
      iVar9 = 0x800;
      do {
        uVar4 = uVar4 & 1;
        if (1 < uVar4) {
          if (iVar9 < 2) {
            FUN_00da6800();
            iVar9 = 0x800;
          }
          else {
            iVar9 = iVar9 + -1;
          }
        }
        uVar8 = 3;
        cVar3 = FUN_00e314a0(3,uVar4 ^ 1);
      } while (cVar3 == '\0');
    }
    lVar1 = *(int64_t *)(this_ptr + 0x158);
    if (lVar1 != 0) {
      uVar4 = *(uint *)(this_ptr + 0x154);
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        do {
          uVar2 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar6 = _pthread_getspecific((void*)uVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar7 = FUN_00e8bc10();
          FUN_00d50b20();
          *(void*)(lVar7 + (uint64_t)(~uVar4 & 1) * 8) = uVar2;
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      FUN_00cc1410();
    }
    FUN_00d216c0();
  }
  return;
}

