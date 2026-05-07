// Function: FUN_01271180
// Address: 01271180
// Size: 1940 bytes
// Class: MUAudioSourceSibilantItem
// === MUAudioSourceSibilantItem properties ===
//                   _audioSourceElement
//                   _suggestsSeparateComponentRenderers
//                   _polyphonicSeparationDirectoryIdentifier
//                   _pulseTimeline


void* FUN_01271180(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  void*puVar4;
  void*puVar5;
  char *pcVar6;
  void*puVar7;
  void *pvVar8;
  int64_t lVar9;
  void*puVar10;
  void*puVar11;
  void*puVar12;
  void*puVar13;
  void*arg1;
  void*this_ptr;
  bool bVar14;
  void*local_70;
  void*local_58;
  char local_50 [32];
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  local_58 = (void*)*arg1;
  local_50[0] = '\0';
  FUN_00d243f0();
  if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d227d0();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  local_50[0x10] = '\0';
  local_50[0x18] = '\0';
  puVar12 = (void*)0x0;
  puVar10 = (void*)0x0;
  bVar1 = false;
  local_70 = (void*)0x0;
  do {
    if (*(int *)((int64_t)puVar4 + 0xc) == 0) {
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      if ((local_50[0x18] != '\0') && (puVar12 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50[0x10] != '\0') && (puVar10 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar1) && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return this_ptr;
    }
    FUN_00d23340();
    local_50[8] = local_50[0];
    pcVar6 = local_50;
    if (local_50[0] == '\0') {
      pcVar6 = local_50 + 8;
    }
    *pcVar6 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 == puVar10) {
      if (((local_50[0x10] == '\0') && (local_58 != (void*)0x0)) && (local_50[8] != '\0'))
      goto LAB_012712e9;
    }
    else {
      bVar14 = puVar10 != (void*)0x0;
      puVar10 = local_58;
      if (local_50[8] == '\0') {
        pcVar6 = local_50 + 0x10;
        if (bVar14 && local_50[0x10] != '\0') {
          FUN_00d50b20();
          pcVar6 = local_50 + 0x10;
        }
      }
      else {
        if (bVar14 && local_50[0x10] != '\0') {
          FUN_00d50b20();
        }
LAB_012712e9:
        local_50[0x10] = '\x01';
        pcVar6 = local_50 + 8;
      }
      *pcVar6 = '\0';
    }
    if ((local_50[8] != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 == (void*)0x0) {
      FUN_00d23740();
      puVar10 = (void*)0x0;
    }
    else {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_02572358;
      (*pcVar2)();
      if (puVar7 == local_70) {
        puVar7 = local_70;
        if (bVar1) {
          FUN_00d50b20();
          bVar14 = bVar1;
        }
        else {
          bVar14 = true;
        }
      }
      else {
        bVar14 = true;
        if ((bVar1) && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar1 = bVar14;
      local_50[0] = '\0';
      puVar11 = puVar7;
      FUN_00d21140();
      if ((local_50[0] != '\0') && (puVar7 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_50[0] = '\0';
      FUN_00d21140();
      if ((local_50[0] != '\0') && (puVar10 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23740();
      puVar13 = puVar12;
      local_58 = puVar10;
      if (puVar12 != puVar10) {
        if ((local_50[0x18] != '\0') && (puVar12 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_50[0x18] = '\0';
        puVar13 = puVar10;
      }
      while( true ) {
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar13[0x14];
        }
        else {
          lVar9 = *(int64_t *)(puVar13[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa0);
        }
        if (lVar9 == 0) break;
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar13[0x14];
        }
        else {
          lVar9 = *(int64_t *)(puVar13[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa0);
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        if (local_58 == puVar13) {
          if (((local_50[0x18] == '\0') && (local_58 != (void*)0x0)) &&
             (puVar12 = puVar13, local_50[0] != '\0')) goto LAB_0127158a;
        }
        else {
          if (local_50[0] == '\0') {
            pcVar6 = local_50 + 0x18;
            puVar11 = local_58;
            if (puVar13 != (void*)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
              pcVar6 = local_50 + 0x18;
            }
          }
          else {
            puVar12 = local_58;
            if (puVar13 != (void*)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
            }
LAB_0127158a:
            local_50[0x18] = '\x01';
            pcVar6 = local_50;
            puVar11 = puVar12;
          }
          *pcVar6 = '\0';
          puVar13 = puVar11;
        }
        if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        local_50[0] = '\0';
        iVar3 = FUN_00d23d20();
        if ((local_50[0] != '\0') && (puVar13 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_58 = puVar13;
        if (iVar3 == -1) break;
        local_50[0] = '\0';
        FUN_00d21140();
        if ((local_50[0] != '\0') && (puVar13 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_58 = (void*)0x0;
        local_50[0] = '\0';
        FUN_00d233f0();
      }
      puVar12 = puVar10;
      if (puVar13 != puVar10) {
        if ((local_50[0x18] != '\0') && (puVar13 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_50[0x18] = '\0';
      }
      while( true ) {
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar12[0x15];
        }
        else {
          lVar9 = *(int64_t *)(puVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa8);
        }
        local_70 = puVar7;
        if (lVar9 == 0) break;
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          lVar9 = puVar12[0x15];
        }
        else {
          lVar9 = *(int64_t *)(puVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0xa8);
        }
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific((void*)puVar11);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        if (local_58 == puVar12) {
          if (((local_50[0x18] == '\0') && (local_58 != (void*)0x0)) &&
             (puVar13 = puVar12, local_50[0] != '\0')) goto LAB_0127180a;
        }
        else {
          if (local_50[0] == '\0') {
            pcVar6 = local_50 + 0x18;
            puVar11 = local_58;
            if (puVar12 != (void*)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
              pcVar6 = local_50 + 0x18;
            }
          }
          else {
            puVar13 = local_58;
            if (puVar12 != (void*)0x0 && local_50[0x18] != '\0') {
              FUN_00d50b20();
            }
LAB_0127180a:
            local_50[0x18] = '\x01';
            pcVar6 = local_50;
            puVar11 = puVar13;
          }
          *pcVar6 = '\0';
          puVar12 = puVar11;
        }
        if ((local_50[0] != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        local_50[0] = '\0';
        iVar3 = FUN_00d23d20();
        if ((local_50[0] != '\0') && (puVar12 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_58 = puVar12;
        if (iVar3 == -1) break;
        local_50[0] = '\0';
        FUN_00d23370();
        if ((local_50[0] != '\0') && (puVar12 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_58 = (void*)0x0;
        local_50[0] = '\0';
        FUN_00d233f0();
      }
    }
  } while( true );
}

