// Function: FUN_009d1318
// Address: 009d1318
// Size: 1182 bytes
// Class: Unknown


undefined8 FUN_009d1318(ulonglong *param_1,ulonglong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte *pbVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar18;
  bool bVar19;
  longlong local_120;
  longlong local_118;
  byte local_108;
  byte local_f0;
  byte local_d8 [24];
  byte local_c0 [24];
  ulonglong *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  byte local_68 [8];
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (param_1 != (ulonglong *)0x0) {
    *param_1 = 0;
  }
  uVar11 = CONCAT71((int7)((ulonglong)local_38 >> 8),1);
  if (*(longlong *)(unaff_RDI + 0x90) != *(longlong *)(unaff_RDI + 0x88)) {
    local_a8 = param_1;
    local_a0 = param_2;
    if (param_3 == 1) {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      lVar18 = *(longlong *)(unaff_RSI + 0x90);
      for (lVar15 = *(longlong *)(unaff_RSI + 0x88); lVar15 != lVar18; lVar15 = lVar15 + 0x28) {
        if (*(uint *)(lVar15 + 8) < 0xb) {
          FUN_009d1870();
        }
      }
      uVar2 = *(undefined4 *)(unaff_RSI + 8);
      FUN_009d1a1c();
      FUN_009d1a1c();
      FUN_009d1a1c();
      FUN_009d1a1c();
      FUN_009d1a1c();
      pbVar13 = local_68;
      FUN_009d0c1c(pbVar13,uVar2,local_d8,local_c0);
      if ((local_f0 & 1) != 0) {
        operator_delete(pbVar13);
      }
      if ((local_108 & 1) != 0) {
        operator_delete(pbVar13);
      }
      if ((local_c0[0] & 1) != 0) {
        operator_delete(pbVar13);
      }
      if ((local_d8[0] & 1) != 0) {
        operator_delete(pbVar13);
      }
      if ((local_68[0] & 1) != 0) {
        operator_delete(pbVar13);
      }
      lVar15 = *(longlong *)(unaff_RDI + 0x88);
      lVar12 = *(longlong *)(unaff_RDI + 0x90);
      if (lVar12 == lVar15) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        do {
          local_60 = &DAT_02523138;
          local_40 = *(undefined4 *)(lVar15 + 0x20);
          local_48 = *(undefined8 *)(lVar15 + 0x18);
          local_58 = *(undefined8 *)(lVar15 + 8);
          local_50 = *(undefined8 *)(lVar15 + 0x10);
          lVar17 = local_118;
          lVar16 = local_120;
          if (local_120 != local_118) {
            do {
              iVar10 = FUN_009d0902();
              lVar17 = lVar16;
              if (iVar10 == 0) break;
              lVar16 = lVar16 + 0x28;
              lVar17 = local_118;
            } while (local_118 != lVar16);
            lVar12 = *(longlong *)(unaff_RDI + 0x90);
          }
          lVar18 = lVar18 + (ulonglong)(lVar17 != local_118);
          lVar15 = lVar15 + 0x28;
        } while (lVar12 != lVar15);
      }
      FUN_009d0e2e();
      FUN_009ad640();
    }
    else {
      uVar3 = *(uint *)(unaff_RSI + 8);
      uVar4 = *(uint *)(unaff_RDI + 8);
      FUN_009d2b5e();
      lVar15 = *(longlong *)(unaff_RDI + 0x88);
      if (*(longlong *)(unaff_RDI + 0x90) == lVar15) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        local_80 = uVar3;
        local_7c = uVar4;
        do {
          uVar5 = *(uint *)(lVar15 + 8);
          lVar12 = FUN_009d122c();
          if (lVar12 == local_118) {
LAB_009d1673:
            if ((uVar4 < 2 || uVar3 < 2) || (4 < uVar5 - 5)) {
              if (local_80 != local_7c) goto LAB_009d16a2;
LAB_009d16c1:
              bVar19 = false;
            }
            else {
              bVar19 = (0x1bU >> (uVar5 - 5 & 0x1f) & 1) != 0;
              if ((!bVar19) && (local_80 != local_7c)) {
LAB_009d16a2:
                iVar10 = *(int *)(unaff_RDI + 8);
                if (iVar10 == 3) {
                  bVar19 = (uVar5 != 0x1f && 10 < uVar5) && 3 < uVar5 - 0x15;
                }
                else if (iVar10 == 2) {
                  bVar19 = 3 < uVar5 - 0x15 && 10 < uVar5;
                }
                else {
                  if (iVar10 != 1) goto LAB_009d16c1;
                  bVar19 = 10 < uVar5;
                }
              }
            }
          }
          else {
            uVar6 = *(uint *)(lVar15 + 8);
            uVar7 = *(uint *)(lVar12 + 8);
            if ((uVar6 != uVar7) &&
               ((((0x16 < uVar6 || ((0x600060U >> (uVar6 & 0x1f) & 1) == 0)) || (0x16 < uVar7)) ||
                ((0x600060U >> (uVar7 & 0x1f) & 1) == 0)))) goto LAB_009d1673;
            if (lVar12 + 0x28 == local_118) {
LAB_009d1656:
              do {
                puVar1 = (undefined8 *)(local_118 + -0x28);
                local_118 = local_118 + -0x28;
                (**(code **)*puVar1)();
              } while (lVar12 != local_118);
            }
            else {
              do {
                *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(lVar12 + 0x48);
                *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar12 + 0x40);
                *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar12 + 0x38);
                *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(lVar12 + 0x30);
                lVar12 = lVar12 + 0x28;
              } while (local_118 + -0x28 != lVar12);
              if (local_118 != lVar12) goto LAB_009d1656;
            }
            bVar19 = true;
            local_118 = lVar12;
          }
          lVar18 = lVar18 + (ulonglong)bVar19;
          lVar15 = lVar15 + 0x28;
        } while (*(longlong *)(unaff_RDI + 0x90) != lVar15);
      }
      FUN_009d0e2e();
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (*(longlong *)(unaff_RDI + 0x90) - *(longlong *)(unaff_RDI + 0x88) >> 3) *
                   -0x3333333333333333;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = lVar18 * 100;
    uVar14 = 100 - SUB168(auVar9 / auVar8,0);
    uVar11 = CONCAT71(SUB167(auVar9 / auVar8,1),uVar14 <= local_a0);
    if (local_a8 != (ulonglong *)0x0) {
      *local_a8 = uVar14;
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


