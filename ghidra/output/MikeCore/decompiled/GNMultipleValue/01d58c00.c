// Function: FUN_01d58c00
// Address: 01d58c00
// Size: 745 bytes
// Class: GNMultipleValue


void FUN_01d58c00(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (((char)unaff_RDI[0x3e] == '\0') || (unaff_RDI[0x39] == 0)) {
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_38 + 0x6c0))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      return;
    }
  }
  uVar6 = FUN_01e3f820();
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar5 + 0x18))();
  FUN_01e3f820();
  FUN_01d4ed60(param_2);
  FUN_01d52700();
  FUN_01d52740();
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
  FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x608))();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  FUN_01ca6a90();
  plVar2 = local_38;
  if ((((local_30 == '\0') && (local_38 != (longlong *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01ca5d90();
  lVar1 = unaff_RDI[0x39];
  if (lVar1 != 0) {
    local_50 = 0;
    uVar7 = FUN_00d50b00();
    local_a8 = DAT_027f07c8;
    local_50 = '\x01';
    local_58 = lVar1;
    if (DAT_027f07c8 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_01caa390(uVar7,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e42030();
  plVar3 = local_38;
  local_90 = '\0';
  local_88 = 0;
  local_80 = '\0';
  local_98 = plVar5;
  FUN_01e48f80(uVar6);
  local_70 = '\0';
  local_78 = 0;
  local_68 = plVar2;
  local_60 = '\0';
  (**(code **)(*plVar3 + 0x738))(&local_68,&local_78,4);
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


