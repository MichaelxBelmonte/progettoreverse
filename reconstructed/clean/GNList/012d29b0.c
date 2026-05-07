// Function: FUN_012d29b0
// Address: 012d29b0
// Size: 1206 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_012d29b0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  int64_t *this_ptr;
  
  FUN_00b341c0();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_012dc5a0();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = this_ptr[0x1f];
  lVar2 = plVar4[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar4[2] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = this_ptr[0x2f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d243f0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1f] != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar6 = FUN_00e8b990();
    lVar2 = plVar4[4];
    if (lVar2 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      plVar4[4] = lVar6;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_012d0a00();
  }
  plVar3 = (int64_t *)this_ptr[0x2e];
  if (plVar3 != plVar4) {
    FUN_00d50b00();
    this_ptr[0x2e] = (int64_t)plVar4;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((this_ptr[0x1f] != 0) && (plVar4[4] != 0)) {
    FUN_00cbceb0();
    (**(code **)(this_ptr[0x1e] + 0x10))();
    FUN_00d50b00();
    FUN_00cbc2c0();
    if (this_ptr + 0x1e != (int64_t *)0x0) {
      (**(code **)(this_ptr[0x1e] + 0x10))();
      FUN_00d50b20();
    }
  }
  plVar4 = (int64_t *)this_ptr[0x22];
  FUN_00d50b00();
  (**(code **)(*plVar4 + 0x3b8))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_012dd9b0();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x22] + 0x368))();
  if (*(int64_t *)(this_ptr[0x22] + 0x100) != 0) {
    FUN_00b33120();
    FUN_00c8e7d0();
    FUN_00c8e340();
  }
  plVar4 = (int64_t *)this_ptr[0x23];
  FUN_00b335d0();
  (**(code **)(*plVar4 + 0x398))();
  FUN_00b33590();
  FUN_00b335a0();
  FUN_00b33590();
  FUN_00b33530();
  plVar4 = (int64_t *)this_ptr[0x23];
  (**(code **)(*this_ptr + 0x3a8))();
  (**(code **)(*plVar4 + 0x3a0))();
  (**(code **)(*(int64_t *)this_ptr[0x23] + 0x368))();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02581c90;
  (*g_02581ca8)();
  lVar2 = this_ptr[0x42];
  this_ptr[0x42] = (int64_t)puVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00b33760();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00b33790();
  FUN_012cf0c0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  if (lVar1 != 0) {
    FUN_01f27fe0();
    (**(code **)(this_ptr[0x1d] + 0x10))();
    FUN_00d50b00();
    FUN_01f47190();
    if (this_ptr + 0x1d != (int64_t *)0x0) {
      (**(code **)(this_ptr[0x1d] + 0x10))();
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

