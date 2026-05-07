// Function: FUN_017dba20
// Address: 017dba20
// Size: 1751 bytes
// Class: MUNoiseMapper
// String references:
//   "%@ %@"
// === MUNoiseMapper properties ===
//                   _realizations
//                   _pitchIndex
//                   _notes
//                   _noteMappingCache


uint64_t FUN_017dba20(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t *plVar5;
  int64_t arg1;
  uint64_t this_ptr;
  bool bVar6;
  int64_t local_f0;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  if (*(int64_t *)(arg1 + 0x40) != 0) {
    FUN_00d50b00();
    lVar1 = *(int64_t *)(arg1 + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01508450();
    if (local_e0 == 0) {
      bVar6 = false;
    }
    else {
      lVar3 = *(int64_t *)(arg1 + 0x40);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar3;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508450();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d890();
      if (local_78 == 0) {
        bVar6 = false;
      }
      else {
        lVar3 = *(int64_t *)(arg1 + 0x40);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01508450();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150d890();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505900();
        bVar6 = local_88 != 0;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (bVar6) {
      lVar1 = *(int64_t *)(arg1 + 0x40);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar1;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508300();
      local_b0 = g_027e45c8;
      if (g_027e45c8 != 0) {
        FUN_00d50b00();
      }
      local_a8 = '\x01';
      local_a0 = 0;
      local_98 = '\0';
      plVar5 = &local_a0;
      FUN_017433e0(plVar5,&local_b0,0,0);
      pVar4 = (void*)plVar5;
      local_90 = *(int64_t *)(arg1 + 0x40);
      if (local_90 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508450();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150d890();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505900();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar1 = *(int64_t *)(arg1 + 0x40);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
        lVar3 = *(int64_t *)(arg1 + 0x40);
      }
      else {
        lVar3 = *(int64_t *)(arg1 + 0x40);
      }
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507970();
      FUN_01508be0();
      FUN_016c0400();
      local_f0 = local_68;
      FUN_00083ea0(2,&local_f0);
      FUN_00d8cb40();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 == 0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
  }
  FUN_00d4ffd0();
  return this_ptr;
}

