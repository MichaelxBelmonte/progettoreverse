// Function: FUN_01bee5d0
// Address: 01bee5d0
// Size: 663 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01bee5d0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t this_ptr;
  double dVar3;
  double dVar4;
  double dVar5;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar6 [16];
  int64_t local_58;
  char local_50;
  int local_40;
  double local_30;
  
  if (*(int64_t *)(this_ptr + 0x1b0) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x1b0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bcf010();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      local_30 = 0.0;
      plVar2 = *(int64_t **)(this_ptr + 0x1a0);
    }
    else {
      local_40 = -1;
      local_30 = 0.0;
      dVar5 = local_30;
      while (local_30 = dVar5, local_40 = local_40 + 1, local_40 < *(int *)(local_58 + 0xc)) {
        dVar3 = (double)FUN_01bc6390();
        dVar4 = (double)FUN_01bc6380();
        dVar5 = dVar3 + dVar4;
        if (dVar3 + dVar4 <= local_30) {
          dVar5 = local_30;
        }
      }
      FUN_000840d0();
      plVar2 = *(int64_t **)(this_ptr + 0x1a0);
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    dVar5 = (double)(**(code **)(*plVar2 + 0x368))();
    plVar2 = *(int64_t **)(this_ptr + 0x1a0);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    dVar3 = (double)(**(code **)(*plVar2 + 0x378))();
    FUN_00d50b20();
    FUN_00d50b20();
    if (dVar5 + dVar3 < local_30) {
      plVar2 = *(int64_t **)(this_ptr + 0x1a0);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      dVar4 = (double)(**(code **)(*plVar2 + 0x368))();
      FUN_00d50b20();
      plVar2 = *(int64_t **)(this_ptr + 0x1a0);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      dVar5 = (dVar5 + dVar3) / g_02394de0;
      auVar6._8_8_ = _UNK_023945b8 & extraout_XMM0_Qb | _UNK_023945c8;
      auVar6._0_8_ = (double)(g_023945b0 & (uint64_t)dVar5 | g_023945c0) + dVar5;
      auVar6 = roundsd(auVar6,auVar6,0xb);
      (**(code **)(*plVar2 + 0x380))((auVar6._0_8_ * g_02394de0 + g_02394de0) - dVar4);
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

