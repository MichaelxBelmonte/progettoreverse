// Function: FUN_01b40290
// Address: 01b40290
// Size: 1057 bytes
// Class: MUScaleCreationData


void FUN_01b40290(pthread_key_t param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01ab3520();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02513bd8;
  puVar4[10] = 0;
  *(undefined2 *)(puVar4 + 0xb) = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 9) = 0;
  FUN_00d500e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b41de0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b41ed0(DAT_0239394c);
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b41f40();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b41fa0(DAT_023908e0);
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b42010();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01b42070();
  pvVar5 = _pthread_getspecific(param_1);
  lVar1 = DAT_027e46c0;
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
    lVar1 = DAT_027e46c0;
  }
  DAT_027e46c0 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027e46c8;
  if (DAT_027e46c8 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar3;
  local_a0 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  FUN_00d31230(&local_98,&local_a8);
  local_38 = local_68;
  local_30 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_30 = '\x01';
  FUN_01b420f0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_80 = '\0';
  local_88 = puVar4;
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x3a0))();
  if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_70 = '\0';
  local_78 = puVar4;
  FUN_01d2a770();
  if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0xa0);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(unaff_RDI + 0xb0);
    if (plVar2 != (longlong *)0x0) {
      local_50 = 0;
      FUN_00d50b00();
      local_50 = '\x01';
      local_58 = lVar1;
      (**(code **)(*plVar2 + 0x8a0))();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    local_40 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0xa0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    FUN_01ab3680();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


