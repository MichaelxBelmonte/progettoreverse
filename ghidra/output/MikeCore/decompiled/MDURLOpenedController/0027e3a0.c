// Function: FUN_0027e3a0
// Address: 0027e3a0
// Size: 843 bytes
// Class: MDURLOpenedController


/* WARNING: Removing unreachable block (ram,0x0027e68c) */
/* WARNING: Removing unreachable block (ram,0x0027e698) */
/* WARNING: Removing unreachable block (ram,0x0027e528) */
/* WARNING: Removing unreachable block (ram,0x0027e531) */
/* WARNING: Removing unreachable block (ram,0x0027e3eb) */
/* WARNING: Removing unreachable block (ram,0x0027e3f4) */
/* WARNING: Removing unreachable block (ram,0x0027e563) */
/* WARNING: Removing unreachable block (ram,0x0027e56c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0027e3a0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *unaff_RSI;
  longlong local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  FUN_01f51ef0();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*local_40 + 0x388))();
  FUN_01edd760();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_001220c0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*local_40 + 0x368))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  iVar2 = (**(code **)(*local_40 + 0x390))();
  uVar3 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
  if ((iVar2 == 0) && ((**(code **)(*local_40 + 0x380))(), local_40 != (longlong *)0x0)) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_01f15680(param_2);
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01f15be0(DAT_02390d2c);
    FUN_01f15740();
    FUN_01f15bb0();
    (**(code **)(*local_40 + 0x370))
              ((uint)param_1 ^ _DAT_023945e0,(uint)((ulonglong)param_1 >> 0x20) ^ _DAT_023945e0);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    FUN_01f15bb0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x610))((uint)param_1,param_2);
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01f15a80();
    FUN_01f15b80();
    FUN_00c91c80();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar3 = 0;
  }
  FUN_00d50b20();
  if ((char)uVar3 == '\0') {
    FUN_00d50b20();
  }
  return (uVar3 ^ 1) & 0xffffffff;
}


