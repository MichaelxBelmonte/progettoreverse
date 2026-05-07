// Function: FUN_00bc3220
// Address: 00bc3220
// Size: 687 bytes
// Class: GNSoundFileChunk


/* WARNING: Removing unreachable block (ram,0x00bc32de) */
/* WARNING: Removing unreachable block (ram,0x00bc32e7) */

void FUN_00bc3220(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
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
  short local_2a;
  undefined1 local_28 [7];
  char local_21;
  
  lVar1 = DAT_02765700;
  if (*unaff_RSI == 0) {
    if (DAT_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02764880;
  if (*(int *)(*unaff_RSI + 0x18) < 8) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_0256d868;
  puVar2[2] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  (*DAT_0256d880)();
  FUN_00cccfe0();
  FUN_00ccce80();
  FUN_00ccd300(local_28,&local_21);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0xc) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x10) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x14) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x18) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x1c) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x20) = (int)local_21;
  FUN_00ccd330(local_28,&local_2a);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x24) = (int)local_2a;
  FUN_00d50b20();
  return;
}


