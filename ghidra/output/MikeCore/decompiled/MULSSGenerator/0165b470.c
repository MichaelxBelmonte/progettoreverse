// Function: FUN_0165b470
// Address: 0165b470
// Size: 753 bytes
// Class: MULSSGenerator


undefined8 * FUN_0165b470(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar7;
  longlong local_48;
  char local_40;
  
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) == 0)) {
    FUN_0123fbe0(param_1,4);
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00e7bdb0();
    FUN_0165b0c0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_025f68e8;
    puVar2[7] = &DAT_025f6c78;
    puVar2[8] = 0;
    *(undefined1 *)(puVar2 + 9) = 0;
    FUN_00d500e0();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      param_1 = puVar2;
    }
    FUN_0165b800();
    pVar6 = (pthread_key_t)param_1;
    lVar4 = *unaff_RSI;
    if (lVar4 != 0) {
      for (iVar7 = 0; pVar6 = (pthread_key_t)param_1, iVar7 < *(int *)(lVar4 + 0xc);
          iVar7 = iVar7 + 1) {
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar6 = (pthread_key_t)puVar2;
        }
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014ff950();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar1 = FUN_014ff960();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        param_1 = (undefined8 *)FUN_014ff9a0();
        FUN_0165b8b0(param_1,uVar1,0);
      }
      FUN_01660130();
    }
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165bd00();
    *unaff_RDI = puVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


