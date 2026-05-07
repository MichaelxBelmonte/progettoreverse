// Function: FUN_016f1a80
// Address: 016f1a80
// Size: 538 bytes
// Class: Unknown


void FUN_016f1a80(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 local_68;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  local_44 = 0xffffffff;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar5 = &local_68;
  FUN_0165c340(puVar5,&local_50,&local_44);
  lVar7 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  do {
    while( true ) {
      pVar4 = (pthread_key_t)puVar5;
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_0165e830();
      if (cVar2 != '\0') {
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = '\0';
        uVar6 = local_68;
        local_60 = lVar7;
        FUN_0165b1b0(local_68,local_50,0);
        pVar4 = (pthread_key_t)uVar6;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar5 = &local_68;
      FUN_0165c7f0(puVar5,&local_50);
      lVar1 = local_40;
      if (local_40 != lVar7) break;
joined_r0x016f1c71:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) {
        return;
      }
    }
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      bVar8 = lVar7 != 0;
      lVar7 = lVar1;
      if (bVar8) {
        FUN_00d50b20();
      }
      goto joined_r0x016f1c71;
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    lVar7 = lVar1;
    if (lVar1 == 0) {
      return;
    }
  } while( true );
}


