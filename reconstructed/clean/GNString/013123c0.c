// Function: FUN_013123c0
// Address: 013123c0
// Size: 898 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


byte FUN_013123c0(int64_t param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  char unaff_SIL;
  int64_t this_ptr;
  byte bVar8;
  uint8_t uVar9;
  bool bVar10;
  int64_t local_58;
  char local_50;
  int local_40;
  int64_t lVar7;
  
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  bVar1 = FUN_012f49f0();
  pVar6 = (void*)param_1;
  param_2 = param_2 | bVar1;
  lVar7 = *(int64_t *)(this_ptr + 0xf8);
  if (lVar7 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    bVar8 = 0;
    while( true ) {
      lVar5 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar7 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + 8 + lVar5 * 8);
      bVar2 = FUN_013123c0(*(int64_t *)(lVar7 + 0x10),param_2);
      bVar8 = bVar8 | bVar2;
    }
    FUN_01312d90();
    pVar6 = (void*)lVar7;
    bVar1 = bVar8 & 1 | bVar1;
    param_1 = lVar7;
  }
  if (unaff_SIL == '\0') {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_012f49e0();
  }
  else {
    uVar9 = bVar1 == 0;
    if (((bool)uVar9) && (param_2 == 1)) {
      lVar7 = *(int64_t *)(this_ptr + 0xf0);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      do {
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a50();
        if (local_58 == lVar7) {
LAB_013125bd:
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar10 = lVar7 != 0;
          lVar7 = local_58;
          if (bVar10) {
            FUN_00d50b20();
            goto LAB_013125bd;
          }
        }
        else {
          bVar10 = lVar7 != 0;
          lVar7 = local_58;
          if (bVar10) {
            FUN_00d50b20();
          }
        }
        if (lVar7 == 0) goto LAB_01312749;
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_012f49f0();
        pVar6 = (void*)param_1;
      } while (cVar3 == '\0');
      if (lVar7 != 0) {
        FUN_00d50b00();
        lVar7 = *(int64_t *)(this_ptr + 0xf0);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_01312080();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        uVar9 = 1;
        if (cVar3 == '\0') {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar9 = FUN_012f49e0();
        }
        *(void*)(this_ptr + 0x16a) = uVar9;
        FUN_00d50b20();
        FUN_00d50b20();
        return 0;
      }
LAB_01312749:
      uVar9 = 0;
    }
  }
  *(void*)(this_ptr + 0x16a) = uVar9;
  return bVar1;
}

