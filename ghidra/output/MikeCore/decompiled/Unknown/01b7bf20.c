// Function: FUN_01b7bf20
// Address: 01b7bf20
// Size: 633 bytes
// Class: Unknown


void FUN_01b7bf20(pthread_key_t param_1,double param_2)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong in_RDX;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  double dVar3;
  undefined8 local_58;
  longlong *local_50;
  double local_48;
  longlong *local_40;
  double local_38;
  
  if ((unaff_RSI >> 0x20 != 0) || (in_RDX >> 0x20 != 0)) {
    (**(code **)(*unaff_RDI + 0x978))();
    plVar1 = local_40;
    if (local_38._0_1_ == '\0') {
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
      if ((local_38._0_1_ != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (longlong *)0x0) {
      return;
    }
    local_50 = (longlong *)(**(code **)(*plVar1 + 0x940))();
    local_48 = (double)(**(code **)(*plVar1 + 0x940))();
    dVar3 = (double)(**(code **)(*plVar1 + 0x918))();
    if (unaff_RSI >> 0x20 != 0) {
      (**(code **)(*unaff_RDI + 0xa60))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (longlong *)FUN_016c98e0();
      if ((local_38._0_1_ != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (in_RDX >> 0x20 == 0) {
      local_48 = local_48 + dVar3;
    }
    else {
      (**(code **)(*unaff_RDI + 0xa60))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = (double)FUN_016c98e0();
      if ((local_38._0_1_ != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    dVar3 = (double)(**(code **)(*plVar1 + 0xa50))();
    local_38 = param_2;
    if (dVar3 <= DAT_02394dd0 + local_48) {
      if (dVar3 + param_2 < DAT_023942d0 + (double)local_50) {
        local_40 = (longlong *)(local_48 - param_2);
        if ((double)local_50 <= local_48 - param_2) {
          local_40 = local_50;
        }
        local_58 = (**(code **)(*plVar1 + 0xa98))();
        (**(code **)(*plVar1 + 0xce0))(DAT_02390450,&local_58);
      }
    }
    else {
      local_40 = local_50;
      local_58 = (**(code **)(*plVar1 + 0xa98))();
      (**(code **)(*plVar1 + 0xce0))(DAT_02390450,&local_58);
    }
    FUN_00d50b20();
  }
  return;
}


