// Function: FUN_00315fc0
// Address: 00315fc0
// Size: 653 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00316064) */
/* WARNING: Removing unreachable block (ram,0x0031606d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00315fc0(void)

{
  longlong *plVar1;
  uint uVar2;
  longlong unaff_RDI;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar8;
  float extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  float fVar11;
  undefined1 in_XMM1 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_68;
  longlong local_58;
  char local_50;
  float local_30;
  float local_2c;
  float fVar9;
  
  FUN_006c6060();
  fVar4 = (float)(**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0xa08))();
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x938))();
  fVar5 = ((float)uVar6 - fVar4) + in_XMM1._0_4_;
  fVar9 = (float)((ulonglong)uVar6 >> 0x20);
  fVar11 = in_XMM1._4_4_;
  fVar8 = fVar9 + fVar11;
  fVar12 = in_XMM1._12_4_;
  *(float *)(unaff_RDI + 0x18) = fVar5;
  *(float *)(unaff_RDI + 0x1c) = fVar8;
  *(float *)(unaff_RDI + 0x20) = fVar5;
  *(float *)(unaff_RDI + 0x24) = fVar8;
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4a0))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_00316072;
    }
LAB_003161f8:
    local_30 = 0.0;
  }
  else {
    if (local_58 == 0) goto LAB_003161f8;
LAB_00316072:
    if (*(int *)(local_58 + 0xc) < 1) {
      local_2c = 0.0;
      local_30 = 0.0;
    }
    else {
      local_30 = 0.0;
      lVar3 = 0;
      local_2c = 0.0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_58 + 0x10) + lVar3 * 8);
        (**(code **)(*plVar1 + 0x4d8))();
        uVar6 = (**(code **)(*plVar1 + 0x528))();
        fVar5 = (float)((ulonglong)uVar6 >> 0x20) + fVar8;
        if (*(float *)(unaff_RDI + 0x1c) <= fVar5 && fVar5 != *(float *)(unaff_RDI + 0x1c)) {
          *(float *)(unaff_RDI + 0x1c) = fVar5;
        }
        *(float *)(unaff_RDI + 0x18) = (float)uVar6 + fVar4 + *(float *)(unaff_RDI + 0x18);
        uVar6 = (**(code **)(*plVar1 + 0x530))();
        fVar5 = (float)((ulonglong)uVar6 >> 0x20);
        fVar13 = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar7._0_4_ = (uint)(float)uVar6 & _DAT_023945e0;
        auVar7._4_4_ = (uint)fVar5 & _UNK_023945e4;
        auVar7._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
        auVar7._12_4_ = (uint)fVar13 & _UNK_023945ec;
        auVar14._4_12_ = SUB1612(auVar7 | ZEXT416(DAT_02394dc8),4);
        auVar14._0_4_ = SUB164(auVar7 | ZEXT416(DAT_02394dc8),0) + (float)uVar6;
        auVar7 = roundss(ZEXT816(0),auVar14,0xb);
        fVar5 = fVar9 + fVar5 + fVar11;
        fVar13 = extraout_XMM0_Dd + fVar13 + fVar12;
        auVar15._0_4_ = (uint)fVar5 & _DAT_023945e0;
        auVar15._4_4_ = (uint)fVar5 & _UNK_023945e4;
        auVar15._8_4_ = (uint)fVar13 & _UNK_023945e8;
        auVar15._12_4_ = (uint)fVar13 & _UNK_023945ec;
        auVar16._4_12_ = SUB1612(auVar15 | ZEXT416(DAT_02394dc8),4);
        auVar16._0_4_ = SUB164(auVar15 | ZEXT416(DAT_02394dc8),0) + fVar5;
        auVar10 = roundss(ZEXT816(0),auVar16,0xb);
        fVar5 = auVar10._0_4_;
        if (*(float *)(unaff_RDI + 0x24) <= fVar5 && fVar5 != *(float *)(unaff_RDI + 0x24)) {
          *(float *)(unaff_RDI + 0x24) = fVar5;
        }
        local_68 = in_XMM1._0_4_;
        fVar5 = auVar7._0_4_;
        if (local_68 <= fVar5) {
          if (local_68 < fVar5) {
            auVar10._0_4_ = fVar5 - local_68;
            auVar10._4_12_ = auVar7._4_12_;
            local_2c = local_2c + auVar10._0_4_;
          }
        }
        else {
          local_30 = local_30 + (local_68 - fVar5);
          auVar10 = ZEXT416((uint)local_30);
        }
        *(float *)(unaff_RDI + 0x20) = fVar5 + fVar4 + *(float *)(unaff_RDI + 0x20);
        FUN_006c6060();
        uVar2 = (**(code **)(*plVar1 + 0x560))();
        *(uint *)(unaff_RDI + 0x30) = *(uint *)(unaff_RDI + 0x30) | uVar2;
        lVar3 = lVar3 + 1;
        in_XMM1 = auVar10;
      } while ((int)lVar3 < *(int *)(local_58 + 0xc));
    }
    FUN_000a9680();
    FUN_00d50b20();
    if (local_2c < local_30) goto LAB_00316233;
  }
  local_2c = local_30;
LAB_00316233:
  *(float *)(unaff_RDI + 0x20) = local_2c + *(float *)(unaff_RDI + 0x20);
  FUN_006c6060();
  return;
}


