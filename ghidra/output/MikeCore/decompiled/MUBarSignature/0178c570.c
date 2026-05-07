// Function: FUN_0178c570
// Address: 0178c570
// Size: 740 bytes
// Class: MUBarSignature


/* WARNING: Removing unreachable block (ram,0x0178c68a) */
/* WARNING: Removing unreachable block (ram,0x0178c693) */

ulonglong FUN_0178c570(pthread_key_t param_1,ulonglong *param_2)

{
  char cVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int extraout_var;
  ulonglong uVar5;
  pthread_key_t pVar6;
  undefined1 *unaff_RSI;
  longlong local_60;
  char local_58;
  int iStack_4c;
  int iStack_44;
  longlong local_40;
  char local_38;
  
  if (unaff_RSI != (undefined1 *)0x0) {
    *unaff_RSI = 1;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508450();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150ff70();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_01508650();
  if (param_2 == (ulonglong *)0x0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    param_1 = 0;
    uVar4 = FUN_016c4630(0,2);
  }
  else {
    uVar4 = *param_2;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar6 = 0;
  FUN_016c47d0(0,uVar3);
  FUN_00e7bcc0();
  FUN_0123ffd0();
  FUN_00e7bdc0();
  iStack_44 = (int)(uVar4 >> 0x20);
  if (((((iStack_44 != 0) && (iStack_4c = (int)(uVar3 >> 0x20), iStack_4c != 0)) &&
       (cVar1 = FUN_00e7c020(), cVar1 != '\0')) &&
      ((FUN_00e7b970(), uVar4 >> 0x20 != 0 && (extraout_var != 0)))) &&
     (cVar1 = FUN_00e7c020(), cVar1 == '\0')) {
    pvVar2 = _pthread_getspecific(pVar6);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_01508740();
    uVar3 = uVar4;
    if (((unaff_RSI != (undefined1 *)0x0) && (uVar5 >> 0x20 != 0)) &&
       ((iStack_44 != 0 && (cVar1 = FUN_00e7c020(), cVar1 == '\0')))) {
      *unaff_RSI = 0;
    }
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return uVar3;
}


