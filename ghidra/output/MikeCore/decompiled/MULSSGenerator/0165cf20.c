// Function: FUN_0165cf20
// Address: 0165cf20
// Size: 510 bytes
// Class: MULSSGenerator


undefined8 FUN_0165cf20(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  undefined8 unaff_RSI;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  longlong in_stack_ffffffffffffffc0;
  char local_38;
  
  pVar4 = (pthread_key_t)local_58;
  FUN_0165d150();
  if (local_38 == '\0') {
    if (in_stack_ffffffffffffffc0 != 0) {
      FUN_00d50b00();
      goto LAB_0165cf72;
    }
  }
  else if (in_stack_ffffffffffffffc0 != 0) {
LAB_0165cf72:
    FUN_00e7b970();
    if (param_2 != (undefined8 *)0x0) {
      pvVar1 = _pthread_getspecific(pVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123fff0();
      uVar2 = FUN_00e7c8b0();
      pvVar1 = _pthread_getspecific(pVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = FUN_0123ffb0();
      FUN_00e7bac0();
      *param_2 = uVar2;
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      in_stack_ffffffffffffffc0 =
           *(longlong *)
            (in_stack_ffffffffffffffc0 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_0123ffb0();
    FUN_00e7bac0();
    uVar2 = *(undefined8 *)(in_stack_ffffffffffffffc0 + 0x48);
    FUN_00e7b820();
    FUN_00d50b20();
    return uVar2;
  }
  if (param_2 != (undefined8 *)0x0) {
    FUN_00e7bdb0();
    uVar2 = FUN_00e7c8b0();
    *param_2 = uVar2;
  }
  return unaff_RSI;
}


