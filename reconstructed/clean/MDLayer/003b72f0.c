// Function: FUN_003b72f0
// Address: 003b72f0
// Size: 722 bytes
// Class: MDLayer
// === MDLayer properties ===
//   MDLayerState    _state


void FUN_003b72f0(void)

{
  int64_t lVar1;
  char unaff_SIL;
  int64_t this_ptr;
  int iVar2;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  if ((*(int *)(this_ptr + 0xc) == 2) == (bool)unaff_SIL) {
    return;
  }
  lVar1 = *(int64_t *)(this_ptr + 0x28);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  FUN_004b5af0();
  FUN_003b79f0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_004b5af0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_003b74dd;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_003b74dd;
  iVar2 = -1;
  while (iVar2 + 1 < *(int *)(local_58 + 0xc)) {
    iVar2 = iVar2 + 1;
    if (*(int *)(*(int64_t *)(*(int64_t *)(local_58 + 0x10) + (int64_t)iVar2 * 8) + 0xc) == 2) {
      FUN_00d21140();
    }
  }
  FUN_00274d30();
  FUN_00d50b20();
LAB_003b74dd:
  if (unaff_SIL == '\0') {
    if (*(int *)(this_ptr + 0xc) != 0) {
      *(void*)(this_ptr + 0xc) = 0;
      FUN_003b77b0();
    }
  }
  else {
    if ((lVar1 != 0) && (local_58 != 0)) {
      local_40 = -1;
      while( true ) {
        lVar1 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(local_58 + 0xc) <= local_40) break;
        lVar1 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar1 * 8);
        if (*(int *)(lVar1 + 0xc) != *(int *)(this_ptr + 0xc)) {
          *(int *)(lVar1 + 0xc) = *(int *)(this_ptr + 0xc);
          FUN_003b77b0();
        }
      }
      FUN_00274d30();
    }
    if (*(int *)(this_ptr + 0xc) != 2) {
      *(void*)(this_ptr + 0xc) = 2;
      FUN_003b77b0();
    }
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}

