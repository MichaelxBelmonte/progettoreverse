// Function: FUN_016efaf0
// Address: 016efaf0
// Size: 673 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016efaf0(void)

{
  uint64_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  char cVar4;
  char cVar5;
  int extraout_var;
  int iVar9;
  uint64_t uVar6;
  void *pvVar7;
  void*puVar8;
  void* pVar10;
  uint64_t uVar11;
  int64_t this_ptr;
  uint32_t uVar12;
  uint64_t local_48;
  char local_40;
  
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    FUN_016d8ab0();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    iVar9 = (int)(*(uint64_t *)(local_48 + 0xc) >> 0x20);
    if (*(uint64_t *)(local_48 + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
      iVar9 = extraout_var;
    }
    uVar6 = *(uint64_t *)(local_48 + 0x14);
    pVar10 = (void*)(uVar6 >> 0x20);
    if (uVar6 >> 0x20 == 0) {
      uVar6 = FUN_00e7bdb0();
    }
    else {
      FUN_00e7c280();
      local_48 = uVar6;
    }
    pvVar7 = _pthread_getspecific(pVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    uVar1 = *(uint64_t *)(this_ptr + 0x78);
    uVar11 = uVar1;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
      uVar11 = *(uint64_t *)(this_ptr + 0x78);
    }
    cVar5 = *(char *)(this_ptr + 0x80);
    cVar4 = cVar5;
    if (uVar11 != 0) {
      FUN_00d64850();
      if (*(int64_t *)(this_ptr + 0x78) != 0) {
        *(int64_t *)(this_ptr + 0x78) = 0;
        FUN_00d50b20();
      }
      FUN_00d64910();
      cVar4 = *(char *)(this_ptr + 0x80);
    }
    if (cVar4 != '\0') {
      FUN_00d64850();
      *(void*)(this_ptr + 0x80) = 0;
      FUN_00d64910();
    }
    if ((uVar1 == local_48) || (cVar5 != '\0')) {
      FUN_016d63b0();
    }
    else {
      FUN_00e7c280();
      if (((uVar6 >> 0x20 != 0) && (iVar9 != 0)) && (cVar5 = FUN_00e7c020(), cVar5 != '\0')) {
        FUN_00e7c280();
      }
      FUN_00e7c260();
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_025fa538;
      uVar3 = _UNK_0239372c;
      uVar2 = _UNK_02393728;
      uVar12 = _UNK_02393724;
      *(void*)((int64_t)puVar8 + 0xc) = g_02393720;
      *(void*)(puVar8 + 2) = uVar12;
      *(void*)((int64_t)puVar8 + 0x14) = uVar2;
      *(void*)(puVar8 + 3) = uVar3;
      uVar12 = FUN_00d500e0();
      FUN_016bf110(uVar12,uVar6);
      FUN_016e9c70(1,2);
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

