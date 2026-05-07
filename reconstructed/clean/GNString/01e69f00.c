// Function: FUN_01e69f00
// Address: 01e69f00
// Size: 729 bytes
// Class: GNString
// String references:
//   "name"
//   "isEqualTo:"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01e69f00(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  bool bVar2;
  void*puVar3;
  char cVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_70;
  char local_68;
  void*puVar8;
  
  FUN_01e6ad10();
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_01e6a092;
    FUN_00d50b00();
    if (0 < *(int *)(local_70 + 0xc)) goto LAB_01e69f58;
LAB_01e6a19f:
    bVar2 = false;
  }
  else {
    if (local_70 != 0) {
      if (*(int *)(local_70 + 0xc) < 1) goto LAB_01e6a19f;
LAB_01e69f58:
      if (g_028ba0e0 == 0) {
        _objc_alloc();
        (*PTR__objc_msgSend_024a9998)();
        lVar5 = (*PTR__objc_msgSend_024a9998)();
        if ((lVar5 != 0) && (0 < *(int *)(local_70 + 0xc))) {
          lVar7 = 0;
          lVar5 = 0;
          bVar2 = false;
          puVar8 = PTR_s_isEqualTo__026ca3c0;
          do {
            lVar1 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + lVar7 * 8);
            if (lVar5 == lVar1) {
              if ((!bVar2) && (lVar5 != 0)) {
                bVar2 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              if ((bVar2) && (lVar5 != 0)) {
                FUN_00d50b20();
                bVar2 = true;
                lVar5 = lVar1;
              }
              else {
                bVar2 = true;
                lVar5 = lVar1;
              }
            }
            puVar3 = PTR__objc_msgSend_024a9998;
            (*PTR__objc_msgSend_024a9998)();
            uVar6 = (*puVar3)();
            cVar4 = (*puVar3)(param_1,uVar6,param_3,param_4,puVar8);
            lVar1 = g_028ba0e0;
            if (cVar4 != '\0') {
              if ((g_028ba0e0 != lVar5) && (FUN_00d50b00(), g_028ba0e0 = lVar5, lVar1 != 0)) {
                FUN_00d50b20();
              }
              if (g_028ba0e8 == '\0') {
                g_028ba0e8 = '\x01';
                FUN_00e8cb90();
              }
              break;
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(local_70 + 0xc));
          if (bVar2) {
            FUN_00d50b20();
          }
        }
        (*PTR__objc_release_024a99a0)();
        if ((g_028ba0e0 == 0) && (lVar5 = **(int64_t **)(local_70 + 0x10), lVar5 != 0)) {
          FUN_00d50b00();
          lVar7 = g_028ba0e0;
          if (g_028ba0e0 == lVar5) {
            if (g_028ba0e8 == '\0') goto LAB_01e6a184;
          }
          else {
            FUN_00d50b00();
            g_028ba0e0 = lVar5;
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            if ((lVar5 == 0) || (g_028ba0e8 != '\0')) {
              if (lVar5 == 0) goto LAB_01e6a19f;
            }
            else {
LAB_01e6a184:
              g_028ba0e8 = '\x01';
              FUN_00e8cb90();
            }
          }
          FUN_00d50b20();
          goto LAB_01e6a19f;
        }
      }
      lVar5 = g_028ba0e0;
      bVar2 = false;
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x01e6a1b2;
    }
LAB_01e6a092:
    bVar2 = true;
  }
  lVar5 = g_028ba0e0;
  *(void*)(this_ptr + 1) = 0;
joined_r0x01e6a1b2:
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  if (!bVar2) {
    FUN_00d50b20();
  }
  return this_ptr;
}

