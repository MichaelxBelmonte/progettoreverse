// Function: FUN_0172c390
// Address: 0172c390
// Size: 1356 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0172c390(void* param_1,uint param_2)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  lVar3 = *arg1;
  if (lVar3 == 0) {
LAB_0172c488:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if (param_2 == 10) {
    *(void*)(this_ptr + 1) = 0;
    if ((char)arg1[1] != '\0') {
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(arg1 + 1) = 0;
      return;
    }
    FUN_00d50b00();
    *this_ptr = lVar3;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_0172c488;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_0172c488;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_0172c517;
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
LAB_0172c517:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_0172c8c2;
  }
  if ((param_2 & 0xfffffffe) == 0x14) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505900();
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        goto LAB_0172c8b9;
      }
      local_40 = 0;
    }
    *this_ptr = local_40;
LAB_0172c578:
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      param_1 = (void*)local_40;
    }
    FUN_015058d0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_0172c658;
      FUN_00d50b00();
LAB_0172c604:
      if (param_2 == 0x2d) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01510280();
        *(void*)(this_ptr + 1) = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            *this_ptr = local_40;
            *(void*)(this_ptr + 1) = 1;
            goto LAB_0172c8b1;
          }
LAB_0172c8a6:
          local_40 = 0;
        }
LAB_0172c8a8:
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
LAB_0172c8b1:
        FUN_00d50b20();
        goto LAB_0172c8b9;
      }
      if (param_2 != 0x2a) {
        if (param_2 == 0x1f) {
          pvVar2 = _pthread_getspecific(param_1);
          if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
            param_1 = (void*)local_40;
          }
          FUN_0150eb60();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          cVar1 = FUN_0172d1d0();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 != '\0') {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0150eb60();
            *(void*)(this_ptr + 1) = 0;
            if (local_38 != '\0') goto LAB_0172c8a8;
            if (local_40 == 0) goto LAB_0172c8a6;
            FUN_00d50b00();
            *this_ptr = local_40;
            *(void*)(this_ptr + 1) = 1;
            goto LAB_0172c8b1;
          }
        }
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        goto LAB_0172c8b1;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      cVar1 = FUN_0172d1d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        goto LAB_0172c8b1;
      }
      *this_ptr = local_40;
      goto LAB_0172c578;
    }
    if (local_40 != 0) goto LAB_0172c604;
LAB_0172c658:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
LAB_0172c8b9:
  FUN_00d50b20();
LAB_0172c8c2:
  FUN_00d50b20();
  return;
}

