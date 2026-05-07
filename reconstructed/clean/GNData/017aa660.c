// Function: FUN_017aa660
// Address: 017aa660
// Size: 797 bytes
// Class: GNData
// String references:
//   "com.celemony.scale.Custom.%@"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_017aa660(void* param_1,int64_t *param_2)

{
  void*puVar1;
  void*puVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  void*this_ptr;
  void*puVar7;
  uint32_t uVar8;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  void*local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  uint8_t local_31;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_026034e8;
  puVar3[0xc] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(void*)((int64_t)puVar3 + 0x55) = 0;
  FUN_00d500e0();
  pvVar4 = _pthread_getspecific(param_1);
  puVar7 = puVar3;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    puVar7 = (void*)puVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  FUN_0173b120();
  puVar2 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_017aa730;
    }
    if (puVar7[7] != 0) {
      puVar7[7] = 0;
      local_31 = 1;
      goto LAB_017aa766;
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
LAB_017aa730:
    puVar1 = (void*)puVar7[7];
    if (puVar1 != puVar2) {
      local_31 = puVar2 == (void*)0x0;
      if (!(bool)local_31) {
        FUN_00d50b00();
      }
      puVar7[7] = puVar2;
      if (puVar1 != (void*)0x0) {
LAB_017aa766:
        FUN_00d50b20();
      }
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar6 = *param_2;
    puVar7 = puVar3;
    if (puVar3[9] == lVar6) goto LAB_017aa828;
  }
  else {
    lVar6 = *param_2;
    puVar7 = (void*)puVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    if (((void*)puVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4])[9] == lVar6)
    goto LAB_017aa828;
  }
  FUN_00d64850();
  lVar5 = puVar7[9];
  if (lVar5 != lVar6) {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    puVar7[9] = lVar6;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
LAB_017aa828:
  pvVar4 = _pthread_getspecific(param_1);
  puVar7 = puVar3;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    puVar7 = (void*)puVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  uVar8 = FUN_00d9bb60();
  local_50 = 1;
  local_58 = &g_024c5048;
  local_40 = 0;
  if (local_88 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_48 = local_88;
  local_40 = '\x01';
  FUN_00d8cb40(uVar8,&local_58);
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (puVar7[8] != local_68) {
    FUN_00d64850();
    lVar5 = puVar7[8];
    if (lVar5 != local_68) {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      puVar7[8] = local_68;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_58 = &g_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

