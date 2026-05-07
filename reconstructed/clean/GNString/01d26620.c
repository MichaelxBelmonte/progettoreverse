// Function: FUN_01d26620
// Address: 01d26620
// Size: 574 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01d26620(uint64_t param_1,void*param_2)

{
  int iVar1;
  void*puVar2;
  int iVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  uint64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint8_t local_80;
  int64_t local_40;
  char local_38;
  
  if (*(int *)(*(int64_t *)(arg1 + 0x20) + 0xc) < 2) {
    iVar1 = FUN_01d26e20();
    if (iVar1 == -1) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      local_88 = *param_2;
      local_80 = 0;
      FUN_01d26d00(iVar1,&local_88);
    }
  }
  else {
    FUN_01d26990();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    FUN_00d227d0();
    if ((local_40 != 0) && (3 < *(int *)(local_40 + 0x18))) {
      lVar4 = 0;
      do {
        local_98 = *param_2;
        local_90 = 0;
        FUN_01d26d00(*(void*)(*(int64_t *)(local_40 + 0x10) + lVar4 * 4),&local_98);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        iVar1 = *(int *)(local_40 + 0x18);
        iVar3 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar3 = iVar1;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < iVar3 >> 2);
    }
    FUN_00e986f0();
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
      }
    }
    else {
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

