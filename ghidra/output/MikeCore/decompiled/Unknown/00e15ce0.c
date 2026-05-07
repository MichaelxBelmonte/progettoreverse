// Function: FUN_00e15ce0
// Address: 00e15ce0
// Size: 785 bytes
// Class: Unknown


void FUN_00e15ce0(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar3 = DAT_02785388;
  local_a8 = param_1;
  if (DAT_02785388 != 0) {
    param_1 = FUN_00d50b00();
  }
  lVar2 = DAT_02785370;
  local_90 = lVar3;
  local_88 = '\x01';
  if (DAT_02785370 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  FUN_00e16ab0(param_1,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e169f0();
  plVar5 = local_40;
  local_70 = DAT_02784498;
  if (DAT_02784498 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  cVar4 = (**(code **)(*plVar5 + 0x50))();
  uVar6 = extraout_XMM0_Qa;
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar3 = DAT_02785390;
  if (cVar4 != '\0') {
    if (DAT_02785390 != 0) {
      uVar6 = FUN_00d50b00();
    }
    lVar2 = DAT_02785398;
    local_60 = lVar3;
    local_58 = '\x01';
    if (DAT_02785398 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_50 = lVar2;
    local_48 = '\x01';
    uVar6 = FUN_00e16ab0(uVar6,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  local_b8 = *param_2;
  local_b0 = 0;
  FUN_00e14140(uVar6,&local_b8);
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_98 = 1;
  FUN_00e13cd0();
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RSI + 0x18) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar5 = *(longlong **)(unaff_RSI + 0x18);
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar5 + 0x438))(local_a8);
    FUN_00d50b20();
    if (cVar4 != '\0') {
      plVar5 = *(longlong **)(unaff_RSI + 0x18);
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0x3b8))();
      plVar5 = local_40;
      if (local_40 == (longlong *)0x0) {
        bVar1 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar1 = true;
      }
      FUN_00d50b20();
      goto LAB_00e15fa7;
    }
  }
  bVar1 = false;
  plVar5 = (longlong *)0x0;
LAB_00e15fa7:
  if (*(longlong *)(unaff_RSI + 0x18) != 0) {
    *(undefined8 *)(unaff_RSI + 0x18) = 0;
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar1) && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


