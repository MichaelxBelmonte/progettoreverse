// Function: FUN_01ed75d0
// Address: 01ed75d0
// Size: 743 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ed768f) */
/* WARNING: Removing unreachable block (ram,0x01ed7698) */
/* WARNING: Removing unreachable block (ram,0x01ed761f) */
/* WARNING: Removing unreachable block (ram,0x01ed7628) */

void FUN_01ed75d0(undefined4 param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  float fVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar7 [16];
  undefined1 local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((int)unaff_RDI[0x48] != 3) {
    FUN_01dd32f0(param_1);
    if (local_40 == (longlong *)0x0) {
      return;
    }
    goto LAB_01ed78a0;
  }
  (**(code **)(*local_40 + 0x390))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02394298);
  iVar3 = (**(code **)(*unaff_RDI + 0x9d8))((int)*(undefined8 *)((longlong)unaff_RDI + 0x224));
  local_68 = (undefined1  [8])FUN_01dcf710();
  fVar6 = (float)((ulonglong)local_68 >> 0x20);
  uStack_60 = extraout_XMM0_Dc;
  uStack_5c = extraout_XMM0_Dd;
  if (iVar3 == 0) {
    auVar7._4_4_ = fVar6;
    auVar7._0_4_ = fVar6 + DAT_02390124;
    auVar7._8_4_ = extraout_XMM0_Dd;
    auVar7._12_4_ = extraout_XMM0_Dd;
    _local_68 = insertps(_local_68,auVar7,0x10);
    if ((int)unaff_RDI[0x30] == 0) goto LAB_01ed7776;
  }
  else if (iVar3 == (int)unaff_RDI[0x30]) {
LAB_01ed7776:
    auVar2._4_4_ = local_68._4_4_;
    auVar2._0_4_ = local_68._4_4_ + DAT_023b1608;
    auVar2._8_4_ = local_68._12_4_;
    auVar2._12_4_ = local_68._12_4_;
    auVar7 = insertps(_local_68,auVar2,0x10);
    local_68 = auVar7._0_8_;
  }
  fVar6 = DAT_02390124;
  if (1 < iVar3 + 1U) {
    iVar1 = *(int *)(*(longlong *)(unaff_RDI[0x58] + 0x10) + (longlong)(int)(iVar3 - 1U) * 8);
    if ((iVar3 < 1) || (*(int *)(unaff_RDI[0x57] + 0xc) < iVar3)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x57] + 0x10) + (ulonglong)(iVar3 - 1U) * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
    }
    uVar4 = FUN_01ed4710();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    fVar6 = (float)(int)((uVar4 & 0xff) + iVar1 + 1);
  }
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  fVar6 = fVar6 * *(float *)(unaff_RDI + 0x5a) + (float)local_68._0_4_;
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
            (fVar6,DAT_023b1d84 + (float)local_68._4_4_,fVar6,(float)local_68._4_4_ + DAT_02394298);
LAB_01ed78a0:
  FUN_00d50b20();
  return;
}


