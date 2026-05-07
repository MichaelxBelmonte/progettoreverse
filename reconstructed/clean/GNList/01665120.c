// Function: FUN_01665120
// Address: 01665120
// Size: 2002 bytes
// Class: GNList
// String references:
//   "GNList"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01665120(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  byte bVar4;
  uint8_t uVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar10;
  uint uVar11;
  bool bVar12;
  uint32_t uVar13;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  uint local_74;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  byte local_4a;
  uint8_t local_49;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  cVar3 = FUN_00e34250();
  if (cVar3 != '\0') {
    *(void*)(this_ptr + 0x106) = 1;
    if (*(char *)(this_ptr + 0x11c) != '\0') {
      FUN_0184a0e0();
    }
    goto LAB_016657f6;
  }
  uVar13 = FUN_00e33de0();
  local_a8 = g_027295d0;
  if (g_027295d0 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_a0 = '\x01';
  pplVar10 = &local_40;
  FUN_000175c0(uVar13,&local_a8);
  plVar1 = local_40;
  if ((g_027048b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026cd478 = FUN_00d4fe50();
    g_026cd460 = "GNList";
    g_026cd468 = 0x20;
    param_1 = 0x18210;
    g_026cd470 = FUN_00018210;
    g_026cd480 = 0;
    ram_00000000026cd488 = 0;
    g_026cd490 = 0;
    g_026cd508 = 0;
    ram_00000000026cd510 = 0;
    g_026cd518 = 0;
    g_026cd51a = 6;
    g_026cd498 = 0;
    ram_00000000026cd4a0 = 0;
    g_026cd4a8 = 0;
    ram_00000000026cd4b0 = 0;
    g_026cd4b8 = 0;
    ram_00000000026cd4c0 = 0;
    g_026cd4c8 = 0;
    ram_00000000026cd4d0 = 0;
    g_026cd4d8 = 0;
    ram_00000000026cd4e0 = 0;
    g_026cd4e8 = 0;
    ram_00000000026cd4f0 = 0;
    g_026cd4f8 = 0;
    ram_00000000026cd500 = 0;
    g_026cd523 = 0;
    g_026cd51b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_016651ee:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_016651ee;
  }
  local_70 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != (int64_t *)0x0) {
    FUN_013fb420();
    local_60 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    local_48 = local_40;
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = (void*)local_48;
    }
    FUN_0132d610();
    local_58 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = (void*)local_60;
    }
    FUN_0132d610();
    local_68 = local_40;
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    uVar11 = 0;
    if ((*(char *)(*arg1 + 0xd5) == '\0') && (local_68 != (int64_t *)0x0)) {
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = (void*)local_68;
      }
      iVar6 = FUN_016c2e90();
      if (iVar6 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
        if (local_58 != (int64_t *)0x0) {
          pvVar7 = _pthread_getspecific(param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = (void*)local_58;
          }
          iVar6 = FUN_016c2e90();
          if (iVar6 != 0) {
            pvVar7 = _pthread_getspecific(param_1);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              param_1 = (void*)local_58;
            }
            iVar6 = FUN_016c2e90();
            uVar11 = (uint)(iVar6 == 1);
          }
        }
      }
    }
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = (void*)local_48;
    }
    bVar4 = FUN_0134a950();
    bVar12 = local_68 != (int64_t *)0x0;
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = (void*)local_48;
    }
    FUN_0132d900();
    plVar1 = local_40;
    local_4a = bVar4;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = (void*)local_60;
    }
    FUN_0132d900();
    plVar2 = local_40;
    local_74 = uVar11;
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_98 = plVar2;
    local_90 = '\0';
    local_49 = FUN_01511080();
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = plVar2;
    local_80 = '\0';
    uVar5 = FUN_01512000();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e8b990();
    FUN_00cafd20();
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db32a0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0166dcf0(local_49,bVar12 & ~local_4a & (byte)local_74,uVar5);
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db32a0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (int64_t *)FUN_00e8b990();
    (**(code **)(*plVar9 + 0x3c8))();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_016657f6:
  *(void*)(this_ptr + 0x11c) = 0;
  if (*(int64_t *)(this_ptr + 0x120) != 0) {
    *(void*)(this_ptr + 0x120) = 0;
    FUN_00d50b20();
  }
  return;
}

