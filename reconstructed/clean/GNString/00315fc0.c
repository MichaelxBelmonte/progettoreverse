// Function: FUN_00315fc0
// Address: 00315fc0
// Size: 653 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00315fc0(void)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t this_ptr;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  float fVar8;
  float extraout_XMM0_Dd;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  float fVar11;
  uint8_t in_XMM1 [16];
  float fVar12;
  float fVar13;
  uint8_t auVar10 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  float local_68;
  int64_t local_58;
  char local_50;
  float local_30;
  float local_2c;
  float fVar9;
  
  FUN_006c6060();
  fVar4 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x10) + 0xa08))();
  *(void*)(this_ptr + 0x30) = 0;
  uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x938))();
  fVar5 = ((float)uVar6 - fVar4) + in_XMM1._0_4_;
  fVar9 = (float)((uint64_t)uVar6 >> 0x20);
  fVar11 = in_XMM1._4_4_;
  fVar8 = fVar9 + fVar11;
  fVar12 = in_XMM1._12_4_;
  *(float *)(this_ptr + 0x18) = fVar5;
  *(float *)(this_ptr + 0x1c) = fVar8;
  *(float *)(this_ptr + 0x20) = fVar5;
  *(float *)(this_ptr + 0x24) = fVar8;
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x4a0))();
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
        plVar1 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + lVar3 * 8);
        (**(code **)(*plVar1 + 0x4d8))();
        uVar6 = (**(code **)(*plVar1 + 0x528))();
        fVar5 = (float)((uint64_t)uVar6 >> 0x20) + fVar8;
        if (*(float *)(this_ptr + 0x1c) <= fVar5 && fVar5 != *(float *)(this_ptr + 0x1c)) {
          *(float *)(this_ptr + 0x1c) = fVar5;
        }
        *(float *)(this_ptr + 0x18) = (float)uVar6 + fVar4 + *(float *)(this_ptr + 0x18);
        uVar6 = (**(code **)(*plVar1 + 0x530))();
        fVar5 = (float)((uint64_t)uVar6 >> 0x20);
        fVar13 = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
        auVar7._0_4_ = (uint)(float)uVar6 & g_023945e0;
        auVar7._4_4_ = (uint)fVar5 & _UNK_023945e4;
        auVar7._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
        auVar7._12_4_ = (uint)fVar13 & _UNK_023945ec;
        auVar14._4_12_ = SUB1612(auVar7 | ZEXT416(g_02394dc8),4);
        auVar14._0_4_ = SUB164(auVar7 | ZEXT416(g_02394dc8),0) + (float)uVar6;
        auVar7 = roundss(ZEXT816(0),auVar14,0xb);
        fVar5 = fVar9 + fVar5 + fVar11;
        fVar13 = extraout_XMM0_Dd + fVar13 + fVar12;
        auVar15._0_4_ = (uint)fVar5 & g_023945e0;
        auVar15._4_4_ = (uint)fVar5 & _UNK_023945e4;
        auVar15._8_4_ = (uint)fVar13 & _UNK_023945e8;
        auVar15._12_4_ = (uint)fVar13 & _UNK_023945ec;
        auVar16._4_12_ = SUB1612(auVar15 | ZEXT416(g_02394dc8),4);
        auVar16._0_4_ = SUB164(auVar15 | ZEXT416(g_02394dc8),0) + fVar5;
        auVar10 = roundss(ZEXT816(0),auVar16,0xb);
        fVar5 = auVar10._0_4_;
        if (*(float *)(this_ptr + 0x24) <= fVar5 && fVar5 != *(float *)(this_ptr + 0x24)) {
          *(float *)(this_ptr + 0x24) = fVar5;
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
        *(float *)(this_ptr + 0x20) = fVar5 + fVar4 + *(float *)(this_ptr + 0x20);
        FUN_006c6060();
        uVar2 = (**(code **)(*plVar1 + 0x560))();
        *(uint *)(this_ptr + 0x30) = *(uint *)(this_ptr + 0x30) | uVar2;
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
  *(float *)(this_ptr + 0x20) = local_2c + *(float *)(this_ptr + 0x20);
  FUN_006c6060();
  return;
}

