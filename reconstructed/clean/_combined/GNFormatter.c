// ===================================================================
// GNFormatter — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (6):
//                   _name
//                   _cType
//                   _classname
//                   _enumName
//                   _maxLength
//                   _canCodeResourceNameCache


// ============================================================
// 00df8bf0
// ============================================================
// Function: FUN_00df8bf0
// Address: 00df8bf0
// Size: 3755 bytes
// Class: GNFormatter
// String references:
//   "GNFormatter"
//   "{%@}"
//   "GNString"
//   "GNDictionary"
// === GNFormatter properties ===
//                   _name
//                   _cType
//                   _classname
//                   _enumName
//                   _maxLength
//                   _canCodeResourceNameCache


void FUN_00df8bf0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00e13120();
  (**(code **)(*this_ptr + 0x370))();
  local_c8 = local_50;
  local_c0 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_c0 = '\x01';
  FUN_00d90650();
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x3a0))();
  local_b8 = local_50;
  local_b0 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_b0 = '\x01';
  FUN_00d90650();
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_00e7b4e0();
  uVar9 = FUN_00d8e3d0(extraout_XMM0_Da,uVar7);
  plVar2 = local_50;
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == local_50) {
    if (((char)arg1[1] == '\0') && (local_50 != (int64_t *)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00df8de4;
      uVar9 = FUN_00d50b00();
      goto LAB_00df8e17;
    }
LAB_00df8e1c:
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    lVar4 = arg1[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      *arg1 = (int64_t)plVar2;
      if (((char)lVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_00df8e17:
      *(void*)(arg1 + 1) = 1;
      goto LAB_00df8e1c;
    }
    *arg1 = (int64_t)local_50;
    if (((char)lVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_00df8de4:
    *(void*)(arg1 + 1) = 1;
  }
  lVar4 = *arg1;
  local_48 = 1;
  local_50 = &g_024c5048;
  if (lVar4 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = lVar4;
  uVar9 = FUN_00d8cb40(uVar9,&local_50);
  if (local_58 == '\0') {
    if (local_60 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_50 = &g_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  local_d0 = local_60;
  FUN_00d8cbf0(uVar9,6);
  local_a0 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_a0 = '\x01';
  local_a8 = local_60;
  uVar9 = FUN_00de3e90();
  plVar1 = local_50;
  if ((g_026fdd40 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_04, iVar6 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    uVar9 = ___cxa_guard_release();
  }
  pplVar8 = &g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_00;
    if (cVar5 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar5 = FUN_00e8db60();
      pplVar8 = &local_50;
      uVar9 = extraout_XMM0_Da_01;
      if (cVar5 == '\0') {
        pplVar8 = &g_02802688;
      }
    }
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar4 = g_02704000;
  if (g_02704000 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_110 = lVar4;
  local_108 = '\x01';
  pplVar8 = &local_50;
  FUN_000175c0(uVar9,&local_110);
  plVar2 = local_50;
  if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_00df905d:
    pplVar8 = &g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_00df905d;
  }
  local_90 = 0;
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  local_90 = '\x01';
  local_98 = plVar2;
  uVar9 = FUN_00e12860();
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar4 = g_02784938;
  if (g_02784938 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_100 = lVar4;
  local_f8 = '\x01';
  pplVar8 = &local_50;
  uVar9 = FUN_000175c0(uVar9,&local_100);
  plVar2 = local_50;
  if ((g_026fd0c0 == '\0') &&
     (iVar6 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_05, iVar6 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    uVar9 = ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_00df9171:
    pplVar8 = &g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_02;
    if (cVar5 == '\0') goto LAB_00df9171;
  }
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
      goto LAB_00df9196;
    }
    if (this_ptr[8] != 0) {
      this_ptr[8] = 0;
      goto LAB_00df91cf;
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
LAB_00df9196:
    plVar3 = (int64_t *)this_ptr[8];
    if (plVar3 != plVar2) {
      if (plVar2 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      this_ptr[8] = (int64_t)plVar2;
      if (plVar3 != (int64_t *)0x0) {
LAB_00df91cf:
        uVar9 = FUN_00d50b20();
      }
    }
    if (plVar2 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b20();
    }
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar4 = g_02784c30;
  if (g_02784c30 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_f0 = lVar4;
  local_e8 = '\x01';
  FUN_000175c0(uVar9,&local_f0);
  plVar2 = local_50;
  if ((g_026fdd40 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
  }
  pplVar8 = &g_02802688;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar5 = FUN_00e8db60();
      pplVar8 = &local_50;
      if (cVar5 == '\0') {
        pplVar8 = &g_02802688;
      }
    }
  }
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) goto LAB_00df940e;
  local_d8 = '\0';
  pplVar8 = &local_50;
  local_e0 = plVar2;
  FUN_00d1fcc0();
  plVar2 = local_50;
  if ((g_026d03d0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_02702048 = FUN_00d4fe50();
    g_02702030 = "GNFormatter";
    g_02702038 = 0x10;
    g_02702040 = FUN_00037b20;
    g_02702050 = 0;
    ram_0000000002702058 = 0;
    g_02702060 = 0;
    ram_0000000002702068 = 0;
    g_02702070 = 0;
    ram_0000000002702078 = 0;
    g_02702080 = 0;
    ram_0000000002702088 = 0;
    g_02702090 = 0;
    ram_0000000002702098 = 0;
    g_027020a0 = 0;
    ram_00000000027020a8 = 0;
    g_027020b0 = 0;
    ram_00000000027020b8 = 0;
    g_027020c0 = 0;
    ram_00000000027020c8 = 0;
    g_027020d0 = 0;
    ram_00000000027020d8 = 0;
    g_027020e0 = 0;
    ram_00000000027020e8 = 0;
    g_027020f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
    pplVar8 = &g_02802688;
    local_88 = g_02802688;
    if (g_02802690 != '\0') goto LAB_00df9376;
LAB_00df939e:
    local_80 = 0;
    if (local_88 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') {
      pplVar8 = &g_02802688;
    }
    local_88 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') goto LAB_00df939e;
LAB_00df9376:
    *(void*)(pplVar8 + 1) = 0;
  }
  local_80 = '\x01';
  (**(code **)(*this_ptr + 0x390))();
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00df940e:
  (**(code **)(*this_ptr + 0x380))();
  (**(code **)(*this_ptr + 0x378))();
  local_70 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_70 = '\x01';
  local_78 = local_60;
  FUN_00d90650();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x380))();
  uVar7 = FUN_00e7b4e0();
  FUN_00d8e3d0(extraout_XMM0_Da_03,uVar7);
  plVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)this_ptr[7];
  if (plVar3 != plVar2) {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    this_ptr[7] = (int64_t)plVar2;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_d0 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00e02ae0
// ============================================================
// Function: FUN_00e02ae0
// Address: 00e02ae0
// Size: 2803 bytes
// Class: GNFormatter
// String references:
//   "GNFormatter"
//   "{%@}"
//   "GNString"
//   "GNDictionary"
// === GNFormatter properties ===
//                   _name
//                   _cType
//                   _classname
//                   _enumName
//                   _maxLength
//                   _canCodeResourceNameCache


void FUN_00e02ae0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t **pplVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  FUN_00e3ed30();
  lVar7 = *arg1;
  (**(code **)(*this_ptr + 0x370))();
  FUN_00d8c7a0();
  FUN_00e129a0();
  local_38 = lVar7;
  (**(code **)(*this_ptr + 0x370))();
  FUN_00d8c7a0();
  (**(code **)(*this_ptr + 0x378))();
  FUN_00d8c7a0();
  uVar6 = FUN_00e7b4e0();
  uVar9 = FUN_00d8e3d0(extraout_XMM0_Da,uVar6);
  plVar3 = local_58;
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == local_58) {
    if (((char)arg1[1] == '\0') && (local_58 != (int64_t *)0x0)) {
      if ((char)local_50 != '\0') goto LAB_00e02c1a;
      uVar9 = FUN_00d50b00();
      goto LAB_00e02c51;
    }
LAB_00e02c55:
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    lVar7 = arg1[1];
    if ((char)local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      *arg1 = (int64_t)plVar3;
      if (((char)lVar7 != '\0') && (plVar1 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_00e02c51:
      *(void*)(arg1 + 1) = 1;
      goto LAB_00e02c55;
    }
    *arg1 = (int64_t)local_58;
    if (((char)lVar7 != '\0') && (plVar1 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_00e02c1a:
    *(void*)(arg1 + 1) = 1;
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar7 = *arg1;
  local_50 = 1;
  local_58 = &g_024c5048;
  if (lVar7 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_40 = '\x01';
  local_48 = lVar7;
  uVar9 = FUN_00d8cb40(uVar9,&local_58);
  if (local_60 == '\0') {
    if (local_68 != 0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_58 = &g_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  local_38 = local_68;
  FUN_00d8cbf0(uVar9,6);
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  uVar9 = FUN_00de3e90();
  plVar1 = local_58;
  lVar7 = local_68;
  if ((g_026fdd40 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_02, iVar5 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    uVar9 = ___cxa_guard_release();
    lVar7 = local_38;
  }
  pplVar8 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Da_00;
    if (cVar4 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
        lVar7 = local_38;
      }
      cVar4 = FUN_00e8db60();
      pplVar8 = &local_58;
      uVar9 = extraout_XMM0_Da_01;
      if (cVar4 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
    }
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (local_68 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar2 = g_02704000;
  if (plVar1 == (int64_t *)0x0) goto LAB_00e03165;
  if (g_02704000 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  pplVar8 = &local_58;
  FUN_000175c0(uVar9,&local_d0);
  plVar1 = local_58;
  if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_00e02ee7:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00e02ee7;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  uVar9 = FUN_00e12860();
  if (plVar1 != (int64_t *)0x0) {
    uVar9 = FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar7 = g_02784c30;
  if (g_02784c30 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_c0 = lVar7;
  local_b8 = '\x01';
  FUN_000175c0(uVar9,&local_c0);
  plVar1 = local_58;
  if ((g_026fdd40 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
  }
  pplVar8 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar4 = FUN_00e8db60();
      pplVar8 = &local_58;
      if (cVar4 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
    }
  }
  lVar7 = local_38;
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
    lVar7 = local_38;
  }
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_a8 = '\0';
    pplVar8 = &local_58;
    local_b0 = plVar1;
    FUN_00d1fcc0();
    plVar1 = local_58;
    if ((g_026d03d0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_02702048 = FUN_00d4fe50();
      g_02702030 = "GNFormatter";
      g_02702038 = 0x10;
      g_02702040 = FUN_00037b20;
      g_02702050 = 0;
      ram_0000000002702058 = 0;
      g_02702060 = 0;
      ram_0000000002702068 = 0;
      g_02702070 = 0;
      ram_0000000002702078 = 0;
      g_02702080 = 0;
      ram_0000000002702088 = 0;
      g_02702090 = 0;
      ram_0000000002702098 = 0;
      g_027020a0 = 0;
      ram_00000000027020a8 = 0;
      g_027020b0 = 0;
      ram_00000000027020b8 = 0;
      g_027020c0 = 0;
      ram_00000000027020c8 = 0;
      g_027020d0 = 0;
      ram_00000000027020d8 = 0;
      g_027020e0 = 0;
      ram_00000000027020e8 = 0;
      g_027020f0 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_00e030c1:
      pplVar8 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00e030c1;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    (**(code **)(*this_ptr + 0x390))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    lVar7 = local_38;
  }
  FUN_00d50b20();
LAB_00e03165:
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00dfab50
// ============================================================
// Function: FUN_00dfab50
// Address: 00dfab50
// Size: 571 bytes
// Class: GNFormatter
// === GNFormatter properties ===
//                   _name
//                   _cType
//                   _classname
//                   _enumName
//                   _maxLength
//                   _canCodeResourceNameCache


void FUN_00dfab50(void)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  void*puVar4;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  FUN_00d50100();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  pcVar2 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  *(void**)(this_ptr + 0x10) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  *(void**)(this_ptr + 0x18) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(int64_t *)(this_ptr + 0x20);
  *(void**)(this_ptr + 0x20) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x38) = 0xffffffff;
  lVar1 = g_02784a78;
  if (g_02784a78 != 0) {
    FUN_00d50b00();
  }
  FUN_00e61ae0();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    cVar3 = FUN_00c70bc0();
    *(char *)(this_ptr + 0x50) = cVar3;
    lVar1 = g_02784a78;
    if (cVar3 != '\0') {
      if (g_02784a78 != 0) {
        FUN_00d50b00();
      }
      FUN_00e62a80();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 001839c0
// ============================================================
// Function: FUN_001839c0
// Address: 001839c0
// Size: 584 bytes
// Class: GNFormatter
// String references:
//   "GNFormatter"
//   "GNMultipleValuePresenter"
// === GNFormatter properties ===
//                   _name
//                   _cType
//                   _classname
//                   _enumName
//                   _maxLength
//                   _canCodeResourceNameCache


void FUN_001839c0(void)

{
  int64_t lVar1;
  int iVar2;
  char *pcVar3;
  uint32_t uVar4;
  
  lVar1 = FUN_00085720();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_000f60b0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_000f62d0();
    lVar1 = FUN_00085720();
    if (*(char *)(lVar1 + 0xbb) == '\0') {
      FUN_001d54d0();
      iVar2 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar2 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"GNFormatter");
    }
    lVar1 = FUN_00085720();
    if (*(char *)(lVar1 + 0xbb) == '\0') {
      FUN_001d55c0();
      iVar2 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar2 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"GNMultipleValuePresenter");
    }
    FUN_00d50c00();
    uVar4 = FUN_00e87770();
    FUN_00e87920(uVar4,0);
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}

