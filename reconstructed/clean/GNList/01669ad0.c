// Function: FUN_01669ad0
// Address: 01669ad0
// Size: 1544 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01669ad0(void* param_1)

{
  int64_t lVar1;
  void*puVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  void*unaff_RBX;
  undefined7 uVar9;
  uint64_t uVar8;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t local_f8;
  int64_t local_f0;
  char local_e8;
  void*local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  void*local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_a8 = '\0';
  local_b0 = 0;
  local_98 = '\0';
  local_a0 = 0;
  uVar3 = 0;
  if (unaff_ESI != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    unaff_RBX = local_70;
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RBX != (void*)0x0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      unaff_RBX = local_70;
      pvVar4 = _pthread_getspecific(param_1);
      puVar2 = local_70;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), unaff_RBX = puVar2, lVar5 != 0)) {
        unaff_RBX = (void*)puVar2[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      uVar3 = FUN_016c2e90();
      if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  plVar7 = &local_b0;
  FUN_01684460(plVar7,*(void*)(this_ptr + 0x38),&local_a0,uVar3);
  puVar2 = local_70;
  pVar6 = (void*)plVar7;
  if (local_68 == '\0') {
    if (local_70 == (void*)0x0) goto LAB_01669e9b;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_01669d13:
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = puVar2;
    local_d8 = '\0';
    FUN_0132d960();
    if ((local_d8 != '\0') && (local_e0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_d0 = g_027ebe30;
    if (g_027ebe30 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    local_c0 = puVar2;
    local_b8 = '\0';
    FUN_00d46300();
    lVar5 = g_027c8270;
    if (g_027c8270 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar5;
    FUN_00083ea0(2,&local_f8);
    FUN_000b4da0();
    local_80 = local_90;
    local_78 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_78 = '\x01';
    FUN_00d40470(&local_80,&local_c0,3,3);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_70 = (void*)&g_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = local_b0;
    lVar5 = *(int64_t *)(this_ptr + 0x108);
    if (lVar5 != local_b0) {
      if (local_b0 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x108) = lVar1;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = local_a0;
    lVar5 = *(int64_t *)(this_ptr + 0x110);
    if (lVar5 != local_a0) {
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x110) = lVar1;
      if (lVar5 == 0) {
        uVar8 = 0;
      }
      else {
        FUN_00d50b20();
        uVar8 = 0;
      }
      goto LAB_0166a079;
    }
    uVar8 = 0;
  }
  else {
    if (local_70 != (void*)0x0) goto LAB_01669d13;
LAB_01669e9b:
    if (*(int64_t *)(this_ptr + 0x108) != 0) {
      *(void*)(this_ptr + 0x108) = 0;
      FUN_00d50b20();
    }
    uVar9 = (undefined7)((uint64_t)unaff_RBX >> 8);
    if (*(int64_t *)(this_ptr + 0x110) == 0) {
      uVar8 = CONCAT71(uVar9,1);
      goto LAB_0166a085;
    }
    *(void*)(this_ptr + 0x110) = 0;
    FUN_00d50b20();
    uVar8 = CONCAT71(uVar9,1);
LAB_0166a079:
    if ((char)uVar8 != '\0') goto LAB_0166a085;
  }
  FUN_00d50b20();
LAB_0166a085:
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return (uVar8 ^ 1) & 0xffffffff;
}

