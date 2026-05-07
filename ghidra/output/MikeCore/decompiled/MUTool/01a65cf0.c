// Function: FUN_01a65cf0
// Address: 01a65cf0
// Size: 1221 bytes
// Class: MUTool


void FUN_01a65cf0(void)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  longlong *unaff_RDI;
  longlong local_f0;
  char local_e8;
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
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  FUN_01b68670();
  *(undefined1 *)(unaff_RDI + 0x36) = 0;
  FUN_00d6f370();
  lVar1 = DAT_027e2650;
  if (DAT_027e2650 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d70f90();
  *(undefined1 *)(unaff_RDI + 0x40) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  lVar1 = DAT_027e2658;
  if (DAT_027e2658 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00d70f90();
  *(undefined1 *)((longlong)unaff_RDI + 0x201) = uVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = DAT_027e3b40;
  if (DAT_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = DAT_027e3bc0;
  if (DAT_027e3bc0 != 0) {
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
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = DAT_027e2660;
  if (DAT_027e2660 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_00d6f370();
  local_40 = local_80;
  local_38 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_38 = '\x01';
  FUN_00d41430(&local_40,&local_b0);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_a0 = DAT_027e1360;
  if (DAT_027e1360 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  cVar3 = FUN_00d70700();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d6f370();
    local_90 = DAT_027e1360;
    if (DAT_027e1360 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    cVar3 = FUN_00d70f90();
    if (*(char *)((longlong)unaff_RDI + 0x202) != cVar3) {
      *(char *)((longlong)unaff_RDI + 0x202) = cVar3;
      (**(code **)(*unaff_RDI + 0x620))();
      if (unaff_RDI[0x37] != 0) {
        unaff_RDI[0x37] = 0;
        FUN_00d50b20();
      }
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


