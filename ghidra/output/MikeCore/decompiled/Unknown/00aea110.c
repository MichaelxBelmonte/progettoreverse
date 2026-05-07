// Function: FUN_00aea110
// Address: 00aea110
// Size: 699 bytes
// Class: Unknown


void FUN_00aea110(undefined4 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint in_ECX;
  uint uVar4;
  longlong lVar5;
  longlong unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = param_3 & 0xff;
  if (param_3 == param_4) {
    if (uVar3 != 0) {
      lVar5 = 0;
      do {
        if ((*(longlong *)(unaff_RDI + lVar5 * 8) != 0) &&
           (*(longlong *)(unaff_RSI + lVar5 * 8) != 0)) {
          param_1 = (**(code **)(DAT_02786500 + 0x28))(param_1,in_ECX);
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
          fVar9 = DAT_02390124 / (float)uVar3;
          if (bVar2 == 0) {
            uVar6 = 0;
            do {
              fVar10 = 0.0;
              uVar7 = 0;
              if (uVar3 != 1) {
                do {
                  lVar5 = *(longlong *)(unaff_RSI + uVar7 * 8);
                  if (lVar5 != 0) {
                    fVar10 = fVar10 + *(float *)(lVar5 + uVar6 * 4);
                  }
                  lVar5 = *(longlong *)(unaff_RSI + 8 + uVar7 * 8);
                  if (lVar5 != 0) {
                    fVar10 = fVar10 + *(float *)(lVar5 + uVar6 * 4);
                  }
                  uVar7 = uVar7 + 2;
                } while ((param_3 & 0xfe) != uVar7);
              }
              if (((param_3 & 1) != 0) && (lVar5 = *(longlong *)(unaff_RSI + uVar7 * 8), lVar5 != 0)
                 ) {
                fVar10 = fVar10 + *(float *)(lVar5 + uVar6 * 4);
              }
              fVar10 = fVar10 * fVar9;
              uVar7 = 0;
              if ((param_4 & 0xff) != 1) {
                do {
                  lVar5 = *(longlong *)(unaff_RDI + uVar7 * 8);
                  if (lVar5 != 0) {
                    *(float *)(lVar5 + uVar6 * 4) = *(float *)(lVar5 + uVar6 * 4) + fVar10;
                  }
                  lVar5 = *(longlong *)(unaff_RDI + 8 + uVar7 * 8);
                  if (lVar5 != 0) {
                    *(float *)(lVar5 + uVar6 * 4) = *(float *)(lVar5 + uVar6 * 4) + fVar10;
                  }
                  uVar7 = uVar7 + 2;
                } while ((param_4 & 0xfe) != uVar7);
              }
              if (((param_4 & 1) != 0) && (lVar5 = *(longlong *)(unaff_RDI + uVar7 * 8), lVar5 != 0)
                 ) {
                *(float *)(lVar5 + uVar6 * 4) = fVar10 + *(float *)(lVar5 + uVar6 * 4);
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 != in_ECX);
          }
          else {
            lVar5 = *(longlong *)(unaff_RDI + (longlong)(int)uVar4 * 8);
            uVar6 = 0;
            do {
              fVar10 = 0.0;
              uVar7 = 0;
              if (uVar3 != 1) {
                do {
                  lVar1 = *(longlong *)(unaff_RSI + uVar7 * 8);
                  if (lVar1 != 0) {
                    fVar10 = fVar10 + *(float *)(lVar1 + uVar6 * 4);
                  }
                  lVar1 = *(longlong *)(unaff_RSI + 8 + uVar7 * 8);
                  if (lVar1 != 0) {
                    fVar10 = fVar10 + *(float *)(lVar1 + uVar6 * 4);
                  }
                  uVar7 = uVar7 + 2;
                } while ((param_3 & 0xfe) != uVar7);
              }
              if (((param_3 & 1) != 0) && (lVar1 = *(longlong *)(unaff_RSI + uVar7 * 8), lVar1 != 0)
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
            if ((*(longlong *)(unaff_RDI + uVar6 * 8) != 0) &&
               (*(longlong *)(unaff_RSI + (ulonglong)uVar3 * 8) != 0)) {
              param_1 = (**(code **)(DAT_02786500 + 0x28))(param_1,in_ECX);
            }
            uVar6 = uVar6 + 1;
          } while ((param_4 & 0xff) != uVar6);
        }
        else if ((*(longlong *)(unaff_RDI + (ulonglong)uVar4 * 8) != 0) &&
                (*(longlong *)(unaff_RSI + (ulonglong)uVar3 * 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00aea2c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(DAT_02786500 + 0x28))((ulonglong)uVar4,in_ECX);
          return;
        }
      }
    }
  }
  return;
}


