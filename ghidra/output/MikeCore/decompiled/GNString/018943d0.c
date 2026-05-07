// Function: FUN_018943d0
// Address: 018943d0
// Size: 752 bytes
// Class: GNString
// String references:
//   "%@.%@"


void FUN_018943d0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 local_e8;
  undefined1 local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if ((int)param_1 == 0) {
    if (*(longlong *)(unaff_RSI + 0x70) == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      local_e8 = *param_2;
      local_e0 = 0;
      FUN_01893d70(param_1,&local_e8);
      plVar1 = local_c8;
      pVar4 = (pthread_key_t)param_1;
      FUN_00d99300();
      lVar2 = *(longlong *)(unaff_RSI + 0x70);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018babe0();
      FUN_00d8ed10();
      local_d8 = local_b8;
      local_d0 = local_a8;
      FUN_00083ea0(2,&local_d0);
      FUN_00d8cb40();
      local_38 = local_58;
      local_30 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_30 = '\x01';
      (**(code **)(*plVar1 + 0x400))();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_88 = (undefined8 *)&DAT_0253d630;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_88 = &DAT_024c5048;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    plVar1 = (longlong *)*param_2;
    FUN_01893e60();
    local_48 = (longlong)local_88;
    local_40 = 0;
    if (local_80 == '\0') {
      if (local_88 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_40 = '\x01';
    (**(code **)(*plVar1 + 0x400))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


