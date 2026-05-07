// Function: FUN_002cc690
// Address: 002cc690
// Size: 847 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
//   "GNClipView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002cc690(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  int iVar7;
  longlong **pplVar8;
  longlong unaff_RDI;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  char local_38;
  
  fVar14 = (float)((ulonglong)param_2 >> 0x20);
  uVar9 = (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x528))();
  pplVar8 = &local_40;
  FUN_01e40eb0();
  plVar1 = local_40;
  if (DAT_026fde20 == '\0') {
    iVar7 = ___cxa_guard_acquire();
    if (iVar7 != 0) {
      _DAT_026e9778 = FUN_0006d940();
      _DAT_026e9760 = "GNClipView";
      _DAT_026e9768 = 0x178;
      _DAT_026e9770 = FUN_001b6420;
      _DAT_026e9780 = 0;
      uRam00000000026e9788 = 0;
      _DAT_026e9790 = 0;
      uRam00000000026e9798 = 0;
      _DAT_026e97a0 = 0;
      uRam00000000026e97a8 = 0;
      _DAT_026e97b0 = 0;
      uRam00000000026e97b8 = 0;
      _DAT_026e97c0 = 0;
      uRam00000000026e97c8 = 0;
      _DAT_026e97d0 = 0;
      uRam00000000026e97d8 = 0;
      _DAT_026e97e0 = 0;
      uRam00000000026e97e8 = 0;
      _DAT_026e97f0 = 0;
      uRam00000000026e97f8 = 0;
      _DAT_026e9800 = 0;
      uRam00000000026e9808 = 0;
      _DAT_026e9810 = 0;
      uRam00000000026e9818 = 0;
      _DAT_026e9820 = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_002cc701:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_002cc701;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pplVar8 = &local_40;
  FUN_01e40eb0();
  plVar2 = local_40;
  if (DAT_026f0e00 == '\0') {
    iVar7 = ___cxa_guard_acquire();
    if (iVar7 != 0) {
      _DAT_026f8e78 = FUN_0006d940();
      _DAT_026f8e60 = "GNScrollView";
      _DAT_026f8e68 = 0x1c0;
      _DAT_026f8e70 = FUN_00074e80;
      _DAT_026f8e80 = 0;
      uRam00000000026f8e88 = 0;
      _DAT_026f8e90 = 0;
      uRam00000000026f8e98 = 0;
      _DAT_026f8ea0 = 0;
      uRam00000000026f8ea8 = 0;
      _DAT_026f8eb0 = 0;
      uRam00000000026f8eb8 = 0;
      _DAT_026f8ec0 = 0;
      uRam00000000026f8ec8 = 0;
      _DAT_026f8ed0 = 0;
      uRam00000000026f8ed8 = 0;
      _DAT_026f8ee0 = 0;
      uRam00000000026f8ee8 = 0;
      _DAT_026f8ef0 = 0;
      uRam00000000026f8ef8 = 0;
      _DAT_026f8f00 = 0;
      uRam00000000026f8f08 = 0;
      _DAT_026f8f10 = 0;
      uRam00000000026f8f18 = 0;
      _DAT_026f8f20 = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_002cc785;
  }
  pplVar8 = (longlong **)&DAT_02802688;
LAB_002cc785:
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4d8))();
  fVar11 = fVar14;
  (**(code **)(*plVar2 + 0x4d8))();
  fVar12 = fVar11;
  (**(code **)(*plVar2 + 0x4d8))();
  fVar13 = fVar12;
  (**(code **)(*plVar1 + 0x4d8))();
  iVar6 = FUN_01dcea80();
  uVar10 = FUN_01dce510();
  iVar7 = 1;
  if (iVar6 != 0) {
    iVar7 = iVar6;
  }
  FUN_00d50b20();
  FUN_00d50b20();
  local_58 = (float)uVar10;
  uStack_54 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_50 = (undefined4)extraout_XMM0_Qb_00;
  uStack_4c = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  fVar14 = local_58 * (float)iVar7 + (fVar12 - fVar13) + (fVar14 - fVar11);
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4._0_8_ = uVar9;
  if ((float)((ulonglong)uVar9 >> 0x20) < fVar14) {
    auVar3._4_4_ = uStack_54;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = uStack_50;
    auVar3._12_4_ = uStack_4c;
    insertps(auVar4,auVar3,0x10);
  }
  return;
}


