// Function: FUN_0048b760
// Address: 0048b760
// Size: 559 bytes
// Class: MDMetaWindowController


void FUN_0048b760(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined4 uVar3;
  longlong local_60;
  char local_58;
  undefined4 local_4c;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  local_4c = param_1;
  (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x928))();
  FUN_01b9e1d0();
  uVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x158) + 0x998))();
  lVar2 = DAT_027087d0;
  plVar1 = *(longlong **)(unaff_RDI + 0x158);
  if (unaff_ESI != 1) {
    if (DAT_027087d0 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_01e57260(uVar3,&local_60);
    local_38 = local_48;
    local_30 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_30 = '\x01';
    (**(code **)(*plVar1 + 0x958))();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x148) + 0x998))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x128) + 0x998))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x140) + 0x998))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x120) + 0x998))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x260) + 0x998))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x268) + 0x998))();
    return;
  }
  (**(code **)(*plVar1 + 0x928))(local_4c);
  (**(code **)(**(longlong **)(unaff_RDI + 0x148) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x128) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x140) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x120) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x260) + 0x998))();
                    /* WARNING: Could not recover jumptable at 0x0048b853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(unaff_RDI + 0x268) + 0x998))();
  return;
}


