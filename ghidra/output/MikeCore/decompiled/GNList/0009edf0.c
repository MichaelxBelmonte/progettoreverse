// Function: FUN_0009edf0
// Address: 0009edf0
// Size: 642 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x0009efca) */
/* WARNING: Removing unreachable block (ram,0x0009efd3) */

void FUN_0009edf0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  if ((*(longlong *)(unaff_RSI + 0x78) != 0) && (*(longlong *)(unaff_RSI + 0x90) != 0)) {
    FUN_006c5b60();
    FUN_006c5ea0();
    lVar1 = DAT_026d8e58;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        lVar1 = DAT_026d8e58;
      }
    }
    else {
      local_40 = '\0';
    }
    DAT_026d8e58 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_30 = '\0';
    local_38 = lVar1;
    FUN_00ca0840(param_1,&local_38);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_006c5b60();
  FUN_006c5ea0();
  lVar1 = DAT_026d8e60;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
    lVar1 = DAT_026d8e60;
  }
  DAT_026d8e60 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_30 = '\0';
  local_38 = lVar1;
  FUN_00ca0840(param_1,&local_38);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RSI + 0xd8);
  if (lVar1 != 0) {
    FUN_00d50b00();
    lVar2 = DAT_026d8e68;
    if (DAT_026d8e68 != 0) {
      FUN_00d50b00();
    }
    local_38 = lVar2;
    local_30 = '\0';
    FUN_00ca0840(param_1,&local_38);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


