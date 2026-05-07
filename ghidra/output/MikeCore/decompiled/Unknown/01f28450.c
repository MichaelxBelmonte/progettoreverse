// Function: FUN_01f28450
// Address: 01f28450
// Size: 1069 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01f284d0) */
/* WARNING: Removing unreachable block (ram,0x01f284dc) */

void FUN_01f28450(void)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong local_e0;
  char local_d8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*DAT_028ba7f0 + 0x4c8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01f284aa;
    }
  }
  else if (local_40 != 0) {
LAB_01f284aa:
    FUN_00d6f2a0();
    bVar3 = false;
    goto LAB_01f284e9;
  }
  bVar3 = true;
LAB_01f284e9:
  FUN_00d6f370();
  lVar4 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  plVar2 = DAT_028ba7f0 + 2;
  if (DAT_028ba7f0 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = plVar2;
  FUN_00d32c80();
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  lVar1 = DAT_028ba7f0[8];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5cff0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00df2e00();
  (**(code **)(*DAT_028ba7f0 + 0x470))();
  (**(code **)(*DAT_028ba7f0 + 0x468))();
  (**(code **)(*DAT_028ba7f0 + 0x460))();
  (**(code **)(*DAT_028ba7f0 + 0x4b0))();
  uVar6 = FUN_00d6f370();
  lVar1 = DAT_027fff30;
  if (DAT_027fff30 != 0) {
    uVar6 = FUN_00d50b00();
  }
  cVar5 = FUN_00d70f90(uVar6,0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    (**(code **)(*DAT_028ba7f0 + 0x688))();
  }
  FUN_00d403d0();
  local_60 = DAT_028ba7f0;
  local_58 = 0;
  if (DAT_028ba7f0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027e2660;
  local_58 = '\x01';
  if (DAT_027e2660 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
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
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_90 = DAT_026cb120;
  if (DAT_026cb120 != 0) {
    FUN_00d50b00();
  }
  plVar2 = DAT_028ba7f0;
  local_88 = '\x01';
  local_48 = 0;
  if (DAT_028ba7f0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar2;
  local_48 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&local_50,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e1eb80(0,0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}


