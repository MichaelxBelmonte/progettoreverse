// Function: FUN_01e65010
// Address: 01e65010
// Size: 961 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e653a1) */
/* WARNING: Removing unreachable block (ram,0x01e653ad) */
/* WARNING: Removing unreachable block (ram,0x01e6527e) */
/* WARNING: Removing unreachable block (ram,0x01e6528a) */
/* WARNING: Removing unreachable block (ram,0x01e65140) */
/* WARNING: Removing unreachable block (ram,0x01e65150) */
/* WARNING: Removing unreachable block (ram,0x01e650a0) */
/* WARNING: Removing unreachable block (ram,0x01e650a9) */

void FUN_01e65010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 in_RCX;
  int iVar7;
  undefined8 in_RDX;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  float fVar9;
  undefined8 in_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar10 [16];
  undefined4 local_res8;
  float fStack_94;
  longlong local_40;
  char local_38;
  
  fStack_94 = (float)((ulonglong)param_2 >> 0x20);
  DAT_02802fb0 = (undefined4)param_3;
  iVar7 = (int)in_RDX;
  if (iVar7 == 0x11) {
    lVar1 = *(longlong *)(unaff_RDI + 0x60);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    auVar5._8_8_ = in_XMM0_Qb;
    auVar5._0_8_ = param_1;
    uVar3 = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
    fVar9 = (float)((ulonglong)param_1 >> 0x20);
    auVar6._8_8_ = in_XMM1_Qb;
    auVar6._0_8_ = param_2;
    uVar4 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
    auVar8._4_4_ = fVar9;
    auVar8._0_4_ = fVar9 + DAT_023b1608;
    auVar8._8_4_ = uVar3;
    auVar8._12_4_ = uVar3;
    auVar8 = insertps(auVar5,auVar8,0x10);
    auVar10._4_4_ = fStack_94;
    auVar10._0_4_ = fStack_94 + DAT_02390d34;
    auVar10._8_4_ = uVar4;
    auVar10._12_4_ = uVar4;
    auVar10 = insertps(auVar6,auVar10,0x10);
    plVar2 = (longlong *)*unaff_RSI;
    FUN_01d39800(auVar8._0_8_,auVar10._0_8_,*(undefined4 *)(unaff_RDI + 0x178));
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar2 + 0x3a0))();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (iVar7 == 0x14) {
    FUN_01cbadc0(in_RCX,0x14,param_3,param_4);
  }
  else if (iVar7 == 0x2c) {
    FUN_01d39800(in_RCX,in_RDX,fStack_94 * DAT_0239011c);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01cfc9f0();
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
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    FUN_01e63b70(DAT_02802fb0,0x2c,param_4,local_res8);
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
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


