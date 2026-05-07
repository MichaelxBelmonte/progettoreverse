// Function: FUN_017033e0
// Address: 017033e0
// Size: 1338 bytes
// Class: Unknown

void FUN_017033e0(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  void* pVar4;
  void*puVar5;
  uint64_t uVar6;
  uint64_t arg1;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  int iStack_5c;
  uint32_t local_58;
  int iStack_54;
  uint32_t local_50;
  int iStack_4c;
  uint32_t local_44;
  int64_t local_40;
  char local_38;
  
  if (arg1 >> 0x20 != 0) {
    local_44 = 0xffffffff;
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar5 = &local_58;
    FUN_0165c340(puVar5,&local_50,&local_44);
    lVar8 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    do {
      while( true ) {
        param_1 = (void*)puVar5;
        if (((iStack_54 != 0) && ((int)(arg1 >> 0x20) != 0)) &&
           (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0170363d;
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_0165e830();
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar6 = CONCAT44(iStack_54,local_58);
          FUN_0165b1b0(uVar6,CONCAT44(iStack_4c,local_50),0);
          param_1 = (void*)uVar6;
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar5 = &local_58;
        FUN_0165c7f0(puVar5,&local_50);
        lVar1 = local_40;
        if (local_40 != lVar8) break;
joined_r0x01703625:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        param_1 = (void*)puVar5;
        if (lVar8 == 0) goto LAB_0170363d;
      }
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar9 = lVar8 != 0;
        lVar8 = lVar1;
        if (bVar9) {
          FUN_00d50b20();
        }
        goto joined_r0x01703625;
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      param_1 = (void*)puVar5;
      lVar8 = lVar1;
    } while (lVar1 != 0);
  }
LAB_0170363d:
  if (param_2 >> 0x20 == 0) {
    return;
  }
  local_44 = 0xffffffff;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar5 = &local_50;
  FUN_0165c0f0(puVar5,param_2,&local_58,&local_44);
  lVar8 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (iStack_4c == 0) goto LAB_017037b9;
  iStack_5c = (int)(param_2 >> 0x20);
  if (iStack_5c == 0) goto LAB_017037b9;
  cVar2 = FUN_00e7c020();
  if (cVar2 == '\0') goto LAB_017037b9;
  pvVar3 = _pthread_getspecific((void*)puVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar5 = &local_58;
  FUN_0165c7f0(puVar5,&local_50,&local_44);
  lVar1 = local_40;
  lVar7 = lVar8;
  if (lVar8 != local_40) {
    if (local_38 != '\0') {
      bVar9 = lVar8 != 0;
      lVar8 = lVar1;
      if (bVar9) {
        FUN_00d50b20();
      }
      goto joined_r0x0170379e;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    lVar7 = lVar1;
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  lVar8 = lVar7;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
joined_r0x0170379e:
  do {
    if (lVar8 == 0) {
      return;
    }
LAB_017037b9:
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
        uVar6 = CONCAT44(iStack_54,local_58);
        FUN_0165b1b0(uVar6,CONCAT44(iStack_4c,local_50),0);
        pVar4 = (void*)uVar6;
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar5 = &local_58;
      FUN_0165c7f0(puVar5,&local_50);
      lVar1 = local_40;
      if (local_40 == lVar8) goto joined_r0x01703925;
      if (local_38 == '\0') break;
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar8 = lVar1;
      if (lVar1 == 0) {
        return;
      }
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar9 = lVar8 != 0;
    lVar8 = lVar1;
    if (bVar9) {
      FUN_00d50b20();
    }
joined_r0x01703925:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  } while( true );
}

