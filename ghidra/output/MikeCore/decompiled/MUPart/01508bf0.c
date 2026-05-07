// Function: FUN_01508bf0
// Address: 01508bf0
// Size: 708 bytes
// Class: MUPart


/* WARNING: Removing unreachable block (ram,0x01508c6e) */
/* WARNING: Removing unreachable block (ram,0x01508c77) */

ulonglong FUN_01508bf0(pthread_key_t param_1)

{
  undefined8 uVar1;
  char cVar2;
  void *pvVar3;
  int extraout_var;
  int extraout_var_00;
  ulonglong uVar4;
  pthread_key_t pVar5;
  longlong unaff_RDI;
  ulonglong local_58;
  int iStack_4c;
  longlong local_40;
  char local_38;
  
  local_58 = *(ulonglong *)(unaff_RDI + 0x38);
  uVar1 = *(undefined8 *)(unaff_RDI + 0x40);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150ff70();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016caaa0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016caaa0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  FUN_016c4630(0,1);
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  FUN_016c4630();
  FUN_00e7c260();
  iStack_4c = (int)((ulonglong)uVar1 >> 0x20);
  if (((((iStack_4c != 0) && (local_58 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0')) &&
      ((extraout_var_00 != 0 && (extraout_var != 0)))) && (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_016c4760();
    FUN_00e7b970();
    if ((uVar4 >> 0x20 != 0) && (cVar2 = FUN_00e7c6b0(), cVar2 == '\0')) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = FUN_016c4760();
    }
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return local_58;
}


