// Function: FUN_01f25620
// Address: 01f25620
// Size: 547 bytes
// Class: Unknown
// String references:
//   "setSize:"

uint64_t FUN_01f25620(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void*puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t in_R8;
  uint64_t in_R9;
  int64_t lVar6;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qa_01;
  int64_t in_stack_ffffffffffffff88;
  char local_70;
  
  _objc_alloc();
  uVar2 = FUN_01d4e4f0();
  uVar2 = (*PTR__objc_msgSend_024a9998)(extraout_XMM0_Qa,uVar2);
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  uVar3 = _objc_autorelease();
  uVar7 = (*puVar1)(extraout_XMM0_Qa_00,1);
  (*puVar1)(uVar7,uVar2);
  uVar2 = (*puVar1)();
  (*PTR__objc_release_024a99a0)();
  FUN_01d53380();
  if (local_70 == '\0') {
    if (in_stack_ffffffffffffff88 == 0) {
      return uVar3;
    }
    FUN_00d50b00();
  }
  else if (in_stack_ffffffffffffff88 == 0) {
    return uVar3;
  }
  if (0 < *(int *)(in_stack_ffffffffffffff88 + 0xc)) {
    lVar6 = 0;
    do {
      uVar7 = *(void*)(*(int64_t *)(in_stack_ffffffffffffff88 + 0x10) + lVar6 * 8);
      _objc_alloc();
      uVar4 = FUN_01d4e4f0();
      lVar5 = (*puVar1)(extraout_XMM0_Qa_01,uVar4,in_R8,in_R9,uVar7);
      if (lVar5 != 0) {
        uVar7 = (*puVar1)(uVar2,param_2,param_3,param_4,uVar7);
        (*puVar1)(uVar7,lVar5);
        (*PTR__objc_release_024a99a0)();
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(in_stack_ffffffffffffff88 + 0xc));
  }
  FUN_01d565a0();
  FUN_00d50b20();
  return uVar3;
}

