// Function: FUN_00e392f0
// Address: 00e392f0
// Size: 780 bytes
// Class: GNUni


ulonglong FUN_00e392f0(uint param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint *unaff_RSI;
  uint uVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = *(uint *)(lVar1 + 0x18);
    uVar8 = (ulonglong)(int)uVar2;
    lVar1 = *(longlong *)(lVar1 + 0x10);
    bVar10 = ((param_1 | uVar2) & 3) == 0;
    bVar11 = (param_2 & 3) == 0;
    uVar3 = (ulonglong)CONCAT31((int3)((param_1 | uVar2) >> 8),bVar11 && bVar10);
    if (*(char *)(unaff_RDI + 0x18) == '\0') {
      if (bVar11 && bVar10) {
        uVar9 = uVar2 + 3;
        if (-1 < (int)uVar2) {
          uVar9 = uVar2;
        }
        uVar2 = param_1 + 3;
        if (-1 < (int)param_1) {
          uVar2 = param_1;
        }
        if (3 < (int)param_1) {
          uVar9 = (int)uVar9 >> 2;
          iVar6 = (int)uVar2 >> 2;
          param_2 = param_2 >> 2;
          do {
            if ((param_2 | (longlong)(int)uVar9) >> 0x20 == 0) {
              uVar8 = (param_2 & 0xffffffff) % (ulonglong)uVar9;
            }
            else {
              uVar8 = param_2 % (ulonglong)(longlong)(int)uVar9;
            }
            uVar7 = (uint)param_2 & 0xff;
            uVar2 = uVar7 << 0x10 | uVar7 << 0x18;
            uVar3 = (ulonglong)uVar2;
            *unaff_RSI = *unaff_RSI ^ (uVar7 << 8 | uVar2 | uVar7) ^ *(uint *)(lVar1 + uVar8 * 4);
            param_2 = param_2 + 1;
            unaff_RSI = unaff_RSI + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      else if (0 < (int)param_1) {
        if (param_1 != 1) {
          iVar6 = -(param_1 & 0xfffffffe);
          do {
            uVar4 = param_2 + 1;
            if ((param_2 | uVar8) >> 0x20 == 0) {
              uVar3 = (param_2 & 0xffffffff) % (ulonglong)uVar2;
            }
            else {
              uVar3 = param_2 % uVar8;
            }
            *(byte *)unaff_RSI = (byte)*unaff_RSI ^ (byte)(param_2 >> 2) ^ *(byte *)(lVar1 + uVar3);
            if ((uVar4 | uVar8) >> 0x20 == 0) {
              uVar3 = (uVar4 & 0xffffffff) / (ulonglong)uVar2;
              uVar5 = (uVar4 & 0xffffffff) % (ulonglong)uVar2;
            }
            else {
              uVar3 = uVar4 / uVar8;
              uVar5 = uVar4 % uVar8;
            }
            *(byte *)((longlong)unaff_RSI + 1) =
                 *(byte *)((longlong)unaff_RSI + 1) ^ (byte)(uVar4 >> 2) ^ *(byte *)(lVar1 + uVar5);
            param_2 = param_2 + 2;
            unaff_RSI = (uint *)((longlong)unaff_RSI + 2);
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        if ((param_1 & 1) != 0) {
          if ((param_2 | uVar8) >> 0x20 == 0) {
            uVar3 = (param_2 & 0xffffffff) / (ulonglong)uVar2;
            uVar8 = (param_2 & 0xffffffff) % (ulonglong)uVar2;
          }
          else {
            uVar3 = param_2 / uVar8;
            uVar8 = param_2 % uVar8;
          }
          *(byte *)unaff_RSI = (byte)*unaff_RSI ^ (byte)(param_2 >> 2) ^ *(byte *)(lVar1 + uVar8);
          return uVar3;
        }
      }
    }
    else if (bVar11 && bVar10) {
      uVar9 = uVar2 + 3;
      if (-1 < (int)uVar2) {
        uVar9 = uVar2;
      }
      uVar2 = param_1 + 3;
      if (-1 < (int)param_1) {
        uVar2 = param_1;
      }
      if (3 < (int)param_1) {
        uVar9 = (int)uVar9 >> 2;
        uVar8 = (ulonglong)(int)uVar9;
        param_2 = param_2 >> 2;
        if ((param_1 & 0xfffffffc) != 4) {
          iVar6 = -((int)uVar2 >> 2 & 0xfffffffeU);
          do {
            uVar3 = param_2 + 1;
            if ((param_2 | uVar8) >> 0x20 == 0) {
              uVar4 = (param_2 & 0xffffffff) % (ulonglong)uVar9;
            }
            else {
              uVar4 = param_2 % uVar8;
            }
            *unaff_RSI = *unaff_RSI ^ *(uint *)(lVar1 + uVar4 * 4);
            if ((uVar3 | uVar8) >> 0x20 == 0) {
              uVar3 = (uVar3 & 0xffffffff) % (ulonglong)uVar9;
            }
            else {
              uVar3 = uVar3 % uVar8;
            }
            uVar7 = *(uint *)(lVar1 + uVar3 * 4);
            uVar3 = (ulonglong)uVar7;
            unaff_RSI[1] = unaff_RSI[1] ^ uVar7;
            param_2 = param_2 + 2;
            unaff_RSI = unaff_RSI + 2;
            iVar6 = iVar6 + 2;
          } while (iVar6 != 0);
        }
        if (((int)uVar2 >> 2 & 1U) != 0) {
          if ((param_2 | uVar8) >> 0x20 == 0) {
            param_2 = (param_2 & 0xffffffff) % (ulonglong)uVar9;
          }
          else {
            param_2 = param_2 % uVar8;
          }
          uVar2 = *(uint *)(lVar1 + param_2 * 4);
          *unaff_RSI = *unaff_RSI ^ uVar2;
          return (ulonglong)uVar2;
        }
      }
    }
    else if (0 < (int)param_1) {
      if (param_1 != 1) {
        iVar6 = -(param_1 & 0xfffffffe);
        do {
          uVar4 = param_2 + 1;
          if ((param_2 | uVar8) >> 0x20 == 0) {
            uVar3 = (param_2 & 0xffffffff) % (ulonglong)uVar2;
          }
          else {
            uVar3 = param_2 % uVar8;
          }
          *(byte *)unaff_RSI = (byte)*unaff_RSI ^ *(byte *)(lVar1 + uVar3);
          if ((uVar4 | uVar8) >> 0x20 == 0) {
            uVar4 = (uVar4 & 0xffffffff) % (ulonglong)uVar2;
          }
          else {
            uVar4 = uVar4 % uVar8;
          }
          uVar3 = (ulonglong)*(byte *)(lVar1 + uVar4);
          *(byte *)((longlong)unaff_RSI + 1) =
               *(byte *)((longlong)unaff_RSI + 1) ^ *(byte *)(lVar1 + uVar4);
          param_2 = param_2 + 2;
          unaff_RSI = (uint *)((longlong)unaff_RSI + 2);
          iVar6 = iVar6 + 2;
        } while (iVar6 != 0);
      }
      if ((param_1 & 1) != 0) {
        if ((uVar8 | param_2) >> 0x20 == 0) {
          uVar3 = (param_2 & 0xffffffff) / (ulonglong)uVar2;
          param_2 = (param_2 & 0xffffffff) % (ulonglong)uVar2;
        }
        else {
          uVar3 = param_2 / uVar8;
          param_2 = param_2 % uVar8;
        }
        uVar3 = CONCAT71((int7)(uVar3 >> 8),*(byte *)(lVar1 + param_2));
        *(byte *)unaff_RSI = (byte)*unaff_RSI ^ *(byte *)(lVar1 + param_2);
      }
    }
  }
  return uVar3;
}


