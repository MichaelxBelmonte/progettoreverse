// Function: FUN_012c8210
// Address: 012c8210
// Size: 599 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x012c8401) */
/* WARNING: Removing unreachable block (ram,0x012c8379) */
/* WARNING: Removing unreachable block (ram,0x012c8382) */
/* WARNING: Removing unreachable block (ram,0x012c8273) */
/* WARNING: Removing unreachable block (ram,0x012c827c) */
/* WARNING: Removing unreachable block (ram,0x012c8248) */
/* WARNING: Removing unreachable block (ram,0x012c8251) */
/* WARNING: Removing unreachable block (ram,0x012c82a1) */
/* WARNING: Removing unreachable block (ram,0x012c82aa) */
/* WARNING: Removing unreachable block (ram,0x012c8330) */
/* WARNING: Removing unreachable block (ram,0x012c844a) */
/* WARNING: Removing unreachable block (ram,0x012c8453) */

void FUN_012c8210(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  FUN_00d649d0(param_1,unaff_RDI + 0x48);
  lVar1 = *unaff_RSI;
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


