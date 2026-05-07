// Function: FUN_018c1400
// Address: 018c1400
// Size: 866 bytes
// Class: MUTagOptionAttribute
// String references:
//   "MUTagOptionAttribute"
// === MUTagOptionAttribute properties ===
//                   _allowsMultipleOptions
//                   _allOptionsCache
//                   _virtualOptionType
//                   _isInstrumentTypeSeparated
//                   _titleRenamings
//                   _virtualParent
//                   _virtualRoot
//                   _virtualChilds


void FUN_018c1400(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t *plVar7;
  uint32_t uVar8;
  int64_t local_c0;
  uint8_t local_b8;
  int64_t *local_b0;
  uint8_t local_a8;
  uint8_t local_98;
  int64_t *local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  char local_38;
  
  local_c0 = *param_2;
  local_b8 = 0;
  uVar6 = param_1;
  FUN_018bf620(param_1,&local_c0);
  plVar1 = local_48;
  pVar5 = (void*)uVar6;
  local_38 = local_40 != '\0';
  local_90 = local_48;
  if ((bool)local_38) {
    local_40 = '\0';
  }
  if (local_48 == (int64_t *)0x0) {
    local_68 = *arg1;
    local_60 = '\0';
    local_58 = *param_2;
    local_50 = '\0';
    FUN_00d61130(param_1 & 0xff,&local_58);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 == '\0') {
      return;
    }
    if (local_68 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if ((g_027b5198 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_027b50e8 = FUN_011b5ca0();
    g_027b50d0 = "MUTagOptionAttribute";
    g_027b50d8 = 0xe8;
    pVar5 = 0x11bbd10;
    g_027b50e0 = FUN_011bbd10;
    g_027b50f0 = 0;
    ram_00000000027b50f8 = 0;
    g_027b5100 = 0;
    ram_00000000027b5108 = 0;
    g_027b5110 = 0;
    ram_00000000027b5118 = 0;
    g_027b5120 = 0;
    ram_00000000027b5128 = 0;
    g_027b5130 = 0;
    ram_00000000027b5138 = 0;
    g_027b5140 = 0;
    ram_00000000027b5148 = 0;
    g_027b5150 = 0;
    ram_00000000027b5158 = 0;
    g_027b5160 = 0;
    ram_00000000027b5168 = 0;
    g_027b5170 = 0;
    ram_00000000027b5178 = 0;
    g_027b5180 = 0;
    ram_00000000027b5188 = 0;
    g_027b5190 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar1 + 0x360))();
  uVar8 = FUN_00e85ea0();
  plVar1 = local_90;
  local_b0 = local_90;
  local_a8 = 0;
  FUN_018bf6f0(uVar8,&local_b0);
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_018c155d;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_018c155d:
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = *arg1;
    local_80 = '\0';
    FUN_018836f0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_018c1693;
  }
  pvVar3 = _pthread_getspecific(pVar5);
  plVar7 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar7 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  local_78 = *arg1;
  local_70 = '\0';
  (**(code **)(*plVar7 + 0x368))();
  plVar7 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_98 = 1;
  FUN_018bfc40();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_018c1693:
  if ((local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

