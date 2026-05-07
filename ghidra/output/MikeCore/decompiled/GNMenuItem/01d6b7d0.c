// Function: FUN_01d6b7d0
// Address: 01d6b7d0
// Size: 1691 bytes
// Class: GNMenuItem


/* WARNING: Removing unreachable block (ram,0x01d6b8cd) */
/* WARNING: Removing unreachable block (ram,0x01d6b8d9) */
/* WARNING: Removing unreachable block (ram,0x01d6b93b) */
/* WARNING: Removing unreachable block (ram,0x01d6b94b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d6b7d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int in_EDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int iVar4;
  undefined8 in_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar9;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  longlong local_40;
  char local_38;
  
  fStack_50 = (float)in_XMM1_Dc;
  local_58 = (undefined1  [8])param_2;
  fStack_4c = (float)in_XMM1_Dd;
  local_d8 = (float)param_1;
  fStack_d4 = (float)((ulonglong)param_1 >> 0x20);
  fStack_cc = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  if (in_EDX == 0x10) {
    _local_58 = blendps(_local_58,_DAT_023b5520,0xd);
  }
  else if (in_EDX == 0xf) {
    (**(code **)(*unaff_RDI + 0x3a0))();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    fVar9 = (float)(int)(float)local_58._4_4_ * DAT_0239011c + DAT_023b1608;
    fStack_d0 = (float)in_XMM0_Qb;
    local_d8 = (float)local_58._4_4_ * DAT_0239011c + local_d8;
    local_58._4_4_ = (float)local_58._4_4_ * DAT_0239011c + fStack_d4;
    fStack_50 = fStack_4c + fStack_cc;
    auVar5._4_4_ = local_58._4_4_;
    auVar5._0_4_ = local_d8;
    auVar5._8_4_ = fStack_4c + fStack_d0;
    auVar5._12_4_ = fStack_50;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = local_d8 + DAT_02390d00;
    local_58._0_4_ = local_58._4_4_;
    fStack_4c = fStack_50;
    fVar8 = (float)local_58._4_4_ + DAT_02390124;
    auVar7._4_4_ = local_58._4_4_;
    auVar7._0_4_ = fVar8;
    auVar7._8_4_ = fStack_50;
    auVar7._12_4_ = fStack_50;
    auVar7 = insertps(auVar6,auVar7,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar7._0_8_,fVar9);
    local_d8 = DAT_02390124 + local_d8;
    local_58._0_4_ = (float)local_58._0_4_ + DAT_02390d00;
    auVar2._4_4_ = local_58._4_4_;
    auVar2._0_4_ = local_58._0_4_;
    auVar2._8_4_ = fStack_50;
    auVar2._12_4_ = fStack_4c;
    auVar7 = insertps(ZEXT416((uint)local_d8),auVar2,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar7._0_8_,fVar9);
    auVar7 = insertps(auVar6,local_58._0_4_,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar7._0_8_,fVar9);
    (**(code **)(*unaff_RDI + 0x390))();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    auVar7 = insertps(ZEXT416((uint)local_d8),fVar8,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar7._0_8_,fVar9);
    iVar4 = (int)fVar9;
    if ((int)fVar9 < 1) {
      return;
    }
    do {
      (**(code **)(*unaff_RDI + 0x398))();
      if (local_110 == '\0') {
        if (local_118 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_110 = '\0';
      }
      (**(code **)(*unaff_RDI + 0x3a0))();
      local_70 = 0;
      if (local_f0 == '\0') {
        if (local_f8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_f0 = '\0';
      }
      local_70 = '\x01';
      local_78 = local_f8;
      (**(code **)(*unaff_RDI + 0x3a8))();
      local_60 = 0;
      if (local_e0 == '\0') {
        if (local_e8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e0 = '\0';
      }
      local_60 = '\x01';
      local_68 = local_e8;
      FUN_01cfd290();
      local_80 = 0;
      if (local_100 == '\0') {
        if (local_108 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_100 = '\0';
      }
      local_80 = '\x01';
      local_88 = local_108;
      local_58._0_4_ = (float)iVar4;
      FUN_01cfd290((float)iVar4 / fVar9,&local_88);
      lVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if (local_118 != 0) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
      bVar1 = 1 < iVar4;
      iVar4 = iVar4 + -1;
    } while (bVar1);
    return;
  }
  FUN_01cbadc0();
  if ((in_EDX == 1) && (param_3 == 1)) {
    FUN_00d05530();
    (**(code **)(*unaff_RDI + 0x688))();
  }
  return;
}


