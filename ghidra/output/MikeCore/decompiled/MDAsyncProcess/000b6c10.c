// Function: FUN_000b6c10
// Address: 000b6c10
// Size: 665 bytes
// Class: MDAsyncProcess
// String references:
//   "%@Insp2.gnui"


/* WARNING: Removing unreachable block (ram,0x000b6ce8) */
/* WARNING: Removing unreachable block (ram,0x000b6cf1) */

void FUN_000b6c10(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong **pplVar7;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = *unaff_RSI;
  local_58 = 1;
  local_60 = &DAT_024c5048;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  pplVar7 = &local_60;
  local_50 = lVar1;
  FUN_00d8cb40(param_1,pplVar7);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  local_68 = '\0';
  FUN_01e51a60(param_1,&local_70);
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_60 = (longlong *)0x0;
      local_58 = CONCAT31(local_58._1_3_,1);
      plVar6 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      local_60 = plVar6;
      local_58 = CONCAT31(local_58._1_3_,1);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_40;
    local_58 = CONCAT31(local_58._1_3_,1);
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00018750();
  if (plVar6 == (longlong *)0x0) {
LAB_000b6d1f:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_000b6d1f;
  }
  plVar2 = *pplVar7;
  cVar5 = *(char *)(pplVar7 + 1);
  if ((cVar5 == '\0') || (plVar2 == (longlong *)0x0)) {
    if (plVar2 == (longlong *)0x0) {
      bVar3 = true;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x000b6e8a;
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01f02570();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar2 + 0x5c8))();
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x5c8))();
    FUN_00d8c7a0();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  bVar3 = false;
  *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x000b6e8a:
  if ((cVar5 == '\0') && (!bVar3)) {
    FUN_00d50b00();
  }
  *unaff_RDI = (longlong)plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


