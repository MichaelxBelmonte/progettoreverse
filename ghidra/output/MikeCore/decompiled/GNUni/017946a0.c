// Function: FUN_017946a0
// Address: 017946a0
// Size: 592 bytes
// Class: GNUni


void FUN_017946a0(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong unaff_RDI;
  bool bVar7;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  plVar5 = *(longlong **)(unaff_RDI + 0x60);
  if (plVar5 != (longlong *)0x0) goto LAB_017948d5;
  if (DAT_028adeb8 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00039550();
    (**(code **)(*plVar5 + 0x18))();
    if (DAT_028adeb8 == plVar5) {
      bVar4 = false;
      bVar3 = false;
    }
    else {
      bVar4 = true;
      bVar3 = true;
      bVar7 = DAT_028adeb8 != (longlong *)0x0;
      DAT_028adeb8 = plVar5;
      if (bVar7) {
        FUN_00d50b20();
      }
    }
    if (DAT_028adec0 == '\0') {
      DAT_028adec0 = '\x01';
      FUN_00e8cb90();
      bVar3 = bVar4;
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
  }
  plVar5 = DAT_028adeb8;
  local_38 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = lVar1;
  (**(code **)(*plVar5 + 0x3a0))();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027cf090;
  if (DAT_027cf090 != 0) {
    FUN_00d50b00();
  }
  local_70 = 0;
  local_68 = '\0';
  local_60 = 0;
  local_58 = '\0';
  FUN_01e4fcf0(&local_60,&local_70);
  lVar2 = *(longlong *)(unaff_RDI + 0x60);
  lVar6 = lVar2;
  if (lVar2 != local_30) {
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar6 = 0;
        goto LAB_017947e1;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x60);
      *(longlong *)(unaff_RDI + 0x60) = local_30;
      lVar6 = local_30;
    }
    else {
      local_28 = '\0';
      lVar6 = local_30;
LAB_017947e1:
      *(longlong *)(unaff_RDI + 0x60) = lVar6;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar6 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01e56bb0();
  local_48 = 0;
  local_50 = *(longlong *)(unaff_RDI + 0x10);
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  FUN_01d2a770();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = *(longlong **)(unaff_RDI + 0x60);
LAB_017948d5:
  (**(code **)(*plVar5 + 0x460))();
  return;
}


