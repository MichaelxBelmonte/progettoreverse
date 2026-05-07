// Function: FUN_01bc8500
// Address: 01bc8500
// Size: 1494 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bc8500(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM3 [16];
  longlong *local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  longlong local_f8;
  char local_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  undefined8 local_88;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  local_98 = param_2;
  local_88 = param_1;
  local_118 = FUN_01e3f820();
  local_e8._8_8_ = in_XMM1_Qb;
  local_e8._0_8_ = param_2;
  lVar1 = unaff_RDI[0x2a];
  uStack_110 = extraout_XMM0_Qb;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01bc5de0();
  FUN_01bbfb40();
  FUN_01be8270();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01bc8e10();
  local_128 = local_e8._0_8_;
  uStack_120 = local_e8._8_8_;
  local_58 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01bc8624;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01bc8624:
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_50 + 0x3a0))();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)unaff_RDI[0x2b] == '\0') {
      FUN_01bc6fe0();
    }
    else {
      fVar6 = *(float *)((longlong)unaff_RDI + 0x15c) * (float)local_128;
      auVar9 = ZEXT416(_DAT_023945e0 & (uint)fVar6) | _DAT_023945f0;
      auVar9._0_4_ = auVar9._0_4_ + fVar6;
      auVar9 = roundss(in_XMM3,auVar9,0xb);
      if (DAT_02390124 <= auVar9._0_4_) {
        if (auVar9._0_4_ <= DAT_02390d00 + (float)local_128) {
          auVar8._8_8_ = uStack_110;
          auVar8._0_8_ = local_118;
          auVar8 = blendps(ZEXT816(0),auVar8,2);
          auVar10 = blendps(local_e8,auVar9,1);
          local_108 = auVar9;
          cVar5 = FUN_00d054a0(auVar8._0_8_,auVar10._0_8_,(undefined4)local_88);
          if (cVar5 != '\0') {
            uVar7 = FUN_00d05360();
            local_138 = local_58;
            local_130 = 0;
            FUN_01bc6fe0(uVar7,&local_138);
          }
          auVar2._8_8_ = uStack_110;
          auVar2._0_8_ = local_118;
          auVar9 = blendps(auVar2,local_108,1);
          auVar10._4_4_ = local_128._4_4_;
          auVar10._0_4_ = (float)local_128 - local_108._0_4_;
          auVar10._8_4_ = (undefined4)uStack_120;
          auVar10._12_4_ = uStack_120._4_4_;
          local_e8 = blendps(local_e8,auVar10,1);
          local_108 = auVar9;
          cVar5 = FUN_00d054a0(auVar9._0_8_,local_e8._0_8_,(undefined4)local_88);
          if (cVar5 != '\0') {
            local_c8 = *unaff_RSI;
            local_c0 = '\0';
            FUN_00d05360();
            FUN_01916970();
            bVar3 = false;
            if ((local_c0 == '\0') || (local_c8 == 0)) goto LAB_01bc895e;
            FUN_00d50b20();
          }
        }
        else {
          FUN_01bc6fe0();
        }
      }
      else {
        local_d8 = *unaff_RSI;
        local_d0 = '\0';
        FUN_01916970();
        bVar3 = false;
        if ((local_d0 == '\0') || (bVar3 = false, local_d8 == 0)) goto LAB_01bc895e;
        FUN_00d50b20();
      }
    }
    bVar3 = false;
    goto LAB_01bc895e;
  }
  bVar3 = true;
LAB_01bc895e:
  if ((char)unaff_RDI[0x2b] != '\0') {
    local_b8 = *unaff_RSI;
    local_b0 = '\0';
    FUN_01bc9870();
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar1 = unaff_RDI[0x2e];
    }
    else {
      local_38 = '\0';
      lVar1 = unaff_RDI[0x2e];
    }
    local_60 = '\x01';
    local_68 = local_40;
    if (lVar1 != 0) {
      local_60 = '\x01';
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_a8 = lVar1;
    FUN_01bcb030();
    FUN_01e3f820();
    (**(code **)(*plVar4 + 0x920))(&local_68,&local_b8,(undefined4)local_88,0xffffffff);
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


