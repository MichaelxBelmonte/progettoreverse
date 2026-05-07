// Function: FUN_012c8210
// Address: 012c8210
// Size: 599 bytes
// Class: Unknown

void FUN_012c8210(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_00d649d0(param_1,this_ptr + 0x48);
  lVar1 = *arg1;
  FUN_00d21140();
  FUN_00d64e50();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165a070();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_012e4730();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165a0b0();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_012e4730();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

