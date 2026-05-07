// Function: FUN_00090780
// Address: 00090780
// Size: 549 bytes
// Class: MDMetaWindowController


void FUN_00090780(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  if ((longlong *)*unaff_RSI == *(longlong **)(unaff_RDI + 0x88)) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x960))();
    if (local_40 == 0) {
      cVar3 = '\0';
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x960))();
      lVar2 = DAT_026fce10;
      if (DAT_026fce10 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*local_30 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_026d8940;
    if (cVar3 != '\0') {
      plVar1 = *(longlong **)(unaff_RDI + 0x88);
      if (DAT_026d8940 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if ((longlong *)*unaff_RSI == *(longlong **)(unaff_RDI + 0x98)) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x960))();
    if (local_40 == 0) {
      cVar3 = '\0';
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x960))();
      lVar2 = DAT_026fce10;
      if (DAT_026fce10 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*local_30 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_026d8948;
    if (cVar3 != '\0') {
      plVar1 = *(longlong **)(unaff_RDI + 0x98);
      if (DAT_026d8948 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


