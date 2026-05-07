// Function: FUN_01e6d410
// Address: 01e6d410
// Size: 573 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e6d410(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  float fVar8;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar9 [16];
  uint8_t local_48 [16];
  
  iVar1 = *(int *)(this_ptr + 0x158);
  if (iVar1 == 2) {
    lVar4 = *(int64_t *)(this_ptr + 0x150);
    iVar1 = *(int *)(lVar4 + 0xc);
    fVar8 = g_02390d28;
  }
  else if (iVar1 == 1) {
    if ((((float)g_028ba110 == 0.0) && (!NAN((float)g_028ba110))) ||
       ((g_028ba110._4_4_ == 0.0 && (!NAN(g_028ba110._4_4_))))) {
      lVar4 = *(int64_t *)(this_ptr + 0x150);
      iVar1 = *(int *)(lVar4 + 0xc);
      g_028ba110._0_4_ = g_024202c0;
      g_028ba110._4_4_ = _UNK_024202c4;
      fVar8 = _UNK_024202c4;
    }
    else {
      lVar4 = *(int64_t *)(this_ptr + 0x150);
      iVar1 = *(int *)(lVar4 + 0xc);
      fVar8 = g_028ba110._4_4_;
    }
  }
  else {
    fVar8 = 0.0;
    if (iVar1 == 0) {
      if ((((float)g_028ba110 == 0.0) && (!NAN((float)g_028ba110))) ||
         ((g_028ba110._4_4_ == 0.0 && (!NAN(g_028ba110._4_4_))))) {
        g_028ba110._0_4_ = g_024202c0;
        g_028ba110._4_4_ = _UNK_024202c4;
      }
      fVar8 = g_028ba110._4_4_ + g_02390d34 + g_02390d28;
    }
    lVar4 = *(int64_t *)(this_ptr + 0x150);
    iVar1 = *(int *)(lVar4 + 0xc);
  }
  if (iVar1 < 1) {
    bVar2 = false;
    lVar5 = 0;
  }
  else {
    local_48 = ZEXT416((uint)g_02390d30);
    lVar7 = 0;
    bVar2 = false;
    lVar6 = 0;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar7 * 8);
      if (lVar6 == lVar4) {
        lVar5 = lVar6;
        bVar3 = bVar2;
        if ((!bVar2) && (lVar4 != 0)) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        lVar5 = lVar4;
        if ((bVar2) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar3;
      auVar9._0_8_ = FUN_01e6d780();
      if (*arg1 == lVar5) {
        auVar9._8_4_ = (uint32_t)extraout_XMM0_Qb;
        auVar9._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
        blendps(local_48,g_023b27d0,0xe);
        insertps(auVar9,fVar8,0x10);
        if (!bVar2) {
          return;
        }
        goto LAB_01e6d616;
      }
      local_48._4_4_ = 0;
      local_48._0_4_ = (float)local_48._0_4_ + (float)auVar9._0_8_ + g_02390d30;
      lVar7 = lVar7 + 1;
      lVar4 = *(int64_t *)(this_ptr + 0x150);
      lVar6 = lVar5;
    } while (lVar7 < *(int *)(lVar4 + 0xc));
  }
  if (bVar2) {
LAB_01e6d616:
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

