// Function: FUN_01c8d230
// Address: 01c8d230
// Size: 769 bytes
// Class: MUBarSignature


undefined8 FUN_01c8d230(pthread_key_t param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  undefined8 *puVar8;
  longlong unaff_RDI;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  char local_38;
  
  local_50 = 0xffffffff;
  lVar1 = *(longlong *)(unaff_RDI + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar7 = (pthread_key_t)&local_70;
  FUN_016ca840();
  uVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_48 = FUN_0123ffd0();
  local_60 = local_70;
  local_58 = local_68;
  local_4c = local_50;
  lVar1 = *(longlong *)(unaff_RDI + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar8 = &local_58;
  FUN_016ca950(puVar8,&local_60,&local_4c);
  uVar3 = local_40;
  pVar7 = (pthread_key_t)puVar8;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (((uVar3 != 0) && (local_40 = FUN_0123ffd0(), local_40 >> 0x20 != 0)) &&
     ((local_48._4_4_ != 0 && (cVar5 = FUN_00e7c020(), cVar5 != '\0')))) {
    local_48 = FUN_0123ffd0();
  }
  local_60 = local_70;
  local_58 = local_68;
  local_4c = local_50;
  lVar1 = *(longlong *)(unaff_RDI + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ca9d0(&local_58,&local_60,&local_4c);
  uVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (uVar4 != 0) {
    local_40 = FUN_0123ffd0();
    if (((local_40 >> 0x20 != 0) && (local_48._4_4_ != 0)) &&
       (cVar5 = FUN_00e7c020(), cVar5 != '\0')) {
      local_48 = FUN_0123ffd0();
    }
    FUN_00d50b20();
  }
  if (uVar3 != 0) {
    FUN_00d50b20();
  }
  if (uVar2 != 0) {
    FUN_00d50b20();
  }
  return local_48;
}


