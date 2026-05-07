// Function: FUN_00d16be0
// Address: 00d16be0
// Size: 570 bytes
// Class: GNQualifierVariable
// String references:
//   "GNQualifierVariable"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d16be0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *unaff_RDI;
  undefined4 uVar6;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  plVar1 = (longlong *)unaff_RDI[4];
  if ((DAT_0277ce78 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_0277cdc8 = FUN_00d4fe50();
    _DAT_0277cdb0 = "GNQualifierVariable";
    _DAT_0277cdb8 = 0x18;
    _DAT_0277cdc0 = FUN_00d17140;
    _DAT_0277cdd0 = 0;
    uRam000000000277cdd8 = 0;
    _DAT_0277cde0 = 0;
    _DAT_0277ce58 = 0;
    uRam000000000277ce60 = 0;
    _DAT_0277ce68 = 0;
    DAT_0277ce6a = 1;
    _DAT_0277cde8 = 0;
    uRam000000000277cdf0 = 0;
    _DAT_0277cdf8 = 0;
    uRam000000000277ce00 = 0;
    _DAT_0277ce08 = 0;
    uRam000000000277ce10 = 0;
    _DAT_0277ce18 = 0;
    uRam000000000277ce20 = 0;
    _DAT_0277ce28 = 0;
    uRam000000000277ce30 = 0;
    _DAT_0277ce38 = 0;
    uRam000000000277ce40 = 0;
    _DAT_0277ce48 = 0;
    uRam000000000277ce50 = 0;
    DAT_0277ce73 = 0;
    _DAT_0277ce6b = 0;
    ___cxa_guard_release();
  }
  plVar2 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar2 = DAT_02802688;
    if (cVar4 != '\0') {
      plVar2 = (longlong *)unaff_RDI[4];
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*unaff_RDI + 0x3d0))();
    local_38 = local_58;
    local_30 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_30 = '\x01';
    uVar6 = (**(code **)(*plVar2 + 0x370))();
    lVar3 = local_48;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar6 = FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_68 = lVar3;
    local_60 = '\0';
    FUN_00ca0840(uVar6,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


