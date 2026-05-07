// Function: FUN_008851c0
// Address: 008851c0
// Size: 707 bytes
// Class: MDVolumeSlider
// === MDVolumeSlider properties ===
//                   _meterInfo
//                   _lastValue
//                   _knobBorderStyle
//                   _image0
//                   _image1
//                   _image2
//                   _image3
//                   _image4
//                   _isDimSlider
//                   _knobOnlyHitDetection


void FUN_008851c0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t this_ptr;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  uint64_t uVar6;
  float fVar9;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint extraout_XMM0_Dd;
  uint8_t auVar8 [16];
  float fVar10;
  float fVar12;
  uint8_t auVar11 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float fVar16;
  int64_t local_78;
  char local_70;
  float local_38;
  float local_34;
  
  fVar12 = (float)((uint64_t)param_2 >> 0x20);
  fVar10 = (float)param_2;
  FUN_006c6060();
  fVar4 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x10) + 0xa08))();
  *(void*)(this_ptr + 0x30) = 0;
  uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x938))();
  fVar9 = (float)((uint64_t)uVar6 >> 0x20);
  fVar5 = (float)uVar6 + fVar10;
  *(float *)(this_ptr + 0x18) = fVar5;
  fVar16 = (fVar9 - fVar4) + fVar12;
  *(float *)(this_ptr + 0x1c) = fVar16;
  *(float *)(this_ptr + 0x20) = fVar5;
  *(float *)(this_ptr + 0x24) = fVar16;
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x4a0))();
  if (local_70 == '\0') {
    if (local_78 == 0) goto LAB_00885468;
    FUN_00d50b00();
LAB_00885297:
    local_34 = 0.0;
    local_38 = 0.0;
    for (lVar3 = 0; (int)lVar3 < *(int *)(local_78 + 0xc); lVar3 = lVar3 + 1) {
      plVar1 = *(int64_t **)(*(int64_t *)(local_78 + 0x10) + lVar3 * 8);
      (**(code **)(*plVar1 + 0x4d8))();
      uVar7 = (**(code **)(*plVar1 + 0x528))();
      fVar16 = fVar5 + (float)uVar7;
      if (*(float *)(this_ptr + 0x18) <= fVar16 && fVar16 != *(float *)(this_ptr + 0x18)) {
        *(float *)(this_ptr + 0x18) = fVar16;
      }
      *(float *)(this_ptr + 0x1c) =
           (float)((uint64_t)uVar7 >> 0x20) + fVar4 + *(float *)(this_ptr + 0x1c);
      uVar7 = (**(code **)(*plVar1 + 0x530))();
      fVar16 = (float)uVar6 + (float)uVar7 + fVar10;
      auVar11._0_4_ = (uint)fVar16 & g_023945e0;
      auVar11._4_4_ = (uint)fVar9 & _UNK_023945e4;
      auVar11._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
      auVar11._12_4_ = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
      auVar13._4_12_ = SUB1612(auVar11 | ZEXT416(g_02394dc8),4);
      auVar13._0_4_ = SUB164(auVar11 | ZEXT416(g_02394dc8),0) + fVar16;
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      auVar11 = roundss(auVar8,auVar13,0xb);
      fVar16 = (float)((uint64_t)uVar7 >> 0x20);
      auVar14._0_4_ = (uint)fVar16 & g_023945e0;
      auVar14._4_4_ = (uint)fVar16 & _UNK_023945e4;
      auVar14._8_4_ = extraout_XMM0_Dd & _UNK_023945e8;
      auVar14._12_4_ = extraout_XMM0_Dd & _UNK_023945ec;
      auVar15._4_12_ = SUB1612(auVar14 | ZEXT416(g_02394dc8),4);
      auVar15._0_4_ = SUB164(auVar14 | ZEXT416(g_02394dc8),0) + fVar16;
      auVar8 = roundss(ZEXT816(0),auVar15,0xb);
      fVar16 = auVar11._0_4_;
      if (*(float *)(this_ptr + 0x20) <= fVar16 && fVar16 != *(float *)(this_ptr + 0x20)) {
        *(float *)(this_ptr + 0x20) = fVar16;
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
      *(float *)(this_ptr + 0x24) = fVar16 + fVar4 + *(float *)(this_ptr + 0x24);
      uVar2 = FUN_0065f4c0();
      *(uint *)(this_ptr + 0x30) = *(uint *)(this_ptr + 0x30) | uVar2;
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
  *(float *)(this_ptr + 0x24) = local_34 + *(float *)(this_ptr + 0x24);
  FUN_006c6060();
  return;
}

