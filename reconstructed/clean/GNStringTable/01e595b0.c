// Function: FUN_01e595b0
// Address: 01e595b0
// Size: 636 bytes
// Class: GNStringTable
// String references:
//   "setRootView:"
//   "objectAtIndex:"
//   "removeFromSuperview"

void FUN_01e595b0(uint64_t param_1)

{
  void*puVar1;
  void*puVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  puVar1 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  (*puVar1)();
  lVar4 = (*puVar1)();
  if (-1 < lVar4 + -1) {
    do {
      lVar4 = lVar4 + -1;
      (*puVar1)(param_1,lVar4);
      uVar5 = (*puVar1)();
      cVar3 = (*puVar1)(param_1,uVar5);
      if (cVar3 != '\0') {
        local_48 = '\0';
        local_50 = 0;
        (*puVar1)(param_1,&local_50);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        (*puVar1)();
      }
    } while (0 < lVar4);
  }
  (*puVar1)(param_1,*(void*)(this_ptr + 0xa0));
  lVar4 = (*puVar1)();
  if (lVar4 == 0) {
    (*PTR__objc_release_024a99a0)();
    g_028b9e10 = 0;
  }
  (*puVar1)();
  (*puVar1)(param_1,0);
  puVar2 = PTR__objc_release_024a99a0;
  (*PTR__objc_release_024a99a0)();
  (*puVar1)();
  (*puVar2)();
  FUN_00d50b00();
  if (g_028b9df0 != 0) {
    FUN_01e583a0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01e59811;
      FUN_00d50b00();
    }
    else if (local_40 == 0) goto LAB_01e59811;
    FUN_00dd6a00();
    lVar4 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_38 = '\0';
    local_40 = lVar4;
    FUN_00e383c0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01e59811:
  FUN_00d50b20();
  *(void*)(this_ptr + 0xa0) = 0;
  return;
}

