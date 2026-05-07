// Function: FUN_015c91d0
// Address: 015c91d0
// Size: 680 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void* FUN_015c91d0(void)

{
  bool bVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar4;
  bool bVar5;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (arg1 == 0) {
    bVar5 = false;
    lVar4 = 0;
    lVar3 = segment_command_00000020._0_8_;
    if (segment_command_00000020._0_8_ == 0) goto LAB_015c9367;
LAB_015c9290:
    do {
      FUN_00d50b00();
      FUN_00d23370();
      if (lVar3 == lVar4) {
        bVar1 = bVar5;
        if (!bVar5) {
          FUN_00d50b00();
          bVar1 = true;
        }
      }
      else {
        FUN_00d50b00();
        lVar4 = lVar3;
        bVar1 = true;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      bVar5 = bVar1;
      FUN_00d50b20();
      lVar3 = *(int64_t *)(lVar4 + 0x20);
    } while (*(int64_t *)(lVar4 + 0x20) != 0);
    if (lVar4 != arg1) goto LAB_015c9331;
LAB_015c9373:
    bVar1 = bVar5;
    if (bVar5) {
      lVar3 = *(int64_t *)(arg1 + 0x18);
      goto joined_r0x015c9466;
    }
    if (arg1 != 0) {
      bVar1 = true;
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b20();
    FUN_00d50b00();
    bVar5 = true;
    lVar3 = *(int64_t *)(arg1 + 0x20);
    lVar4 = arg1;
    if (*(int64_t *)(arg1 + 0x20) != 0) goto LAB_015c9290;
LAB_015c9367:
    if (lVar4 == arg1) goto LAB_015c9373;
LAB_015c9331:
    if (arg1 != 0) {
      FUN_00d50b00();
    }
    bVar1 = true;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  lVar3 = *(int64_t *)(arg1 + 0x18);
joined_r0x015c9466:
  for (; lVar3 != 0; lVar3 = *(int64_t *)(lVar3 + 0x18)) {
    FUN_00d50b00();
    FUN_00d21140();
    if (lVar3 == arg1) {
      lVar3 = arg1;
      bVar5 = bVar1;
      if (!bVar1) {
        FUN_00d50b00();
        bVar5 = true;
      }
    }
    else {
      FUN_00d50b00();
      bVar5 = true;
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    arg1 = lVar3;
    bVar1 = bVar5;
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  if (bVar1) {
    FUN_00d50b20();
  }
  return this_ptr;
}

