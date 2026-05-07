// Function: FUN_0076fba0
// Address: 0076fba0
// Size: 517 bytes
// Class: MUAudioFileSource


void FUN_0076fba0(pthread_key_t param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  local_68 = *param_3;
  local_60 = 0;
  pVar5 = param_1;
  FUN_00788fc0(param_1,&local_68);
  lVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) {
    return;
  }
  if ((char)param_1 == '\0') {
    if (*param_3 != 0) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_016c2e90();
      if (1 < iVar2) {
        pvVar3 = _pthread_getspecific(pVar5);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          local_38 = lVar1;
        }
        else {
          local_38 = *(longlong *)(lVar1 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c2e90();
        FUN_016c1150();
      }
    }
  }
  else {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = lVar1;
  local_40 = '\0';
  FUN_012caf90();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


