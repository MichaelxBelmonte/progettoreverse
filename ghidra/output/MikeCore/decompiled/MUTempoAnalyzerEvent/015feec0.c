// Function: FUN_015feec0
// Address: 015feec0
// Size: 530 bytes
// Class: MUTempoAnalyzerEvent
// String references:
//   "%@%@"


void FUN_015feec0(pthread_key_t param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  longlong local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar6 = (longlong *)*param_2;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (longlong *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  lVar4 = DAT_026e3bc8;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x48);
  if (DAT_026e3bc8 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar4;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  (**(code **)(*plVar6 + 0x3c8))(&local_90,uVar1,&local_80);
  puVar2 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025795a8;
  (*DAT_025795c0)();
  lVar4 = *(longlong *)(unaff_RSI + 0x40);
  if (lVar4 == 0) {
    FUN_00d8ede0();
  }
  else {
    local_38 = 0;
    FUN_00d50b00();
    local_38 = '\x01';
    local_40 = lVar4;
  }
  local_98 = local_40;
  FUN_00083ea0(2,&local_98);
  FUN_00d94d80();
  local_70 = (undefined8 *)&DAT_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &DAT_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


