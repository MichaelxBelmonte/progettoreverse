// Function: FUN_01ed5530
// Address: 01ed5530
// Size: 1285 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ed561d) */
/* WARNING: Removing unreachable block (ram,0x01ed5629) */
/* WARNING: Removing unreachable block (ram,0x01ed57ce) */
/* WARNING: Removing unreachable block (ram,0x01ed57ee) */
/* WARNING: Removing unreachable block (ram,0x01ed57f3) */
/* WARNING: Removing unreachable block (ram,0x01ed57fe) */
/* WARNING: Removing unreachable block (ram,0x01ed5806) */
/* WARNING: Removing unreachable block (ram,0x01ed57d4) */
/* WARNING: Removing unreachable block (ram,0x01ed57dc) */
/* WARNING: Removing unreachable block (ram,0x01ed55a1) */
/* WARNING: Removing unreachable block (ram,0x01ed55aa) */

void FUN_01ed5530(int param_1,undefined8 param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong in_RCX;
  longlong *in_RDX;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 in_XMM1_Qb;
  longlong *local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  undefined1 local_98 [16];
  int local_88;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  local_98._8_8_ = in_XMM1_Qb;
  local_98._0_8_ = param_2;
  local_a0 = in_RDX;
  local_88 = param_1;
  uVar3 = (**(code **)(*unaff_RDI + 0x938))(in_RCX,param_3);
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto joined_r0x01ed5644;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) goto joined_r0x01ed5644;
  local_100 = local_40;
  local_f8 = '\0';
  uVar3 = (**(code **)(*unaff_RDI + 0x9a0))(local_88,&local_100);
  if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
    uVar3 = FUN_00d50b20();
  }
joined_r0x01ed5644:
  if ((int)in_RCX == 0) {
    FUN_01dcc290(uVar3,0);
    fVar4 = (float)FUN_01db9a40();
    fVar5 = fVar4;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      fVar5 = (float)FUN_00d50b20();
    }
    if (fVar4 < local_98._0_4_) {
      FUN_01dcc290(fVar5,0);
      uVar2 = FUN_01db9a40();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      auVar1._8_4_ = extraout_XMM0_Dc;
      auVar1._0_8_ = uVar2;
      auVar1._12_4_ = extraout_XMM0_Dd;
      local_98 = blendps(local_98,auVar1,1);
    }
    local_f0 = *unaff_RSI;
    local_e8 = '\0';
    (**(code **)(*unaff_RDI + 0xa30))(local_88,param_3);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((unaff_RDI[0x40] == 0) || ((int)unaff_RDI[0x41] != param_3)) ||
     (*(int *)((longlong)unaff_RDI + 0x20c) != (int)in_RCX)) {
    FUN_01d48370();
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))(local_88);
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))(local_88);
    (**(code **)(*(longlong *)*local_a0 + 0x4d0))(local_88);
    local_88 = param_3;
    (**(code **)(*unaff_RDI + 0x940))(in_RCX & 0xffffffff,param_3);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      local_e0 = local_40;
      local_d8 = '\0';
      FUN_01d488d0();
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01dd96b0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_01dd96b0();
      uVar3 = FUN_00d50b00();
      FUN_01dcc290(uVar3,in_RCX & 0xffffffff);
      local_60 = local_b0;
      local_58 = 0;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_58 = '\x01';
      local_d0 = *local_a0;
      local_c8 = '\0';
      (**(code **)(*local_40 + 0x30))(&local_60,local_88,&local_d0);
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
    }
    local_c0 = *unaff_RSI;
    local_b8 = '\0';
    (**(code **)(*(longlong *)*local_a0 + 0x610))(0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48390();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


