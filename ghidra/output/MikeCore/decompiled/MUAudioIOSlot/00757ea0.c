// Function: FUN_00757ea0
// Address: 00757ea0
// Size: 1102 bytes
// Class: MUAudioIOSlot


/* WARNING: Removing unreachable block (ram,0x00757fcb) */
/* WARNING: Removing unreachable block (ram,0x00758093) */
/* WARNING: Removing unreachable block (ram,0x00757f93) */
/* WARNING: Removing unreachable block (ram,0x00757f9c) */
/* WARNING: Removing unreachable block (ram,0x007580f8) */
/* WARNING: Removing unreachable block (ram,0x00758101) */
/* WARNING: Removing unreachable block (ram,0x00758147) */
/* WARNING: Removing unreachable block (ram,0x00758170) */
/* WARNING: Removing unreachable block (ram,0x00757fd0) */
/* WARNING: Removing unreachable block (ram,0x00757ff0) */
/* WARNING: Removing unreachable block (ram,0x00757fd2) */
/* WARNING: Removing unreachable block (ram,0x00757ff2) */
/* WARNING: Removing unreachable block (ram,0x00758149) */
/* WARNING: Removing unreachable block (ram,0x00758172) */

void FUN_00757ea0(void)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar5;
  longlong local_78;
  char local_70;
  longlong *local_58;
  char local_50;
  int local_40;
  
  if (*unaff_RSI == 0) {
    FUN_00751820();
    return;
  }
  plVar1 = (longlong *)unaff_RDI[0xe];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_003235a0();
  plVar5 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = DAT_02802688;
    FUN_00d50b20();
    if (cVar3 != '\0') {
      plVar5 = plVar1;
    }
  }
  if (plVar5 != (longlong *)0x0) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x610))();
  if (local_50 == '\0') {
    if (plVar1 == (longlong *)0x0) goto LAB_0075807c;
    FUN_00d50b00();
LAB_00757fa1:
    local_58 = (longlong *)0x0;
    local_40 = -1;
    do {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((longlong)plVar1 + 0xc) <= local_40) goto LAB_00758099;
      plVar5 = *(longlong **)(plVar1[2] + 8 + lVar4 * 8);
      FUN_006f47d0();
      lVar4 = unaff_RDI[0xe];
      if (lVar4 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      local_58 = plVar5;
    } while (local_78 != lVar4);
    if (plVar5 == (longlong *)0x0) {
LAB_00758099:
      bVar2 = false;
      plVar5 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      bVar2 = true;
    }
    local_50 = '\0';
    FUN_000e3600();
    FUN_00d50b20();
  }
  else {
    if (plVar1 != (longlong *)0x0) goto LAB_00757fa1;
LAB_0075807c:
    plVar5 = (longlong *)0x0;
    bVar2 = false;
    local_58 = plVar1;
  }
  plVar1 = local_58;
  (**(code **)(*unaff_RDI + 0x610))();
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_0075827b;
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) goto LAB_0075827b;
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  local_40 = -1;
  while( true ) {
    lVar4 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((longlong)plVar1 + 0xc) <= local_40) break;
    local_58 = *(longlong **)(plVar1[2] + 8 + lVar4 * 8);
    FUN_00d50b00();
    FUN_003193e0();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    FUN_007105f0();
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_000e3600();
  FUN_00d50b20();
LAB_0075827b:
  if (plVar5 != (longlong *)0x0) {
    FUN_006f47d0();
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00751820();
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar2) {
      FUN_00d50b20();
    }
  }
  return;
}


