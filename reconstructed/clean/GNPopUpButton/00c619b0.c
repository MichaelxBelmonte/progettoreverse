// Function: FUN_00c619b0
// Address: 00c619b0
// Size: 1110 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"

void FUN_00c619b0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t **pplVar8;
  int64_t this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar8 = &local_40;
  uVar10 = FUN_01ccad60();
  plVar1 = local_40;
  if ((g_027f94e0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar5 != 0)) {
    g_026efe08 = FUN_000f5df0();
    g_026efdf0 = "GNPopUpButton";
    g_026efdf8 = 0x240;
    g_026efe00 = FUN_001e3bf0;
    g_026efe10 = 0;
    ram_00000000026efe18 = 0;
    g_026efe20 = 0;
    ram_00000000026efe28 = 0;
    g_026efe30 = 0;
    ram_00000000026efe38 = 0;
    g_026efe40 = 0;
    ram_00000000026efe48 = 0;
    g_026efe50 = 0;
    ram_00000000026efe58 = 0;
    g_026efe60 = 0;
    ram_00000000026efe68 = 0;
    g_026efe70 = 0;
    ram_00000000026efe78 = 0;
    g_026efe80 = 0;
    ram_00000000026efe88 = 0;
    g_026efe90 = 0;
    ram_00000000026efe98 = 0;
    g_026efea0 = 0;
    ram_00000000026efea8 = 0;
    g_026efeb0 = 0;
    uVar10 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_00c61a0c:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar10 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_00c61a0c;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_027e7c20;
  if (g_027e7c20 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  uVar10 = FUN_01ccaae0(uVar10,&local_a8);
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_027e7c20;
  local_68 = plVar9;
  if (g_027e7c20 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  FUN_01ccab60(uVar10,&local_98);
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d836c0();
  local_58 = local_78;
  local_50 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_50 = '\x01';
  local_88 = local_48;
  local_80 = '\0';
  pplVar8 = &local_40;
  FUN_01d26fb0(&local_88,&local_58);
  plVar3 = local_40;
  FUN_00053ac0();
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00c61c08;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_00c61c08:
  local_60 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != (int64_t *)0x0) {
    iVar5 = FUN_00d45870();
    for (iVar7 = 0; iVar6 = FUN_01d6fde0(), iVar7 < iVar6; iVar7 = iVar7 + 1) {
      FUN_01d701d0(extraout_XMM0_Da_00,iVar7);
      iVar6 = FUN_01d654a0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar9 = local_68;
      if (iVar6 == iVar5) {
        (**(code **)(*plVar1 + 0x918))();
        if (*(int64_t *)(this_ptr + 0x78) != 0) {
          FUN_01dfe5c0();
        }
        break;
      }
    }
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x998))();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

