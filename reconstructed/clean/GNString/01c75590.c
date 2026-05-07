// Function: FUN_01c75590
// Address: 01c75590
// Size: 742 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01c75590(void* param_1,char param_2)

{
  int64_t lVar1;
  void *pvVar2;
  uint64_t uVar3;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0x31] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    if ((int)this_ptr[0x39] != 0) {
      lVar1 = this_ptr[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016d8300();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar3 = CONCAT71((int7)((uint64_t)local_40 >> 8),local_40 != 0);
      if ((local_40 != 0) && (param_2 != '\0')) {
        lVar1 = this_ptr[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_016cbba0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = this_ptr[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016efaf0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = this_ptr[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01c44d20();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01c44700();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_01c62c70();
        lVar1 = this_ptr[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c1150();
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x620))();
        *(void*)(this_ptr + 0x3a) = 1;
        uVar3 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01c75617;
    }
  }
  uVar3 = 0;
LAB_01c75617:
  return uVar3 & 0xffffffff;
}

