// Function: FUN_0008a6e0
// Address: 0008a6e0
// Size: 1963 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"
//   "MDEditorViewController"


/* WARNING: Removing unreachable block (ram,0x0008ad2f) */
/* WARNING: Removing unreachable block (ram,0x0008acd7) */
/* WARNING: Removing unreachable block (ram,0x0008adb2) */
/* WARNING: Removing unreachable block (ram,0x0008ada9) */
/* WARNING: Removing unreachable block (ram,0x0008ace3) */
/* WARNING: Removing unreachable block (ram,0x0008ad3b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008a6e0(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  longlong **pplVar6;
  longlong *unaff_RDI;
  longlong *plVar7;
  bool bVar8;
  longlong *local_78;
  longlong *local_60;
  char local_58;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_RDI[0x14] == 0) {
    return;
  }
  FUN_01e561b0();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    return;
  }
  FUN_01e561b0();
  FUN_01d8b220();
  local_78 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (longlong *)0x0) {
      local_78 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 == (longlong *)0x0) goto LAB_0008ae71;
  FUN_000914a0();
  (**(code **)(*local_78 + 0x360))();
  cVar2 = FUN_00e85ea0();
  plVar7 = local_78;
  if (cVar2 == '\0') {
    plVar7 = DAT_02802688;
  }
  if (plVar7 == (longlong *)0x0) {
    FUN_00d50b00();
    local_38[0] = '\0';
    local_60 = unaff_RDI;
    do {
      plVar7 = local_60;
      (**(code **)(*local_60 + 0x370))();
      if (local_48 == plVar7) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_0008aa47;
        }
      }
      else {
        local_60 = local_48;
        plVar7 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar5 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar5 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_0008aa47:
          local_38[0] = '\x01';
          pcVar5 = local_40;
        }
        *pcVar5 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
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
      pplVar6 = &DAT_02802688;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_60;
        if (cVar2 == '\0') {
          pplVar6 = &DAT_02802688;
        }
      }
      plVar7 = local_60;
      if (*pplVar6 != (longlong *)0x0) {
        if ((local_38[0] == '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_0008abe9;
      }
    } while (local_60 != (longlong *)0x0);
    plVar7 = (longlong *)0x0;
LAB_0008abe9:
    FUN_00d50b20();
    if (plVar7 == (longlong *)0x0) goto LAB_0008ac33;
    FUN_0063f230();
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      bVar8 = false;
    }
    else {
      bVar8 = true;
      plVar7 = local_48;
      if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
LAB_0008ac49:
    if (plVar7 == (longlong *)0x0) goto LAB_0008ad61;
    uVar3 = FUN_00212c70();
    *(undefined1 *)(unaff_RDI + 0x26) = uVar3;
    FUN_0021e4e0();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == (longlong *)0x0) {
      bVar1 = false;
      goto LAB_0008ad72;
    }
    FUN_01d7d080();
    FUN_01cef3b0();
    FUN_01d7ac40();
    FUN_01d778e0();
    (**(code **)(*(longlong *)unaff_RDI[0x14] + 0x918))();
    bVar1 = false;
  }
  else {
    local_38[0] = '\0';
    local_60 = local_78;
    do {
      plVar7 = local_60;
      (**(code **)(*local_60 + 0x370))();
      if (local_48 == plVar7) {
        if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
          local_38[0] = '\x01';
          goto LAB_0008a837;
        }
      }
      else {
        local_60 = local_48;
        plVar7 = local_48;
        if (local_40[0] == '\0') {
          if (local_38[0] == '\0') {
            pcVar5 = local_38;
          }
          else {
            FUN_00d50b20();
            pcVar5 = local_38;
          }
        }
        else {
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
          local_38[0] = '\x01';
LAB_0008a837:
          local_38[0] = '\x01';
          pcVar5 = local_40;
        }
        *pcVar5 = '\0';
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((DAT_026f7020 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_0270aa58 = FUN_00015ff0();
        _DAT_0270aa40 = "MDEditorViewController";
        _DAT_0270aa48 = 0x1e8;
        _DAT_0270aa50 = FUN_00074eb0;
        _DAT_0270aa60 = 0;
        uRam000000000270aa68 = 0;
        _DAT_0270aa70 = 0;
        _DAT_0270aae8 = 0;
        uRam000000000270aaf0 = 0;
        _DAT_0270aaf8 = 0;
        DAT_0270aafa = 1;
        _DAT_0270aa78 = 0;
        uRam000000000270aa80 = 0;
        _DAT_0270aa88 = 0;
        uRam000000000270aa90 = 0;
        _DAT_0270aa98 = 0;
        uRam000000000270aaa0 = 0;
        _DAT_0270aaa8 = 0;
        uRam000000000270aab0 = 0;
        _DAT_0270aab8 = 0;
        uRam000000000270aac0 = 0;
        _DAT_0270aac8 = 0;
        uRam000000000270aad0 = 0;
        _DAT_0270aad8 = 0;
        uRam000000000270aae0 = 0;
        DAT_0270ab03 = 0;
        _DAT_0270aafb = 0;
        ___cxa_guard_release();
      }
      pplVar6 = &DAT_02802688;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_60;
        if (cVar2 == '\0') {
          pplVar6 = &DAT_02802688;
        }
      }
      plVar7 = local_60;
      if (*pplVar6 != (longlong *)0x0) {
        if ((local_38[0] == '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        bVar8 = plVar7 != (longlong *)0x0;
        goto LAB_0008ac49;
      }
    } while (local_60 != (longlong *)0x0);
LAB_0008ac33:
    bVar8 = false;
LAB_0008ad61:
    *(undefined1 *)(unaff_RDI + 0x26) = 0;
    bVar1 = true;
LAB_0008ad72:
    FUN_01d7d080();
    FUN_01cef3b0();
    FUN_01d7ac40();
    (**(code **)(*(longlong *)unaff_RDI[0x14] + 0x6f0))();
    if (local_40[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    FUN_01d778e0();
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)unaff_RDI[0x14] + 0x918))();
  }
  if ((bVar8) && (!bVar1)) {
    FUN_00d50b20();
  }
LAB_0008ae71:
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


