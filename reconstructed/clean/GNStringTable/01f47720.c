// Function: FUN_01f47720
// Address: 01f47720
// Size: 1113 bytes
// Class: GNStringTable
// String references:
//   "GNStringTable"

int64_t * FUN_01f47720(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t **pplVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t *this_ptr;
  int64_t *plVar10;
  uint32_t uVar11;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60 [8];
  int64_t *local_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  uint64_t local_40;
  char local_38 [8];
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_78 = plVar5;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (int64_t)&g_02572358;
  (*g_02572370)();
  FUN_01e5b340();
  uVar11 = FUN_01e5b320();
  local_90 = '\0';
  local_98 = plVar5;
  FUN_01e2af10(uVar11,&local_98);
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e5b320();
  FUN_00ca1380();
  plVar10 = local_68;
  pcVar8 = local_38;
  if (local_60[0] != '\0') {
    pcVar8 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar8 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38[0] == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01f47899;
    }
LAB_01f47aad:
    plVar10 = (int64_t *)0x0;
    bVar1 = true;
    local_40 = 0;
  }
  else {
    if (local_68 == (int64_t *)0x0) goto LAB_01f47aad;
LAB_01f47899:
    local_60[0] = '\0';
    local_68 = (int64_t *)0x0;
    local_70 = plVar10;
    local_58 = plVar10;
    local_50 = -1;
    iStack_4c = 0;
    iStack_48 = 0;
    while( true ) {
      lVar9 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)((int64_t)local_58 + 0xc) <= local_50) break;
      plVar10 = *(int64_t **)(local_58[2] + 8 + lVar9 * 8);
      local_68 = plVar10;
      uVar6 = 0;
      if ((g_026d6328 == '\0') && (uVar6 = ___cxa_guard_acquire(), (int)uVar6 != 0)) {
        g_026d6278 = FUN_00d4fe50();
        g_026d6260 = "GNStringTable";
        g_026d6268 = 0x28;
        g_026d6270 = FUN_0005eaf0;
        g_026d6280 = 0;
        ram_00000000026d6288 = 0;
        g_026d6290 = 0;
        ram_00000000026d6298 = 0;
        g_026d62a0 = 0;
        ram_00000000026d62a8 = 0;
        g_026d62b0 = 0;
        ram_00000000026d62b8 = 0;
        g_026d62c0 = 0;
        ram_00000000026d62c8 = 0;
        g_026d62d0 = 0;
        ram_00000000026d62d8 = 0;
        g_026d62e0 = 0;
        ram_00000000026d62e8 = 0;
        g_026d62f0 = 0;
        ram_00000000026d62f8 = 0;
        g_026d6300 = 0;
        ram_00000000026d6308 = 0;
        g_026d6310 = 0;
        ram_00000000026d6318 = 0;
        g_026d6320 = 0;
        uVar6 = ___cxa_guard_release();
      }
      pplVar7 = (int64_t **)&g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        uVar6 = FUN_00e85ea0();
        pplVar7 = &local_68;
        if ((char)uVar6 == '\0') {
          pplVar7 = (int64_t **)&g_02802688;
        }
      }
      plVar4 = local_70;
      plVar10 = *pplVar7;
      if (plVar10 != (int64_t *)0x0) {
        if (*(char *)(pplVar7 + 1) == '\0') {
          uVar6 = FUN_00d50b00();
          local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          FUN_00083b20();
          goto joined_r0x01f47b71;
        }
        *(void*)(pplVar7 + 1) = 0;
        local_40 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        goto LAB_01f47a3c;
      }
      if (iStack_4c != 0) {
        if (iStack_4c < 1) {
          iStack_4c = -iStack_4c;
        }
        else {
          local_50 = local_50 - iStack_4c;
          FUN_00d23690();
          iStack_48 = iStack_48 + iStack_4c;
          iStack_4c = 0;
        }
      }
    }
    local_40 = 0;
    plVar10 = (int64_t *)0x0;
LAB_01f47a3c:
    plVar4 = local_70;
    FUN_00083b20();
joined_r0x01f47b71:
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    bVar3 = true;
    bVar2 = true;
    bVar1 = true;
    if (plVar10 != (int64_t *)0x0) {
      local_80 = '\0';
      local_88 = plVar10;
      FUN_00d23d90();
      bVar1 = false;
      if ((local_80 != '\0') && (bVar1 = false, local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
        bVar1 = false;
      }
    }
    if (plVar5 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      goto joined_r0x01f47aa3;
    }
  }
  local_60[0] = '\0';
  local_68 = (int64_t *)0x0;
  iStack_4c = 0;
  iStack_48 = 0;
  local_58 = plVar5;
  for (lVar9 = 0; local_50 = (int)lVar9, local_50 < *(int *)((int64_t)plVar5 + 0xc);
      lVar9 = lVar9 + 1) {
    local_68 = *(int64_t **)(plVar5[2] + lVar9 * 8);
    FUN_00d50130();
  }
  FUN_00083b20();
  bVar3 = false;
  bVar2 = false;
  *(void*)(this_ptr + 1) = 0;
joined_r0x01f47aa3:
  if (((char)local_40 == '\0') && (bVar2 = bVar3, !bVar1)) {
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)plVar10;
  *(void*)(this_ptr + 1) = 1;
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

