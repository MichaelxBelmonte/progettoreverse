// Function: FUN_01ca7bd0
// Address: 01ca7bd0
// Size: 609 bytes
// Class: GNList
// String references:
//   "objectAtIndexedSubscript:"
//   "bytes"
//   "dataForType:"
//   "length"


/* WARNING: Removing unreachable block (ram,0x01ca7d45) */
/* WARNING: Removing unreachable block (ram,0x01ca7d4e) */
/* WARNING: Removing unreachable block (ram,0x01ca7d9e) */
/* WARNING: Removing unreachable block (ram,0x01ca7da7) */
/* WARNING: Removing unreachable block (ram,0x01ca7dd4) */
/* WARNING: Removing unreachable block (ram,0x01ca7ddd) */

undefined8 * FUN_01ca7bd0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *unaff_RDI;
  ulonglong uVar5;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)PTR__objc_msgSend_024a9998)();
  puVar1 = PTR__objc_msgSend_024a9998;
  for (uVar5 = 0; uVar3 = (*(code *)puVar1)(), uVar5 < uVar3; uVar5 = uVar5 + 1) {
    (*(code *)puVar1)();
    FUN_01ca74b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00e1cfc0();
    lVar4 = (*(code *)puVar1)();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      (*(code *)puVar1)();
      (*(code *)puVar1)();
      FUN_00c8e2b0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      local_38 = '\0';
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  (*(code *)PTR__objc_release_024a99a0)();
  if (*(int *)((longlong)puVar2 + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    FUN_00d50b20();
  }
  else {
    *unaff_RDI = puVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


