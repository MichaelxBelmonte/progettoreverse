// Function: FUN_01aa5120
// Address: 01aa5120
// Size: 2278 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"


/* WARNING: Removing unreachable block (ram,0x01aa51c7) */
/* WARNING: Removing unreachable block (ram,0x01aa51d3) */
/* WARNING: Removing unreachable block (ram,0x01aa5450) */
/* WARNING: Removing unreachable block (ram,0x01aa5455) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aa5120(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong **pplVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar9;
  bool bVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  float local_9c;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  undefined8 local_78;
  longlong *local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  longlong *local_58;
  bool local_50;
  char local_41;
  longlong *local_40;
  char local_38 [8];
  
  local_d8 = *param_2;
  local_d0 = '\0';
  local_c8 = *param_1;
  local_c0 = '\0';
  FUN_01cec030(&local_c8,&local_d8);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  plVar9 = (longlong *)*unaff_RSI;
  if ((DAT_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_01aa520d:
    unaff_RSI = (longlong *)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01aa520d;
  }
  lVar1 = *unaff_RSI;
  local_41 = (char)unaff_RSI[1];
  if ((local_41 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  (**(code **)(*(longlong *)*param_2 + 0x9e8))();
  local_70 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_01aa3ef0();
  if (cVar4 == '\0') {
    uVar6 = FUN_01d449a0();
    if ((uVar6 & 2) != 0) {
      plVar9 = (longlong *)*param_2;
      FUN_01d44be0(extraout_XMM0_Qa_00,2);
      local_88 = local_40;
      local_80 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_80 = '\x01';
      (**(code **)(*plVar9 + 0x9d8))();
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar6 = FUN_01d449a0();
    if ((uVar6 & 2) == 0) {
      plVar9 = (longlong *)*param_2;
      FUN_01d44a40(extraout_XMM0_Qa,2);
      local_98 = local_40;
      local_90 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_90 = '\x01';
      (**(code **)(*plVar9 + 0x9d8))();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01ce9490();
  plVar9 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (longlong *)0x0) {
    local_78 = 0;
    plVar9 = (longlong *)0x0;
  }
  else {
    FUN_01ce9490();
    FUN_00d23340();
    plVar9 = local_40;
    bVar10 = local_38[0] == '\0';
    local_58 = local_40;
    if (bVar10) {
      local_50 = false;
    }
    else {
      local_50 = true;
      local_38[0] = '\0';
    }
    local_50 = !bVar10;
    if ((DAT_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_027e2e88 = FUN_00d4fe50();
      _DAT_027e2e70 = "MUScaleBrowserItem";
      _DAT_027e2e78 = 0x20;
      _DAT_027e2e80 = FUN_00841ad0;
      _DAT_027e2e90 = 0;
      uRam00000000027e2e98 = 0;
      _DAT_027e2ea0 = 0;
      uRam00000000027e2ea8 = 0;
      _DAT_027e2eb0 = 0;
      uRam00000000027e2eb8 = 0;
      _DAT_027e2ec0 = 0;
      uRam00000000027e2ec8 = 0;
      _DAT_027e2ed0 = 0;
      uRam00000000027e2ed8 = 0;
      _DAT_027e2ee0 = 0;
      uRam00000000027e2ee8 = 0;
      _DAT_027e2ef0 = 0;
      uRam00000000027e2ef8 = 0;
      _DAT_027e2f00 = 0;
      uRam00000000027e2f08 = 0;
      _DAT_027e2f10 = 0;
      uRam00000000027e2f18 = 0;
      _DAT_027e2f20 = 0;
      uRam00000000027e2f28 = 0;
      _DAT_027e2f30 = 0;
      ___cxa_guard_release();
    }
    if (plVar9 == (longlong *)0x0) {
LAB_01aa548f:
      pplVar7 = &DAT_02802688;
      plVar9 = DAT_02802688;
      if (DAT_02802688 != (longlong *)0x0) goto LAB_01aa549e;
LAB_01aa54b6:
      local_78 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01aa548f;
      pplVar7 = &local_58;
      plVar9 = local_58;
      if (local_58 == (longlong *)0x0) goto LAB_01aa54b6;
LAB_01aa549e:
      if (*(char *)(pplVar7 + 1) == '\0') {
        pplVar7 = (longlong **)FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar7 + 1) = 0;
      }
      local_78 = CONCAT71((int7)((ulonglong)pplVar7 >> 8),1);
    }
    if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      FUN_00d50b20();
    }
  }
  fVar14 = 0.0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (((*(float *)(unaff_RDI + 0x198) == 0.0) && (!NAN(*(float *)(unaff_RDI + 0x198)))) ||
     ((longlong *)*param_2 == (longlong *)0x0)) goto LAB_01aa586a;
  (**(code **)(*(longlong *)*param_2 + 0x4a0))();
  FUN_00d23340();
  plVar3 = local_40;
  local_68 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) goto LAB_01aa586a;
  (**(code **)(*(longlong *)*param_2 + 0x4a0))();
  FUN_00d23340();
  plVar3 = local_40;
  local_68 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar11 = (**(code **)(*plVar3 + 0x4d8))();
  local_f8 = fVar14;
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*(longlong *)*param_2 + 0xac8))();
  if (cVar4 == '\0') {
    FUN_01e3f820();
    local_9c = DAT_023942a8;
  }
  else {
    if (plVar9 == (longlong *)0x0) {
LAB_01aa5737:
      (**(code **)(*(longlong *)*param_2 + 0x4a0))();
      FUN_00d23340();
      plVar3 = local_40;
      local_68 = local_38[0];
      pcVar8 = local_38;
      if (local_38[0] == '\0') {
        pcVar8 = &local_68;
      }
      *pcVar8 = '\0';
      if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar3 + 0x928))();
      if (local_68 != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_b8 = local_a8;
      local_b0 = '\0';
      cVar4 = (**(code **)(*plVar9 + 0x50))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_01aa5737;
      (**(code **)(*(longlong *)*param_2 + 0x4a0))();
      FUN_00d23340();
      plVar3 = local_40;
      local_68 = local_38[0];
      pcVar8 = local_38;
      if (local_38[0] == '\0') {
        pcVar8 = &local_68;
      }
      *pcVar8 = '\0';
      if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar3 + 0x928))();
      if (local_68 != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e3f820();
    local_9c = DAT_023941fc;
  }
  (**(code **)(*(longlong *)*param_2 + 0x4a0))();
  FUN_00d23340();
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  local_68 = local_38[0];
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  auVar2._4_4_ = uStack_f4;
  auVar2._0_4_ = local_f8;
  auVar2._8_4_ = uStack_f0;
  auVar2._12_4_ = uStack_ec;
  auVar12._4_12_ = auVar2._4_12_;
  auVar12._0_4_ = local_f8 + local_9c;
  auVar13._8_8_ = extraout_XMM0_Qb;
  auVar13._0_8_ = uVar11;
  auVar13 = blendps(auVar12,auVar13,0xe);
  (**(code **)(*local_40 + 0x4d0))(auVar13._0_8_,fVar14);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01aa586a:
  if (((char)local_78 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_41 != '\0') {
    FUN_00d50b20();
  }
  return;
}


