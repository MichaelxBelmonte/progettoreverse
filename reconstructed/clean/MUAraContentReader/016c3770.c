// Function: FUN_016c3770
// Address: 016c3770
// Size: 3175 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


int64_t * FUN_016c3770(double param_1,double param_2)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  int64_t *plVar4;
  void*puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  void*puVar9;
  void* in_ECX;
  void* pVar10;
  void*puVar11;
  int64_t *in_RDX;
  int64_t *this_ptr;
  bool bVar12;
  uint64_t uVar13;
  uint8_t uVar14;
  void*local_110;
  uint8_t local_108;
  void*local_100;
  uint8_t local_f8;
  int64_t *local_f0;
  uint64_t local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  uint32_t local_c0;
  uint32_t local_bc;
  uint64_t local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  double local_98;
  uint32_t local_8c;
  int64_t *local_88;
  uint32_t local_80;
  uint32_t local_7c;
  uint64_t local_78;
  int64_t *local_70;
  void*local_68;
  uint32_t local_5c;
  uint64_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  
  if (NAN(param_1)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  local_98 = param_2;
  local_70 = (int64_t *)param_1;
  local_50 = in_RDX;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  local_38 = (int64_t)local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = 0xffffffff;
  local_5c = 0xffffffff;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e7bcc0();
  FUN_016cb850(local_70,&local_5c);
  local_78 = (int64_t *)FUN_00e7cd00();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar11 = &local_5c;
  local_a0 = (int64_t *)FUN_0165e220(puVar11,1);
  pVar10 = (void*)puVar11;
  plVar4 = (int64_t *)FUN_00e7bdb0();
  local_88 = (int64_t *)CONCAT44(local_88._4_4_,1);
  local_48 = local_a0;
  FUN_00e7c260();
  local_58 = local_48;
  if (((local_78._4_4_ == 0) || ((uint64_t)local_48 >> 0x20 == 0)) ||
     (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
    local_48 = local_78;
    FUN_00e7b970();
    plVar4 = local_48;
  }
  else {
    local_78 = local_a0;
  }
  plVar1 = local_78;
  local_c0 = local_80;
  local_8c = local_5c;
  local_70 = plVar4;
  if (NAN(local_98)) {
    uVar13 = FUN_00e7bdb0();
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_025fa538;
    uVar8 = _UNK_02393728;
    *(void*)((int64_t)puVar5 + 0xc) = g_02393720;
    *(void*)((int64_t)puVar5 + 0x14) = uVar8;
    FUN_00d500e0();
    *(int64_t **)((int64_t)puVar5 + 0xc) = plVar1;
    *(void*)((int64_t)puVar5 + 0x14) = uVar13;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7bcc0();
    FUN_016cb850(local_98,&local_8c);
    local_58 = (int64_t *)FUN_00e7cd00();
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_8c;
    plVar4 = (int64_t *)FUN_0165e220(puVar11,2);
    pVar10 = (void*)puVar11;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_48 = plVar4;
    FUN_00e7c280();
    local_88 = local_48;
    bVar12 = local_58._4_4_ != 0;
    if (((bVar12) && ((uint64_t)local_48 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0'))
    {
      local_58 = plVar4;
    }
    plVar1 = local_58;
    plVar4 = local_78;
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_025fa538;
    uVar8 = _UNK_02393728;
    *(void*)((int64_t)puVar5 + 0xc) = g_02393720;
    *(void*)((int64_t)puVar5 + 0x14) = uVar8;
    FUN_00d500e0();
    *(int64_t **)((int64_t)puVar5 + 0xc) = plVar4;
    *(int64_t **)((int64_t)puVar5 + 0x14) = plVar1;
  }
  cVar2 = FUN_016bf620();
  if (cVar2 != '\0') {
    local_68 = puVar5;
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_5c;
    local_a8 = (int64_t *)FUN_016c46a0(puVar11,&local_80);
    local_bc = 0xffffffff;
    local_7c = 0xffffffff;
    pVar10 = (void*)puVar11;
    pvVar3 = _pthread_getspecific(pVar10);
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar10 = (void*)local_38;
    }
    FUN_00e7bcc0();
    FUN_016cb850(local_a8,&local_7c);
    local_58 = (int64_t *)FUN_00e7cd00();
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_0165d690();
    pvVar3 = _pthread_getspecific(pVar10);
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar10 = (void*)local_38;
    }
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = (int64_t *)FUN_0165d690();
    local_48 = (int64_t *)uVar7;
    FUN_00e7b970();
    plVar4 = local_48;
    puVar5 = local_68;
    local_b8 = (uint64_t)local_48;
    local_48 = (int64_t *)((uint64_t)local_48 & 0xffffffff00000000);
    if (((uint64_t)plVar4 >> 0x20 != 0) && (cVar2 = FUN_00e7c630(), cVar2 != '\0')) {
      pvVar3 = _pthread_getspecific(pVar10);
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (void*)local_38;
      }
      pvVar3 = _pthread_getspecific(pVar10);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar11 = &local_7c;
      local_e8 = FUN_0165e220(puVar11,1);
      pVar10 = (void*)puVar11;
      local_48 = local_58;
      FUN_00e7b970();
      local_f0 = local_48;
      local_48 = local_70;
      FUN_00e7b970();
      plVar4 = local_48;
      local_b0 = local_48;
      local_48 = (int64_t *)((uint64_t)local_48 & 0xffffffff00000000);
      if (((uint64_t)plVar4 >> 0x20 == 0) || (cVar2 = FUN_00e7c630(), cVar2 == '\0')) {
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar4 = local_a0;
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = 0;
        FUN_0165c940(0,plVar4,0,&local_5c);
        local_70 = local_48;
        if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar10);
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar10 = (void*)local_38;
        }
        uVar8 = local_e8;
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = 0;
        FUN_0165c940(0,uVar8,0,&local_7c);
        plVar4 = local_48;
        if (((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
           ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (int64_t *)0x0)))) {
          FUN_00d50b20();
        }
        local_e0 = plVar4;
        local_d8 = '\0';
        cVar2 = (**(code **)(*local_70 + 0x50))();
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_48 = (int64_t *)FUN_0123ffd0();
          FUN_00e7bac0();
          local_a8 = local_48;
          pvVar3 = _pthread_getspecific(pVar10);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar3 = _pthread_getspecific(pVar10);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165bdc0();
          FUN_00e7b820();
        }
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (NAN(local_98)) {
        uVar8 = FUN_00e7bdb0();
      }
      else {
        pvVar3 = _pthread_getspecific(pVar10);
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar10 = (void*)local_38;
        }
        FUN_00e7bcc0();
        FUN_016cb850(local_98,0);
        uVar8 = FUN_00e7cd00();
      }
      plVar4 = local_58;
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025fa538;
      uVar13 = _UNK_02393728;
      *(void*)((int64_t)puVar9 + 0xc) = g_02393720;
      *(void*)((int64_t)puVar9 + 0x14) = uVar13;
      uVar13 = FUN_00d500e0();
      *(int64_t **)((int64_t)puVar9 + 0xc) = plVar4;
      *(void*)((int64_t)puVar9 + 0x14) = uVar8;
      uVar14 = 0;
      cVar2 = FUN_016bf700(uVar13,0);
      if (cVar2 == '\0') {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        bVar12 = true;
      }
      else {
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d0 = *local_50;
        local_c8 = '\0';
        local_110 = puVar5;
        local_108 = 0;
        local_f8 = 0;
        local_100 = puVar9;
        FUN_016c4850(1,&local_110,&local_100,0,uVar14);
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        *this_ptr = local_38;
        *(void*)(this_ptr + 1) = 1;
        bVar12 = false;
      }
      FUN_00d50b20();
      goto LAB_016c3e0b;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  bVar12 = true;
LAB_016c3e0b:
  FUN_00d50b20();
  if ((bVar12) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

