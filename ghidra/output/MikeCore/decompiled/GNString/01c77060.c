// Function: FUN_01c77060
// Address: 01c77060
// Size: 1563 bytes
// Class: GNString


void FUN_01c77060(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong *unaff_RDI;
  undefined8 uVar5;
  longlong local_150;
  undefined1 local_148;
  longlong local_140;
  undefined1 local_138;
  longlong local_130;
  undefined1 local_128;
  longlong local_120;
  undefined1 local_118;
  longlong local_110;
  undefined1 local_108;
  longlong local_100;
  undefined1 local_f8;
  longlong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0;
  longlong local_a8;
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
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_a8 = *unaff_RDI;
  local_a0 = '\0';
  local_d0 = param_1;
  FUN_016cbba0();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  local_68 = local_50;
  local_60 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_60 = '\x01';
  FUN_016cbba0();
  local_58 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ea7c0(local_d0);
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = lVar3;
  local_90 = '\0';
  FUN_012cae50();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = local_58;
  if (param_2 == 0) {
    local_110 = local_58;
    local_108 = 0;
    local_100 = lVar3;
    local_f8 = 0;
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7210();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c0 = 1;
    uVar5 = FUN_00e7bdb0();
    FUN_01c45410(uVar5,local_c8);
    in_ECX = (pthread_key_t)uVar5;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_f0 = local_58;
    local_e8 = 0;
    local_e0 = lVar3;
    local_d8 = 0;
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_012e7210();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar5 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = 1;
    FUN_01c44700(uVar5,local_b8);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_015058d0();
  lVar1 = local_78;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_40 = lVar1;
  local_38 = 0;
  local_50 = lVar2;
  local_48 = 0;
  local_150 = lVar3;
  local_148 = 0;
  uVar5 = FUN_01c78b10(uVar5,&local_150);
  local_140 = lVar1;
  local_138 = 0;
  local_130 = lVar2;
  local_128 = 0;
  local_120 = lVar3;
  local_118 = 0;
  FUN_01c79050(uVar5,&local_120);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


