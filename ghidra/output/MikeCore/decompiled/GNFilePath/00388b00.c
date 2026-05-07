// Function: FUN_00388b00
// Address: 00388b00
// Size: 1178 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "GNList"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00388b00(byte param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  int local_98;
  undefined8 local_94;
  longlong local_88;
  char local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar8 = FUN_01d384d0();
  local_68 = DAT_026fcec0;
  if (DAT_026fcec0 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_60 = '\x01';
  FUN_01cac990(uVar8,&local_68);
  plVar5 = local_b0;
  if ((DAT_027048b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    param_1 = 0x10;
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
  pplVar6 = (longlong **)&DAT_02802688;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 != '\0') {
      if ((DAT_026fde10 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        _DAT_026d1818 = FUN_00d4fe50();
        DAT_026d1800 = "GNFilePath";
        _DAT_026d1808 = 0x40;
        param_1 = 0x50;
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
      cVar1 = FUN_00e8da30();
      pplVar6 = &local_b0;
      if (cVar1 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
  }
  plVar5 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    local_a8 = 0;
    local_b0 = (longlong *)0x0;
    local_94 = 0;
    local_78 = 0;
    local_a0 = plVar5;
    local_70 = plVar5;
    for (lVar7 = 0; local_98 = (int)lVar7, local_98 < *(int *)((longlong)plVar5 + 0xc);
        lVar7 = lVar7 + 1) {
      plVar4 = *(longlong **)(plVar5[2] + lVar7 * 8);
      local_b0 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      cVar1 = (**(code **)(*plVar4 + 0x4c0))();
      if (cVar1 != '\0') {
        (**(code **)(*plVar4 + 0x4c8))();
        if (plVar4 != local_40) {
          plVar4 = local_40;
          if (local_38 != '\0') {
            FUN_00d50b20();
            goto LAB_00388d2c;
          }
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_00388d2c:
      local_48 = plVar4;
      uVar3 = (**(code **)(*plVar4 + 0x3a0))();
      if ((char)uVar3 == '\0') {
        FUN_01c0e5e0();
        (**(code **)(*local_48 + 0x370))();
        plVar4 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_40 = plVar4;
        local_38 = '\0';
        uVar3 = FUN_00d23d70();
        plVar5 = local_70;
        cVar1 = (char)uVar3;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar3 = FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          uVar3 = FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          uVar3 = FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          uVar3 = FUN_00d50b20();
        }
        if (cVar1 != '\0') goto LAB_00388c60;
      }
      else {
LAB_00388c60:
        local_78 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        FUN_0037b2b0();
      }
      FUN_00d50b20();
    }
    FUN_00115910();
    FUN_00d50b20();
    param_1 = (byte)local_78 & 1;
  }
  return plVar5 != (longlong *)0x0 & param_1;
}


