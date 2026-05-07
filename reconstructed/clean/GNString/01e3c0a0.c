// Function: FUN_01e3c0a0
// Address: 01e3c0a0
// Size: 620 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e3c0a0(uint64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  bool bVar6;
  int64_t *this_ptr;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  float fVar8;
  float fVar9;
  uint32_t uVar10;
  float fVar11;
  uint32_t local_68;
  
  fVar9 = (float)((uint64_t)param_2 >> 0x20);
  fVar11 = (float)param_2;
  fVar8 = (float)((uint64_t)param_1 >> 0x20);
  if ((*(float *)((int64_t)this_ptr + 0x10c) == (float)param_1) &&
     (!NAN(*(float *)((int64_t)this_ptr + 0x10c)) && !NAN((float)param_1))) {
    if ((*(float *)(this_ptr + 0x22) == fVar8) &&
       (!NAN(*(float *)(this_ptr + 0x22)) && !NAN(fVar8))) {
      if ((*(float *)((int64_t)this_ptr + 0x114) == fVar11) &&
         (!NAN(*(float *)((int64_t)this_ptr + 0x114)) && !NAN(fVar11))) {
        if ((*(float *)(this_ptr + 0x23) == fVar9) &&
           (!NAN(*(float *)(this_ptr + 0x23)) && !NAN(fVar9))) {
          return;
        }
      }
    }
  }
  *(int *)((int64_t)this_ptr + 0x124) = *(int *)((int64_t)this_ptr + 0x124) + 1;
  uVar7 = 0;
  if (((*(float *)((int64_t)this_ptr + 0x114) <= 0.0) ||
      (uVar10 = 0, *(float *)(this_ptr + 0x23) <= 0.0)) ||
     (*(int *)((int64_t)this_ptr + 0xb4) != 0)) {
LAB_01e3c1b2:
    plVar2 = (int64_t *)this_ptr[6];
    uVar10 = uVar7;
  }
  else {
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
    uVar7 = extraout_XMM0_Da;
    if (cVar5 == '\0') goto LAB_01e3c1b2;
    FUN_00d50b00();
    FUN_00d50b20();
    FUN_01e436c0();
    plVar2 = (int64_t *)this_ptr[6];
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00(uVar10);
    (**(code **)(*this_ptr + 0x500))();
    (**(code **)(*plVar2 + 0x788))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  uVar1 = *(void*)((int64_t)this_ptr + 0x114);
  *(void*)((int64_t)this_ptr + 0x10c) = param_1;
  *(float *)((int64_t)this_ptr + 0x114) = fVar11;
  *(float *)(this_ptr + 0x23) = fVar9;
  (**(code **)(*this_ptr + 0x620))();
  local_68 = (uint32_t)uVar1;
  (**(code **)(*this_ptr + 0x590))(local_68,(int)*(void*)((int64_t)this_ptr + 0x114));
  if (0.0 < *(float *)((int64_t)this_ptr + 0x114)) {
    fVar8 = *(float *)(this_ptr + 0x23);
    fVar11 = 0.0;
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
        bVar6 = 0.0 < fVar8 && 0.0 < fVar11;
        goto LAB_01e3c2d9;
      }
    }
  }
  bVar6 = false;
LAB_01e3c2d9:
  FUN_01e3c350(1,bVar6);
  (**(code **)(*this_ptr + 0x520))();
  *(int *)((int64_t)this_ptr + 0x124) = *(int *)((int64_t)this_ptr + 0x124) + -1;
  return;
}

