// Function: FUN_012b84d0
// Address: 012b84d0
// Size: 2937 bytes
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


void FUN_012b84d0(uint64_t param_1,int param_2,char *param_3,void*param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  bool bVar9;
  uint8_t uVar10;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t lVar11;
  int64_t lVar12;
  
  if (*(char *)(this_ptr + 0x265) != '\0') {
    iVar1 = param_2 * 8;
    uVar8 = (uint64_t)*(uint *)(this_ptr + 0x160);
    bVar9 = true;
    if (0 < (int)*(uint *)(this_ptr + 0x160)) {
      lVar12 = 0;
      do {
        lVar11 = *(int64_t *)(*(int64_t *)(this_ptr + 0x170) + lVar12 * 8);
        if (lVar11 == 0) {
          if (*(int *)(this_ptr + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this_ptr + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
                *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
                lVar11 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8647;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this_ptr + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar11 = 0;
LAB_012b8647:
          *(int64_t *)(*(int64_t *)(this_ptr + 0x170) + lVar12 * 8) = lVar11;
          lVar11 = *(int64_t *)(*(int64_t *)(this_ptr + 0x170) + lVar12 * 8);
        }
        lVar7 = *(int64_t *)(*(int64_t *)(this_ptr + 0x178) + lVar12 * 8);
        if (lVar7 == 0) {
          if (*(int *)(this_ptr + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this_ptr + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
                *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
                lVar7 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b86e7;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this_ptr + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar7 = 0;
LAB_012b86e7:
          *(int64_t *)(*(int64_t *)(this_ptr + 0x178) + lVar12 * 8) = lVar7;
          lVar7 = *(int64_t *)(*(int64_t *)(this_ptr + 0x178) + lVar12 * 8);
        }
        lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x180) + lVar12 * 8);
        if (lVar2 == 0) {
          if (*(int *)(this_ptr + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this_ptr + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
                *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
                lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8787;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this_ptr + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar2 = 0;
LAB_012b8787:
          *(int64_t *)(*(int64_t *)(this_ptr + 0x180) + lVar12 * 8) = lVar2;
          lVar2 = *(int64_t *)(*(int64_t *)(this_ptr + 0x180) + lVar12 * 8);
        }
        lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x188) + lVar12 * 8);
        if (lVar3 == 0) {
          if (*(int *)(this_ptr + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this_ptr + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
                *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
                lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8827;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this_ptr + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar3 = 0;
LAB_012b8827:
          *(int64_t *)(*(int64_t *)(this_ptr + 0x188) + lVar12 * 8) = lVar3;
          lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x188) + lVar12 * 8);
        }
        lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x198) + lVar12 * 8);
        if (lVar4 == 0) {
          if (*(int *)(this_ptr + 0x304) < param_2) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this_ptr + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
                *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
                lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8907;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this_ptr + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar4 = 0;
LAB_012b8907:
          *(int64_t *)(*(int64_t *)(this_ptr + 0x198) + lVar12 * 8) = lVar4;
          lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x198) + lVar12 * 8);
          lVar5 = *(int64_t *)(*(int64_t *)(this_ptr + 0x1a0) + lVar12 * 8);
          if (lVar5 == 0) goto LAB_012b8934;
LAB_012b8869:
          lVar6 = *(int64_t *)(*(int64_t *)(this_ptr + 400) + lVar12 * 8);
        }
        else {
          lVar5 = *(int64_t *)(*(int64_t *)(this_ptr + 0x1a0) + lVar12 * 8);
          if (lVar5 != 0) goto LAB_012b8869;
LAB_012b8934:
          if (*(int *)(this_ptr + 0x304) < param_2) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this_ptr + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
                *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
                lVar5 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b89a7;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this_ptr + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar5 = 0;
LAB_012b89a7:
          *(int64_t *)(*(int64_t *)(this_ptr + 0x1a0) + lVar12 * 8) = lVar5;
          lVar5 = *(int64_t *)(*(int64_t *)(this_ptr + 0x1a0) + lVar12 * 8);
          lVar6 = *(int64_t *)(*(int64_t *)(this_ptr + 400) + lVar12 * 8);
        }
        if (lVar6 == 0) {
          if (*(int *)(this_ptr + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this_ptr + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
                *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
                lVar6 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8552;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this_ptr + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar6 = 0;
LAB_012b8552:
          *(int64_t *)(*(int64_t *)(this_ptr + 400) + lVar12 * 8) = lVar6;
          lVar6 = *(int64_t *)(*(int64_t *)(this_ptr + 400) + lVar12 * 8);
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
        uVar8 = (uint64_t)*(int *)(this_ptr + 0x160);
      } while (lVar12 < (int64_t)uVar8);
    }
    lVar12 = *(int64_t *)(this_ptr + 0x1a8);
    if (lVar12 == 0) {
      if (*(int *)(this_ptr + 0x304) * 4 < param_2) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(this_ptr + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
            *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
            lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8ac7;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(this_ptr + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar12 = 0;
LAB_012b8ac7:
      *(int64_t *)(this_ptr + 0x1a8) = lVar12;
      uVar8 = (uint64_t)*(uint *)(this_ptr + 0x160);
    }
    if (lVar12 == 0) {
      bVar9 = false;
    }
    if (0 < (int)uVar8) {
      lVar12 = *(int64_t *)(this_ptr + 0x1e8);
      lVar11 = 0;
      do {
        lVar7 = *(int64_t *)(lVar12 + lVar11 * 8);
        if (lVar7 == 0) {
          if (*(int *)(this_ptr + 0x304) * 4 < iVar1) {
            FUN_00e828a0();
          }
          if (0 < (int)*(uint *)(this_ptr + 0x300)) {
            uVar8 = 0;
            do {
              if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
                *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
                lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
                goto LAB_012b8b1e;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(this_ptr + 0x300) != uVar8);
          }
          FUN_00e828a0();
          lVar12 = 0;
LAB_012b8b1e:
          *(int64_t *)(*(int64_t *)(this_ptr + 0x1e8) + lVar11 * 8) = lVar12;
          lVar12 = *(int64_t *)(this_ptr + 0x1e8);
          uVar8 = (uint64_t)*(uint *)(this_ptr + 0x160);
          lVar7 = *(int64_t *)(lVar12 + lVar11 * 8);
        }
        if (lVar7 == 0) {
          bVar9 = false;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)uVar8);
    }
    lVar12 = *(int64_t *)(this_ptr + 0x1c8);
    if (lVar12 == 0) {
      if (*(int *)(this_ptr + 0x304) < unaff_ESI) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(this_ptr + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
            *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
            lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8c78;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(this_ptr + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar12 = 0;
LAB_012b8c78:
      *(int64_t *)(this_ptr + 0x1c8) = lVar12;
      lVar11 = *(int64_t *)(this_ptr + 0x1d8);
    }
    else {
      lVar11 = *(int64_t *)(this_ptr + 0x1d8);
    }
    if (lVar11 == 0) {
      if (*(int *)(this_ptr + 0x304) * 4 < iVar1) {
        FUN_00e828a0();
      }
      if (0 < (int)*(uint *)(this_ptr + 0x300)) {
        uVar8 = 0;
        do {
          if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
            *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
            lVar11 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
            goto LAB_012b8d07;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(this_ptr + 0x300) != uVar8);
      }
      FUN_00e828a0();
      lVar11 = 0;
LAB_012b8d07:
      *(int64_t *)(this_ptr + 0x1d8) = lVar11;
    }
    if (((lVar11 == 0) || (lVar12 == 0)) || (!bVar9)) {
      *(void*)(this_ptr + 0x228) = param_1;
      *param_4 = 1;
      *(void*)(this_ptr + 0x265) = 0;
    }
  }
  if (*param_3 == '\0') {
    return;
  }
  iVar1 = *(int *)(this_ptr + 0x160);
  if (iVar1 < 1) {
    uVar10 = true;
    lVar12 = *(int64_t *)(this_ptr + 0x1b8);
  }
  else {
    lVar12 = *(int64_t *)(this_ptr + 0x1e8);
    uVar10 = true;
    lVar11 = 0;
    do {
      lVar7 = *(int64_t *)(lVar12 + lVar11 * 8);
      if (lVar7 == 0) {
        if (*(int *)(this_ptr + 0x304) * 4 < param_2 * 8) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(this_ptr + 0x300)) {
          uVar8 = 0;
          do {
            if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
              *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
              lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
              goto LAB_012b8da2;
            }
            uVar8 = uVar8 + 1;
          } while (*(uint *)(this_ptr + 0x300) != uVar8);
        }
        FUN_00e828a0();
        lVar12 = 0;
LAB_012b8da2:
        *(int64_t *)(*(int64_t *)(this_ptr + 0x1e8) + lVar11 * 8) = lVar12;
        lVar12 = *(int64_t *)(this_ptr + 0x1e8);
        iVar1 = *(int *)(this_ptr + 0x160);
        lVar7 = *(int64_t *)(lVar12 + lVar11 * 8);
      }
      if (lVar7 == 0) {
        uVar10 = false;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar1);
    lVar12 = *(int64_t *)(this_ptr + 0x1b8);
  }
  if (lVar12 == 0) {
    if (*(int *)(this_ptr + 0x304) < param_2) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
          lVar12 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
          goto LAB_012b8f18;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar8);
    }
    FUN_00e828a0();
    lVar12 = 0;
LAB_012b8f18:
    *(int64_t *)(this_ptr + 0x1b8) = lVar12;
    lVar11 = *(int64_t *)(this_ptr + 0x1c0);
  }
  else {
    lVar11 = *(int64_t *)(this_ptr + 0x1c0);
  }
  if (lVar11 == 0) {
    if (*(int *)(this_ptr + 0x304) < param_2) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
          lVar11 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
          goto LAB_012b8fa8;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar8);
    }
    FUN_00e828a0();
    lVar11 = 0;
LAB_012b8fa8:
    *(int64_t *)(this_ptr + 0x1c0) = lVar11;
    lVar7 = *(int64_t *)(this_ptr + 0x1d0);
  }
  else {
    lVar7 = *(int64_t *)(this_ptr + 0x1d0);
  }
  if (lVar7 == 0) {
    if (*(int *)(this_ptr + 0x304) < *(int *)(this_ptr + 0x15c)) {
      FUN_00e828a0();
    }
    if (0 < (int)*(uint *)(this_ptr + 0x300)) {
      uVar8 = 0;
      do {
        if (*(char *)(*(int64_t *)(this_ptr + 0x310) + uVar8) == '\0') {
          *(void*)(*(int64_t *)(this_ptr + 0x310) + uVar8) = 1;
          lVar7 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + uVar8 * 8) + 0x10;
          *(int64_t *)(this_ptr + 0x1d0) = lVar7;
          goto joined_r0x012b8e86;
        }
        uVar8 = uVar8 + 1;
      } while (*(uint *)(this_ptr + 0x300) != uVar8);
    }
    FUN_00e828a0();
    *(void*)(this_ptr + 0x1d0) = 0;
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

