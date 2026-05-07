// Function: FUN_01a90f20
// Address: 01a90f20
// Size: 965 bytes
// Class: Unknown


void FUN_01a90f20(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 != 0) {
    FUN_00d50b00();
    plVar1 = (longlong *)(unaff_RDI + 0x28);
    local_90 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x28) + 0x10))();
    FUN_00d50b00();
    local_90 = '\x01';
    local_80 = 0;
    local_88 = *(longlong *)(unaff_RDI + 0x30);
    local_98 = plVar1;
    if (local_88 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    FUN_00cbad80(&local_e8,&local_88,0xa0);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      (**(code **)(*local_98 + 0x10))();
      FUN_00d50b20();
    }
    local_70 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_70 = '\x01';
    local_d8 = 0;
    local_d0 = '\0';
    local_78 = plVar1;
    FUN_000be210();
    FUN_00e86210();
    local_c8 = DAT_026dc288;
    if (DAT_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    FUN_00c841b0();
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    FUN_00cbad30(&local_58,&local_d8,0xa0);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x10))();
      FUN_00d50b20();
    }
    local_60 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_60 = '\x01';
    local_b8 = 0;
    local_b0 = '\0';
    local_68 = plVar1;
    FUN_002771e0();
    FUN_00e86210();
    local_a8 = DAT_026dc288;
    if (DAT_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_00c841b0();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_00cbad30(&local_48,&local_b8,0xa0);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


