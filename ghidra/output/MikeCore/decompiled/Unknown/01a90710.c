// Function: FUN_01a90710
// Address: 01a90710
// Size: 1066 bytes
// Class: Unknown


void FUN_01a90710(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x30) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      FUN_00d50b00();
      plVar1 = (longlong *)(unaff_RDI + 0x28);
      local_98 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x28) + 0x10))();
      FUN_00d50b00();
      local_98 = '\x01';
      local_100 = 0;
      local_f8 = '\0';
      local_a0 = plVar1;
      FUN_002771e0();
      FUN_00e86210();
      local_f0 = DAT_026dc288;
      if (DAT_026dc288 != 0) {
        FUN_00d50b00();
      }
      local_e8 = '\x01';
      FUN_00c841b0();
      local_60 = local_40;
      local_58 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      FUN_00cbadd0(&local_60,&local_100);
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        (**(code **)(*local_a0 + 0x10))();
        FUN_00d50b20();
      }
      local_88 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_88 = '\x01';
      local_e0 = 0;
      local_d8 = '\0';
      local_90 = plVar1;
      FUN_000be210();
      FUN_00e86210();
      local_d0 = DAT_026dc288;
      if (DAT_026dc288 != 0) {
        FUN_00d50b00();
      }
      local_c8 = '\x01';
      FUN_00c841b0();
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
      FUN_00cbadd0(&local_50,&local_e0);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        (**(code **)(*local_90 + 0x10))();
        FUN_00d50b20();
      }
      local_78 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_68 = 0;
      local_70 = *(longlong *)(unaff_RDI + 0x30);
      local_80 = plVar1;
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      local_c0 = 0;
      local_b8 = '\0';
      FUN_00cbadd0(&local_c0,&local_70);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x28) + 0x10))();
  FUN_00d50b00();
  local_a8 = '\x01';
  local_b0 = (longlong *)(unaff_RDI + 0x28);
  FUN_00cbb340();
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    (**(code **)(*local_b0 + 0x10))();
    FUN_00d50b20();
  }
  return;
}


