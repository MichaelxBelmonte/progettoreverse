// Function: FUN_012b84d0
// Address: 012b84d0
// Size: 2937 bytes
// Class: MULSSComponentRenderer
// String references:
//   "MULSSComponentRenderer::getInstanceBufferWithSize : byteSize too big!"
//   "MULSSComponentRenderer::getProcessingBufferWithSize : byteSize too big!"
//   "MULSSComponentRenderer::getProcessingBufferWithSize : not enough allocated Buffers!"


/* WARNING: Type propagation algorithm not settling */

void FUN_012b84d0(undefined8 param_1,int param_2,char *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 uVar10;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  
  if (*(char *)(unaff_RDI + 0x265) != '\0') {
    iVar1 = param_2 * 8;
    uVar8 = (ulonglong)*(uint *)(unaff_RDI + 0x160);
    bVar9 = true;
    if (0 < (int)*(uint *)(unaff_RDI + 0x160)) {
      lVar12 = 0;
      do {
        lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x170) + lVar12 * 8);
        if (lVar11 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8647;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar11 = 0;
LAB_012b8647:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x170) + lVar12 * 8) = lVar11;
          lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x170) + lVar12 * 8);
        }
        lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + lVar12 * 8);
        if (lVar7 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b86e7;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar7 = 0;
LAB_012b86e7:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + lVar12 * 8) = lVar7;
          lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + lVar12 * 8);
        }
        lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x180) + lVar12 * 8);
        if (lVar2 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8787;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar2 = 0;
LAB_012b8787:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x180) + lVar12 * 8) = lVar2;
          lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x180) + lVar12 * 8);
        }
        lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x188) + lVar12 * 8);
        if (lVar3 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8827;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar3 = 0;
LAB_012b8827:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x188) + lVar12 * 8) = lVar3;
          lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x188) + lVar12 * 8);
        }
        lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x198) + lVar12 * 8);
        if (lVar4 == 0) {
          if (*(int *)(unaff_RDI + 0x304) < param_2) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8907;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar4 = 0;
LAB_012b8907:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x198) + lVar12 * 8) = lVar4;
          lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x198) + lVar12 * 8);
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1a0) + lVar12 * 8);
          if (lVar5 == 0) goto LAB_012b8934;
LAB_012b8869:
          lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 400) + lVar12 * 8);
        }
        else {
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1a0) + lVar12 * 8);
          if (lVar5 != 0) goto LAB_012b8869;
LAB_012b8934:
          if (*(int *)(unaff_RDI + 0x304) < param_2) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b89a7;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar5 = 0;
