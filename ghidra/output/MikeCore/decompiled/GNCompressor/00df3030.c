// Function: FUN_00df3030
// Address: 00df3030
// Size: 902 bytes
// Class: GNCompressor
// String references:
//   "GNCompressor"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df3030(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar8;
  undefined4 uVar9;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if ((DAT_028a87f8 == (longlong *)0x0) || (DAT_028a8801 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a87f8 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar6 + 0x18))();
      if (DAT_028a87f8 == plVar6) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar8 = DAT_028a87f8 != (longlong *)0x0;
        DAT_028a87f8 = plVar6;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a8800 == '\0') {
        DAT_028a8800 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028a8801 = '\x01';
      param_1 = FUN_00e8cb70();
    }
    else {
      DAT_028a8801 = '\x01';
      param_1 = FUN_00e8cb70();
    }
  }
  local_80 = *unaff_RSI;
  local_78 = '\0';
  FUN_00df35a0(param_1,&local_80);
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
LAB_00df315b:
    *unaff_RDI = plVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  FUN_00c80cd0();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) goto LAB_00df315b;
  FUN_00c811e0();
  plVar6 = local_40;
  if ((DAT_02775ad0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026d7568 = FUN_00d4fe50();
    _DAT_026d7550 = "GNCompressor";
    _DAT_026d7558 = 0x10;
    _DAT_026d7560 = FUN_00068b20;
    _DAT_026d7570 = 0;
    uRam00000000026d7578 = 0;
    _DAT_026d7580 = 0;
    uRam00000000026d7588 = 0;
    _DAT_026d7590 = 0;
    uRam00000000026d7598 = 0;
    _DAT_026d75a0 = 0;
    uRam00000000026d75a8 = 0;
    _DAT_026d75b0 = 0;
    uRam00000000026d75b8 = 0;
    _DAT_026d75c0 = 0;
    uRam00000000026d75c8 = 0;
    _DAT_026d75d0 = 0;
    uRam00000000026d75d8 = 0;
    _DAT_026d75e0 = 0;
    uRam00000000026d75e8 = 0;
    _DAT_026d75f0 = 0;
    uRam00000000026d75f8 = 0;
    _DAT_026d7600 = 0;
    uRam00000000026d7608 = 0;
    _DAT_026d7610 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    pplVar7 = &local_40;
    if (cVar4 != '\0') goto LAB_00df3222;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_00df3222:
  plVar6 = *pplVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else if (*(char *)(pplVar7 + 1) == '\0') {
    FUN_00d50b00();
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    uVar9 = (**(code **)(*plVar6 + 0x18))();
    local_58 = '\0';
    local_50 = *unaff_RSI;
    local_48 = '\0';
    local_60 = plVar6;
    FUN_00df3650(uVar9,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}


