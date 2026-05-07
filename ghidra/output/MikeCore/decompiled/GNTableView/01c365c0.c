// Function: FUN_01c365c0
// Address: 01c365c0
// Size: 1144 bytes
// Class: GNTableView
// String references:
//   "%lld"


void FUN_01c365c0(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  pthread_key_t pVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar8;
  undefined4 uVar9;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  uint local_48;
  undefined8 local_40;
  longlong *local_38;
  
  (**(code **)(*unaff_RDI + 0x640))();
  plVar8 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar2 = FUN_01c33700();
  if (cVar2 == '\0') {
    bVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
    pVar7 = (pthread_key_t)bVar3;
    (**(code **)(*plVar8 + 0x490))(bVar3,0x17,0);
    local_90 = local_50;
    local_88 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_88 = '\x01';
    FUN_01d488d0();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x640))();
    plVar1 = local_60;
    bVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
    pVar7 = (pthread_key_t)bVar3;
    (**(code **)(*plVar1 + 0x4a8))(bVar3,0x17);
    local_a0 = local_50;
    local_98 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_98 = '\x01';
    FUN_01d488d0();
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar9 = (**(code **)(*unaff_RDI + 0xb28))();
  if ((char)local_48 == '\0') {
    if (local_50 == (longlong *)0x0) goto LAB_01c36829;
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01c367e3:
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_017cac30();
    uVar9 = FUN_00d50b20();
  }
  else {
    if (local_50 != (longlong *)0x0) goto LAB_01c367e3;
LAB_01c36829:
    uVar6 = 0;
  }
  local_48 = 1;
  local_50 = (longlong *)&DAT_024da828;
  local_40 = uVar6;
  FUN_00d8cb40(uVar9,&local_50);
  plVar1 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (longlong *)0x0) goto LAB_01c36a19;
    FUN_00d50b00();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == (longlong *)0x0) goto LAB_01c36a19;
  iVar4 = FUN_00d8c7a0();
  if (iVar4 != 0) {
    local_38 = plVar8;
    (**(code **)(*unaff_RDI + 0x9e8))();
    local_80 = local_50;
    local_78 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_78 = '\x01';
    FUN_01d48a10();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar8 = (longlong *)*unaff_RSI;
    local_c0 = plVar1;
    local_b8 = '\0';
    local_a8 = '\0';
    local_b0 = plVar8;
    (**(code **)(*unaff_RDI + 0xa00))(param_2,&local_c0);
    local_70 = local_50;
    local_68 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_68 = '\x01';
    (**(code **)(*plVar8 + 0x3f8))(param_1,param_2);
    plVar8 = local_38;
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01c36a19:
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


