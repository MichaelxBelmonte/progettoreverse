// Function: FUN_01cca7a0
// Address: 01cca7a0
// Size: 612 bytes
// Class: GNDictionary

void FUN_01cca7a0(void)

{
  int64_t lVar1;
  char unaff_SIL;
  int64_t this_ptr;
  uint64_t uVar2;
  
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (0 < *(int *)(lVar1 + 0xc)) {
    uVar2 = (uint64_t)(*(int *)(lVar1 + 0xc) - 1);
    if (unaff_SIL == '\0') {
      lVar1 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + uVar2 * 8);
      while( true ) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if (*(int64_t *)(lVar1 + 0x28) != 0) {
          FUN_00d50b00();
          FUN_01d261f0();
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
          *(void*)(lVar1 + 0x28) = 0;
          if (*(int64_t *)(lVar1 + 0x10) != 0) {
            *(void*)(lVar1 + 0x10) = 0;
            FUN_00d50b20();
          }
          *(void*)(lVar1 + 0x30) = 0xffffffff;
          if (*(int64_t *)(lVar1 + 0x18) != 0) {
            *(void*)(lVar1 + 0x18) = 0;
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
        if ((int64_t)uVar2 < 1) break;
        uVar2 = uVar2 - 1;
        lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) + uVar2 * 8);
      }
    }
    else {
      lVar1 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + uVar2 * 8);
      while( true ) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        if (*(int64_t *)(lVar1 + 0x28) != 0) {
          FUN_00d50b00();
          FUN_01d262d0();
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
          FUN_00d64850();
          *(void*)(lVar1 + 0x28) = 0;
          FUN_00d64910();
          FUN_00d64850();
          if (*(int64_t *)(lVar1 + 0x10) != 0) {
            *(int64_t *)(lVar1 + 0x10) = 0;
            FUN_00d50b20();
          }
          *(void*)(lVar1 + 0x30) = 0xffffffff;
          FUN_00d64910();
          FUN_00d64850();
          if (*(int64_t *)(lVar1 + 0x18) != 0) {
            *(int64_t *)(lVar1 + 0x18) = 0;
            FUN_00d50b20();
          }
          FUN_00d64910();
        }
        FUN_00d50b20();
        if ((int64_t)uVar2 < 1) break;
        uVar2 = uVar2 - 1;
        lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + 0x10) + uVar2 * 8);
      }
    }
  }
  if (unaff_SIL == '\0') {
    FUN_00d216c0();
  }
  else {
    FUN_00d64850();
    FUN_00d216c0();
    FUN_00d64910();
  }
  return;
}

