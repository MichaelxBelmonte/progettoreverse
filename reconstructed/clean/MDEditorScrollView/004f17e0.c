// Function: FUN_004f17e0
// Address: 004f17e0
// Size: 1777 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_004f17e0(uint64_t param_1,double param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  bool bVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  uint32_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  double dVar14;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t local_a8;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  double local_50;
  double local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x10) == 0) {
    return;
  }
  FUN_00227020();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x10) == 0) goto LAB_004f1de7;
  FUN_0021a630();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_004f1de7;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_004f1de7;
  local_50 = (double)FUN_00440690();
  uVar11 = SUB84(local_50,0);
  uVar13 = FUN_004406b0();
  local_a8._0_4_ = (float)uVar13;
  local_48 = param_2;
  if (NAN(local_50)) {
LAB_004f18f6:
    uVar11 = (**(code **)(*plVar2 + 0x9b0))(uVar11,0);
    plVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_004f1942;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_004f1942:
      bVar8 = *(int *)((int64_t)plVar7 + 0xc) != 0;
      if (bVar8) {
        dVar14 = (double)FUN_01266200();
        local_48 = (double)FUN_012664b0();
        local_48 = local_48 - dVar14;
        uVar12 = FUN_004f16c0();
        local_50 = (double)(uint64_t)uVar12;
      }
      uVar11 = FUN_00d50b20();
      goto joined_r0x004f19dc;
    }
    bVar8 = false;
  }
  else {
    bVar8 = true;
    uVar11 = 0;
    if (param_2 <= 0.0) goto LAB_004f18f6;
  }
joined_r0x004f19dc:
  bVar3 = 1;
  if (NAN((float)local_a8) || (float)((uint64_t)uVar13 >> 0x20) <= 0.0) {
    (**(code **)(*plVar2 + 0x9b0))(uVar11,0);
    plVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_004f1a43;
      }
LAB_004f1a94:
      bVar3 = 0;
      if (plVar7 == (int64_t *)0x0) goto LAB_004f1b7b;
    }
    else {
      if (local_40 == (int64_t *)0x0) goto LAB_004f1a94;
LAB_004f1a43:
      if (*(int *)((int64_t)plVar7 + 0xc) == 0) goto LAB_004f1a94;
      uVar13 = (**(code **)(*plVar2 + 0xa98))();
      FUN_004f2260(plVar2,FUN_004f0e40);
      plVar9 = plVar7;
      if (plVar7 == local_40) {
LAB_004f1acf:
        if ((local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar7 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar9 = local_40;
          goto LAB_004f1acf;
        }
        FUN_00d50b20();
      }
      lVar1 = *(int64_t *)(plVar7[2] + (int64_t)(*(int *)((int64_t)plVar7 + 0xc) / 2) * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_a8 = (**(code **)(*plVar2 + 0xc38))();
      uStack_a0 = extraout_XMM0_Dc_00;
      uStack_9c = extraout_XMM0_Dd_00;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      auVar16._8_4_ = extraout_XMM0_Dc;
      auVar16._0_8_ = uVar13;
      auVar16._12_4_ = extraout_XMM0_Dd;
      auVar15._4_12_ = local_a8._4_12_;
      auVar15._0_4_ = (float)local_a8 + (float)((uint64_t)uVar13 >> 0x20) * g_02390118;
      auVar16 = blendps(auVar15,auVar16,0xe);
      local_a8._0_4_ = auVar16._0_4_;
      bVar3 = 1;
    }
    FUN_00d50b20();
  }
LAB_004f1b7b:
  iVar6 = FUN_00440fb0();
  if ((bVar8) && (iVar6 == 1)) {
    FUN_00440fc0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_004f1bdc;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_004f1bdc:
      dVar14 = (double)FUN_004f10a0(local_50._0_4_);
      local_50._0_4_ = SUB84(dVar14,0);
      FUN_00d50b20();
      bVar8 = 0.0 < local_48 && (!NAN(dVar14) && !NAN(dVar14));
      goto LAB_004f1c28;
    }
  }
  else {
LAB_004f1c28:
    if ((!bVar8) || ((bool)(bVar3 ^ 1))) {
      if (bVar8) {
        if (*(int64_t *)(this_ptr + 0x10) == 0) {
          local_38 = '\0';
          local_40 = (int64_t *)0x0;
        }
        else {
          FUN_0021a630();
        }
        FUN_019af2a0(local_50._0_4_,local_48);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      pplVar10 = &local_40;
      (**(code **)(*plVar2 + 0x970))();
      plVar2 = local_40;
      if ((g_02709e70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026f8cd8 = FUN_00074a70();
        g_026f8cc0 = "MDEditorScrollView";
        g_026f8cc8 = 0x260;
        g_026f8cd0 = FUN_000749b0;
        g_026f8ce0 = 0;
        ram_00000000026f8ce8 = 0;
        g_026f8cf0 = 0;
        g_026f8d68 = 0;
        ram_00000000026f8d70 = 0;
        g_026f8d78 = 0;
        g_026f8d7a = 1;
        g_026f8cf8 = 0;
        ram_00000000026f8d00 = 0;
        g_026f8d08 = 0;
        ram_00000000026f8d10 = 0;
        g_026f8d18 = 0;
        ram_00000000026f8d20 = 0;
        g_026f8d28 = 0;
        ram_00000000026f8d30 = 0;
        g_026f8d38 = 0;
        ram_00000000026f8d40 = 0;
        g_026f8d48 = 0;
        ram_00000000026f8d50 = 0;
        g_026f8d58 = 0;
        ram_00000000026f8d60 = 0;
        g_026f8d83 = 0;
        g_026f8d7b = 0;
        ___cxa_guard_release();
      }
      if (plVar2 == (int64_t *)0x0) {
LAB_004f1c81:
        pplVar10 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_004f1c81;
      }
      plVar2 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar2 != (int64_t *)0x0) && (plVar7 = (int64_t *)plVar2[0x4b], plVar7 != plVar4)) {
        FUN_00d50b00();
        plVar2[0x4b] = (int64_t)plVar4;
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (*(int64_t *)(this_ptr + 0x10) == 0) {
        local_38 = '\0';
        local_40 = (int64_t *)0x0;
      }
      else {
        FUN_0021a630();
      }
      FUN_019af2a0(local_50._0_4_,local_48);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_0021a630();
      (**(code **)(*local_40 + 0xcb8))(local_50._0_4_,local_48,(float)local_a8);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_004f1de7:
  FUN_00d50b20();
  return;
}

