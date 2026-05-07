// Function: FUN_01959300
// Address: 01959300
// Size: 2256 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void* FUN_01959300(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *pvVar5;
  void*puVar6;
  uint64_t uVar7;
  void* pVar8;
  int64_t lVar9;
  int iVar10;
  void*this_ptr;
  void*puVar11;
  bool bVar12;
  int64_t local_158;
  char local_150;
  void*local_c8;
  char local_c0;
  void*local_b8;
  char local_b0;
  void*local_a8;
  int64_t *local_a0;
  void*local_98;
  char local_90;
  void*local_88;
  void*local_80;
  char local_78;
  void*local_70;
  uint64_t local_68;
  int local_60;
  void*local_58;
  int64_t *local_50;
  void*local_48;
  char local_40;
  code *local_38;
  
  FUN_00243390();
  puVar1 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (void*)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  local_a0 = plVar3;
  local_50 = plVar2;
  if (puVar1 != (void*)0x0) {
    local_78 = '\0';
    local_80 = (void*)0x0;
    local_70 = puVar1;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_38 = g_02572370;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar10 = -local_68._4_4_;
        }
        else {
          iVar10 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar10);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar10 = 0;
        }
        local_68 = CONCAT44(iVar10,(int)local_68);
      }
      lVar4 = (int64_t)(int)local_68;
      iVar10 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar10);
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar10) break;
      lVar9 = local_70[2];
      local_80 = *(void**)(lVar9 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar9);
      pVar8 = (void*)lVar9;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      local_58 = local_48;
      if (((local_40 == '\0') && (local_48 != (void*)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (void*)0x0)))) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      puVar6 = local_48;
      if (((local_40 == '\0') && (local_48 != (void*)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (void*)0x0)))) {
        FUN_00d50b20();
      }
      local_a8 = puVar6;
      FUN_0025dd10();
      puVar11 = local_48;
      if (local_48 == (void*)0x0) {
        bVar12 = true;
        puVar11 = (void*)0x0;
        puVar6 = (void*)0x0;
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
          puVar6 = (void*)CONCAT71((int7)((uint64_t)puVar6 >> 8),1);
          bVar12 = false;
          if ((local_40 == '\0') || (bVar12 = false, local_48 == (void*)0x0))
          goto LAB_019595b6;
          FUN_00d50b20();
        }
        else {
          local_40 = '\0';
        }
        puVar6 = (void*)CONCAT71((int7)((uint64_t)puVar6 >> 8),1);
        bVar12 = false;
      }
LAB_019595b6:
      local_88 = puVar6;
      if (bVar12) {
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02572358;
        (*local_38)();
        if (puVar6 == puVar11) {
          if (!bVar12) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = puVar11 != (void*)0x0;
          puVar11 = puVar6;
          if (((byte)local_88 & bVar12) == 1) {
            FUN_00d50b20();
          }
        }
        FUN_0025ddc0();
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02572358;
        (*local_38)();
        uVar7 = FUN_0076f1c0();
        bVar12 = true;
        local_88 = (void*)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
      else {
        FUN_0076f110();
        puVar6 = local_48;
        if (local_48 == (void*)0x0) {
          puVar6 = (void*)0x0;
          bVar12 = false;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar12 = true;
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = true;
        }
      }
      local_48 = local_58;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_48 = local_80;
      local_40 = '\0';
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar12) && (puVar6 != (void*)0x0)) {
        FUN_00d50b20();
      }
      plVar2 = local_50;
      if (((char)local_88 != '\0') && (puVar11 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (local_a8 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_58 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (plVar2 != (int64_t *)0x0) {
    local_78 = '\0';
    local_80 = (void*)0x0;
    local_70 = (void*)plVar2[2];
    local_68 = local_68 & 0xffffffff00000000;
    if (0 < *(int *)((int64_t)local_70 + 0xc)) {
      pVar8 = 0;
      do {
        local_80 = *(void**)(local_70[2] + (int64_t)(int)pVar8 * 8);
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0195a240();
        puVar11 = local_48;
        local_c0 = 0;
        if (local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_c0 = '\x01';
        local_c8 = puVar11;
        FUN_0195a310();
        local_b8 = local_98;
        local_b0 = 0;
        if (local_90 == '\0') {
          if (local_98 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_b0 = '\x01';
        FUN_01372190(&local_b8,&local_c8);
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_0195a310();
        puVar11 = local_98;
        if (local_90 == '\0') {
          if (local_98 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_48 = puVar11;
        local_40 = '\0';
        FUN_00d214d0();
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar11 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
          FUN_00d50b20();
        }
        plVar2 = local_50;
        pVar8 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,pVar8);
      } while ((int)pVar8 < *(int *)((int64_t)local_70 + 0xc));
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

