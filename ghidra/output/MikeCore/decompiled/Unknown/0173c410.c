// Function: FUN_0173c410
// Address: 0173c410
// Size: 522 bytes
// Class: Unknown


void FUN_0173c410(pthread_key_t param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  longlong local_40;
  char local_38;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar1[10] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  *puVar1 = &DAT_025fee18;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined2 *)(puVar1 + 0xd) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(param_1);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_0176f970();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (puVar4[0xc] != local_40) {
    FUN_00d64850();
    lVar3 = puVar4[0xc];
    if (lVar3 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      puVar4[0xc] = local_40;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  puVar4 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar4 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_017354e0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (puVar4[0xb] != local_40) {
    FUN_00d64850();
    lVar3 = puVar4[0xb];
    if (lVar3 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      puVar4[0xb] = local_40;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


