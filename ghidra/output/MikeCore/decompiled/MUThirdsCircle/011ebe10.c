// Function: FUN_011ebe10
// Address: 011ebe10
// Size: 1500 bytes
// Class: MUThirdsCircle


/* WARNING: Removing unreachable block (ram,0x011ec279) */
/* WARNING: Removing unreachable block (ram,0x011ec282) */
/* WARNING: Removing unreachable block (ram,0x011ec0c9) */
/* WARNING: Removing unreachable block (ram,0x011ec0d2) */
/* WARNING: Removing unreachable block (ram,0x011ebe6c) */
/* WARNING: Removing unreachable block (ram,0x011ebe75) */
/* WARNING: Removing unreachable block (ram,0x011ebfe2) */
/* WARNING: Removing unreachable block (ram,0x011ebfeb) */
/* WARNING: Removing unreachable block (ram,0x011ec172) */
/* WARNING: Removing unreachable block (ram,0x011ec17b) */
/* WARNING: Removing unreachable block (ram,0x011ec34b) */
/* WARNING: Removing unreachable block (ram,0x011ec354) */

void FUN_011ebe10(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong unaff_RDI;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong local_40;
  char local_38;
  
  uVar1 = *(uint *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
  uVar14 = (ulonglong)uVar1;
  uVar2 = *(uint *)(*(longlong *)(unaff_RDI + 0x1d0) + 0x24);
  uVar12 = (ulonglong)uVar2;
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (0 < (int)uVar1) {
    if ((int)uVar2 < 2) {
      uVar11 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar11 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_015b4130(0,uVar12);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        uVar3 = *(uint *)(local_40 + 0xc);
        if (0 < (int)uVar3) {
          uVar13 = 0;
          do {
            iVar7 = FUN_00e7d850(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(local_40 + 0x10) + uVar13 * 8) + 0x10
                                  ));
            *(undefined1 *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar7 * 8) + 0x3c)
                 = 1;
            uVar13 = uVar13 + 1;
          } while (uVar3 != uVar13);
        }
        FUN_00d50b20();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar14);
    }
    else {
      uVar11 = (ulonglong)((uint)(uVar12 - 1) & 3);
      uVar13 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + uVar13 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        lVar5 = *(longlong *)(lVar4 + 0x10);
        lVar6 = *(longlong *)(local_40 + 0x10);
        lVar8 = 1;
        if (2 < uVar12 - 2) {
          uVar10 = 0;
          do {
            uVar9 = uVar10;
            *(undefined4 *)(lVar6 + 4 + uVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar5 + 8 + uVar9 * 8) + 0x14);
            *(undefined4 *)(lVar6 + 8 + uVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar5 + 0x10 + uVar9 * 8) + 0x14);
            *(undefined4 *)(lVar6 + 0xc + uVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar5 + 0x18 + uVar9 * 8) + 0x14);
            *(undefined4 *)(lVar6 + 0x10 + uVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar5 + 0x20 + uVar9 * 8) + 0x14);
            uVar10 = uVar9 + 4;
          } while ((uVar12 - 1 & 0xfffffffffffffffc) != uVar9 + 4);
          lVar8 = uVar9 + 5;
        }
        if (uVar11 != 0) {
          uVar10 = 0;
          do {
            *(undefined4 *)(lVar6 + lVar8 * 4 + uVar10 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar5 + lVar8 * 8 + uVar10 * 8) + 0x14);
            uVar10 = uVar10 + 1;
          } while (uVar11 != uVar10);
        }
        FUN_015b4130(0,uVar12);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        uVar3 = *(uint *)(local_40 + 0xc);
        if (0 < (int)uVar3) {
          uVar10 = 0;
          do {
            iVar7 = FUN_00e7d850(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(local_40 + 0x10) + uVar10 * 8) + 0x10
                                  ));
            *(undefined1 *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar7 * 8) + 0x3c)
                 = 1;
            uVar10 = uVar10 + 1;
          } while (uVar3 != uVar10);
        }
        FUN_00d50b20();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar14);
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (1 < (int)uVar2) {
    if ((int)uVar1 < 1) {
      uVar11 = 1;
      do {
        FUN_015b4130(0,uVar14);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        uVar1 = *(uint *)(local_40 + 0xc);
        if (0 < (int)uVar1) {
          uVar13 = 0;
          do {
            iVar7 = FUN_00e7d850(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(local_40 + 0x10) + uVar13 * 8) + 0x10
                                  ));
            *(undefined1 *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + (longlong)iVar7 * 8) +
                 0x10) + uVar11 * 8) + 0x3d) = 1;
            uVar13 = uVar13 + 1;
          } while (uVar1 != uVar13);
        }
        FUN_00d50b20();
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar12);
    }
    else {
      uVar14 = 1;
      do {
        lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10);
        lVar5 = *(longlong *)(local_40 + 0x10);
        uVar11 = 0;
        if (uVar1 != 1) {
          do {
            *(undefined4 *)(lVar5 + uVar11 * 4) =
                 *(undefined4 *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar4 + uVar11 * 8) + 0x10) + uVar14 * 8) + 0x14);
            *(undefined4 *)(lVar5 + 4 + uVar11 * 4) =
                 *(undefined4 *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar4 + 8 + uVar11 * 8) + 0x10) + uVar14 * 8) +
                  0x14);
            uVar11 = uVar11 + 2;
          } while ((uVar1 & 0xfffffffe) != uVar11);
        }
        if ((uVar1 & 1) != 0) {
          *(undefined4 *)(lVar5 + uVar11 * 4) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + uVar11 * 8) + 0x10) + uVar14 * 8)
                + 0x14);
        }
        FUN_015b4130(0);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        uVar2 = *(uint *)(local_40 + 0xc);
        if (0 < (int)uVar2) {
          uVar11 = 0;
          do {
            iVar7 = FUN_00e7d850(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(local_40 + 0x10) + uVar11 * 8) + 0x10
                                  ));
            *(undefined1 *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x280) + 0x10) + (longlong)iVar7 * 8) +
                 0x10) + uVar14 * 8) + 0x3d) = 1;
            uVar11 = uVar11 + 1;
          } while (uVar2 != uVar11);
        }
        FUN_00d50b20();
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar12);
    }
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


