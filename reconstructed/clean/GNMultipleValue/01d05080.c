// Function: FUN_01d05080
// Address: 01d05080
// Size: 537 bytes
// Class: GNMultipleValue
// String references:
//   "colorChanged:"

void FUN_01d05080(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 == 1) && (iVar4 = FUN_01d3b630(), iVar4 == 1)) {
    cVar3 = (**(code **)(*this_ptr + 0x878))();
    if ((cVar3 != '\0') && (cVar3 = FUN_01e420b0(), cVar3 == '\0')) {
      FUN_01e42250();
    }
    FUN_01d3abf0();
    uVar6 = FUN_01e466c0();
    _objc_alloc();
    (*PTR__objc_msgSend_024a9998)();
    if (g_028b7bd8 == 0) {
      _objc_alloc();
      g_028b7bd8 = (*PTR__objc_msgSend_024a9998)();
    }
    uVar7 = FUN_01e3f820();
    cVar3 = FUN_00d05410(uVar6,uVar7,param_2);
    if (cVar3 != '\0') {
      uVar6 = FUN_00d50b00();
      (*PTR__objc_msgSend_024a9998)(uVar6,&stack0xffffffffffffffb8);
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      puVar2 = PTR__objc_msgSend_024a9998;
      uVar6 = (*PTR__objc_msgSend_024a9998)();
      uVar6 = (*puVar2)(uVar6,PTR_s_colorChanged__026c9710);
      uVar6 = (*puVar2)(uVar6,g_028b7bd8);
      (*puVar2)(uVar6,1);
      lVar1 = this_ptr[0x39];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar5 = FUN_01f25910();
      uVar6 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,uVar5);
      if (lVar1 != 0) {
        uVar6 = FUN_00d50b20();
      }
      (*PTR__objc_msgSend_024a9998)(uVar6,0);
    }
    (*PTR__objc_release_024a99a0)();
  }
  else {
    FUN_01d122b0();
  }
  return;
}

