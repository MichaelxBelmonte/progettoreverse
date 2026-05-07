// Function: FUN_01d67820
// Address: 01d67820
// Size: 893 bytes
// Class: GNMenuItem
// String references:
//   "%s.%s"
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


void FUN_01d67820(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  void*puVar6;
  void*this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  uint local_70;
  uint64_t local_68;
  uint64_t local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_00d6f370();
  local_b8 = g_027f09d8;
  if (g_027f09d8 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00d710b0(&local_a8,&local_b8);
  plVar1 = local_78;
  if ((char)local_70 == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_70 = local_70 & 0xffffff00;
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    uVar5 = FUN_00003050();
    local_60 = FUN_00003060();
    local_70 = 2;
    local_78 = &g_02685078;
    local_68 = uVar5;
    FUN_00d8cb40(&g_02685078,&local_78);
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto LAB_01d67b82;
    }
  }
  iVar4 = FUN_000030b0();
  if (iVar4 == 2) {
LAB_01d67a5c:
    FUN_00d6f370();
    plVar2 = local_38;
    uVar5 = FUN_00003050();
    local_60 = FUN_00003060();
    local_70 = 2;
    local_78 = &g_02685078;
    local_68 = uVar5;
    FUN_00d8cb40(&g_02685078,&local_78);
    local_48 = local_88;
    local_40 = 0;
    local_98 = g_027f09d8;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
        local_98 = g_027f09d8;
      }
    }
    else {
      local_80 = '\0';
    }
    local_40 = '\x01';
    g_027f09d8 = local_98;
    if (local_98 != 0) {
      local_40 = '\x01';
      FUN_00d50b00();
    }
    local_90 = '\x01';
    (**(code **)(*plVar2 + 0x80))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_78 + 0x550))();
    if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') goto LAB_01d67a5c;
    puVar6 = (void*)FUN_00e8fc40();
    FUN_000161a0();
    *puVar6 = &g_02684aa0;
    puVar6[0xe] = 0;
    FUN_00d500e0();
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
LAB_01d67b82:
  FUN_00d50b20();
  return;
}

