// Function: FUN_01aa9200
// Address: 01aa9200
// Size: 904 bytes
// Class: MUScaleBrowserItem


void FUN_01aa9200(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar4;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 local_90;
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
  undefined4 local_34;
  
  if ((((*unaff_RSI != 0) && (*(longlong *)(unaff_RDI + 0x20) != 0)) &&
      (*(longlong *)(unaff_RDI + 0x40) != 0)) && (*(longlong *)(unaff_RDI + 0x10) != 0)) {
    local_90 = param_1;
    local_34 = param_2;
    uVar4 = FUN_00cafd20();
    local_b0 = *unaff_RSI;
    local_a8 = 0;
    FUN_01aa8960(uVar4,&local_b0);
    lVar1 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01aa8f10();
    lVar2 = local_48;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = lVar1;
    local_80 = '\0';
    FUN_012e6a70();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a580(local_34);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012642b0(local_90);
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = '\0';
    local_78 = 0;
    uVar4 = FUN_01270710();
    if ((local_70 != '\0') && (local_78 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x90) != 0) {
      local_a0 = *unaff_RSI;
      local_98 = 0;
      FUN_01aa8960(uVar4,&local_a0);
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = local_48;
      local_60 = '\0';
      FUN_012e6a70();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a580(local_34);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012642b0(local_90);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = '\0';
      local_58 = 0;
      FUN_01270710();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x3c8))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


