// Function: FUN_006238c0
// Address: 006238c0
// Size: 1249 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_006238c0(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  uint64_t uVar7;
  int64_t *this_ptr;
  int64_t *local_98;
  char local_90;
  int64_t *local_68;
  char local_60;
  int local_50;
  int64_t local_40;
  char local_38;
  int64_t lVar6;
  
  plVar1 = local_68;
  (**(code **)(*this_ptr + 0x5d8))();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00623923;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_00623923:
    FUN_006f4810();
    FUN_002eacb0();
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)((int64_t)local_68 + 0xc) == 0) {
      uVar7 = 0;
LAB_00623dad:
      FUN_00d50b20();
    }
    else {
      FUN_0063f230();
      if (local_68 == (int64_t *)0x0) {
        uVar7 = 1;
      }
      else {
        FUN_0063f230();
        uVar2 = FUN_00212c70();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_60 != '\0') {
          FUN_00d50b20();
        }
        uVar7 = (uint64_t)uVar2 ^ 1;
        if ((char)uVar2 != '\0') goto LAB_00623dad;
      }
      if (param_2 == '\0') goto LAB_00623dad;
      local_50 = -1;
      while (local_50 = local_50 + 1, local_50 < *(int *)((int64_t)local_68 + 0xc)) {
        FUN_006f3f00();
        FUN_00793930();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      local_68 = (int64_t *)0x0;
      local_50 = -1;
      while( true ) {
        lVar3 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((int64_t)plVar1 + 0xc) <= local_50) break;
        lVar6 = *(int64_t *)((int64_t)plVar1 + 0x10);
        local_68 = *(int64_t **)(lVar6 + 8 + lVar3 * 8);
        FUN_006f3f00();
        pVar5 = (void*)lVar6;
        (**(code **)(*local_98 + 0x628))();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_004a7530();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      FUN_006f3f00();
      FUN_0074a910();
      FUN_006f4810();
      FUN_006f4810();
      FUN_01beea30();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*local_68 + 0x9d0))();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
      if (plVar1 != (int64_t *)0x0) goto LAB_00623dad;
    }
    FUN_00d50b20();
    goto LAB_00623dbd;
  }
  uVar7 = 0;
LAB_00623dbd:
  return uVar7 & 0xffffffff;
}

