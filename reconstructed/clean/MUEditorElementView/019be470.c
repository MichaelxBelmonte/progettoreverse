// Function: FUN_019be470
// Address: 019be470
// Size: 506 bytes
// Class: MUEditorElementView

void FUN_019be470(double param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int64_t *this_ptr;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  double dVar8;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t local_38;
  uint64_t uStack_30;
  uint64_t local_28;
  
  if ((int64_t *)this_ptr[0x69] == (int64_t *)0x0) {
    dVar8 = (double)this_ptr[0x53];
    cVar2 = '\0';
    if ((dVar8 == param_1) && (cVar2 = '\0', !NAN(dVar8) && !NAN(param_1))) goto LAB_019be59f;
  }
  else {
    cVar2 = (**(code **)(*(int64_t *)this_ptr[0x69] + 0x50))();
    dVar8 = (double)this_ptr[0x53];
    if ((dVar8 == param_1) && (!NAN(dVar8) && !NAN(param_1))) {
LAB_019be59f:
      if (*(char *)((int64_t)this_ptr + 0x454) != cVar2) {
        (**(code **)(&UNK_00001560 + *this_ptr))(param_1);
      }
      goto LAB_019be64c;
    }
  }
  uVar4 = (**(code **)(*this_ptr + 0x938))
                    (~-(uint64_t)(!NAN(dVar8) && !NAN(dVar8)) & (uint64_t)param_1 |
                     (uint64_t)dVar8 & -(uint64_t)(!NAN(dVar8) && !NAN(dVar8)));
  this_ptr[0x53] = (int64_t)param_1;
  local_38 = (**(code **)(*this_ptr + 0x938))();
  uStack_30 = extraout_XMM0_Qb_00;
  auVar10 = _local_38;
  (**(code **)(&UNK_00001560 + *this_ptr))(param_1);
  cVar3 = (**(code **)(*this_ptr + 0xef8))();
  if (cVar3 != '\0') {
    auVar6._8_8_ = extraout_XMM0_Qb;
    auVar6._0_8_ = uVar4;
    fVar1 = (float)uVar4;
    local_38._4_4_ = (uint)((uint64_t)local_38 >> 0x20);
    uStack_30._0_4_ = (uint)extraout_XMM0_Qb_00;
    uStack_30._4_4_ = (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    if (g_023908ec <= (float)(g_02390140 & (uint)(fVar1 - (float)local_38))) {
      auVar12._0_4_ = fVar1 + g_023b8b2c;
      auVar12._4_12_ = auVar6._4_12_;
      insertps(g_0241b5f0,(int)this_ptr[0x23],0x10);
      blendps(auVar12,ZEXT416(0),0xe);
      (**(code **)(*this_ptr + 0x618))();
      auVar7._4_12_ = auVar10._4_12_;
      auVar7._0_4_ = (float)local_38 + g_023b8b2c;
      auVar10 = blendps(auVar7,g_0238ff00,0xe);
      uVar4 = auVar10._0_8_;
      auVar10 = g_0241b5f0;
    }
    else {
      if ((float)local_38 <= fVar1) {
        auVar6._0_4_ = (float)local_38;
      }
      auVar11._4_12_ = auVar6._4_12_;
      auVar11._0_4_ = auVar6._0_4_ + g_023b8b2c;
      auVar9._4_4_ = local_38._4_4_ & (uint)((uint64_t)uVar4 >> 0x20);
      auVar9._0_4_ = (uint)((float)local_38 - fVar1) & -(uint)(fVar1 < (float)local_38);
      auVar9._8_4_ = (uint)uStack_30 & (uint)extraout_XMM0_Qb;
      auVar9._12_4_ = uStack_30._4_4_ & (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
      auVar9 = ZEXT416(~-(uint)(fVar1 < (float)local_38) & (uint)(fVar1 - (float)local_38)) | auVar9
      ;
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = auVar9._0_4_ + g_02390d28;
      auVar5._0_12_ = ZEXT812(0);
      auVar5._12_4_ = 0;
      auVar6 = blendps(auVar5,auVar11,1);
      uVar4 = auVar6._0_8_;
    }
    auVar10 = insertps(auVar10,(int)this_ptr[0x23],0x10);
    (**(code **)(*this_ptr + 0x618))();
    if (cVar2 != '\0') {
      local_28 = auVar10._0_8_;
      (**(code **)(*this_ptr + 0x910))(uVar4,local_28);
    }
  }
LAB_019be64c:
  (**(code **)(&g_000015b0 + *this_ptr))();
  *(char *)((int64_t)this_ptr + 0x454) = cVar2;
  return;
}

