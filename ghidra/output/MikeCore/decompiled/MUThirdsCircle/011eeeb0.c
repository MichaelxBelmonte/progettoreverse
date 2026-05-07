// Function: FUN_011eeeb0
// Address: 011eeeb0
// Size: 706 bytes
// Class: MUThirdsCircle


undefined8 FUN_011eeeb0(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  bool bVar4;
  longlong *local_60;
  char local_58;
  undefined8 local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  local_50 = 0;
  if ((*(longlong *)(unaff_RDI + 0x48) != 0) && (*(longlong *)(unaff_RDI + 0x50) != 0)) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264180();
    if (local_38 == (longlong *)0x0) {
      bVar4 = false;
    }
    else {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264180();
      pvVar1 = _pthread_getspecific(param_1);
      plVar3 = local_60;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar3 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar3 + 0x378))();
      bVar4 = local_48 != (longlong *)0x0;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar4) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264180();
      pvVar1 = _pthread_getspecific(param_1);
      plVar3 = local_48;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar3 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar3 + 0x378))();
      pvVar1 = _pthread_getspecific(param_1);
      plVar3 = local_38;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar3 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd200();
      local_50 = (**(code **)(*plVar3 + 0x380))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = FUN_013dd200();
    }
  }
  return local_50;
}


