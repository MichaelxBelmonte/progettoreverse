// Function: FUN_004f17e0
// Address: 004f17e0
// Size: 1777 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"


/* WARNING: Removing unreachable block (ram,0x004f196f) */
/* WARNING: Removing unreachable block (ram,0x004f197b) */
/* WARNING: Removing unreachable block (ram,0x004f199c) */
/* WARNING: Removing unreachable block (ram,0x004f19a5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f17e0(undefined8 param_1,double param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  bool bVar8;
  longlong *plVar9;
  longlong **pplVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_50;
  double local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x10) == 0) {
    return;
  }
  FUN_00227020();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x10) == 0) goto LAB_004f1de7;
  FUN_0021a630();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_004f1de7;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_004f1de7;
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
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_004f1942;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_004f1942:
      bVar8 = *(int *)((longlong)plVar7 + 0xc) != 0;
      if (bVar8) {
        dVar14 = (double)FUN_01266200();
        local_48 = (double)FUN_012664b0();
        local_48 = local_48 - dVar14;
        uVar12 = FUN_004f16c0();
        local_50 = (double)(ulonglong)uVar12;
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
  if (NAN((float)local_a8) || (float)((ulonglong)uVar13 >> 0x20) <= 0.0) {
    (**(code **)(*plVar2 + 0x9b0))(uVar11,0);
    plVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_004f1a43;
      }
LAB_004f1a94:
      bVar3 = 0;
      if (plVar7 == (longlong *)0x0) goto LAB_004f1b7b;
    }
    else {
      if (local_40 == (longlong *)0x0) goto LAB_004f1a94;
LAB_004f1a43:
      if (*(int *)((longlong)plVar7 + 0xc) == 0) goto LAB_004f1a94;
      uVar13 = (**(code **)(*plVar2 + 0xa98))();
      FUN_004f2260(plVar2,FUN_004f0e40);
      plVar9 = plVar7;
      if (plVar7 == local_40) {
LAB_004f1acf:
        if ((local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar7 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar9 = local_40;
          goto LAB_004f1acf;
        }
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(plVar7[2] + (longlong)(*(int *)((longlong)plVar7 + 0xc) / 2) * 8);
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
      auVar15._0_4_ = (float)local_a8 + (float)((ulonglong)uVar13 >> 0x20) * DAT_02390118;
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
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_004f1bdc;
      }
    }
    else if (local_40 != (longlong *)0x0) {
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
        if (*(longlong *)(unaff_RDI + 0x10) == 0) {
          local_38 = '\0';
          local_40 = (longlong *)0x0;
        }
        else {
          FUN_0021a630();
        }
        FUN_019af2a0(local_50._0_4_,local_48);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      pplVar10 = &local_40;
      (**(code **)(*plVar2 + 0x970))();
      plVar2 = local_40;
      if ((DAT_02709e70 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026f8cd8 = FUN_00074a70();
        _DAT_026f8cc0 = "MDEditorScrollView";
        _DAT_026f8cc8 = 0x260;
        _DAT_026f8cd0 = FUN_000749b0;
        _DAT_026f8ce0 = 0;
        uRam00000000026f8ce8 = 0;
        _DAT_026f8cf0 = 0;
        _DAT_026f8d68 = 0;
        uRam00000000026f8d70 = 0;
        _DAT_026f8d78 = 0;
        DAT_026f8d7a = 1;
        _DAT_026f8cf8 = 0;
        uRam00000000026f8d00 = 0;
        _DAT_026f8d08 = 0;
        uRam00000000026f8d10 = 0;
        _DAT_026f8d18 = 0;
        uRam00000000026f8d20 = 0;
        _DAT_026f8d28 = 0;
        uRam00000000026f8d30 = 0;
        _DAT_026f8d38 = 0;
        uRam00000000026f8d40 = 0;
        _DAT_026f8d48 = 0;
        uRam00000000026f8d50 = 0;
        _DAT_026f8d58 = 0;
        uRam00000000026f8d60 = 0;
        DAT_026f8d83 = 0;
        _DAT_026f8d7b = 0;
        ___cxa_guard_release();
      }
      if (plVar2 == (longlong *)0x0) {
LAB_004f1c81:
        pplVar10 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_004f1c81;
      }
      plVar2 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar10 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar2 != (longlong *)0x0) && (plVar7 = (longlong *)plVar2[0x4b], plVar7 != plVar4)) {
        FUN_00d50b00();
        plVar2[0x4b] = (longlong)plVar4;
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (*(longlong *)(unaff_RDI + 0x10) == 0) {
        local_38 = '\0';
        local_40 = (longlong *)0x0;
      }
      else {
        FUN_0021a630();
      }
      FUN_019af2a0(local_50._0_4_,local_48);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_0021a630();
      (**(code **)(*local_40 + 0xcb8))(local_50._0_4_,local_48,(float)local_a8);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_004f1de7:
  FUN_00d50b20();
  return;
}


