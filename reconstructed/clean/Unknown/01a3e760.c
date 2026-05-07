// Function: FUN_01a3e760
// Address: 01a3e760
// Size: 1245 bytes
// Class: Unknown

void FUN_01a3e760(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  uint64_t uVar6;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  float fVar8;
  float fVar9;
  float fVar10;
  uint8_t auVar11 [16];
  int64_t local_40;
  char local_38;
  float fVar7;
  
  fVar10 = (float)((uint64_t)param_2 >> 0x20);
  fVar8 = (float)param_2;
  fVar9 = (float)((uint64_t)param_1 >> 0x20);
  if ((g_028b2ba8 == 0) || (g_028b2bb1 == '\0')) {
    FUN_00e8cb50();
    lVar4 = g_027e1ff0;
    if (g_028b2ba8 != 0) {
      g_028b2bb1 = '\x01';
      FUN_00e8cb70();
      goto LAB_01a3e7ad;
    }
    if (g_027e1ff0 != 0) {
      FUN_00d50b00();
    }
    FUN_01d51a40();
    if (local_40 == 0) {
      lVar5 = 0;
      bVar1 = false;
    }
    else {
      lVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
      }
      else {
        local_38 = '\0';
        bVar1 = true;
      }
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    FUN_01d530c0();
    fVar10 = fVar10 * _UNK_023945d4;
    FUN_01d20ca0(fVar8 * g_023945d0);
    lVar4 = g_028b2ba8;
    if (g_028b2ba8 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_00d50b00();
          lVar4 = local_40;
        }
      }
      else {
        local_38 = '\0';
        lVar4 = local_40;
      }
      bVar2 = g_028b2ba8 != 0;
      g_028b2ba8 = lVar4;
      if (bVar2) {
        FUN_00d50b20();
        lVar4 = local_40;
      }
    }
    if ((lVar4 != 0) && (g_028b2bb0 == '\0')) {
      g_028b2bb0 = '\x01';
      FUN_00e8cb90();
      lVar4 = local_40;
    }
    if ((local_38 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    g_028b2bb1 = '\x01';
    FUN_00e8cb70();
  }
  else {
LAB_01a3e7ad:
    lVar5 = 0;
    bVar1 = false;
  }
  FUN_01e3f820();
  if ((g_0241e624 <= fVar9) || (fVar8 = fVar10 + g_02394248, fVar9 < fVar8)) {
    FUN_01e4ace0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_01e4ac90();
    }
    goto LAB_01a3ea8f;
  }
  uVar6 = FUN_01a362b0();
  fVar7 = (float)((uint64_t)uVar6 >> 0x20);
  fVar9 = (float)uVar6;
  auVar11._8_4_ = extraout_XMM0_Dc;
  auVar11._0_8_ = uVar6;
  auVar11._12_4_ = extraout_XMM0_Dd;
  if (((((fVar9 != (float)g_023dccec) || (NAN(fVar9) || NAN((float)g_023dccec))) ||
       (fVar7 != g_023dccec._4_4_)) ||
      ((NAN(fVar7) || NAN(g_023dccec._4_4_) || (fVar8 != (float)g_023dccf4)))) ||
     (NAN(fVar8) || NAN((float)g_023dccf4))) {
LAB_01a3e82d:
    auVar11 = blendps(auVar11,ZEXT416((uint)(g_02394248 + fVar9)),1);
    uVar6 = auVar11._0_8_;
  }
  else {
    if ((fVar10 != g_023dccf4._4_4_) || (NAN(fVar10) || NAN(g_023dccf4._4_4_)))
    goto LAB_01a3e82d;
    uVar6 = CONCAT44(g_023dccec._4_4_,(float)g_023dccec);
  }
  fVar10 = (float)uVar6;
  fVar9 = (float)((uint64_t)uVar6 >> 0x20);
  cVar3 = FUN_00d05410((int)param_1);
  lVar4 = local_40;
  if (cVar3 == '\0') {
LAB_01a3e94e:
    uVar6 = FUN_01a36510();
    fVar8 = (float)((uint64_t)uVar6 >> 0x20);
    if (((float)uVar6 == (float)g_023dccec) && (!NAN((float)uVar6) && !NAN((float)g_023dccec)))
    {
      if ((fVar8 == g_023dccec._4_4_) && (!NAN(fVar8) && !NAN(g_023dccec._4_4_))) {
        if ((fVar10 == (float)g_023dccf4) && (!NAN(fVar10) && !NAN((float)g_023dccf4))) {
          if ((fVar9 == g_023dccf4._4_4_) && (!NAN(fVar9) && !NAN(g_023dccf4._4_4_))) {
            uVar6 = CONCAT44(g_023dccec._4_4_,(float)g_023dccec);
          }
        }
      }
    }
    cVar3 = FUN_00d05410((int)param_1);
    if (cVar3 != '\0') {
      (**(code **)(*this_ptr + 0x938))();
      fVar10 = (float)g_023dccf4;
      if (0.0 < (float)((uint64_t)uVar6 >> 0x20)) {
        fVar10 = (float)uVar6;
      }
      fVar9 = (float)g_023dccf4;
      if (0.0 < (float)uVar6) {
        fVar9 = fVar10;
      }
      if (((0.0 < fVar9) && ((int64_t *)this_ptr[0x28] != (int64_t *)0x0)) &&
         (cVar3 = (**(code **)(*(int64_t *)this_ptr[0x28] + 0xb0))(), cVar3 != '\0')) {
        FUN_01a3e470();
        if (local_40 == 0) goto LAB_01a3ec12;
        bVar2 = true;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01a3ea29;
      }
    }
    bVar2 = false;
    lVar4 = 0;
  }
  else {
    (**(code **)(*this_ptr + 0x938))();
    fVar8 = (float)g_023dccf4;
    if (0.0 < fVar9) {
      fVar8 = fVar10;
    }
    fVar7 = (float)g_023dccf4;
    if (0.0 < fVar10) {
      fVar7 = fVar8;
    }
    if (((fVar7 <= 0.0) || ((int64_t *)this_ptr[0x28] == (int64_t *)0x0)) ||
       (cVar3 = (**(code **)(*(int64_t *)this_ptr[0x28] + 0xb0))(), cVar3 == '\0'))
    goto LAB_01a3e94e;
    FUN_01a3e180();
    if (local_40 == 0) {
LAB_01a3ec12:
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
LAB_01a3ea29:
  FUN_01e4ace0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != lVar4) {
    FUN_01e4ac90();
  }
  if ((bVar2) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
LAB_01a3ea8f:
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}

