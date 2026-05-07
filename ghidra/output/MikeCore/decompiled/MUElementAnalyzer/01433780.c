// Function: FUN_01433780
// Address: 01433780
// Size: 633 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x01433889) */
/* WARNING: Removing unreachable block (ram,0x01433892) */

void FUN_01433780(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  undefined4 uVar4;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  FUN_00e332f0();
  *(undefined8 *)(unaff_RDI + 200) = 0xbff0000000000000;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025f0d98;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  (*DAT_025f0db0)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xb0);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xb0) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xe8);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xe8) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  uVar4 = FUN_00d6f370();
  if (local_78 == '\0') {
    if (local_80 == 0) {
      return;
    }
    uVar4 = FUN_00d50b00();
  }
  else if (local_80 == 0) {
    return;
  }
  lVar2 = DAT_026f6e78;
  if (DAT_026f6e78 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_70 = lVar2;
  local_68 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = DAT_027c19f0;
  if (DAT_027c19f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_60);
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = DAT_027c19f8;
  if (DAT_027c19f8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_50 = lVar2;
  local_48 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = DAT_027e2720;
  if (DAT_027e2720 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = lVar2;
  local_38 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = DAT_027e2730;
  if (DAT_027e2730 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_30 = lVar2;
  local_28 = '\x01';
  FUN_00d72780(uVar4,&local_30);
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


