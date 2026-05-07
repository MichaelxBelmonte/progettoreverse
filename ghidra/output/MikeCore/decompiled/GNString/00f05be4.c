// Function: FUN_00f05be4
// Address: 00f05be4
// Size: 540 bytes
// Class: GNString


void FUN_00f05be4(void)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *unaff_RDI;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78 [4];
  ulonglong local_58 [4];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar2 = unaff_RDI[0xc];
  uVar3 = unaff_RDI[0xe];
  uVar4 = unaff_RDI[0xd];
  local_58[2] = unaff_RDI[10];
  local_58[3] = unaff_RDI[0xb];
  local_58[0] = unaff_RDI[8];
  local_58[1] = unaff_RDI[9];
  local_78[2] = unaff_RDI[2];
  local_78[3] = unaff_RDI[3];
  local_78[0] = *unaff_RDI;
  local_78[1] = unaff_RDI[1];
  uStack_80 = unaff_RDI[7];
  local_88 = unaff_RDI[6];
  local_98 = unaff_RDI[4];
  uStack_90 = unaff_RDI[5];
  uVar9 = (uVar3 - uStack_80) / 5;
  uVar7 = (*unaff_RDI - uVar4) / 7;
  if (uVar9 < uVar7) {
    uVar7 = uVar9;
  }
  if (0x13 < (longlong)(uVar7 * 5)) {
    uVar7 = uStack_80 + uVar7 * 5;
    do {
      if (((local_78[1] < local_78[0]) || (local_78[2] < local_78[1])) ||
         (local_78[3] < local_78[2])) break;
      lVar6 = 0;
      do {
        do {
          lVar8 = 0;
          do {
            uVar1 = *(ushort *)(uVar2 + (local_58[lVar8] >> 0x35) * 2);
            local_58[lVar8] = local_58[lVar8] << ((ulonglong)uVar1 & 0x3f);
            *(char *)((&local_98)[lVar8] + lVar6) = (char)(uVar1 >> 8);
            lVar8 = lVar8 + 1;
          } while (lVar8 != 4);
          lVar6 = lVar6 + 1;
        } while (lVar6 != 5);
        lVar6 = 0;
        do {
          uVar5 = 0;
          for (uVar9 = local_58[lVar6]; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
            uVar5 = uVar5 + 1;
          }
          (&local_98)[lVar6] = (&local_98)[lVar6] + 5;
          puVar10 = (ulonglong *)(local_78[lVar6] - (ulonglong)(uVar5 >> 3));
          local_78[lVar6] = (ulonglong)puVar10;
          local_58[lVar6] = (*puVar10 | 1) << ((byte)uVar5 & 7);
          lVar6 = lVar6 + 1;
        } while (lVar6 != 4);
        lVar6 = 0;
      } while (uStack_80 < uVar7);
      uVar7 = (uVar3 - uStack_80) / 5;
      uVar9 = (local_78[0] - uVar4) / 7;
      if (uVar7 < uVar9) {
        uVar9 = uVar7;
      }
      uVar7 = uStack_80 + uVar9 * 5;
    } while (0x13 < (longlong)(uVar9 * 5));
  }
  unaff_RDI[10] = local_58[2];
  unaff_RDI[0xb] = local_58[3];
  unaff_RDI[8] = local_58[0];
  unaff_RDI[9] = local_58[1];
  unaff_RDI[2] = local_78[2];
  unaff_RDI[3] = local_78[3];
  *unaff_RDI = local_78[0];
  unaff_RDI[1] = local_78[1];
  *(undefined4 *)(unaff_RDI + 6) = (undefined4)local_88;
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = local_88._4_4_;
  *(undefined4 *)(unaff_RDI + 7) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = uStack_80._4_4_;
  *(undefined4 *)(unaff_RDI + 4) = (undefined4)local_98;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = local_98._4_4_;
  *(undefined4 *)(unaff_RDI + 5) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uStack_90._4_4_;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


