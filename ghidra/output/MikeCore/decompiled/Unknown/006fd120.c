// Function: FUN_006fd120
// Address: 006fd120
// Size: 1041 bytes
// Class: Unknown


void FUN_006fd120(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_006f3f00();
  (**(code **)(*local_d0 + 0x628))();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_c8 != '\0') {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02727ac8;
  if (DAT_02727ac8 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_80 = FUN_00e8b990();
  local_78 = 0;
  if (local_80 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  FUN_000be210();
  FUN_00e86210();
  local_b0 = DAT_026dc288;
  if (DAT_026dc288 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  FUN_00c841b0();
  local_70 = local_50;
  local_68 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  local_98 = '\0';
  local_a0 = 0;
  FUN_000bfbc0(&local_80,&local_c0,0xa0,&local_70);
  lVar1 = *(longlong *)(unaff_RDI + 0xd8);
  lVar4 = lVar1;
  if (lVar1 == local_40) goto LAB_006fd446;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar4 = 0;
      goto LAB_006fd3f8;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0xd8);
    *(longlong *)(unaff_RDI + 0xd8) = local_40;
    lVar4 = local_40;
  }
  else {
    local_38 = '\0';
    lVar4 = local_40;
LAB_006fd3f8:
    *(longlong *)(unaff_RDI + 0xd8) = lVar4;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_40;
  }
LAB_006fd446:
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


