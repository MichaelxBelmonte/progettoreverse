// Function: FUN_01f28450
// Address: 01f28450
// Size: 1069 bytes
// Class: Unknown

void FUN_01f28450(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  uint32_t uVar6;
  int64_t local_e0;
  char local_d8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*g_028ba7f0 + 0x4c8))();
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
  plVar2 = g_028ba7f0 + 2;
  if (g_028ba7f0 == (int64_t *)0x0) {
    plVar2 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = plVar2;
  FUN_00d32c80();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  lVar1 = g_028ba7f0[8];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5cff0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00df2e00();
  (**(code **)(*g_028ba7f0 + 0x470))();
  (**(code **)(*g_028ba7f0 + 0x468))();
  (**(code **)(*g_028ba7f0 + 0x460))();
  (**(code **)(*g_028ba7f0 + 0x4b0))();
  uVar6 = FUN_00d6f370();
  lVar1 = g_027fff30;
  if (g_027fff30 != 0) {
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
    (**(code **)(*g_028ba7f0 + 0x688))();
  }
  FUN_00d403d0();
  local_60 = g_028ba7f0;
  local_58 = 0;
  if (g_028ba7f0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  lVar1 = g_027e2660;
  local_58 = '\x01';
  if (g_027e2660 != 0) {
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
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_90 = g_026cb120;
  if (g_026cb120 != 0) {
    FUN_00d50b00();
  }
  plVar2 = g_028ba7f0;
  local_88 = '\x01';
  local_48 = 0;
  if (g_028ba7f0 != (int64_t *)0x0) {
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
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
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

