// Function: FUN_01ca71c0
// Address: 01ca71c0
// Size: 561 bytes
// Class: Unknown
// String references:
//   "dataWithBytes:length:"
//   "setData:forType:"

void FUN_01ca71c0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  bool bVar1;
  void*puVar2;
  bool bVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t local_90;
  char local_88;
  void*puVar10;
  
  _objc_alloc();
  uVar4 = (*PTR__objc_msgSend_024a9998)();
  FUN_01ca74b0();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  uVar5 = FUN_00e1cfc0();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if (*(char *)(this_ptr + 0x30) == '\0') {
    uVar6 = (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_msgSend_024a9998)(0,uVar6);
  }
  lVar7 = *arg1;
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
      lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar9 * 8);
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
      uVar6 = (*PTR__objc_msgSend_024a9998)
                        ((int64_t)*(int *)(lVar8 + 0x18),*(void*)(lVar8 + 0x10),param_3,
                         param_4,puVar10,uVar4);
      (*puVar2)(uVar5,uVar6);
      lVar9 = lVar9 + 1;
      lVar7 = *arg1;
    } while (lVar9 < *(int *)(lVar7 + 0xc));
  }
  (*PTR__objc_release_024a99a0)();
  if ((bVar1) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return;
}

