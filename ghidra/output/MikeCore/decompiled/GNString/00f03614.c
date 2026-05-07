// Function: FUN_00f03614
// Address: 00f03614
// Size: 645 bytes
// Class: GNString


void FUN_00f03614(void)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *unaff_RDI;
  int iVar11;
  undefined2 *puVar12;
  ulonglong local_b8 [2];
  undefined2 *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78 [4];
  ulonglong local_58 [4];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar3 = unaff_RDI[0xc];
  uVar4 = unaff_RDI[0xd];
  local_58[2] = unaff_RDI[10];
  local_58[3] = unaff_RDI[0xb];
  local_58[0] = unaff_RDI[8];
  local_58[1] = unaff_RDI[9];
  local_78[0] = *unaff_RDI;
  local_78[1] = unaff_RDI[1];
  local_78[2] = unaff_RDI[2];
  local_78[3] = unaff_RDI[3];
  uStack_80 = (undefined2 *)unaff_RDI[7];
  local_98 = unaff_RDI[4];
  uStack_90 = unaff_RDI[5];
  local_88 = unaff_RDI[6];
  local_b8[0] = unaff_RDI[5];
  local_b8[1] = unaff_RDI[6];
  local_a8 = uStack_80;
  local_a0 = unaff_RDI[0xe];
  while( true ) {
    lVar8 = 0;
    uVar7 = (local_78[0] - uVar4) / 7;
    do {
      uVar9 = (local_b8[lVar8] - (&local_98)[lVar8]) / 10;
      if (uVar7 < uVar9) {
        uVar9 = uVar7;
      }
      lVar8 = lVar8 + 1;
      uVar7 = uVar9;
    } while (lVar8 != 4);
    if (((((longlong)(uVar9 * 5) < 10) || (local_78[1] < local_78[0])) ||
        (local_78[2] < local_78[1])) || (local_78[3] < local_78[2])) break;
    puVar12 = (undefined2 *)((longlong)uStack_80 + uVar9 * 5);
    iVar11 = 0;
    do {
      do {
        lVar8 = 0;
        do {
          uVar7 = local_58[lVar8];
          uVar9 = uVar7 >> 0x35;
          bVar1 = *(byte *)(uVar3 + 2 + uVar9 * 4);
          bVar2 = *(byte *)(uVar3 + 3 + uVar9 * 4);
          puVar5 = (undefined2 *)(&local_98)[lVar8];
          *puVar5 = *(undefined2 *)(uVar3 + uVar9 * 4);
          local_58[lVar8] = uVar7 << ((ulonglong)bVar1 & 0x3f);
          (&local_98)[lVar8] = (ulonglong)bVar2 + (longlong)puVar5;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 5);
      uVar7 = local_58[3] >> 0x35;
      bVar1 = *(byte *)(uVar3 + 2 + uVar7 * 4);
      bVar2 = *(byte *)(uVar3 + 3 + uVar7 * 4);
      *uStack_80 = *(undefined2 *)(uVar3 + uVar7 * 4);
      local_58[3] = local_58[3] << ((ulonglong)bVar1 & 0x3f);
      uStack_80 = (undefined2 *)((ulonglong)bVar2 + (longlong)uStack_80);
      lVar8 = 0;
      while( true ) {
        uVar7 = local_58[3] >> 0x35;
        bVar1 = *(byte *)(uVar3 + 2 + uVar7 * 4);
        bVar2 = *(byte *)(uVar3 + 3 + uVar7 * 4);
        *uStack_80 = *(undefined2 *)(uVar3 + uVar7 * 4);
        local_58[3] = local_58[3] << ((ulonglong)bVar1 & 0x3f);
        uStack_80 = (undefined2 *)((ulonglong)bVar2 + (longlong)uStack_80);
        uVar6 = 0;
        for (uVar7 = local_58[lVar8]; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
          uVar6 = uVar6 + 1;
        }
        puVar10 = (ulonglong *)(local_78[lVar8] - (ulonglong)(uVar6 >> 3));
        local_78[lVar8] = (ulonglong)puVar10;
        local_58[lVar8] = (*puVar10 | 1) << ((byte)uVar6 & 7);
        if (lVar8 == 3) break;
        lVar8 = lVar8 + 1;
      }
      iVar11 = 0;
    } while (uStack_80 < puVar12);
  }
  unaff_RDI[10] = local_58[2];
  unaff_RDI[0xb] = local_58[3];
  unaff_RDI[8] = local_58[0];
  unaff_RDI[9] = local_58[1];
  unaff_RDI[2] = local_78[2];
  unaff_RDI[3] = local_78[3];
  *unaff_RDI = local_78[0];
  unaff_RDI[1] = local_78[1];
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  *(undefined4 *)(unaff_RDI + 6) = (undefined4)local_88;
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = local_88._4_4_;
  *(undefined4 *)(unaff_RDI + 7) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = uStack_80._4_4_;
  *(undefined4 *)(unaff_RDI + 4) = (undefined4)local_98;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = local_98._4_4_;
  *(undefined4 *)(unaff_RDI + 5) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uStack_90._4_4_;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


