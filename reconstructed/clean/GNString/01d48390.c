// Function: FUN_01d48390
// Address: 01d48390
// Size: 668 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d48390(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  char cVar6;
  int64_t *this_ptr;
  
  iVar1 = *(int *)(this_ptr[7] + 0xc);
  if (iVar1 < 2) goto LAB_01d485c2;
  lVar2 = this_ptr[8];
  lVar3 = *(int64_t *)(*(int64_t *)(this_ptr[7] + 0x10) + (uint64_t)(iVar1 - 2) * 8);
  plVar4 = *(int64_t **)(lVar3 + 0x10);
  lVar5 = *(int64_t *)(lVar2 + 0x10);
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)(*plVar4 + 0x50))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    lVar5 = *(int64_t *)(lVar3 + 0x10);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x498))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = *(int64_t *)(lVar3 + 0x18);
  if (lVar5 != *(int64_t *)(lVar2 + 0x18)) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x468))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = *(int64_t *)(lVar3 + 0x20);
  if (lVar5 != *(int64_t *)(lVar2 + 0x20)) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x470))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if ((*(float *)(lVar3 + 0xc) != *(float *)(lVar2 + 0xc)) ||
     (NAN(*(float *)(lVar3 + 0xc)) || NAN(*(float *)(lVar2 + 0xc)))) {
    (**(code **)(*this_ptr + 0x478))();
  }
  if (((((*(float *)(lVar3 + 0x30) != *(float *)(lVar2 + 0x30)) ||
        (NAN(*(float *)(lVar3 + 0x30)) || NAN(*(float *)(lVar2 + 0x30)))) ||
       (*(float *)(lVar3 + 0x34) != *(float *)(lVar2 + 0x34))) ||
      ((NAN(*(float *)(lVar3 + 0x34)) || NAN(*(float *)(lVar2 + 0x34)) ||
       (*(float *)(lVar3 + 0x38) != *(float *)(lVar2 + 0x38))))) ||
     (NAN(*(float *)(lVar3 + 0x38)) || NAN(*(float *)(lVar2 + 0x38)))) {
LAB_01d48537:
    (**(code **)(*this_ptr + 0x4a0))(*(void*)(lVar3 + 0x30),*(void*)(lVar3 + 0x38));
  }
  else if ((*(float *)(lVar3 + 0x3c) != *(float *)(lVar2 + 0x3c)) ||
          (NAN(*(float *)(lVar3 + 0x3c)) || NAN(*(float *)(lVar2 + 0x3c)))) goto LAB_01d48537;
  if ((*(float *)(lVar3 + 0x40) != *(float *)(lVar2 + 0x40)) ||
     (NAN(*(float *)(lVar3 + 0x40)) || NAN(*(float *)(lVar2 + 0x40)))) {
    (**(code **)(*this_ptr + 0x480))();
  }
  if ((*(float *)(lVar3 + 0x44) != *(float *)(lVar2 + 0x44)) ||
     (NAN(*(float *)(lVar3 + 0x44)) || NAN(*(float *)(lVar2 + 0x44)))) {
    (**(code **)(*this_ptr + 0x488))();
  }
  if (*(int *)(lVar3 + 0x54) == *(int *)(lVar2 + 0x54)) {
    if (*(int *)(lVar3 + 0x48) == *(int *)(lVar2 + 0x48)) goto LAB_01d4859d;
LAB_01d485fc:
    (**(code **)(*this_ptr + 0x460))();
    if (*(int *)(lVar3 + 0x4c) != *(int *)(lVar2 + 0x4c)) goto LAB_01d48613;
LAB_01d485a8:
    if (*(char *)(lVar3 + 0x50) == *(char *)(lVar2 + 0x50)) goto LAB_01d485c2;
  }
  else {
    (**(code **)(*this_ptr + 0x490))();
    if (*(int *)(lVar3 + 0x48) != *(int *)(lVar2 + 0x48)) goto LAB_01d485fc;
LAB_01d4859d:
    if (*(int *)(lVar3 + 0x4c) == *(int *)(lVar2 + 0x4c)) goto LAB_01d485a8;
LAB_01d48613:
    (**(code **)(*this_ptr + 0x458))();
    if (*(char *)(lVar3 + 0x50) == *(char *)(lVar2 + 0x50)) goto LAB_01d485c2;
  }
  (**(code **)(*this_ptr + 0x4b0))();
LAB_01d485c2:
  FUN_01d47b90();
  (**(code **)(*this_ptr + 0x4d0))();
  return;
}

