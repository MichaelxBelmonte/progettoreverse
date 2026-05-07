// Function: FUN_018c1dd0
// Address: 018c1dd0
// Size: 641 bytes
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


void FUN_018c1dd0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int iVar2;
  void *pvVar3;
  void* pVar4;
  uint64_t uVar5;
  int64_t *arg1;
  uint32_t uVar6;
  int64_t local_a0;
  uint8_t local_98;
  int64_t *local_90;
  uint8_t local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  char local_38;
  
  local_a0 = *param_2;
  local_98 = 0;
  uVar5 = param_1;
  FUN_018bf620(param_1,&local_a0);
  plVar1 = local_48;
  pVar4 = (void*)uVar5;
  local_38 = local_40 != '\0';
  local_80 = local_48;
  if ((bool)local_38) {
    local_40 = '\0';
  }
  if (local_48 == (int64_t *)0x0) {
    local_68 = *arg1;
    local_60 = '\0';
    local_58 = *param_2;
    local_50 = '\0';
    FUN_00d61730(param_1 & 0xff,&local_58);
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
    pVar4 = 0x11bbd10;
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
  uVar6 = FUN_00e85ea0();
  plVar1 = local_80;
  local_90 = local_80;
  local_88 = 0;
  FUN_018bf6f0(uVar6,&local_90);
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_018c1f85;
    FUN_00d50b00();
  }
  else if (local_48 == (int64_t *)0x0) goto LAB_018c1f85;
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = *arg1;
  local_70 = '\0';
  FUN_01883960();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_018c1f85:
  if ((local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

