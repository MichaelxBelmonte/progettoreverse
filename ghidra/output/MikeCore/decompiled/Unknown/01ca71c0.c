// Function: FUN_01ca71c0
// Address: 01ca71c0
// Size: 561 bytes
// Class: Unknown
// String references:
//   "dataWithBytes:length:"
//   "setData:forType:"


/* WARNING: Removing unreachable block (ram,0x01ca7263) */
/* WARNING: Removing unreachable block (ram,0x01ca726c) */

void FUN_01ca71c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  longlong local_90;
  char local_88;
  undefined *puVar10;
  
  _objc_alloc();
  uVar4 = (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_01ca74b0();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  uVar5 = FUN_00e1cfc0();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if (*(char *)(unaff_RDI + 0x30) == '\0') {
    uVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_msgSend_024a9998)(0,uVar6);
  }
  lVar7 = *unaff_RSI;
  if (*(int *)(lVar7 + 0xc) < 1) {
    bVar1 = false;
    lVar8 = 0;
  }
  else {
    lVar9 = 0;
    lVar8 = 0;
    bVar1 = false;
    puVar10 = PTR_s_setData_forType__026c98e0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar9 * 8);
      if (lVar8 == lVar7) {
        lVar7 = lVar8;
        bVar3 = bVar1;
        if ((!bVar1) && (lVar8 != 0)) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar1) && (lVar8 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar1 = bVar3;
      lVar8 = lVar7;
      puVar2 = PTR__objc_msgSend_024a9998;
      uVar6 = (*(code *)PTR__objc_msgSend_024a9998)
                        ((longlong)*(int *)(lVar8 + 0x18),*(undefined8 *)(lVar8 + 0x10),param_3,
                         param_4,puVar10,uVar4);
      (*(code *)puVar2)(uVar5,uVar6);
      lVar9 = lVar9 + 1;
      lVar7 = *unaff_RSI;
    } while (lVar9 < *(int *)(lVar7 + 0xc));
  }
  (*(code *)PTR__objc_release_024a99a0)();
  if ((bVar1) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return;
}


