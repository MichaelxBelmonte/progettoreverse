// Function: FUN_0096c720
// Address: 0096c720
// Size: 600 bytes
// Class: Unknown


void FUN_0096c720(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *unaff_RDI;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint local_34;
  
  if (unaff_RDI[0x5a] != 0) {
    return;
  }
  puVar4 = *(uint **)(unaff_RDI + 0x36);
  puVar5 = *(uint **)(unaff_RDI + 0x2e);
  uVar2 = unaff_RDI[0x2d];
  FUN_00969bc3();
  if (unaff_RDI[0x32] == 0) {
    FUN_00968a1c(puVar5,puVar5);
    goto LAB_0096c95e;
  }
  uVar3 = *puVar5;
  uVar17 = (ulonglong)uVar3;
  uVar14 = *unaff_RDI;
  if (uVar14 == 0) {
    if ((int)uVar3 < 1) goto LAB_0096c906;
    lVar9 = *(longlong *)(puVar4 + 2);
    puVar6 = *(uint **)(puVar5 + 2);
    uVar18 = 0;
    uVar16 = 0;
    lVar12 = lVar9;
    do {
      local_34 = *(int *)(lVar9 + uVar18 * 4) * uVar2;
      uVar8 = (ulonglong)*(uint *)(lVar9 + uVar18 * 4) + (ulonglong)*puVar6 * (ulonglong)local_34;
      *(int *)(lVar9 + uVar18 * 4) = (int)uVar8;
      uVar8 = uVar8 >> 0x20;
      if (uVar3 != 1) {
        uVar13 = 1;
        do {
          uVar8 = (ulonglong)*(uint *)(lVar12 + uVar13 * 4) +
                  (ulonglong)puVar6[uVar13] * (ulonglong)local_34 + uVar8;
          *(int *)(lVar12 + uVar13 * 4) = (int)uVar8;
          uVar8 = uVar8 >> 0x20;
          uVar13 = uVar13 + 1;
        } while (uVar17 != uVar13);
      }
      lVar10 = (longlong)(int)((int)uVar18 + uVar3);
      puVar1 = (uint *)(lVar9 + lVar10 * 4);
      uVar14 = *puVar1;
      uVar15 = uVar16 + *puVar1;
      *(uint *)(lVar9 + lVar10 * 4) = uVar15 + (uint)uVar8;
      uVar16 = (uint)(CARRY4(uVar15,(uint)uVar8) || CARRY4(uVar16,uVar14));
      uVar18 = uVar18 + 1;
      lVar12 = lVar12 + 4;
    } while (uVar18 != uVar17);
  }
  else if ((int)uVar3 < 1) {
LAB_0096c906:
    uVar16 = 0;
  }
  else {
    uVar18 = 0;
    uVar16 = 0;
    while( true ) {
      FUN_0096930d(uVar14,0,&local_34);
      lVar12 = *(longlong *)(puVar5 + 2);
      lVar10 = *(longlong *)(puVar4 + 2);
      lVar9 = lVar10 + uVar18 * 4;
      uVar13 = 0;
      uVar8 = 0;
      do {
        uVar11 = (ulonglong)*(uint *)(lVar9 + uVar13 * 4) +
                 (uVar8 & 0xffffffff) +
                 (ulonglong)*(uint *)(lVar12 + uVar13 * 4) * (ulonglong)local_34;
        uVar2 = *unaff_RDI;
        if (uVar2 == unaff_RDI[3]) {
          uVar8 = uVar11 >> ((byte)unaff_RDI[2] & 0x3f);
        }
        else {
          uVar8 = uVar11 / uVar2;
        }
        *(uint *)(lVar9 + uVar13 * 4) = (int)uVar11 - uVar2 * (int)uVar8;
        uVar13 = uVar13 + 1;
      } while (uVar17 != uVar13);
      lVar9 = (longlong)(int)((int)uVar18 + uVar3);
      uVar14 = uVar16 + (int)uVar8 + *(int *)(lVar10 + lVar9 * 4);
      *(uint *)(lVar10 + lVar9 * 4) = uVar14;
      uVar2 = *unaff_RDI;
      if (uVar2 <= uVar14) {
        *(uint *)(lVar10 + lVar9 * 4) = uVar14 - *unaff_RDI;
      }
      uVar16 = (uint)(uVar2 <= uVar14);
      uVar18 = uVar18 + 1;
      if (uVar18 == uVar17) break;
      uVar14 = *unaff_RDI;
    }
  }
  *(uint *)(*(longlong *)(puVar4 + 2) + (longlong)(int)uVar3 * 8) = uVar16;
  *puVar4 = uVar3 * 2 | 1;
  FUN_00969c8b(puVar4,-uVar3);
  FUN_0096959f();
  iVar7 = FUN_00969df5();
  if (-1 < iVar7) {
    FUN_00967d35(puVar4,puVar5);
  }
LAB_0096c95e:
  FUN_00969bc3();
  return;
}


