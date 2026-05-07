// Function: FUN_0009acf0
// Address: 0009acf0
// Size: 525 bytes
// Class: Unknown


void FUN_0009acf0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  lVar3 = *(longlong *)(unaff_RSI + 0x80);
  if (lVar3 == 0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)((longlong)puVar2 + 0x13b) = 0;
    *(undefined4 *)(puVar2 + 0x27) = 0;
    puVar2[0x28] = 0;
    puVar2[0x29] = 0;
    puVar2[0x2a] = 0;
    puVar2[0x2b] = 0;
    puVar2[0x2c] = 0;
    puVar2[0x2d] = 0;
    puVar2[0x2e] = 0;
    puVar2[0x2f] = 0;
    puVar2[0x30] = 0;
    *puVar2 = &DAT_024e46f0;
    puVar2[2] = &DAT_024e50e0;
    puVar2[0x31] = 0;
    puVar2[0x32] = 0;
    puVar2[0x33] = 0;
    (*DAT_024e4708)();
    puVar1 = *(undefined8 **)(unaff_RSI + 0x80);
    if (puVar1 == puVar2) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RSI + 0x80) = puVar2;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b00();
    uVar4 = FUN_00338d50();
    if (unaff_RSI != 0) {
      uVar4 = FUN_00d50b20();
    }
    local_38 = 0;
    lVar3 = *(longlong *)(unaff_RSI + 0xb8);
    if (lVar3 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar3;
    FUN_0009b000(uVar4,&local_40);
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    uVar4 = FUN_00d45870();
    FUN_00336030(extraout_XMM0_Da,uVar4);
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = *(longlong *)(unaff_RSI + 0x80);
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


