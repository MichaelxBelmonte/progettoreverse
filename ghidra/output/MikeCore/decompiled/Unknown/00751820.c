// Function: FUN_00751820
// Address: 00751820
// Size: 664 bytes
// Class: Unknown


void FUN_00751820(void)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar6;
  bool bVar7;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x70);
  if (lVar1 == *unaff_RSI) {
    return;
  }
  if (lVar1 == 0) {
LAB_007518b6:
    plVar6 = (longlong *)0x0;
    local_58 = 0;
    bVar2 = false;
    local_50 = 0;
    plVar5 = (longlong *)*unaff_RSI;
    if (plVar5 == (longlong *)0x0) goto joined_r0x00751a84;
  }
  else {
    FUN_00d50b00();
    if (*(longlong **)(unaff_RDI + 0x70) == (longlong *)0x0) goto LAB_007518b6;
    bVar2 = *unaff_RSI != 0;
    if (*unaff_RSI == 0) {
      local_58 = 0;
      local_50 = 0;
      plVar6 = *(longlong **)(unaff_RDI + 0x90);
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x3f8))();
      local_58 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x408))();
      local_50 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x418))();
      plVar6 = *(longlong **)(unaff_RDI + 0x90);
    }
    if (((plVar6 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar6 + 0x390))(), cVar4 != '\0'))
       && (cVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x5e8))(), cVar4 != '\0')) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x390))();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x478))();
    plVar6 = *(longlong **)(unaff_RDI + 0x70);
    plVar5 = (longlong *)*unaff_RSI;
    if (plVar6 == plVar5) goto joined_r0x00751a84;
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  *(longlong **)(unaff_RDI + 0x70) = plVar5;
  bVar7 = plVar6 != (longlong *)0x0;
  plVar6 = plVar5;
  if (bVar7) {
    FUN_00d50b20();
    plVar6 = *(longlong **)(unaff_RDI + 0x70);
  }
joined_r0x00751a84:
  if (plVar6 != (longlong *)0x0) {
    if (bVar2) {
      (**(code **)(*plVar6 + 0x400))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x428))(local_58,local_50);
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x470))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x4a8))();
    FUN_00d403d0();
    lVar3 = DAT_026d88d0;
    if (DAT_026d88d0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_68 = 0;
    local_60 = '\0';
    FUN_00d40470(&local_68,&stack0xffffffffffffffb8,1,3);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    if (*(longlong **)(unaff_RDI + 0x70) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x4b0))();
    }
    FUN_00d50b20();
  }
  return;
}


