// Function: FUN_0190dc80
// Address: 0190dc80
// Size: 1194 bytes
// Class: GNString
// String references:
//   ", %@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_0190dc80(void)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  void*puVar4;
  void* pVar5;
  void*puVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar7;
  int local_80;
  void*local_60;
  char local_58;
  void*local_50;
  char local_48;
  
  if (*(int64_t *)(arg1 + 0x68) == 0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    lVar1 = *(int64_t *)(arg1 + 0x50);
    if (lVar1 != 0) {
      local_80 = -1;
      while (local_80 = local_80 + 1, local_80 < *(int *)(lVar1 + 0xc)) {
        pVar5 = (void*)*(void*)(lVar1 + 0x10);
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017d1790();
        if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (local_50 != (void*)0x0) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017d1790();
          if (local_58 == '\0') {
            if (local_60 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_50 = local_60;
          local_48 = '\0';
          FUN_00d235a0();
          if (local_60 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_018c8180();
    }
    lVar1 = g_027feca0;
    if (g_027feca0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d242c0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar6 = &g_025795a8;
    *puVar4 = &g_025795a8;
    (*g_025795c0)();
    lVar1 = *(int64_t *)(arg1 + 0x68);
    *(void**)(arg1 + 0x68) = puVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      if (0 < *(int *)((int64_t)puVar2 + 0xc)) {
        iVar7 = 0;
        do {
          if (iVar7 == 0) {
            pvVar3 = _pthread_getspecific((void*)puVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0190bc50();
            if (local_48 == '\0') {
              if (local_50 != (void*)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00d8dbf0();
            if (local_50 != (void*)0x0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar3 = _pthread_getspecific((void*)puVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0190bc50();
            local_48 = '\x01';
            if (local_60 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d94d80();
            local_50 = &g_024c5048;
            if (local_60 != (void*)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)((int64_t)puVar2 + 0xc));
      }
      FUN_0190eff0();
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *(int64_t *)(arg1 + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

