// Function: FUN_012c7b60
// Address: 012c7b60
// Size: 513 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x012c7d44) */
/* WARNING: Removing unreachable block (ram,0x012c7d4d) */

void FUN_012c7b60(pthread_key_t param_1)

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


