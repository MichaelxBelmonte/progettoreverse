// Function: FUN_00bc1160
// Address: 00bc1160
// Size: 792 bytes
// Class: GNSoundFileChunk


void FUN_00bc1160(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined1 local_3e [2];
  uint local_3c;
  undefined4 local_38;
  short local_32;
  short local_30;
  short local_2e;
  undefined1 local_2c [4];
  
  lVar2 = DAT_02765700;
  if (*unaff_RSI == 0) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    FUN_00cc78b0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_02764880;
  if (*(int *)(*unaff_RSI + 0x18) != 0x18) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_00cc78b0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_0256d868;
  puVar3[2] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  (*DAT_0256d880)();
  local_50 = *unaff_RSI;
  local_48 = '\0';
  FUN_00cccfe0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  FUN_00ccd540(local_2c,&local_3c);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,&local_32);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,local_3e);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd7e0(local_2c,local_78);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd540(local_2c,&local_38);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,&local_2e);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,&local_30);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd7e0(local_2c,local_74);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x18) = local_38;
  *(int *)(unaff_RDI + 0x10) = (int)local_30;
  *(int *)(unaff_RDI + 0x14) = (int)local_2e;
  bVar4 = local_32 != 0 & (byte)local_3c >> 1;
  *(uint *)(unaff_RDI + 0x20) = (uint)bVar4 + (uint)bVar4 * 2;
  if ((local_3c & 1) == 0) {
    *(undefined1 *)(unaff_RDI + 0xc) = 1;
  }
  else {
    *(undefined4 *)(unaff_RDI + 0x18) = 0;
  }
  iVar1 = local_32 + -0x30;
  if (local_32 == 0) {
    iVar1 = 0;
  }
  if (bVar4 == 0) {
    iVar1 = 0;
  }
  *(int *)(unaff_RDI + 0x1c) = iVar1;
  FUN_00d50b20();
  return;
}


