// Function: FUN_01d85680
// Address: 01d85680
// Size: 696 bytes
// Class: GNValue
// String references:
//   "addObject:"


/* WARNING: Removing unreachable block (ram,0x01d858cc) */
/* WARNING: Removing unreachable block (ram,0x01d85714) */
/* WARNING: Removing unreachable block (ram,0x01d8571d) */
/* WARNING: Removing unreachable block (ram,0x01d856d9) */
/* WARNING: Removing unreachable block (ram,0x01d856e2) */
/* WARNING: Removing unreachable block (ram,0x01d85807) */
/* WARNING: Removing unreachable block (ram,0x01d858a3) */
/* WARNING: Removing unreachable block (ram,0x01d858b0) */

void FUN_01d85680(void)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_40;
  char local_38;
  
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_01ca6a90();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_01cae190();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (*(code *)PTR__objc_msgSend_024a9998)();
  if (*(int *)(local_40 + 0xc) < 1) {
    lVar3 = 0;
    bVar2 = false;
  }
  else {
    lVar4 = 0;
    bVar2 = false;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar4 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01ca74b0();
      if (lVar5 == local_40) {
        lVar3 = lVar5;
        if ((!bVar2) && (lVar5 != 0)) {
          if (local_38 != '\0') goto LAB_01d857f7;
          FUN_00d50b00();
          goto LAB_01d85835;
        }
joined_r0x01d8584a:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar5 != 0)) {
            FUN_00d50b20();
          }
LAB_01d85835:
          bVar2 = true;
          goto joined_r0x01d8584a;
        }
        if ((bVar2) && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_01d857f7:
        local_38 = '\0';
        bVar2 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00e1cfc0();
      (*(code *)PTR__objc_msgSend_024a9998)();
      lVar4 = lVar4 + 1;
      lVar5 = lVar3;
    } while (lVar4 < *(int *)(local_40 + 0xc));
  }
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)PTR__objc_release_024a99a0)();
  if ((bVar2) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}


