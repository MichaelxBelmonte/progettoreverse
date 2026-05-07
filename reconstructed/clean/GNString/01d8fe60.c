// Function: FUN_01d8fe60
// Address: 01d8fe60
// Size: 504 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01d8fe60(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int64_t *arg1;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  byte bVar6;
  int64_t local_48;
  char local_40;
  
  bVar1 = 1;
  lVar5 = local_48;
  if (((int64_t *)arg1[0x29] == (int64_t *)0x0) ||
     ((**(code **)(*(int64_t *)arg1[0x29] + 0x3f8))(), local_48 == 0)) {
    lVar5 = 0;
    bVar6 = 0;
    bVar3 = false;
    plVar4 = (int64_t *)arg1[0x2a];
    bVar2 = false;
    if (plVar4 == (int64_t *)0x0) goto LAB_01d8fee9;
LAB_01d8ff1e:
    (**(code **)(*plVar4 + 0x3f8))();
    if (local_48 == lVar5) {
      if ((bool)(bVar1 & local_48 != 0)) {
        bVar3 = true;
        if (local_40 != '\0') goto LAB_01d8ffe4;
        bVar3 = true;
        FUN_00d50b00();
      }
LAB_01d8ffd0:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      if ((bool)(bVar6 & lVar5 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
        lVar5 = local_48;
        goto LAB_01d8ffd0;
      }
      bVar3 = true;
      lVar5 = local_48;
    }
    else if ((bool)(bVar6 & lVar5 != 0)) {
      FUN_00d50b20();
      bVar3 = true;
      lVar5 = local_48;
    }
    else {
      bVar3 = true;
      lVar5 = local_48;
    }
LAB_01d8ffe4:
    if (lVar5 != 0) goto LAB_01d8fff1;
LAB_01d8fefa:
    bVar2 = true;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = true;
    if (*(int *)(local_48 + 0xc) == 0) {
      bVar3 = true;
      bVar1 = 0;
      bVar6 = 1;
      plVar4 = (int64_t *)arg1[0x2a];
      bVar2 = true;
      if (plVar4 != (int64_t *)0x0) goto LAB_01d8ff1e;
LAB_01d8fee9:
      bVar3 = bVar2;
      if (lVar5 == 0) goto LAB_01d8fefa;
    }
LAB_01d8fff1:
    if (*(int *)(lVar5 + 0xc) != 0) {
      *(void*)(this_ptr + 1) = 0;
      if (!bVar3) {
        FUN_00d50b00();
      }
      *this_ptr = lVar5;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
    bVar2 = false;
  }
  (**(code **)(*arg1 + 0x3f8))();
  if (bVar3 && !bVar2) {
    FUN_00d50b20();
  }
  return this_ptr;
}

