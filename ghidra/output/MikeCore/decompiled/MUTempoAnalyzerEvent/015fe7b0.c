// Function: FUN_015fe7b0
// Address: 015fe7b0
// Size: 729 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x015fea0e) */
/* WARNING: Removing unreachable block (ram,0x015fea1b) */

undefined8 * FUN_015fe7b0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  
  if ((param_2 < 0) || (*(int *)(unaff_RSI + 0x28) <= param_2)) {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02572358;
    (*DAT_02572370)();
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_02572358;
    (*DAT_02572370)();
    uVar6 = (ulonglong)*(uint *)(unaff_RSI + 0x30);
    if ((int)*(uint *)(unaff_RSI + 0x30) < 1) {
      bVar3 = false;
      lVar9 = 0;
    }
    else {
      lVar8 = 0;
      lVar9 = 0;
      bVar3 = false;
      do {
        bVar4 = true;
        if ((param_2 < *(int *)(unaff_RSI + 0x28)) && (lVar8 < (int)uVar6)) {
          if (*(int *)(unaff_RSI + 0x34) == param_2) {
            iVar1 = *(int *)(*(longlong *)(unaff_RSI + 0x38) + lVar8 * 4);
          }
          else {
            lVar7 = (longlong)((int)uVar6 * param_2) * 4 +
                    *(longlong *)(*(longlong *)(unaff_RSI + 0x18) + 0x10);
            *(longlong *)(unaff_RSI + 0x38) = lVar7;
            *(int *)(unaff_RSI + 0x34) = param_2;
            iVar1 = *(int *)(lVar7 + lVar8 * 4);
          }
          if ((longlong)iVar1 == -1) goto LAB_015fe8e0;
          lVar7 = *(longlong *)
                   (*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + 0x10) + (longlong)iVar1 * 8);
          bVar2 = true;
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            FUN_00d50b00();
          }
          bVar4 = false;
          if (lVar9 == lVar7) goto LAB_015fe99c;
LAB_015fe8e9:
          if (bVar4) {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar3) && (lVar9 != 0)) {
            FUN_00d50b20();
          }
          bVar3 = true;
          bVar2 = false;
          lVar9 = lVar7;
LAB_015fe942:
          if (lVar9 != 0) {
            iVar1 = *(int *)(lVar9 + 0x18);
            if ((bVar2) && (lVar7 != 0)) {
              FUN_00d50b20();
            }
            goto joined_r0x015fe9e9;
          }
          if ((bVar2) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
          lVar9 = 0;
        }
        else {
LAB_015fe8e0:
          lVar7 = 0;
          bVar2 = false;
          if (lVar9 != 0) goto LAB_015fe8e9;
LAB_015fe99c:
          if (lVar9 == 0 || bVar3) goto LAB_015fe942;
          bVar3 = true;
          bVar2 = false;
          if (!bVar4) goto LAB_015fe942;
          FUN_00d50b00();
          bVar3 = true;
          iVar1 = *(int *)(lVar9 + 0x18);
joined_r0x015fe9e9:
          if (iVar1 <= param_1) {
            FUN_00d21140();
          }
        }
        lVar8 = lVar8 + 1;
        uVar6 = (ulonglong)*(int *)(unaff_RSI + 0x30);
      } while (lVar8 < (longlong)uVar6);
    }
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar3) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


