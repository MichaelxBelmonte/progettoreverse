// Function: FUN_00cbb900
// Address: 00cbb900
// Size: 1245 bytes
// Class: GNEditingContextReadCopySyncObserver
// String references:
//   "GNEditingContextReadCopySyncObserver"
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cbb900(void)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  
  iVar2 = FUN_00d36e20();
  if (iVar2 == 1) {
    FUN_00cb1fa0();
    cVar1 = (**(code **)(*this_ptr + 0x518))();
    if (cVar1 != '\0') {
      local_50 = '\0';
      local_58 = 0;
      FUN_00da5ad0();
      FUN_00da7170();
      FUN_00da7180();
      if (local_68 != 0) {
        cVar1 = (**(code **)(*this_ptr + 0x520))();
        if (cVar1 == '\0') {
          (**(code **)(*this_ptr + 0x528))();
          FUN_00cb1fa0();
        }
        FUN_00da7180();
        if ((local_68 != 0) && (local_60 != '\0')) {
          FUN_00d50b20();
        }
      }
    }
    iVar2 = FUN_00c8d620();
    if (iVar2 != 0) {
      (**(code **)(*(int64_t *)this_ptr[0x29] + 0x368))();
      lVar3 = this_ptr[0x28];
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar5 = 0;
        do {
          plVar4 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 8);
          if ((g_026d1090 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
            g_027ab030 = "GNEditingContextReadCopySyncObserver";
            g_027ab040 = 0;
            g_027ab038 = 0;
            ___cxa_guard_release();
          }
          if (plVar4 == (int64_t *)0x0) {
            lVar3 = 0;
          }
          else {
            (**(code **)(*plVar4 + 0x360))();
            lVar3 = FUN_00e86120();
          }
          FUN_00d50b00();
          (**(code **)(*(int64_t *)((int64_t)plVar4 + lVar3) + 0x18))();
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
          lVar3 = this_ptr[0x28];
        } while (lVar5 < *(int *)(lVar3 + 0xc));
      }
      (**(code **)(*(int64_t *)this_ptr[0x29] + 0x378))();
    }
    if (0 < (int)this_ptr[0x2a]) {
      FUN_00cbbfd0();
    }
    iVar2 = FUN_00c8d620();
    if (iVar2 != 0) {
      FUN_00da5ad0();
      cVar1 = *(char *)(local_58 + 0x18);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        FUN_00cb2d80();
      }
    }
    if (this_ptr[0x11] != 0) {
      this_ptr[0x11] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 1000))();
  }
  iVar2 = *(int *)((int64_t)this_ptr + 0xe4);
  if (iVar2 < 1) {
    iVar2 = (int)this_ptr[0x1d];
    if (iVar2 < 1) goto LAB_00cbbdba;
    plVar4 = this_ptr + 0x1d;
  }
  else {
    plVar4 = (int64_t *)((int64_t)this_ptr + 0xe4);
  }
  *(int *)plVar4 = iVar2 + -1;
LAB_00cbbdba:
  (**(code **)(*(int64_t *)this_ptr[0x1b] + 0x378))();
  return;
}

