// Function: FUN_003544d0
// Address: 003544d0
// Size: 2482 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_003544d0(void* param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_003baed0();
  FUN_003ba620();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_004f9670();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 200);
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004f78f0();
  (**(code **)(*plVar6 + 0x918))();
  plVar6 = *(int64_t **)(this_ptr + 0xd0);
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004f7980();
  (**(code **)(*plVar6 + 0x918))();
  FUN_003ba620();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8b20();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(int64_t **)(this_ptr + 0xd8);
  if (local_40 == 0) {
    (**(code **)(*plVar6 + 0x998))();
  }
  else {
    FUN_003ba620();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f4aa0();
    (**(code **)(*plVar6 + 0x918))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004f7a80();
  (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x928))();
  FUN_0035a0d0();
  FUN_01c00e50();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_01bbf570();
  iVar1 = *(int *)(local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 < 1) {
    if (*(int64_t *)(this_ptr + 0xe0) != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x478))();
      }
    }
    if (*(int64_t *)(this_ptr + 0x80) != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        FUN_01e53c20();
        lVar2 = *(int64_t *)(this_ptr + 0x80);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(MACH_HEADER._0_8_ + 0x450))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (*(int64_t *)(this_ptr + 0x88) != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        FUN_01e53c20();
        lVar2 = *(int64_t *)(this_ptr + 0x88);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(MACH_HEADER._0_8_ + 0x450))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (*(int64_t *)(this_ptr + 0xe0) == 0) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(plVar6 + 0x27) = 0;
      plVar6[0x2e] = 0;
      *(void*)(plVar6 + 0x2f) = 0;
      plVar6[0x30] = 0;
      *(void*)(plVar6 + 0x31) = 0;
      plVar6[0x28] = 0;
      plVar6[0x29] = 0;
      *(void*)(plVar6 + 0x2a) = 0;
      plVar6[0x2b] = 0;
      plVar6[0x2c] = 0;
      *(void*)((int64_t)plVar6 + 0x165) = 0;
      *(void*)((int64_t)plVar6 + 0x18c) = 0;
      *(void*)((int64_t)plVar6 + 0x194) = 0;
      *(void*)((int64_t)plVar6 + 0x199) = 0;
      plVar6[0x35] = 0;
      plVar6[0x36] = 0;
      plVar6[0x37] = 0;
      plVar6[0x38] = 0;
      *plVar6 = (int64_t)&g_02677e10;
      plVar6[2] = (int64_t)&g_026788e8;
      plVar6[0x39] = (int64_t)&g_02678928;
      *(void*)((int64_t)plVar6 + 500) = 0;
      *(void*)(plVar6 + 0x3f) = 0;
      plVar6[0x43] = 0;
      plVar6[0x3c] = 0;
      plVar6[0x3d] = 0;
      plVar6[0x3a] = 0;
      plVar6[0x3b] = 0;
      *(void*)(plVar6 + 0x3e) = 0;
      *(void*)((int64_t)plVar6 + 0x1fc) = 0;
      *(void*)((int64_t)plVar6 + 0x204) = 0;
      *(void*)((int64_t)plVar6 + 0x20c) = 0;
      (*g_02677e28)();
      lVar2 = *(int64_t *)(this_ptr + 0xe0);
      *(int64_t **)(this_ptr + 0xe0) = plVar6;
      if (lVar2 != 0) {
        FUN_00d50b20();
        plVar6 = *(int64_t **)(this_ptr + 0xe0);
      }
      (**(code **)(*plVar6 + 0x4d0))(0,g_023b2d60);
      plVar6 = *(int64_t **)(this_ptr + 0xe0);
      FUN_00d50b00();
      (**(code **)(*plVar6 + 0xa20))();
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      FUN_01cef4c0();
      lVar2 = g_027032b8;
      plVar6 = *(int64_t **)(this_ptr + 0xe0);
      if (g_027032b8 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar6 + 0xa10))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    cVar4 = FUN_01bc1700();
    lVar3 = g_027032c8;
    lVar2 = g_027032c0;
    if (cVar4 == '\0') {
      if (g_027032c8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01cef3b0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_027032c0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01cef3b0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      FUN_01e53c20();
      lVar2 = *(int64_t *)(this_ptr + 0xe0);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(MACH_HEADER._0_8_ + 0x450))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x80) != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x478))();
      }
    }
    if (*(int64_t *)(this_ptr + 0x88) != 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x478))();
      }
    }
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

