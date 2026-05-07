// Function: FUN_0036c630
// Address: 0036c630
// Size: 1814 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "MDMetaDocumentController"


/* WARNING: Removing unreachable block (ram,0x0036c81a) */
/* WARNING: Removing unreachable block (ram,0x0036c81f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0036c630(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  bool *pbVar5;
  longlong **pplVar6;
  longlong **pplVar7;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  bool bVar9;
  longlong local_78;
  char local_70;
  longlong *local_68;
  bool local_60 [8];
  longlong *local_58;
  bool local_50 [16];
  char local_40 [8];
  longlong *local_38;
  
  FUN_01f30290();
  plVar8 = local_58;
  if ((local_50[0] != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) goto LAB_0036cacc;
  FUN_01f30290();
  pplVar7 = &local_58;
  FUN_01e5c650();
  plVar8 = local_58;
  if ((DAT_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026e0ab8 = FUN_00015ff0();
    _DAT_026e0aa0 = "MDMetaWindowController";
    _DAT_026e0aa8 = 0x198;
    _DAT_026e0ab0 = FUN_0006dea0;
    _DAT_026e0ac0 = 0;
    uRam00000000026e0ac8 = 0;
    _DAT_026e0ad0 = 0;
    _DAT_026e0b48 = 0;
    uRam00000000026e0b50 = 0;
    _DAT_026e0b58 = 0;
    DAT_026e0b5a = 1;
    _DAT_026e0ad8 = 0;
    uRam00000000026e0ae0 = 0;
    _DAT_026e0ae8 = 0;
    uRam00000000026e0af0 = 0;
    _DAT_026e0af8 = 0;
    uRam00000000026e0b00 = 0;
    _DAT_026e0b08 = 0;
    uRam00000000026e0b10 = 0;
    _DAT_026e0b18 = 0;
    uRam00000000026e0b20 = 0;
    _DAT_026e0b28 = 0;
    uRam00000000026e0b30 = 0;
    _DAT_026e0b38 = 0;
    uRam00000000026e0b40 = 0;
    DAT_026e0b63 = 0;
    _DAT_026e0b5b = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (longlong *)0x0) {
LAB_0036c6c2:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0036c6c2;
  }
  plVar8 = *pplVar7;
  local_40[0] = *(char *)(pplVar7 + 1);
  pplVar7 = pplVar7 + 1;
  if (local_40[0] == '\0') {
    pplVar7 = (longlong **)(local_50 + 0x10);
  }
  *(undefined1 *)pplVar7 = 0;
  if ((local_50[0] != false) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != false) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    pplVar7 = &local_68;
    FUN_01f30840();
    if (local_68 == (longlong *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01f30840();
      FUN_00d23310();
      plVar1 = local_58;
      pbVar5 = local_50 + 0x18;
      if (local_50[0] != false) {
        pbVar5 = local_50;
      }
      local_38._0_1_ = local_50[0];
      *pbVar5 = false;
      if ((local_50[0] != false) && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar9 = plVar1 != (longlong *)0x0;
      if (((char)local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60[0] != false) && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      FUN_01f30840();
      FUN_00d23310();
      plVar1 = local_58;
      bVar9 = local_50[0] == false;
      local_68 = local_58;
      if (bVar9) {
        local_60[0] = false;
      }
      else {
        local_60[0] = true;
        local_50[0] = false;
      }
      local_60[0] = !bVar9;
      if ((DAT_026fbe40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_0271be08 = FUN_000838a0();
        _DAT_0271bdf0 = "MDMetaDocumentController";
        _DAT_0271bdf8 = 0x60;
        _DAT_0271be00 = FUN_002a0ad0;
        _DAT_0271be10 = 0;
        uRam000000000271be18 = 0;
        _DAT_0271be20 = 0;
        _DAT_0271be98 = 0;
        uRam000000000271bea0 = 0;
        _DAT_0271bea8 = 0;
        DAT_0271beaa = 1;
        _DAT_0271be28 = 0;
        uRam000000000271be30 = 0;
        _DAT_0271be38 = 0;
        uRam000000000271be40 = 0;
        _DAT_0271be48 = 0;
        uRam000000000271be50 = 0;
        _DAT_0271be58 = 0;
        uRam000000000271be60 = 0;
        _DAT_0271be68 = 0;
        uRam000000000271be70 = 0;
        _DAT_0271be78 = 0;
        uRam000000000271be80 = 0;
        _DAT_0271be88 = 0;
        uRam000000000271be90 = 0;
        DAT_0271beb3 = 0;
        _DAT_0271beab = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (longlong *)0x0) {
LAB_0036c859:
        pplVar7 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_0036c859;
      }
      plVar1 = *pplVar7;
      local_38._0_1_ = *(char *)(pplVar7 + 1);
      pplVar6 = (longlong **)(local_50 + 0x18);
      if ((char)local_38 != '\0') {
        pplVar6 = pplVar7 + 1;
      }
      *(undefined1 *)pplVar6 = 0;
      if ((local_60[0] != false) && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        pplVar7 = &local_68;
        (**(code **)(*plVar1 + 0x4a0))();
        if (local_68 == (longlong *)0x0) {
          bVar9 = false;
        }
        else {
          (**(code **)(*plVar1 + 0x4a0))();
          FUN_00d23310();
          plVar2 = local_58;
          pbVar5 = local_50 + 8;
          if (local_50[0] != false) {
            pbVar5 = local_50;
          }
          local_50[8] = local_50[0];
          *pbVar5 = false;
          if ((local_50[0] != false) && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          bVar9 = plVar2 != (longlong *)0x0;
          if ((local_50[8] != false) && (plVar2 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60[0] != false) && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar9) {
          (**(code **)(*plVar1 + 0x4a0))();
          FUN_00d23310();
          plVar1 = local_58;
          local_60[0] = false;
          local_68 = local_58;
          if (local_50[0] == false) {
            pbVar5 = local_60;
          }
          else {
            pbVar5 = local_50;
            local_60[0] = true;
          }
          local_60[0] = local_50[0] != false;
          *pbVar5 = false;
          if ((local_50[0] != false) && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((DAT_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            _DAT_026e0ab8 = FUN_00015ff0();
            _DAT_026e0aa0 = "MDMetaWindowController";
            _DAT_026e0aa8 = 0x198;
            _DAT_026e0ab0 = FUN_0006dea0;
            _DAT_026e0ac0 = 0;
            uRam00000000026e0ac8 = 0;
            _DAT_026e0ad0 = 0;
            _DAT_026e0b48 = 0;
            uRam00000000026e0b50 = 0;
            _DAT_026e0b58 = 0;
            DAT_026e0b5a = 1;
            _DAT_026e0ad8 = 0;
            uRam00000000026e0ae0 = 0;
            _DAT_026e0ae8 = 0;
            uRam00000000026e0af0 = 0;
            _DAT_026e0af8 = 0;
            uRam00000000026e0b00 = 0;
            _DAT_026e0b08 = 0;
            uRam00000000026e0b10 = 0;
            _DAT_026e0b18 = 0;
            uRam00000000026e0b20 = 0;
            _DAT_026e0b28 = 0;
            uRam00000000026e0b30 = 0;
            _DAT_026e0b38 = 0;
            uRam00000000026e0b40 = 0;
            DAT_026e0b63 = 0;
            _DAT_026e0b5b = 0;
            ___cxa_guard_release();
          }
          if (plVar1 == (longlong *)0x0) {
LAB_0036c9eb:
            pplVar7 = (longlong **)&DAT_02802688;
          }
          else {
            (**(code **)(*plVar1 + 0x360))();
            cVar3 = FUN_00e85ea0();
            if (cVar3 == '\0') goto LAB_0036c9eb;
          }
          plVar1 = *pplVar7;
          if (plVar1 != (longlong *)0x0) {
            pplVar6 = (longlong **)(local_50 + 0x10);
            if (*(char *)(pplVar7 + 1) != '\0') {
              local_40[0] = '\x01';
              pplVar6 = pplVar7 + 1;
            }
            *(char *)pplVar6 = '\0';
            plVar8 = plVar1;
          }
          if ((local_60[0] != false) && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((char)local_38 != '\0') {
          FUN_00d50b20();
        }
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x5e0))();
    plVar1 = local_58;
    if ((local_50[0] != false) && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x5e0))();
      FUN_00756eb0();
      if ((local_50[0] != false) && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40[0] == '\0') {
        return;
      }
      FUN_00d50b20();
      return;
    }
    if (local_40[0] != '\0') {
      FUN_00d50b20();
    }
  }
LAB_0036cacc:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


