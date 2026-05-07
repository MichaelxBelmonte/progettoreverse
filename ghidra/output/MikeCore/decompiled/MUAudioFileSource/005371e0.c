// Function: FUN_005371e0
// Address: 005371e0
// Size: 999 bytes
// Class: MUAudioFileSource


void FUN_005371e0(pthread_key_t param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  void *pvVar4;
  char *pcVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
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
  char local_40 [8];
  char local_38 [8];
  
  uVar3 = (undefined1)param_1;
  FUN_0051a2b0();
  FUN_00518030();
  *(undefined1 *)(unaff_RDI + 0x358) = param_2;
  *(undefined1 *)(unaff_RDI + 0x359) = uVar3;
  *(undefined1 *)(unaff_RDI + 0x35a) = param_3;
  lVar1 = *unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x308);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x308) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x360) == 0) {
    FUN_002d8020();
    lVar1 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    FUN_0051a2b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_0051a2b0();
    FUN_00d50b20();
  }
  if (*(longlong **)(unaff_RDI + 0x368) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x368) + 0x408))();
  }
  FUN_01f27fe0();
  FUN_0167ab60();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01537ab0();
  FUN_00d23310();
  lVar1 = local_48;
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  if (local_38[0] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_60 = '\x01';
  local_68 = lVar1;
  FUN_00b34cb0();
  (**(code **)(*local_98 + 0x88))();
  local_58 = local_48;
  local_50 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_50 = '\x01';
  FUN_000c24e0(&local_58,&local_68);
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_00518030();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    (**(code **)(*local_98 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x360) != 0) {
    *(undefined8 *)(unaff_RDI + 0x360) = 0;
    FUN_00d50b20();
  }
  return;
}


