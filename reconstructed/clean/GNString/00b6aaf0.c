// Function: FUN_00b6aaf0
// Address: 00b6aaf0
// Size: 1498 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00b6aaf0(uint64_t param_1,uint param_2)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint uVar7;
  void*arg1;
  int64_t this_ptr;
  byte bVar8;
  uint uVar9;
  bool bVar10;
  uint8_t in_XMM0 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  float fVar14;
  float fVar15;
  uint8_t auVar16 [16];
  float fStack_b4;
  uint32_t uStack_ac;
  int64_t *local_48;
  char local_40;
  
  if (0 < *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x138) + 0x10) + (uint64_t)param_2 * 4))
  {
    auVar16._4_4_ = in_XMM0._4_4_;
    auVar16._0_4_ = in_XMM0._4_4_ + g_02390124;
    auVar16._8_4_ = in_XMM0._12_4_;
    auVar16._12_4_ = in_XMM0._12_4_;
    insertps(in_XMM0,auVar16,0x10);
  }
  uVar9 = param_2 * 0xab >> 0xb;
  bVar8 = (char)param_2 + (char)uVar9 * -0xc;
  lVar6 = 0;
  switch(bVar8) {
  case 2:
    lVar6 = 1;
    lVar2 = *(int64_t *)(this_ptr + 0x150);
    iVar1 = *(int *)(lVar2 + 0xc);
    break;
  case 3:
    lVar6 = 1;
    lVar2 = *(int64_t *)(this_ptr + 0x158);
    iVar1 = *(int *)(lVar2 + 0xc);
    goto joined_r0x00b6aba0;
  case 4:
    lVar6 = 2;
    lVar2 = *(int64_t *)(this_ptr + 0x150);
    iVar1 = *(int *)(lVar2 + 0xc);
    break;
  case 5:
    lVar6 = 3;
    lVar2 = *(int64_t *)(this_ptr + 0x150);
    iVar1 = *(int *)(lVar2 + 0xc);
    break;
  case 6:
    lVar6 = 2;
    lVar2 = *(int64_t *)(this_ptr + 0x158);
    iVar1 = *(int *)(lVar2 + 0xc);
    goto joined_r0x00b6aba0;
  case 7:
    lVar6 = 4;
    lVar2 = *(int64_t *)(this_ptr + 0x150);
    iVar1 = *(int *)(lVar2 + 0xc);
    break;
  case 8:
    lVar6 = 3;
  case 1:
    lVar2 = *(int64_t *)(this_ptr + 0x158);
    iVar1 = *(int *)(lVar2 + 0xc);
    goto joined_r0x00b6aba0;
  case 9:
    lVar6 = 5;
    lVar2 = *(int64_t *)(this_ptr + 0x150);
    iVar1 = *(int *)(lVar2 + 0xc);
    break;
  case 10:
    lVar6 = 4;
    lVar2 = *(int64_t *)(this_ptr + 0x158);
    iVar1 = *(int *)(lVar2 + 0xc);
joined_r0x00b6aba0:
    if (iVar1 != 0) {
      plVar5 = (int64_t *)*arg1;
      lVar6 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar6 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0x400))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    goto LAB_00b6ad45;
  case 0xb:
    lVar6 = 6;
  case 0:
    lVar2 = *(int64_t *)(this_ptr + 0x150);
    iVar1 = *(int *)(lVar2 + 0xc);
    break;
  default:
    lVar6 = -1;
    lVar2 = *(int64_t *)(this_ptr + 0x150);
    iVar1 = *(int *)(lVar2 + 0xc);
  }
  if (iVar1 != 0) {
    plVar5 = (int64_t *)*arg1;
    lVar6 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar6 * 8);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar5 + 0x400))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
LAB_00b6ad45:
  if (*(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x138) + 0x10) + (uint64_t)param_2 * 4) < 1)
  {
    return;
  }
  if (g_028a52f8 == (int64_t *)0x0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00152930();
    (**(code **)(*plVar5 + 0x18))();
    if (g_028a52f8 == plVar5) {
      bVar4 = false;
      bVar3 = false;
    }
    else {
      bVar4 = true;
      bVar3 = true;
      bVar10 = g_028a52f8 != (int64_t *)0x0;
      g_028a52f8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (g_028a5300 == '\0') {
      g_028a5300 = '\x01';
      FUN_00e8cb90();
      bVar3 = bVar4;
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
    FUN_01d4ed60();
    FUN_01d52700();
    FUN_01d52740();
    lVar6 = *(int64_t *)(this_ptr + 0x178);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52740();
    FUN_01d530c0();
    (**(code **)(*local_48 + 0x3b0))();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52770();
  }
  if (0xb < bVar8) {
    auVar16 = ZEXT816(0);
    goto switchD_00b6aefc_caseD_1;
  }
  auVar16 = ZEXT416(g_023908ec);
  auVar11 = ZEXT816(0);
  switch(bVar8) {
  case 1:
    goto switchD_00b6aefc_caseD_1;
  case 2:
    auVar11 = ZEXT416(g_02392fd8);
    break;
  case 3:
    auVar16 = ZEXT416(g_0241e624);
    goto switchD_00b6aefc_caseD_1;
  case 4:
    auVar11 = ZEXT416(g_023d7ffc);
    break;
  case 5:
    auVar11 = ZEXT416(g_023b1e3c);
    break;
  case 6:
    auVar16 = ZEXT416(g_0240e314);
    goto switchD_00b6aefc_caseD_1;
  case 7:
    auVar11 = ZEXT416(g_02420a4c);
    break;
  case 8:
    auVar16 = ZEXT416(g_023d7ff8);
    goto switchD_00b6aefc_caseD_1;
  case 9:
    auVar11 = ZEXT416(g_023b5d7c);
    break;
  case 10:
    auVar16 = ZEXT416(g_023d7ff4);
    goto switchD_00b6aefc_caseD_1;
  case 0xb:
    auVar11 = ZEXT416(g_02420a48);
  }
  auVar16 = blendps(ZEXT816(0),auVar11,1);
switchD_00b6aefc_caseD_1:
  uVar7 = *(byte *)(this_ptr + 0x140) / 0xc;
  fVar14 = 0.0;
  auVar11._4_12_ = auVar16._4_12_;
  auVar11._0_4_ =
       auVar16._0_4_ +
       (float)(int)((uVar9 & 0xff) - uVar7) * g_023d7fec +
       (float)(int)(char)(*(byte *)(this_ptr + 0x140) + (char)uVar7 * -0xc) * g_02421224;
  FUN_01e436c0();
  fVar15 = 0.0;
  plVar5 = g_028a52f8;
  if (fVar14 < g_023d7ff0) {
    FUN_01e436c0();
    fStack_b4 = auVar16._4_4_;
    uStack_ac = auVar16._12_4_;
    auVar12._4_4_ = fStack_b4;
    auVar12._0_4_ = fStack_b4;
    auVar12._8_4_ = uStack_ac;
    auVar12._12_4_ = uStack_ac;
    auVar13._4_12_ = auVar12._4_12_;
    auVar13._0_4_ = fStack_b4 - (g_023d7ff0 - fVar15);
    insertps(auVar11,auVar13,0x10);
    plVar5 = g_028a52f8;
  }
  g_028a52f8 = plVar5;
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01d491c0();
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

