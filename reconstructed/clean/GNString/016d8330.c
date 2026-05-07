// Function: FUN_016d8330
// Address: 016d8330
// Size: 1070 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016d8330(void*param_1)

{
  int iVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  void*puVar7;
  int64_t this_ptr;
  char cVar8;
  int64_t local_58;
  char local_50;
  void*local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x88) == 0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    param_1 = &g_02572358;
    *puVar2 = &g_02572358;
    (*g_02572370)();
    lVar5 = *(int64_t *)(this_ptr + 0x88);
    *(void**)(this_ptr + 0x88) = puVar2;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    FUN_00d227d0();
    FUN_00d21140();
    FUN_00d21140();
    FUN_00d21140();
    local_40 = (void*)0x0;
    local_38 = '\0';
    FUN_00d21140();
  }
  FUN_00d50b00();
  FUN_016cbba0();
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  FUN_00d50b20();
  FUN_00d233f0();
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    pvVar3 = _pthread_getspecific((void*)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    lVar5 = *(int64_t *)(this_ptr + 0x78);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    iVar1 = FUN_00d237a0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((void*)param_1);
    puVar7 = local_40;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = local_40;
      puVar7 = *(void**)(local_40 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8 + 0x20);
    }
    pVar6 = (void*)param_1;
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      pVar6 = (void*)local_40;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    lVar5 = *(int64_t *)(lVar5 + 0x10);
    lVar4 = *(int64_t *)(lVar5 + (int64_t)iVar1 * 8);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    pVar6 = (void*)lVar5;
    if (*(int64_t *)(puVar7 + 0x78) != lVar4) {
      FUN_00d64850();
      lVar5 = *(int64_t *)(puVar7 + 0x78);
      if (lVar5 != lVar4) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        *(int64_t *)(puVar7 + 0x78) = lVar4;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      cVar8 = *(char *)(this_ptr + 0x80);
      puVar7 = local_40;
      if (local_40[0x80] == cVar8) goto LAB_016d8741;
    }
    else {
      cVar8 = *(char *)(this_ptr + 0x80);
      puVar7 = *(void**)(local_40 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20);
      if ((*(void**)(local_40 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8 + 0x20))[0x80]
          == cVar8) goto LAB_016d8741;
    }
    FUN_00d64850();
    puVar7[0x80] = cVar8;
    FUN_00d64910();
  }
LAB_016d8741:
  if (local_40 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

