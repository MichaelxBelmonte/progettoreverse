// Function: FUN_019c5bf0
// Address: 019c5bf0
// Size: 1625 bytes
// Class: MUEditorElementView

void FUN_019c5bf0(void)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t *this_ptr;
  void*puVar9;
  bool bVar10;
  int local_68;
  void*local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  pcVar2 = g_02572370;
  lVar1 = *this_ptr;
  if (lVar1 != 0) {
    local_68 = -1;
    while( true ) {
      lVar5 = (int64_t)local_68;
      local_68 = local_68 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_68) break;
      lVar8 = *(int64_t *)(lVar1 + 0x10);
      lVar5 = *(int64_t *)(lVar8 + 8 + lVar5 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      pVar7 = (void*)lVar8;
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (lVar5 != local_40) {
          if (local_38 != '\0') {
            bVar10 = lVar5 != 0;
            lVar5 = local_40;
            if (bVar10) {
              FUN_00d50b20();
            }
            goto LAB_019c5e00;
          }
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          bVar10 = lVar5 != 0;
          lVar5 = local_40;
          if (bVar10) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_019c5e00:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_50 == '\0') {
        if (local_58 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      cVar3 = FUN_00c9ff50();
      if (local_58 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &g_02572358;
        (*pcVar2)();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_58 != (void*)0x0) {
          FUN_00d50b00();
        }
        FUN_0076f270();
        if (local_58 != (void*)0x0) {
          FUN_00d50b20();
        }
        bVar10 = true;
      }
      else {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_50 == '\0') {
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_00805b20();
        if (local_58 == (void*)0x0) {
          puVar9 = (void*)0x0;
        }
        else {
          FUN_00d50b00();
          puVar9 = local_58;
        }
        bVar10 = local_58 != (void*)0x0;
        if (local_58 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_38 = '\0';
      FUN_00d235a0();
      if ((bVar10) && (puVar9 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_40 = lVar5;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    if (plVar4 == (int64_t *)0x0) {
      return;
    }
  }
  lVar1 = plVar4[2];
  if (0 < *(int *)(lVar1 + 0xc)) {
    pVar7 = 0;
    do {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019c6680();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_012edae0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = pVar7 + 1;
    } while ((int)pVar7 < *(int *)(lVar1 + 0xc));
  }
  FUN_00d50b20();
  return;
}

