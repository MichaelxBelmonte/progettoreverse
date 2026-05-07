// Function: FUN_017354e0
// Address: 017354e0
// Size: 1251 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_017354e0(void* param_1)

{
  code *pcVar1;
  code *pcVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *plVar8;
  void*puVar9;
  void*this_ptr;
  uint uVar10;
  int iVar11;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  void*local_50;
  char local_48;
  void*local_40;
  code *local_38;
  
  pcVar2 = FUN_00e8fc40();
  FUN_0013e060();
  local_38 = pcVar2;
  (**(code **)(*(int64_t *)pcVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(param_1);
  lVar6 = g_027cd5a0;
  pcVar2 = local_38;
  if ((pvVar3 != (void *)0x0) &&
     (lVar4 = FUN_00e8b990(), lVar6 = g_027cd5a0, pcVar2 = local_38, lVar4 != 0)) {
    pcVar2 = *(code **)(local_38 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8 + 0x20);
  }
  g_027cd5a0 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_027e3bf0;
  if (g_027e3bf0 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar4;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  plVar8 = &local_80;
  FUN_00d31230(plVar8,&local_90);
  puVar9 = local_50;
  pVar7 = (void*)plVar8;
  if (local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if (*(void**)(pcVar2 + 0x48) != puVar9) {
    FUN_00d64850();
    puVar5 = *(void**)(pcVar2 + 0x48);
    if (puVar5 != puVar9) {
      if (puVar9 != (void*)0x0) {
        FUN_00d50b00();
      }
      *(void**)(pcVar2 + 0x48) = puVar9;
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  lVar6 = g_027e3c00;
  pcVar2 = local_38;
  if ((pvVar3 != (void *)0x0) &&
     (lVar4 = FUN_00e8b990(), lVar6 = g_027e3c00, pcVar2 = local_38, lVar4 != 0)) {
    pcVar2 = *(code **)(local_38 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8 + 0x20);
  }
  g_027e3c00 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  if (*(int64_t *)(pcVar2 + 0x38) != lVar6) {
    FUN_00d64850();
    lVar4 = *(int64_t *)(pcVar2 + 0x38);
    if (lVar4 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(pcVar2 + 0x38) = lVar6;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_0177c8c0();
  puVar9 = local_50;
  if ((((local_48 == '\0') && (local_50 != (void*)0x0)) && (FUN_00d50b00(), local_48 != '\0')
      ) && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pcVar1 = g_025fe688;
  uVar10 = 0;
  iVar11 = 0;
  local_40 = puVar9;
  pcVar2 = g_025fe688;
  do {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_025fe670;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    (*pcVar1)();
    if ((((uVar10 & 0x7ffffffe) == 4) || ((uVar10 & 0x7ffffffd) == 0)) ||
       ((uVar10 == 7 || ((uVar10 == 9 || (uVar10 == 0xb)))))) {
      pvVar3 = _pthread_getspecific((void*)pcVar2);
      lVar6 = g_027cd560;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
        lVar6 = g_027cd560;
      }
      g_027cd560 = lVar6;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      local_70 = lVar6;
      FUN_017395b0();
      puVar9 = local_40;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (iVar11 < *(int *)((int64_t)puVar9 + 0xc)) {
        pvVar3 = _pthread_getspecific((void*)pcVar2);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pcVar2 = local_40[2];
        lVar6 = *(int64_t *)(pcVar2 + (int64_t)iVar11 * 8);
        local_58 = 0;
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\x01';
        local_60 = lVar6;
        FUN_01739510();
        puVar9 = local_40;
        iVar11 = iVar11 + 1;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    pvVar3 = _pthread_getspecific((void*)pcVar2);
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pcVar2 = local_38;
    }
    local_48 = '\0';
    local_50 = puVar5;
    FUN_01736ea0();
    FUN_00d50b20();
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0xc);
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

