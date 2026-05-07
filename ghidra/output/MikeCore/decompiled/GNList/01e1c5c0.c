// Function: FUN_01e1c5c0
// Address: 01e1c5c0
// Size: 729 bytes
// Class: GNList


void FUN_01e1c5c0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x378))();
  lVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d4efa0();
  FUN_00c82bb0();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  FUN_00e3f850();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0) && (cVar3 = (**(code **)(*unaff_RDI + 0x960))(), cVar3 != '\0')) {
    local_78 = 0;
    (**(code **)(unaff_RDI[2] + 0x10))();
    FUN_00d50b00();
    local_b0 = DAT_027f3340;
    local_78 = '\x01';
    local_80 = unaff_RDI + 2;
    if (DAT_027f3340 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_a0 = lVar2;
    local_98 = '\0';
    FUN_00e3fb50(&local_a0,&local_b0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      (**(code **)(*local_80 + 0x10))();
      FUN_00d50b20();
    }
  }
  if ((unaff_RDI[10] != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
    local_68 = 0;
    (**(code **)(unaff_RDI[2] + 0x10))();
    FUN_00d50b00();
    local_90 = DAT_027f0e20;
    local_68 = '\x01';
    local_70 = unaff_RDI + 2;
    if (DAT_027f0e20 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_58 = 0;
    lVar1 = unaff_RDI[10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    local_60 = lVar1;
    FUN_00e3fb50(&local_60,&local_90);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
  }
  FUN_00e3faa0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


