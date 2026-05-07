// Function: FUN_002cae80
// Address: 002cae80
// Size: 1341 bytes
// Class: MUAudioFileSource
// String references:
//   "_elements"
//   "_subtracks"


void FUN_002cae80(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x498))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_000be210();
  lVar3 = FUN_00e86210();
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026fce90;
  if (DAT_026fce90 != 0) {
    FUN_00d50b00();
  }
  FUN_00c841b0();
  local_78 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)(unaff_RDI + 0xd0);
  local_a0 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0xd0) + 0x10))();
  FUN_00d50b00();
  local_a0 = '\x01';
  local_a8 = plVar1;
  (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x628))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  lVar2 = local_78;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  local_d8 = lVar2;
  local_d0 = '\0';
  FUN_00cbad30(&local_d8,&local_50,0xa0);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    (**(code **)(*local_a8 + 0x10))();
    FUN_00d50b20();
  }
  local_90 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_90 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  local_98 = plVar1;
  FUN_000823a0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_002cb208;
LAB_002cb1fa:
    local_68 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_002cb1fa;
LAB_002cb208:
    lVar5 = 0;
  }
  local_68 = '\x01';
  local_70 = lVar5;
  FUN_00cbad30(&local_70,&local_c8,0xa0);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    (**(code **)(*local_98 + 0x10))();
    FUN_00d50b20();
  }
  local_80 = 0;
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b00();
  local_80 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_88 = plVar1;
  FUN_000823a0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if (lVar5 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x28);
      goto joined_r0x002cb307;
    }
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
joined_r0x002cb307:
    if (lVar5 != 0) {
      local_58 = 0;
      FUN_00d50b00();
      goto LAB_002cb319;
    }
  }
  lVar5 = 0;
LAB_002cb319:
  local_58 = '\x01';
  local_60 = lVar5;
  FUN_00cbad30(&local_60,&local_b8,0xa0);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    (**(code **)(*local_88 + 0x10))();
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


