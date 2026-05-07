// Function: FUN_003a0a70
// Address: 003a0a70
// Size: 1049 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void* FUN_003a0a70(uint64_t param_1,int param_2)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar6;
  int64_t local_88;
  char local_80;
  void*local_78;
  char local_70;
  int64_t *plVar7;
  char local_60;
  int64_t *plVar8;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar7 = arg1;
  do {
    (**(code **)(*plVar7 + 0x370))();
    if (local_48 == plVar7) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_003a0b37;
      }
    }
    else {
      plVar7 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar4 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar4 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_003a0b37:
        local_38[0] = '\x01';
        pcVar4 = local_40;
      }
      *pcVar4 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddb0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_026e0ab8 = FUN_00015ff0();
      g_026e0aa0 = "MDMetaWindowController";
      g_026e0aa8 = 0x198;
      g_026e0ab0 = FUN_0006dea0;
      g_026e0ac0 = 0;
      ram_00000000026e0ac8 = 0;
      g_026e0ad0 = 0;
      g_026e0b48 = 0;
      ram_00000000026e0b50 = 0;
      g_026e0b58 = 0;
      g_026e0b5a = 1;
      g_026e0ad8 = 0;
      ram_00000000026e0ae0 = 0;
      g_026e0ae8 = 0;
      ram_00000000026e0af0 = 0;
      g_026e0af8 = 0;
      ram_00000000026e0b00 = 0;
      g_026e0b08 = 0;
      ram_00000000026e0b10 = 0;
      g_026e0b18 = 0;
      ram_00000000026e0b20 = 0;
      g_026e0b28 = 0;
      ram_00000000026e0b30 = 0;
      g_026e0b38 = 0;
      ram_00000000026e0b40 = 0;
      g_026e0b63 = 0;
      g_026e0b5b = 0;
      ___cxa_guard_release();
    }
    plVar5 = &g_02802688;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = (int64_t *)&stack0xffffffffffffff98;
      if (cVar1 == '\0') {
        plVar5 = &g_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_38[0] == '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      plVar5 = plVar7;
      if (arg1 == (int64_t *)0x0) goto LAB_003a0cc3;
      goto LAB_003a0cbe;
    }
  } while (plVar7 != (int64_t *)0x0);
  plVar5 = (int64_t *)0x0;
  if (arg1 != (int64_t *)0x0) {
LAB_003a0cbe:
    FUN_00d50b20();
  }
LAB_003a0cc3:
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x5d8))();
    plVar8 = local_48;
    if (local_40[0] != '\0') goto LAB_003a0d16;
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_003a0d16;
    }
  }
  plVar8 = (int64_t *)0x0;
LAB_003a0d16:
  if (0 < param_2) {
    do {
      uVar6 = FUN_006f3f00();
      local_88 = 0;
      local_80 = '\0';
      FUN_0078a130(uVar6,&local_88);
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      FUN_00d21140();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_006f4810();
  local_70 = '\0';
  local_78 = puVar3;
  FUN_002ea230();
  if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

