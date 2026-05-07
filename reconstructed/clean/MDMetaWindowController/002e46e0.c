// Function: FUN_002e46e0
// Address: 002e46e0
// Size: 864 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void* FUN_002e46e0(void)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar6;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00275ab0();
  *plVar3 = (int64_t)&g_024e31c0;
  plVar3[2] = (int64_t)&g_024e3c40;
  plVar3[0x27] = (int64_t)&g_024e3c80;
  *(void*)((int64_t)plVar3 + 0x1ae) = 0;
  plVar3[0x36] = 0;
  plVar3[0x37] = 0;
  plVar3[0x38] = 0;
  plVar3[0x39] = 0;
  *(void*)(plVar3 + 0x3a) = 0;
  (*g_024e31d8)();
  (**(code **)(*plVar3 + 0x4d0))(0,g_023b1e60);
  if (arg1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar6 = arg1;
  do {
    (**(code **)(*plVar6 + 0x370))();
    if (local_48 == plVar6) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_002e47f7;
      }
    }
    else {
      plVar6 = local_48;
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
LAB_002e47f7:
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
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar5 = (int64_t *)&stack0xffffffffffffff90;
      if (cVar1 == '\0') {
        plVar5 = &g_02802688;
      }
    }
    if (*plVar5 != 0) {
      if ((local_38[0] == '\0') && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (arg1 == (int64_t *)0x0) goto LAB_002e498c;
      goto LAB_002e4984;
    }
    if (plVar6 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
      if (arg1 != (int64_t *)0x0) {
LAB_002e4984:
        FUN_00d50b20();
      }
LAB_002e498c:
      FUN_00756eb0();
      plVar5 = local_48 + 2;
      if (local_48 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
      }
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x10))();
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_01a34e60();
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *this_ptr = plVar3;
      *(void*)(this_ptr + 1) = 1;
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      return this_ptr;
    }
  } while( true );
}

