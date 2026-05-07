// Function: FUN_016f1a80
// Address: 016f1a80
// Size: 538 bytes
// Class: Unknown

void FUN_016f1a80(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  void* pVar4;
  void*puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  bool bVar8;
  uint64_t local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  uint32_t local_44;
  int64_t local_40;
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
      pVar4 = (void*)puVar5;
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
        pVar4 = (void*)uVar6;
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

