// Function: FUN_00b70e10
// Address: 00b70e10
// Size: 706 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b70f67) */
/* WARNING: Removing unreachable block (ram,0x00b70f73) */
/* WARNING: Removing unreachable block (ram,0x00b70ef8) */
/* WARNING: Removing unreachable block (ram,0x00b70f01) */
/* WARNING: Removing unreachable block (ram,0x00b70fa2) */
/* WARNING: Removing unreachable block (ram,0x00b70fab) */

void FUN_00b70e10(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong *local_40;
  char local_38;
  
  if (*(char *)(unaff_RDI + 0x29) == '\0') {
    plVar5 = (longlong *)*unaff_RSI;
    if (plVar5 != (longlong *)0x0) {
      cVar6 = (char)unaff_RSI[1];
      if (cVar6 != '\0') {
        FUN_00d50b00();
      }
      goto LAB_00b70f82;
    }
  }
  else {
    FUN_00b5b3a0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      FUN_00b5b3a0();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00d214d0();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      plVar5 = (longlong *)FUN_007af310();
      (**(code **)(*plVar5 + 0x18))();
      FUN_00b5beb0();
      FUN_00b5a660();
      cVar6 = '\x01';
      FUN_00d50b20();
LAB_00b70f82:
      local_38 = '\0';
      FUN_00e325c0();
      bVar3 = false;
      bVar2 = false;
      cVar1 = *(char *)(unaff_RDI + 0x28);
      goto joined_r0x00b70fd2;
    }
  }
  bVar3 = true;
  bVar2 = true;
  cVar6 = '\0';
  cVar1 = *(char *)(unaff_RDI + 0x28);
  plVar5 = local_40;
joined_r0x00b70fd2:
  if (cVar1 != '\0') {
    FUN_00d403d0();
    FUN_00b70b60();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_88 = 0;
    local_80 = '\0';
    FUN_00d40470(&local_88,&stack0xffffffffffffff88,1,3);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    bVar2 = bVar3;
    if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (cVar6 != '\0' && !bVar2) {
    FUN_00d50b20();
  }
  return;
}


