// Function: FUN_018c28f0
// Address: 018c28f0
// Size: 854 bytes
// Class: MUTagOptionAttribute
// === MUTagOptionAttribute properties ===
//                   _allowsMultipleOptions
//                   _allOptionsCache
//                   _virtualOptionType
//                   _isInstrumentTypeSeparated
//                   _titleRenamings
//                   _virtualParent
//                   _virtualRoot
//                   _virtualChilds


int64_t * FUN_018c28f0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  uint64_t uVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int *)(*(int64_t *)(arg1 + 0x48) + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else if (*(int64_t *)(arg1 + 0x50) == 0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_0258a670;
    (*g_0258a688)();
    lVar1 = *(int64_t *)(arg1 + 0x50);
    *(void**)(arg1 + 0x50) = puVar2;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    uVar4 = 1;
    FUN_00e38130(1,0,1);
    lVar1 = *(int64_t *)(arg1 + 0x48);
    if (lVar1 != 0) {
      local_60 = '\0';
      local_68 = 0;
      local_48 = 0;
      local_50 = 0;
      local_58 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        do {
          local_98 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8);
          local_90 = '\0';
          local_68 = local_98;
          pvVar3 = _pthread_getspecific((void*)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_018909c0();
          local_40 = local_78;
          local_38 = 0;
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_38 = '\x01';
          FUN_018c2840();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar5);
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      FUN_017d9900();
    }
    local_88 = *param_2;
    local_80 = '\0';
    FUN_018c2db0();
    lVar1 = local_68;
    *(void*)(this_ptr + 1) = 0;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = lVar1;
        *(void*)(this_ptr + 1) = 1;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = local_68;
      *(void*)(this_ptr + 1) = 1;
      local_60 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a8 = *param_2;
    local_a0 = '\0';
    FUN_018c2db0(param_1,&local_a8);
    lVar1 = local_68;
    *(void*)(this_ptr + 1) = 0;
    if (local_60 == '\0') {
      if (local_68 == 0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = lVar1;
        *(void*)(this_ptr + 1) = 1;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = local_68;
      *(void*)(this_ptr + 1) = 1;
      local_60 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

