// Function: FUN_01f2fbe0
// Address: 01f2fbe0
// Size: 506 bytes
// Class: Unknown
// String references:
//   "objectAtIndex:"
//   "isVisible"
//   "delegate"
//   "gnWindow"


/* WARNING: Removing unreachable block (ram,0x01f2fd57) */
/* WARNING: Removing unreachable block (ram,0x01f2fd60) */
/* WARNING: Removing unreachable block (ram,0x01f2fd13) */
/* WARNING: Removing unreachable block (ram,0x01f2fd1c) */
/* WARNING: Removing unreachable block (ram,0x01f2fda4) */
/* WARNING: Removing unreachable block (ram,0x01f2fdb1) */

void FUN_01f2fbe0(void)

{
  undefined *puVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *unaff_RDI;
  ulonglong uVar6;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  lVar4 = FUN_01e587a0();
  puVar1 = PTR__objc_msgSend_024a9998;
  if (lVar4 != 0) {
    for (uVar6 = 0; uVar5 = (*(code *)puVar1)(), uVar6 < uVar5; uVar6 = uVar6 + 1) {
      (*(code *)puVar1)();
      cVar2 = (*(code *)puVar1)();
      if ((cVar2 != '\0') && (lVar4 = (*(code *)puVar1)(), lVar4 != 0)) {
        _objc_msgSend_stret();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_01f2fd30;
          }
        }
        else if (local_40 != 0) {
LAB_01f2fd30:
          FUN_01e58640();
          cVar2 = FUN_00d24090();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            FUN_00d21140();
          }
          local_38 = '\0';
          FUN_00d50b20();
        }
      }
    }
  }
  (*(code *)PTR__objc_release_024a99a0)();
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


