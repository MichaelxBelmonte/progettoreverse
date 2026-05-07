// Function: FUN_01d85680
// Address: 01d85680
// Size: 696 bytes
// Class: GNValue
// String references:
//   "addObject:"

void FUN_01d85680(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_40;
  char local_38;
  
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  FUN_01ca6a90();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_01cae190();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  (*PTR__objc_msgSend_024a9998)();
  if (*(int *)(local_40 + 0xc) < 1) {
    lVar3 = 0;
    bVar2 = false;
  }
  else {
    lVar4 = 0;
    bVar2 = false;
    lVar5 = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar4 * 8);
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
      (*PTR__objc_msgSend_024a9998)();
      lVar4 = lVar4 + 1;
      lVar5 = lVar3;
    } while (lVar4 < *(int *)(local_40 + 0xc));
  }
  (*PTR__objc_msgSend_024a9998)();
  (*PTR__objc_release_024a99a0)();
  if ((bVar2) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}

