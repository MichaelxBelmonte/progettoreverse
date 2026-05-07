// Function: FUN_0128de60
// Address: 0128de60
// Size: 518 bytes
// Class: MUAudioSourceAttackItem


void FUN_0128de60(pthread_key_t param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined8 local_38;
  longlong local_30;
  char local_28;
  
  if (*(longlong *)(unaff_RDI + 0xd8) != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = FUN_013dd130();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0128df77;
    }
  }
  local_38 = *(undefined8 *)(unaff_RDI + 0xf0);
LAB_0128df77:
  plVar2 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar2 + 0x18))();
  pvVar1 = _pthread_getspecific(param_1);
  plVar4 = plVar2;
  if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar4 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar4 + 0x410))(0,0);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar2 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar2 + 0x410))(*(undefined8 *)(unaff_RDI + 0xf0),local_38);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01265f70();
  FUN_00d50b20();
  return;
}


