// Function: FUN_00aea110
// Address: 00aea110
// Size: 699 bytes
// Class: Unknown

void FUN_00aea110(uint32_t param_1,uint64_t param_2,uint param_3,uint param_4)

{
  int64_t lVar1;
  byte bVar2;
  uint uVar3;
  uint in_ECX;
  uint uVar4;
  int64_t lVar5;
  int64_t arg1;
  uint64_t uVar6;
  int64_t this_ptr;
  uint64_t uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = param_3 & 0xff;
  if (param_3 == param_4) {
    if (uVar3 != 0) {
      lVar5 = 0;
      do {
        if ((*(int64_t *)(this_ptr + lVar5 * 8) != 0) &&
           (*(int64_t *)(arg1 + lVar5 * 8) != 0)) {
          param_1 = (**(code **)(g_02786500 + 0x28))(param_1,in_ECX);
        }
        lVar5 = lVar5 + 1;
      } while ((param_3 & 0xff) != (uint)lVar5);
    }
  }
  else {
    bVar2 = (byte)(param_4 >> 8);
    if (((param_4 & 0xff) != 0) && (uVar3 != 0)) {
      uVar4 = bVar2 - 1;
      uVar8 = param_3 >> 8 & 0xff;
      if ((uVar8 == 0) && (uVar3 != 1)) {
        if (0 < (int)in_ECX) {
          fVar9 = g_02390124 / (float)uVar3;
          if (bVar2 == 0) {
            uVar6 = 0;
            do {
              fVar10 = 0.0;
              uVar7 = 0;
              if (uVar3 != 1) {
                do {
                  lVar5 = *(int64_t *)(arg1 + uVar7 * 8);
                  if (lVar5 != 0) {
                    fVar10 = fVar10 + *(float *)(lVar5 + uVar6 * 4);
                  }
                  lVar5 = *(int64_t *)(arg1 + 8 + uVar7 * 8);
                  if (lVar5 != 0) {
                    fVar10 = fVar10 + *(float *)(lVar5 + uVar6 * 4);
                  }
                  uVar7 = uVar7 + 2;
                } while ((param_3 & 0xfe) != uVar7);
              }
              if (((param_3 & 1) != 0) && (lVar5 = *(int64_t *)(arg1 + uVar7 * 8), lVar5 != 0)
                 ) {
                fVar10 = fVar10 + *(float *)(lVar5 + uVar6 * 4);
              }
              fVar10 = fVar10 * fVar9;
              uVar7 = 0;
              if ((param_4 & 0xff) != 1) {
                do {
                  lVar5 = *(int64_t *)(this_ptr + uVar7 * 8);
                  if (lVar5 != 0) {
                    *(float *)(lVar5 + uVar6 * 4) = *(float *)(lVar5 + uVar6 * 4) + fVar10;
                  }
                  lVar5 = *(int64_t *)(this_ptr + 8 + uVar7 * 8);
                  if (lVar5 != 0) {
                    *(float *)(lVar5 + uVar6 * 4) = *(float *)(lVar5 + uVar6 * 4) + fVar10;
                  }
                  uVar7 = uVar7 + 2;
                } while ((param_4 & 0xfe) != uVar7);
              }
              if (((param_4 & 1) != 0) && (lVar5 = *(int64_t *)(this_ptr + uVar7 * 8), lVar5 != 0)
                 ) {
                *(float *)(lVar5 + uVar6 * 4) = fVar10 + *(float *)(lVar5 + uVar6 * 4);
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 != in_ECX);
          }
          else {
            lVar5 = *(int64_t *)(this_ptr + (int64_t)(int)uVar4 * 8);
            uVar6 = 0;
            do {
              fVar10 = 0.0;
              uVar7 = 0;
              if (uVar3 != 1) {
                do {
                  lVar1 = *(int64_t *)(arg1 + uVar7 * 8);
                  if (lVar1 != 0) {
                    fVar10 = fVar10 + *(float *)(lVar1 + uVar6 * 4);
                  }
                  lVar1 = *(int64_t *)(arg1 + 8 + uVar7 * 8);
                  if (lVar1 != 0) {
                    fVar10 = fVar10 + *(float *)(lVar1 + uVar6 * 4);
                  }
                  uVar7 = uVar7 + 2;
                } while ((param_3 & 0xfe) != uVar7);
              }
              if (((param_3 & 1) != 0) && (lVar1 = *(int64_t *)(arg1 + uVar7 * 8), lVar1 != 0)
                 ) {
                fVar10 = fVar10 + *(float *)(lVar1 + uVar6 * 4);
              }
              if (lVar5 != 0) {
                *(float *)(lVar5 + uVar6 * 4) = fVar10 * fVar9 + *(float *)(lVar5 + uVar6 * 4);
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 != in_ECX);
          }
        }
      }
      else {
        uVar3 = uVar8 - 1;
        if (uVar8 == 0) {
          uVar3 = 0;
        }
        if (bVar2 == 0) {
          uVar6 = 0;
          do {
            if ((*(int64_t *)(this_ptr + uVar6 * 8) != 0) &&
               (*(int64_t *)(arg1 + (uint64_t)uVar3 * 8) != 0)) {
              param_1 = (**(code **)(g_02786500 + 0x28))(param_1,in_ECX);
            }
            uVar6 = uVar6 + 1;
          } while ((param_4 & 0xff) != uVar6);
        }
        else if ((*(int64_t *)(this_ptr + (uint64_t)uVar4 * 8) != 0) &&
                (*(int64_t *)(arg1 + (uint64_t)uVar3 * 8) != 0)) {
                                                  (**(code **)(g_02786500 + 0x28))((uint64_t)uVar4,in_ECX);
          return;
        }
      }
    }
  }
  return;
}

