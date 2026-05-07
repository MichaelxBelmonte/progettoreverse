// Function: FUN_002c2c30
// Address: 002c2c30
// Size: 734 bytes
// Class: GNImage
// === GNImage properties ===
//                   _alternateImage
//                   _disabledImage
//                   _alternateTitle
//                   _isBordered


void FUN_002c2c30(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_28;
  char local_20;
  
  if (*(int *)(arg1 + 0x20) == 1) {
    if ((g_028063e8 == 0) || (lVar3 = g_028063e8, g_028063f1 == '\0')) {
      FUN_00e8cb50();
      lVar3 = g_026fce20;
      if (g_028063e8 == 0) {
        if (g_026fce20 != 0) {
          FUN_00d50b00();
        }
        FUN_01d51a40();
        lVar2 = g_028063e8;
        if (g_028063e8 != local_28) {
          if (local_20 == '\0') {
            if (local_28 == 0) {
              lVar2 = 0;
            }
            else {
              FUN_00d50b00();
              lVar2 = local_28;
            }
          }
          else {
            local_20 = '\0';
            lVar2 = local_28;
          }
          bVar1 = g_028063e8 != 0;
          g_028063e8 = lVar2;
          if (bVar1) {
            FUN_00d50b20();
            lVar2 = local_28;
          }
        }
        if ((lVar2 != 0) && (g_028063f0 == '\0')) {
          g_028063f0 = '\x01';
          FUN_00e8cb90();
          lVar2 = local_28;
        }
        if ((local_20 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        g_028063f1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028063f1 = '\x01';
        FUN_00e8cb70();
      }
      lVar3 = g_028063e8;
      *(void*)(this_ptr + 1) = 0;
      if (lVar3 != 0) goto LAB_002c2ee4;
LAB_002c2e3c:
      lVar3 = 0;
      goto LAB_002c2eec;
    }
LAB_002c2c94:
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (*(int *)(arg1 + 0x20) != 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    if ((g_028063d8 != 0) && (lVar3 = g_028063d8, g_028063e1 != '\0')) goto LAB_002c2c94;
    FUN_00e8cb50();
    lVar3 = g_026fce18;
    if (g_028063d8 == 0) {
      if (g_026fce18 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      lVar2 = g_028063d8;
      if (g_028063d8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = g_028063d8 != 0;
        g_028063d8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (g_028063e0 == '\0')) {
        g_028063e0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028063e1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028063e1 = '\x01';
      FUN_00e8cb70();
    }
    lVar3 = g_028063d8;
    *(void*)(this_ptr + 1) = 0;
    if (lVar3 == 0) goto LAB_002c2e3c;
  }
LAB_002c2ee4:
  FUN_00d50b00();
LAB_002c2eec:
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

