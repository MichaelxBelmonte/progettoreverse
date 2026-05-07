// Function: FUN_012b6860
// Address: 012b6860
// Size: 1514 bytes
// Class: MULSSComponentRenderer
// String references:
//   "MULSSComponentRenderer::getInstanceBufferWithSize : byteSize too big!"
//   "MULSSComponentRenderer::getProcessingBufferWithSize : byteSize too big!"
//   "MULSSComponentRenderer::getProcessingBufferWithSize : not enough allocated Buffers!"


void FUN_012b6860(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(unaff_RDI + 0x15c);
  lVar5 = *(longlong *)(unaff_RDI + 0x1c8);
  if (lVar5 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b690c;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar5 = 0;
LAB_012b690c:
    *(longlong *)(unaff_RDI + 0x1c8) = lVar5;
  }
  iVar8 = iVar8 / 2;
  iVar1 = *(int *)(unaff_RDI + 0x160);
  if (iVar1 < 1) {
    bVar7 = true;
  }
  else {
    lVar3 = *(longlong *)(unaff_RDI + 0x1e8);
    bVar7 = true;
    lVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      if (lVar6 == 0) {
        if (*(int *)(unaff_RDI + 0x304) * 4 < iVar8 * 8) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
          uVar4 = 0;
          do {
            if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
              *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
              lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
              goto LAB_012b6972;
            }
            uVar4 = uVar4 + 1;
          } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
        }
        FUN_00e828a0();
        lVar3 = 0;
LAB_012b6972:
        *(longlong *)(*(longlong *)(unaff_RDI + 0x1e8) + lVar9 * 8) = lVar3;
        lVar3 = *(longlong *)(unaff_RDI + 0x1e8);
        iVar1 = *(int *)(unaff_RDI + 0x160);
        lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      }
      if (lVar6 == 0) {
        bVar7 = false;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar1);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x1b8);
  if (lVar3 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6ae7;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar3 = 0;
LAB_012b6ae7:
    *(longlong *)(unaff_RDI + 0x1b8) = lVar3;
    lVar9 = *(longlong *)(unaff_RDI + 0x1c0);
  }
  else {
    lVar9 = *(longlong *)(unaff_RDI + 0x1c0);
  }
  if (lVar9 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < iVar8) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar9 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6b66;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar9 = 0;
LAB_012b6b66:
    *(longlong *)(unaff_RDI + 0x1c0) = lVar9;
    lVar6 = *(longlong *)(unaff_RDI + 0x1d0);
  }
  else {
    lVar6 = *(longlong *)(unaff_RDI + 0x1d0);
  }
  if (lVar6 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < *(int *)(unaff_RDI + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6bf6;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar6 = 0;
LAB_012b6bf6:
    *(longlong *)(unaff_RDI + 0x1d0) = lVar6;
    lVar10 = *(longlong *)(unaff_RDI + 0x2c0);
  }
  else {
    lVar10 = *(longlong *)(unaff_RDI + 0x2c0);
  }
  if (lVar10 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < *(int *)(unaff_RDI + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar10 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6c87;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar10 = 0;
LAB_012b6c87:
    *(longlong *)(unaff_RDI + 0x2c0) = lVar10;
    lVar2 = *(longlong *)(unaff_RDI + 0x2c8);
  }
  else {
    lVar2 = *(longlong *)(unaff_RDI + 0x2c8);
  }
  if (lVar2 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < *(int *)(unaff_RDI + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar4 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
          lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
          goto LAB_012b6d16;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
    }
    FUN_00e828a0();
    lVar2 = 0;
LAB_012b6d16:
    *(longlong *)(unaff_RDI + 0x2c8) = lVar2;
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
  iVar8 = *(int *)(unaff_RDI + 0x160);
  if (0 < iVar8) {
    lVar3 = *(longlong *)(unaff_RDI + 0x170);
    lVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      if (lVar6 == 0) {
        if (*(int *)(unaff_RDI + 0x304) < *(int *)(unaff_RDI + 0x15c)) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
          uVar4 = 0;
          do {
            if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) == '\0') {
              *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 1;
              lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) + 0x10;
              goto LAB_012b6d7e;
            }
            uVar4 = uVar4 + 1;
          } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
        }
        FUN_00e828a0();
        lVar3 = 0;
LAB_012b6d7e:
        *(longlong *)(*(longlong *)(unaff_RDI + 0x170) + lVar9 * 8) = lVar3;
        lVar3 = *(longlong *)(unaff_RDI + 0x170);
        iVar8 = *(int *)(unaff_RDI + 0x160);
        lVar6 = *(longlong *)(lVar3 + lVar9 * 8);
      }
      if (lVar6 == 0) {
        bVar7 = false;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar8);
  }
  if (!bVar7) {
    *param_2 = 0;
    *unaff_RSI = *(undefined4 *)(*(longlong *)(unaff_RDI + 0x110) + 0xc);
  }
  if (lVar5 == 0) {
    *param_1 = 0;
  }
  return;
}


