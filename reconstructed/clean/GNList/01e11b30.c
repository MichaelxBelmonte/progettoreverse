// Function: FUN_01e11b30
// Address: 01e11b30
// Size: 792 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e11b30(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  FUN_01e3b710();
  *(void*)((int64_t)this_ptr + 0x16d) = 0x101;
  *(void*)(this_ptr + 0x2e) = 0;
  uVar4 = FUN_00e7b4e0();
  *(void*)((int64_t)this_ptr + 0x164) = uVar4;
  this_ptr[0x2f] = 0x3f8000003f800000;
  *(void*)(this_ptr + 0x35) = 0x101;
  *(void*)(this_ptr + 0x37) = 1;
  *(void*)((int64_t)this_ptr + 0x1cc) = 0xffffffff;
  *(void*)((int64_t)this_ptr + 0x1d2) = 0;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_001e10d0();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = (int64_t *)this_ptr[0x27];
  if (plVar1 == plVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x27] = (int64_t)plVar5;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01ea8a80();
  FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_01e11c34;
    }
    if (this_ptr[0x28] != 0) {
      this_ptr[0x28] = 0;
      goto LAB_01e11c77;
    }
  }
  else {
    local_30 = '\0';
LAB_01e11c34:
    lVar2 = this_ptr[0x28];
    if (lVar2 != local_38) {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0x28] = local_38;
      if (lVar2 != 0) {
LAB_01e11c77:
        FUN_00d50b20();
      }
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0(0,0,0);
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01e11ccf;
    }
    if (this_ptr[0x29] == 0) goto LAB_01e11d15;
    this_ptr[0x29] = 0;
  }
  else {
    local_50 = '\0';
LAB_01e11ccf:
    lVar3 = this_ptr[0x29];
    if (lVar3 == lVar2) goto LAB_01e11d15;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x29] = lVar2;
    if (lVar3 == 0) goto LAB_01e11d15;
  }
  FUN_00d50b20();
LAB_01e11d15:
  uVar4 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x388))();
  FUN_01e12e30(extraout_XMM0_Da,uVar4);
  plVar1 = (int64_t *)this_ptr[0x27];
  (**(code **)(*plVar1 + 0x388))();
  (**(code **)(*plVar1 + 0x3a8))();
  (**(code **)(*this_ptr + 0x620))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_78 = g_027f32e0;
  if (g_027f32e0 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_68 = 0;
  local_60 = '\0';
  FUN_00d41430(&local_68,&local_78);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

