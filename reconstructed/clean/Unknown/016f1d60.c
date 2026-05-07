// Function: FUN_016f1d60
// Address: 016f1d60
// Size: 2059 bytes
// Class: Unknown

void FUN_016f1d60(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  void* pVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t arg1;
  uint8_t local_88 [8];
  uint64_t local_80;
  uint32_t local_78;
  int iStack_74;
  uint64_t local_70;
  int64_t local_68;
  uint64_t local_60;
  uint32_t local_54;
  uint32_t local_50;
  int iStack_4c;
  int64_t local_48;
  char local_40;
  int iVar8;
  
  local_54 = 0xffffffff;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_0165da90();
  if (cVar2 == '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar5 = &local_50;
    FUN_0165c0f0(puVar5,arg1,&local_78,&local_54);
    lVar1 = local_48;
    pVar4 = (void*)puVar5;
    if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_0165da40();
    iVar8 = (int)((uint64_t)arg1 >> 0x20);
    if (cVar2 == '\0') {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar5 = &local_54;
      FUN_0165db00(puVar5,local_88);
      pVar4 = (void*)puVar5;
      local_48 = arg1;
      FUN_00e7b970();
      local_70 = local_48;
      local_80 = FUN_0123fff0();
      local_48 = local_70;
      FUN_00e7b820();
      local_60 = local_48;
      FUN_0123ff00();
      FUN_0123fc50();
      local_68 = local_48;
      if (((local_40 == '\0') && (local_48 != 0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
        FUN_00d50b20();
      }
      local_80 = FUN_0123fff0();
      FUN_00e7b970();
      FUN_0123ff00();
      FUN_0123fc50();
      lVar6 = local_48;
      if (((local_40 == '\0') && (local_48 != 0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
        FUN_00d50b20();
      }
      if (((iVar8 == 0) || (iStack_4c == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
        if (((iStack_4c == 0) || (local_70._4_4_ == 0)) || (cVar2 = FUN_00e7c000(), cVar2 == '\0'))
        {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar7 = local_70;
          FUN_0165b1b0(local_70,CONCAT44(iStack_4c,local_50),0);
          pVar4 = (void*)lVar7;
        }
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = arg1;
        FUN_0165b1b0(arg1,local_70,1);
        pvVar3 = _pthread_getspecific((void*)lVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = local_60;
        FUN_0165b1b0(local_60,arg1,1);
        pVar4 = (void*)lVar7;
        if (((iStack_74 == 0) || (local_60._4_4_ == 0)) || (cVar2 = FUN_00e7c000(), cVar2 == '\0'))
        {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165b1b0(CONCAT44(iStack_74,local_78),local_60,0);
        }
      }
      else {
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = arg1;
        FUN_0165b1b0(arg1,local_70,0);
        pvVar3 = _pthread_getspecific((void*)lVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar7 = local_60;
        FUN_0165b1b0(local_60,arg1,1);
        pVar4 = (void*)lVar7;
        if (((local_60._4_4_ == 0) || (iStack_4c == 0)) || (cVar2 = FUN_00e7c000(), cVar2 == '\0'))
        {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165b1b0(CONCAT44(iStack_74,local_78),local_60,0);
        }
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    else if (((iVar8 == 0) || (iStack_4c == 0)) || (cVar2 = FUN_00e7c020(), cVar2 == '\0')) {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar6 = arg1;
      FUN_0165b1b0(arg1,CONCAT44(iStack_4c,local_50),0);
      pvVar3 = _pthread_getspecific((void*)lVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165b1b0(CONCAT44(iStack_74,local_78),arg1,0);
    }
    else {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165b1b0(CONCAT44(iStack_74,local_78),arg1,0);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

