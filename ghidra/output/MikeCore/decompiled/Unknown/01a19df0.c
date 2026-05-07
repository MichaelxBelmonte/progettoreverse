// Function: FUN_01a19df0
// Address: 01a19df0
// Size: 801 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a1a007) */
/* WARNING: Removing unreachable block (ram,0x01a1a010) */

void FUN_01a19df0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125eba0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125eb40();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152dfb0();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01a58dc0();
  if (local_38 == 0) {
    cVar1 = '\0';
  }
  else {
    FUN_01a58dc0();
    cVar1 = FUN_0199be40();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_01a58dc0();
    (**(code **)((longlong)&linkedit_data_command_000013d8.cmd + *local_48))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125eba0();
    FUN_0125eb40();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


