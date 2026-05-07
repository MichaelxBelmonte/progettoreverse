// Function: FUN_01efb640
// Address: 01efb640
// Size: 990 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01efb826) */
/* WARNING: Removing unreachable block (ram,0x01efb832) */
/* WARNING: Removing unreachable block (ram,0x01efb704) */
/* WARNING: Removing unreachable block (ram,0x01efb710) */
/* WARNING: Removing unreachable block (ram,0x01efb6c3) */
/* WARNING: Removing unreachable block (ram,0x01efb6cf) */
/* WARNING: Removing unreachable block (ram,0x01efb7e4) */
/* WARNING: Removing unreachable block (ram,0x01efb7f0) */
/* WARNING: Removing unreachable block (ram,0x01efb9e9) */
/* WARNING: Removing unreachable block (ram,0x01efb9f2) */
/* WARNING: Removing unreachable block (ram,0x01efb78a) */
/* WARNING: Removing unreachable block (ram,0x01efb793) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01efb640(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int iVar3;
  longlong *in_RCX;
  int in_EDX;
  longlong lVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar5;
  undefined8 uVar6;
  undefined8 in_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float local_108;
  float local_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_d8;
  char local_d0;
  longlong local_40;
  char local_38;
  
  local_108 = (float)param_2;
  local_f8 = (float)param_1;
  fStack_f4 = (float)((ulonglong)param_1 >> 0x20);
  uStack_f0 = (undefined4)in_XMM0_Qb;
  uStack_ec = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
  if (in_EDX == 8) {
    (**(code **)(*unaff_RDI + 0x3f0))(8,0x11,0,1);
  }
  else {
    (**(code **)(*unaff_RDI + 0x3c0))();
  }
  if ((*in_RCX != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    uVar6 = (**(code **)(*unaff_RDI + 0x370))();
    FUN_01d44a40(uVar6,1);
    if (local_40 == 0) {
      bVar2 = true;
      lVar4 = 0;
    }
    else {
      lVar4 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = false;
      }
      else {
        local_38 = '\0';
        bVar2 = false;
      }
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48a10();
    fVar5 = (float)FUN_01d43d10();
    (**(code **)(*unaff_RDI + 0x470))();
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
    FUN_01d48b40();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
              ((DAT_0239011c * local_108 + local_f8) - fVar5 * DAT_0239011c);
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
    auVar1._4_4_ = fStack_f4;
    auVar1._0_4_ = fStack_f4;
    auVar1._8_4_ = uStack_ec;
    auVar1._12_4_ = uStack_ec;
    auVar8._4_12_ = auVar1._4_12_;
    auVar8._0_4_ = fStack_f4 + DAT_023b8b2c;
    auVar7._8_4_ = uStack_f0;
    auVar7._0_8_ = param_1;
    auVar7._12_4_ = uStack_ec;
    auVar7 = insertps(auVar7,auVar8,0x10);
    auVar9._8_8_ = in_XMM1_Qb;
    auVar9._0_8_ = param_2;
    auVar9 = blendps(auVar9,_DAT_02421240,0xe);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(auVar7._0_8_,auVar9._0_8_);
    if (!bVar2 && lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


