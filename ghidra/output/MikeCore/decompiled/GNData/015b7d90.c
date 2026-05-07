// Function: FUN_015b7d90
// Address: 015b7d90
// Size: 511 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015b7f8d) */
/* WARNING: Removing unreachable block (ram,0x015b7dcf) */
/* WARNING: Removing unreachable block (ram,0x015b7dd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015b7d90(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  longlong local_30;
  char local_28;
  
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  auVar12 = _DAT_02416630;
  uVar1 = *(uint *)(unaff_RSI + 0x44);
  uVar10 = (ulonglong)uVar1;
  if ((int)uVar1 < 1) goto LAB_015b7f6f;
  uVar2 = *(ulonglong *)(*(longlong *)(unaff_RSI + 0x50) + 0x10);
  uVar3 = *(ulonglong *)(*(longlong *)(unaff_RSI + 0x58) + 0x10);
  uVar4 = *(ulonglong *)(local_30 + 0x10);
  if (uVar1 < 4) {
    uVar9 = 0;
  }
  else {
    uVar6 = uVar4 + uVar10 * 4;
    uVar9 = 0;
    if ((uVar2 + uVar10 * 4 <= uVar4 || uVar6 <= uVar2) &&
       (uVar3 + uVar10 * 4 <= uVar4 || uVar6 <= uVar3)) {
      uVar9 = (ulonglong)(uVar1 & 0xfffffffc);
      uVar6 = (uVar9 - 4 >> 2) + 1;
      if (uVar9 - 4 == 0) {
        lVar8 = 0;
LAB_015b7f4d:
        auVar12 = divps(*(undefined1 (*) [16])(uVar2 + lVar8 * 4),
                        *(undefined1 (*) [16])(uVar3 + lVar8 * 4));
        auVar12 = maxps(_DAT_02416630,auVar12);
        *(undefined1 (*) [16])(uVar4 + lVar8 * 4) = auVar12;
      }
      else {
        lVar7 = -(uVar6 & 0xfffffffffffffffe);
        lVar8 = 0;
        do {
          auVar14 = divps(*(undefined1 (*) [16])(uVar2 + lVar8 * 4),
                          *(undefined1 (*) [16])(uVar3 + lVar8 * 4));
          auVar14 = maxps(auVar12,auVar14);
          *(undefined1 (*) [16])(uVar4 + lVar8 * 4) = auVar14;
          auVar14 = divps(*(undefined1 (*) [16])(uVar2 + 0x10 + lVar8 * 4),
                          *(undefined1 (*) [16])(uVar3 + 0x10 + lVar8 * 4));
          auVar14 = maxps(auVar12,auVar14);
          *(undefined1 (*) [16])(uVar4 + 0x10 + lVar8 * 4) = auVar14;
          lVar8 = lVar8 + 8;
          lVar7 = lVar7 + 2;
        } while (lVar7 != 0);
        if ((uVar6 & 1) != 0) goto LAB_015b7f4d;
      }
      if (uVar9 == uVar10) goto LAB_015b7f6f;
    }
  }
  uVar6 = ~uVar9;
  if ((uVar1 & 1) != 0) {
    fVar11 = *(float *)(uVar2 + uVar9 * 4) / *(float *)(uVar3 + uVar9 * 4);
    fVar5 = DAT_0240d16c;
    if (DAT_0240d16c <= fVar11) {
      fVar5 = fVar11;
    }
    *(float *)(uVar4 + uVar9 * 4) = fVar5;
    uVar9 = uVar9 | 1;
  }
  fVar5 = DAT_0240d16c;
  if (uVar6 + uVar10 != 0) {
    do {
      fVar13 = *(float *)(uVar2 + uVar9 * 4) / *(float *)(uVar3 + uVar9 * 4);
      fVar11 = fVar5;
      if (fVar5 <= fVar13) {
        fVar11 = fVar13;
      }
      *(float *)(uVar4 + uVar9 * 4) = fVar11;
      fVar13 = *(float *)(uVar2 + 4 + uVar9 * 4) / *(float *)(uVar3 + 4 + uVar9 * 4);
      fVar11 = fVar5;
      if (fVar5 <= fVar13) {
        fVar11 = fVar13;
      }
      *(float *)(uVar4 + 4 + uVar9 * 4) = fVar11;
      uVar9 = uVar9 + 2;
    } while (uVar10 != uVar9);
  }
LAB_015b7f6f:
  *unaff_RDI = local_30;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


