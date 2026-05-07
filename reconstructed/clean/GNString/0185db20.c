// Function: FUN_0185db20
// Address: 0185db20
// Size: 709 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0185db20(uint64_t param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t local_40;
  char local_38;
  
  if (param_2 != 0) {
    *(void*)(this_ptr + 0xc) = *(void*)(*arg1 + 0xc);
    *(void*)(this_ptr + 0x10) = *(void*)(*arg1 + 0x10);
    *(void*)(this_ptr + 0x14) = *(void*)(*arg1 + 0x14);
  }
  lVar4 = *(int64_t *)(*arg1 + 0x28);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar7 = *(int64_t *)(this_ptr + 0x28);
  if (lVar7 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x28) = local_40;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = *(int64_t *)(*arg1 + 0x20);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar7 = *(int64_t *)(this_ptr + 0x20);
  if (lVar7 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x20) = local_40;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x30) = *(void*)(*arg1 + 0x30);
  *(void*)(this_ptr + 0x34) = *(void*)(*arg1 + 0x34);
  FUN_00d216c0();
  lVar4 = *(int64_t *)(*arg1 + 0x18);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar7 = 0;
    do {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar7 * 8);
      uVar2 = *(void*)(lVar5 + 0xc);
      uVar3 = *(void*)(lVar5 + 0x10);
      uVar1 = *(void*)(lVar5 + 0x14);
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_0260d210;
      *(void*)((int64_t)puVar6 + 0xc) = 0;
      *(void*)((int64_t)puVar6 + 0x14) = 0;
      FUN_00d500e0();
      *(void*)((int64_t)puVar6 + 0xc) = uVar2;
      *(void*)(puVar6 + 2) = uVar3;
      *(void*)((int64_t)puVar6 + 0x14) = uVar1;
      FUN_00d21140();
      FUN_00d50b20();
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar4 + 0xc));
  }
  *(void*)(this_ptr + 0x38) = *(void*)(*arg1 + 0x38);
  FUN_00d50b20();
  return;
}

