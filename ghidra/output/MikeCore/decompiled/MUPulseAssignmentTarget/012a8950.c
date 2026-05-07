// Function: FUN_012a8950
// Address: 012a8950
// Size: 824 bytes
// Class: MUPulseAssignmentTarget


void FUN_012a8950(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(unaff_RDI + 0x160);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(unaff_RDI + 0x1e0);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      lVar3 = *(longlong *)(unaff_RDI + 0x1e8);
      lVar2 = *(longlong *)(lVar3 + uVar5 * 8);
      if ((lVar2 != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
        uVar4 = 0;
        do {
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar4 * 8) == lVar2 + -0x10) {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar4) = 0;
            break;
          }
          uVar4 = uVar4 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar4);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar1);
  }
  if ((*(longlong *)(unaff_RDI + 0x1b8) != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) ==
          *(longlong *)(unaff_RDI + 0x1b8) + -0x10) {
        *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
        lVar3 = *(longlong *)(unaff_RDI + 0x1c0);
        if (lVar3 == 0) goto LAB_012a8ad5;
        goto LAB_012a8a7b;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x1c0);
  if (lVar3 != 0) {
LAB_012a8a7b:
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) == lVar3 + -0x10) {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
    }
  }
LAB_012a8ad5:
  if ((*(longlong *)(unaff_RDI + 0x1c8) != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) ==
          *(longlong *)(unaff_RDI + 0x1c8) + -0x10) {
        *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
        lVar3 = *(longlong *)(unaff_RDI + 0x1d0);
        if (lVar3 == 0) goto LAB_012a8b75;
        goto LAB_012a8b1b;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x1d0);
  if (lVar3 != 0) {
LAB_012a8b1b:
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) == lVar3 + -0x10) {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
    }
  }
LAB_012a8b75:
  if ((*(longlong *)(unaff_RDI + 0x2c0) != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) ==
          *(longlong *)(unaff_RDI + 0x2c0) + -0x10) {
        *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
        lVar3 = *(longlong *)(unaff_RDI + 0x2c8);
        if (lVar3 == 0) goto LAB_012a8c15;
        goto LAB_012a8bbb;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x2c8);
  if (lVar3 != 0) {
LAB_012a8bbb:
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) == lVar3 + -0x10) {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
    }
  }
LAB_012a8c15:
  if ((*(longlong *)(unaff_RDI + 0x1d8) != 0) && (0 < (int)*(uint *)(unaff_RDI + 0x300))) {
    uVar5 = 0;
    do {
      if (*(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar5 * 8) ==
          *(longlong *)(unaff_RDI + 0x1d8) + -0x10) {
        *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar5) = 0;
        lVar3 = *(longlong *)(unaff_RDI + 0x1b0);
        goto joined_r0x012a8c84;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(unaff_RDI + 0x300) != uVar5);
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x1b0);
joined_r0x012a8c84:
  if (lVar3 == 0) {
    return;
  }
  *(undefined8 *)(unaff_RDI + 0x1b0) = 0;
  FUN_00d50b20();
  return;
}


