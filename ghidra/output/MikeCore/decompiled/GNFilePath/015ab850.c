// Function: FUN_015ab850
// Address: 015ab850
// Size: 527 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x015ab8d8) */
/* WARNING: Removing unreachable block (ram,0x015ab8e1) */
/* WARNING: Removing unreachable block (ram,0x015ab97b) */
/* WARNING: Removing unreachable block (ram,0x015ab984) */

void FUN_015ab850(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar5 = *param_2;
  lVar1 = *(longlong *)(unaff_RSI + 0x18);
  if (lVar1 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RSI + 0x18) = lVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_000649c0();
  (**(code **)(*plVar4 + 0x18))();
  cVar3 = (**(code **)(*plVar4 + 0x620))();
  lVar5 = DAT_027c79d8;
  if (cVar3 == '\0') {
    FUN_00c8e830();
    lVar5 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar5 == 0) {
      bVar2 = false;
      lVar5 = 0;
    }
    else {
      FUN_00c92170();
      bVar2 = true;
    }
  }
  else {
    if (DAT_027c79d8 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar5;
    local_58 = '\x01';
    local_50 = *param_2;
    local_48 = '\0';
    (**(code **)(*plVar4 + 0x648))(&local_50,&local_60);
    lVar5 = local_40;
    if (local_40 == 0) {
      bVar2 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar2 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0159bec0();
  if ((bVar2) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


