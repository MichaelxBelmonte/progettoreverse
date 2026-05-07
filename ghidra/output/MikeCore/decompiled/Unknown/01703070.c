// Function: FUN_01703070
// Address: 01703070
// Size: 701 bytes
// Class: Unknown


longlong * FUN_01703070(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong *unaff_RDI;
  undefined4 *puVar6;
  longlong lVar7;
  longlong local_80;
  char local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_4c;
  longlong local_48;
  char local_40;
  longlong local_38;
  undefined8 *puVar5;
  
  puVar6 = &local_64;
  if (param_3 != (undefined4 *)0x0) {
    puVar6 = param_3;
  }
  local_64 = 0xffffffff;
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar5 = param_2;
  FUN_0165c0f0(param_2,*param_2,param_1,puVar6);
  pVar4 = (pthread_key_t)puVar5;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar5 = param_1;
  FUN_0165c650(param_1,param_2,puVar6);
  lVar7 = local_48;
  pVar4 = (pthread_key_t)puVar5;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_38 = lVar7;
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_0165e830();
  if (cVar2 == '\0') {
    *unaff_RDI = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  local_60 = *param_2;
  local_70 = *param_1;
  local_4c = *puVar6;
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar5 = &local_70;
  FUN_0165c650(puVar5,&local_60,&local_4c);
  lVar7 = local_48;
  pVar4 = (pthread_key_t)puVar5;
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_017032eb;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == 0) {
LAB_017032eb:
    bVar1 = true;
    lVar7 = local_38;
    goto LAB_017032ff;
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_0165e830();
  if (cVar2 != '\0') {
    *unaff_RDI = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return unaff_RDI;
  }
  *param_2 = local_60;
  bVar1 = false;
LAB_017032ff:
  *unaff_RDI = lVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((!bVar1) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


