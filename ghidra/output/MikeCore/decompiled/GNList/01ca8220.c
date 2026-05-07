// Function: FUN_01ca8220
// Address: 01ca8220
// Size: 546 bytes
// Class: GNList
// String references:
//   "objectAtIndexedSubscript:"
//   "types"
//   "objectAtIndex:"


/* WARNING: Removing unreachable block (ram,0x01ca83e7) */
/* WARNING: Removing unreachable block (ram,0x01ca83f0) */

void FUN_01ca8220(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *unaff_RDI;
  longlong local_a8;
  char local_a0;
  ulonglong local_68;
  longlong local_50;
  char local_48;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  lVar3 = (*(code *)PTR__objc_msgSend_024a9998)();
  puVar1 = PTR__objc_msgSend_024a9998;
  if (lVar3 != 0) {
    for (local_68 = 0; uVar4 = (*(code *)puVar1)(), local_68 < uVar4; local_68 = local_68 + 1) {
      (*(code *)puVar1)();
      (*(code *)puVar1)();
      for (uVar4 = 0; uVar5 = (*(code *)puVar1)(), uVar4 < uVar5; uVar4 = uVar4 + 1) {
        (*(code *)puVar1)();
        FUN_00e1ccf0();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_01ca8090();
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        FUN_00d235a0();
        if (local_a8 != 0) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  (*(code *)PTR__objc_release_024a99a0)();
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


