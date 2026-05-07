// Function: FUN_017fe760
// Address: 017fe760
// Size: 1527 bytes
// Class: Unknown


void FUN_017fe760(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *unaff_RSI;
  ulonglong uVar11;
  longlong *unaff_RDI;
  int iVar12;
  longlong lVar13;
  undefined8 *local_a0;
  undefined1 local_98;
  longlong local_90;
  
  pcVar3 = DAT_025683d8;
  local_90 = 0;
  do {
    iVar8 = *(int *)(*unaff_RSI + 0x18);
    iVar10 = iVar8 + 3;
    if (-1 < iVar8) {
      iVar10 = iVar8;
    }
    iVar10 = iVar10 >> 2;
    if (iVar10 <= local_90) {
      return;
    }
    lVar1 = local_90 + 1;
    if (lVar1 < iVar10) {
      iVar10 = 0;
    }
    lVar13 = *(longlong *)(*unaff_RSI + 0x10);
    iVar8 = *(int *)(lVar13 + local_90 * 4);
    iVar10 = *(int *)(lVar13 + (longlong)((int)lVar1 - iVar10) * 4);
    uVar11 = (ulonglong)iVar10;
    iVar6 = *(int *)(*(longlong *)(*unaff_RDI + 0x10) + (longlong)iVar8 * 4) + iVar8;
    iVar12 = *(int *)(*(longlong *)(*unaff_RDI + 0x10) + uVar11 * 4) + iVar10;
    local_90 = lVar1;
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025683c0;
    (*pcVar3)();
    FUN_00c92170();
    FUN_00c92160();
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_025683c0;
    (*pcVar3)();
    FUN_00c92170();
    FUN_00c92160();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      if (iVar8 < iVar10) {
        if (3 < *(int *)(lVar1 + 0x18)) {
          if (iVar10 < iVar8) {
            lVar13 = 0;
            do {
              iVar2 = *(int *)(*(longlong *)(lVar1 + 0x10) + lVar13 * 4);
              if ((((iVar8 < iVar2) && (iVar2 < iVar10)) || (iVar2 < iVar10)) || (iVar8 < iVar2)) {
                iVar7 = *(int *)(puVar4 + 3);
                FUN_00c8e340(uVar11,1);
                *(int *)(puVar4[2] + (longlong)iVar7) = iVar2;
              }
              iVar2 = *(int *)(lVar1 + 0x18);
              iVar7 = iVar2 + 3;
              if (-1 < iVar2) {
                iVar7 = iVar2;
              }
              uVar11 = (ulonglong)(uint)(iVar7 >> 2);
              lVar13 = lVar13 + 1;
            } while ((int)lVar13 < iVar7 >> 2);
          }
          else {
            lVar13 = 0;
            do {
              iVar2 = *(int *)(*(longlong *)(lVar1 + 0x10) + lVar13 * 4);
              if ((iVar8 < iVar2) && (iVar2 < iVar10)) {
                iVar7 = *(int *)(puVar4 + 3);
                FUN_00c8e340(uVar11,1);
                *(int *)(puVar4[2] + (longlong)iVar7) = iVar2;
              }
              iVar2 = *(int *)(lVar1 + 0x18);
              iVar7 = iVar2 + 3;
              if (-1 < iVar2) {
                iVar7 = iVar2;
              }
              uVar11 = (ulonglong)(uint)(iVar7 >> 2);
              lVar13 = lVar13 + 1;
            } while ((int)lVar13 < iVar7 >> 2);
          }
        }
      }
      else if (3 < *(int *)(lVar1 + 0x18)) {
        if (iVar10 < iVar8) {
          lVar13 = 0;
          do {
            iVar2 = *(int *)(*(longlong *)(lVar1 + 0x10) + lVar13 * 4);
            if ((iVar2 < iVar10) || (iVar8 < iVar2)) {
              iVar7 = *(int *)(puVar4 + 3);
              FUN_00c8e340(uVar11,1);
              *(int *)(puVar4[2] + (longlong)iVar7) = iVar2;
            }
            iVar2 = *(int *)(lVar1 + 0x18);
            iVar7 = iVar2 + 3;
            if (-1 < iVar2) {
              iVar7 = iVar2;
            }
            uVar11 = (ulonglong)(uint)(iVar7 >> 2);
            lVar13 = lVar13 + 1;
          } while ((int)lVar13 < iVar7 >> 2);
        }
        else {
          iVar8 = *(int *)(lVar1 + 0x18);
          iVar10 = iVar8 + 3;
          if (-1 < iVar8) {
            iVar10 = iVar8;
          }
          iVar8 = 0;
          do {
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar10 >> 2);
        }
      }
    }
    if (*(int *)(puVar4 + 3) + 3U < 7) {
      if (puVar5 != (undefined8 *)0x0) goto LAB_017fe82b;
    }
    else {
      iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
      iVar6 = (iVar6 >> 0x1f & 0xcU) + iVar6;
      iVar10 = ((uint)(iVar12 / 6 + (iVar12 >> 0x1f)) >> 1) - (iVar12 >> 0x1f);
      iVar8 = iVar10 * 0xc;
      iVar12 = iVar12 + iVar10 * -0xc;
      iVar12 = (iVar12 >> 0x1f & 0xcU) + iVar12;
      lVar1 = *param_1;
      if (lVar1 != 0) {
        if (iVar6 < iVar12) {
          if (3 < *(int *)(lVar1 + 0x18)) {
            lVar13 = 0;
            if (iVar12 < iVar6) {
              do {
                iVar10 = *(int *)(*(longlong *)(lVar1 + 0x10) + lVar13 * 4);
                if (((iVar6 < iVar10) && (iVar10 < iVar12)) ||
                   ((iVar10 < iVar12 || (iVar6 < iVar10)))) {
                  iVar2 = *(int *)(puVar5 + 3);
                  FUN_00c8e340(iVar8,1);
                  *(int *)(puVar5[2] + (longlong)iVar2) = iVar10;
                }
                iVar10 = *(int *)(lVar1 + 0x18);
                iVar8 = iVar10 + 3;
                if (-1 < iVar10) {
                  iVar8 = iVar10;
                }
                iVar8 = iVar8 >> 2;
                lVar13 = lVar13 + 1;
              } while ((int)lVar13 < iVar8);
            }
            else {
              do {
                iVar10 = *(int *)(*(longlong *)(lVar1 + 0x10) + lVar13 * 4);
                if ((iVar6 < iVar10) && (iVar10 < iVar12)) {
                  iVar2 = *(int *)(puVar5 + 3);
                  FUN_00c8e340(iVar8,1);
                  *(int *)(puVar5[2] + (longlong)iVar2) = iVar10;
                }
                iVar10 = *(int *)(lVar1 + 0x18);
                iVar8 = iVar10 + 3;
                if (-1 < iVar10) {
                  iVar8 = iVar10;
                }
                iVar8 = iVar8 >> 2;
                lVar13 = lVar13 + 1;
              } while ((int)lVar13 < iVar8);
            }
          }
        }
        else if (3 < *(int *)(lVar1 + 0x18)) {
          if (iVar12 < iVar6) {
            lVar13 = 0;
            do {
              iVar10 = *(int *)(*(longlong *)(lVar1 + 0x10) + lVar13 * 4);
              if ((iVar10 < iVar12) || (iVar6 < iVar10)) {
                iVar2 = *(int *)(puVar5 + 3);
                FUN_00c8e340(iVar8,1);
                *(int *)(puVar5[2] + (longlong)iVar2) = iVar10;
              }
              iVar10 = *(int *)(lVar1 + 0x18);
              iVar8 = iVar10 + 3;
              if (-1 < iVar10) {
                iVar8 = iVar10;
              }
              iVar8 = iVar8 >> 2;
              lVar13 = lVar13 + 1;
            } while ((int)lVar13 < iVar8);
          }
          else {
            iVar8 = *(int *)(lVar1 + 0x18);
            iVar10 = iVar8 + 3;
            if (-1 < iVar8) {
              iVar10 = iVar8;
            }
            iVar8 = 0;
            do {
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar10 >> 2);
          }
        }
      }
      iVar10 = *(int *)(puVar5 + 3);
      if (iVar10 + 3U < 7) {
        FUN_00c8e340(iVar8,1);
        lVar1 = puVar5[2];
        *(int *)(lVar1 + iVar10) = iVar6;
        iVar10 = *(int *)(puVar5 + 3);
        lVar13 = (longlong)iVar10;
        iVar8 = iVar10 + 3;
        if (-1 < lVar13) {
          iVar8 = iVar10;
        }
        if (3 < lVar13) {
          iVar8 = iVar8 >> 2;
          lVar9 = 0;
          do {
            if (*(int *)(lVar1 + lVar9 * 4) == iVar12) goto LAB_017fe7b4;
            lVar9 = lVar9 + 1;
          } while (iVar8 != (int)lVar9);
        }
        FUN_00c8e340(iVar8,1);
        *(int *)(puVar5[2] + lVar13) = iVar12;
        iVar10 = *(int *)(puVar5 + 3);
      }
LAB_017fe7b4:
      local_98 = 0;
      iVar8 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar8 = iVar10;
      }
      iVar10 = *(int *)(puVar4 + 3);
      iVar6 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar6 = iVar10;
      }
      local_a0 = puVar5;
      FUN_017fe550(iVar6 >> 2 <= iVar8 >> 2,&local_a0,param_3,param_4,0);
LAB_017fe82b:
      FUN_00d50b20();
    }
    FUN_00d50b20();
  } while( true );
}


