// Function: FUN_01cc0ca0
// Address: 01cc0ca0
// Size: 2679 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01cc0fa5) */
/* WARNING: Removing unreachable block (ram,0x01cc0fb5) */
/* WARNING: Removing unreachable block (ram,0x01cc0ec4) */
/* WARNING: Removing unreachable block (ram,0x01cc0ed0) */
/* WARNING: Removing unreachable block (ram,0x01cc16f4) */
/* WARNING: Removing unreachable block (ram,0x01cc1700) */
/* WARNING: Removing unreachable block (ram,0x01cc12b3) */
/* WARNING: Removing unreachable block (ram,0x01cc12c3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc0ca0(undefined8 param_1,double param_2,float param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int in_ECX;
  ulonglong in_RDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined1 in_R8B;
  undefined4 in_R9D;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar14;
  double dVar7;
  double dVar8;
  undefined4 uVar16;
  double dVar15;
  undefined1 auVar12 [16];
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar13 [16];
  double dVar17;
  float fVar19;
  undefined8 in_XMM1_Qb;
  undefined1 auVar18 [16];
  float fVar20;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  longlong local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  
  uStack_50 = in_XMM1_Qb;
  local_58 = (undefined1  [8])param_2;
  auVar13 = _local_58;
  local_58._0_4_ = SUB84(param_2,0);
  uVar16 = local_58._0_4_;
  local_58._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar6 = local_58._4_4_;
  uStack_50._0_4_ = (float)in_XMM1_Qb;
  uStack_50._4_4_ = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  local_88 = (float)param_1;
  fStack_84 = (float)((ulonglong)param_1 >> 0x20);
  switch((int)in_RDX) {
  case 8:
    (**(code **)(*unaff_RDI + 0x548))();
    if (DAT_02390d34 <= auVar13._0_4_ * param_3) {
      (**(code **)(*unaff_RDI + 0x488))(in_R8B,8,in_R9D);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
      (**(code **)(*unaff_RDI + 0x3c0))();
    }
    break;
  case 9:
  case 0x23:
  case 0x24:
    auVar10._0_8_ = (**(code **)(*unaff_RDI + 0x548))();
    auVar10._8_8_ = extraout_XMM0_Qb;
    fVar19 = auVar13._4_4_;
    fVar14 = auVar13._0_4_;
    if (fVar14 <= fVar19) {
      auVar18 = auVar13;
      if (fVar14 <= param_4 * fVar19) {
        auVar18._4_12_ = auVar13._4_12_;
        auVar18._0_4_ = param_4 * fVar19;
      }
      fVar14 = (float)((ulonglong)auVar10._0_8_ >> 0x20);
      uVar16 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar1._4_4_ = fVar14;
      auVar1._0_4_ = fVar14 + (fVar19 - auVar18._0_4_) * param_3;
      auVar1._8_4_ = uVar16;
      auVar1._12_4_ = uVar16;
      insertps(auVar10,auVar1,0x10);
      insertps(auVar13,auVar18,0x10);
    }
    else {
      fVar20 = fVar19;
      if (fVar19 <= param_4 * fVar14) {
        fVar20 = param_4 * fVar14;
      }
      auVar5._4_4_ = fVar19;
      auVar5._0_4_ = fVar20;
      auVar5._8_4_ = auVar13._12_4_;
      auVar5._12_4_ = auVar13._12_4_;
      blendps(auVar13,auVar5,1);
    }
    (**(code **)(*unaff_RDI + 0x488))(in_R8B,in_RDX & 0xffffffff,in_R9D);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (in_ECX != 0x10) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    }
    uVar9 = FUN_00d05530();
    (**(code **)(*unaff_RDI + 0x3c0))(uVar9,4);
    (**(code **)(*unaff_RDI + 0x390))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x3c0))();
    break;
  case 0xe:
  case 0x10:
    auVar11._0_8_ = (**(code **)(*unaff_RDI + 0x548))();
    auVar11._8_8_ = extraout_XMM0_Qb_00;
    if ((float)local_58._0_4_ <= (float)local_58._4_4_) {
      fVar14 = (float)((ulonglong)auVar11._0_8_ >> 0x20);
      uVar16 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar2._4_4_ = fVar14;
      auVar2._0_4_ = fVar14 + ((float)local_58._4_4_ - (float)local_58._0_4_) * param_3;
      auVar2._8_4_ = uVar16;
      auVar2._12_4_ = uVar16;
      insertps(auVar11,auVar2,0x10);
    }
    (**(code **)(*unaff_RDI + 0x488))(in_R8B,in_RDX & 0xffffffff,in_R9D);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    (**(code **)(*unaff_RDI + 0x3c0))();
    break;
  case 0xf:
    dVar7 = (double)___sincos_stret(((double)param_3 + DAT_02394dd0) * _DAT_0241f380 * DAT_023942d0
                                    * DAT_023b3bc0);
    (**(code **)(*unaff_RDI + 0x390))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    dVar17 = (double)((float)((int)(float)local_58._4_4_ / 2) + DAT_023b1608 + DAT_023b1d84);
    dVar8 = (double)((float)local_58._4_4_ * DAT_0239011c + local_88);
    dVar15 = (double)((float)local_58._4_4_ * DAT_0239011c + fStack_84);
    dVar7 = dVar17 * dVar7;
    dVar17 = dVar17 * param_2;
    dVar4 = dVar17 + dVar15;
    auVar12._0_8_ = dVar8 - dVar7;
    auVar12._8_8_ = dVar15 - dVar17;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar7 + dVar8;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    blendpd(auVar12,auVar3,1);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
    (**(code **)(*unaff_RDI + 0x398))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
    break;
  case 0x27:
    fVar14 = (float)local_58._0_4_;
    fVar19 = (float)local_58._4_4_;
    (**(code **)(*unaff_RDI + 0x560))(&switchD_01cc0cea::switchdataD_01cc1b94,in_RDX,param_3,0);
    if ((((float)local_58._0_4_ < (float)local_58._4_4_) && (DAT_02390d34 <= fVar19)) ||
       (((float)local_58._4_4_ <= (float)local_58._0_4_ && (DAT_02390d34 <= fVar14)))) {
      (**(code **)(*unaff_RDI + 0x488))(in_R8B,0x27,0);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    }
    local_68._0_4_ = local_58._0_4_;
    local_68._4_4_ = local_58._4_4_;
    fStack_60 = (float)uStack_50;
    fStack_5c = uStack_50._4_4_;
    uVar9 = (**(code **)(*unaff_RDI + 0x560))();
    local_88 = (float)uVar9;
    fStack_84 = (float)((ulonglong)uVar9 >> 0x20);
    fStack_80 = (float)extraout_XMM0_Qb_01;
    fStack_7c = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    if (((float)local_58._0_4_ < (float)local_58._4_4_ && DAT_02390d34 <= (float)local_68._4_4_) ||
       (((float)local_58._4_4_ <= (float)local_58._0_4_ && (DAT_02390d34 <= (float)local_68._0_4_)))
       ) {
      uStack_50 = extraout_XMM0_Qb_01;
      local_58 = (undefined1  [8])uVar9;
      if ((float)uVar6 <= (float)uVar16) {
        local_58._4_4_ = fStack_84 + (float)local_68._4_4_;
        local_58._0_4_ = local_88 + (float)local_68._0_4_;
        uStack_50._0_4_ = fStack_80 + fStack_60;
        uStack_50._4_4_ = fStack_7c + fStack_5c;
      }
      if ((float)uVar16 < (float)uVar6) {
        insertps(_local_68,ZEXT416((uint)DAT_02390d34),0x10);
      }
      else {
        blendps(_local_68,ZEXT416((uint)DAT_02390d34),1);
      }
      (**(code **)(*unaff_RDI + 0x488))(in_R8B,0x27,in_R9D);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      auVar13._8_4_ = fStack_80;
      auVar13._0_8_ = uVar9;
      auVar13._12_4_ = fStack_7c;
      auVar13 = blendps(_local_58,auVar13,2);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(auVar13._0_8_);
    }
  }
  return;
}


