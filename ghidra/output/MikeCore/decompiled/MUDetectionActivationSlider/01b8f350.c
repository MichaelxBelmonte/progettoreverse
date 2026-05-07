// Function: FUN_01b8f350
// Address: 01b8f350
// Size: 986 bytes
// Class: MUDetectionActivationSlider


void FUN_01b8f350(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  undefined4 uVar4;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
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
  longlong local_30;
  char local_28;
  
  FUN_01b68670();
  *(undefined1 *)(unaff_RDI + 0x1a0) = 1;
  *(undefined1 *)(unaff_RDI + 0x1b4) = 0;
  *(undefined1 *)(unaff_RDI + 0x1b6) = 1;
  *(undefined1 *)(unaff_RDI + 0x200) = 1;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025ce610;
  puVar3[2] = 0;
  puVar3[3] = 0;
  (*DAT_025ce628)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x208);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x208) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = DAT_027e3b40;
  if (DAT_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
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
  local_b0 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_90 = DAT_027e51b0;
  if (DAT_027e51b0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_88 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,1);
  *(undefined1 *)(unaff_RDI + 0x210) = uVar2;
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_80 = DAT_027c19f0;
  if (DAT_027c19f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_78 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,0);
  *(undefined1 *)(unaff_RDI + 0x211) = uVar2;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_70 = DAT_027e51b8;
  if (DAT_027e51b8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_68 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,1);
  *(undefined1 *)(unaff_RDI + 0x212) = uVar2;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d6f370();
  local_60 = DAT_027e51c0;
  if (DAT_027e51c0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_58 = '\x01';
  uVar2 = FUN_00d70f90(uVar4,0);
  *(undefined1 *)(unaff_RDI + 0x213) = uVar2;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}


