// Function: FUN_0195a3e0
// Address: 0195a3e0
// Size: 2131 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void* FUN_0195a3e0(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t lVar6;
  void *pvVar7;
  void*puVar8;
  void* pVar9;
  int64_t lVar10;
  int iVar11;
  void*this_ptr;
  void*puVar12;
  void*puVar13;
  int64_t local_148;
  char local_140;
  void*local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  int64_t *local_90;
  void*local_88;
  char local_80;
  void*local_78;
  char local_70;
  void*local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  void*local_48;
  char local_40;
  code *local_38;
  
  FUN_00243390();
  local_98 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (void*)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_50 = plVar5;
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  local_90 = plVar5;
  if (local_98 != (void*)0x0) {
    local_70 = '\0';
    local_78 = (void*)0x0;
    local_68 = local_98;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_38 = g_02572370;
    local_60._4_4_ = 0;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar11 = -local_60._4_4_;
        }
        else {
          iVar11 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar11);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar11 = 0;
        }
        local_60 = CONCAT44(iVar11,(int)local_60);
      }
      lVar6 = (int64_t)(int)local_60;
      iVar11 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar11);
      if (*(int *)((int64_t)local_68 + 0xc) <= iVar11) break;
      lVar10 = local_68[2];
      local_78 = *(void**)(lVar10 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((void*)lVar10);
      pVar9 = (void*)lVar10;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      puVar8 = local_48;
      if (((local_40 == '\0') && (local_48 != (void*)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (void*)0x0)))) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      puVar3 = local_48;
      if (((local_40 == '\0') && (local_48 != (void*)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (void*)0x0)))) {
        FUN_00d50b20();
      }
      local_40 = '\0';
      local_48 = puVar3;
      cVar4 = FUN_00ca18c0();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        puVar13 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &g_02572358;
        (*local_38)();
        FUN_0025ddc0();
        puVar12 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar12 = &g_02572358;
        (*local_38)();
        FUN_0076f1c0();
        bVar1 = true;
        bVar2 = true;
      }
      else {
        FUN_0025dd10();
        puVar13 = local_48;
        if (local_48 == (void*)0x0) {
          puVar13 = (void*)0x0;
          bVar2 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
          bVar2 = true;
        }
        FUN_0076f110();
        puVar12 = local_48;
        if (local_48 == (void*)0x0) {
          puVar12 = (void*)0x0;
          bVar1 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar1 = true;
        }
      }
      local_40 = '\0';
      local_48 = puVar8;
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_48 = local_78;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar1) && (puVar12 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar2) && (puVar13 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*g_02572370)();
  if (local_50 != (int64_t *)0x0) {
    local_70 = '\0';
    local_78 = (void*)0x0;
    local_68 = (void*)local_50[2];
    local_60 = local_60 & 0xffffffff00000000;
    if (0 < *(int *)((int64_t)local_68 + 0xc)) {
      pVar9 = 0;
      do {
        local_78 = *(void**)(local_68[2] + (int64_t)(int)pVar9 * 8);
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0195a240();
        puVar3 = local_48;
        local_b0 = 0;
        if (local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_b0 = '\x01';
        local_b8 = puVar3;
        FUN_0195a310();
        local_a8 = local_88;
        local_a0 = 0;
        if (local_80 == '\0') {
          if (local_88 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_a0 = '\x01';
        FUN_0137c3f0(&local_a8,&local_b8);
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_0195a310();
        puVar3 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_48 = puVar3;
        local_40 = '\0';
        FUN_00d214d0();
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        pVar9 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,pVar9);
      } while ((int)pVar9 < *(int *)((int64_t)local_68 + 0xc));
      if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_98 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

