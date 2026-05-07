// Function: FUN_009646e7
// Address: 009646e7
// Size: 698 bytes
// Class: GNString


undefined8 FUN_009646e7(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong unaff_RDI;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  byte local_48 [4];
  byte local_44;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  byte local_40 [4];
  byte local_3c;
  byte bStack_3b;
  byte bStack_3a;
  byte bStack_39;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (unaff_RDI == 0) {
    uVar4 = 99;
  }
  else {
    uVar4 = 0x1f5;
    if ((unaff_RDI & 3) == 0) {
      lVar8 = 0;
      do {
        uVar2 = FUN_0097421d();
        *(undefined4 *)(unaff_RDI + lVar8) = uVar2;
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0x10);
      puVar10 = (undefined4 *)(unaff_RDI + 0x14);
      lVar8 = 0;
      do {
        *(undefined4 *)(local_40 + lVar8 * 4) = *(undefined4 *)(unaff_RDI + lVar8 * 8);
        *(undefined4 *)(local_48 + lVar8 * 4) = *(undefined4 *)(unaff_RDI + 4 + lVar8 * 8);
        uVar2 = FUN_009649a1();
        *puVar10 = uVar2;
        puVar10 = puVar10 + -1;
        bVar11 = lVar8 == 0;
        lVar8 = 1;
      } while (bVar11);
      uVar7 = 0;
      lVar8 = 0;
      do {
        uVar9 = *(uint *)(&DAT_023c1890 +
                         (ulonglong)
                         ((&DAT_023c2490)[(&DAT_023c2590)[uVar7 >> 8 & 0xff] ^ bStack_3b] ^
                         local_40[1]) * 4) ^
                *(uint *)(&DAT_023c1490 +
                         (ulonglong)
                         ((&DAT_023c2490)[(&DAT_023c2490)[lVar8 * 2] ^ local_3c] ^ local_40[0]) * 4)
                ^ *(uint *)(&DAT_023c1c90 +
                           (ulonglong)
                           ((&DAT_023c2590)[(&DAT_023c2490)[uVar7 >> 0x10 & 0xff] ^ bStack_3a] ^
                           local_40[2]) * 4) ^
                *(uint *)(&DAT_023c2090 +
                         (ulonglong)
                         ((&DAT_023c2590)[(&DAT_023c2590)[uVar7 >> 0x18] ^ bStack_39] ^ local_40[3])
                         * 4);
        uVar3 = uVar7 + 0x1010101;
        uVar3 = *(uint *)(&DAT_023c1890 +
                         (ulonglong)
                         ((&DAT_023c2490)[(&DAT_023c2590)[uVar3 >> 8 & 0xff] ^ bStack_43] ^
                         local_48[1]) * 4) ^
                *(uint *)(&DAT_023c1490 +
                         (ulonglong)
                         ((&DAT_023c2490)[(&DAT_023c2491)[lVar8 * 2] ^ local_44] ^ local_48[0]) * 4)
                ^ *(uint *)(&DAT_023c1c90 +
                           (ulonglong)
                           ((&DAT_023c2590)[(&DAT_023c2490)[uVar3 >> 0x10 & 0xff] ^ bStack_42] ^
                           local_48[2]) * 4) ^
                *(uint *)(&DAT_023c2090 +
                         (ulonglong)
                         ((&DAT_023c2590)[(&DAT_023c2590)[uVar3 >> 0x18] ^ bStack_41] ^ local_48[3])
                         * 4);
        uVar3 = uVar3 << 8 | uVar3 >> 0x18;
        *(uint *)(unaff_RDI + 0x18 + lVar8 * 8) = uVar3 + uVar9;
        uVar9 = uVar9 + uVar3 * 2;
        *(uint *)(unaff_RDI + 0x1c + lVar8 * 8) = uVar9 * 0x200 | uVar9 >> 0x17;
        lVar8 = lVar8 + 1;
        uVar7 = uVar7 + 0x2020202;
      } while (lVar8 != 0x14);
      uVar4 = 0;
      if (*(int *)(unaff_RDI + 0xb8) == 0) {
        puVar5 = (undefined8 *)(unaff_RDI + 0x38);
        puVar6 = (undefined8 *)(unaff_RDI + 0xb0);
        do {
          uVar1 = *puVar5;
          *(undefined4 *)puVar5 = *(undefined4 *)puVar6;
          *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)((longlong)puVar6 + 4);
          *puVar6 = uVar1;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + -1;
        } while (puVar5 < puVar6);
        *(undefined4 *)(unaff_RDI + 0xb8) = 0;
      }
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


