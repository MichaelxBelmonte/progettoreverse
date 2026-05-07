// Function: FUN_00bc2d70
// Address: 00bc2d70
// Size: 678 bytes
// Class: GNSoundFileChunk


/* WARNING: Removing unreachable block (ram,0x00bc2e2e) */
/* WARNING: Removing unreachable block (ram,0x00bc2e37) */

void FUN_00bc2d70(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
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
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
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
  if (*(int *)(*unaff_RSI + 0x18) < 7) {
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
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0xc) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x10) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x24) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x14) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x18) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x1c) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x20) = (int)local_21;
  FUN_00d50b20();
  return;
}


