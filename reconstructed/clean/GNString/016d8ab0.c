// Function: FUN_016d8ab0
// Address: 016d8ab0
// Size: 1630 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016d8ab0(void* param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  char cVar4;
  void*puVar5;
  uint64_t uVar6;
  void *pvVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  void* pVar11;
  int64_t arg1;
  void*this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint32_t local_5c;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025fa538;
  uVar3 = _UNK_0239372c;
  uVar2 = _UNK_02393728;
  uVar1 = _UNK_02393724;
  *(void*)((int64_t)puVar5 + 0xc) = g_02393720;
  *(void*)(puVar5 + 2) = uVar1;
  *(void*)((int64_t)puVar5 + 0x14) = uVar2;
  *(void*)(puVar5 + 3) = uVar3;
  FUN_00d500e0();
  uVar6 = FUN_00e7bdb0();
  *(void*)((int64_t)puVar5 + 0x14) = uVar6;
  *(void*)((int64_t)puVar5 + 0xc) = uVar6;
  if (*(int64_t *)(arg1 + 0x78) == 0) goto LAB_016d90f1;
  if (*(char *)(arg1 + 0x80) != '\0') {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = 0;
    lVar9 = *(int64_t *)(arg1 + 0x78);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    pVar11 = 0;
    local_90 = lVar9;
    FUN_01900ec0(0,&local_90);
    uVar10 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_0165cf20(0,0);
    local_58 = uVar8;
    local_40 = FUN_00e7bdb0();
    if (((uVar8 >> 0x20 == 0) || (local_40 >> 0x20 == 0)) ||
       (cVar4 = FUN_00e7c000(), uVar8 = local_58, cVar4 == '\0')) {
      local_5c = 1;
      local_40 = uVar8;
      FUN_00e7c260();
      uVar8 = local_40;
    }
    else {
      uVar8 = FUN_00e7bdb0();
    }
    *(uint64_t *)((int64_t)puVar5 + 0x14) = uVar8;
    uVar6 = FUN_00e7bdb0();
    *(void*)((int64_t)puVar5 + 0xc) = uVar6;
    if (uVar10 != 0) {
      FUN_00d50b20();
    }
    goto LAB_016d90f1;
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = 0;
  lVar9 = *(int64_t *)(arg1 + 0x78);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  pVar11 = 0;
  local_80 = lVar9;
  FUN_01900ad0(0,&local_80);
  local_50 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_68 = 0;
  lVar9 = *(int64_t *)(arg1 + 0x78);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  pVar11 = 0;
  local_70 = lVar9;
  FUN_01900ec0(0,&local_70);
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_018fe5d0();
  if (cVar4 == '\0') {
    pvVar7 = _pthread_getspecific(pVar11);
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar11 = (void*)local_50;
    }
    FUN_019079b0();
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_0165cf20(0,0);
    local_40 = uVar10;
    local_58 = FUN_00e7bdb0();
    pVar11 = (void*)(uVar10 >> 0x20);
    if ((uVar10 >> 0x20 == 0) || (local_58 >> 0x20 == 0)) {
LAB_016d8fc2:
      *(uint64_t *)((int64_t)puVar5 + 0xc) = uVar10;
    }
    else {
      cVar4 = FUN_00e7c000();
      if (cVar4 != '\0') {
        uVar10 = FUN_00e7bdb0();
        goto LAB_016d8fc2;
      }
      *(uint64_t *)((int64_t)puVar5 + 0xc) = local_40;
    }
    if (local_48 != 0) {
      pvVar7 = _pthread_getspecific(pVar11);
      if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        pVar11 = (void*)local_48;
      }
      FUN_019079b0();
      pvVar7 = _pthread_getspecific(pVar11);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar10 = FUN_0165cf20(0,0);
      local_58 = uVar10;
      local_40 = FUN_00e7bdb0();
      if (((uVar10 >> 0x20 == 0) || (local_40 >> 0x20 == 0)) ||
         (cVar4 = FUN_00e7c000(), uVar10 = local_58, cVar4 == '\0')) {
        local_5c = 1;
        local_40 = uVar10;
        FUN_00e7c260();
        uVar10 = local_40;
      }
      else {
        uVar10 = FUN_00e7bdb0();
      }
      *(uint64_t *)((int64_t)puVar5 + 0x14) = uVar10;
      goto LAB_016d90de;
    }
    uVar6 = FUN_00e7bdb0();
    *(void*)((int64_t)puVar5 + 0x14) = uVar6;
  }
  else {
    uVar6 = FUN_00e7bdb0();
    *(void*)((int64_t)puVar5 + 0x14) = uVar6;
    *(void*)((int64_t)puVar5 + 0xc) = uVar6;
    if (local_48 != 0) {
LAB_016d90de:
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
LAB_016d90f1:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

