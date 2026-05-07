// Function: FUN_00c8f220
// Address: 00c8f220
// Size: 526 bytes
// Class: Unknown


void FUN_00c8f220(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  int local_34;
  
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x378))();
  lVar2 = DAT_027815b0;
  if (cVar4 == '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
    if (*(int *)(unaff_RDI + 0x20) != 0) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
                    /* WARNING: Could not recover jumptable at 0x00c8f42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*unaff_RSI + 0x410))();
    return;
  }
  local_34 = *(int *)(unaff_RDI + 0x18);
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027815b0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x498))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027815c8;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027815c8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x488))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027726e8;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027726e8 != 0) {
    FUN_00d50b00();
  }
  iVar3 = local_34;
  (**(code **)(*plVar1 + 0x498))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027648d0;
  if (iVar3 != 0) {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027648d0 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar2;
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0x500))(&local_58,local_34);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027815b8;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027815b8 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  (**(code **)(*plVar1 + 0x498))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}


