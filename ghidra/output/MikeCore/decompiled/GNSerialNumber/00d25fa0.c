// Function: FUN_00d25fa0
// Address: 00d25fa0
// Size: 1624 bytes
// Class: GNSerialNumber
// String references:
//   "serial number format mistmatch"


/* WARNING: Removing unreachable block (ram,0x00d25fe6) */
/* WARNING: Removing unreachable block (ram,0x00d25ff2) */
/* WARNING: Removing unreachable block (ram,0x00d260bd) */
/* WARNING: Removing unreachable block (ram,0x00d260c9) */

undefined8 *
FUN_00d25fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined1 uVar7;
  undefined8 local_e0;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  cVar4 = FUN_00d268e0();
  if (cVar4 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_00d26d10();
  plVar3 = local_40;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00d260af;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00d260af:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  FUN_00d276b0();
  plVar3 = local_40;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00d2616b;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00d2616b:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  uVar7 = 0;
  uVar6 = FUN_00d27c30();
  plVar3 = local_40;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      if (local_38 == '\0') {
        uVar6 = FUN_00d50b00();
      }
      goto LAB_00d2620d;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar6 = FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
    }
LAB_00d2620d:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  lVar2 = DAT_026fce10;
  if (DAT_026fce10 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_b0 = lVar2;
  local_a8 = '\x01';
  FUN_00d97fb0(uVar6,&local_b0,param_3,param_4,uVar7);
  plVar3 = local_40;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == local_40) {
    if (((char)unaff_RSI[1] != '\0') || (local_40 == (longlong *)0x0)) goto LAB_00d26336;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d26331;
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00d26331:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00d26336:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d2634a;
    }
    *unaff_RSI = (longlong)local_40;
    if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
  local_38 = '\0';
LAB_00d2634a:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = *unaff_RSI;
  local_98 = '\0';
  uVar6 = FUN_00ddb860();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar1 + 0x430))(uVar6,1);
  lVar2 = DAT_0277d248;
  uVar6 = extraout_XMM0_Da;
  if (cVar4 == '\0') {
    if (DAT_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    uVar6 = FUN_00cc7b40(uVar6,DAT_025908a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  cVar4 = (**(code **)(*plVar1 + 0x428))(uVar6,6);
  lVar2 = DAT_0277d248;
  uVar6 = extraout_XMM0_Da_00;
  if (cVar4 == '\0') {
    if (DAT_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    uVar6 = FUN_00cc7b40(uVar6,DAT_025908a0);
    if ((local_78 != '\0') && (local_80 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  cVar4 = (**(code **)(*plVar1 + 0x428))(uVar6,3);
  lVar2 = DAT_0277d248;
  uVar6 = extraout_XMM0_Da_01;
  if (cVar4 == '\0') {
    if (DAT_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    uVar6 = FUN_00cc7b40(uVar6,DAT_025908a0);
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  cVar4 = (**(code **)(*plVar1 + 0x418))(uVar6,9);
  lVar2 = DAT_0277d248;
  if (cVar4 == '\0') {
    uVar6 = extraout_XMM0_Da_02;
    if (DAT_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_00cc7b40(uVar6,DAT_025908a0);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025726d0;
  *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  FUN_00d500e0();
  *(undefined1 *)((longlong)puVar5 + 0xc) = local_4c;
  *(undefined4 *)(puVar5 + 2) = local_48;
  *(undefined4 *)((longlong)puVar5 + 0x14) = local_44;
  puVar5[3] = local_e0;
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


