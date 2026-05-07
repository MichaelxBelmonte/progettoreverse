// Function: FUN_01f25620
// Address: 01f25620
// Size: 547 bytes
// Class: Unknown
// String references:
//   "setSize:"


/* WARNING: Removing unreachable block (ram,0x01f25674) */
/* WARNING: Removing unreachable block (ram,0x01f2567d) */
/* WARNING: Removing unreachable block (ram,0x01f257d9) */
/* WARNING: Removing unreachable block (ram,0x01f257e2) */
/* WARNING: Removing unreachable block (ram,0x01f25731) */
/* WARNING: Removing unreachable block (ram,0x01f2573a) */

undefined8 FUN_01f25620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  longlong lVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_01;
  longlong in_stack_ffffffffffffff88;
  char local_70;
  
  _objc_alloc();
  uVar2 = FUN_01d4e4f0();
  uVar2 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Qa,uVar2);
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  uVar3 = _objc_autorelease();
  uVar7 = (*(code *)puVar1)(extraout_XMM0_Qa_00,1);
  (*(code *)puVar1)(uVar7,uVar2);
  uVar2 = (*(code *)puVar1)();
  (*(code *)PTR__objc_release_024a99a0)();
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
      uVar7 = *(undefined8 *)(*(longlong *)(in_stack_ffffffffffffff88 + 0x10) + lVar6 * 8);
      _objc_alloc();
      uVar4 = FUN_01d4e4f0();
      lVar5 = (*(code *)puVar1)(extraout_XMM0_Qa_01,uVar4,in_R8,in_R9,uVar7);
      if (lVar5 != 0) {
        uVar7 = (*(code *)puVar1)(uVar2,param_2,param_3,param_4,uVar7);
        (*(code *)puVar1)(uVar7,lVar5);
        (*(code *)PTR__objc_release_024a99a0)();
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(in_stack_ffffffffffffff88 + 0xc));
  }
  FUN_01d565a0();
  FUN_00d50b20();
  return uVar3;
}


