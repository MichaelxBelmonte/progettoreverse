// Function: FUN_0165d800
// Address: 0165d800
// Size: 516 bytes
// Class: MULSSGenerator


double FUN_0165d800(double param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  undefined1 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 local_60 [8];
  ulonglong local_58;
  longlong local_50;
  char local_48;
  double local_40;
  longlong local_38;
  char local_30;
  
  local_40 = param_1;
  FUN_0123fd00();
  uVar1 = FUN_00e7cd00(local_40);
  puVar4 = local_60;
  FUN_0165cae0(puVar4,uVar1,0,&local_58);
  local_38 = local_50;
  pVar3 = (pthread_key_t)puVar4;
  if (local_48 == '\0') {
    if (local_50 == 0) {
      return local_40;
    }
    FUN_00d50b00();
  }
  local_30 = '\x01';
  if (local_38 != 0) {
    local_30 = '\x01';
    if (local_58 >> 0x20 != 0) {
      pVar3 = 0;
      local_50 = FUN_0165cf20(0,0);
      dVar5 = (double)FUN_00e7c860();
      if (dVar5 <= local_40) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar4 = local_60;
        FUN_01253c10(puVar4,&local_38,&local_58);
        pVar3 = (pthread_key_t)puVar4;
      }
    }
    dVar5 = (double)FUN_00e7c860();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar6 = (double)FUN_00e7c860();
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_0123ffb0();
    dVar7 = (double)FUN_00e7c860();
    local_40 = (local_40 - dVar6) / dVar7 + dVar5;
    if (local_30 == '\0') {
      return local_40;
    }
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return local_40;
}


