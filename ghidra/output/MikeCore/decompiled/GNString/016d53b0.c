// Function: FUN_016d53b0
// Address: 016d53b0
// Size: 747 bytes
// Class: GNString


undefined8 * FUN_016d53b0(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  undefined1 *puVar6;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_88 [8];
  longlong local_80;
  char local_78;
  undefined1 local_70 [12];
  undefined4 local_64;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  local_48 = plVar3;
  (**(code **)(*plVar3 + 0x18))();
  local_64 = 0xffffffff;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar6 = local_88;
  FUN_0165c340(puVar6,local_70,&local_64);
  lVar7 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  do {
    while( true ) {
      pVar5 = (pthread_key_t)puVar6;
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_0165e830();
      lVar8 = lVar7;
      if (cVar2 == '\0') {
        local_50 = lVar7;
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_018fcb10();
        local_80 = local_50;
        local_78 = '\0';
        FUN_00d470c0();
        local_60 = local_40;
        local_58 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_58 = '\x01';
        FUN_01704190();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar8 = local_50;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      puVar6 = local_88;
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165c7f0(puVar6,local_70,&local_64);
      lVar7 = local_40;
      lVar1 = lVar8;
      if (local_40 != lVar8) break;
joined_r0x016d5661:
      lVar7 = lVar1;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) goto LAB_016d568c;
    }
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      lVar1 = lVar7;
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      goto joined_r0x016d5661;
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  } while (lVar7 != 0);
LAB_016d568c:
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


