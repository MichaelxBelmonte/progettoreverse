// Function: FUN_019ea7c0
// Address: 019ea7c0
// Size: 1659 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_019ea7c0(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  byte bVar8;
  byte bVar9;
  int64_t *plVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar11;
  uint32_t uVar12;
  int64_t **pplVar13;
  bool bVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t uVar15;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint32_t local_64;
  int64_t local_60;
  int64_t *local_58;
  char local_50;
  uint local_44;
  uint64_t local_40;
  char local_31;
  
  plVar10 = (int64_t *)*arg1;
  if ((g_026fdd40 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_06, iVar4 != 0)) {
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
    param_1 = ___cxa_guard_release();
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_019ea80c:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar3 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_019ea80c;
  }
  local_60 = *arg1;
  if (local_60 == 0) {
    return;
  }
  local_31 = (char)arg1[1];
  if (local_31 != '\0') {
    param_1 = FUN_00d50b00();
  }
  lVar2 = g_026dc290;
  if (g_026dc290 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  pplVar13 = &local_58;
  FUN_000175c0(param_1,&local_98);
  plVar10 = local_58;
  uVar7 = FUN_00053ac0();
  uVar15 = extraout_XMM0_Da_00;
  if (plVar10 == (int64_t *)0x0) {
LAB_019ea89e:
    pplVar13 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    uVar7 = FUN_00e85ea0();
    uVar15 = extraout_XMM0_Da_01;
    if ((char)uVar7 == '\0') goto LAB_019ea89e;
  }
  plVar10 = *pplVar13;
  if (plVar10 == (int64_t *)0x0) {
    uVar12 = (uint32_t)CONCAT71((int7)((uint64_t)pplVar13 >> 8),1);
    bVar8 = 0;
    bVar9 = 0;
    local_40 = 0;
    plVar10 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar13 + 1) == '\0') {
      uVar7 = FUN_00d50b00();
      uVar15 = extraout_XMM0_Da_02;
    }
    else {
      *(void*)(pplVar13 + 1) = 0;
    }
    bVar8 = 1;
    bVar9 = 1;
    uVar12 = 0;
    local_40 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
  }
  if ((local_50 != '\0') && (bVar9 = bVar8, local_58 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
    local_44 = 0;
    local_88 = g_027e1488;
  }
  else {
    iVar4 = (**(code **)(*this_ptr + 0xd08))();
    iVar5 = FUN_00d45870();
    if (iVar5 == 0) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    else if (iVar5 == 1) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    else if (iVar5 == 2) {
      (**(code **)(*this_ptr + 0xd00))();
    }
    uVar7 = (**(code **)(*this_ptr + 0xd08))();
    local_44 = (uint)CONCAT71((int7)((uint64_t)uVar7 >> 8),iVar4 != (int)uVar7);
    uVar15 = extraout_XMM0_Da_03;
    local_88 = g_027e1488;
  }
  g_027e1488 = local_88;
  local_64 = uVar12;
  if (local_88 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_80 = '\x01';
  pplVar13 = &local_58;
  FUN_000175c0(uVar15,&local_88);
  plVar11 = local_58;
  uVar15 = FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_019eaa03:
    pplVar13 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar15 = extraout_XMM0_Da_04;
    if (cVar3 == '\0') goto LAB_019eaa03;
  }
  plVar1 = *pplVar13;
  if (plVar1 == plVar10) {
    if (((byte)local_64 & plVar1 != (int64_t *)0x0) == 1) {
      if (*(char *)(pplVar13 + 1) != '\0') goto LAB_019eaa5d;
      uVar15 = FUN_00d50b00();
      plVar1 = plVar10;
      goto joined_r0x019eaab1;
    }
  }
  else {
    if (*(char *)(pplVar13 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        uVar15 = FUN_00d50b00();
      }
      if ((bool)(bVar9 & plVar10 != (int64_t *)0x0)) {
        uVar15 = FUN_00d50b20();
      }
    }
    else {
      bVar14 = plVar10 != (int64_t *)0x0;
      plVar10 = plVar1;
      if ((bool)(bVar9 & bVar14)) {
        uVar15 = FUN_00d50b20();
      }
LAB_019eaa5d:
      *(void*)(pplVar13 + 1) = 0;
      plVar1 = plVar10;
    }
joined_r0x019eaab1:
    local_40 = CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
    plVar10 = plVar1;
  }
  local_40 = local_40 & 0xffffffff;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    iVar4 = (**(code **)(&UNK_00001588 + *this_ptr))();
    uVar15 = FUN_00d45870();
    switch(uVar15) {
    case 0:
      (**(code **)(&UNK_00001580 + *this_ptr))();
      break;
    case 1:
      (**(code **)(&UNK_00001580 + *this_ptr))();
      break;
    case 2:
      (**(code **)(&UNK_00001580 + *this_ptr))();
      break;
    case 3:
      (**(code **)(&UNK_00001580 + *this_ptr))();
      break;
    case 4:
      (**(code **)(&UNK_00001580 + *this_ptr))();
    }
    iVar5 = (**(code **)(&UNK_00001588 + *this_ptr))();
    uVar6 = local_44 & 0xff;
    uVar15 = extraout_XMM0_Da_05;
    local_44 = 1;
    if (iVar4 == iVar5) {
      local_44 = uVar6;
    }
  }
  lVar2 = g_027e1490;
  if (g_027e1490 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  pplVar13 = &local_58;
  FUN_000175c0(uVar15,&local_78);
  plVar11 = local_58;
  FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_019eabf8:
    pplVar13 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_019eabf8;
  }
  plVar11 = *pplVar13;
  if (plVar11 == plVar10) {
    cVar3 = (char)local_40;
    if (((char)local_40 == '\0') && (plVar11 != (int64_t *)0x0)) {
      plVar11 = plVar10;
      if (*(char *)(pplVar13 + 1) != '\0') goto LAB_019eac47;
      FUN_00d50b00();
      goto joined_r0x019eac84;
    }
  }
  else {
    if (*(char *)(pplVar13 + 1) == '\0') {
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (((char)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_40 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_019eac47:
      *(void*)(pplVar13 + 1) = 0;
    }
joined_r0x019eac84:
    plVar10 = plVar11;
    cVar3 = '\x01';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
LAB_019eacfd:
    if ((char)local_44 == '\0') goto LAB_019ead0f;
  }
  else {
    iVar4 = (**(code **)(&UNK_000015a0 + *this_ptr))();
    iVar5 = FUN_00d45870();
    if (iVar5 == 0) {
      (**(code **)(&UNK_00001598 + *this_ptr))();
    }
    else if (iVar5 == 1) {
      (**(code **)(&UNK_00001598 + *this_ptr))();
    }
    iVar5 = (**(code **)(&UNK_000015a0 + *this_ptr))();
    if (iVar4 == iVar5) goto LAB_019eacfd;
  }
  (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
              *this_ptr + 0x40))();
LAB_019ead0f:
  if ((cVar3 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}

