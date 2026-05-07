// Function: FUN_015fdc20
// Address: 015fdc20
// Size: 791 bytes
// Class: MUTempoAnalyzerEvent


longlong * FUN_015fdc20(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar11;
  float local_4c;
  float local_48;
  longlong local_40;
  longlong local_38;
  
  uVar7 = (ulonglong)*(uint *)(unaff_RSI + 0x28);
  if ((int)*(uint *)(unaff_RSI + 0x28) < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_40 = 0;
    lVar10 = 0;
    bVar3 = false;
  }
  else {
    local_48 = 0.0;
    uVar11 = 0;
    lVar10 = 0;
    bVar3 = false;
    bVar4 = false;
    local_40 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x20) + 0x10) + uVar11 * 4);
      lVar9 = (longlong)iVar1;
      if (lVar9 != -1) {
        bVar2 = true;
        if (((longlong)uVar11 < (longlong)(int)uVar7) && (iVar1 < *(int *)(unaff_RSI + 0x30))) {
          if (uVar11 == *(uint *)(unaff_RSI + 0x34)) {
            iVar1 = *(int *)(*(longlong *)(unaff_RSI + 0x38) + lVar9 * 4);
          }
          else {
            lVar8 = (longlong)(*(int *)(unaff_RSI + 0x30) * (int)uVar11) * 4 +
                    *(longlong *)(*(longlong *)(unaff_RSI + 0x18) + 0x10);
            *(longlong *)(unaff_RSI + 0x38) = lVar8;
            *(int *)(unaff_RSI + 0x34) = (int)uVar11;
            iVar1 = *(int *)(lVar8 + lVar9 * 4);
          }
          if ((longlong)iVar1 == -1) goto LAB_015fdd90;
          local_38 = *(longlong *)
                      (*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + 0x10) + (longlong)iVar1 * 8);
          bVar5 = true;
          if (local_38 == 0) {
            bVar2 = false;
            goto joined_r0x015fdd9d;
          }
          FUN_00d50b00();
          bVar2 = false;
          if (lVar10 != local_38) goto LAB_015fdda3;
LAB_015fdd10:
          if (lVar10 == 0 || bVar3) goto LAB_015fddf2;
          bVar3 = true;
          bVar5 = false;
          if (!bVar2) goto LAB_015fddf2;
          bVar3 = true;
          FUN_00d50b00();
          bVar5 = false;
LAB_015fddf7:
          local_4c = *(float *)(lVar10 + 0x1c);
          bVar2 = local_48 < local_4c;
          bVar6 = bVar2;
          if (bVar5) {
LAB_015fde2a:
            bVar2 = bVar6;
            if (local_38 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
LAB_015fdd90:
          bVar5 = false;
joined_r0x015fdd9d:
          local_38 = 0;
          if (lVar10 == 0) goto LAB_015fdd10;
LAB_015fdda3:
          if (bVar2) {
            if (local_38 != 0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar3) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
          bVar5 = false;
          bVar3 = true;
          lVar10 = local_38;
LAB_015fddf2:
          if (lVar10 != 0) goto LAB_015fddf7;
          lVar10 = 0;
          bVar2 = false;
          bVar6 = false;
          if (bVar5) goto LAB_015fde2a;
        }
        if (bVar2) {
          if (local_40 == lVar10) {
            lVar9 = local_40;
            bVar2 = bVar4;
            if (bVar3) {
              if ((!bVar4) && (lVar10 != 0)) {
                FUN_00d50b00();
                bVar2 = true;
              }
            }
            else {
              bVar3 = false;
            }
          }
          else {
            if ((bVar3) && (lVar10 != 0)) {
              FUN_00d50b00();
            }
            lVar9 = lVar10;
            bVar2 = bVar3;
            if ((bVar4) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          local_40 = lVar9;
          local_48 = local_4c;
          bVar4 = bVar2;
        }
      }
      uVar11 = uVar11 + 1;
      uVar7 = (ulonglong)*(int *)(unaff_RSI + 0x28);
    } while ((longlong)uVar11 < (longlong)uVar7);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar4) {
      if (local_40 == 0) {
        local_40 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar3) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


