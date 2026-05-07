// Function: FUN_00d16570
// Address: 00d16570
// Size: 1132 bytes
// Class: GNQualifierVariable
// String references:
//   "Error in variable substitution: value for variable %@ not found"
//   "GNQualifierVariable"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d16570(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 *local_98;
  undefined1 local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  uint local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar7 = *(longlong **)(unaff_RSI + 0x20);
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
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar7 = (longlong *)(unaff_RSI + 0x20);
    if (cVar4 != '\0') goto LAB_00d165ce;
  }
  plVar7 = &DAT_02802688;
LAB_00d165ce:
  plVar7 = (longlong *)*plVar7;
  if (plVar7 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    FUN_00d50b00();
    *unaff_RDI = unaff_RSI;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    FUN_00d50b00();
    plVar1 = (longlong *)*param_2;
    local_78 = plVar7;
    uVar9 = (**(code **)(*plVar7 + 0x370))();
    local_40 = local_70;
    local_38 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        uVar9 = FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_38 = '\x01';
    uVar9 = (**(code **)(*plVar1 + 0x98))(uVar9,&local_40);
    puVar3 = local_60;
    if ((char)local_58 == '\0') {
      if (local_60 != (undefined8 *)0x0) {
        uVar9 = FUN_00d50b00();
        if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
      }
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar8 = DAT_0277cc08;
    if (puVar3 == (undefined8 *)0x0) {
      if (DAT_0277cc08 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_88 = lVar8;
      local_80 = '\x01';
      lVar8 = *(longlong *)(unaff_RSI + 0x20);
      local_58 = 1;
      local_60 = &DAT_024c5048;
      if (lVar8 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar8;
      FUN_00cc7b40(uVar9,&local_60);
      local_60 = &DAT_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      FUN_00d50b20();
    }
    else {
      puVar2 = *(undefined8 **)(unaff_RSI + 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      switch(*(undefined4 *)(unaff_RSI + 0x28)) {
      default:
        lVar8 = DAT_0277cbb0;
        break;
      case 1:
        lVar8 = DAT_0277cbb8;
        break;
      case 2:
        lVar8 = DAT_0277cbc0;
        break;
      case 3:
        lVar8 = DAT_0277cbc8;
        break;
      case 4:
        lVar8 = DAT_0277cbd0;
        break;
      case 5:
        lVar8 = DAT_0277cbd8;
        break;
      case 6:
        lVar8 = DAT_0277cbe0;
        break;
      case 7:
        lVar8 = DAT_02704028;
        break;
      case 8:
        lVar8 = DAT_0277cbf0;
        break;
      case 9:
        lVar8 = DAT_0277cbf8;
      }
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
      }
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025718a8;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
      FUN_00d500e0();
      local_58 = local_58 & 0xffffff00;
      local_68 = 0;
      local_98 = puVar3;
      local_90 = 0;
      local_70 = lVar8;
      local_60 = puVar2;
      FUN_00d14950(&local_98,&local_70);
      *unaff_RDI = (longlong)puVar6;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}


