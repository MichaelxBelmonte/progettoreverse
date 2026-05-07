// Function: FUN_01791360
// Address: 01791360
// Size: 817 bytes
// Class: Unknown


void FUN_01791360(void)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  iVar4 = *(int *)(puVar2 + 3);
  FUN_00c8e340();
  lVar8 = puVar2[2];
  *(undefined4 *)(lVar8 + iVar4) = 0;
  uVar5 = (uint)*(undefined8 *)(*unaff_RSI + 0x18);
  iVar4 = 0;
  if ((~uVar5 & 0xff000) == 0) {
    uVar6 = (ulonglong)~uVar5;
    if ((~uVar5 & 0xf00) == 0) {
      iVar4 = 0;
      if ((~uVar5 & 0xf00000) == 0) goto LAB_017914d0;
      iVar4 = *(int *)(puVar2 + 3);
      iVar9 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar9 = iVar4;
      }
      if (3 < iVar4) {
        uVar6 = 0;
        do {
          if (*(int *)(lVar8 + uVar6 * 4) == 5) {
            iVar4 = 4;
            goto LAB_017914d0;
          }
          uVar6 = uVar6 + 1;
        } while (iVar9 >> 2 != (int)uVar6);
      }
      uVar10 = 5;
      FUN_00c8e340(uVar6,1);
    }
    else {
      iVar4 = *(int *)(puVar2 + 3);
      iVar9 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar9 = iVar4;
      }
      if (3 < iVar4) {
        uVar6 = 0;
        do {
          if (*(int *)(lVar8 + uVar6 * 4) == 2) {
            iVar4 = 4;
            goto LAB_017914d0;
          }
          uVar6 = uVar6 + 1;
        } while (iVar9 >> 2 != (int)uVar6);
      }
      uVar10 = 2;
      FUN_00c8e340(uVar6,1);
    }
    lVar8 = puVar2[2];
    *(undefined4 *)(lVar8 + iVar4) = uVar10;
    iVar4 = 4;
  }
LAB_017914d0:
  do {
    iVar9 = iVar4 + 4;
    iVar3 = iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) - (iVar9 >> 0x1f)) * -0xc;
    iVar3 = (iVar3 >> 0x1f & 0xcU) + iVar3;
    uVar6 = (ulonglong)(uint)(iVar3 * 4);
    if ((~(uint)(*(ulonglong *)(*unaff_RSI + 0x18) >> ((byte)(iVar3 * 4) & 0x3f)) & 0xf) == 0) {
      iVar9 = iVar4 + 3;
      iVar4 = iVar9 + (((uint)(iVar9 / 6 + (iVar9 >> 0x1f)) >> 1) - (iVar9 >> 0x1f)) * -0xc;
      iVar4 = (iVar4 >> 0x1f & 0xcU) + iVar4;
      uVar6 = (ulonglong)(uint)(iVar4 * 4);
      if ((~(uint)(*(ulonglong *)(*unaff_RSI + 0x18) >> ((byte)(iVar4 * 4) & 0x3f)) & 0xf) != 0) {
        iVar3 = *(int *)(puVar2 + 3);
        lVar11 = (longlong)iVar3;
        iVar1 = iVar3 + 3;
        if (-1 < lVar11) {
          iVar1 = iVar3;
        }
        if (3 < lVar11) {
          uVar6 = 0;
          do {
            if (*(int *)(lVar8 + uVar6 * 4) == iVar4) goto LAB_017914c3;
            uVar6 = uVar6 + 1;
          } while (iVar1 >> 2 != (int)uVar6);
        }
        FUN_00c8e340(uVar6,1);
        lVar8 = puVar2[2];
        *(int *)(lVar8 + lVar11) = iVar4;
      }
    }
    else {
      iVar4 = *(int *)(puVar2 + 3);
      lVar11 = (longlong)iVar4;
      iVar1 = iVar4 + 3;
      if (-1 < lVar11) {
        iVar1 = iVar4;
      }
      if (3 < lVar11) {
        uVar6 = 0;
        do {
          if (*(int *)(lVar8 + uVar6 * 4) == iVar3) goto LAB_017914c3;
          uVar6 = uVar6 + 1;
        } while (iVar1 >> 2 != (int)uVar6);
      }
      FUN_00c8e340(uVar6,1);
      lVar8 = puVar2[2];
      *(int *)(lVar8 + lVar11) = iVar3;
    }
LAB_017914c3:
    iVar4 = iVar9;
  } while (iVar9 < 0x18);
  uVar6 = 1;
  do {
    uVar5 = (int)uVar6 * 4;
    uVar7 = (ulonglong)uVar5;
    if ((~(uint)(*(ulonglong *)(*unaff_RSI + 0x18) >> ((byte)uVar5 & 0x3f)) & 0xf) != 0) {
      iVar4 = *(int *)(puVar2 + 3);
      lVar11 = (longlong)iVar4;
      iVar9 = iVar4 + 3;
      if (-1 < lVar11) {
        iVar9 = iVar4;
      }
      if (3 < lVar11) {
        uVar7 = 0;
        do {
          if (uVar6 == *(uint *)(lVar8 + uVar7 * 4)) goto LAB_01791610;
          uVar7 = uVar7 + 1;
        } while (iVar9 >> 2 != (int)uVar7);
      }
      FUN_00c8e340(uVar7,1);
      lVar8 = puVar2[2];
      *(int *)(lVar8 + lVar11) = (int)uVar6;
    }
LAB_01791610:
    uVar6 = uVar6 + 1;
    if (uVar6 == 0xc) {
      *unaff_RDI = puVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
  } while( true );
}


