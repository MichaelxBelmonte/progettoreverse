// Function: FUN_0037f560
// Address: 0037f560
// Size: 1030 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"


/* WARNING: Removing unreachable block (ram,0x0037f826) */
/* WARNING: Removing unreachable block (ram,0x0037f82f) */
/* WARNING: Removing unreachable block (ram,0x0037f87f) */
/* WARNING: Removing unreachable block (ram,0x0037f88c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0037f560(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_48;
  char local_40;
  
  plVar6 = (longlong *)*param_2;
  if ((DAT_026fde10 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d1818 = FUN_00d4fe50();
    DAT_026d1800 = "GNFilePath";
    _DAT_026d1808 = 0x40;
    _DAT_026d1810 = FUN_00041050;
    _DAT_026d1820 = 0;
    uRam00000000026d1828 = 0;
    _DAT_026d1830 = 0;
    uRam00000000026d1838 = 0;
    _DAT_026d1840 = 0;
    uRam00000000026d1848 = 0;
    _DAT_026d1850 = 0;
    uRam00000000026d1858 = 0;
    _DAT_026d1860 = 0;
    uRam00000000026d1868 = 0;
    _DAT_026d1870 = 0;
    uRam00000000026d1878 = 0;
    _DAT_026d1880 = 0;
    uRam00000000026d1888 = 0;
    _DAT_026d1890 = 0;
    uRam00000000026d1898 = 0;
    _DAT_026d18a0 = 0;
    uRam00000000026d18a8 = 0;
    _DAT_026d18b0 = 0;
    uRam00000000026d18b8 = 0;
    _DAT_026d18c0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_0037f5b1:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_0037f5b1;
  }
  plVar6 = (longlong *)*param_2;
  cVar2 = (char)param_2[1];
  bVar7 = cVar2 == '\0';
  bVar8 = plVar6 == (longlong *)0x0;
  if (bVar8 || bVar7) {
    if (plVar6 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar6 + 0x4c0))();
  uVar9 = extraout_XMM0_Da;
  if (cVar3 == '\0') goto LAB_0037f699;
  uVar9 = (**(code **)(*plVar6 + 0x4c8))();
  if (plVar6 == local_48) {
    if ((cVar2 == '\0') && (plVar6 != (longlong *)0x0)) {
      if (local_40 != '\0') {
        cVar2 = '\x01';
        goto LAB_0037f699;
      }
      cVar2 = '\x01';
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    plVar6 = local_48;
    if (local_40 != '\0') {
      cVar2 = '\x01';
      if (!bVar8 && !bVar7) {
        uVar9 = FUN_00d50b20();
      }
      goto LAB_0037f699;
    }
    if (local_48 != (longlong *)0x0) {
      uVar9 = FUN_00d50b00();
    }
    cVar2 = '\x01';
    if (bVar8 || bVar7) goto LAB_0037f699;
    uVar9 = FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
LAB_0037f699:
  if (*(longlong *)(unaff_RSI + 0x148) == 0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    uVar9 = (**(code **)(*plVar5 + 0x18))();
    lVar1 = *(longlong *)(unaff_RSI + 0x148);
    *(longlong **)(unaff_RSI + 0x148) = plVar5;
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  local_78 = '\0';
  local_80 = plVar6;
  FUN_0037fae0(uVar9,&local_80);
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    local_48 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_48 = (longlong)&DAT_024eb200;
    local_48[2] = (longlong)&DAT_024eb5a8;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = 0;
    local_48[6] = 0;
    local_48[7] = 0;
    uVar9 = FUN_00d500e0();
    plVar5 = (longlong *)local_48[3];
    if (plVar5 != plVar6) {
      if (plVar6 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_48[3] = (longlong)plVar6;
      if (plVar5 != (longlong *)0x0) {
        uVar9 = FUN_00d50b20();
      }
    }
    local_48[7] = unaff_RSI;
    local_68 = '\0';
    local_58 = '\0';
    local_70 = local_48;
    local_60 = plVar6;
    FUN_0037fb90(uVar9,&local_60);
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d21140();
  }
  *unaff_RDI = local_48 + 2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((cVar2 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


