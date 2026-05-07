// Function: FUN_0060faa0
// Address: 0060faa0
// Size: 1438 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "GNList"


/* WARNING: Removing unreachable block (ram,0x0060fb67) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0060faa0(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong *unaff_RDI;
  longlong **pplVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  double local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  local_70 = (double)FUN_00e7d6f0();
  FUN_01d384c0();
  uVar7 = FUN_01e49090();
  dVar9 = local_70;
  if (((((float)uVar7 == (float)DAT_0280a620) &&
       (dVar9 = local_70, !NAN((float)uVar7) && !NAN((float)DAT_0280a620))) &&
      (dVar9 = local_70,
      (float)((ulonglong)DAT_0280a620 >> 0x20) == (float)((ulonglong)uVar7 >> 0x20))) &&
     (dVar8 = local_70 - DAT_0280a618, dVar9 = DAT_0280a618, uVar7 = DAT_0280a620,
     DAT_023934c8 < dVar8)) {
    FUN_01d384c0();
    uVar6 = FUN_01e49090();
    if (unaff_RDI[0x32] != 0) {
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = unaff_RDI[0x32];
      while( true ) {
        lVar3 = (longlong)(int)local_50;
        iVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar4);
        if (*(int *)(local_58 + 0xc) <= iVar4) break;
        local_68 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar3 * 8);
        FUN_003a4d40();
        dVar9 = (double)(**(code **)(*unaff_RDI + 0xae0))();
        cVar2 = FUN_00d05410(uVar6,dVar9,dVar8);
        if (cVar2 != '\0') {
          if ((local_68 != (longlong *)unaff_RDI[0x33]) &&
             (plVar1 = (longlong *)unaff_RDI[0x40], plVar1 != (longlong *)0x0)) {
            local_40 = local_68;
            local_38 = '\0';
            FUN_00d237a0();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*plVar1 + 0x18))();
          }
          if (unaff_RDI[0x35] != 0) {
            FUN_003a4d40();
            (**(code **)(*unaff_RDI + 0xae0))();
            (**(code **)(*unaff_RDI + 0x618))();
            if (unaff_RDI[0x35] != 0) {
              unaff_RDI[0x35] = 0;
              FUN_00d50b20();
            }
          }
          if (unaff_RDI[0x36] != 0) {
            FUN_003a4d40();
            (**(code **)(*unaff_RDI + 0xae0))();
            (**(code **)(*unaff_RDI + 0x618))();
            if (unaff_RDI[0x36] != 0) {
              unaff_RDI[0x36] = 0;
              FUN_00d50b20();
            }
          }
          if (unaff_RDI[0x34] != 0) {
            FUN_003a4d40();
            (**(code **)(*unaff_RDI + 0xae0))();
            (**(code **)(*unaff_RDI + 0x618))();
            if (unaff_RDI[0x34] != 0) {
              unaff_RDI[0x34] = 0;
              FUN_00d50b20();
            }
          }
          break;
        }
        dVar8 = dVar9;
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar4 = -local_50._4_4_;
          }
          else {
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar4 = 0;
          }
          local_50 = CONCAT44(iVar4,(int)local_50);
          dVar8 = dVar9;
        }
      }
      FUN_006106b0();
    }
    dVar9 = local_70 + DAT_0238fee8;
    uVar7 = DAT_0280a620;
  }
  DAT_0280a620 = uVar7;
  DAT_0280a618 = dVar9;
  uVar6 = FUN_01d384d0();
  local_90 = DAT_026fcec0;
  if (DAT_026fcec0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_01cac990(uVar6,&local_90);
  plVar1 = local_68;
  if ((DAT_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
      cVar2 = FUN_00e8da30();
      pplVar5 = &local_68;
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
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if ((longlong *)unaff_RDI[0x40] != (longlong *)0x0) {
    local_78 = '\0';
    local_80 = plVar1;
    cVar2 = (**(code **)(*(longlong *)unaff_RDI[0x40] + 0x48))();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar7 = 1;
    if (cVar2 != '\0') goto LAB_0060fe99;
  }
  uVar7 = 0;
LAB_0060fe99:
  FUN_00d50b20();
  return uVar7;
}


