// Function: FUN_002de0f0
// Address: 002de0f0
// Size: 645 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x002de26c) */
/* WARNING: Removing unreachable block (ram,0x002de275) */
/* WARNING: Removing unreachable block (ram,0x002de283) */
/* WARNING: Removing unreachable block (ram,0x002de28f) */

int FUN_002de0f0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_01bcc520();
  plVar1 = local_38;
  if ((((local_30 == '\0') && (local_38 != (longlong *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01bf21a0();
  FUN_01d384c0();
  FUN_01e49090();
  uVar4 = (**(code **)(*plVar1 + 0x9a8))();
  FUN_01bcee20();
  plVar2 = local_38;
  if (((local_30 == '\0') && (local_38 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_30 != '\0' && (local_38 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  local_78 = plVar1;
  local_70 = '\0';
  FUN_002de5d0();
  local_58 = local_38;
  local_50 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  iVar3 = FUN_0007cb70(&local_58,&local_78,0,3);
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar3 == 0) {
    FUN_01c023b0();
  }
  else {
    (**(code **)(*plVar1 + 0x930))();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    local_60 = '\0';
    local_68 = 0;
    FUN_01c025c0(uVar4,&local_68,0);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return iVar3;
}


