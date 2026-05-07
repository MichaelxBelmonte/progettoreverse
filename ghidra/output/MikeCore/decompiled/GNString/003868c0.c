// Function: FUN_003868c0
// Address: 003868c0
// Size: 1252 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00386d45) */
/* WARNING: Removing unreachable block (ram,0x00386d4e) */
/* WARNING: Removing unreachable block (ram,0x00386b17) */
/* WARNING: Removing unreachable block (ram,0x00386b20) */
/* WARNING: Removing unreachable block (ram,0x003869e1) */
/* WARNING: Removing unreachable block (ram,0x003869ea) */
/* WARNING: Removing unreachable block (ram,0x00386cc6) */
/* WARNING: Removing unreachable block (ram,0x00386ccf) */
/* WARNING: Removing unreachable block (ram,0x00386d69) */
/* WARNING: Removing unreachable block (ram,0x00386d75) */
/* WARNING: Removing unreachable block (ram,0x00386c17) */
/* WARNING: Removing unreachable block (ram,0x00386c40) */
/* WARNING: Removing unreachable block (ram,0x00386c19) */
/* WARNING: Removing unreachable block (ram,0x00386c42) */

undefined8 * FUN_003868c0(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_68;
  char local_60;
  int local_50;
  longlong local_40;
  char local_38;
  
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  if (*(longlong *)(unaff_RSI + 0x130) != 0) {
    FUN_01c0b7c0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00385ce0();
    local_68 = DAT_02704040;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
        local_68 = DAT_02704040;
      }
    }
    else {
      local_78 = '\0';
    }
    DAT_02704040 = local_68;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\0';
    FUN_00ca0840();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong **)(unaff_RSI + 0x118) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RSI + 0x118) + 0x388))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00385ce0();
    local_68 = DAT_02704048;
    if ((local_78 == '\0') && (local_80 != 0)) {
      FUN_00d50b00();
      local_68 = DAT_02704048;
    }
    DAT_02704048 = local_68;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\0';
    FUN_00ca0840();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0037ca50();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_00386b9b;
    }
  }
  else if (local_68 != 0) {
LAB_00386b9b:
    if (*(int *)(local_68 + 0xc) != 0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      local_50 = -1;
      while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
        FUN_00385ce0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00115910();
      lVar1 = DAT_02704050;
      if (DAT_02704050 != 0) {
        FUN_00d50b00();
      }
      FUN_00ca0840();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    *unaff_RDI = plVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return unaff_RDI;
  }
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


