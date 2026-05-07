// Function: FUN_015fe030
// Address: 015fe030
// Size: 798 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x015fe2a4) */
/* WARNING: Removing unreachable block (ram,0x015fe2b1) */

undefined8 * FUN_015fe030(float param_1,int param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar11;
  
  if ((param_2 < 0) || (*(int *)(unaff_RSI + 0x28) <= param_2)) {
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_02572358;
    (*DAT_02572370)();
    *unaff_RDI = puVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_02572358;
    (*DAT_02572370)();
    uVar8 = (ulonglong)*(uint *)(unaff_RSI + 0x30);
    if ((int)*(uint *)(unaff_RSI + 0x30) < 1) {
      bVar4 = false;
      lVar10 = 0;
    }
    else {
      lVar11 = 0;
      lVar10 = 0;
      bVar4 = false;
      do {
        bVar5 = true;
        if ((param_2 < *(int *)(unaff_RSI + 0x28)) && (lVar11 < (int)uVar8)) {
          if (*(int *)(unaff_RSI + 0x34) == param_2) {
            iVar2 = *(int *)(*(longlong *)(unaff_RSI + 0x38) + lVar11 * 4);
          }
          else {
            lVar9 = (longlong)((int)uVar8 * param_2) * 4 +
                    *(longlong *)(*(longlong *)(unaff_RSI + 0x18) + 0x10);
            *(longlong *)(unaff_RSI + 0x38) = lVar9;
            *(int *)(unaff_RSI + 0x34) = param_2;
            iVar2 = *(int *)(lVar9 + lVar11 * 4);
          }
          if ((longlong)iVar2 == -1) goto LAB_015fe1e0;
          lVar9 = *(longlong *)
                   (*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + 0x10) + (longlong)iVar2 * 8);
          bVar3 = true;
          if (lVar9 == 0) {
            bVar5 = false;
            goto joined_r0x015fe1e7;
          }
          FUN_00d50b00();
          bVar5 = false;
          if (lVar10 == lVar9) goto LAB_015fe146;
LAB_015fe1ed:
          if (bVar5) {
            if (lVar9 != 0) {
              FUN_00d50b00();
            }
            if ((bVar4) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar4) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          bVar4 = true;
          bVar3 = false;
          lVar10 = lVar9;
          lVar6 = 0;
joined_r0x015fe2dc:
          if (lVar10 != 0) {
            fVar1 = *(float *)(lVar10 + 0x1c);
            if ((bVar3) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x015fe19d;
          }
          if ((bVar3) && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          lVar10 = 0;
        }
        else {
LAB_015fe1e0:
          bVar3 = false;
joined_r0x015fe1e7:
          lVar9 = 0;
          if (lVar10 != 0) goto LAB_015fe1ed;
LAB_015fe146:
          lVar6 = lVar9;
          if (lVar10 == 0 || bVar4) goto joined_r0x015fe2dc;
          bVar4 = true;
          bVar3 = false;
          if (!bVar5) goto joined_r0x015fe2dc;
          FUN_00d50b00();
          fVar1 = *(float *)(lVar10 + 0x1c);
          bVar4 = true;
joined_r0x015fe19d:
          if (param_1 < fVar1) {
            FUN_00d21140();
          }
        }
        lVar11 = lVar11 + 1;
        uVar8 = (ulonglong)*(int *)(unaff_RSI + 0x30);
      } while (lVar11 < (longlong)uVar8);
    }
    *unaff_RDI = puVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar4) && (lVar10 != 0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


