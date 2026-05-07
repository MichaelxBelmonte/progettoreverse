// Function: FUN_015fd450
// Address: 015fd450
// Size: 814 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x015fd5af) */
/* WARNING: Removing unreachable block (ram,0x015fd5bc) */
/* WARNING: Removing unreachable block (ram,0x015fd72e) */
/* WARNING: Removing unreachable block (ram,0x015fd73b) */

void FUN_015fd450(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar6;
  undefined4 uVar7;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  if ((*unaff_RSI == 0) || (*param_2 == 0)) {
    if (0 < *(int *)(unaff_RDI + 0x28)) {
      iVar6 = 0;
      do {
        uVar7 = FUN_00d216c0();
        uVar3 = (ulonglong)*(uint *)(unaff_RDI + 0x30);
        if (0 < (int)*(uint *)(unaff_RDI + 0x30)) {
          lVar5 = 0;
          do {
            if ((iVar6 < *(int *)(unaff_RDI + 0x28)) && (lVar5 < (int)uVar3)) {
              if (*(int *)(unaff_RDI + 0x34) == iVar6) {
                iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + lVar5 * 4);
              }
              else {
                lVar4 = (longlong)((int)uVar3 * iVar6) * 4 +
                        *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
                *(longlong *)(unaff_RDI + 0x38) = lVar4;
                *(int *)(unaff_RDI + 0x34) = iVar6;
                iVar1 = *(int *)(lVar4 + lVar5 * 4);
              }
              if (((longlong)iVar1 != -1) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10) + (longlong)iVar1 * 8) !=
                  0)) {
                FUN_00d50b00();
                FUN_00d21140();
                uVar7 = FUN_00d50b20();
              }
            }
            lVar5 = lVar5 + 1;
            uVar3 = (ulonglong)*(int *)(unaff_RDI + 0x30);
          } while (lVar5 < (longlong)uVar3);
        }
        FUN_00d242c0(uVar7,0);
        if (0 < *(int *)((longlong)puVar2 + 0xc)) {
          lVar5 = puVar2[2];
          lVar4 = 0;
          do {
            *(int *)(*(longlong *)(lVar5 + lVar4 * 8) + 0x18) = (int)lVar4;
            lVar4 = lVar4 + 1;
          } while (lVar4 < *(int *)((longlong)puVar2 + 0xc));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(unaff_RDI + 0x28));
    }
  }
  else if (0 < *(int *)(unaff_RDI + 0x28)) {
    iVar6 = 0;
    do {
      uVar7 = FUN_00d216c0();
      uVar3 = (ulonglong)*(uint *)(unaff_RDI + 0x30);
      if (0 < (int)*(uint *)(unaff_RDI + 0x30)) {
        lVar5 = 0;
        do {
          if ((iVar6 < *(int *)(unaff_RDI + 0x28)) && (lVar5 < (int)uVar3)) {
            if (*(int *)(unaff_RDI + 0x34) == iVar6) {
              iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + lVar5 * 4);
            }
            else {
              lVar4 = (longlong)((int)uVar3 * iVar6) * 4 +
                      *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
              *(longlong *)(unaff_RDI + 0x38) = lVar4;
              *(int *)(unaff_RDI + 0x34) = iVar6;
              iVar1 = *(int *)(lVar4 + lVar5 * 4);
            }
            if (((longlong)iVar1 != -1) &&
               (lVar4 = *(longlong *)
                         (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10) +
                         (longlong)iVar1 * 8), lVar4 != 0)) {
              FUN_00d50b00();
              *(float *)(lVar4 + 0x1c) =
                   *(float *)(*(longlong *)(*unaff_RSI + 0x10) +
                             (longlong)*(int *)(lVar4 + 0x10) * 4) * *(float *)(lVar4 + 0x1c);
              FUN_00d21140();
              uVar7 = FUN_00d50b20();
            }
          }
          lVar5 = lVar5 + 1;
          uVar3 = (ulonglong)*(int *)(unaff_RDI + 0x30);
        } while (lVar5 < (longlong)uVar3);
      }
      FUN_00d242c0(uVar7,0);
      if (0 < *(int *)((longlong)puVar2 + 0xc)) {
        lVar5 = 0;
        do {
          lVar4 = *(longlong *)(puVar2[2] + lVar5 * 8);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          *(int *)(lVar4 + 0x18) = (int)lVar5;
          *(float *)(lVar4 + 0x1c) =
               *(float *)(*(longlong *)(*param_2 + 0x10) + (longlong)*(int *)(lVar4 + 0x10) * 4) *
               *(float *)(lVar4 + 0x1c);
          FUN_00d50b20();
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)((longlong)puVar2 + 0xc));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(unaff_RDI + 0x28));
  }
  FUN_00d50b20();
  return;
}


