// Function: FUN_00e573e0
// Address: 00e573e0
// Size: 519 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


uint64_t FUN_00e573e0(uint64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int unaff_ESI;
  int64_t this_ptr;
  uint64_t unaff_R14;
  uint64_t local_30;
  uint8_t local_28;
  
  *(int *)(this_ptr + 0x88) = unaff_ESI;
  FUN_00e579d0(param_1,unaff_ESI);
  *(int64_t *)(this_ptr + 0x98) = local_30;
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
    local_30 = *(int64_t *)(this_ptr + 0x98);
  }
  if (local_30 != 0) {
    plVar1 = *(int64_t **)(this_ptr + 0xb0);
    *(void*)(this_ptr + 0xa8) =
         *(void*)
          (*(int64_t *)(*(int64_t *)(this_ptr + 0xa0) + 0x10) + (int64_t)unaff_ESI * 8);
    *(void*)(this_ptr + 200) = 0;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x20))();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
    cVar2 = (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x1e8))();
    plVar1 = *(int64_t **)(this_ptr + 0x98);
    if (cVar2 == '\0') {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x118))();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x248))();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
    plVar1 = *(int64_t **)(this_ptr + 0xb0);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x28))();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
    }
  }
  return CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1) & 0xffffffff;
}

