// Function: FUN_01b7bf20
// Address: 01b7bf20
// Size: 633 bytes
// Class: Unknown

void FUN_01b7bf20(void* param_1,double param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  uint64_t in_RDX;
  uint64_t arg1;
  int64_t *this_ptr;
  double dVar3;
  uint64_t local_58;
  int64_t *local_50;
  double local_48;
  int64_t *local_40;
  double local_38;
  
  if ((arg1 >> 0x20 != 0) || (in_RDX >> 0x20 != 0)) {
    (**(code **)(*this_ptr + 0x978))();
    plVar1 = local_40;
    if (local_38._0_1_ == '\0') {
      if (local_40 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b00();
      if ((local_38._0_1_ != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (int64_t *)0x0) {
      return;
    }
    local_50 = (int64_t *)(**(code **)(*plVar1 + 0x940))();
    local_48 = (double)(**(code **)(*plVar1 + 0x940))();
    dVar3 = (double)(**(code **)(*plVar1 + 0x918))();
    if (arg1 >> 0x20 != 0) {
      (**(code **)(*this_ptr + 0xa60))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (int64_t *)FUN_016c98e0();
      if ((local_38._0_1_ != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (in_RDX >> 0x20 == 0) {
      local_48 = local_48 + dVar3;
    }
    else {
      (**(code **)(*this_ptr + 0xa60))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = (double)FUN_016c98e0();
      if ((local_38._0_1_ != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    dVar3 = (double)(**(code **)(*plVar1 + 0xa50))();
    local_38 = param_2;
    if (dVar3 <= g_02394dd0 + local_48) {
      if (dVar3 + param_2 < g_023942d0 + (double)local_50) {
        local_40 = (int64_t *)(local_48 - param_2);
        if ((double)local_50 <= local_48 - param_2) {
          local_40 = local_50;
        }
        local_58 = (**(code **)(*plVar1 + 0xa98))();
        (**(code **)(*plVar1 + 0xce0))(g_02390450,&local_58);
      }
    }
    else {
      local_40 = local_50;
      local_58 = (**(code **)(*plVar1 + 0xa98))();
      (**(code **)(*plVar1 + 0xce0))(g_02390450,&local_58);
    }
    FUN_00d50b20();
  }
  return;
}

