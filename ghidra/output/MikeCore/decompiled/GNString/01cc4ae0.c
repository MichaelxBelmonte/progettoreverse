// Function: FUN_01cc4ae0
// Address: 01cc4ae0
// Size: 541 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01cc4b26) */
/* WARNING: Removing unreachable block (ram,0x01cc4b2f) */
/* WARNING: Removing unreachable block (ram,0x01cc4ce0) */
/* WARNING: Removing unreachable block (ram,0x01cc4ce9) */

void FUN_01cc4ae0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *in_RCX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar2;
  undefined8 in_XMM0_Qb;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar5 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  float local_98;
  float fStack_94;
  undefined4 uStack_8c;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x3c0))();
  if ((*in_RCX != 0) && (iVar1 = FUN_00d8c7a0(), iVar1 != 0)) {
    (**(code **)(*unaff_RDI + 0x370))();
    fVar2 = (float)FUN_01d43b70();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
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
    (**(code **)(*unaff_RDI + 0x370))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d48a10();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    auVar6 = roundss(in_XMM3,ZEXT416((uint)(fVar2 + DAT_02390d2c)),9);
    auVar3 = ZEXT416((uint)(DAT_0239011c * auVar6._0_4_));
    auVar3 = roundss(auVar3,auVar3,9);
    local_98 = (float)param_1;
    fStack_94 = (float)((ulonglong)param_1 >> 0x20);
    uStack_8c = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
    auVar4._4_12_ = auVar3._4_12_;
    auVar4._0_4_ = auVar3._0_4_ + local_98;
    auVar3._4_4_ = fStack_94;
    auVar3._0_4_ = fStack_94 - auVar6._0_4_;
    auVar3._8_4_ = uStack_8c;
    auVar3._12_4_ = uStack_8c;
    auVar3 = insertps(auVar4,auVar3,0x10);
    auVar5._8_8_ = in_XMM1_Qb;
    auVar5._0_8_ = param_2;
    auVar5 = insertps(auVar5,auVar6,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(auVar3._0_8_,auVar5._0_8_);
  }
  return;
}


