// Function: FUN_01814c10
// Address: 01814c10
// Size: 1228 bytes
// Class: MUPitchMapper


/* WARNING: Removing unreachable block (ram,0x01815012) */
/* WARNING: Removing unreachable block (ram,0x01814e89) */
/* WARNING: Removing unreachable block (ram,0x01814dde) */
/* WARNING: Removing unreachable block (ram,0x01814d3e) */
/* WARNING: Removing unreachable block (ram,0x01814d07) */
/* WARNING: Removing unreachable block (ram,0x01814db0) */
/* WARNING: Removing unreachable block (ram,0x01814e1d) */
/* WARNING: Removing unreachable block (ram,0x01814f8f) */
/* WARNING: Removing unreachable block (ram,0x018150b5) */

void FUN_01814c10(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *unaff_RDI;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 in_XMM1_Qb;
  undefined4 uVar7;
  undefined1 auVar6 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  float local_74;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar7 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  FUN_01e42030();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    plVar1 = (longlong *)FUN_00e8fc40();
    FUN_000161a0();
    (**(code **)(*plVar1 + 0x18))();
    FUN_01e3f820();
    (**(code **)(*unaff_RDI + 0x640))();
    local_d8 = (**(code **)(MACH_HEADER._0_8_ + 0x580))();
    uStack_d0 = extraout_XMM0_Qb;
    (**(code **)(*unaff_RDI + 0x640))();
    uVar3 = (**(code **)(MACH_HEADER._0_8_ + 0x578))();
    local_74 = (float)uVar3;
    local_b8 = 0;
    local_b0 = '\0';
    (**(code **)(*plVar1 + 0x450))(uVar3,&local_b8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    FUN_01e5c680();
    FUN_01e56750();
    FUN_01e5c730();
    FUN_01e56750();
    FUN_01e5ca90();
    (**(code **)(MACH_HEADER._0_8_ + 0x570))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    local_c8 = (float)param_2;
    fStack_c4 = (float)((ulonglong)param_2 >> 0x20);
    auVar4._4_12_ = local_d8._4_12_;
    auVar4._0_4_ = (float)local_d8 + local_c8;
    auVar5._4_4_ = fStack_c4;
    auVar5._0_4_ = fStack_c4;
    auVar5._8_4_ = uVar7;
    auVar5._12_4_ = uVar7;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = fStack_c4 + local_74;
    auVar5 = insertps(auVar4,auVar6,0x10);
    FUN_01e5a130(auVar5._0_8_);
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_00074c30();
    (**(code **)(*plVar2 + 0x18))();
    FUN_01d95060();
    FUN_01d94ee0();
    insertps(auVar4,auVar6._0_4_,0x10);
    (**(code **)(*plVar2 + 0x4d0))();
    (**(code **)(*plVar2 + 0x558))();
    FUN_00d50b00();
    FUN_01d978b0();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    FUN_01e5ca90();
    local_a0 = '\0';
    local_a8 = plVar2;
    (**(code **)(MACH_HEADER._0_8_ + 0x450))();
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e56750();
    local_98 = DAT_027d6280;
    if (DAT_027d6280 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_01e5a050();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x460))();
    FUN_01f27fe0();
    (**(code **)(unaff_RDI[0x27] + 0x10))();
    uVar3 = FUN_00d50b00();
    local_88 = 0;
    local_80 = '\0';
    FUN_01f47190(uVar3,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI + 0x27 != (longlong *)0x0) {
      (**(code **)(unaff_RDI[0x27] + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  else {
    FUN_01e42030();
    FUN_01d8c6e0();
    FUN_01e5d9c0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


