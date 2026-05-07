// Function: FUN_00f07060
// Address: 00f07060
// Size: 663 bytes
// Class: Unknown


longlong FUN_00f07060(undefined8 param_1,undefined8 param_2,longlong param_3,code *param_4)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar9;
  longlong unaff_RSI;
  undefined1 *puVar10;
  undefined1 *unaff_RDI;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  bool bVar14;
  ulonglong local_f8 [4];
  longlong alStack_d8 [4];
  ulonglong auStack_b8 [7];
  longlong *local_80 [4];
  undefined1 *local_60;
  ulonglong uVar8;
  
  lVar2 = FUN_00f05a2d(param_2);
  if (lVar2 - 1U < 0xffffffffffffff88) {
    local_60 = unaff_RDI + unaff_RSI;
    (*param_4)();
    uVar13 = unaff_RSI + 3U >> 2;
    lVar2 = 0;
    while( true ) {
      uVar3 = (longlong)local_60 - (longlong)unaff_RDI;
      unaff_RDI = unaff_RDI + uVar13;
      if (uVar3 < uVar13) {
        unaff_RDI = local_60;
      }
      puVar10 = (undefined1 *)alStack_d8[lVar2];
      if ((unaff_RDI < puVar10) ||
         (plVar12 = (longlong *)local_f8[lVar2], plVar12 < local_80[lVar2] + -1)) break;
      lVar11 = *plVar12;
      uVar8 = 0;
      for (uVar3 = auStack_b8[lVar2]; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x8000000000000000) {
        uVar8 = uVar8 + 1;
      }
      lVar4 = (longlong)unaff_RDI - (longlong)puVar10;
      if (3 < lVar4) {
        do {
          if (plVar12 < local_80[0] + 1) {
            if (plVar12 == local_80[0]) goto LAB_00f07269;
            uVar3 = uVar8 >> 3 & 0x1fffffff;
            bVar14 = (longlong *)((longlong)plVar12 - uVar3) < local_80[0];
            uVar7 = (int)plVar12 - (int)local_80[0];
            if (!bVar14) {
              uVar7 = (uint)uVar3;
            }
            uVar6 = (uint)uVar8 + uVar7 * -8;
          }
          else {
            uVar7 = (uint)(uVar8 >> 3) & 0x1fffffff;
            uVar6 = (uint)uVar8 & 7;
            bVar14 = false;
          }
          uVar8 = (ulonglong)uVar6;
          plVar12 = (longlong *)((longlong)plVar12 - (ulonglong)uVar7);
          lVar11 = *plVar12;
          if ((unaff_RDI + -3 <= puVar10) || (bVar14)) goto LAB_00f07269;
          uVar3 = (ulonglong)(lVar11 << (uVar8 & 0x3f)) >> 0x35;
          uVar6 = *(byte *)(param_3 + 4 + uVar3 * 2) + uVar6;
          *puVar10 = *(undefined1 *)(param_3 + 5 + uVar3 * 2);
          uVar3 = (ulonglong)(lVar11 << ((ulonglong)uVar6 & 0x3f)) >> 0x35;
          uVar6 = *(byte *)(param_3 + 4 + uVar3 * 2) + uVar6;
          puVar10[1] = *(undefined1 *)(param_3 + 5 + uVar3 * 2);
          uVar3 = (ulonglong)(lVar11 << ((ulonglong)uVar6 & 0x3f)) >> 0x35;
          uVar6 = *(byte *)(param_3 + 4 + uVar3 * 2) + uVar6;
          puVar10[2] = *(undefined1 *)(param_3 + 5 + uVar3 * 2);
          uVar3 = (ulonglong)(lVar11 << ((ulonglong)uVar6 & 0x3f)) >> 0x35;
          uVar6 = *(byte *)(param_3 + 4 + uVar3 * 2) + uVar6;
          uVar8 = (ulonglong)uVar6;
          puVar10[3] = *(undefined1 *)(param_3 + 5 + uVar3 * 2);
          puVar10 = puVar10 + 4;
          if (0x40 < uVar6) goto LAB_00f07269;
        } while( true );
      }
      if (plVar12 < local_80[0] + 1) {
        if (plVar12 != local_80[0]) {
          uVar5 = uVar8 >> 3 & 0x1fffffff;
          uVar3 = (ulonglong)(uint)((int)plVar12 - (int)local_80[0]);
          if (local_80[0] <= (longlong *)((longlong)plVar12 - uVar5)) {
            uVar3 = uVar5;
          }
          uVar7 = (uint)uVar8 + (int)uVar3 * -8;
          goto LAB_00f07266;
        }
      }
      else {
        uVar3 = uVar8 >> 3;
        uVar7 = (uint)uVar8 & 7;
LAB_00f07266:
        uVar8 = (ulonglong)uVar7;
        lVar11 = *(longlong *)((longlong)plVar12 - uVar3);
      }
LAB_00f07269:
      if (puVar10 < unaff_RDI) {
        lVar9 = 0;
        do {
          uVar3 = (ulonglong)(lVar11 << (uVar8 & 0x3f)) >> 0x35;
          bVar1 = *(byte *)(param_3 + 4 + uVar3 * 2);
          puVar10[lVar9] = *(undefined1 *)(param_3 + 5 + uVar3 * 2);
          lVar9 = lVar9 + 1;
          uVar8 = (ulonglong)((uint)bVar1 + (int)uVar8);
        } while ((longlong)unaff_RDI - (longlong)puVar10 != lVar9);
      }
      puVar10 = (undefined1 *)(lVar4 + alStack_d8[lVar2]);
      alStack_d8[lVar2] = (longlong)puVar10;
      if (puVar10 != unaff_RDI) {
        return -0x14;
      }
      lVar2 = lVar2 + 1;
      if (lVar2 == 4) {
        return unaff_RSI;
      }
    }
    lVar2 = -0x14;
  }
  return lVar2;
}


