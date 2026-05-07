// Function: FUN_00bc1590
// Address: 00bc1590
// Size: 775 bytes
// Class: GNSoundFileChunk


void FUN_00bc1590(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_e0;
  char local_d8;
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
  undefined1 local_6c [4];
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  undefined1 local_24 [4];
  
  lVar1 = DAT_02765700;
  if (*unaff_RSI == 0) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    FUN_00cc78b0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02764880;
  if (*(int *)(*unaff_RSI + 0x18) != 0x54) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar1;
    local_50 = '\x01';
    FUN_00cc78b0();
    if ((local_50 != '\0') && (local_58 != 0)) {
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
  local_48 = *unaff_RSI;
  local_40 = '\0';
  FUN_00cccfe0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  FUN_00ccd540(local_24,local_6c);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd540(local_24,&local_34);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_2e);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_2c);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_2a);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_28);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_26);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x18) = local_34;
  *(int *)(unaff_RDI + 0x10) = (int)local_2a;
  *(int *)(unaff_RDI + 0x14) = (int)local_28;
  if (local_26 == 2) {
    if (*(char *)(unaff_RDI + 0xc) == '\0') {
      *(undefined4 *)(unaff_RDI + 0x18) = 0;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 0xc) = 1;
  }
  iVar2 = (int)local_2c;
  switch(iVar2) {
  case 1:
    break;
  case 2:
    iVar2 = 2;
    break;
  default:
    *(undefined4 *)(unaff_RDI + 0x20) = 0;
    goto LAB_00bc181f;
  case 4:
    *(undefined4 *)(unaff_RDI + 0x20) = 3;
    if (local_2e == 0) goto LAB_00bc181f;
    goto LAB_00bc187a;
  }
  *(int *)(unaff_RDI + 0x20) = iVar2;
  if (local_2e == 0) {
LAB_00bc181f:
    iVar2 = 0;
  }
  else {
LAB_00bc187a:
    iVar2 = local_2e + -0x30;
  }
  *(int *)(unaff_RDI + 0x1c) = iVar2;
  FUN_00d50b20();
  return;
}


