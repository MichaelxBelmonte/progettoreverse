// Function: FUN_017e7190
// Address: 017e7190
// Size: 613 bytes
// Class: GNInt


undefined8 FUN_017e7190(ulonglong param_1,longlong *param_2,ulonglong *param_3)

{
  char cVar1;
  ulonglong uVar2;
  void *pvVar3;
  int extraout_var;
  ulonglong uVar4;
  pthread_key_t pVar5;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 uVar6;
  
  if (*param_2 != 0) {
    pVar5 = 0;
    uVar2 = FUN_017e7400();
    if (param_3 != (ulonglong *)0x0) {
      *param_3 = uVar2;
    }
    if (((uVar2 >> 0x20 == 0) || ((int)((ulonglong)unaff_RDI >> 0x20) == 0)) ||
       (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016caaa0();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016caaa0();
      FUN_00e7bcc0();
      if ((param_1 >> 0x20 != 0) && (cVar1 = FUN_00e7c630(), cVar1 == '\0')) {
        FUN_00e7bdc0();
      }
      FUN_00e7b970();
      if (((uVar2 >> 0x20 == 0) || (extraout_var == 0)) || (cVar1 = FUN_00e7c020(), cVar1 == '\0'))
      {
        uVar6 = CONCAT71((uint7)(param_1 >> 0x28),1);
        if (unaff_RSI >> 0x20 == 0) {
          return uVar6;
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_016caaa0();
        if (((uVar4 >> 0x20 == 0) || (uVar2 >> 0x20 == 0)) ||
           (cVar1 = FUN_00e7c020(), cVar1 != '\0')) {
          FUN_00e7b970();
          FUN_00e7b970();
          if (uVar4 >> 0x20 == 0) {
            return uVar6;
          }
          if (uVar2 >> 0x20 == 0) {
            return uVar6;
          }
          cVar1 = FUN_00e7c020();
          if (cVar1 == '\0') {
            return uVar6;
          }
        }
      }
    }
  }
  return 0;
}


