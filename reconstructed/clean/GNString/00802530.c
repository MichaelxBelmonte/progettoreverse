// Function: FUN_00802530
// Address: 00802530
// Size: 1206 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00802530(void* param_1)

{
  int64_t lVar1;
  int iVar2;
  void *pvVar3;
  void*puVar4;
  void*puVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  
  iVar2 = (**(code **)(**(int64_t **)(arg1 + 0x88) + 0x920))();
  if (iVar2 != 9) goto LAB_008029c6;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_012fc0c0();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(arg1 + 0xb8) + 0x920))();
  FUN_01d70140();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      goto LAB_0080271b;
    }
  }
  else if (local_60 != 0) {
LAB_0080271b:
    FUN_00802d30();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    if (local_60 != 0) {
      FUN_00d6f370();
      lVar1 = g_0272fba8;
      if (g_0272fba8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d6f570();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar5 = &g_02572358;
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (0 < *(int *)(local_60 + 0xc)) {
        iVar2 = 0;
        do {
          pvVar3 = _pthread_getspecific((void*)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e7210();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00d214d0();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(local_60 + 0xc));
      }
      FUN_000be170();
      *this_ptr = puVar4;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      FUN_00d50b20();
      if (local_60 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
LAB_008029c6:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

