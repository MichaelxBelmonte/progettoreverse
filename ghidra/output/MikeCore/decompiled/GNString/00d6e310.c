// Function: FUN_00d6e310
// Address: 00d6e310
// Size: 1209 bytes
// Class: GNString
// String references:
//   "Cannot read preferences."
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x00d6e369) */
/* WARNING: Removing unreachable block (ram,0x00d6e375) */
/* WARNING: Removing unreachable block (ram,0x00d6e5bb) */
/* WARNING: Removing unreachable block (ram,0x00d6e5c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d6e310(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *unaff_RDI;
  longlong **pplVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong *local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  FUN_00c8e830();
  plVar7 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (plVar7 == (longlong *)0x0) {
    cVar4 = FUN_00ce6e30();
    if ((cVar4 != '\0') && (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x398))(), cVar4 != '\0'))
    {
      FUN_00e828a0();
    }
    *unaff_RDI = 0;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    FUN_00c92170();
    (**(code **)(*(longlong *)*param_2 + 0x380))();
    plVar3 = local_40;
    lVar2 = DAT_0277e5e0;
    if (DAT_0277e5e0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar3 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      uVar8 = FUN_00d72350();
      plVar3 = local_40;
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        uVar8 = FUN_00d50b00();
      }
      local_70 = plVar7;
      local_68 = '\0';
      (**(code **)(*plVar3 + 0x5f8))(uVar8,&local_70);
      plVar7 = local_40;
      if ((DAT_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 != '\0') {
          if ((DAT_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
          cVar4 = FUN_00e8db60();
          pplVar6 = &local_40;
          if (cVar4 == '\0') {
            pplVar6 = (longlong **)&DAT_02802688;
          }
        }
      }
      plVar7 = *pplVar6;
      if (plVar7 == (longlong *)0x0) {
        bVar1 = false;
        plVar7 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar6 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar6 + 1) = 0;
        }
        bVar1 = true;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00ca9940();
      plVar7 = local_40;
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        bVar1 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar1 = true;
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((!bVar1) && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return;
}


