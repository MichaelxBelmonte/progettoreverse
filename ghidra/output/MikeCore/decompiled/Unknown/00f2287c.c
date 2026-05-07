// Function: FUN_00f2287c
// Address: 00f2287c
// Size: 525 bytes
// Class: Unknown


void FUN_00f2287c(longlong param_1,int param_2,longlong param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  short sVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong unaff_RSI;
  ulonglong uVar8;
  undefined4 *unaff_RDI;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  longlong local_res8;
  
  uVar14 = 1;
  uVar11 = 1 << (param_4 & 0x1f);
  uVar10 = uVar11 - 1;
  if (param_2 + 1U == 0) {
    *unaff_RDI = 1;
    unaff_RDI[1] = param_4;
    iVar2 = (uVar11 >> 1) + (uVar11 >> 3) + 3;
  }
  else {
    uVar3 = (ulonglong)(param_2 + 1U);
    uVar8 = 0;
    uVar6 = uVar10;
    do {
      sVar4 = *(short *)(unaff_RSI + uVar8 * 2);
      if (sVar4 == -1) {
        uVar13 = (ulonglong)uVar6;
        uVar6 = uVar6 - 1;
        unaff_RDI[uVar13 * 2 + 3] = (int)uVar8;
        sVar4 = 1;
      }
      else if ((0x10000 << (param_4 - 1 & 0x1f)) >> 0x10 <= (int)sVar4) {
        uVar14 = 0;
      }
      *(short *)(local_res8 + uVar8 * 2) = sVar4;
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
    *unaff_RDI = uVar14;
    unaff_RDI[1] = param_4;
    if (uVar6 != uVar10) {
      uVar8 = 0;
      uVar13 = 0;
      do {
        sVar4 = *(short *)(unaff_RSI + uVar8 * 2);
        if (0 < sVar4) {
          iVar2 = 0;
          do {
            unaff_RDI[uVar13 * 2 + 3] = (int)uVar8;
            do {
              uVar7 = (int)uVar13 + (uVar11 >> 3) + (uVar11 >> 1) + 3 & uVar10;
              uVar13 = (ulonglong)uVar7;
            } while (uVar6 < uVar7);
            iVar2 = iVar2 + 1;
          } while (iVar2 != sVar4);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar3);
      goto LAB_00f22a37;
    }
    uVar8 = 0;
    lVar9 = 0;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(unaff_RSI + uVar8 * 2);
      *(longlong *)(local_res8 + 0x6a + lVar9) = lVar5;
      if (8 < (short)uVar1) {
        lVar12 = 0x72;
        do {
          *(longlong *)(local_res8 + lVar9 + lVar12) = lVar5;
          uVar13 = lVar12 - 0x62;
          lVar12 = lVar12 + 8;
        } while (uVar13 < uVar1);
      }
      lVar9 = lVar9 + (short)uVar1;
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + 0x101010101010101;
    } while (uVar8 != uVar3);
    iVar2 = (uVar11 >> 3) + 3 + (uVar11 >> 1);
  }
  uVar8 = 0;
  uVar6 = 0;
  do {
    unaff_RDI[(ulonglong)(uVar6 & uVar10) * 2 + 3] = (uint)*(byte *)(local_res8 + 0x6a + uVar8);
    unaff_RDI[(ulonglong)(iVar2 + uVar6 & uVar10) * 2 + 3] =
         (uint)*(byte *)(local_res8 + 0x6b + uVar8);
    uVar6 = uVar6 + iVar2 * 2 & uVar10;
    uVar8 = uVar8 + 2;
  } while (uVar8 < uVar11);
LAB_00f22a37:
  uVar8 = 0;
  do {
    uVar3 = (ulonglong)(uint)unaff_RDI[uVar8 * 2 + 3];
    uVar1 = *(ushort *)(local_res8 + uVar3 * 2);
    *(ushort *)(local_res8 + uVar3 * 2) = uVar1 + 1;
    uVar10 = LZCOUNT((uint)uVar1) + (param_4 - 0x1f);
    *(char *)((longlong)unaff_RDI + uVar8 * 8 + 0xb) = (char)uVar10;
    *(ushort *)(unaff_RDI + uVar8 * 2 + 2) = (uVar1 << (uVar10 & 0x1f)) - (short)uVar11;
    *(undefined1 *)((longlong)unaff_RDI + uVar8 * 8 + 10) = *(undefined1 *)(param_3 + uVar3);
    unaff_RDI[uVar8 * 2 + 3] = *(undefined4 *)(param_1 + uVar3 * 4);
    uVar8 = uVar8 + 1;
  } while (uVar11 != uVar8);
  return;
}


