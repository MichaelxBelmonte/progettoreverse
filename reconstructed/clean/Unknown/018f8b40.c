// Function: FUN_018f8b40
// Address: 018f8b40
// Size: 1527 bytes
// Class: Unknown
// String references:
//   " BROKEN _quarterAnchors!"
//   " const %.2f [%.3f, %Q] and [%.3f, %Q]"
//   " %.2f"
//   "[%.3f, %Q]%.2f"
//   "[%.3f, %Q]..."

void FUN_018f8b40(void)

{
  int iVar1;
  void*puVar2;
  void*puVar3;
  int64_t *plVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t lVar9;
  int64_t arg1;
  void*this_ptr;
  int iVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  void*local_90;
  uint local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  void*local_58;
  char local_50;
  uint64_t local_48;
  int64_t local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d4fff0();
  local_58 = local_90;
  local_50 = 0;
  if ((char)local_88 == '\0') {
    if (local_90 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = local_88 & 0xffffff00;
  }
  local_50 = '\x01';
  FUN_00d8dbf0();
  if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (local_90 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar9 = *(int64_t *)(arg1 + 0x38);
  iVar1 = *(int *)(lVar9 + 0xc);
  if (iVar1 < 2) {
    FUN_00d8db40();
    lVar9 = *(int64_t *)(arg1 + 0x38);
    iVar1 = *(int *)(lVar9 + 0xc);
  }
  if (iVar1 == 2) {
    plVar4 = *(int64_t **)(lVar9 + 0x10);
    lVar7 = *plVar4;
    if (lVar7 != 0) {
      FUN_00d50b00();
      plVar4 = *(int64_t **)(*(int64_t *)(arg1 + 0x38) + 0x10);
    }
    pVar8 = (void*)lVar9;
    local_38 = '\x01';
    lVar9 = plVar4[1];
    local_40 = lVar7;
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    local_48 = FUN_019079d0();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar11 = FUN_01907950();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_019079b0();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar12 = FUN_01907950();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = FUN_019079b0();
    local_88 = 5;
    local_80 = local_48;
    local_90 = &g_02615a48;
    local_78 = uVar11;
    local_70 = uVar6;
    local_68 = uVar12;
    FUN_00d94d80(&g_02615a48,&local_90);
  }
  else if (1 < iVar1) {
    iVar10 = 1;
    while( true ) {
      lVar7 = *(int64_t *)(lVar9 + 0x10);
      puVar2 = *(void**)(lVar7 + -8 + (int64_t)iVar10 * 8);
      if (puVar2 != (void*)0x0) {
        FUN_00d50b00();
        lVar7 = *(int64_t *)(*(int64_t *)(arg1 + 0x38) + 0x10);
      }
      pVar8 = (void*)lVar9;
      local_88 = CONCAT31(local_88._1_3_,1);
      lVar9 = *(int64_t *)(lVar7 + (int64_t)iVar10 * 8);
      local_38 = 0;
      local_90 = puVar2;
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar9;
      local_48 = FUN_019079d0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_88 != '\0') && (local_90 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (iVar10 == 1) {
        local_88 = 1;
        local_90 = &g_024de5e0;
        local_80 = local_48;
        FUN_00d94d80(local_48,&local_90);
      }
      else {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_01907950();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_78 = FUN_019079b0();
        local_88 = 3;
        local_90 = &g_02615a80;
        local_70 = local_48;
        local_80 = uVar11;
        FUN_00d94d80(local_48,&local_90);
      }
      if (iVar10 == (uint)(8 < iVar1) * 5) {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_01907950();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_78 = FUN_019079b0();
        local_88 = 3;
        local_90 = &g_02615a80;
        local_70 = local_48;
        local_80 = uVar11;
        FUN_00d94d80(local_48,&local_90);
        iVar10 = iVar1 + -3;
      }
      iVar10 = iVar10 + 1;
      if (iVar1 <= iVar10) break;
      lVar9 = *(int64_t *)(arg1 + 0x38);
    }
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

