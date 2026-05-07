// Function: FUN_007db2b0
// Address: 007db2b0
// Size: 659 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_007db2b0(void* param_1)

{
  double dVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = *(double *)(this_ptr + 0x48);
  dVar6 = *(double *)(this_ptr + 0x50);
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar9 = *(double *)(lVar4 + 0x48);
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar4 + 0x50);
  dVar5 = dVar1;
  dVar7 = dVar9;
  if ((dVar8 < dVar6) && (dVar5 = dVar6, dVar7 = dVar8, dVar9 < dVar1)) {
    if (dVar8 <= dVar9) {
      dVar9 = dVar8;
    }
    dVar5 = dVar1;
    dVar7 = dVar9;
    if (dVar1 <= dVar6) {
      dVar5 = dVar6;
    }
  }
  if ((*(double *)(this_ptr + 0x48) != dVar7) || (NAN(*(double *)(this_ptr + 0x48)) || NAN(dVar7))
     ) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x48) = dVar7;
    FUN_00d64910();
  }
  if ((*(double *)(this_ptr + 0x50) != dVar5) || (NAN(*(double *)(this_ptr + 0x50)) || NAN(dVar5))
     ) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x50) = dVar5;
    FUN_00d64910();
  }
  dVar8 = *(double *)(this_ptr + 0x38);
  dVar6 = *(double *)(this_ptr + 0x40);
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar9 = *(double *)(lVar4 + 0x38);
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  dVar1 = *(double *)(lVar4 + 0x38);
  if (dVar8 < dVar6) {
    if (dVar1 <= dVar9) goto LAB_007db4b5;
    if (dVar8 <= dVar9) {
      dVar9 = dVar8;
    }
    dVar8 = dVar9;
    dVar9 = dVar8;
    if (dVar1 <= dVar6) goto LAB_007db4b5;
  }
  dVar8 = dVar9;
  dVar6 = dVar1;
LAB_007db4b5:
  if ((*(double *)(this_ptr + 0x38) != dVar8) || (NAN(*(double *)(this_ptr + 0x38)) || NAN(dVar8))
     ) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x38) = dVar8;
    FUN_00d64910();
  }
  if ((*(double *)(this_ptr + 0x40) == dVar6) &&
     (!NAN(*(double *)(this_ptr + 0x40)) && !NAN(dVar6))) {
    return;
  }
  FUN_00d64850();
  *(double *)(this_ptr + 0x40) = dVar6;
  FUN_00d64910();
  return;
}

