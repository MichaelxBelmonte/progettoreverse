// Function: FUN_00493490
// Address: 00493490
// Size: 1971 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_00493490(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  local_40 = param_2;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar9 = this_ptr;
  do {
    (**(code **)(*plVar9 + 0x370))();
    if (local_50 == plVar9) {
      if (((local_38[0] == '\0') && (local_50 != (int64_t *)0x0)) && (local_48[0] != '\0'))
      goto LAB_00493537;
    }
    else {
      plVar9 = local_50;
      if (local_48[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar5 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar5 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
LAB_00493537:
        local_38[0] = '\x01';
        pcVar5 = local_48;
      }
      *pcVar5 = '\0';
    }
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar8 = &g_02802688;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar8 = (int64_t *)&stack0xffffffffffffffa0;
      if (cVar3 == '\0') {
        plVar8 = &g_02802688;
      }
    }
    if (*plVar8 != 0) {
      if ((local_38[0] == '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (this_ptr != (int64_t *)0x0) goto LAB_004935f7;
      if (plVar9 == (int64_t *)0x0) {
        return;
      }
      goto LAB_0049361b;
    }
  } while (plVar9 != (int64_t *)0x0);
  if (this_ptr == (int64_t *)0x0) {
    return;
  }
LAB_004935f7:
  FUN_00d50b20();
  if (plVar9 == (int64_t *)0x0) {
    return;
  }
  FUN_00d50b00();
LAB_0049361b:
  local_38[0] = '\0';
  plVar9 = this_ptr;
  do {
    (**(code **)(*plVar9 + 0x370))();
    if (local_50 == plVar9) {
      if (((local_38[0] == '\0') && (local_50 != (int64_t *)0x0)) && (local_48[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_00493687;
      }
    }
    else {
      plVar9 = local_50;
      if (local_48[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar5 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar5 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_00493687:
        local_38[0] = '\x01';
        pcVar5 = local_48;
      }
      *pcVar5 = '\0';
    }
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddb0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
    plVar8 = &g_02802688;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar8 = (int64_t *)&stack0xffffffffffffffa0;
      if (cVar3 == '\0') {
        plVar8 = &g_02802688;
      }
    }
    plVar2 = local_40;
    if (*plVar8 != 0) {
      if ((local_38[0] == '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x00493801;
    }
  } while (plVar9 != (int64_t *)0x0);
  plVar9 = (int64_t *)0x0;
joined_r0x00493801:
  pVar7 = (void*)plVar8;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_0063f230();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != (int64_t *)0x0) {
      uVar10 = FUN_0063f230();
      local_c0 = *plVar2;
      local_b8 = '\0';
      FUN_0025f7c0(uVar10,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_013941c0();
  if (local_48[0] == '\0') {
    if (local_50 != (int64_t *)0x0) goto LAB_0049394a;
  }
  else if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
LAB_0049394a:
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01393860();
    local_68 = 0;
    if (local_48[0] == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48[0] = '\0';
    }
    local_68 = '\x01';
    local_70 = local_50;
    FUN_01394160();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_0134a780();
  }
  local_b0 = *arg1;
  local_a8 = '\0';
  local_a0 = *plVar2;
  local_98 = '\0';
  FUN_007860e0(uVar10,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  FUN_0048b260();
  if (local_48[0] == '\0') {
    if (local_50 == (int64_t *)0x0) goto LAB_00493b6f;
    FUN_00d50b00();
  }
  else if (local_50 == (int64_t *)0x0) {
LAB_00493b6f:
    bVar1 = true;
    goto LAB_00493b72;
  }
  if (((int64_t *)this_ptr[0x24] == (int64_t *)0x0) || (this_ptr[0x25] == 0)) {
    bVar1 = false;
  }
  else {
    (**(code **)(*(int64_t *)this_ptr[0x24] + 0x930))();
    (**(code **)(&UNK_00001780 + *local_50))();
    (**(code **)(*(int64_t *)this_ptr[0x25] + 0x930))();
    bVar1 = false;
    (**(code **)(&g_00001788 + *local_50))();
  }
LAB_00493b72:
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_88 = '\0';
  local_90 = (int64_t *)0x0;
  local_80 = (int64_t *)0x0;
  local_78 = '\0';
  FUN_01397bb0(0,&local_80);
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

