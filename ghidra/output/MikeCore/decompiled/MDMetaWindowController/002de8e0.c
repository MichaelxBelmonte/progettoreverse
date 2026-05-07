// Function: FUN_002de8e0
// Address: 002de8e0
// Size: 561 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x002deac7) */
/* WARNING: Removing unreachable block (ram,0x002dead0) */
/* WARNING: Removing unreachable block (ram,0x002deadb) */
/* WARNING: Removing unreachable block (ram,0x002deae4) */

undefined4 FUN_002de8e0(void)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01bcc520();
  local_48 = local_40;
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      goto LAB_002de915;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
      local_48 = plVar1;
      goto LAB_002de915;
    }
  }
LAB_002de915:
  FUN_01d384c0();
  FUN_01e49090();
  uVar4 = (**(code **)(*local_48 + 0x9a8))();
  FUN_01bcee20();
  uVar2 = FUN_01c03aa0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01bcee20();
  FUN_01c023b0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01bf21a0();
  FUN_000829c0();
  (**(code **)(*local_48 + 0x360))();
  FUN_00e85ea0();
  local_68 = 0;
  local_60 = '\0';
  FUN_002de5d0();
  local_58 = local_40;
  local_50 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_50 = '\x01';
  uVar3 = FUN_0007a0d0(uVar4,&local_68,uVar2,3);
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar3;
}


