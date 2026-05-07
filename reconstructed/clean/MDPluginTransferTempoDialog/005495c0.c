// Function: FUN_005495c0
// Address: 005495c0
// Size: 1384 bytes
// Class: MDPluginTransferTempoDialog

void FUN_005495c0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  code *pcVar3;
  char cVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t this_ptr;
  uint64_t uVar8;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int local_40;
  uint64_t local_3c;
  
  lVar1 = *(int64_t *)(this_ptr + 0xb8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0052f4f0();
  lVar2 = *(int64_t *)(this_ptr + 0xe0);
  lVar7 = lVar2;
  if (lVar2 == local_58) goto LAB_0054965d;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      lVar7 = 0;
      goto LAB_0054960f;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0xe0);
    *(int64_t *)(this_ptr + 0xe0) = local_58;
    lVar7 = local_58;
  }
  else {
    local_50 = '\0';
    lVar7 = local_58;
LAB_0054960f:
    *(int64_t *)(this_ptr + 0xe0) = lVar7;
  }
  param_1 = (void*)lVar2;
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar7 = local_58;
  }
LAB_0054965d:
  if ((local_50 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x998))();
  if (*(int64_t *)(this_ptr + 0xe0) == 0) {
    cVar4 = FUN_005364c0();
    pcVar3 = *(code **)(**(int64_t **)(this_ptr + 0x88) + 0x918);
    if (cVar4 == '\0') {
      (*pcVar3)();
    }
    else {
      (*pcVar3)();
    }
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_016c2730();
    if (cVar4 == '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_00e7bdb0();
      uVar6 = FUN_00e7bdb0();
      FUN_016d1840(uVar8,&local_68,uVar6);
      FUN_005457b0(local_58,local_68);
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x918))();
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x998))();
      (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x998))();
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_00e7bdb0();
      FUN_016c9410(uVar8,0);
      FUN_00544e30();
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x918))();
      (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x998))();
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x998))();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x998))();
  cVar4 = FUN_00549d80();
  pcVar3 = *(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x918);
  if (cVar4 == '\0') {
    (*pcVar3)();
  }
  else {
    (*pcVar3)();
  }
  if (*(int64_t *)(this_ptr + 0xe0) == 0) {
    do {
      FUN_00536640();
      FUN_0052f680();
      lVar2 = local_58;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    } while (lVar2 != 0);
    FUN_00536630();
    FUN_01f27fe0();
    local_80 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
    uVar8 = FUN_00d50b00();
    local_80 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    local_88 = (int64_t *)(this_ptr + 0x70);
    FUN_01f47190(uVar8,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      (**(code **)(*local_88 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_01f27fe0();
    uVar8 = FUN_00521db0();
    local_78 = local_98;
    local_70 = 0;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      local_90 = '\0';
    }
    local_70 = '\x01';
    FUN_000c4290(uVar8,&local_78);
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_48 = lVar2;
      local_3c = 0;
      for (lVar7 = 0; local_40 = (int)lVar7, local_40 < *(int *)(lVar2 + 0xc); lVar7 = lVar7 + 1) {
        local_58 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
        FUN_0053abf0();
      }
      FUN_0015ee90();
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

