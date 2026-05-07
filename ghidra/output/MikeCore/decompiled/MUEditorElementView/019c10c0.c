// Function: FUN_019c10c0
// Address: 019c10c0
// Size: 581 bytes
// Class: MUEditorElementView


undefined8 FUN_019c10c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  char local_48;
  undefined4 local_3c;
  char local_38 [8];
  
  pVar6 = (pthread_key_t)param_1;
  cVar2 = FUN_019a9840();
  if (cVar2 == '\0') {
    return param_2;
  }
  if ((int)((ulonglong)param_1 >> 0x20) == 0) {
    if (*unaff_RSI == 0) {
      return param_2;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    pcVar5 = local_58;
    pVar6 = CONCAT31((int3)(pVar6 >> 8),local_58[0]);
    pcVar7 = local_38;
    if (local_58[0] != '\0') {
      pcVar7 = pcVar5;
    }
    local_38[0] = local_58[0];
    *pcVar7 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      pcVar5 = (char *)FUN_00d50b20();
    }
    if (local_60 == 0) {
      local_3c = (undefined4)CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
      lVar1 = 0;
    }
    else {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      local_3c = 0;
      lVar1 = local_60;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) {
      return param_2;
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507970();
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_3c == '\0') {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_012f9410();
  return uVar4;
}


