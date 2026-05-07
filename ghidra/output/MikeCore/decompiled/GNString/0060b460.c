// Function: FUN_0060b460
// Address: 0060b460
// Size: 1013 bytes
// Class: GNString


void FUN_0060b460(int param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 *in_RDX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 in_XMM1_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  longlong local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38 [8];
  
  local_78._0_4_ = param_1;
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*(longlong *)CONCAT71(uStack_57,local_58) + 0x370))();
  local_48 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar6 = (longlong)&DAT_025057e8;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x2d) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x35) = 0;
  FUN_00d500e0();
  plVar6[2] = (longlong)unaff_RDI;
  *(undefined1 *)((longlong)plVar6 + 0x3c) = param_3;
  local_98 = *unaff_RSI;
  local_90 = 0;
  local_88 = *in_RDX;
  local_80 = 0;
  uVar9 = FUN_00608140(&local_88,&local_98);
  iVar2 = (int)local_78;
  local_38[0] = '\0';
  local_40 = plVar6;
  FUN_00d23370(uVar9,(int)local_78);
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((unaff_RDI[0x33] == 0) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
    unaff_RDI[0x33] = (longlong)plVar6;
  }
  if (*(int *)(unaff_RDI[0x32] + 0xc) == 0) {
    local_38[0] = '\0';
    local_40 = plVar6;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d23310();
    plVar3 = local_40;
    pcVar7 = local_38;
    if (local_38[0] == '\0') {
      pcVar7 = &local_58;
    }
    local_58 = local_38[0];
    *pcVar7 = '\0';
    if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 == '\0') {
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_38[0] = '\0';
    local_40 = plVar3;
    iVar5 = FUN_00d237a0();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (iVar5 + -1 == iVar2) {
      FUN_00d216c0();
      local_38[0] = '\0';
      local_40 = plVar6;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_006083c0();
  if (*(int *)(unaff_RDI[0x31] + 0xc) != 2) goto LAB_0060b7df;
  pplVar8 = &local_40;
  FUN_01e40eb0();
  plVar6 = local_40;
  FUN_000a94a0();
  if (plVar6 == (longlong *)0x0) {
LAB_0060b746:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0060b746;
  }
  plVar6 = *pplVar8;
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_01e40eb0();
    local_68 = 0;
    local_60 = '\0';
    FUN_006c5ee0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e40eb0();
    FUN_006c4ec0();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_0060b7df:
  local_78 = (**(code **)(*unaff_RDI + 0x4d8))();
  uVar10 = (**(code **)(*unaff_RDI + 0x528))();
  auVar12._8_8_ = in_XMM1_Qb;
  auVar12._0_8_ = param_2;
  auVar11._8_4_ = extraout_XMM0_Dc;
  auVar11._0_8_ = uVar10;
  auVar11._12_4_ = extraout_XMM0_Dd;
  if ((float)uVar10 <= (float)param_2) {
    auVar11 = auVar12;
  }
  auVar1._8_4_ = extraout_XMM0_Dc;
  auVar1._0_8_ = uVar10;
  auVar1._12_4_ = extraout_XMM0_Dd;
  auVar12 = blendps(auVar11,auVar1,2);
  (**(code **)(*unaff_RDI + 0x4d0))((int)local_78,auVar12._0_8_);
  FUN_00d50b20();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


