// Function: FUN_01e4d060
// Address: 01e4d060
// Size: 530 bytes
// Class: GNString


void FUN_01e4d060(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((*(longlong *)(unaff_RDI + 0x50) != 0) && (iVar2 = FUN_00d8c7a0(), iVar2 != 0)) {
    FUN_00d4efa0();
    FUN_00c82bb0();
    local_40 = local_70;
    local_38 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_38 = '\x01';
    FUN_00e3f850();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_58 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
    FUN_00d50b00();
    local_90 = DAT_027f0e20;
    local_58 = '\x01';
    local_60 = (longlong *)(unaff_RDI + 0x10);
    if (DAT_027f0e20 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_48 = 0;
    lVar3 = *(longlong *)(unaff_RDI + 0x50);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar3;
    FUN_00e3fb50(&local_50,&local_90);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00e3faa0();
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x38);
  uVar1 = *(uint *)(lVar3 + 0xc);
  if (0 < (int)uVar1) {
    lVar4 = 0;
    while( true ) {
      local_80 = *unaff_RSI;
      local_78 = '\0';
      (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x10) + lVar4 * 8) + 0x800))();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((ulonglong)uVar1 - 1 == lVar4) break;
      lVar3 = *(longlong *)(unaff_RDI + 0x38);
      lVar4 = lVar4 + 1;
    }
  }
  return;
}


