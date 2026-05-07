// Function: FUN_01ad07f0
// Address: 01ad07f0
// Size: 741 bytes
// Class: MUScalePanel
// String references:
//   "%@ %@"


void FUN_01ad07f0(pthread_key_t param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01768510();
  puVar1 = local_a8;
  if ((((local_a0 == '\0') && (local_a8 != (undefined8 *)0x0)) && (FUN_00d50b00(), local_a0 != '\0')
      ) && (local_a8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = (longlong)puVar1;
  plVar6 = (longlong *)*unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = (longlong *)*unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_01736c50();
  local_68 = DAT_026e3bc8;
  if (DAT_026e3bc8 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_58 = 0;
  local_50 = '\0';
  (**(code **)(*plVar6 + 0x3c8))(&local_68,uVar3,&local_58);
  lVar2 = local_38;
  local_c0 = local_38;
  FUN_00083ea0(2,&local_c0);
  FUN_00d8cb40();
  lVar5 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  local_a8 = (undefined8 *)&DAT_0253d630;
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_a8 = &DAT_024c5048;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


