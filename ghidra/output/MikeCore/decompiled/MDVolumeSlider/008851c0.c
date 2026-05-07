// Function: FUN_008851c0
// Address: 008851c0
// Size: 707 bytes
// Class: MDVolumeSlider


/* WARNING: Removing unreachable block (ram,0x0088542f) */
/* WARNING: Removing unreachable block (ram,0x0088543c) */
/* WARNING: Removing unreachable block (ram,0x00885289) */
/* WARNING: Removing unreachable block (ram,0x00885292) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008851c0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong unaff_RDI;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar9;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  uint extraout_XMM0_Dd;
  undefined1 auVar8 [16];
  float fVar10;
  float fVar12;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  longlong local_78;
  char local_70;
  float local_38;
  float local_34;
  
  fVar12 = (float)((ulonglong)param_2 >> 0x20);
  fVar10 = (float)param_2;
  FUN_006c6060();
  fVar4 = (float)(**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0xa08))();
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x938))();
  fVar9 = (float)((ulonglong)uVar6 >> 0x20);
  fVar5 = (float)uVar6 + fVar10;
  *(float *)(unaff_RDI + 0x18) = fVar5;
  fVar16 = (fVar9 - fVar4) + fVar12;
  *(float *)(unaff_RDI + 0x1c) = fVar16;
  *(float *)(unaff_RDI + 0x20) = fVar5;
  *(float *)(unaff_RDI + 0x24) = fVar16;
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4a0))();
  if (local_70 == '\0') {
    if (local_78 == 0) goto LAB_00885468;
    FUN_00d50b00();
LAB_00885297:
    local_34 = 0.0;
    local_38 = 0.0;
    for (lVar3 = 0; (int)lVar3 < *(int *)(local_78 + 0xc); lVar3 = lVar3 + 1) {
      plVar1 = *(longlong **)(*(longlong *)(local_78 + 0x10) + lVar3 * 8);
      (**(code **)(*plVar1 + 0x4d8))();
      uVar7 = (**(code **)(*plVar1 + 0x528))();
      fVar16 = fVar5 + (float)uVar7;
      if (*(float *)(unaff_RDI + 0x18) <= fVar16 && fVar16 != *(float *)(unaff_RDI + 0x18)) {
        *(float *)(unaff_RDI + 0x18) = fVar16;
      }
      *(float *)(unaff_RDI + 0x1c) =
           (float)((ulonglong)uVar7 >> 0x20) + fVar4 + *(float *)(unaff_RDI + 0x1c);
      uVar7 = (**(code **)(*plVar1 + 0x530))();
      fVar16 = (float)uVar6 + (float)uVar7 + fVar10;
      auVar11._0_4_ = (uint)fVar16 & _DAT_023945e0;
      auVar11._4_4_ = (uint)fVar9 & _UNK_023945e4;
      auVar11._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
      auVar11._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
      auVar13._4_12_ = SUB1612(auVar11 | ZEXT416(DAT_02394dc8),4);
      auVar13._0_4_ = SUB164(auVar11 | ZEXT416(DAT_02394dc8),0) + fVar16;
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      auVar11 = roundss(auVar8,auVar13,0xb);
      fVar16 = (float)((ulonglong)uVar7 >> 0x20);
      auVar14._0_4_ = (uint)fVar16 & _DAT_023945e0;
      auVar14._4_4_ = (uint)fVar16 & _UNK_023945e4;
      auVar14._8_4_ = extraout_XMM0_Dd & _UNK_023945e8;
      auVar14._12_4_ = extraout_XMM0_Dd & _UNK_023945ec;
      auVar15._4_12_ = SUB1612(auVar14 | ZEXT416(DAT_02394dc8),4);
      auVar15._0_4_ = SUB164(auVar14 | ZEXT416(DAT_02394dc8),0) + fVar16;
      auVar8 = roundss(ZEXT816(0),auVar15,0xb);
      fVar16 = auVar11._0_4_;
      if (*(float *)(unaff_RDI + 0x20) <= fVar16 && fVar16 != *(float *)(unaff_RDI + 0x20)) {
        *(float *)(unaff_RDI + 0x20) = fVar16;
      }
      fVar16 = auVar8._0_4_;
      if (fVar12 <= fVar16) {
        if (fVar12 < fVar16) {
          local_34 = local_34 + (fVar16 - fVar12);
          fVar12 = 0.0;
        }
      }
      else {
        local_38 = local_38 + (fVar12 - fVar16);
      }
      *(float *)(unaff_RDI + 0x24) = fVar16 + fVar4 + *(float *)(unaff_RDI + 0x24);
      uVar2 = FUN_0065f4c0();
      *(uint *)(unaff_RDI + 0x30) = *(uint *)(unaff_RDI + 0x30) | uVar2;
      FUN_006c6060();
    }
    FUN_000a9680();
    FUN_00d50b20();
    fVar4 = local_38;
    if (local_34 < local_38) goto LAB_0088546e;
  }
  else {
    if (local_78 != 0) goto LAB_00885297;
LAB_00885468:
    fVar4 = 0.0;
  }
  local_34 = fVar4;
LAB_0088546e:
  *(float *)(unaff_RDI + 0x24) = local_34 + *(float *)(unaff_RDI + 0x24);
  FUN_006c6060();
  return;
}