LAB_012b89a7:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x1a0) + lVar12 * 8) = lVar5;
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1a0) + lVar12 * 8);
          lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 400) + lVar12 * 8);
        }
        if (lVar6 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8552;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar6 = 0;
LAB_012b8552:
          *(longlong *)(*(longlong *)(unaff_RDI + 400) + lVar12 * 8) = lVar6;
          lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 400) + lVar12 * 8);
        }
        if (lVar11 == 0) {
          bVar9 = false;
        }
        if (lVar7 == 0) {
          bVar9 = false;
        }
        if (lVar2 == 0) {
          bVar9 = false;
        }
        if (lVar3 == 0) {
          bVar9 = false;
        }
        if (lVar4 == 0) {
          bVar9 = false;
        }
        if (lVar5 == 0) {
          bVar9 = false;
        }
        if (lVar6 == 0) {
          bVar9 = false;
        }
        lVar12 = lVar12 + 1;
        uVar8 = (ulonglong)*(int *)(unaff_RDI + 0x160);
      } while (lVar12 < (longlong)uVar8);
    }
    lVar12 = *(longlong *)(unaff_RDI + 0x1a8);
    if (lVar12 == 0) {
      if (*(int *)(unaff_RDI + 0x304) * 4 < param_2) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
            lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8ac7;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar12 = 0;
LAB_012b8ac7:
      *(longlong *)(unaff_RDI + 0x1a8) = lVar12;
      uVar8 = (ulonglong)*(uint *)(unaff_RDI + 0x160);
    }
    if (lVar12 == 0) {
      bVar9 = false;
    }
    if (0 < (int)uVar8) {
      lVar12 = *(longlong *)(unaff_RDI + 0x1e8);
      lVar11 = 0;
      do {
        lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
        if (lVar7 == 0) {
          if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
                *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
                lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8b1e;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar12 = 0;
LAB_012b8b1e:
          *(longlong *)(*(longlong *)(unaff_RDI + 0x1e8) + lVar11 * 8) = lVar12;
          lVar12 = *(longlong *)(unaff_RDI + 0x1e8);
          uVar8 = (ulonglong)*(uint *)(unaff_RDI + 0x160);
          lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
        }
        if (lVar7 == 0) {
          bVar9 = false;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)uVar8);
    }
    lVar12 = *(longlong *)(unaff_RDI + 0x1c8);
    if (lVar12 == 0) {
      if (*(int *)(unaff_RDI + 0x304) < unaff_ESI) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
            lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8c78;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar12 = 0;
LAB_012b8c78:
      *(longlong *)(unaff_RDI + 0x1c8) = lVar12;
      lVar11 = *(longlong *)(unaff_RDI + 0x1d8);
    }
    else {
      lVar11 = *(longlong *)(unaff_RDI + 0x1d8);
    }
    if (lVar11 == 0) {
      if (*(int *)(unaff_RDI + 0x304) * 4 < iVar1) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
            *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
            lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8d07;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar11 = 0;
LAB_012b8d07:
      *(longlong *)(unaff_RDI + 0x1d8) = lVar11;
    }
    if (((lVar11 == 0) || (lVar12 == 0)) || (!bVar9)) {
      *(undefined8 *)(unaff_RDI + 0x228) = param_1;
      *param_4 = 1;
      *(undefined1 *)(unaff_RDI + 0x265) = 0;
    }
  }
  if (*param_3 == '\0') {
    return;
  }
  iVar1 = *(int *)(unaff_RDI + 0x160);
  if (iVar1 < 1) {
    uVar10 = true;
    lVar12 = *(longlong *)(unaff_RDI + 0x1b8);
  }
  else {
    lVar12 = *(longlong *)(unaff_RDI + 0x1e8);
    uVar10 = true;
    lVar11 = 0;
    do {
      lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
      if (lVar7 == 0) {
        if (*(int *)(unaff_RDI + 0x304) * 4 < param_2 * 8) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
          uVar8 = 0;
          do {
            if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
              *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
              lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
              goto LAB_012b8da2;
            }
            uVar8 = uVar8 + 1;
          } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
        }
        FUN_00e828a0();
        lVar12 = 0;
LAB_012b8da2:
        *(longlong *)(*(longlong *)(unaff_RDI + 0x1e8) + lVar11 * 8) = lVar12;
        lVar12 = *(longlong *)(unaff_RDI + 0x1e8);
        iVar1 = *(int *)(unaff_RDI + 0x160);
        lVar7 = *(longlong *)(lVar12 + lVar11 * 8);
      }
      if (lVar7 == 0) {
        uVar10 = false;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar1);
    lVar12 = *(longlong *)(unaff_RDI + 0x1b8);
  }
  if (lVar12 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < param_2) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
          lVar12 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
          goto LAB_012b8f18;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
    }
    FUN_00e828a0();
    lVar12 = 0;
LAB_012b8f18:
    *(longlong *)(unaff_RDI + 0x1b8) = lVar12;
    lVar11 = *(longlong *)(unaff_RDI + 0x1c0);
  }
  else {
    lVar11 = *(longlong *)(unaff_RDI + 0x1c0);
  }
  if (lVar11 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < param_2) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
          lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
          goto LAB_012b8fa8;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
    }
    FUN_00e828a0();
    lVar11 = 0;
LAB_012b8fa8:
    *(longlong *)(unaff_RDI + 0x1c0) = lVar11;
    lVar7 = *(longlong *)(unaff_RDI + 0x1d0);
  }
  else {
    lVar7 = *(longlong *)(unaff_RDI + 0x1d0);
  }
  if (lVar7 == 0) {
    if (*(int *)(unaff_RDI + 0x304) < *(int *)(unaff_RDI + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(unaff_RDI + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) == '\0') {
          *(undefined1 *)(*(longlong *)(unaff_RDI + 0x310) + uVar8) = 1;
          lVar7 = *(longlong *)(*(longlong *)(unaff_RDI + 0x308) + uVar8 * 8) + 0x10;
          *(longlong *)(unaff_RDI + 0x1d0) = lVar7;
          goto joined_r0x012b8e86;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(unaff_RDI + 0x300) != uVar8);
    }
    FUN_00e828a0();
    *(undefined8 *)(unaff_RDI + 0x1d0) = 0;
  }
  else {
joined_r0x012b8e86:
    if (((lVar7 != 0) && (lVar11 != 0)) && ((lVar12 != 0 && ((bool)uVar10)))) {
      return;
    }
  }
  *param_3 = '\0';
  return;
}


