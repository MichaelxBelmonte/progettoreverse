// Function: FUN_01a31a80
// Address: 01a31a80
// Size: 807 bytes
// Class: MUScalePitchSystem


ulonglong FUN_01a31a80(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  pthread_key_t pVar4;
  undefined8 unaff_R12;
  ulonglong uVar5;
  char *pcVar6;
  double dVar7;
  double dVar8;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a58dc0();
  cVar1 = FUN_019f2900();
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_01a58dc0();
    cVar1 = FUN_019a9840();
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      local_40[0] = local_48[0];
      pcVar3 = local_40;
      if (local_48[0] != '\0') {
        pcVar3 = local_48;
      }
      *pcVar3 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pcVar3 = local_38;
      pcVar6 = local_48;
      if (local_48[0] == '\0') {
        pcVar6 = pcVar3;
      }
      local_38[0] = local_48[0];
      *pcVar6 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pVar4 = (pthread_key_t)pcVar3;
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_01259520();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_012f7cb0();
      if (dVar7 <= dVar8) {
        uVar5 = 0;
      }
      else {
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_0125a280();
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012f9490();
        uVar5 = CONCAT71(0x28025,dVar7 < dVar8);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 0xffffffff;
}


