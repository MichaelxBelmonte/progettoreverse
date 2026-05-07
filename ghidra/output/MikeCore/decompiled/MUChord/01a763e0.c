// Function: FUN_01a763e0
// Address: 01a763e0
// Size: 1799 bytes
// Class: MUChord


/* WARNING: Removing unreachable block (ram,0x01a7649e) */
/* WARNING: Removing unreachable block (ram,0x01a764aa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a763e0(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar5;
  float fVar6;
  ulonglong uVar7;
  float fVar15;
  double dVar8;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 uVar16;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 in_XMM4 [16];
  float fVar20;
  undefined1 in_XMM5 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined1 local_88 [16];
  float local_78;
  undefined4 local_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  float fStack_50;
  float fStack_4c;
  longlong *local_48;
  undefined1 local_40;
  longlong *local_38;
  char local_30;
  
  fVar19 = (float)((ulonglong)param_2 >> 0x20);
  uVar17 = (undefined4)param_2;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar5 = local_38;
  if (local_38 == (longlong *)0x0) {
    bVar3 = true;
    plVar5 = (longlong *)0x0;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if ((local_30 == '\0') || (bVar3 = false, local_38 == (longlong *)0x0)) goto LAB_01a76441;
      FUN_00d50b20();
    }
    bVar3 = false;
  }
LAB_01a76441:
  FUN_01e3f820();
  (**(code **)(*plVar5 + 0x3f0))(8,0x11,1,1);
  FUN_01e3f820();
  uVar7 = (**(code **)(*plVar5 + 0x3d0))();
  fVar15 = (float)(uVar7 >> 0x20);
  local_88._8_4_ = uVar17;
  local_88._0_8_ = uVar7;
  local_88._12_4_ = fVar19;
  if ((int)unaff_RDI[0x40] == 1) {
    uVar7 = FUN_00d05530();
    fVar15 = (float)(uVar7 >> 0x20);
    uVar16 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    local_88._12_4_ = fVar19;
    local_88._8_4_ = uVar17;
    local_88._0_8_ = uVar7;
    uVar22 = extraout_XMM0_Qb_00;
    local_68 = uVar17;
    fStack_64 = fVar19;
    uStack_60 = in_XMM1_Dc;
    uStack_5c = in_XMM1_Dd;
  }
  else {
    uVar16 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    uVar22 = extraout_XMM0_Qb;
    local_68 = uVar17;
    fStack_64 = fVar19;
    uStack_60 = in_XMM1_Dc;
    uStack_5c = in_XMM1_Dd;
  }
  local_78 = fStack_64;
  dVar8 = (double)FUN_00e7d6f0();
  fVar19 = fStack_64;
  uVar17 = local_68;
  auVar21._4_4_ = fStack_64;
  auVar21._0_4_ = local_68;
  auVar21._8_4_ = uStack_60;
  auVar21._12_4_ = uStack_5c;
  uVar4 = extractps(auVar21,0);
  fVar18 = (float)uVar4;
  local_68 = SUB84(dVar8,0);
  fStack_64 = (float)((ulonglong)dVar8 >> 0x20);
  if (*(float *)(unaff_RDI + 0x23) < *(float *)((longlong)unaff_RDI + 0x114) ||
      *(float *)(unaff_RDI + 0x23) == *(float *)((longlong)unaff_RDI + 0x114)) {
    *(float *)(unaff_RDI + 0x3c) = fVar18;
    if (*(char *)((longlong)unaff_RDI + 0x1d4) == '\0') {
      dVar8 = dVar8 - (double)unaff_RDI[0x3d];
      if (dVar8 < (double)unaff_RDI[0x3f]) {
        dVar8 = dVar8 / (double)unaff_RDI[0x3f];
        fVar18 = (DAT_02390124 - (float)dVar8 * (float)dVar8) * *(float *)(unaff_RDI + 0x3b);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar18) | _DAT_023945f0;
        auVar12._4_12_ = auVar21._4_12_;
        auVar12._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar12,auVar12,0xb);
      }
      if ((int)unaff_RDI[0x40] == 0) {
        local_30 = '\0';
        local_68 = uVar17;
        fStack_64 = fVar19;
        local_38 = (longlong *)*unaff_RSI;
        FUN_01a76200(1,local_88);
      }
      else {
        local_68 = uVar17;
        fStack_64 = fVar19;
        if ((int)unaff_RDI[0x40] == 1) {
          local_30 = '\0';
          local_40 = 0;
          local_48 = (longlong *)*unaff_RSI;
          local_38 = plVar5;
          FUN_01a76150(local_88,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        }
      }
    }
    else {
      local_58 = local_88._0_8_;
      auVar21 = roundss(in_XMM4,ZEXT416((uint)(DAT_0239011c * local_78)),9);
      fVar6 = auVar21._0_4_;
      _fStack_50 = CONCAT44(fVar6,local_88._8_4_);
      dVar2 = dVar8 - (double)unaff_RDI[0x3d];
      fVar18 = SUB84(dVar2,0);
      dVar1 = (double)unaff_RDI[0x3f];
      if (dVar2 < dVar1) {
        fVar18 = (DAT_02390124 - (float)(dVar2 / dVar1) * (float)(dVar2 / dVar1)) *
                 *(float *)(unaff_RDI + 0x3b);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar18) | _DAT_023945f0;
        auVar10._4_12_ = auVar21._4_12_;
        auVar10._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar10,auVar10,0xb);
      }
      if ((int)unaff_RDI[0x40] == 0) {
        local_30 = '\0';
        uVar7 = (ulonglong)(uint)fVar6;
        local_38 = (longlong *)*unaff_RSI;
        FUN_01a76200(1,&local_58,SUB84(dVar1,0),dVar8,uVar7);
        fVar6 = (float)uVar7;
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      else if ((int)unaff_RDI[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        uVar7 = (ulonglong)(uint)fVar6;
        local_48 = (longlong *)*unaff_RSI;
        local_38 = plVar5;
        FUN_01a76150(&local_58,fVar18,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        fVar6 = (float)uVar7;
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      fStack_64 = fVar19;
      local_68 = uVar17;
      local_58 = CONCAT44((local_78 + fVar15) - fVar6,(undefined4)local_58);
      dVar8 = dVar8 - (double)unaff_RDI[0x3e];
      if (dVar8 < (double)unaff_RDI[0x3f]) {
        dVar8 = dVar8 / (double)unaff_RDI[0x3f];
        fVar19 = (DAT_02390124 - (float)dVar8 * (float)dVar8) *
                 *(float *)((longlong)unaff_RDI + 0x1dc);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar19) | _DAT_023945f0;
        auVar14._4_12_ = auVar21._4_12_;
        auVar14._0_4_ = auVar21._0_4_ + fVar19;
        roundss(auVar14,auVar14,0xb);
      }
      if ((int)unaff_RDI[0x40] == 0) {
        local_30 = '\0';
        local_38 = (longlong *)*unaff_RSI;
        FUN_01a76200(1,&local_58);
      }
      else if ((int)unaff_RDI[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_48 = (longlong *)*unaff_RSI;
        local_38 = plVar5;
        FUN_01a76150(&local_58,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
      }
    }
  }
  else {
    *(float *)(unaff_RDI + 0x3c) = local_78;
    if (*(char *)((longlong)unaff_RDI + 0x1d4) == '\0') {
      dVar8 = dVar8 - (double)unaff_RDI[0x3d];
      if (dVar8 < (double)unaff_RDI[0x3f]) {
        dVar8 = dVar8 / (double)unaff_RDI[0x3f];
        fVar18 = (DAT_02390124 - (float)dVar8 * (float)dVar8) * *(float *)(unaff_RDI + 0x3b);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar18) | _DAT_023945f0;
        auVar11._4_12_ = auVar21._4_12_;
        auVar11._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar11,auVar11,0xb);
      }
      if ((int)unaff_RDI[0x40] == 0) {
        local_30 = '\0';
        local_68 = uVar17;
        fStack_64 = fVar19;
        local_38 = (longlong *)*unaff_RSI;
        FUN_01a76200(0,local_88);
      }
      else {
        local_68 = uVar17;
        fStack_64 = fVar19;
        if ((int)unaff_RDI[0x40] == 1) {
          local_30 = '\0';
          local_40 = 0;
          local_48 = (longlong *)*unaff_RSI;
          local_38 = plVar5;
          FUN_01a76150(local_88,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        }
      }
    }
    else {
      local_58 = local_88._0_8_;
      auVar21 = roundss(in_XMM5,ZEXT416((uint)(DAT_0239011c * fVar18)),9);
      fVar20 = auVar21._0_4_;
      _fStack_50 = CONCAT44(local_88._12_4_,fVar20);
      dVar1 = dVar8 - (double)unaff_RDI[0x3d];
      fVar6 = SUB84(dVar1,0);
      if (dVar1 < (double)unaff_RDI[0x3f]) {
        fVar6 = (float)(dVar1 / (double)unaff_RDI[0x3f]);
        fVar6 = (DAT_02390124 - fVar6 * fVar6) * *(float *)(unaff_RDI + 0x3b);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar6) | _DAT_023945f0;
        auVar9._4_12_ = auVar21._4_12_;
        auVar9._0_4_ = auVar21._0_4_ + fVar6;
        roundss(auVar9,auVar9,0xb);
      }
      if ((int)unaff_RDI[0x40] == 0) {
        local_30 = '\0';
        local_78 = fVar18;
        local_38 = (longlong *)*unaff_RSI;
        FUN_01a76200(0,&local_58);
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        fVar18 = local_78;
        fVar15 = fVar20;
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      else if ((int)unaff_RDI[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_78 = fVar18;
        local_48 = (longlong *)*unaff_RSI;
        local_38 = plVar5;
        FUN_01a76150(&local_58,fVar6,0,dVar8,uVar7,uVar22,fVar20,uVar16);
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        fVar18 = local_78;
        fVar15 = fVar20;
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      fStack_64 = fVar19;
      local_68 = uVar17;
      local_58 = CONCAT44(local_58._4_4_,((float)uVar7 + fVar18) - fVar20);
      dVar8 = dVar8 - (double)unaff_RDI[0x3e];
      if (dVar8 < (double)unaff_RDI[0x3f]) {
        dVar8 = dVar8 / (double)unaff_RDI[0x3f];
        fVar19 = (DAT_02390124 - (float)dVar8 * (float)dVar8) *
                 *(float *)((longlong)unaff_RDI + 0x1dc);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar19) | _DAT_023945f0;
        auVar13._4_12_ = auVar21._4_12_;
        auVar13._0_4_ = auVar21._0_4_ + fVar19;
        roundss(auVar13,auVar13,0xb);
      }
      if ((int)unaff_RDI[0x40] == 0) {
        local_30 = '\0';
        local_38 = (longlong *)*unaff_RSI;
        FUN_01a76200(0,&local_58);
      }
      else if ((int)unaff_RDI[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_48 = (longlong *)*unaff_RSI;
        local_38 = plVar5;
        FUN_01a76150(&local_58,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
      }
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}


