// Function: FUN_01e3c530
// Address: 01e3c530
// Size: 843 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e3c530(uint64_t param_1)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  bool bVar6;
  int64_t *this_ptr;
  float extraout_XMM0_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_88;
  int64_t local_68;
  char local_60;
  
  fVar10 = (float)((uint64_t)param_1 >> 0x20);
  fVar8 = (float)param_1;
  fVar11 = (float)*(void*)((int64_t)this_ptr + 0x114);
  fVar12 = (float)((uint64_t)*(void*)((int64_t)this_ptr + 0x114) >> 0x20);
  if (((fVar11 == fVar8) && (!NAN(fVar11) && !NAN(fVar8))) && (fVar12 == fVar10)) {
    return;
  }
  fVar9 = 0.0;
  fVar7 = fVar8;
  if (((0.0 < fVar11) && (fVar7 = fVar12, 0.0 < fVar12)) &&
     (*(int *)((int64_t)this_ptr + 0xb4) == 0)) {
    plVar4 = (int64_t *)this_ptr[6];
    plVar2 = this_ptr;
    while (plVar3 = plVar4, plVar3 != (int64_t *)0x0) {
      plVar4 = (int64_t *)plVar3[6];
      plVar2 = plVar3;
      if ((int64_t *)plVar3[6] == plVar3) {
        plVar4 = plVar3;
      }
    }
    cVar5 = (**(code **)(*plVar2 + 0x4b8))();
    fVar7 = extraout_XMM0_Da;
    if (cVar5 != '\0') {
      FUN_00d50b00();
      FUN_00d50b20();
      FUN_01e436c0();
      fVar7 = fVar9;
    }
  }
  cVar5 = (**(code **)(*this_ptr + 0x588))(fVar7);
  if ((cVar5 != '\0') && (plVar2 = (int64_t *)this_ptr[6], plVar2 != (int64_t *)0x0)) {
    FUN_00d50b00();
    uVar1 = *(void*)((int64_t)this_ptr + 0x114);
    FUN_00d50b00();
    local_88 = (float)uVar1;
    (**(code **)(*plVar2 + 0x5a8))(fVar8 - local_88,&stack0xffffffffffffffb8);
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)this_ptr[6];
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*this_ptr + 0x500))();
    (**(code **)(*plVar2 + 0x788))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  fVar11 = (float)*(void*)((int64_t)this_ptr + 0x114);
  if (((fVar11 == fVar8) && (!NAN(fVar11) && !NAN(fVar8))) &&
     ((float)((uint64_t)*(void*)((int64_t)this_ptr + 0x114) >> 0x20) == fVar10)) {
    return;
  }
  *(int *)((int64_t)this_ptr + 0x124) = *(int *)((int64_t)this_ptr + 0x124) + 1;
  (**(code **)(*this_ptr + 0x528))();
  *(float *)((int64_t)this_ptr + 0x114) = fVar8;
  *(float *)(this_ptr + 0x23) = fVar10;
  (**(code **)(*this_ptr + 0x620))();
  (**(code **)(*this_ptr + 0x590))(fVar11,fVar8);
  if (0.0 < *(float *)((int64_t)this_ptr + 0x114)) {
    fVar8 = *(float *)(this_ptr + 0x23);
    fVar10 = 0.0;
    if ((0.0 < fVar8) && (*(int *)((int64_t)this_ptr + 0xb4) == 0)) {
      plVar4 = (int64_t *)this_ptr[6];
      plVar2 = this_ptr;
      while (plVar3 = plVar4, plVar3 != (int64_t *)0x0) {
        plVar4 = (int64_t *)plVar3[6];
        plVar2 = plVar3;
        if ((int64_t *)plVar3[6] == plVar3) {
          plVar4 = plVar3;
        }
      }
      cVar5 = (**(code **)(*plVar2 + 0x4b8))();
      if (cVar5 != '\0') {
        FUN_00d50b00();
        FUN_00d50b20();
        FUN_01e436c0();
        bVar6 = 0.0 < fVar8 && 0.0 < fVar10;
        goto LAB_01e3c7e9;
      }
    }
  }
  bVar6 = false;
LAB_01e3c7e9:
  FUN_01e3c350(1,bVar6);
  if (this_ptr[6] != 0) {
    (**(code **)(*this_ptr + 0x7b0))();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if (local_68 == this_ptr[6]) {
      FUN_01cf74e0();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x520))();
  *(int *)((int64_t)this_ptr + 0x124) = *(int *)((int64_t)this_ptr + 0x124) + -1;
  return;
}

