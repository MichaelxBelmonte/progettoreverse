// Function: FUN_0006a850
// Address: 0006a850
// Size: 785 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0006a850(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  double dVar2;
  double dVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void* pVar7;
  int in_EDX;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar8;
  uint8_t auVar9 [16];
  uint32_t uVar10;
  uint32_t uVar11;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  uVar11 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar10 = (uint32_t)param_2;
  (**(code **)(*this_ptr + 0x4d8))();
  lVar5 = this_ptr[0x28];
  lVar1 = *arg1;
  if (lVar5 == lVar1) {
    if ((int)this_ptr[0x29] == in_EDX) {
      return;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x28] = lVar1;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x27] != 0) {
    this_ptr[0x27] = 0;
    FUN_00d50b20();
  }
  if (this_ptr[0x2a] != 0) {
    this_ptr[0x2a] = 0;
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x29) = in_EDX;
  if (this_ptr[0x28] == 0) {
    if ((this_ptr[0x32] != 0) && (FUN_01e1e360(), this_ptr[0x32] != 0)) {
      this_ptr[0x32] = 0;
      FUN_00d50b20();
    }
    goto LAB_0006ab41;
  }
  FUN_01646440();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01646020();
  pVar7 = *(void* *)(this_ptr + 0x29);
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  pvVar4 = _pthread_getspecific(pVar7);
  plVar8 = local_38;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar8 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  lVar5 = (**(code **)(*plVar8 + 0x398))();
  this_ptr[0x2d] = lVar5;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  dVar3 = g_0238fee8;
  dVar2 = (double)this_ptr[0x2d];
  if ((double)this_ptr[0x2d] < g_0238fee8) {
    this_ptr[0x2d] = 0x3ff0000000000000;
    dVar2 = dVar3;
  }
  auVar9._4_4_ = uVar11;
  auVar9._0_4_ = uVar10;
  auVar9._8_4_ = in_XMM1_Dc;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar9 = blendps(auVar9,ZEXT416((uint)((float)dVar2 * *(float *)((int64_t)this_ptr + 0x15c) +
                                        g_02390110)),1);
  (**(code **)(*this_ptr + 0x4e8))(auVar9._0_8_);
  (**(code **)(*this_ptr + 0x968))();
  FUN_01e1eb80(g_02390108);
  plVar8 = (int64_t *)this_ptr[0x32];
  plVar6 = plVar8;
  if (plVar8 != local_38) {
    plVar6 = local_38;
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        goto LAB_0006aabb;
      }
      FUN_00d50b00();
      plVar8 = (int64_t *)this_ptr[0x32];
      this_ptr[0x32] = (int64_t)local_38;
    }
    else {
      local_30 = '\0';
LAB_0006aabb:
      this_ptr[0x32] = (int64_t)plVar6;
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar6 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0006ab41:
  (**(code **)(*this_ptr + 0x620))();
  return;
}

