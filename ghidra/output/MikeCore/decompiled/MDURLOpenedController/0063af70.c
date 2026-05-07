// Function: FUN_0063af70
// Address: 0063af70
// Size: 685 bytes
// Class: MDURLOpenedController


/* WARNING: Removing unreachable block (ram,0x0063b202) */
/* WARNING: Removing unreachable block (ram,0x0063b0e9) */
/* WARNING: Removing unreachable block (ram,0x0063b0f5) */
/* WARNING: Removing unreachable block (ram,0x0063b20b) */

void FUN_0063af70(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar3;
  longlong local_78;
  char local_70;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  plVar1 = (longlong *)*unaff_RSI;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5e0))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_0062aee0();
  if (unaff_RDI[0x16] == 0) {
    FUN_0062bd30();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x740))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_0062b480();
  }
  local_38 = (longlong *)*unaff_RSI;
  local_30 = '\0';
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x16] != 0) {
    uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x5d0))();
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        uVar3 = FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    FUN_00177000(uVar3,&local_58);
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_01e561b0();
    plVar1 = local_38;
    FUN_006f3f00();
    local_40 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_40 = '\x01';
    local_48 = local_78;
    (**(code **)(*plVar1 + 0x7f8))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((longlong *)unaff_RDI[0x28] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x588))();
  }
  (**(code **)(*unaff_RDI + 0x5c8))(0);
  return;
}


