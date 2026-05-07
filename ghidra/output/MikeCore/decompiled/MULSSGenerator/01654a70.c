// Function: FUN_01654a70
// Address: 01654a70
// Size: 537 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x01654c6c) */
/* WARNING: Removing unreachable block (ram,0x01654c75) */

void FUN_01654a70(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  longlong *unaff_RSI;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (*unaff_RSI == local_80) {
    cVar2 = '\x01';
  }
  else if (*unaff_RSI == 0) {
    cVar2 = '\0';
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    if (local_70 == 0) {
      cVar2 = '\0';
    }
    else {
      plVar1 = (longlong *)*unaff_RSI;
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      cVar2 = (**(code **)(*plVar1 + 0x50))();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5f80();
  }
  return;
}


