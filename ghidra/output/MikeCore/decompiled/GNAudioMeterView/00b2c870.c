// Function: FUN_00b2c870
// Address: 00b2c870
// Size: 3838 bytes
// Class: GNAudioMeterView
// String references:
//   "%I"


/* WARNING: Removing unreachable block (ram,0x00b2ce5a) */
/* WARNING: Removing unreachable block (ram,0x00b2ce66) */
/* WARNING: Removing unreachable block (ram,0x00b2d37d) */
/* WARNING: Removing unreachable block (ram,0x00b2d389) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b2c870(void)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int iVar9;
  bool bVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 in_XMM1 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong *local_78;
  undefined4 local_70;
  int local_6c;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  longlong *local_40;
  char local_38;
  
  if ((DAT_028a4d98 == (longlong *)0x0) || (DAT_028a4da1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a4d98 == (longlong *)0x0) {
      FUN_01cfcdc0();
      plVar6 = DAT_028a4d98;
      if (DAT_028a4d98 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar6 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar6 = local_40;
        }
        bVar10 = DAT_028a4d98 != (longlong *)0x0;
        DAT_028a4d98 = plVar6;
        if (bVar10) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      if ((plVar6 != (longlong *)0x0) && (DAT_028a4da0 == '\0')) {
        DAT_028a4da0 = '\x01';
        FUN_00e8cb90();
        plVar6 = local_40;
      }
      if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0();
      plVar6 = DAT_028a4da8;
      if (DAT_028a4da8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar6 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar6 = local_40;
        }
        bVar10 = DAT_028a4da8 != (longlong *)0x0;
        DAT_028a4da8 = plVar6;
        if (bVar10) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      if ((plVar6 != (longlong *)0x0) && (DAT_028a4db0 == '\0')) {
        DAT_028a4db0 = '\x01';
        FUN_00e8cb90();
        plVar6 = local_40;
      }
      if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0();
      plVar6 = DAT_028a4db8;
      if (DAT_028a4db8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar6 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar6 = local_40;
        }
        bVar10 = DAT_028a4db8 != (longlong *)0x0;
        DAT_028a4db8 = plVar6;
        if (bVar10) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      if ((plVar6 != (longlong *)0x0) && (DAT_028a4dc0 == '\0')) {
        DAT_028a4dc0 = '\x01';
        FUN_00e8cb90();
        plVar6 = local_40;
      }
      if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0();
      plVar6 = DAT_028a4dc8;
      if (DAT_028a4dc8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar6 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar6 = local_40;
        }
        bVar10 = DAT_028a4dc8 != (longlong *)0x0;
        DAT_028a4dc8 = plVar6;
        if (bVar10) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      if ((plVar6 != (longlong *)0x0) && (DAT_028a4dd0 == '\0')) {
        DAT_028a4dd0 = '\x01';
        FUN_00e8cb90();
        plVar6 = local_40;
      }
      if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0();
      plVar6 = DAT_028a4dd8;
      if (DAT_028a4dd8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar6 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar6 = local_40;
        }
        bVar10 = DAT_028a4dd8 != (longlong *)0x0;
        DAT_028a4dd8 = plVar6;
        if (bVar10) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      if ((plVar6 != (longlong *)0x0) && (DAT_028a4de0 == '\0')) {
        DAT_028a4de0 = '\x01';
        FUN_00e8cb90();
        plVar6 = local_40;
      }
      if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      in_XMM1 = ZEXT416(DAT_02390124);
      FUN_01cfcdc0();
      plVar6 = DAT_028a4de8;
      if (DAT_028a4de8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar6 = local_40;
          }
        }
        else {
          local_38 = '\0';
          plVar6 = local_40;
        }
        bVar10 = DAT_028a4de8 != (longlong *)0x0;
        DAT_028a4de8 = plVar6;
        if (bVar10) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      if ((plVar6 != (longlong *)0x0) && (DAT_028a4df0 == '\0')) {
        DAT_028a4df0 = '\x01';
        FUN_00e8cb90();
        plVar6 = local_40;
      }
      if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      DAT_028a4da1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a4da1 = '\x01';
      FUN_00e8cb70();
    }
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_78 + 0x378))();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d48a10();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((*(char *)((longlong)unaff_RDI + 0x17c) != '\0') &&
     (*(char *)((longlong)unaff_RDI + 0x17b) != '\0')) {
    (**(code **)(*unaff_RDI + 0x640))();
    plVar6 = local_40;
    FUN_01e3f820();
    (**(code **)(*plVar6 + 0x3f0))(2,0x27,(char)unaff_RDI[0x2f],1);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar4 = (longlong)*(int *)((longlong)unaff_RDI + 0x144);
  if (lVar4 == -1) {
    bVar1 = *(byte *)(unaff_RDI + 0x28);
    if ((ulonglong)bVar1 != 0) {
      uVar8 = 0;
      do {
        local_58._0_4_ = *(undefined4 *)(*(longlong *)(unaff_RDI[0x2b] + 0x10) + uVar8 * 4);
        local_68._0_4_ = *(undefined4 *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + uVar8 * 4);
        FUN_00b2b7e0();
        in_XMM1 = ZEXT416((uint)local_68._0_4_);
        FUN_00b2b9d0();
        uVar8 = uVar8 + 1;
      } while (bVar1 != uVar8);
    }
  }
  else {
    local_58._0_4_ = *(undefined4 *)(*(longlong *)(unaff_RDI[0x2b] + 0x10) + lVar4 * 4);
    local_68._0_4_ = *(undefined4 *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + lVar4 * 4);
    FUN_01e3f820();
    in_XMM1 = ZEXT416((uint)local_68._0_4_);
    FUN_00b2b9d0();
  }
  if ((*(char *)((longlong)unaff_RDI + 0x17a) != '\0') &&
     (*(float *)(unaff_RDI + 0x23) < *(float *)((longlong)unaff_RDI + 0x114) ||
      *(float *)(unaff_RDI + 0x23) == *(float *)((longlong)unaff_RDI + 0x114))) {
    if ((DAT_028a4d88 == (undefined8 *)0x0) || (DAT_028a4d91 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a4d88 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_025683c0;
        (*DAT_025683d8)();
        FUN_00c92170();
        uVar12 = FUN_00c92160();
        bVar10 = DAT_028a4d88 == (undefined8 *)0x0;
        DAT_028a4d88 = puVar5;
        if (((bVar10) || (uVar12 = FUN_00d50b20(), DAT_028a4d88 != (undefined8 *)0x0)) &&
           (DAT_028a4d90 == '\0')) {
          DAT_028a4d90 = '\x01';
          uVar12 = FUN_00e8cb90();
        }
        puVar5 = DAT_028a4d88;
        iVar9 = *(int *)(DAT_028a4d88 + 3);
        uVar12 = FUN_00c8e340(uVar12,1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar9) = 0x41400000;
        puVar5 = DAT_028a4d88;
        iVar9 = *(int *)(DAT_028a4d88 + 3);
        uVar12 = FUN_00c8e340(uVar12,1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar9) = 0x40c00000;
        puVar5 = DAT_028a4d88;
        iVar9 = *(int *)(DAT_028a4d88 + 3);
        uVar12 = FUN_00c8e340(uVar12,1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar9) = 0;
        puVar5 = DAT_028a4d88;
        iVar9 = *(int *)(DAT_028a4d88 + 3);
        uVar12 = FUN_00c8e340(uVar12,1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar9) = 0xc0c00000;
        puVar5 = DAT_028a4d88;
        iVar9 = *(int *)(DAT_028a4d88 + 3);
        uVar12 = FUN_00c8e340(uVar12,1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar9) = 0xc1400000;
        puVar5 = DAT_028a4d88;
        iVar9 = *(int *)(DAT_028a4d88 + 3);
        uVar12 = FUN_00c8e340(uVar12,1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar9) = 0xc1900000;
        puVar5 = DAT_028a4d88;
        iVar9 = *(int *)(DAT_028a4d88 + 3);
        uVar12 = FUN_00c8e340(uVar12,1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar9) = 0xc1c00000;
        puVar5 = DAT_028a4d88;
        iVar9 = *(int *)(DAT_028a4d88 + 3);
        uVar12 = FUN_00c8e340(uVar12,1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar9) = 0xc1f00000;
        puVar5 = DAT_028a4d88;
        iVar9 = *(int *)(DAT_028a4d88 + 3);
        FUN_00c8e340(uVar12,1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar9) = 0xc2b40000;
        DAT_028a4d91 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a4d91 = '\x01';
        FUN_00e8cb70();
      }
    }
    iVar9 = 0;
    do {
      bVar1 = 1;
      if (iVar9 == 2) {
        (**(code **)(*unaff_RDI + 0x640))();
        plVar6 = local_40;
        local_58 = (undefined1  [8])FUN_01e3f820();
        _local_68 = in_XMM1;
        FUN_00aea5e0();
        FUN_00aea6b0();
        local_58 = (undefined1  [8])(**(code **)(*plVar6 + 0x560))();
        uStack_50 = extraout_XMM0_Qb_01;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar6 = DAT_028a4dd8;
        if (DAT_028a4dd8 == (longlong *)0x0) goto LAB_00b2d330;
LAB_00b2d28a:
        FUN_00d50b00();
        bVar1 = 0;
      }
      else {
        if (iVar9 == 1) {
          (**(code **)(*unaff_RDI + 0x640))();
          plVar6 = local_40;
          local_58 = (undefined1  [8])FUN_01e3f820();
          _local_68 = in_XMM1;
          FUN_00aea5e0();
          FUN_00aea6b0();
          local_58 = (undefined1  [8])(**(code **)(*plVar6 + 0x560))();
          uStack_50 = extraout_XMM0_Qb_00;
          plVar6 = DAT_028a4de8;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar6 = DAT_028a4de8;
          }
        }
        else {
          if (iVar9 != 0) goto LAB_00b2d330;
          local_58 = (undefined1  [8])FUN_01e3f820();
          uStack_50 = extraout_XMM0_Qb;
          plVar6 = DAT_028a4dc8;
          _local_68 = in_XMM1;
        }
        if (plVar6 != (longlong *)0x0) goto LAB_00b2d28a;
LAB_00b2d330:
        plVar6 = (longlong *)0x0;
      }
      fVar14 = (float)local_68._4_4_ * DAT_0239011c + (float)local_58._4_4_ + DAT_023b8b2c;
      FUN_01d488d0();
      _local_58 = insertps(_local_58,fVar14,0x10);
      in_XMM1 = blendps(_local_68,_DAT_02421240,0xe);
      _local_68 = in_XMM1;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
      if (!(bool)(bVar1 | plVar6 == (longlong *)0x0)) {
        FUN_00d50b20();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 3);
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_78 + 0x390))();
    plVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    puVar5 = DAT_028a4d88;
    if ((DAT_028a4d88 != (undefined8 *)0x0) && (3 < *(int *)(DAT_028a4d88 + 3))) {
      lVar4 = 0;
      do {
        fVar14 = *(float *)(puVar5[2] + lVar4 * 4);
        FUN_00aea5e0();
        fVar11 = (float)FUN_00aea6b0();
        local_58._0_4_ = fVar11 / *(float *)(unaff_RDI + 0x2a);
        (**(code **)(*unaff_RDI + 0x640))();
        plVar6 = local_40;
        FUN_01e3f820();
        local_58 = (undefined1  [8])(**(code **)(*plVar6 + 0x560))();
        uStack_50 = extraout_XMM0_Qb_02;
        _local_68 = in_XMM1;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        auVar15._0_4_ = local_58._0_4_ + (float)local_68._0_4_;
        auVar15._4_4_ = local_58._4_4_ + (float)local_68._4_4_;
        auVar15._8_4_ = local_58._8_4_ + (float)uStack_60;
        auVar15._12_4_ = local_58._12_4_ + uStack_60._4_4_;
        auVar16._4_4_ = local_68._4_4_;
        auVar16._0_4_ = local_68._4_4_;
        auVar16._8_4_ = uStack_60._4_4_;
        auVar16._12_4_ = uStack_60._4_4_;
        auVar13._4_12_ = auVar16._4_12_;
        auVar13._0_4_ = (float)local_68._4_4_ * DAT_0239011c;
        in_XMM1 = insertps(_DAT_023d59c0,auVar13,0x10);
        auVar16 = blendps(auVar15,_local_58,2);
        local_68._0_4_ = auVar16._0_4_ + in_XMM1._0_4_;
        local_68._4_4_ = auVar16._4_4_ + in_XMM1._4_4_;
        uStack_60._0_4_ = auVar16._8_4_ + in_XMM1._8_4_;
        uStack_60._4_4_ = auVar16._12_4_ + in_XMM1._12_4_;
        local_58._4_4_ = (float)local_68._4_4_ + _UNK_023d59d4;
        local_58._0_4_ = (float)local_68._0_4_ + _DAT_023d59d0;
        uStack_50._0_4_ = (float)uStack_60 + _UNK_023d59d8;
        uStack_50._4_4_ = uStack_60._4_4_ + _UNK_023d59dc;
        FUN_01e3f820();
        cVar3 = FUN_00d05440();
        if (cVar3 != '\0') {
          (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
          local_6c = (int)fVar14;
          plVar6 = (longlong *)*unaff_RSI;
          local_70 = 1;
          local_78 = &DAT_024cc6f0;
          FUN_00d8cb40(&DAT_024cc6f0,&local_78);
          plVar2 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          in_XMM1._4_12_ = _UNK_023d59e4;
          in_XMM1._0_4_ = _DAT_023d59e0;
          (**(code **)(*plVar6 + 0x3f8))();
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar9 = *(int *)(puVar5 + 3);
        iVar7 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar7 = iVar9;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < iVar7 >> 2);
    }
  }
  return;
}


