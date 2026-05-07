// Function: FUN_01259dc0
// Address: 01259dc0
// Size: 875 bytes
// Class: GNString
// String references:
//   "%@ %Q %f %f"


undefined8 FUN_01259dc0(pthread_key_t param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong *plVar5;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  
  if (*(longlong *)(unaff_RSI + 200) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if ((char)local_60 == '\0') {
      if (local_68 == (undefined8 *)0x0) goto LAB_0125a10b;
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_68 == (undefined8 *)0x0) goto LAB_0125a10b;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507e40();
    if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (local_68 != (undefined8 *)0x0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507e40();
      pvVar2 = _pthread_getspecific(param_1);
      plVar5 = local_98;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        plVar5 = (longlong *)local_98[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar1 = FUN_01507f00();
      local_88 = DAT_026e3bc8;
      if (DAT_026e3bc8 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_78 = 0;
      local_70 = '\0';
      plVar4 = &local_88;
      (**(code **)(*plVar5 + 0x3c8))(plVar4,uVar1,&local_78);
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = FUN_01507970();
      local_40 = *(double *)(unaff_RSI + 0xe8);
      local_38 = *(double *)(unaff_RSI + 0xb8) + local_40;
      local_60 = 4;
      local_68 = &DAT_024c5048;
      local_50 = 0;
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
      local_58 = local_a8;
      local_50 = '\x01';
      local_68 = (undefined8 *)&DAT_025d1948;
      FUN_00d8cb40(local_38,&local_68);
      local_68 = &DAT_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    FUN_00d50b20();
  }
LAB_0125a10b:
  FUN_00d4ffd0();
  return unaff_RDI;
}


