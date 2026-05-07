// Function: FUN_01735d80
// Address: 01735d80
// Size: 1675 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01735d80(int64_t *param_1)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  void* pVar6;
  int64_t lVar7;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t local_40;
  char local_38;
  
  lVar8 = local_68;
  FUN_017bf740();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_0173615d;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_0173615d;
  local_68 = 0;
  local_50 = -1;
  do {
    lVar4 = (int64_t)local_50;
    local_50 = local_50 + 1;
    if (*(int *)(lVar8 + 0xc) <= local_50) {
      bVar2 = false;
      lVar4 = 0;
      goto LAB_017360a5;
    }
    lVar7 = *(int64_t *)(lVar8 + 0x10);
    local_68 = *(int64_t *)(lVar7 + 8 + lVar4 * 8);
    plVar1 = (int64_t *)*arg1;
    pvVar5 = _pthread_getspecific((void*)lVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017aabf0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  } while (cVar3 == '\0');
  pvVar5 = _pthread_getspecific((void*)lVar7);
  lVar8 = lVar7;
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
    lVar8 = lVar7;
  }
  FUN_017aa5e0();
  pvVar5 = _pthread_getspecific((void*)lVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  pvVar5 = _pthread_getspecific((void*)lVar8);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if (local_40 == 0) {
    bVar2 = false;
    lVar4 = 0;
    if (local_38 != '\0') {
      lVar4 = 0;
      bVar2 = false;
    }
  }
  else {
    lVar4 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      local_38 = '\0';
      bVar2 = true;
    }
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
LAB_017360a5:
  lVar7 = local_68;
  pVar6 = (void*)lVar8;
  FUN_017c0b20();
  FUN_00d50b20();
  if (lVar4 != 0) {
    FUN_0173b7c0();
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    if (*param_1 == 0) {
      FUN_0176f970();
      if (local_68 == 0) {
        lVar8 = 0;
      }
      else {
        FUN_00d50b00();
        lVar8 = local_68;
      }
    }
    else {
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      lVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_68 = local_40;
      }
      else {
        local_68 = local_40;
        local_38 = '\0';
      }
    }
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b720();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b680();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0174e010();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    *(void*)(this_ptr + 1) = 0;
    if (local_68 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this_ptr = local_68;
      *(void*)(this_ptr + 1) = 1;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (!bVar2) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
LAB_0173615d:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

