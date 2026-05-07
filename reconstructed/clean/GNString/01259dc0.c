// Function: FUN_01259dc0
// Address: 01259dc0
// Size: 875 bytes
// Class: GNString
// String references:
//   "%@ %Q %f %f"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01259dc0(void* param_1)

{
  uint32_t uVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t arg1;
  uint64_t this_ptr;
  int64_t *plVar5;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_48;
  double local_40;
  double local_38;
  
  if (*(int64_t *)(arg1 + 200) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if ((char)local_60 == '\0') {
      if (local_68 == (void*)0x0) goto LAB_0125a10b;
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_68 == (void*)0x0) goto LAB_0125a10b;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507e40();
    if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (local_68 != (void*)0x0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507e40();
      pvVar2 = _pthread_getspecific(param_1);
      plVar5 = local_98;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        plVar5 = (int64_t *)local_98[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar1 = FUN_01507f00();
      local_88 = g_026e3bc8;
      if (g_026e3bc8 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_78 = 0;
      local_70 = '\0';
      plVar4 = &local_88;
      (**(code **)(*plVar5 + 0x3c8))(plVar4,uVar1,&local_78);
      pvVar2 = _pthread_getspecific((void*)plVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = FUN_01507970();
      local_40 = *(double *)(arg1 + 0xe8);
      local_38 = *(double *)(arg1 + 0xb8) + local_40;
      local_60 = 4;
      local_68 = &g_024c5048;
      local_50 = 0;
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
      local_58 = local_a8;
      local_50 = '\x01';
      local_68 = (void*)&g_025d1948;
      FUN_00d8cb40(local_38,&local_68);
      local_68 = &g_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return this_ptr;
    }
    FUN_00d50b20();
  }
LAB_0125a10b:
  FUN_00d4ffd0();
  return this_ptr;
}

