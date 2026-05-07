// Function: FUN_00f05674
// Address: 00f05674
// Size: 953 bytes
// Class: Unknown


longlong FUN_00f05674(undefined8 param_1,undefined8 param_2,longlong param_3,code *param_4)

{
  longlong *plVar1;
  undefined2 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_RSI;
  undefined2 *puVar9;
  undefined2 *unaff_RDI;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  bool bVar17;
  ulonglong local_f8 [4];
  longlong alStack_d8 [4];
  ulonglong auStack_b8 [7];
  longlong *local_80 [5];
  undefined2 *local_58;
  
  lVar5 = FUN_00f05a2d(param_2);
  if (0xffffffffffffff87 < lVar5 - 1U) {
    return lVar5;
  }
  local_58 = (undefined2 *)((longlong)unaff_RDI + unaff_RSI);
  (*param_4)();
  uVar6 = unaff_RSI + 3U >> 2;
  lVar5 = 0;
LAB_00f056e6:
  uVar7 = (longlong)local_58 - (longlong)unaff_RDI;
  unaff_RDI = (undefined2 *)((longlong)unaff_RDI + uVar6);
  if (uVar7 < uVar6) {
    unaff_RDI = local_58;
  }
  puVar2 = (undefined2 *)alStack_d8[lVar5];
  if ((unaff_RDI < puVar2) ||
     (plVar15 = (longlong *)local_f8[lVar5], plVar15 < local_80[lVar5] + -1)) {
    return -0x14;
  }
  lVar12 = *plVar15;
  uVar10 = 0;
  for (uVar7 = auStack_b8[lVar5]; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x8000000000000000) {
    uVar10 = uVar10 + 1;
  }
  plVar1 = local_80[0] + 1;
  uVar7 = (longlong)unaff_RDI - (longlong)puVar2;
  iVar13 = (int)local_80[0];
  puVar9 = puVar2;
  if (7 < uVar7) {
    plVar14 = plVar15;
    do {
      if (plVar14 < plVar1) {
        plVar15 = local_80[0];
        if (plVar14 == local_80[0]) goto LAB_00f058dc;
        uVar11 = uVar10 >> 3 & 0x1fffffff;
        bVar17 = (longlong *)((longlong)plVar14 - uVar11) < local_80[0];
        uVar7 = (ulonglong)(uint)((int)plVar14 - iVar13);
        if (!bVar17) {
          uVar7 = uVar11;
        }
        uVar16 = (uint)uVar10 + (int)uVar7 * -8;
      }
      else {
        uVar7 = uVar10 >> 3 & 0x1fffffff;
        uVar16 = (uint)uVar10 & 7;
        bVar17 = false;
      }
      uVar10 = (ulonglong)uVar16;
      plVar15 = (longlong *)((longlong)plVar14 - uVar7);
      lVar12 = *plVar15;
      if (((undefined2 *)((longlong)unaff_RDI - 9U) <= puVar9) || (bVar17)) goto LAB_00f058dc;
      uVar7 = (ulonglong)(lVar12 << (uVar10 & 0x3f)) >> 0x35;
      *puVar9 = *(undefined2 *)(param_3 + 4 + uVar7 * 4);
      uVar16 = *(byte *)(param_3 + 6 + uVar7 * 4) + uVar16;
      uVar7 = (ulonglong)*(byte *)(param_3 + 7 + uVar7 * 4);
      uVar10 = (ulonglong)(lVar12 << ((ulonglong)uVar16 & 0x3f)) >> 0x35;
      *(undefined2 *)((longlong)puVar9 + uVar7) = *(undefined2 *)(param_3 + 4 + uVar10 * 4);
      uVar16 = *(byte *)(param_3 + 6 + uVar10 * 4) + uVar16;
      uVar10 = (ulonglong)*(byte *)(param_3 + 7 + uVar10 * 4);
      lVar3 = uVar10 + uVar7;
      uVar11 = (ulonglong)(lVar12 << ((ulonglong)uVar16 & 0x3f)) >> 0x35;
      *(undefined2 *)((longlong)puVar9 + uVar10 + uVar7) = *(undefined2 *)(param_3 + 4 + uVar11 * 4)
      ;
      uVar16 = *(byte *)(param_3 + 6 + uVar11 * 4) + uVar16;
      uVar7 = (ulonglong)*(byte *)(param_3 + 7 + uVar11 * 4);
      lVar4 = uVar7 + lVar3;
      uVar10 = (ulonglong)(lVar12 << ((ulonglong)uVar16 & 0x3f)) >> 0x35;
      *(undefined2 *)((longlong)puVar9 + uVar7 + lVar3) = *(undefined2 *)(param_3 + 4 + uVar10 * 4);
      uVar16 = *(byte *)(param_3 + 6 + uVar10 * 4) + uVar16;
      uVar7 = (ulonglong)*(byte *)(param_3 + 7 + uVar10 * 4);
      uVar11 = (ulonglong)(lVar12 << ((ulonglong)uVar16 & 0x3f)) >> 0x35;
      *(undefined2 *)((longlong)puVar9 + uVar7 + lVar4) = *(undefined2 *)(param_3 + 4 + uVar11 * 4);
      uVar16 = *(byte *)(param_3 + 6 + uVar11 * 4) + uVar16;
      uVar10 = (ulonglong)uVar16;
      puVar9 = (undefined2 *)
               ((longlong)puVar9 + (ulonglong)*(byte *)(param_3 + 7 + uVar11 * 4) + uVar7 + lVar4);
      plVar14 = plVar15;
      if (0x40 < uVar16) goto LAB_00f058dc;
    } while( true );
  }
  if (plVar15 < plVar1) {
    if (plVar15 != local_80[0]) {
      uVar8 = uVar10 >> 3 & 0x1fffffff;
      uVar11 = (ulonglong)(uint)((int)plVar15 - iVar13);
      if (local_80[0] <= (longlong *)((longlong)plVar15 - uVar8)) {
        uVar11 = uVar8;
      }
      uVar16 = (uint)uVar10 + (int)uVar11 * -8;
      goto LAB_00f058d0;
    }
  }
  else {
    uVar11 = uVar10 >> 3;
    uVar16 = (uint)uVar10 & 7;
LAB_00f058d0:
    uVar10 = (ulonglong)uVar16;
    plVar15 = (longlong *)((longlong)plVar15 - uVar11);
    lVar12 = *plVar15;
  }
  goto LAB_00f058e3;
LAB_00f058dc:
  uVar7 = (longlong)unaff_RDI - (longlong)puVar9;
LAB_00f058e3:
  if (1 < uVar7) {
    while (uVar16 = (uint)uVar10, uVar16 < 0x41) {
      if (plVar15 < plVar1) {
        if (plVar15 == local_80[0]) break;
        uVar10 = uVar10 >> 3 & 0x1fffffff;
        bVar17 = (longlong *)((longlong)plVar15 - uVar10) < local_80[0];
        uVar7 = (ulonglong)(uint)((int)plVar15 - iVar13);
        if (!bVar17) {
          uVar7 = uVar10;
        }
        uVar16 = uVar16 + (int)uVar7 * -8;
      }
      else {
        uVar7 = uVar10 >> 3 & 0x1fffffff;
        uVar16 = uVar16 & 7;
        bVar17 = false;
      }
      uVar10 = (ulonglong)uVar16;
      plVar15 = (longlong *)((longlong)plVar15 - uVar7);
      lVar12 = *plVar15;
      if ((unaff_RDI + -1 < puVar9) || (bVar17)) break;
      uVar7 = (ulonglong)(lVar12 << (uVar10 & 0x3f)) >> 0x35;
      *puVar9 = *(undefined2 *)(param_3 + 4 + uVar7 * 4);
      puVar9 = (undefined2 *)((longlong)puVar9 + (ulonglong)*(byte *)(param_3 + 7 + uVar7 * 4));
      uVar10 = (ulonglong)(*(byte *)(param_3 + 6 + uVar7 * 4) + uVar16);
    }
    for (; puVar9 <= unaff_RDI + -1;
        puVar9 = (undefined2 *)((ulonglong)*(byte *)(param_3 + 7 + uVar7 * 4) + (longlong)puVar9)) {
      uVar7 = (ulonglong)(lVar12 << (uVar10 & 0x3f)) >> 0x35;
      *puVar9 = *(undefined2 *)(param_3 + 4 + uVar7 * 4);
      uVar10 = (ulonglong)((uint)*(byte *)(param_3 + 6 + uVar7 * 4) + (int)uVar10);
    }
  }
  if (puVar9 < unaff_RDI) {
    *(undefined1 *)puVar9 =
         *(undefined1 *)(param_3 + 4 + ((ulonglong)(lVar12 << (uVar10 & 0x3f)) >> 0x35) * 4);
    puVar9 = (undefined2 *)((longlong)puVar9 + 1);
  }
  puVar9 = (undefined2 *)((longlong)puVar9 + (alStack_d8[lVar5] - (longlong)puVar2));
  alStack_d8[lVar5] = (longlong)puVar9;
  if (puVar9 != unaff_RDI) {
    return -0x14;
  }
  lVar5 = lVar5 + 1;
  if (lVar5 == 4) {
    return unaff_RSI;
  }
  goto LAB_00f056e6;
}


