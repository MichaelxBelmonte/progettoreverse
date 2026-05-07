// Function: FUN_01e6a4a0
// Address: 01e6a4a0
// Size: 1107 bytes
// Class: GNString
// String references:
//   "dictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e6a4a0(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar4;
  uint32_t extraout_XMM0_Da;
  uint64_t uVar5;
  int64_t local_80;
  char local_78;
  
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  if (**(int64_t **)(this_ptr + 0x10) == 0) {
    uVar4 = FUN_00d50b00();
    (*PTR__objc_msgSend_024a9998)(uVar4,&stack0xffffffffffffffc0);
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x28) != 0) {
    FUN_00d50b00();
    uVar4 = FUN_00d50b20();
    puVar1 = PTR__objc_msgSend_024a9998;
    (*PTR__objc_msgSend_024a9998)(uVar4,*(void*)PTR__NSPrintSaveJob_0249c198);
    (*puVar1)();
    lVar3 = *(int64_t *)(this_ptr + 0x28);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    uVar2 = FUN_00e1d020();
    uVar2 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,uVar2);
    (*PTR__objc_msgSend_024a9998)(*(void*)PTR__NSPrintJobSavingURL_0249c180,uVar2);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    uVar4 = (*puVar1)();
    uVar2 = (*puVar1)(uVar4,1);
    (*puVar1)(*(void*)PTR__NSPrintAllPages_0249c178,uVar2);
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  (*puVar1)();
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    FUN_00d50b00();
  }
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  lVar3 = (*PTR__objc_msgSend_024a9998)();
  uVar4 = (*PTR__objc_release_024a99a0)();
  uVar2 = (*PTR__objc_msgSend_024a9998)(uVar4,lVar3 != 0);
  (*PTR__objc_msgSend_024a9998)(*(void*)PTR__NSPrintOrientation_0249c188,uVar2);
  FUN_00d50b20();
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    FUN_00d50b00();
  }
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  uVar4 = (*PTR__objc_msgSend_024a9998)();
  (*PTR__objc_release_024a99a0)();
  uVar5 = FUN_01f1f210(uVar4,param_2);
  FUN_00d50b20();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  (*puVar1)();
  uVar2 = (*puVar1)();
  (*puVar1)(*(void*)PTR__NSPrintPaperSize_0249c190,uVar2);
  uVar4 = (*puVar1)(SUB84((double)(float)uVar5,0),(double)(float)((uint64_t)uVar5 >> 0x20))
  ;
  local_80 = *arg1;
  local_78 = '\0';
  (*puVar1)(uVar4,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d50b00();
  uVar4 = (*PTR__objc_msgSend_024a9998)(uVar4,&stack0xffffffffffffff90);
  if (this_ptr != 0) {
    uVar4 = FUN_00d50b20();
  }
  puVar1 = PTR__objc_msgSend_024a9998;
  uVar4 = (*PTR__objc_msgSend_024a9998)(uVar4,0);
  (*puVar1)(uVar4,1);
  (*puVar1)();
  (*PTR__objc_release_024a99a0)();
  return;
}

