// Function: FUN_00d3ce40
// Address: 00d3ce40
// Size: 557 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d3ce7e) */
/* WARNING: Removing unreachable block (ram,0x00d3ce8a) */

void FUN_00d3ce40(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_00d50de0();
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x378))();
  if (cVar4 != '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    local_50 = 0;
    lVar2 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0277d7c0;
    local_50 = '\x01';
    local_58 = lVar2;
    if (DAT_0277d7c0 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar3;
    local_90 = '\x01';
    (**(code **)(*plVar1 + 0x4f0))(param_1,&local_98);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    local_40 = 0;
    lVar2 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0277d810;
    local_40 = '\x01';
    local_48 = lVar2;
    if (DAT_0277d810 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar3;
    local_80 = '\x01';
    (**(code **)(*plVar1 + 0x4f0))(param_1,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    FUN_00d74120();
    local_38 = local_68;
    local_30 = 0;
    local_78 = DAT_0277d800;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
        local_78 = DAT_0277d800;
      }
    }
    else {
      local_60 = '\0';
    }
    local_30 = '\x01';
    DAT_0277d800 = local_78;
    if (local_78 != 0) {
      local_30 = '\x01';
      FUN_00d50b00();
    }
    local_70 = '\x01';
    (**(code **)(*plVar1 + 0x4f0))(param_1,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


