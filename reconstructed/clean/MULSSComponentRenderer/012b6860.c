// Function: FUN_012b6860
// Address: 012b6860
// Size: 1514 bytes
// Class: MULSSComponentRenderer
// String references:
//   "MULSSComponentRenderer::getInstanceBufferWithSize : byteSize too big!"
//   "MULSSComponentRenderer::getProcessingBufferWithSize : byteSize too big!"
//   "MULSSComponentRenderer::getProcessingBufferWithSize : not enough allocated Buffers!"
// === MULSSComponentRenderer properties ===
//                   _currentComponent
//                   _components
//                   _lastRightAdjacentItem
//                   _sourceSamplePosition


void FUN_012b6860(void*param_1,void*param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  bool bVar7;
  int iVar8;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  
  iVar8 = *(int *)(this_ptr + 0x15c);
  lVar5 = *(int64_t *)(this_ptr + 0x1c8);
  if (lVar5 == 0) {
    if (*(int *)(this_ptr + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar4) == '\0') {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar4) = 1;
          lVar5 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b690c;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar5 = 0;
LAB_012b690c:
    *(int64_t *)(this_ptr + 0x1c8) = lVar5;
  }
  iVar8 = iVar8 / 2;
  iVar1 = *(int *)(this_ptr + 0x160);
  if (iVar1 < 1) {
    bVar7 = true;
  }
  else {
    lVar3 = *(int64_t *)(this_ptr + 0x1e8);
    bVar7 = true;
    lVar9 = 0;
    do {
      lVar6 = *(int64_t *)(lVar3 + lVar9 * 8);
      if (lVar6 == 0) {
        if (*(int *)(this_ptr + 0x304) * 4 < iVar8 * 8) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(this_ptr + 0x300)) {
          uVar4 = 0;
          do {
            if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar4) == '\0') {
              *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar4) = 1;
              lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar4 * 8) + 0x10;
              goto LAB_012b6972;
            }
            uVar4 = uVar4 + 1;
          } while (*(uint *)(this_ptr + 0x300) != uVar4);
        }
        FUN_00e828a0();
        lVar3 = 0;
LAB_012b6972:
        *(int64_t *)(*(int64_t *)(this_ptr + 0x1e8) + lVar9 * 8) = lVar3;
        lVar3 = *(int64_t *)(this_ptr + 0x1e8);
        iVar1 = *(int *)(this_ptr + 0x160);
        lVar6 = *(int64_t *)(lVar3 + lVar9 * 8);
      }
      if (lVar6 == 0) {
        bVar7 = false;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar1);
  }
  lVar3 = *(int64_t *)(this_ptr + 0x1b8);
  if (lVar3 == 0) {
    if (*(int *)(this_ptr + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar4) == '\0') {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar4) = 1;
          lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6ae7;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar3 = 0;
LAB_012b6ae7:
    *(int64_t *)(this_ptr + 0x1b8) = lVar3;
    lVar9 = *(int64_t *)(this_ptr + 0x1c0);
  }
  else {
    lVar9 = *(int64_t *)(this_ptr + 0x1c0);
  }
  if (lVar9 == 0) {
    if (*(int *)(this_ptr + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar4) == '\0') {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar4) = 1;
          lVar9 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6b66;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar9 = 0;
LAB_012b6b66:
    *(int64_t *)(this_ptr + 0x1c0) = lVar9;
    lVar6 = *(int64_t *)(this_ptr + 0x1d0);
  }
  else {
    lVar6 = *(int64_t *)(this_ptr + 0x1d0);
  }
  if (lVar6 == 0) {
    if (*(int *)(this_ptr + 0x304) < *(int *)(this_ptr + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar4) == '\0') {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar4) = 1;
          lVar6 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6bf6;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar6 = 0;
LAB_012b6bf6:
    *(int64_t *)(this_ptr + 0x1d0) = lVar6;
    lVar10 = *(int64_t *)(this_ptr + 0x2c0);
  }
  else {
    lVar10 = *(int64_t *)(this_ptr + 0x2c0);
  }
  if (lVar10 == 0) {
    if (*(int *)(this_ptr + 0x304) < *(int *)(this_ptr + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar4) == '\0') {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar4) = 1;
          lVar10 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6c87;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar10 = 0;
LAB_012b6c87:
    *(int64_t *)(this_ptr + 0x2c0) = lVar10;
    lVar2 = *(int64_t *)(this_ptr + 0x2c8);
  }
  else {
    lVar2 = *(int64_t *)(this_ptr + 0x2c8);
  }
  if (lVar2 == 0) {
    if (*(int *)(this_ptr + 0x304) < *(int *)(this_ptr + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar4) == '\0') {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar4) = 1;
          lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6d16;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar2 = 0;
LAB_012b6d16:
    *(int64_t *)(this_ptr + 0x2c8) = lVar2;
  }
  if (lVar3 == 0) {
    bVar7 = false;
  }
  if (lVar9 == 0) {
    bVar7 = false;
  }
  if (lVar6 == 0) {
    bVar7 = false;
  }
  if (lVar10 == 0) {
    bVar7 = false;
  }
  if (lVar2 == 0) {
    bVar7 = false;
  }
  iVar8 = *(int *)(this_ptr + 0x160);
  if (0 < iVar8) {
    lVar3 = *(int64_t *)(this_ptr + 0x170);
    lVar9 = 0;
    do {
      lVar6 = *(int64_t *)(lVar3 + lVar9 * 8);
      if (lVar6 == 0) {
        if (*(int *)(this_ptr + 0x304) < *(int *)(this_ptr + 0x15c)) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(this_ptr + 0x300)) {
          uVar4 = 0;
          do {
            if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar4) == '\0') {
              *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar4) = 1;
              lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar4 * 8) + 0x10;
              goto LAB_012b6d7e;
            }
            uVar4 = uVar4 + 1;
          } while (*(uint *)(this_ptr + 0x300) != uVar4);
        }
        FUN_00e828a0();
        lVar3 = 0;
LAB_012b6d7e:
        *(int64_t *)(*(int64_t *)(this_ptr + 0x170) + lVar9 * 8) = lVar3;
        lVar3 = *(int64_t *)(this_ptr + 0x170);
        iVar8 = *(int *)(this_ptr + 0x160);
        lVar6 = *(int64_t *)(lVar3 + lVar9 * 8);
      }
      if (lVar6 == 0) {
        bVar7 = false;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar8);
  }
  if (!bVar7) {
    *param_2 = 0;
    *arg1 = *(void*)(*(int64_t *)(this_ptr + 0x110) + 0xc);
  }
  if (lVar5 == 0) {
    *param_1 = 0;
  }
  return;
}

