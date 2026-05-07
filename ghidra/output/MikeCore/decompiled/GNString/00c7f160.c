// Function: FUN_00c7f160
// Address: 00c7f160
// Size: 919 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00c7f33d) */
/* WARNING: Removing unreachable block (ram,0x00c7f349) */
/* WARNING: Removing unreachable block (ram,0x00c7f3be) */
/* WARNING: Removing unreachable block (ram,0x00c7f3ca) */

void FUN_00c7f160(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  local_70 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  local_78 = lVar1;
  FUN_00d8dab0();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d64850();
  lVar1 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x18) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (*(longlong *)(unaff_RDI + 0x98) != 0) {
    *(undefined8 *)(unaff_RDI + 0x98) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x58) != 0) {
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    FUN_00d50b00();
    lVar1 = DAT_02785c58;
    if (DAT_02785c58 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_0277e650;
    if (local_48 != 0) {
      if (DAT_0277e650 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar1;
      local_38 = '\0';
      FUN_00ca0840();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = DAT_027f38c0;
    if (*unaff_RSI != 0) {
      if (DAT_027f38c0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar1;
      local_38 = '\0';
      FUN_00ca0840();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    lVar1 = DAT_02772650;
    if (DAT_02772650 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x58);
    local_50 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_80 = '\0';
    local_88 = plVar3;
    local_58 = lVar2;
    FUN_00d40470(&local_88,&local_58,3,3);
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}


