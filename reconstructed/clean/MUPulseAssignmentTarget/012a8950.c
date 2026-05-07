// Function: FUN_012a8950
// Address: 012a8950
// Size: 824 bytes
// Class: MUPulseAssignmentTarget

void FUN_012a8950(void)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  uint64_t uVar5;
  
  uVar1 = *(uint *)(this_ptr + 0x160);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar3 = *(int64_t *)(this_ptr + 0x1e0);
      lVar2 = *(int64_t *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(this_ptr + 0x300))) {
        uVar4 = 0;
        do {
          if (*(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(this_ptr + 0x300) != uVar4);
      }
      *(void*)(lVar3 + uVar5 * 8) = 0;
      lVar3 = *(int64_t *)(this_ptr + 0x1e8);
      lVar2 = *(int64_t *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(this_ptr + 0x300))) {
        uVar4 = 0;
        do {
          if (*(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(this_ptr + 0x300) != uVar4);
      }
      *(void*)(lVar3 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  if ((*(int64_t *)(this_ptr + 0x1b8) != 0) && (0 < (int)*(uint *)(this_ptr + 0x300))) {
    uVar5 = 0;
    do {
      if (*(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar5 * 8) ==
          *(int64_t *)(this_ptr + 0x1b8) + -0x10) {
        *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar5) = 0;
        lVar3 = *(int64_t *)(this_ptr + 0x1c0);
        if (lVar3 == 0) goto LAB_012a8ad5;
        goto LAB_012a8a7b;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(this_ptr + 0x300) != uVar5);
  }
  lVar3 = *(int64_t *)(this_ptr + 0x1c0);
  if (lVar3 != 0) {
LAB_012a8a7b:
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar5 = 0;
      do {
        if (*(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar5 * 8) == lVar3 + -0x10) {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar5) = 0;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar5);
    }
  }
LAB_012a8ad5:
  if ((*(int64_t *)(this_ptr + 0x1c8) != 0) && (0 < (int)*(uint *)(this_ptr + 0x300))) {
    uVar5 = 0;
    do {
      if (*(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar5 * 8) ==
          *(int64_t *)(this_ptr + 0x1c8) + -0x10) {
        *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar5) = 0;
        lVar3 = *(int64_t *)(this_ptr + 0x1d0);
        if (lVar3 == 0) goto LAB_012a8b75;
        goto LAB_012a8b1b;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(this_ptr + 0x300) != uVar5);
  }
  lVar3 = *(int64_t *)(this_ptr + 0x1d0);
  if (lVar3 != 0) {
LAB_012a8b1b:
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar5 = 0;
      do {
        if (*(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar5 * 8) == lVar3 + -0x10) {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar5) = 0;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar5);
    }
  }
LAB_012a8b75:
  if ((*(int64_t *)(this_ptr + 0x2c0) != 0) && (0 < (int)*(uint *)(this_ptr + 0x300))) {
    uVar5 = 0;
    do {
      if (*(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar5 * 8) ==
          *(int64_t *)(this_ptr + 0x2c0) + -0x10) {
        *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar5) = 0;
        lVar3 = *(int64_t *)(this_ptr + 0x2c8);
        if (lVar3 == 0) goto LAB_012a8c15;
        goto LAB_012a8bbb;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(this_ptr + 0x300) != uVar5);
  }
  lVar3 = *(int64_t *)(this_ptr + 0x2c8);
  if (lVar3 != 0) {
LAB_012a8bbb:
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar5 = 0;
      do {
        if (*(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar5 * 8) == lVar3 + -0x10) {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar5) = 0;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar5);
    }
  }
LAB_012a8c15:
  if ((*(int64_t *)(this_ptr + 0x1d8) != 0) && (0 < (int)*(uint *)(this_ptr + 0x300))) {
    uVar5 = 0;
    do {
      if (*(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar5 * 8) ==
          *(int64_t *)(this_ptr + 0x1d8) + -0x10) {
        *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar5) = 0;
        lVar3 = *(int64_t *)(this_ptr + 0x1b0);
        goto joined_r0x012a8c84;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(this_ptr + 0x300) != uVar5);
  }
  lVar3 = *(int64_t *)(this_ptr + 0x1b0);
joined_r0x012a8c84:
  if (lVar3 == 0) {
    return;
  }
  *(void*)(this_ptr + 0x1b0) = 0;
  FUN_00d50b20();
  return;
}

