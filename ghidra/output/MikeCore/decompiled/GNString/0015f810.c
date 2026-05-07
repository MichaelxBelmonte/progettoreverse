// Function: FUN_0015f810
// Address: 0015f810
// Size: 761 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015f810(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong **pplVar6;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_000b6bf0();
  lVar1 = DAT_026e3e40;
  if (DAT_026e3e40 == 0) {
    lVar5 = unaff_RDI[0x17];
    if (lVar5 == 0) goto LAB_0015f871;
  }
  else {
    FUN_00d50b00();
    lVar5 = unaff_RDI[0x17];
    if (lVar5 == lVar1) {
      FUN_00d50b20();
      goto LAB_0015f871;
    }
  }
  unaff_RDI[0x17] = lVar1;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
LAB_0015f871:
  lVar1 = DAT_026e3e48;
  if (DAT_026e3e48 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar1;
  local_40 = '\x01';
  FUN_00de4060();
  plVar2 = local_58;
  if ((DAT_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026cd0e8 = FUN_00d4fe50();
    DAT_026cd0d0 = "GNDictionary";
    _DAT_026cd0d8 = 0x28;
    _DAT_026cd0e0 = FUN_00022d20;
    _DAT_026cd0f0 = 0;
    uRam00000000026cd0f8 = 0;
    _DAT_026cd100 = 0;
    _DAT_026cd178 = 0;
    uRam00000000026cd180 = 0;
    _DAT_026cd188 = 0;
    DAT_026cd18a = 6;
    _DAT_026cd108 = 0;
    uRam00000000026cd110 = 0;
    _DAT_026cd118 = 0;
    uRam00000000026cd120 = 0;
    _DAT_026cd128 = 0;
    uRam00000000026cd130 = 0;
    _DAT_026cd138 = 0;
    uRam00000000026cd140 = 0;
    _DAT_026cd148 = 0;
    uRam00000000026cd150 = 0;
    _DAT_026cd158 = 0;
    uRam00000000026cd160 = 0;
    _DAT_026cd168 = 0;
    uRam00000000026cd170 = 0;
    DAT_026cd193 = 0;
    _DAT_026cd18b = 0;
    ___cxa_guard_release();
  }
  pplVar6 = (longlong **)&DAT_02802688;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar3 = FUN_00e8db60();
      pplVar6 = &local_58;
      if (cVar3 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
  }
  local_30 = 0;
  local_38 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_30 = '\x01';
  }
  else {
    local_30 = '\x01';
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  (**(code **)(*unaff_RDI + 0x5f0))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


