// Function: FUN_0190e330
// Address: 0190e330
// Size: 1924 bytes
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


int64_t * FUN_0190e330(void)

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
  bool bVar8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int local_88;
  int64_t local_78;
  char local_70;
  void*local_68;
  char local_60;
  void*local_48;
  char local_40;
  
  if (*(int64_t *)(arg1 + 0x70) == 0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    lVar1 = *(int64_t *)(arg1 + 0x50);
    if (lVar1 != 0) {
      local_88 = -1;
      while (local_88 = local_88 + 1, local_88 < *(int *)(lVar1 + 0xc)) {
        pVar5 = (void*)*(void*)(lVar1 + 0x10);
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017d1790();
        if (local_68 == (void*)0x0) {
          bVar8 = false;
        }
        else {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017d1790();
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0190bc80();
          if (local_48 == (void*)0x0) {
            bVar8 = false;
          }
          else {
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017d1790();
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0190bc80();
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01913950();
            bVar8 = local_c0 != 0;
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (bVar8) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017d1790();
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0190bc80();
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01913950();
          if (local_40 == '\0') {
            if (local_48 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_68 = local_48;
          local_60 = '\0';
          FUN_00d235a0();
          if (local_48 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
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
    lVar1 = *(int64_t *)(arg1 + 0x70);
    *(void**)(arg1 + 0x70) = puVar4;
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
            FUN_0190a100();
            if (local_60 == '\0') {
              if (local_68 != (void*)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            FUN_00d8dbf0();
            if (local_68 != (void*)0x0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar3 = _pthread_getspecific((void*)puVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0190a100();
            local_60 = '\x01';
            if (local_48 != (void*)0x0) {
              FUN_00d50b00();
            }
            FUN_00d94d80();
            local_68 = &g_024c5048;
            if (local_48 != (void*)0x0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)((int64_t)puVar2 + 0xc));
      }
      FUN_018c8220();
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *(int64_t *)(arg1 + 0x70);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

