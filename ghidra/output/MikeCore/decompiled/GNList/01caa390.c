// Function: FUN_01caa390
// Address: 01caa390
// Size: 569 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01caa3c6) */
/* WARNING: Removing unreachable block (ram,0x01caa3cf) */
/* WARNING: Removing unreachable block (ram,0x01caa402) */
/* WARNING: Removing unreachable block (ram,0x01caa40b) */

void FUN_01caa390(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined8 local_48;
  undefined1 local_40;
  
  FUN_00d21140();
  lVar3 = *unaff_RSI;
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  if (lVar3 == 0) {
    ___bzero();
  }
  else {
    iVar2 = *(int *)(local_48 + 0x18);
    iVar4 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    if (7 < iVar2) {
      lVar5 = *(longlong *)(local_48 + 0x10);
      uVar1 = (iVar4 >> 3) - 1;
      uVar11 = 0;
      if (2 < uVar1) {
        uVar10 = (ulonglong)uVar1 + 1;
        uVar11 = uVar10 & 0xfffffffffffffffc;
        auVar12._8_4_ = (int)lVar3;
        auVar12._0_8_ = lVar3;
        auVar12._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
        uVar8 = (uVar11 - 4 >> 2) + 1;
        uVar7 = (ulonglong)((uint)uVar8 & 7);
        if (uVar11 - 4 < 0x1c) {
          lVar6 = 0;
        }
        else {
          lVar9 = -(uVar8 & 0xfffffffffffffff8);
          lVar6 = 0;
          do {
            *(undefined1 (*) [16])(lVar5 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0x10 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0x20 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0x30 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0x40 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0x50 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0x60 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0x70 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0x80 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0x90 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0xa0 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0xb0 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0xc0 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0xd0 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0xe0 + lVar6 * 8) = auVar12;
            *(undefined1 (*) [16])(lVar5 + 0xf0 + lVar6 * 8) = auVar12;
            lVar6 = lVar6 + 0x20;
            lVar9 = lVar9 + 8;
          } while (lVar9 != 0);
        }
        if (uVar7 != 0) {
          lVar6 = lVar5 + lVar6 * 8;
          lVar9 = 0;
          do {
            *(undefined1 (*) [16])(lVar6 + lVar9) = auVar12;
            *(undefined1 (*) [16])(lVar6 + 0x10 + lVar9) = auVar12;
            lVar9 = lVar9 + 0x20;
          } while (uVar7 << 5 != lVar9);
        }
        if (uVar10 == uVar11) goto LAB_01caa58c;
        lVar5 = lVar5 + uVar11 * 8;
      }
      lVar6 = 0;
      do {
        *(longlong *)(lVar5 + lVar6 * 8) = lVar3;
        lVar6 = lVar6 + 1;
      } while ((iVar4 >> 3) - (int)uVar11 != (int)lVar6);
    }
  }
LAB_01caa58c:
  FUN_01ca79b0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}


