// Function: FUN_0123ac80
// Address: 0123ac80
// Size: 636 bytes
// Class: MUAudioEffectRenderProcessorIdentifier


void FUN_0123ac80(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  undefined8 *puVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_48;
  char local_40;
  
  pVar4 = (pthread_key_t)param_1;
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00115cd0();
  *puVar1 = &DAT_025ccea8;
  puVar1[0x13] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
  FUN_00d500e0();
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*unaff_RSI + 0x478))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (puVar5[0xd] != local_48) {
    FUN_00d64850();
    lVar3 = puVar5[0xd];
    if (lVar3 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      puVar5[0xd] = local_48;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  lVar3 = unaff_RSI[0xe];
  FUN_00d64850();
  puVar5[0xe] = lVar3 + param_2;
  FUN_00d64910();
  pvVar2 = _pthread_getspecific(pVar4);
  puVar5 = puVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    puVar5 = (undefined8 *)puVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_00d64850();
  puVar5[0xf] = param_1;
  FUN_00d64910();
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = unaff_RSI[0x11];
  }
  else {
    lVar3 = unaff_RSI[0x11];
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_0123b010();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


