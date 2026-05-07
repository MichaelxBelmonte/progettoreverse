// Function: FUN_0141f160
// Address: 0141f160
// Size: 552 bytes
// Class: Unknown

void FUN_0141f160(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *plVar4;
  void* pVar5;
  char *pcVar6;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80 [8];
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  if ((*this_ptr != 0) && (*(int *)(*this_ptr + 0xc) != 0)) {
    FUN_00d23310();
    pVar5 = CONCAT31((int3)((uint)param_1 >> 8),local_80[0]);
    pcVar6 = local_38;
    if (local_80[0] != '\0') {
      pcVar6 = local_80;
    }
    local_38[0] = local_80[0];
    *pcVar6 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    lVar2 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    plVar4 = (int64_t *)FUN_0114eca0();
    (**(code **)(*plVar4 + 0x18))();
    FUN_012a51b0();
    local_68 = *this_ptr;
    local_60 = '\0';
    FUN_012a50e0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    local_58 = lVar2;
    local_50 = '\0';
    FUN_012a5160();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = g_028ace88;
    if ((g_028ace88 != plVar4) &&
       (FUN_00d50b00(), g_028ace88 = plVar4, plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (g_028ace90 == '\0') {
      g_028ace90 = '\x01';
      FUN_00e8cb90();
    }
    FUN_00e34260();
    FUN_00d50b20();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

