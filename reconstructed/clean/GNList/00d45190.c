// Function: FUN_00d45190
// Address: 00d45190
// Size: 679 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


bool FUN_00d45190(void)

{
  float fVar1;
  double dVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar9;
  float fVar10;
  double dVar11;
  
  plVar3 = (int64_t *)*arg1;
  if (plVar3 == this_ptr) {
    return true;
  }
  if (plVar3 == (int64_t *)0x0) goto LAB_00d451c5;
  lVar5 = (**(code **)(*plVar3 + 0x360))();
  lVar6 = FUN_00053ac0();
  if (lVar5 != lVar6) goto LAB_00d451c5;
  bVar9 = false;
  iVar8 = *(char *)((int64_t)this_ptr + 0xc) + -0x49;
  switch(iVar8) {
  case 0:
  case 0x20:
    if (*(char *)(*arg1 + 0xc) == 'l') {
      uVar7 = 0;
      switch(iVar8) {
      case 0:
      case 0x20:
        uVar7 = (uint64_t)(int)this_ptr[2];
        break;
      case 0x19:
        uVar7 = (uint64_t)*(byte *)(this_ptr + 2);
        break;
      case 0x1b:
        uVar7 = (uint64_t)(double)this_ptr[2];
        break;
      case 0x1d:
        uVar7 = (uint64_t)*(float *)(this_ptr + 2);
      }
      bVar9 = uVar7 == *(uint64_t *)(*arg1 + 0x10);
    }
    else {
      iVar8 = FUN_00d45870();
      iVar4 = FUN_00d45870();
      bVar9 = iVar8 == iVar4;
    }
    break;
  case 0x19:
    lVar5 = *arg1;
    bVar9 = false;
    switch(*(void*)(lVar5 + 0xc)) {
    case 0x49:
    case 0x69:
      bVar9 = *(int *)(lVar5 + 0x10) == 0;
      goto LAB_00d45367;
    case 0x62:
      bVar9 = *(char *)(lVar5 + 0x10) == '\0';
      goto LAB_00d45367;
    case 100:
      bVar9 = (bool)(-(*(double *)(lVar5 + 0x10) != 0.0) & 1);
      break;
    case 0x66:
      bVar9 = (bool)(-(*(float *)(lVar5 + 0x10) != 0.0) & 1);
      break;
    case 0x6c:
      bVar9 = *(int64_t *)(lVar5 + 0x10) == 0;
LAB_00d45367:
      bVar9 = !bVar9;
    }
    bVar9 = (bool)((char)this_ptr[2] == '\0' ^ bVar9);
    break;
  case 0x1b:
    dVar2 = (double)this_ptr[2];
    lVar5 = *arg1;
    dVar11 = 0.0;
    switch(*(void*)(lVar5 + 0xc)) {
    case 0x49:
    case 0x69:
      dVar11 = (double)*(int *)(lVar5 + 0x10);
      break;
    case 0x62:
      dVar11 = 0.0;
      if (*(char *)(lVar5 + 0x10) != '\0') {
        dVar11 = g_0238fee8;
      }
      break;
    case 100:
      dVar11 = *(double *)(lVar5 + 0x10);
      break;
    case 0x66:
      dVar11 = (double)*(float *)(lVar5 + 0x10);
      break;
    case 0x6c:
      dVar11 = (double)*(int64_t *)(lVar5 + 0x10);
    }
    if ((dVar2 == dVar11) && (!NAN(dVar2) && !NAN(dVar11))) {
      return true;
    }
    if (NAN(dVar2)) {
      return NAN(dVar11);
    }
    goto LAB_00d451c5;
  case 0x1d:
    fVar1 = *(float *)(this_ptr + 2);
    lVar5 = *arg1;
    fVar10 = 0.0;
    switch(*(void*)(lVar5 + 0xc)) {
    case 0x49:
    case 0x69:
      fVar10 = (float)*(int *)(lVar5 + 0x10);
      break;
    case 0x62:
      fVar10 = 0.0;
      if (*(char *)(lVar5 + 0x10) != '\0') {
        fVar10 = g_02390124;
      }
      break;
    case 100:
      fVar10 = (float)*(double *)(lVar5 + 0x10);
      break;
    case 0x66:
      fVar10 = *(float *)(lVar5 + 0x10);
      break;
    case 0x6c:
      fVar10 = (float)*(int64_t *)(lVar5 + 0x10);
    }
    if ((fVar1 == fVar10) && (!NAN(fVar1) && !NAN(fVar10))) {
      return true;
    }
    if (NAN(fVar1)) {
      return NAN(fVar10);
    }
LAB_00d451c5:
    bVar9 = false;
    break;
  case 0x23:
    lVar5 = *arg1;
    uVar7 = 0;
    switch(*(void*)(lVar5 + 0xc)) {
    case 0x49:
    case 0x69:
      uVar7 = (uint64_t)*(int *)(lVar5 + 0x10);
      break;
    case 0x62:
      uVar7 = (uint64_t)*(byte *)(lVar5 + 0x10);
      break;
    case 100:
      uVar7 = (uint64_t)*(double *)(lVar5 + 0x10);
      break;
    case 0x66:
      uVar7 = (uint64_t)*(float *)(lVar5 + 0x10);
      break;
    case 0x6c:
      uVar7 = *(uint64_t *)(lVar5 + 0x10);
    }
    bVar9 = this_ptr[2] == uVar7;
  }
  return bVar9;
}

