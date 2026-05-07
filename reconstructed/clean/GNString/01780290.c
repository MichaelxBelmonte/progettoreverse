// Function: FUN_01780290
// Address: 01780290
// Size: 1337 bytes
// Class: GNString
// String references:
//   "%@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_01780290(int64_t *param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  void *pvVar8;
  void*puVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  int64_t arg1;
  uint uVar13;
  void*this_ptr;
  uint64_t unaff_R14;
  bool bVar14;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint64_t local_68;
  int64_t *local_60;
  void*local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  void*local_38;
  
  if (param_2 == -0x80000000) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  local_60 = param_1;
  if (*param_1 == 0) {
    local_38 = *(void**)(arg1 + 0x20);
    uVar13 = 0;
    if (local_38 == (void*)0x0) {
      local_68 = 0;
      local_38 = (void*)0x0;
    }
    else {
      uVar7 = FUN_00d50b00();
      local_68 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    }
  }
  else {
    FUN_0177c8c0();
    local_38 = local_58;
    puVar9 = local_58;
    if (local_58 == (void*)0x0) {
      local_38 = (void*)0x0;
      uVar7 = 0;
    }
    else {
      uVar7 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
      }
    }
    local_68 = uVar7;
    pvVar8 = _pthread_getspecific((void*)puVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_01743720();
    uVar6 = FUN_01794580();
    uVar13 = 0;
    if (uVar6 < 7) {
      uVar13 = uVar6;
    }
    iVar12 = uVar13 * 2;
    iVar10 = 6;
    if (iVar12 < 6) {
      iVar10 = iVar12;
    }
    uVar6 = (iVar12 - iVar10) + 6;
    cVar11 = (char)((uVar6 & 0xff) * 0x25 >> 8);
    param_2 = (param_2 - iVar5) +
              ((byte)((char)uVar6 + ((byte)(((byte)((char)uVar6 - cVar11) >> 1) + cVar11) >> 2) * -7
                     ) - uVar6) + uVar13 * 2;
  }
  iVar5 = 0;
  if (5 < param_2) {
    iVar5 = 0xc;
    if (param_2 < 0xc) {
      iVar5 = param_2;
    }
    uVar6 = ((param_2 - iVar5) + 6U) / 7;
    param_2 = param_2 + uVar6 * -7 + -7;
    iVar5 = uVar6 + 1;
  }
  if (param_2 < -1) {
    iVar12 = -8;
    if (-8 < param_2) {
      iVar12 = param_2;
    }
    uVar6 = (uint)(iVar12 - param_2 != 0);
    uVar6 = ((iVar12 - param_2) - uVar6) / 7 + uVar6;
    param_2 = param_2 + uVar6 * 7 + 7;
    iVar5 = iVar5 + ~uVar6;
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_025795a8;
  (*g_025795c0)();
  if (*local_60 == 0) {
    lVar1 = *(int64_t *)
             (local_38[2] + (int64_t)*(int *)(&g_02412100 + (uint64_t)(param_2 + 1) * 4) * 8);
    local_50 = 1;
    local_58 = &g_024c5048;
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    FUN_00d94d80();
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  iVar12 = iVar5;
  if (0 < iVar5) {
    do {
      FUN_00d8db40();
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (iVar5 < 0) {
    iVar12 = 0;
    do {
      FUN_00d8db40();
      iVar12 = iVar12 + -1;
    } while (iVar5 < iVar12);
  }
  if (*local_60 != 0) {
    iVar5 = (int)(*(int *)(&g_02412100 + (uint64_t)(param_2 + 1) * 4) - uVar13) % 7;
    lVar1 = *(int64_t *)(local_38[2] + (int64_t)(int)((iVar5 >> 0x1f & 7U) + iVar5) * 8);
    local_50 = 1;
    local_58 = &g_024c5048;
    local_40 = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    FUN_00d94d80();
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar4 = local_38;
  lVar1 = g_027ce8c0;
  if (*(char *)(arg1 + 0x30) == '\0') goto LAB_01780772;
  if (g_027ce8c0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_0277d278;
  local_88 = lVar1;
  local_80 = '\x01';
  if (g_0277d278 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_70 = '\x01';
  FUN_00d98db0(&local_78,&local_88,0);
  puVar3 = local_58;
  if (puVar9 == local_58) {
LAB_01780736:
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((char)local_50 == '\0') {
      if (local_58 != (void*)0x0) {
        FUN_00d50b00();
      }
      bVar14 = puVar9 != (void*)0x0;
      puVar9 = puVar3;
      if (bVar14) {
        FUN_00d50b20();
      }
      goto LAB_01780736;
    }
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
    local_50 = local_50 & 0xffffff00;
    puVar9 = puVar3;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
LAB_01780772:
  *this_ptr = puVar9;
  *(void*)(this_ptr + 1) = 1;
  if (((char)local_68 != '\0') && (puVar4 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

