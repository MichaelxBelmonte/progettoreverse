// Function: FUN_01f0c0c0
// Address: 01f0c0c0
// Size: 790 bytes
// Class: GNMultipleValue


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0c0c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 *puVar5;
  longlong unaff_RDI;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 in_XMM1_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar10 = FUN_01cb4790();
  plVar6 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  local_60 = plVar6;
  local_88._0_8_ = (**(code **)(*plVar6 + 0x3c8))(uVar10,0);
  local_88._8_8_ = extraout_XMM0_Qb;
  uVar8 = (**(code **)(*plVar6 + 0x3c8))(local_88._0_8_,1);
  uVar10 = FUN_01e3f820();
  local_98._8_8_ = in_XMM1_Qb;
  local_98._0_8_ = param_2;
  uVar9 = (**(code **)(*plVar6 + 0x3c8))(uVar10,2);
  local_48 = (longlong *)CONCAT44(local_48._4_4_,uVar9);
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x168);
  if (puVar1 == puVar5) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x168) = puVar5;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x138) != 0) {
    auVar12._4_12_ = local_98._4_12_;
    auVar12._0_4_ = ((float)param_2 - local_48._0_4_) - (float)local_88._0_8_;
    local_88 = insertps(local_88,uVar8,0x10);
    local_98 = blendps(auVar12,_DAT_023b1620,0xe);
    iVar7 = 0;
    do {
      iVar4 = FUN_01d5b230();
      if (iVar4 <= iVar7) {
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        break;
      }
      FUN_01d5b240(extraout_XMM0_Qa,iVar7);
      plVar6 = local_40;
      if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      local_48 = plVar6;
      FUN_01d65230();
      local_58 = local_40;
      local_50 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_50 = '\x01';
      local_70 = *(longlong *)(unaff_RDI + 0x158);
      local_68 = '\0';
      uVar11 = (**(code **)(*local_60 + 0x5d0))(*(undefined1 *)(unaff_RDI + 0x178),&local_70);
      local_a8 = (float)uVar11;
      fStack_a4 = (float)((ulonglong)uVar11 >> 0x20);
      fStack_a0 = (float)extraout_XMM0_Qb_00;
      fStack_9c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      uVar10 = uVar11;
      if ((local_68 != '\0') && (local_70 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      lVar2 = *(longlong *)(unaff_RDI + 0x168);
      iVar4 = *(int *)(lVar2 + 0x18);
      FUN_00c8e340(uVar10,1);
      auVar3._8_4_ = fStack_a0;
      auVar3._0_8_ = uVar11;
      auVar3._12_4_ = fStack_9c;
      local_98 = blendps(local_98,auVar3,2);
      puVar1 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4);
      *puVar1 = local_88._0_8_;
      puVar1[1] = local_98._0_8_;
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      auVar13._0_4_ = local_a8 + local_88._0_4_;
      auVar13._4_4_ = fStack_a4 + local_88._4_4_;
      auVar13._8_4_ = fStack_a0 + local_88._8_4_;
      auVar13._12_4_ = fStack_9c + local_88._12_4_;
      local_88 = blendps(local_88,auVar13,2);
      iVar7 = iVar7 + 1;
      plVar6 = local_60;
    } while (*(longlong *)(unaff_RDI + 0x138) != 0);
  }
  FUN_00d50b20();
  return;
}


