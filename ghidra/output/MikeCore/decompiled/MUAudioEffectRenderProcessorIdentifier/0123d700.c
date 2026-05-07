// Function: FUN_0123d700
// Address: 0123d700
// Size: 520 bytes
// Class: MUAudioEffectRenderProcessorIdentifier


void FUN_0123d700(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_88;
  char local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  longlong local_50;
  char local_48;
  
  lVar3 = param_1;
  local_68 = param_3;
  plVar1 = (longlong *)FUN_00e8fc40();
  pVar4 = (pthread_key_t)lVar3;
  FUN_0123f100();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar4);
  plVar6 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar6 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_0123c760();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if (plVar6[0x14] != local_50) {
    FUN_00d64850();
    lVar3 = plVar6[0x14];
    if (lVar3 != local_50) {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      plVar6[0x14] = local_50;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (plVar6[0x16] != 0) {
      plVar6[0x16] = 0;
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = *unaff_RSI;
  local_70 = 0;
  uVar5 = local_68;
  FUN_0123cbf0(local_68,&local_78,param_4);
  pVar4 = (pthread_key_t)uVar5;
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  plVar6 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar6 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  plVar6[0x13] = param_1;
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


