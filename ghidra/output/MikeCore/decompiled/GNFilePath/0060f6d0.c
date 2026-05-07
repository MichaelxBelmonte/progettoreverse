// Function: FUN_0060f6d0
// Address: 0060f6d0
// Size: 765 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "GNList"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0060f6d0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong unaff_RDI;
  longlong **pplVar5;
  undefined4 uVar6;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  DAT_0280a618 = FUN_00e7d6f0();
  uVar6 = FUN_01d384d0();
  local_50 = DAT_026fcec0;
  if (DAT_026fcec0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_48 = '\x01';
  FUN_01cac990(uVar6,&local_50);
  plVar1 = local_70;
  if ((DAT_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    _DAT_026cd470 = FUN_00018210;
    _DAT_026cd480 = 0;
    uRam00000000026cd488 = 0;
    _DAT_026cd490 = 0;
    _DAT_026cd508 = 0;
    uRam00000000026cd510 = 0;
    _DAT_026cd518 = 0;
    DAT_026cd51a = 6;
    _DAT_026cd498 = 0;
    uRam00000000026cd4a0 = 0;
    _DAT_026cd4a8 = 0;
    uRam00000000026cd4b0 = 0;
    _DAT_026cd4b8 = 0;
    uRam00000000026cd4c0 = 0;
    _DAT_026cd4c8 = 0;
    uRam00000000026cd4d0 = 0;
    _DAT_026cd4d8 = 0;
    uRam00000000026cd4e0 = 0;
    _DAT_026cd4e8 = 0;
    uRam00000000026cd4f0 = 0;
    _DAT_026cd4f8 = 0;
    uRam00000000026cd500 = 0;
    DAT_026cd523 = 0;
    _DAT_026cd51b = 0;
    ___cxa_guard_release();
  }
  pplVar5 = (longlong **)&DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') {
      if ((DAT_026fde10 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
      cVar2 = FUN_00e8da30();
      pplVar5 = &local_70;
      if (cVar2 == '\0') {
        pplVar5 = (longlong **)&DAT_02802688;
      }
    }
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if (*(longlong **)(unaff_RDI + 0x200) != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar1;
    cVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0x200) + 0x48))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar4 = 1;
    if (cVar2 != '\0') goto LAB_0060f83a;
  }
  uVar4 = 0;
LAB_0060f83a:
  FUN_00d50b20();
  return uVar4;
}


