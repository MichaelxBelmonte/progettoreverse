// Function: FUN_0102cbb0
// Address: 0102cbb0
// Size: 859 bytes
// Class: Unknown


undefined8 FUN_0102cbb0(ulonglong param_1,ulonglong param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar13;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar12;
  
  lVar5 = *(longlong *)(unaff_RDI + 0x78);
  uVar15 = *(uint *)(lVar5 + 0x70);
  uVar12 = (ulonglong)uVar15;
  if (uVar12 != 0) {
    if ((param_1 != 0) && (uVar15 < 0x40)) {
      lVar19 = 0;
      do {
        *(byte *)(unaff_RSI + lVar19) =
             *(byte *)(uVar12 + lVar5 + 0x30 + lVar19) ^ *(byte *)(param_2 + lVar19);
        lVar13 = lVar19 + 1;
        if (param_1 - 1 == lVar19) break;
        uVar14 = lVar19 + uVar12;
        lVar19 = lVar13;
      } while (uVar14 < 0x3f);
      uVar15 = uVar15 + (int)lVar13;
      unaff_RSI = unaff_RSI + lVar13;
      param_1 = param_1 - lVar13;
      param_2 = param_2 + lVar13;
    }
    *(uint *)(lVar5 + 0x70) = uVar15;
    if (param_1 == 0) {
      return 1;
    }
    if (uVar15 == 0x40) {
      *(undefined4 *)(lVar5 + 0x70) = 0;
      piVar1 = (int *)(lVar5 + 0x20);
      *piVar1 = *piVar1 + 1;
      if (*piVar1 == 0) {
        *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
      }
    }
  }
  uVar15 = (uint)param_1;
  uVar11 = uVar15 & 0x3f;
  uVar12 = (ulonglong)uVar11;
  uVar14 = param_1 - uVar12;
  puVar2 = (uint *)(lVar5 + 0x20);
  if (0x3f < uVar14) {
    uVar20 = *puVar2;
    do {
      uVar18 = uVar14 >> 6;
      if (0xfffffff < uVar18) {
        uVar18 = 0x10000000;
      }
      uVar20 = uVar20 + (int)uVar18;
      uVar17 = (ulonglong)uVar20;
      uVar16 = 0;
      if (uVar17 < uVar18) {
        uVar20 = 0;
        uVar16 = uVar17;
      }
      lVar19 = (uVar18 - uVar16) * 0x40;
      _ChaCha20_ctr32(lVar5,lVar19,puVar2);
      uVar14 = uVar14 + (uVar18 - uVar16) * -0x40;
      *(uint *)(lVar5 + 0x20) = uVar20;
      if (uVar20 == 0) {
        *(int *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + 1;
      }
      param_2 = param_2 + lVar19;
      unaff_RSI = unaff_RSI + lVar19;
    } while (0x3f < uVar14);
  }
  if ((param_1 & 0x3f) == 0) {
    return 1;
  }
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  _ChaCha20_ctr32(0,0x40,puVar2);
  if (uVar11 < 8) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    if ((param_2 + uVar12 <= unaff_RSI || unaff_RSI + uVar12 <= param_2) &&
       (lVar5 + uVar12 + 0x30 <= unaff_RSI || unaff_RSI + uVar12 <= lVar5 + 0x30U)) {
      if (uVar11 < 0x10) {
        uVar18 = 0;
      }
      else {
        uVar14 = (ulonglong)(uVar15 & 0x30);
        uVar18 = (uVar14 - 0x10 >> 4) + 1;
        uVar16 = (ulonglong)((uint)uVar18 & 3);
        if (uVar14 - 0x10 < 0x30) {
          lVar13 = 0;
        }
        else {
          lVar19 = -(uVar18 & 0xfffffffffffffffc);
          lVar13 = 0;
          do {
            puVar2 = (uint *)(param_2 + lVar13);
            uVar20 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar4 = (uint *)(lVar5 + 0x30 + lVar13);
            uVar8 = puVar4[1];
            uVar9 = puVar4[2];
            uVar10 = puVar4[3];
            puVar3 = (uint *)(unaff_RSI + lVar13);
            *puVar3 = *puVar4 ^ *puVar2;
            puVar3[1] = uVar8 ^ uVar20;
            puVar3[2] = uVar9 ^ uVar6;
            puVar3[3] = uVar10 ^ uVar7;
            puVar2 = (uint *)(param_2 + 0x10 + lVar13);
            uVar20 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar3 = (uint *)(lVar5 + 0x40 + lVar13);
            uVar8 = puVar3[1];
            uVar9 = puVar3[2];
            uVar10 = puVar3[3];
            puVar4 = (uint *)(unaff_RSI + 0x10 + lVar13);
            *puVar4 = *puVar3 ^ *puVar2;
            puVar4[1] = uVar8 ^ uVar20;
            puVar4[2] = uVar9 ^ uVar6;
            puVar4[3] = uVar10 ^ uVar7;
            puVar2 = (uint *)(param_2 + 0x20 + lVar13);
            uVar20 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar3 = (uint *)(lVar5 + 0x50 + lVar13);
            uVar8 = puVar3[1];
            uVar9 = puVar3[2];
            uVar10 = puVar3[3];
            puVar4 = (uint *)(unaff_RSI + 0x20 + lVar13);
            *puVar4 = *puVar3 ^ *puVar2;
            puVar4[1] = uVar8 ^ uVar20;
            puVar4[2] = uVar9 ^ uVar6;
            puVar4[3] = uVar10 ^ uVar7;
            puVar2 = (uint *)(param_2 + 0x30 + lVar13);
            uVar20 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar3 = (uint *)(lVar5 + 0x60 + lVar13);
            uVar8 = puVar3[1];
            uVar9 = puVar3[2];
            uVar10 = puVar3[3];
            puVar4 = (uint *)(unaff_RSI + 0x30 + lVar13);
            *puVar4 = *puVar3 ^ *puVar2;
            puVar4[1] = uVar8 ^ uVar20;
            puVar4[2] = uVar9 ^ uVar6;
            puVar4[3] = uVar10 ^ uVar7;
            lVar13 = lVar13 + 0x40;
            lVar19 = lVar19 + 4;
          } while (lVar19 != 0);
        }
        if (uVar16 != 0) {
          lVar19 = 0;
          do {
            puVar2 = (uint *)(lVar13 + param_2 + lVar19);
            uVar20 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar3 = (uint *)(lVar13 + lVar5 + 0x30 + lVar19);
            uVar8 = puVar3[1];
            uVar9 = puVar3[2];
            uVar10 = puVar3[3];
            puVar4 = (uint *)(unaff_RSI + lVar13 + lVar19);
            *puVar4 = *puVar3 ^ *puVar2;
            puVar4[1] = uVar8 ^ uVar20;
            puVar4[2] = uVar9 ^ uVar6;
            puVar4[3] = uVar10 ^ uVar7;
            lVar19 = lVar19 + 0x10;
          } while (uVar16 << 4 != lVar19);
        }
        if (uVar14 == uVar12) goto LAB_0102cefb;
        uVar18 = uVar14;
        if ((param_1 & 8) == 0) goto LAB_0102ce89;
      }
      uVar14 = (ulonglong)(uVar15 & 0x38);
      do {
        *(ulonglong *)(unaff_RSI + uVar18) =
             *(ulonglong *)(lVar5 + 0x30 + uVar18) ^ *(ulonglong *)(param_2 + uVar18);
        uVar18 = uVar18 + 8;
      } while (uVar14 != uVar18);
      if (uVar14 == uVar12) goto LAB_0102cefb;
    }
  }
LAB_0102ce89:
  uVar17 = ~uVar14;
  uVar18 = uVar12 & 3;
  uVar16 = param_1 & 3;
  while (uVar16 != 0) {
    *(byte *)(unaff_RSI + uVar14) = *(byte *)(lVar5 + 0x30 + uVar14) ^ *(byte *)(param_2 + uVar14);
    uVar14 = uVar14 + 1;
    uVar18 = uVar18 - 1;
    uVar16 = uVar18;
  }
  if (2 < uVar17 + uVar12) {
    do {
      *(byte *)(unaff_RSI + uVar14) = *(byte *)(lVar5 + 0x30 + uVar14) ^ *(byte *)(param_2 + uVar14)
      ;
      *(byte *)(unaff_RSI + 1 + uVar14) =
           *(byte *)(lVar5 + 0x31 + uVar14) ^ *(byte *)(param_2 + 1 + uVar14);
      *(byte *)(unaff_RSI + 2 + uVar14) =
           *(byte *)(lVar5 + 0x32 + uVar14) ^ *(byte *)(param_2 + 2 + uVar14);
      *(byte *)(unaff_RSI + 3 + uVar14) =
           *(byte *)(lVar5 + 0x33 + uVar14) ^ *(byte *)(param_2 + 3 + uVar14);
      uVar14 = uVar14 + 4;
    } while (uVar12 != uVar14);
  }
LAB_0102cefb:
  *(uint *)(lVar5 + 0x70) = uVar11;
  return 1;
}


