// Function: FUN_01652930
// Address: 01652930
// Size: 612 bytes
// Class: MULSSGenerator


void FUN_01652930(pthread_key_t param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  uint local_6c;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  undefined1 local_31;
  
  if (*(longlong *)(unaff_RDI + 0xa8) != 0) {
    local_31 = *(int *)(*(longlong *)(unaff_RDI + 0x98) + 0xc) == 0;
    local_6c = param_2;
    FUN_01650330();
    local_40 = local_c0;
    pvVar2 = _pthread_getspecific(param_1);
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      param_1 = (pthread_key_t)local_40;
    }
    FUN_01650330();
    local_58 = local_b0;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_50 = local_68;
    local_48 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    uVar1 = local_6c;
    local_48 = '\x01';
    local_90 = *unaff_RSI;
    local_88 = '\0';
    local_80 = 0;
    local_78 = '\0';
    FUN_012f0b60(&local_90,&local_50,1,local_6c & 0xff,&local_80);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar1 != '\0') {
      FUN_01651f90();
    }
  }
  return;
}


