// Function: FUN_016ce9f0
// Address: 016ce9f0
// Size: 1177 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016ce9f0(char param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  byte bVar3;
  char cVar4;
  void*puVar5;
  void *pvVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  void* pVar10;
  void*this_ptr;
  uint64_t local_40;
  char local_38;
  
  lVar1 = *param_2;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025fa538;
  uVar2 = _UNK_02393728;
  *(void*)((int64_t)puVar5 + 0xc) = g_02393720;
  *(void*)((int64_t)puVar5 + 0x14) = uVar2;
  FUN_00d500e0();
  uVar7 = *(uint64_t *)(lVar1 + 0xc);
  uVar2 = *(void*)(lVar1 + 0x14);
  *(uint64_t *)((int64_t)puVar5 + 0xc) = uVar7;
  *(void*)((int64_t)puVar5 + 0x14) = uVar2;
  bVar3 = 1;
  if ((*(int *)(*param_2 + 0x10) != 0) && (*(int *)(*param_2 + 0x18) != 0)) {
    bVar3 = FUN_00e7c000();
    bVar3 = bVar3 ^ 1;
    if ((bVar3 == 0) && (param_1 == '\0')) goto LAB_016cee6f;
    uVar7 = *(uint64_t *)((int64_t)puVar5 + 0xc);
  }
  pVar10 = (void*)(uVar7 >> 0x20);
  if ((uVar7 >> 0x20 == 0) || ((bVar3 ^ 1) != 0)) {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    uVar7 = FUN_00e7cc50();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar8 = FUN_00e7bdb0();
    uVar9 = uVar7;
    if (((uVar7 >> 0x20 != 0) && (uVar8 >> 0x20 != 0)) && (cVar4 = FUN_00e7c000(), cVar4 != '\0')) {
      uVar9 = FUN_00e7bdb0();
    }
    *(uint64_t *)((int64_t)puVar5 + 0xc) = uVar9;
    local_40 = uVar7;
  }
  uVar7 = *(uint64_t *)((int64_t)puVar5 + 0x14);
  bVar3 = uVar7 >> 0x20 == 0 | bVar3 ^ 1;
  pVar10 = (void*)CONCAT71((uint7)(uVar7 >> 0x28),bVar3);
  if (bVar3 == 0) {
LAB_016ced3c:
    FUN_00e7c280();
  }
  else {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    uVar7 = FUN_00e7cc50();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar9 = FUN_00e7bdb0();
    if (((uVar7 >> 0x20 == 0) || (uVar9 >> 0x20 == 0)) || (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
      FUN_00e7c260();
      *(uint64_t *)((int64_t)puVar5 + 0x14) = uVar7;
    }
    else {
      uVar7 = FUN_00e7bdb0();
      *(uint64_t *)((int64_t)puVar5 + 0x14) = uVar7;
    }
    if (uVar7 >> 0x20 != 0) goto LAB_016ced3c;
    uVar7 = FUN_00e7bdb0();
  }
  uVar9 = *(uint64_t *)((int64_t)puVar5 + 0xc);
  if (uVar9 >> 0x20 == 0) {
    uVar9 = FUN_00e7bdb0();
  }
  if (((uVar7 >> 0x20 != 0) && (uVar9 >> 0x20 != 0)) && (cVar4 = FUN_00e7c020(), cVar4 != '\0')) {
    uVar7 = *(uint64_t *)((int64_t)puVar5 + 0xc);
    if (uVar7 >> 0x20 == 0) {
      uVar7 = FUN_00e7bdb0();
    }
    uVar9 = FUN_00e7bdb0();
    if (((uVar7 >> 0x20 == 0) || (uVar9 >> 0x20 == 0)) || (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
      FUN_00e7c260();
    }
    else {
      uVar7 = FUN_00e7bdb0();
    }
    *(uint64_t *)((int64_t)puVar5 + 0x14) = uVar7;
  }
LAB_016cee6f:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

