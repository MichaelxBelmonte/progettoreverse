// Function: FUN_000c1be0
// Address: 000c1be0
// Size: 601 bytes
// Class: GNString


void FUN_000c1be0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  FUN_0027c6b0();
  *(undefined4 *)(unaff_RDI + 0x160) = 0xffffffff;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025736a8;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  (*DAT_025736c0)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x158);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x158) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_90 = DAT_026cb128;
  if (DAT_026cb128 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d41430(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_70 = DAT_026cb130;
  if (DAT_026cb130 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d41430(&local_60,&local_70);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  lVar2 = *(longlong *)(unaff_RDI + 0x150);
  *(longlong **)(unaff_RDI + 0x150) = plVar4;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  lVar2 = *(longlong *)(unaff_RDI + 0x168);
  *(longlong **)(unaff_RDI + 0x168) = plVar4;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


