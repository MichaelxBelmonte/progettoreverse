// Function: FUN_01bd5d50
// Address: 01bd5d50
// Size: 2213 bytes
// Class: MUSpectrumShaper
// String references:
//   "GNModuleView"
//   "MUSpectrumShaperSlider"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bd5d50(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong unaff_RDI;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong lVar8;
  undefined1 uVar9;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar2 = DAT_027e5bc8;
  if (DAT_027e5bc8 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  pplVar6 = &local_38;
  uVar7 = FUN_01e57490(param_1,&local_88);
  plVar1 = local_38;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar7 = extraout_XMM0_Da_01;
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      uVar7 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01bd5dca:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01bd5dca;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = DAT_027e5bd0;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e5bd0 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(0);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5bd8;
    if (DAT_027e5bd8 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(DAT_02390124);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5be0;
    if (DAT_027e5be0 != 0) {
      FUN_00d50b00();
    }
    uVar9 = 1;
    lVar8 = lVar2;
    uVar7 = FUN_01bd1950(DAT_02390d34);
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    FUN_00c8e340(uVar7,1,param_3,param_4,lVar8,uVar9);
    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4) = 0x3f800000;
    uVar7 = FUN_00d50b20();
  }
  lVar2 = DAT_027e5be8;
  if (DAT_027e5be8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  pplVar6 = &local_38;
  uVar7 = FUN_01e57490(uVar7,&local_78);
  plVar1 = local_38;
  if (DAT_027e5dd8 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar7 = extraout_XMM0_Da_02;
    if (iVar4 != 0) {
      _DAT_027e5d28 = FUN_001b37d0();
      _DAT_027e5d10 = "MUSpectrumShaperSlider";
      _DAT_027e5d18 = 0x200;
      _DAT_027e5d20 = FUN_01bdaad0;
      _DAT_027e5d30 = 0;
      uRam00000000027e5d38 = 0;
      _DAT_027e5d40 = 0;
      uRam00000000027e5d48 = 0;
      _DAT_027e5d50 = 0;
      uRam00000000027e5d58 = 0;
      _DAT_027e5d60 = 0;
      uRam00000000027e5d68 = 0;
      _DAT_027e5d70 = 0;
      uRam00000000027e5d78 = 0;
      _DAT_027e5d80 = 0;
      uRam00000000027e5d88 = 0;
      _DAT_027e5d90 = 0;
      uRam00000000027e5d98 = 0;
      _DAT_027e5da0 = 0;
      uRam00000000027e5da8 = 0;
      _DAT_027e5db0 = 0;
      uRam00000000027e5db8 = 0;
      _DAT_027e5dc0 = 0;
      uRam00000000027e5dc8 = 0;
      _DAT_027e5dd0 = 0;
      uVar7 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01bd5f81:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da_00;
    if (cVar3 == '\0') goto LAB_01bd5f81;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = DAT_027e5bf0;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e5bf0 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(DAT_02390124);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5bf8;
    if (DAT_027e5bf8 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(DAT_0241df14);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5c00;
    if (DAT_027e5c00 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(0);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5c08;
    if (DAT_027e5c08 != 0) {
      FUN_00d50b00();
    }
    FUN_01bd1950(DAT_0241df10);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e5c10;
    if (DAT_027e5c10 != 0) {
      FUN_00d50b00();
    }
    uVar7 = FUN_01bd1950(DAT_02390d00);
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    uVar7 = FUN_00c8e340(uVar7,1);
    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4) = 0xbf34fdf4;
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    uVar7 = FUN_00c8e340(uVar7,1);
    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4) = 0;
    lVar2 = plVar1[0x3d];
    iVar4 = *(int *)(lVar2 + 0x18);
    FUN_00c8e340(uVar7,1);
    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4) = 0x3f34fdf4;
    uVar7 = FUN_00d50b20();
  }
  lVar2 = DAT_027e5c18;
  if (DAT_027e5c18 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  pplVar6 = &local_38;
  FUN_01e57490(uVar7,&local_68);
  plVar1 = local_38;
  if (DAT_026e5340 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    if (iVar4 != 0) {
      _DAT_027e7718 = FUN_0006d940();
      _DAT_027e7700 = "GNModuleView";
      _DAT_027e7708 = 0x178;
      _DAT_027e7710 = FUN_00191170;
      _DAT_027e7720 = 0;
      uRam00000000027e7728 = 0;
      _DAT_027e7730 = 0;
      uRam00000000027e7738 = 0;
      _DAT_027e7740 = 0;
      uRam00000000027e7748 = 0;
      _DAT_027e7750 = 0;
      uRam00000000027e7758 = 0;
      _DAT_027e7760 = 0;
      uRam00000000027e7768 = 0;
      _DAT_027e7770 = 0;
      uRam00000000027e7778 = 0;
      _DAT_027e7780 = 0;
      uRam00000000027e7788 = 0;
      _DAT_027e7790 = 0;
      uRam00000000027e7798 = 0;
      _DAT_027e77a0 = 0;
      uRam00000000027e77a8 = 0;
      _DAT_027e77b0 = 0;
      uRam00000000027e77b8 = 0;
      _DAT_027e77c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01bd621d;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_01bd621d:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar5 = (longlong)&DAT_0265c788;
    plVar5[2] = (longlong)&DAT_0265d0b0;
    FUN_00d500e0();
    lVar2 = *(longlong *)(unaff_RDI + 0x88);
    *(longlong **)(unaff_RDI + 0x88) = plVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar5 = *(longlong **)(unaff_RDI + 0x88);
    }
    (**(code **)(*plVar1 + 0x4d8))();
    (**(code **)(*plVar5 + 0x4d0))();
    plVar5 = *(longlong **)(unaff_RDI + 0x88);
    (**(code **)(*plVar1 + 0x560))();
    (**(code **)(*plVar5 + 0x558))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x570))();
    FUN_01e40eb0();
    plVar5 = local_38;
    local_40 = 0;
    local_48 = *(longlong *)(unaff_RDI + 0x88);
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    (**(code **)(*plVar5 + 0x450))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x478))();
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x4d0))();
    local_50 = '\0';
    local_58 = plVar1;
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x450))();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x558))();
    FUN_00d50b20();
  }
  FUN_01e534b0();
  return;
}


