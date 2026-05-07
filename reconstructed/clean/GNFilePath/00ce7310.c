// Function: FUN_00ce7310
// Address: 00ce7310
// Size: 521 bytes
// Class: GNFilePath

uint64_t FUN_00ce7310(void)

{
  void*puVar1;
  int64_t lVar2;
  char cVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t this_ptr;
  int64_t *local_88;
  char local_80;
  void*puVar9;
  int64_t local_40;
  char local_38;
  
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  uVar4 = (*PTR__objc_msgSend_024a9998)();
  _NSSearchPathForDirectoriesInDomains();
  (*puVar1)();
  (*puVar1)();
  uVar5 = (*puVar1)();
  if (4 < uVar5) {
    (*puVar1)();
    cVar3 = (*puVar1)();
    if (cVar3 != '\0') {
      puVar9 = PTR__OBJC_CLASS___NSString_026ca408;
      uVar6 = (*puVar1)();
      uVar7 = (*puVar1)();
      uVar8 = (*puVar1)();
      (*puVar1)(uVar6,&cf__________,uVar7,uVar8,uVar4,puVar9);
    }
  }
  FUN_00e1ccf0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00cddf30();
  if ((local_80 == '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (*PTR__objc_release_024a99a0)();
  lVar2 = g_028001c0;
  if (g_028001c0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_88 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

