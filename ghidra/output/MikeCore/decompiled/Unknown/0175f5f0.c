// Function: FUN_0175f5f0
// Address: 0175f5f0
// Size: 537 bytes
// Class: Unknown


void FUN_0175f5f0(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  undefined8 *in_RCX;
  longlong lVar6;
  longlong *unaff_RSI;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 *local_40;
  undefined4 local_34;
  
  lVar6 = *unaff_RSI;
  local_50 = param_4;
  local_44 = param_3;
  local_40 = in_RCX;
  local_34 = param_1;
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  pVar5 = (pthread_key_t)in_RCX;
  if (pvVar3 != (void *)0x0) {
    lVar6 = *unaff_RSI;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x60);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01770870();
  if (cVar1 == '\0') {
    local_80 = *unaff_RSI;
    local_78 = 0;
    local_70 = *param_2;
    local_68 = 0;
    local_60 = *local_40;
    local_58 = 0;
    FUN_01764ec0(&local_60,&local_70,0);
  }
  else {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017708f0();
    iVar2 = FUN_00e7d780();
    if (iVar2 == 0x4b0) {
      local_d0 = *param_2;
      local_c8 = 0;
      local_c0 = *local_40;
      local_b8 = 0;
      FUN_0175f840(local_34,&local_d0,(undefined1)local_44,local_50);
    }
    else {
      local_b0 = *unaff_RSI;
      local_a8 = 0;
      local_a0 = *param_2;
      local_98 = 0;
      local_90 = *local_40;
      local_88 = 0;
      FUN_01764090(local_34,&local_a0,0);
    }
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}


