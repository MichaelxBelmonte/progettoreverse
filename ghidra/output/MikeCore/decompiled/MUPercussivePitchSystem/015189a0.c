// Function: FUN_015189a0
// Address: 015189a0
// Size: 2392 bytes
// Class: MUPercussivePitchSystem


void FUN_015189a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4)

{
  byte bVar1;
  byte bVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  pthread_key_t in_ECX;
  pthread_key_t pVar7;
  undefined4 in_EDX;
  char unaff_SIL;
  undefined1 *local_res8;
  longlong local_118;
  undefined1 local_110;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  pthread_key_t local_b4;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined4 local_8c;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  local_c8 = param_2;
  local_c0 = param_4;
  local_b8 = in_EDX;
  local_b4 = in_ECX;
  local_88 = param_1;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165a070();
  local_68 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_68;
  }
  FUN_012e8920();
  local_58 = local_40;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_58;
  }
  FUN_012caf10();
  local_80 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_58;
  }
  FUN_012cade0();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  local_50 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01657380();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650620();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016670b0();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df10();
  local_60 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) goto LAB_01519296;
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_60;
  }
  FUN_0132d610();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    in_ECX = (pthread_key_t)local_60;
  }
  FUN_0132d900();
  lVar4 = local_40;
  local_8c = param_3;
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  if (unaff_SIL == '\0') {
    local_88 = FUN_00e7bdb0();
    uVar6 = FUN_00e7bdb0();
  }
  else {
    pvVar3 = _pthread_getspecific(in_ECX);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      in_ECX = (pthread_key_t)local_48;
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016553c0(local_88);
    pVar7 = 0;
    local_88 = FUN_016cb5f0(0,0);
    pvVar3 = _pthread_getspecific(pVar7);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar7 = (pthread_key_t)local_48;
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016553c0(local_c8);
    in_ECX = 0;
    uVar6 = FUN_016cb5f0(0,0);
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_118 = local_50;
  local_110 = 0;
  pVar7 = 1;
  FUN_01519670(1,&local_118);
  if (lVar4 == local_40) {
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
LAB_0151906e:
  }
  else if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
      goto LAB_0151906e;
    }
    lVar4 = local_40;
  }
  else {
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
      goto LAB_0151906e;
    }
    lVar4 = local_40;
  }
  if ((char)local_b8 != '\0') {
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = '\0';
    bVar1 = FUN_01514480(0,(undefined1)local_8c);
    local_70 = '\0';
    local_b0 = local_48;
    local_a8 = '\0';
    local_a0 = local_80;
    local_98 = '\0';
    pVar7 = (pthread_key_t)&local_a0;
    bVar2 = FUN_01515040(0,&local_b0,local_88,uVar6);
    if (((bVar2 | bVar1) == 1) && (local_c0 != (undefined1 *)0x0)) {
      *local_c0 = 1;
    }
  }
  if ((char)local_b4 != '\0') {
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_100 = 0;
    local_f8 = local_48;
    local_f0 = 0;
    local_e8 = local_80;
    local_e0 = 0;
    local_d8 = local_68;
    local_d0 = 0;
    bVar1 = FUN_01516720(0,&local_f8,local_88,uVar6);
    if ((bVar1 & local_res8 != (undefined1 *)0x0) == 1) {
      *local_res8 = 1;
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01519296:
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  lVar4 = local_58;
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return;
}


