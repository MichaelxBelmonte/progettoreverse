// Function: FUN_012fa130
// Address: 012fa130
// Size: 1286 bytes
// Class: MULSSGenerator


undefined8 * FUN_012fa130(ulonglong param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  double dVar7;
  double dVar8;
  ulonglong local_98;
  undefined8 local_88;
  ulonglong local_80;
  longlong local_78;
  char local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  char local_40;
  longlong local_38;
  
  local_60 = param_1;
  local_58 = param_3;
  local_50 = param_4;
  plVar2 = (longlong *)FUN_010eca10();
  (**(code **)(*plVar2 + 0x18))();
  FUN_012e8920();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  local_98 = param_1;
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
    local_98 = param_1;
  }
  FUN_012caf10();
  local_38 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_58._4_4_ == 0) {
    pvVar3 = _pthread_getspecific((pthread_key_t)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f7cb0();
    local_98 = 0;
    local_58 = FUN_016cb9d0(0,4);
  }
  if (local_50._4_4_ == 0) {
    pvVar3 = _pthread_getspecific((pthread_key_t)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_012f7cb0();
    dVar8 = (double)FUN_012f7d90();
    local_98 = 0;
    local_50 = FUN_016cb9d0(dVar7 + dVar8,4);
  }
  local_70 = '\0';
  local_78 = 0;
  while( true ) {
    pvVar3 = _pthread_getspecific((pthread_key_t)local_98);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = local_50;
    cVar1 = FUN_01252960(local_50,local_58,&local_78,&local_68);
    pVar4 = (pthread_key_t)uVar5;
    if (cVar1 == '\0') break;
    if ((local_68._4_4_ == 0) || ((local_58._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 != '\0'))))
    {
      local_68 = local_58;
    }
    if ((local_88._4_4_ == 0) || ((local_50._4_4_ != 0 && (cVar1 = FUN_00e7c020(), cVar1 != '\0'))))
    {
      local_88 = local_50;
    }
    local_48 = local_68;
    if (*(longlong *)(unaff_RSI + 0x60) == 0) {
      lVar6 = 0;
      local_80 = local_68;
    }
    else {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      FUN_01656470();
      local_80 = FUN_00e7cd00();
      lVar6 = *(longlong *)(unaff_RSI + 0x60);
    }
    local_48 = local_88;
    local_98 = local_88;
    if (lVar6 != 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)local_88);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c860();
      FUN_01656470();
      local_98 = FUN_00e7cd00();
    }
    uVar5 = local_98;
    if ((((int)(local_80 >> 0x20) != 0) && (uVar5 = local_98 >> 0x20, uVar5 != 0)) &&
       (cVar1 = FUN_00e7c000(), cVar1 != '\0')) {
      local_48 = local_68;
      local_80 = local_68;
      if (*(longlong *)(unaff_RSI + 0x60) != 0) {
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e7c860();
        FUN_01656470();
        local_80 = FUN_00e7cd00();
      }
      local_48 = local_80;
      FUN_00e7b820();
      local_98 = local_48;
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = local_78;
    local_40 = '\0';
    FUN_012502a0(local_98,local_80,0);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


