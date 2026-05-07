// Function: FUN_0006a5a0
// Address: 0006a5a0
// Size: 589 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0006a5a0(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  double dVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  double dVar7;
  uint8_t auVar8 [16];
  uint32_t uVar9;
  uint32_t uVar10;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  int64_t *local_30;
  char local_28;
  
  uVar10 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar9 = (uint32_t)param_2;
  (**(code **)(*this_ptr + 0x4d8))();
  lVar4 = this_ptr[0x27];
  lVar1 = *arg1;
  if (lVar4 == lVar1) {
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  this_ptr[0x27] = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] != 0) {
    this_ptr[0x28] = 0;
    FUN_00d50b20();
  }
  if (this_ptr[0x2a] != 0) {
    this_ptr[0x2a] = 0;
    FUN_00d50b20();
  }
  if (this_ptr[0x27] == 0) {
    if ((this_ptr[0x32] != 0) && (FUN_01e1e360(), this_ptr[0x32] != 0)) {
      this_ptr[0x32] = 0;
      FUN_00d50b20();
    }
    goto LAB_0006a7cf;
  }
  FUN_013fb320();
  pvVar3 = _pthread_getspecific(param_1);
  plVar6 = local_30;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (int64_t *)local_30[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  dVar7 = (double)(**(code **)(*plVar6 + 0x398))();
  this_ptr[0x2d] = (int64_t)dVar7;
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
    dVar7 = (double)this_ptr[0x2d];
  }
  dVar2 = g_0238fee8;
  if (dVar7 < g_0238fee8) {
    this_ptr[0x2d] = 0x3ff0000000000000;
    dVar7 = dVar2;
  }
  auVar8._4_4_ = uVar10;
  auVar8._0_4_ = uVar9;
  auVar8._8_4_ = in_XMM1_Dc;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar8 = blendps(auVar8,ZEXT416((uint)((float)dVar7 * *(float *)((int64_t)this_ptr + 0x15c) +
                                        g_02390110)),1);
  (**(code **)(*this_ptr + 0x4e8))(auVar8._0_8_);
  (**(code **)(*this_ptr + 0x968))();
  FUN_01e1eb80(g_02390108);
  plVar6 = (int64_t *)this_ptr[0x32];
  plVar5 = plVar6;
  if (plVar6 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_0006a749;
      }
      FUN_00d50b00();
      plVar6 = (int64_t *)this_ptr[0x32];
      this_ptr[0x32] = (int64_t)local_30;
    }
    else {
      local_28 = '\0';
LAB_0006a749:
      this_ptr[0x32] = (int64_t)plVar5;
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0006a7cf:
  (**(code **)(*this_ptr + 0x620))();
  return;
}

