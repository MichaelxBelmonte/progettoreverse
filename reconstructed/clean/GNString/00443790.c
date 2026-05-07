// Function: FUN_00443790
// Address: 00443790
// Size: 1184 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00443790(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar1 = local_58;
  if ((((*(int64_t *)(this_ptr + 0x20) == 0) && (*(int64_t *)(this_ptr + 0x28) != 0)) &&
      (iVar3 = FUN_00228b30(), iVar3 == 0)) && (*(int64_t *)(this_ptr + 0x10) != 0)) {
    FUN_006f3f00();
    if (local_50 == '\0') {
      if (local_58 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_58 == (int64_t *)0x0) {
      return;
    }
    FUN_006f4810();
    FUN_002eacb0();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_0078c610();
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xde8))();
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xe10))();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_0025e9a0();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    while( true ) {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((int64_t)plVar1 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(*(int64_t *)((int64_t)plVar1 + 0x10) + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((void*)*(int64_t *)((int64_t)plVar1 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      cVar2 = FUN_00d23d70();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        FUN_00d21140();
      }
    }
    FUN_001159b0();
    if (*(int *)((int64_t)plVar1 + 0xc) != *(int *)((int64_t)plVar1 + 0xc)) {
      (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xdc8))(plVar1,1);
    }
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_58 + 0x450))();
    if (cVar2 != '\0') {
      FUN_006f4810();
      (**(code **)(*local_58 + 0x400))();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

