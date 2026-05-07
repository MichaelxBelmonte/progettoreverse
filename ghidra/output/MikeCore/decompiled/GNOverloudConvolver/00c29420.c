// Function: FUN_00c29420
// Address: 00c29420
// Size: 704 bytes
// Class: GNOverloudConvolver


/* WARNING: Removing unreachable block (ram,0x00c296ce) */
/* WARNING: Removing unreachable block (ram,0x00c29476) */
/* WARNING: Removing unreachable block (ram,0x00c2947f) */

void FUN_00c29420(undefined8 param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x5d0))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  lVar2 = *unaff_RSI;
  if (lVar2 != 0) {
    lVar11 = 0;
    while( true ) {
      iVar10 = *(int *)(lVar2 + 0x18);
      iVar5 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      if (iVar5 >> 2 <= (int)lVar11) break;
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(local_40 + 200) + 0x10) +
               (longlong)*(int *)(*(longlong *)(lVar2 + 0x10) + lVar11 * 4) * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      if (*(int *)(lVar3 + 0x28) != param_2) {
        *(int *)(lVar3 + 0x28) = param_2;
        *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
      }
      lVar11 = lVar11 + 1;
      FUN_00d50b20();
    }
    lVar2 = *unaff_RSI;
    if (lVar2 != 0) {
      if (param_2 == 0) {
        iVar10 = -1;
        while( true ) {
          iVar10 = iVar10 + 1;
          iVar5 = *(int *)(lVar2 + 0x18);
          iVar7 = iVar5 + 3;
          if (-1 < iVar5) {
            iVar7 = iVar5;
          }
          if (iVar7 >> 2 <= iVar10) break;
          iVar5 = *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar10 * 4);
          lVar11 = *(longlong *)(local_40 + 0xd8);
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (0 < (int)uVar1) {
              lVar3 = *(longlong *)(lVar11 + 0x10);
              if (7 < uVar1) {
                uVar8 = (ulonglong)(uVar1 & 0xfffffff8);
                uVar9 = (uVar8 - 8 >> 3) + 1;
                if (uVar8 - 8 == 0) {
                  auVar12 = (undefined1  [16])0x0;
                  lVar6 = 0;
                  auVar13 = (undefined1  [16])0x0;
                  goto LAB_00c2963e;
                }
                lVar4 = -(uVar9 & 0xfffffffffffffffe);
                auVar12 = (undefined1  [16])0x0;
                lVar6 = 0;
                auVar13 = (undefined1  [16])0x0;
                do {
                  auVar15 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar3 + lVar6));
                  in_XMM2._0_4_ = auVar15._0_4_ + auVar12._0_4_;
                  in_XMM2._4_4_ = auVar15._4_4_ + auVar12._4_4_;
                  in_XMM2._8_4_ = auVar15._8_4_ + auVar12._8_4_;
                  in_XMM2._12_4_ = auVar15._12_4_ + auVar12._12_4_;
                  auVar15 = pmovzxbd(in_XMM3,*(undefined4 *)(lVar3 + 4 + lVar6));
                  in_XMM3._0_4_ = auVar15._0_4_ + auVar13._0_4_;
                  in_XMM3._4_4_ = auVar15._4_4_ + auVar13._4_4_;
                  in_XMM3._8_4_ = auVar15._8_4_ + auVar13._8_4_;
                  in_XMM3._12_4_ = auVar15._12_4_ + auVar13._12_4_;
                  auVar15 = pmovzxbd(auVar12,*(undefined4 *)(lVar3 + 8 + lVar6));
                  auVar14 = pmovzxbd(auVar13,*(undefined4 *)(lVar3 + 0xc + lVar6));
                  auVar12._0_4_ = auVar15._0_4_ + in_XMM2._0_4_;
                  auVar12._4_4_ = auVar15._4_4_ + in_XMM2._4_4_;
                  auVar12._8_4_ = auVar15._8_4_ + in_XMM2._8_4_;
                  auVar12._12_4_ = auVar15._12_4_ + in_XMM2._12_4_;
                  auVar13._0_4_ = auVar14._0_4_ + in_XMM3._0_4_;
                  auVar13._4_4_ = auVar14._4_4_ + in_XMM3._4_4_;
                  auVar13._8_4_ = auVar14._8_4_ + in_XMM3._8_4_;
                  auVar13._12_4_ = auVar14._12_4_ + in_XMM3._12_4_;
                  lVar6 = lVar6 + 0x10;
                  lVar4 = lVar4 + 2;
                } while (lVar4 != 0);
                auVar15 = auVar12;
                auVar14 = auVar13;
                if ((uVar9 & 1) != 0) {
LAB_00c2963e:
                  auVar15 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar3 + 4 + lVar6));
                  auVar14._0_4_ = auVar13._0_4_ + auVar15._0_4_;
                  auVar14._4_4_ = auVar13._4_4_ + auVar15._4_4_;
                  auVar14._8_4_ = auVar13._8_4_ + auVar15._8_4_;
                  auVar14._12_4_ = auVar13._12_4_ + auVar15._12_4_;
                  in_XMM2 = pmovzxbd(auVar15,*(undefined4 *)(lVar3 + lVar6));
                  auVar15._0_4_ = auVar12._0_4_ + in_XMM2._0_4_;
                  auVar15._4_4_ = auVar12._4_4_ + in_XMM2._4_4_;
                  auVar15._8_4_ = auVar12._8_4_ + in_XMM2._8_4_;
                  auVar15._12_4_ = auVar12._12_4_ + in_XMM2._12_4_;
                }
                iVar7 = auVar15._12_4_ + auVar14._12_4_ + auVar15._4_4_ + auVar14._4_4_ +
                        auVar15._8_4_ + auVar14._8_4_ + auVar15._0_4_ + auVar14._0_4_;
                goto joined_r0x00c29670;
              }
              uVar8 = 0;
              iVar7 = 0;
              do {
                iVar7 = iVar7 + (uint)*(byte *)(lVar3 + uVar8);
                uVar8 = uVar8 + 1;
joined_r0x00c29670:
              } while (uVar8 != uVar1);
              if (iVar7 != 0) {
                FUN_00d50b00();
                *(undefined1 *)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar5) = 1;
                FUN_00d50b20();
              }
            }
          }
          FUN_00c29780();
        }
      }
      else {
        lVar11 = 0;
        while( true ) {
          iVar10 = *(int *)(lVar2 + 0x18);
          iVar5 = iVar10 + 3;
          if (-1 < iVar10) {
            iVar5 = iVar10;
          }
          if (iVar5 >> 2 <= (int)lVar11) break;
          iVar10 = *(int *)(*(longlong *)(lVar2 + 0x10) + lVar11 * 4);
          lVar3 = *(longlong *)(local_40 + 0xd8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          *(undefined1 *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar10) = 0;
          FUN_00d50b20();
          lVar11 = lVar11 + 1;
          FUN_00c29780();
        }
      }
    }
  }
  FUN_00d50b20();
  return;
}


