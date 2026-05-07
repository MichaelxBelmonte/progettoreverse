// Function: FUN_015fd9b0
// Address: 015fd9b0
// Size: 507 bytes
// Class: MUTempoAnalyzerEvent


undefined4 FUN_015fd9b0(void)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 local_4c;
  longlong local_48;
  
  if (*(int *)(unaff_RDI + 0x28) < 1) {
    local_4c = 0;
  }
  else {
    uVar7 = 0;
    local_4c = 0;
    local_48 = 0;
    bVar3 = false;
    do {
      *(undefined4 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x20) + 0x10) + uVar7 * 4) =
           0xffffffff;
      if (local_48 != 0) {
        if (bVar3) {
          FUN_00d50b20();
        }
        bVar3 = false;
      }
      uVar4 = (ulonglong)*(uint *)(unaff_RDI + 0x30);
      if ((int)*(uint *)(unaff_RDI + 0x30) < 1) {
        local_48 = 0;
      }
      else {
        lVar6 = 0;
        local_48 = 0;
        iVar8 = unaff_ESI + 1;
        do {
          if (((longlong)uVar7 < (longlong)*(int *)(unaff_RDI + 0x28)) && (lVar6 < (int)uVar4)) {
            if (uVar7 == *(uint *)(unaff_RDI + 0x34)) {
              iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + lVar6 * 4);
            }
            else {
              lVar5 = (longlong)((int)uVar4 * (int)uVar7) * 4 +
                      *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
              *(longlong *)(unaff_RDI + 0x38) = lVar5;
              *(int *)(unaff_RDI + 0x34) = (int)uVar7;
              iVar1 = *(int *)(lVar5 + lVar6 * 4);
            }
            if (((longlong)iVar1 != -1) &&
               (lVar5 = *(longlong *)
                         (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10) +
                         (longlong)iVar1 * 8), lVar5 != 0)) {
              FUN_00d50b00();
              if ((*(longlong *)(lVar5 + 0x80) == 0) &&
                 (iVar1 = *(int *)(lVar5 + 0x18), iVar1 < iVar8)) {
                iVar8 = iVar1;
                if (local_48 == lVar5) {
                  if (!bVar3) {
                    FUN_00d50b00();
                    lVar5 = local_48;
                    goto LAB_015fdb50;
                  }
                }
                else {
                  FUN_00d50b00();
                  if ((bVar3) && (local_48 != 0)) {
                    FUN_00d50b20();
                    bVar3 = true;
                    local_48 = lVar5;
                  }
                  else {
LAB_015fdb50:
                    local_48 = lVar5;
                    bVar3 = true;
                  }
                }
              }
              FUN_00d50b20();
            }
          }
          lVar6 = lVar6 + 1;
          uVar4 = (ulonglong)*(int *)(unaff_RDI + 0x30);
        } while (lVar6 < (longlong)uVar4);
        if (local_48 == 0) {
          local_48 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(local_48 + 0x10);
          *(undefined4 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x20) + 0x10) + uVar7 * 4) = uVar2
          ;
          local_4c = (undefined4)CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
        }
      }
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(unaff_RDI + 0x28));
    if ((bVar3) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return local_4c;
}


